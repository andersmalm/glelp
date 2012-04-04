#
# GLELP
# Anders Malm 2012
#

class Extension

	attr_accessor :name, :defines, :functionName, :functionPointer, :functionDeclaration, :reuseEntryPoint
	
	def initialize
		@defines = Array.new
		@functionName = Array.new
		@functionPointer = Array.new
		@functionDeclaration = Array.new
		@reuseEntryPoint = Array.new
	end

end

extensions = Array.new

def writeExtensionFiles(extensions)
	headerFile = File.new("glelpDefines.h", "w")

	headerFile.puts "#ifndef _GLELP_DEFINES_H_"
	headerFile.puts "#define _GLELP_DEFINES_H_"
	
	headerFile.puts ""
	headerFile.puts "#include \"../internals/glelpInternalInclude.h\""
	headerFile.puts ""
	
	headerFile.puts "#define NUM_EXTENSIONS #{extensions.length}"
	headerFile.puts ""
	
	
	headerFile.puts "namespace glelp"
	headerFile.puts "{"
	i = 0
	until i == extensions.length
		headerFile.puts "	void init_#{extensions[i].name}();"
		i += 1
	end
	
	headerFile.puts "}"
	
	i = 0
	until i == extensions.length
		j = 0
		headerFile.puts ""
		headerFile.puts "// #{extensions[i].name}"
		until j == extensions[i].defines.length
			headerFile.puts extensions[i].defines[j]
			j += 1
		end
		i += 1
	end
	
	headerFile.puts ""
	
	i = 0
	until i == extensions.length
		j = 0
		headerFile.puts ""
		headerFile.puts "// #{extensions[i].name}"
		until j == extensions[i].functionDeclaration.length
			headerFile.puts extensions[i].functionDeclaration[j]
			headerFile.puts "extern #{extensions[i].functionPointer[j]} #{extensions[i].functionName[j]};"
			j += 1
		end
		
		i += 1
	end
	
	headerFile.puts ""
	headerFile.puts "#endif"
	headerFile.puts ""
		
	headerFile.close
	
	cppFile = File.new("glelpDefines.cpp", "w")
	
	cppFile.puts "#include \"glelpDefines.h\""
	cppFile.puts ""
	
	i = 0
	until i == extensions.length
		j = 0
		cppFile.puts ""
		cppFile.puts "// #{extensions[i].name}"
		until j == extensions[i].functionPointer.length
			cppFile.puts "#{extensions[i].functionPointer[j]} #{extensions[i].functionName[j]};"
			j += 1
		end

		cppFile.puts ""
		cppFile.puts "void glelp::init_#{extensions[i].name}()"
		cppFile.puts "{"		
		if extensions[i].name.start_with?("OpenGL")
			str = extensions[i].name.split("_")
			cppFile.puts "	if(!glelpInternal::checkVersion(#{str[1]}, #{str[2]}))"
			cppFile.puts "		return;"
		elsif extensions[i].name.eql?("WGL_ARB_extensions_string")
			cppFile.puts ""
		else
			cppFile.puts "	if(!glelpInternal::checkAvailable(\"#{extensions[i].name}\"))"
			cppFile.puts "		return;"
		end
		cppFile.puts ""
			
		j = 0
		until j == extensions[i].functionPointer.length
			cppFile.puts "	#{extensions[i].functionName[j]} = (#{extensions[i].functionPointer[j]})wglGetProcAddress(\"#{extensions[i].functionName[j]}\");"
			j += 1
		end
		
		if extensions[i].name.start_with?("OpenGL")
			cppFile.puts ""
			j = 0
			until j == extensions[i].reuseEntryPoint.length
				cppFile.puts "	init_#{extensions[i].reuseEntryPoint[j]}();"
				j += 1
			end
		end
		
		# if OpenGL, load lesser revisions
		if extensions[i].name.start_with?("OpenGL")
			cppFile.puts ""
			
			# Hacked in for different OpenGL versions
			if extensions[i].name.eql? "OpenGL_4_1"
				cppFile.puts "	init_OpenGL_4_0();"
			elsif extensions[i].name.eql? "OpenGL_4_0"
				cppFile.puts "	init_OpenGL_3_3();"
			elsif extensions[i].name.eql? "OpenGL_3_3"
				cppFile.puts "	init_OpenGL_3_2();"
			elsif extensions[i].name.eql? "OpenGL_3_2"
				cppFile.puts "	init_OpenGL_3_1();"
			elsif extensions[i].name.eql? "OpenGL_3_1"
				cppFile.puts "	init_OpenGL_3_0();"
			elsif extensions[i].name.eql? "OpenGL_2_1"
				cppFile.puts "	init_OpenGL_2_0();"
			elsif extensions[i].name.eql? "OpenGL_2_0"
				cppFile.puts "	init_OpenGL_1_5();"
			elsif extensions[i].name.eql? "OpenGL_1_5"
				cppFile.puts "	init_OpenGL_1_4();"
			elsif extensions[i].name.eql? "OpenGL_1_4"
				cppFile.puts "	init_OpenGL_1_3();"
			elsif extensions[i].name.eql? "OpenGL_1_3"
				cppFile.puts "	init_OpenGL_1_2();"
			end
			
			cppFile.puts ""
		end
		
		cppFile.puts "}"
		
		i += 1
	end	
	
	cppFile.puts ""
	cppFile.close
end

def getExtension(name, extensions)

	i = 0
	until i == extensions.length
		if (extensions[i].name).eql?(name)
			return extensions[i]
		end
	  i += 1
	end

	puts "Create new extension : " + name
	
	e = Extension.new()
	e.name = name
	extensions.push(e)
	
	return e
end

def readDefines(file, define, ext)

	ext.defines.push define
	
	line = file.gets
	until line.match(/^#endif/)
	
		ext.defines.push line
		line = file.gets
	end
end

def readFunctions(file, ext)
	
	line = file.gets
	if line.match(/^#endif/)
		return
	end
	
	line = file.gets
	
	if ext.name.start_with?("OpenGL")
		# read all the reuse entry points so those can be loaded
		until line.match(/#ifdef/)
			if line.start_with?("/* ARB")
				str = line.split(" ")
				
				# fix for GL_VERSION_3_3, /* ARB_explicit_attrib_location, but it has none */
				if str[1].end_with?(",")
					str[1] = str[1][0..(str[1].length-2)]
				end
				reuse = "GL_#{str[1]}"
				ext.reuseEntryPoint.push reuse
				puts "#{ext.name} has reuse : #{reuse}"
			end
			line = file.gets
			if line.match(/#endif/)
				return
			end
		end
	end
	
	# read function names
	until line.match(/^#endif/)
		str = line.split("APIENTRY ")
		if str.length == 1
			str = line.split("WINAPI ")
		end
		
		if str.length > 1
			name = str[1].split(" ")
			
			ext.functionName.push(name[0])
		end
		line = file.gets
	end
	
	line = file.gets
	
	# read function pointer defines
	until line.match(/^#endif/)
		str = line.split("APIENTRYP ")
		if str.length == 1
			str = line.split("WINAPI * ")
		end
		
		if str.length > 1
			name = str[1].split(" ")
						
			ext.functionPointer.push(name[0][0..name[0].size-2])
			ext.functionDeclaration.push(line)
		end
		line = file.gets
	end
	
	
end

def parsefile(name, extensions)

	functions = 0
	defines = 0

	file = File.new(name, "r")
	while (line = file.gets)
		
		# if it's the start of a new section, check what kind of section it is
		if line.match(/^#ifndef/)
			str = line.split(" ")
			if (str[1].eql?("__glext_h_") ||
				str[1].eql?("__wglext_h_") ||
				str[1].eql?("APIENTRY") ||
				str[1].eql?("APIENTRYP") ||
				str[1].eql?("GLAPI") ||
				str[1].eql?("GLEXT_64_TYPES_DEFINED"))
			# don't load deprecated extensions
			elsif !(str[1].end_with?("DEPRECATED"))

				if str[1].match(/^GL_VERSION/)
					ver = str[1].split("_")
					str[1] = "OpenGL_#{ver[2]}_#{ver[3]}"
				end
				
				#found extension, either create a new or get a created object
				ext = getExtension(str[1], extensions)
			
				# next string will show what's going on..
				line = file.gets
				
				str = line.split(" ")
				
				if( str.size > 2 && (str[0].match(/^#define/) && str[2].match(/^1/)))
					functions+=1
					readFunctions(file, ext)
				elsif !line.match(/^#endif/)
					defines+=1
					readDefines(file, line, ext)
				end
				
			end
		end
	
	end
	file.close
	
	puts "num extensions : " + extensions.length.to_s
	
end

parsefile("glext.h", extensions)
parsefile("wglext.h", extensions)

writeExtensionFiles(extensions)

