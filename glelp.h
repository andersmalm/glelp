/*
* GLELP
* Anders Malm 2012
*/

#ifndef _GLELP_H_
#define _GLELP_H_

#include "internals\glelpInternalInclude.h"

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

	/**
	* @brief Returns the current status
	*
	* Each extension is loaded as glelp::init_<extension>(); and
	* extension loading never complains, they just return.
	* After calling all the extensions you which to load you
	* call this function and just make sure that there wasn't any
	* problems. The function returns the number of missing extensions
	* which means that a return value of zero is what you looking for.
	*
	* @return 0 (zero) on success, otherwise the number of missing extensions.
	*/
	int getStatus();

	/**
	* @brief Returns the n:th missing extension
	*
	* @param i The index to the missing extension
	* 
	* @return the extension name as a string, or NULL
	*/
	const char* getMissingExtension(int i);
}
#endif // _GLELP_H_
