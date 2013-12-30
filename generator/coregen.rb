
$NonExtension = Array["__glcorearb_h_", "__wglext_h_", "WIN32_LEAN_AND_MEAN", "APIENTRY", "APIENTRYP", "GLAPI", "GLEXT_64_TYPES_DEFINED"]


$Legacy = Array["glCullFace", "glFrontFace", "glHint", "glLineWidth", "glPointSize", "glPolygonMode", "glScissor",
				"glTexParameterf", "glTexParameterfv", "glTexParameteri", "glTexParameteriv", "glTexImage1D", "glTexImage2D",
				"glDrawBuffer", "glClear" , "glClearColor", "glClearStencil", "glClearDepth", "glStencilMask", "glColorMask", "glDepthMask",
				"glDisable", "glEnable", "glFinish", "glFlush", "glBlendFunc", "glLogicOp", "glStencilFunc", "glStencilOp",
				"glDepthFunc", "glPixelStoref", "glPixelStorei", "glReadBuffer", "glReadPixels", "glGetBooleanv", "glGetDoublev", "glGetError",
				"glGetFloatv", "glGetIntegerv", "glGetString", "glGetTexImage", "glGetTexParameterfv", "glGetTexParameteriv",
				"glGetTexLevelParameterfv", "glGetTexLevelParameteriv", "glIsEnabled", "glDepthRange", "glViewport", "glDrawArrays",
				"glDrawElements", "glGetPointerv", "glPolygonOffset", "glCopyTexImage1D", "glCopyTexImage2D", "glCopyTexSubImage1D",
				"glCopyTexSubImage2D", "glTexSubImage1D", "glTexSubImage2D", "glBindTexture", "glDeleteTextures", "glGenTextures", "glIsTexture"]


def parsefile(infile, outcpp, outh)

	implementation = Array.new
	definitions = Array.new
	defExtern = Array.new

	current = ""
	previous = ""
	isVersion = false
	currentFunc = ""

	path = "../internals/"

	file = File.new(path+infile, "r")
	outfilecpp = File.new(path+outcpp, "w")
	outfileh = File.new(path+outh, "w")
	
	outfilecpp.puts "// GLELP, This file is generated"
	outfilecpp.puts "#include \"#{outh}\""
	outfilecpp.puts "#include \"../glelp.h\""
	outfilecpp.puts ""
	
	outfileh.puts "#ifndef _#{(outh.split ".")[0].upcase}_H_"
	outfileh.puts "#define _#{(outh.split ".")[0].upcase}_H_"
	outfileh.puts ""
	outfileh.puts "#include \"glcorearb.h\""
	outfileh.puts ""
	outfileh.puts "namespace glelp"
	outfileh.puts "{"	

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
					currentFunc = "init_" + ext
				end

				implementation.push "bool glelp::" + currentFunc + "()"
				implementation.push "{"	

				outfileh.puts "	bool " + currentFunc + "();"

				# currentFunc
				definitions.push ""
				definitions.push "//" + currentFunc

				defExtern.push ""
				defExtern.push "//" + currentFunc

				# SMALL HACK TO MAKE SURE THAT PREVIOUS VERSION WAS LOADED
				if isVersion

					vs = vn[1].split("_")
					if( !((vs[1].eql? "1") && (vs[2].eql? "0")) )
						implementation.push "	if(!glelp::checkVersion(" + vs[1] + ", " + vs[2] + ")) return false;"
					end
					implementation.push ""

					if !previous.eql? ""
						implementation.push "	if(!" + previous + "()) return false;"
						implementation.push ""
					end

					previous = currentFunc;
				
				else
					implementation.push "	if(!glelp::checkAvailable(\"" + current + "\")) return false;"

				end

			end
		
		elsif line.match(/^#endif/)

			str = line.split(" ")
			if str.size > 1
		
				# THIS IS THE END OF A BLOCK!
				if ((str[2].eql? current) || (str[2].eql? "WGL_WGLEXT_PROTOTYPES"))

					implementation.push ""
					implementation.push "	return true;"
					implementation.push "}"
					implementation.push ""
				
					current = ""
				end
			end
		end

		if !current.eql? ""
			if line.match(/^GLAPI/) || line.match(/^extern/)

				str = line.split(" ")

				extname = ""

				if str[1].eql? "const"
					extname = str[4]
				else
					extname = str[3]
				end

				procname = "PFN"+extname.upcase+"PROC"

				# BUILDS THE CORRECT CALL

				if($Legacy.include? extname)
					implementation.push "	" + extname + " = (" + procname + ")GetProcAddress(GetModuleHandle(TEXT(\"opengl32.dll\")), \"" + extname + "\");"
				else
					implementation.push "	" + extname + " = (" + procname + ")wglGetProcAddress(\"" + extname + "\");"
				end

				definitions.push procname + " " + extname + ";"

				defExtern.push "extern " + procname + " " + extname + ";";
			end
		end
	end

	outfileh.puts ""
	outfileh.puts "}"
	outfileh.puts ""
	outfileh.puts defExtern
	outfileh.puts ""
	outfileh.puts "#endif // _#{(outh.split ".")[0].upcase}_H_"

	outfilecpp.puts definitions
	outfilecpp.puts ""
	outfilecpp.puts implementation
	
	file.close
	outfilecpp.close

end

def parsefileWindowsHeader(infile, outcpp, outh)

	implementation = Array.new
	definitions = Array.new
	defExtern = Array.new

	current = ""
	previous = ""
	currentFunc = ""

	path = "../internals/"

	file = File.new(path+infile, "r")
	outfilecpp = File.new(path+outcpp, "w")
	outfileh = File.new(path+outh, "w")
	
	outfilecpp.puts "// GLELP, This file is generated"
	outfilecpp.puts "#include \"#{outh}\""
	outfilecpp.puts "#include \"../glelp.h\""
	outfilecpp.puts ""
	
	outfileh.puts "#ifndef _#{(outh.split ".")[0].upcase}_H_"
	outfileh.puts "#define _#{(outh.split ".")[0].upcase}_H_"
	outfileh.puts ""
	outfileh.puts "#include \"glcorearb.h\""
	outfileh.puts "#include \"wglext.h\""
	outfileh.puts ""
	outfileh.puts "namespace glelp"
	outfileh.puts "{"	

	while (line = file.gets)
		
		if line.match(/^#ifndef/)

			str = line.split(" ")
			ext = str[1]

			# THIS IS THE BEGINNING OF A BLOCK
			if(!$NonExtension.include? ext)
				
				current = ext

				currentFunc = "init_" + ext
				
				implementation.push "bool glelp::" + currentFunc + "()"
				implementation.push "{"	

				outfileh.puts "	bool " + currentFunc + "();"

				# currentFunc
				definitions.push ""
				definitions.push "//" + currentFunc

				defExtern.push ""
				defExtern.push "//" + currentFunc

				implementation.push "	if(!glelp::checkAvailable(\"" + current + "\")) return false;"
			end
		
		elsif line.match(/^#endif/)

			str = line.split(" ")
			if str.size > 1

		
				# THIS IS THE END OF A BLOCK!
				if ((str[2].eql? current) || (str[2].eql? "WGL_WGLEXT_PROTOTYPES"))

					implementation.push ""
					implementation.push "	return true;"
					implementation.push "}"
					implementation.push ""
				
					current = ""
				end
			end
		end

		if !current.eql? ""

			split = line.split(" ")

			#puts "JUST SPLIT THIS : " + line;
			
			if split.length > 1

				winapiPos = 1;
				if split[0].eql? "const"
					winapiPos = 2;
				end

				if (split[winapiPos].match(/^WINAPI/) || split[winapiPos].match(/^*WINAPI/))

					#str = line.split(" ")

					#puts "found : " + line;

					extname = split[winapiPos+1]

					#puts "extname : " + extname;

					procname = "PFN"+extname.upcase+"PROC"

					implementation.push "	" + extname + " = (" + procname + ")wglGetProcAddress(\"" + extname + "\");"

					definitions.push procname + " " + extname + ";"

					defExtern.push "extern " + procname + " " + extname + ";";
				end
			end
		end
	end

	outfileh.puts ""
	outfileh.puts "}"
	outfileh.puts ""
	outfileh.puts defExtern
	outfileh.puts ""
	outfileh.puts "#endif // _#{(outh.split ".")[0].upcase}_H_"

	outfilecpp.puts definitions
	outfilecpp.puts ""
	outfilecpp.puts implementation
	
	file.close
	outfilecpp.close

end

parsefile("glcorearb.h", "glelp_glcorearb.cpp", "glelp_glcorearb.h")

parsefileWindowsHeader("wglext.h", "glelp_wglext.cpp", "glelp_wglext.h")
