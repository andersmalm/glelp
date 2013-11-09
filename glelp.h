/*
* GLELP
* Anders Malm 2012
*/

#ifndef _GLELP_H_
#define _GLELP_H_

#include "internals\glelp_glcorearb.h"

namespace glelp
{
	bool checkAvailable(const char* extension);

	bool checkVersion(char major, char mino);
}
#endif // _GLELP_H_
