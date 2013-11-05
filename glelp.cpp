/*
* GLELP
* Anders Malm 2012
*/

#include "glelp.h"

namespace glelp
{

	typedef const char * (WINAPI * PFNWGLGETEXTENSIONSSTRINGARBPROC) (HDC hdc);
	PFNWGLGETEXTENSIONSSTRINGARBPROC wglGetExtensionsStringARB;

	bool findExtension(const char* extension, char* extensions)
	{
		char *current = extensions;
		while(true)
		{
			while((*extensions) != ' ')
			{
				if((*extensions) == 0)
					return false;
				extensions++;
			}

			(*extensions) = 0;

			if(0 == strcmp(current, extension))
				return true;

			extensions++;
			current = extensions;
		}
	}

	bool checkAvailable(const char* extension)
	{
		// Needed on windows
		wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)wglGetProcAddress("wglGetExtensionsStringARB");

		if(findExtension(extension, (char*)glGetString(GL_EXTENSIONS )))
			return true;

		/* Too check for Windows extensions
		if(findExtension(extension, (char*)wglGetExtensionsStringARB( wglGetCurrentDC() ) ))
			return true;
		*/

		return false;
	}

	/*
	* Checks if the asked for version is less or equal then the version
	* provided by the driver
	*/
	bool checkVersion(char major, char minor)
	{
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

}
