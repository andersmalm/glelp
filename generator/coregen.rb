
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


$defineList = Array.new

def parsefile(infile, outcpp, outh)

	implementation = Array.new
	definitions = Array.new
	defExtern = Array.new
	dump = Array.new

	current = ""
	previous = ""
	isVersion = false
	currentFunc = ""
	currentDefine = ""

	path = "../internals/"

	file = File.new(path+infile, "r")
	outfilecpp = File.new(path+outcpp, "w")
	outfileh = File.new(path+outh, "w")

	dumpfile = File.new("../internals/gl.dump", "w")
	
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
	outfileh.puts "	bool initExtensions();"

	implementation.push "bool glelp::initExtensions()"
	implementation.push "{"

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
					currentDefine =  "define_core" + vn[1]
					dump.push "CORE core" + vn[1]
				else
					currentDefine = "define_" + ext
					dump.push "EXTENSION " + ext
				end

				implementation.push "#ifdef " + currentDefine

				$defineList.push "#define " + currentDefine + " 1"

				# currentFunc
				definitions.push ""
				definitions.push "//" + currentFunc
				definitions.push "#ifdef " + currentDefine

				defExtern.push ""
				defExtern.push "//" + currentFunc
				defExtern.push "#ifdef " + currentDefine

				# SMALL HACK TO MAKE SURE THAT PREVIOUS VERSION WAS LOADED
				if isVersion

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
					implementation.push "#endif"
					implementation.push ""

					definitions.push ""
					definitions.push "#endif"
					definitions.push ""

					defExtern.push ""
					defExtern.push "#endif"
					defExtern.push ""
				
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

				dump.push extname
				implementation.push "#ifdef using_" + extname;

				if($Legacy.include? extname)
					implementation.push "	" + extname + " = (" + procname + ")GetProcAddress(GetModuleHandle(TEXT(\"opengl32.dll\")), \"" + extname + "\");"
				else
					implementation.push "	" + extname + " = (" + procname + ")wglGetProcAddress(\"" + extname + "\");"
				end

				implementation.push "#endif";

				definitions.push "#ifdef using_" + extname;
				definitions.push procname + " " + extname + ";"
				definitions.push "#endif"

				defExtern.push "#ifdef using_" + extname;
				defExtern.push "extern " + procname + " " + extname + ";";
				defExtern.push "#endif"
			end
		end
	end

	implementation.push "	return true;"
	implementation.push "}"

	outfileh.puts ""
	outfileh.puts "}"
	outfileh.puts ""
	outfileh.puts defExtern
	outfileh.puts ""
	outfileh.puts "#endif // _#{(outh.split ".")[0].upcase}_H_"

	outfilecpp.puts definitions
	outfilecpp.puts ""
	outfilecpp.puts implementation
	
	dumpfile.puts dump

	file.close
	outfilecpp.close
	dumpfile.close
end

parsefile("glcorearb.h", "glelp_glcorearb.cpp", "glelp_glcorearb.h")
