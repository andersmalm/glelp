/*
* GLELP
* Anders Malm 2012
*/

#include "glelp.h"

namespace glelp
{
	bool initExtensionLoader()
	{
		init_WGL_ARB_extensions_string();

		glelpInternal::initExtensionsStrings();

		glelpInternal::getGLVersion();

		return true;
	}

	void closeExtensionLoader()
	{
		glelpInternal::deleteExtensionsStrings();
	}

	int getStatus()
	{
		return glelpInternal::getNumMissingExtensions();
	}

	const char* getMissingExtension(int i)
	{
		return glelpInternal::getMissingExtensionsString(i);
	}
}
