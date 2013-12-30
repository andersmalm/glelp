/*
* GLELP
* Anders Malm 2012
*/

#ifndef _GLELP_H_
#define _GLELP_H_

#include "glelp_defines.h"

#include "internals\glelp_glcorearb.h"
#include "internals\glelp_wglext.h"

namespace glelp
{
	bool loadExtensions();

	bool checkAvailable(const char* extension);

	bool checkVersion(char major, char mino);
}
#endif // _GLELP_H_
