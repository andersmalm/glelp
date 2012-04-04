/*
* GLELP
* Anders Malm 2012
*/

#ifndef _GLELP_HELPERS_H_
#define _GLELP_HELPERS_H_

#include "..\glelp.h"

namespace glelpInternal
{
	bool initExtensionsStrings();
	void deleteExtensionsStrings();

	void getGLVersion();

	bool checkAvailable(const char* extension);
	bool checkVersion(char major, char mino);

	int getNumMissingExtensions();
	const char* getMissingExtensionsString(int i);

}
#endif // _GLELP_HELPERS_H_
