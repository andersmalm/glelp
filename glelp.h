/*
* GLELP
* Anders Malm 2012
*/

#ifndef _GLELP_H_
#define _GLELP_H_

#include "internals\glelpHelpers.h"

#define GL_GLEXT_PROTOTYPES
#include "internals\glelp_glcorearb.h"

namespace glelp
{
	/**
	* @brief Initializes GLELP
	*
	* @return true on success, else false
	*/
	bool initExtensionLoader();

	/**
	* @brief Closes GLELP
	*/
	void closeExtensionLoader();
}
#endif // _GLELP_H_
