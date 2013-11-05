/*
* GLELP
* Anders Malm 2012
*/

#ifndef _GLELP_HELPERS_H_
#define _GLELP_HELPERS_H_

namespace glelpInternal
{
	bool initExtensionsStrings();
	void deleteExtensionsStrings();

	void getGLVersion();

	bool checkAvailable(const char* extension);
	bool checkVersion(char major, char mino);

}
#endif // _GLELP_HELPERS_H_
