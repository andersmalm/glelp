#pragma once

// GLELP 0.1 - OpenGL Extenstions Helper
// copyright (c) 2016 Anders Malm - Ekoli / Odious ^ S/N ^ Censor

#include "glelp_defines.h"

#include "glelp_include.h"
#include "wglext.h"

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
