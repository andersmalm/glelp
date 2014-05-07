/*
* GLELP
* Anders Malm 2014
*/

#ifndef _GLELP_H_
#define _GLELP_H_

#include "glelp_defines.h"

#include "internals\glelp_glcorearb.h"
#include "internals\wglext.h"

// UGLY HACK, I just want to use as little windows specific things as possible
// Windows specific things

// WGL_ARB_pixel_format
extern PFNWGLGETPIXELFORMATATTRIBIVARBPROC wglGetPixelFormatAttribivARB;
extern PFNWGLGETPIXELFORMATATTRIBFVARBPROC wglGetPixelFormatAttribfvARB;
extern PFNWGLCHOOSEPIXELFORMATARBPROC wglChoosePixelFormatARB;

// WGL_ARB_create_context
extern PFNWGLCREATECONTEXTATTRIBSARBPROC wglCreateContextAttribsARB;

// WGL_ARB_extensions_string
extern PFNWGLGETEXTENSIONSSTRINGARBPROC wglGetExtensionsStringARB;

namespace glelp
{
	bool loadExtensions();

	bool checkAvailable(const char* extension);
}
#endif // _GLELP_H_
