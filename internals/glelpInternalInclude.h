#ifndef _GLELP_INTERNAL_INCLUDE_H_
#define _GLELP_INTERNAL_INCLUDE_H_

#define WIN32_LEAN_AND_MEAN 1
#include <Windows.h>
#include <gl/GL.h>

#include <stdint.h>
typedef __int32 int32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;

typedef char GLchar;
typedef ptrdiff_t GLintptr;
typedef ptrdiff_t GLsizeiptr;

#define APIENTRYP APIENTRY *
#define GLAPI extern

#include "glelpHelpers.h"
#include "glelpdefines.h"

#endif // _GLELP_INTERNAL_INCLUDE_H_
