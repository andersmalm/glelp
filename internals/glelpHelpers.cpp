/*
* GLELP
* Anders Malm 2012
*/

#include "glelpHelpers.h"

#include <Windows.h>
#define GL_GLEXT_PROTOTYPES
#include "glcorearb.h"



//const char * WINAPI wglGetExtensionsStringARB (HDC hdc);
typedef const char * (WINAPI * PFNWGLGETEXTENSIONSSTRINGARBPROC) (HDC hdc);
PFNWGLGETEXTENSIONSSTRINGARBPROC wglGetExtensionsStringARB;


namespace glelpInternal
{
	int numGLExtensions = 0;
	char **availableGLExtensions = NULL;

	int numWGLExtensions = 0;
	char **availableWGLExtensions = NULL;

	int glMajor;
	int glMinor;

	bool initExtensionsStrings()
	{
		// OpenGL extensions

		// Needed on windows
		wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)wglGetProcAddress("wglGetExtensionsStringARB");

		const unsigned char *extString = glGetString(GL_EXTENSIONS);
		char *p = (char *)extString;
		int pl = (int)strlen(p);
		if(pl == 0) return false;

		// count available extensions
		int n = 0;
		for(int i = 0; i < pl; i++)
		{
			if(p[i] == ' ')
				n++;
		}
		
		availableGLExtensions = new char*[n];

		char extension[200];
		int ep = 0;
		for(int i = 0; i < n; i++)
		{
			int c = 0;
			while(p[ep] != ' ')
			{
				extension[c++] = p[ep++];
			}
			extension[c] = 0;
			availableGLExtensions[i] = new char[c+1];
			memcpy(availableGLExtensions[i], extension, c+1);

			ep++;
		}

		numGLExtensions = n;
		int numTotal = n;

		// Windows OpenGL extensions

		char *extWString = (char*)wglGetExtensionsStringARB( wglGetCurrentDC() );
		char *wp = (char *)extWString;
		int wpl = (int)strlen(wp);
		if(wpl == 0) return false;

		// count available extensions
		n = 0;
		for(int i = 0; i < wpl; i++)
		{
			if(wp[i] == ' ')
				n++;
		}
		
		availableWGLExtensions = new char*[n];

		ep = 0;
		for(int i = 0; i < n; i++)
		{
			int c = 0;
			while(wp[ep] != ' ')
			{
				extension[c++] = wp[ep++];
			}
			extension[c] = 0;
			availableWGLExtensions[i] = new char[c+1];
			memcpy(availableWGLExtensions[i], extension, c+1);

			ep++;
		}

		numWGLExtensions = n;
		numTotal += n;

		return true;
	}

	void deleteExtensionsStrings()
	{
		if(0 != numGLExtensions)
		{
			for(int i = 0; i < numGLExtensions; i++)
				delete[] availableGLExtensions[i];

			delete[] availableGLExtensions;
		}

		if(0 != numWGLExtensions)
		{
			for(int i = 0; i < numWGLExtensions; i++)
				delete[] availableWGLExtensions[i];

			delete[] availableWGLExtensions;
		}
	}

	void getGLVersion()
	{
		const GLubyte* version = glGetString(GL_VERSION);
		glMajor = version[0] - '0';
		glMinor = version[2] - '0';
	}

	bool checkAvailable(const char* extension)
	{
		for(int i = 0; i < numGLExtensions; i++)
		{
			char* e = availableGLExtensions[i];
			if(0 == strcmp(extension, availableGLExtensions[i]))
				return true;
		}

		for(int i = 0; i < numWGLExtensions; i++)
		{
			char* str = availableWGLExtensions[i];
			if(0 == strcmp(extension, availableWGLExtensions[i]))
				return true;
		}

		return false;
	}

	/*
	* Checks if the asked for version is less or equal then the version
	* provided by the driver
	*/
	bool checkVersion(char major, char minor)
	{
		if(major > glMajor)
			return false;

		if(minor > glMinor)
		{
			if( major < glMajor)
				return true;
			else
				return false;
		}

		return true;
	}

}
