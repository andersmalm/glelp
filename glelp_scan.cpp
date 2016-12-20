// GLELP 0.1 - OpenGL Extenstions Helper
// copyright (c) 2016 Anders Malm - Ekoli / Odious ^ S/N ^ Censor

#include <regex>
#include <iostream>
#include <filesystem>
#include <vector>
#include <cctype>
#include <set>

#include <Shlwapi.h>

struct Extension
{
	std::string name;
	int major;
	int minor;
	std::vector<std::string> functions;
};

std::vector<Extension*> extensions;

void printHelp()
{
	printf("example : glelp.exe -dir <dir>\n\n");
	printf("-dir <dir>  : is the directory where it will start looking for files to scan.\n");
	printf("-help       : will show this menu.\n");
	printf("-init       : will check in the folder <internal> for glcorearb.h, and create glelp internal files from it.\n");
}

void readDump()
{
	// get folder with some hacking..
	int size = 100;
	std::string path;
	path.reserve(size);

	char dpath[100];
	GetModuleFileName(NULL, dpath, size);
	PathRemoveFileSpec(dpath);

	path.assign(dpath);
	path.append("\\gl.dump");

	// load the dump file with all the gl information
	std::ifstream dfile(path);

	std::string str;

	Extension* current = 0;

	while (std::getline(dfile, str))
	{
		//std::cout << "found line.." << std::endl;

		if (str.find("GL_") != std::string::npos)
		{
			if (current != 0) extensions.push_back(current);

			current = new Extension;
			current->name = str;
			dfile >> current->major;
			dfile >> current->minor;
		}
		else if (str.find("END") != std::string::npos)
		{
			extensions.push_back(current);
		}
		else
		{
			if (str != "")
				current->functions.push_back(std::string(str));
		}
	}

	dfile.close();

}

void parseRoot(char* root)
{
	auto path = std::tr2::sys::initial_path<std::tr2::sys::path>() / std::tr2::sys::path(root);

	// if our path is a full path, just use it
	if (root[1] == ':')
	{
		path = std::tr2::sys::path(root);
	}

	//std::cout << "PATH : " << path << std::endl;
	
	bool ignore = false;
	int ignoreDepth = 0;

	int totalLines = 0;
	int totalFiles = 0;

	int major = 0;
	int minor = 0;
	std::set<std::string> defines;
	std::set<std::string> activeExtensions;

	for (auto it = std::tr2::sys::recursive_directory_iterator(path); it != std::tr2::sys::recursive_directory_iterator(); ++it)
	{

		const auto& file = it->path();


		//std::cout << "ENTRY : " << file << std::endl;

		std::string fstr = file.filename();

		if (ignore)
		{
			auto level = it.level();
			if (ignoreDepth == level)
			{
				ignore = false;
			}
			else
			{
				//std::cout << "ignored file " << file.directory_string() << std::endl;
				continue;
			}
		}

		// check if we should ignore folders
		if (std::tr2::sys::is_directory(file))
		{
			// system directory.. something which starts with a .
			// or if it's the glelp folder
			if (fstr[0] == '.' || fstr == "glelp")
			{
				// check if this is a system directory
				ignore = true;
				ignoreDepth = it.level();
				continue;
			}

			//std::cout << "folder : " << fstr << std::endl;
		}

		if (!ignore)
		{
			if (std::tr2::sys::is_regular_file(file))
			{

				auto matches_mask = [](const std::tr2::sys::path& file) {
					return std::regex_search(file.filename(), std::regex("(\\.h|\\.hpp|\\.c|\\.cpp)$"));
				};

				if (matches_mask(file))
				{
					totalFiles++;
			
					bool foundInFile = false;

					// open the current file
					std::ifstream ofile(file.directory_string());

					std::string str;

					// this is set when we have a line which has a non closed /* in it
					// then we ignore each line/partial line until we find a */
					bool insideMultilineComment = false;

					// read it, line by line
					while (std::getline(ofile, str))
					{
						totalLines++;
						
						// if we are inside a multiline comment
						if (insideMultilineComment)
						{
							std::size_t epos = str.find("*/");
							// When we find the end of the comment, we cut of the part before
							// the comment and check the remaing parts further down
							if (epos != std::string::npos)
							{
								str = str.substr(epos+2, std::string::npos);
								insideMultilineComment = false;
							}
							// this line should be ignored
							else
							{
								continue;
							}
						}
						
						// check if there is a comment on this line
						std::size_t pos = str.find("//");
						if (pos != std::string::npos)
						{
							str = str.substr(0, pos);
						}

						// might be multiple comments on the same row
						// like foo /* bar */ foo /* bar */ foo /* bar
						// in which we should keep the foo, and ignore the bar
						while (true)
						{
							std::size_t pos = str.find("/*");
							if (pos != std::string::npos)
							{
								// see if the comment ends on this line
								std::size_t epos = str.find("*/");
								// if it does, cut out the comment
								if (epos != std::string::npos)
								{
									str = str.erase(pos, (epos - pos)+2);
								}
								// nope, then we are inside a multiline comment
								// and should just start ignoring things,
								// but first we need to check whats before the comment
								else
								{
									insideMultilineComment = true;
									str = str.substr(0, pos);
									
									// break the while loop
									break;
								}
							}
							else
							{
								// break the while loop
								break;
							}
						}

						// let's assume coders only write one gl call on each line
						std::size_t glp = str.find("gl");
						if (glp != std::string::npos)
						{
							//std::cout << "found string : " << str << std::endl;

							// cut out the rest of the word.. until a space or a parentesis
							str = str.erase(0, glp);
							//std::cout << "became : " << str << std::endl;

							std::size_t ep = str.find_first_of(" (");
							if (ep != std::string::npos)
							{
								str = str.substr(0, ep);
								//std::cout << "managed to carve out : " << str << std::endl;

								// everyting which starts with gl is not a gl function
								bool extFound = false;
								
								// loop through all the extensions and core versions
								for (auto& e : extensions)
								{
									// check with all the functions
									for (auto& func : e->functions)
									{
										// did we find it?
										if (str == func)
										{
											// add the fucntion name
											defines.insert(std::string(func));
											activeExtensions.insert(std::string(e->name));

											// check if this require a higher opengl version
											int ov = major * 10 + minor;
											int nv = e->major * 10 + e->minor;
											if (nv > ov)
											{
												major = e->major;
												minor = e->minor;
											}

											//std::cout << "found function : " << func << std::endl;

											foundInFile = true;
											extFound = true;
											break;
										}
									}
									if (extFound) break;
								}
							}

						}
					}

					//if (foundInFile)
					//	std::cout << "found gl call in " << file.filename() << std::endl;

					// close the current file
					ofile.close();
				}
			}
			
		}
	}

	std::cout << totalLines << " lines in " << totalFiles << " files was analysed." << std::endl;
	std::cout << "Minimum Required OpenGL version " << major << "." << minor << std::endl;
	/*
	std::cout << std::endl << "Using Extensions and Core versions" << std::endl;
	for (auto& ae : activeExtensions)
	{
		std::cout << " " << ae << std::endl;
	}
	*/

	std::cout << std::endl;

	std::ofstream dfile("glelp_defines.h");
	dfile << "#ifndef _GLELP_DEFINES_H_" << std::endl;
	dfile << "#define _GLELP_DEFINES_H_" << std::endl << std::endl;

	dfile << "#define GLELP_GL_MAJOR_VERSION " << major << std::endl;
	dfile << "#define GLELP_GL_MINOR_VERSION " << minor << std::endl << std::endl;

	for (auto& v : defines)
	{
		dfile << "#define using_" << v << std::endl;
	}
	dfile << std::endl << "#endif // _GLELP_DEFINES_H_" << std::endl << std::endl;
	dfile.close();
}

void init()
{
	std::cout << "checking for glcorearb.h" << std::endl;
	std::ifstream file("glcorearb.h");
	std::string str;


	Extension* current = 0;
	bool hasCurrent = false;
	
	while (std::getline(file, str))
	{
		// check for #ifndef ...
		// ignore WIN32_LEAN_AND_MEAN, APIENTRY, APIENTRYP, GLAPI, GLEXT_64_TYPES_DEFINED
		if (!hasCurrent)
		{
			if (str.find("#ifndef") != std::string::npos)
			{
				auto c1 = str.find("__glcorearb_h_");
				auto c2 = str.find("WIN32_LEAN_AND_MEAN");
				auto c3 = str.find("APIENTRY");
				auto c4 = str.find("APIENTRYP");
				auto c5 = str.find("GLAPI");
				auto c6 = str.find("GLEXT_64_TYPES_DEFINED");

				if ((c1 != std::string::npos) ||
					(c2 != std::string::npos) ||
					(c3 != std::string::npos) ||
					(c4 != std::string::npos) ||
					(c5 != std::string::npos) ||
					(c6 != std::string::npos))
				{
					continue;
				}
	
				current = new Extension;
				current->major = 0;
				current->minor = 0;
				hasCurrent = true;

				current->name = str.substr(8);
		
				if (str.find("GL_VERSION_") != std::string::npos)
				{
					std::string version = current->name.substr(11);
					current->major = version[0] - '0';
					current->minor = version[2] - '0';
				}

			}
		}
		else
		{
			if (str.find("#endif") != std::string::npos)
			{
				// close on the right endif
				if (str.find(current->name) != std::string::npos)
				{
					extensions.push_back(current);

					current = 0;
					hasCurrent = false;
					continue;
				}
			}
			if (str.find(" APIENTRY ") != std::string::npos)
			{
				std::size_t pos = str.find(" APIENTRY ");
				std::string name = str.substr(pos+10);
				pos = name.find(" ");
				name = name.substr(0, pos);

				current->functions.push_back(std::string(name));

				std::string procname = name;
				for (auto& x : procname)
				{
					x = toupper(x);
				}
			}
			else if (str.find("*APIENTRY ") != std::string::npos)
			{
				std::size_t pos = str.find("*APIENTRY ");
				std::string name = str.substr(pos + 10);
				pos = name.find(" ");
				name = name.substr(0, pos);

				current->functions.push_back(std::string(name));

				std::string procname = name;
				for (auto& x : procname)
				{
					x = toupper(x);
				}
			}
		}
	}

	file.close();

	// Store result

	std::ofstream cfile("glelp_include.cpp");
	std::ofstream hfile("glelp_include.h");
	std::ofstream dfile("gl.dump");

	cfile << "// Generated file" << std::endl << std::endl;
	cfile << "#include \"glelp_include.h\"" << std::endl << std::endl;

	hfile << "#pragma once" << std::endl << std::endl;
	hfile << "#include \"glcorearb.h\"" << std::endl;
	hfile << "#include \"glelp_defines.h\"" << std::endl << std::endl;
	hfile << "namespace glelp" << std::endl;
	hfile << "{" << std::endl;
	hfile << " bool initExtensions();" << std::endl;
	hfile << "}" << std::endl;

	for (auto& e : extensions)
	{
		cfile << "// " << e->name << std::endl;
		hfile << "// " << e->name << std::endl;

		dfile << e->name << std::endl;
		dfile << e->major << std::endl;
		dfile << e->minor << std::endl;

		for (auto& func : e->functions)
		{
			std::string procname = func;
			for (auto& x : procname)
			{
				x = toupper(x);
			}
			hfile << "#ifdef using_" << func << std::endl;
			hfile << "extern PFN" << procname << "PROC " << func << ";" << std::endl;
			hfile << "#endif" << std::endl;

			cfile << "#ifdef using_" << func << std::endl;
			cfile << "PFN" << procname << "PROC " << func << ";" << std::endl;
			cfile << "#endif" << std::endl;

			dfile << func << std::endl;

		}
	}
	
	dfile << "END" << std::endl;

	cfile << std::endl << "bool glelp::initExtensions()" << std::endl;
	cfile << "{" << std::endl;

	for (auto& e : extensions)
	{
		cfile << "// " << e->name << std::endl;

		for (auto& func : e->functions)
		{
			std::string procname = func;
			for (auto& x : procname)
			{
				x = toupper(x);
			}

			cfile << "#ifdef using_" << func << std::endl;
			
			auto major = e->major;
			auto minor = e->minor;
			
			if (major == 0) major = 100;

			if ((major <= 1) && (minor <= 1))
			{
				cfile << func << " = (PFN" << procname << "PROC)GetProcAddress(GetModuleHandle(TEXT(\"opengl32.dll\")), \""
					<< func << "\");" << std::endl;
				cfile << "if (" << func << " == 0) return false;" << std::endl;
			}
			else
			{
				cfile << func << " = (PFN" << procname << "PROC)wglGetProcAddress(\"" << func << "\");" << std::endl;
				cfile << "if (" << func << " == 0) return false;" << std::endl;

			}
			cfile << "#endif" << std::endl;


		}
	}

	cfile << "return true;" << std::endl;
	cfile << "}" << std::endl;

	cfile.close();
	hfile.close();
}


int main(int argc, char* argv[])
{
	std::cout << "GLELP 0.1 - OpenGL Extenstions Helper" << std::endl;
	std::cout << "2016 (c) Anders Malm - Ekoli / Odious ^ S/N ^ Censor" << std::endl << std::endl;

	if (argc == 1)
	{
		std::cout << "ERROR - You need to provide inputs." << std::endl << std::endl;
		printHelp();
		return 1;
	}

	for (int arg = 1; arg < argc; arg++)
	{
		std::string str(argv[arg]);

		if ((0 == str.compare("-dir")) && ((arg+1)<argc))
		{
			//std::cout << "Analysing folder : " << argv[arg+1] << std::endl;
			readDump();
			parseRoot(argv[++arg]);
			return 0;
		}
		else if (0 == strcmp("-init", argv[arg]))
		{
			init();
			return 0;
		}
		else if (0 == strcmp("-help", argv[arg]))
		{
			std::cout << "found help" << std::endl;;
			printHelp();
			return 0;
		}
		else
		{
			std::cout << "ERROR - Unknown argument : " <<  argv[arg] << std::endl;
			return 0;
		}
	}


	return 0;
}
