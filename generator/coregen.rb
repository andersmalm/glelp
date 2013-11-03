
$NonExtension = Array["__glcorearb_h_", "WIN32_LEAN_AND_MEAN", "APIENTRY", "APIENTRYP", "GLAPI", "GLEXT_64_TYPES_DEFINED"]

def parsefile(inname, outname)

	current = ""
	previous = ""
	isVersion = false
	currentFunc = ""

	file = File.new(inname, "r")
	outfile = File.new(outname, "w")

	outfile.puts "// GLELP, This file is generated"

	while (line = file.gets)
		
		if line.match(/^#ifndef/)

			str = line.split(" ")
			ext = str[1]

			# THIS IS THE BEGINNING OF A BLOCK
			if(!$NonExtension.include? ext)
				
				isVersion = false
				current = ext

				if ext.match(/^GL_VERSION_/)

					isVersion = true

					vn = ext.split("VERSION")
					currentFunc =  "init" + vn[1]

				else
					currentFunc = "init" + ext
				end

				outfile.puts "void " + currentFunc + "()"
				outfile.puts "{"

				# SMALL HACK TO MAKE SURE THAT PREVIOUS VERSION WAS LOADED
				if isVersion

					vs = vn[1].split("_")
					outfile.puts "	if(!checkVersion(" + vs[1] + ", " + vs[2] + ")) return;"
					outfile.puts ""

					if !previous.eql? ""
						outfile.puts "	if(!" + previous + "()) return;"
						outfile.puts ""
					end

					previous = currentFunc;
				
				else
					outfile.puts "	checkAvailable(\"" + current + "\");"

				end

			end
		
		elsif line.match(/^#endif/)

			str = line.split(" ")
			if str.size > 1
		
				# THIS IS THE END OF A BLOCK!
				if str[2].eql? current

					outfile.puts "}"
					outfile.puts ""
				end

			end
		end

		if line.match(/^GLAPI/)

			str = line.split(" ")

			extname = ""

			if str[1].eql? "const"
				extname = str[4]
			else
				extname = str[3]
			end

			procname = "PFN"+extname.upcase+"PROC"

			# BUILDS THE CORRECT CALL
			#glGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)wglGetProcAddress("glGetSubroutineUniformLocation");
			outfile.puts "	" + extname + " = (" + procname + ")wglGetProcAddress(\"" + extname + "\");"

		end
	
	end
	
	file.close
	outfile.close

end

parsefile("glcorearb.h", "glelp.cpp")
