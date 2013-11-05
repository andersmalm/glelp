/*
* GLELP
* Anders Malm 2012
*/

#include "glelp.h"

namespace glelp
{
	bool initExtensionLoader()
	{
		glelpInternal::initExtensionsStrings();

		glelpInternal::getGLVersion();

		return true;
	}

	void closeExtensionLoader()
	{
		glelpInternal::deleteExtensionsStrings();
	}

}
