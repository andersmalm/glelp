// GLELP 0.1 - OpenGL Extenstions Helper
// copyright (c) 2016 Anders Malm - Ekoli / Odious ^ S/N ^ Censor

#include "glelp.h"

// UGLY HACK, I just want to use as little windows specific things as possible

// WGL_ARB_pixel_format
PFNWGLGETPIXELFORMATATTRIBIVARBPROC wglGetPixelFormatAttribivARB;
PFNWGLGETPIXELFORMATATTRIBFVARBPROC wglGetPixelFormatAttribfvARB;
PFNWGLCHOOSEPIXELFORMATARBPROC wglChoosePixelFormatARB;

// WGL_ARB_create_context
PFNWGLCREATECONTEXTATTRIBSARBPROC wglCreateContextAttribsARB;

//WGL_ARB_extensions_string
PFNWGLGETEXTENSIONSSTRINGARBPROC wglGetExtensionsStringARB;

namespace glelp
{
	/*
	* Checks if the asked for version is less or equal compared
	* to the version provided by the driver
	*/
	bool checkVersion(char major, char minor)
	{
		// this might be happening too quickly..
		if (glGetString == 0)
		{
			glGetString = (PFNGLGETSTRINGPROC)GetProcAddress(GetModuleHandle(TEXT("opengl32.dll")), "glGetString");
		}

		const GLubyte* version = glGetString(GL_VERSION);
		int GLmajor = version[0] - '0';
		int GLminor = version[2] - '0';

		if(major > GLmajor)
			return false;

		if(minor > GLminor)
		{
			if( major < GLmajor)
				return true;
			else
				return false;
		}

		return true;
	}

	bool loadHardcodedWindowsExtension()
	{
		if(!glelp::checkAvailable("WGL_ARB_pixel_format")) return false;
			wglGetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC)wglGetProcAddress("wglGetPixelFormatAttribivARB");
			wglGetPixelFormatAttribfvARB = (PFNWGLGETPIXELFORMATATTRIBFVARBPROC)wglGetProcAddress("wglGetPixelFormatAttribfvARB");
			wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC)wglGetProcAddress("wglChoosePixelFormatARB");

		if(!glelp::checkAvailable("WGL_ARB_create_context")) return false;
			wglCreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC)wglGetProcAddress("wglCreateContextAttribsARB");


		if(!checkAvailable("WGL_ARB_extensions_string")) return false;
			wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)wglGetProcAddress("wglGetExtensionsStringARB");
	
		return true;
	}

	bool loadExtensions()
	{
		// Check that we support the minimum version required
		if(!checkVersion(GLELP_GL_MAJOR_VERSION, GLELP_GL_MINOR_VERSION))
			return false;
		
		// load hard coded windows extensions needed
		if(!loadHardcodedWindowsExtension())
			return false;

		return initExtensions();
	}

	const char* wext;
	/*
		Quick hack for comparing two strings so we can live without std libraries
	*/
	bool compare(const char* str1, const char* str2)
	{
		unsigned int i = 0;
		while(true)
		{
			char c1 = str1[i];
			char c2 = str2[i];

			if(c1 != c2) return false;
			if((c1 == 0) && (c2 == 0)) return true;

			i++;
		}
	}

	/*
		Check each extensiom
	*/
	bool findExtension(const char* extension, const char* extensions)
	{
		unsigned char ci = 0;
		char current[256];
		while(true)
		{
			while((*extensions) != ' ')
			{
				if((*extensions) == 0)
					return false;
				
				current[ci] = (*extensions);

				extensions++;
				ci++;
			}

			current[ci] = 0;

			if(compare(current, extension))
				return true;

			extensions++;
			ci = 0;
		}
	}

	bool checkAvailable(const char* extension)
	{
		// Check windows extensions
		if(wglGetExtensionsStringARB == 0)
		{
			wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)wglGetProcAddress("wglGetExtensionsStringARB");

			HWND hWnd = GetActiveWindow();
			HDC hDC = GetDC(hWnd);
			wext = wglGetExtensionsStringARB(hDC);
		}

		if(findExtension(extension, (char*)glGetString(GL_EXTENSIONS)))
			return true;

		if (findExtension(extension, (char*)wext))
			return true;

		return false;
	}

}
