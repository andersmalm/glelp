#ifndef _GLELP_GLCOREARB_H_
#define _GLELP_GLCOREARB_H_

#include "glcorearb.h"

namespace glelp
{
	bool initExtensions();

}


//
#ifdef define_core_1_0
#ifdef using_glCullFace
extern PFNGLCULLFACEPROC glCullFace;
#endif
#ifdef using_glFrontFace
extern PFNGLFRONTFACEPROC glFrontFace;
#endif
#ifdef using_glHint
extern PFNGLHINTPROC glHint;
#endif
#ifdef using_glLineWidth
extern PFNGLLINEWIDTHPROC glLineWidth;
#endif
#ifdef using_glPointSize
extern PFNGLPOINTSIZEPROC glPointSize;
#endif
#ifdef using_glPolygonMode
extern PFNGLPOLYGONMODEPROC glPolygonMode;
#endif
#ifdef using_glScissor
extern PFNGLSCISSORPROC glScissor;
#endif
#ifdef using_glTexParameterf
extern PFNGLTEXPARAMETERFPROC glTexParameterf;
#endif
#ifdef using_glTexParameterfv
extern PFNGLTEXPARAMETERFVPROC glTexParameterfv;
#endif
#ifdef using_glTexParameteri
extern PFNGLTEXPARAMETERIPROC glTexParameteri;
#endif
#ifdef using_glTexParameteriv
extern PFNGLTEXPARAMETERIVPROC glTexParameteriv;
#endif
#ifdef using_glTexImage1D
extern PFNGLTEXIMAGE1DPROC glTexImage1D;
#endif
#ifdef using_glTexImage2D
extern PFNGLTEXIMAGE2DPROC glTexImage2D;
#endif
#ifdef using_glDrawBuffer
extern PFNGLDRAWBUFFERPROC glDrawBuffer;
#endif
#ifdef using_glClear
extern PFNGLCLEARPROC glClear;
#endif
#ifdef using_glClearColor
extern PFNGLCLEARCOLORPROC glClearColor;
#endif
#ifdef using_glClearStencil
extern PFNGLCLEARSTENCILPROC glClearStencil;
#endif
#ifdef using_glClearDepth
extern PFNGLCLEARDEPTHPROC glClearDepth;
#endif
#ifdef using_glStencilMask
extern PFNGLSTENCILMASKPROC glStencilMask;
#endif
#ifdef using_glColorMask
extern PFNGLCOLORMASKPROC glColorMask;
#endif
#ifdef using_glDepthMask
extern PFNGLDEPTHMASKPROC glDepthMask;
#endif
#ifdef using_glDisable
extern PFNGLDISABLEPROC glDisable;
#endif
#ifdef using_glEnable
extern PFNGLENABLEPROC glEnable;
#endif
#ifdef using_glFinish
extern PFNGLFINISHPROC glFinish;
#endif
#ifdef using_glFlush
extern PFNGLFLUSHPROC glFlush;
#endif
#ifdef using_glBlendFunc
extern PFNGLBLENDFUNCPROC glBlendFunc;
#endif
#ifdef using_glLogicOp
extern PFNGLLOGICOPPROC glLogicOp;
#endif
#ifdef using_glStencilFunc
extern PFNGLSTENCILFUNCPROC glStencilFunc;
#endif
#ifdef using_glStencilOp
extern PFNGLSTENCILOPPROC glStencilOp;
#endif
#ifdef using_glDepthFunc
extern PFNGLDEPTHFUNCPROC glDepthFunc;
#endif
#ifdef using_glPixelStoref
extern PFNGLPIXELSTOREFPROC glPixelStoref;
#endif
#ifdef using_glPixelStorei
extern PFNGLPIXELSTOREIPROC glPixelStorei;
#endif
#ifdef using_glReadBuffer
extern PFNGLREADBUFFERPROC glReadBuffer;
#endif
#ifdef using_glReadPixels
extern PFNGLREADPIXELSPROC glReadPixels;
#endif
#ifdef using_glGetBooleanv
extern PFNGLGETBOOLEANVPROC glGetBooleanv;
#endif
#ifdef using_glGetDoublev
extern PFNGLGETDOUBLEVPROC glGetDoublev;
#endif
#ifdef using_glGetError
extern PFNGLGETERRORPROC glGetError;
#endif
#ifdef using_glGetFloatv
extern PFNGLGETFLOATVPROC glGetFloatv;
#endif
#ifdef using_glGetIntegerv
extern PFNGLGETINTEGERVPROC glGetIntegerv;
#endif
#ifdef using_glGetString
extern PFNGLGETSTRINGPROC glGetString;
#endif
#ifdef using_glGetTexImage
extern PFNGLGETTEXIMAGEPROC glGetTexImage;
#endif
#ifdef using_glGetTexParameterfv
extern PFNGLGETTEXPARAMETERFVPROC glGetTexParameterfv;
#endif
#ifdef using_glGetTexParameteriv
extern PFNGLGETTEXPARAMETERIVPROC glGetTexParameteriv;
#endif
#ifdef using_glGetTexLevelParameterfv
extern PFNGLGETTEXLEVELPARAMETERFVPROC glGetTexLevelParameterfv;
#endif
#ifdef using_glGetTexLevelParameteriv
extern PFNGLGETTEXLEVELPARAMETERIVPROC glGetTexLevelParameteriv;
#endif
#ifdef using_glIsEnabled
extern PFNGLISENABLEDPROC glIsEnabled;
#endif
#ifdef using_glDepthRange
extern PFNGLDEPTHRANGEPROC glDepthRange;
#endif
#ifdef using_glViewport
extern PFNGLVIEWPORTPROC glViewport;
#endif

#endif


//
#ifdef define_core_1_1
#ifdef using_glDrawArrays
extern PFNGLDRAWARRAYSPROC glDrawArrays;
#endif
#ifdef using_glDrawElements
extern PFNGLDRAWELEMENTSPROC glDrawElements;
#endif
#ifdef using_glGetPointerv
extern PFNGLGETPOINTERVPROC glGetPointerv;
#endif
#ifdef using_glPolygonOffset
extern PFNGLPOLYGONOFFSETPROC glPolygonOffset;
#endif
#ifdef using_glCopyTexImage1D
extern PFNGLCOPYTEXIMAGE1DPROC glCopyTexImage1D;
#endif
#ifdef using_glCopyTexImage2D
extern PFNGLCOPYTEXIMAGE2DPROC glCopyTexImage2D;
#endif
#ifdef using_glCopyTexSubImage1D
extern PFNGLCOPYTEXSUBIMAGE1DPROC glCopyTexSubImage1D;
#endif
#ifdef using_glCopyTexSubImage2D
extern PFNGLCOPYTEXSUBIMAGE2DPROC glCopyTexSubImage2D;
#endif
#ifdef using_glTexSubImage1D
extern PFNGLTEXSUBIMAGE1DPROC glTexSubImage1D;
#endif
#ifdef using_glTexSubImage2D
extern PFNGLTEXSUBIMAGE2DPROC glTexSubImage2D;
#endif
#ifdef using_glBindTexture
extern PFNGLBINDTEXTUREPROC glBindTexture;
#endif
#ifdef using_glDeleteTextures
extern PFNGLDELETETEXTURESPROC glDeleteTextures;
#endif
#ifdef using_glGenTextures
extern PFNGLGENTEXTURESPROC glGenTextures;
#endif
#ifdef using_glIsTexture
extern PFNGLISTEXTUREPROC glIsTexture;
#endif

#endif


//
#ifdef define_core_1_2
#ifdef using_glDrawRangeElements
extern PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements;
#endif
#ifdef using_glTexImage3D
extern PFNGLTEXIMAGE3DPROC glTexImage3D;
#endif
#ifdef using_glTexSubImage3D
extern PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D;
#endif
#ifdef using_glCopyTexSubImage3D
extern PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D;
#endif

#endif


//
#ifdef define_core_1_3
#ifdef using_glActiveTexture
extern PFNGLACTIVETEXTUREPROC glActiveTexture;
#endif
#ifdef using_glSampleCoverage
extern PFNGLSAMPLECOVERAGEPROC glSampleCoverage;
#endif
#ifdef using_glCompressedTexImage3D
extern PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D;
#endif
#ifdef using_glCompressedTexImage2D
extern PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D;
#endif
#ifdef using_glCompressedTexImage1D
extern PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D;
#endif
#ifdef using_glCompressedTexSubImage3D
extern PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D;
#endif
#ifdef using_glCompressedTexSubImage2D
extern PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D;
#endif
#ifdef using_glCompressedTexSubImage1D
extern PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D;
#endif
#ifdef using_glGetCompressedTexImage
extern PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage;
#endif

#endif


//
#ifdef define_core_1_4
#ifdef using_glBlendFuncSeparate
extern PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate;
#endif
#ifdef using_glMultiDrawArrays
extern PFNGLMULTIDRAWARRAYSPROC glMultiDrawArrays;
#endif
#ifdef using_glMultiDrawElements
extern PFNGLMULTIDRAWELEMENTSPROC glMultiDrawElements;
#endif
#ifdef using_glPointParameterf
extern PFNGLPOINTPARAMETERFPROC glPointParameterf;
#endif
#ifdef using_glPointParameterfv
extern PFNGLPOINTPARAMETERFVPROC glPointParameterfv;
#endif
#ifdef using_glPointParameteri
extern PFNGLPOINTPARAMETERIPROC glPointParameteri;
#endif
#ifdef using_glPointParameteriv
extern PFNGLPOINTPARAMETERIVPROC glPointParameteriv;
#endif
#ifdef using_glBlendColor
extern PFNGLBLENDCOLORPROC glBlendColor;
#endif
#ifdef using_glBlendEquation
extern PFNGLBLENDEQUATIONPROC glBlendEquation;
#endif

#endif


//
#ifdef define_core_1_5
#ifdef using_glGenQueries
extern PFNGLGENQUERIESPROC glGenQueries;
#endif
#ifdef using_glDeleteQueries
extern PFNGLDELETEQUERIESPROC glDeleteQueries;
#endif
#ifdef using_glIsQuery
extern PFNGLISQUERYPROC glIsQuery;
#endif
#ifdef using_glBeginQuery
extern PFNGLBEGINQUERYPROC glBeginQuery;
#endif
#ifdef using_glEndQuery
extern PFNGLENDQUERYPROC glEndQuery;
#endif
#ifdef using_glGetQueryiv
extern PFNGLGETQUERYIVPROC glGetQueryiv;
#endif
#ifdef using_glGetQueryObjectiv
extern PFNGLGETQUERYOBJECTIVPROC glGetQueryObjectiv;
#endif
#ifdef using_glGetQueryObjectuiv
extern PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv;
#endif
#ifdef using_glBindBuffer
extern PFNGLBINDBUFFERPROC glBindBuffer;
#endif
#ifdef using_glDeleteBuffers
extern PFNGLDELETEBUFFERSPROC glDeleteBuffers;
#endif
#ifdef using_glGenBuffers
extern PFNGLGENBUFFERSPROC glGenBuffers;
#endif
#ifdef using_glIsBuffer
extern PFNGLISBUFFERPROC glIsBuffer;
#endif
#ifdef using_glBufferData
extern PFNGLBUFFERDATAPROC glBufferData;
#endif
#ifdef using_glBufferSubData
extern PFNGLBUFFERSUBDATAPROC glBufferSubData;
#endif
#ifdef using_glGetBufferSubData
extern PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData;
#endif
#ifdef using_glMapBuffer
extern PFNGLMAPBUFFERPROC glMapBuffer;
#endif
#ifdef using_glUnmapBuffer
extern PFNGLUNMAPBUFFERPROC glUnmapBuffer;
#endif
#ifdef using_glGetBufferParameteriv
extern PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv;
#endif
#ifdef using_glGetBufferPointerv
extern PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv;
#endif

#endif


//
#ifdef define_core_2_0
#ifdef using_glBlendEquationSeparate
extern PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate;
#endif
#ifdef using_glDrawBuffers
extern PFNGLDRAWBUFFERSPROC glDrawBuffers;
#endif
#ifdef using_glStencilOpSeparate
extern PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate;
#endif
#ifdef using_glStencilFuncSeparate
extern PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate;
#endif
#ifdef using_glStencilMaskSeparate
extern PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate;
#endif
#ifdef using_glAttachShader
extern PFNGLATTACHSHADERPROC glAttachShader;
#endif
#ifdef using_glBindAttribLocation
extern PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation;
#endif
#ifdef using_glCompileShader
extern PFNGLCOMPILESHADERPROC glCompileShader;
#endif
#ifdef using_glCreateProgram
extern PFNGLCREATEPROGRAMPROC glCreateProgram;
#endif
#ifdef using_glCreateShader
extern PFNGLCREATESHADERPROC glCreateShader;
#endif
#ifdef using_glDeleteProgram
extern PFNGLDELETEPROGRAMPROC glDeleteProgram;
#endif
#ifdef using_glDeleteShader
extern PFNGLDELETESHADERPROC glDeleteShader;
#endif
#ifdef using_glDetachShader
extern PFNGLDETACHSHADERPROC glDetachShader;
#endif
#ifdef using_glDisableVertexAttribArray
extern PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;
#endif
#ifdef using_glEnableVertexAttribArray
extern PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
#endif
#ifdef using_glGetActiveAttrib
extern PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib;
#endif
#ifdef using_glGetActiveUniform
extern PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform;
#endif
#ifdef using_glGetAttachedShaders
extern PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders;
#endif
#ifdef using_glGetAttribLocation
extern PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation;
#endif
#ifdef using_glGetProgramiv
extern PFNGLGETPROGRAMIVPROC glGetProgramiv;
#endif
#ifdef using_glGetProgramInfoLog
extern PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;
#endif
#ifdef using_glGetShaderiv
extern PFNGLGETSHADERIVPROC glGetShaderiv;
#endif
#ifdef using_glGetShaderInfoLog
extern PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;
#endif
#ifdef using_glGetShaderSource
extern PFNGLGETSHADERSOURCEPROC glGetShaderSource;
#endif
#ifdef using_glGetUniformLocation
extern PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;
#endif
#ifdef using_glGetUniformfv
extern PFNGLGETUNIFORMFVPROC glGetUniformfv;
#endif
#ifdef using_glGetUniformiv
extern PFNGLGETUNIFORMIVPROC glGetUniformiv;
#endif
#ifdef using_glGetVertexAttribdv
extern PFNGLGETVERTEXATTRIBDVPROC glGetVertexAttribdv;
#endif
#ifdef using_glGetVertexAttribfv
extern PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv;
#endif
#ifdef using_glGetVertexAttribiv
extern PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv;
#endif
#ifdef using_glGetVertexAttribPointerv
extern PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv;
#endif
#ifdef using_glIsProgram
extern PFNGLISPROGRAMPROC glIsProgram;
#endif
#ifdef using_glIsShader
extern PFNGLISSHADERPROC glIsShader;
#endif
#ifdef using_glLinkProgram
extern PFNGLLINKPROGRAMPROC glLinkProgram;
#endif
#ifdef using_glShaderSource
extern PFNGLSHADERSOURCEPROC glShaderSource;
#endif
#ifdef using_glUseProgram
extern PFNGLUSEPROGRAMPROC glUseProgram;
#endif
#ifdef using_glUniform1f
extern PFNGLUNIFORM1FPROC glUniform1f;
#endif
#ifdef using_glUniform2f
extern PFNGLUNIFORM2FPROC glUniform2f;
#endif
#ifdef using_glUniform3f
extern PFNGLUNIFORM3FPROC glUniform3f;
#endif
#ifdef using_glUniform4f
extern PFNGLUNIFORM4FPROC glUniform4f;
#endif
#ifdef using_glUniform1i
extern PFNGLUNIFORM1IPROC glUniform1i;
#endif
#ifdef using_glUniform2i
extern PFNGLUNIFORM2IPROC glUniform2i;
#endif
#ifdef using_glUniform3i
extern PFNGLUNIFORM3IPROC glUniform3i;
#endif
#ifdef using_glUniform4i
extern PFNGLUNIFORM4IPROC glUniform4i;
#endif
#ifdef using_glUniform1fv
extern PFNGLUNIFORM1FVPROC glUniform1fv;
#endif
#ifdef using_glUniform2fv
extern PFNGLUNIFORM2FVPROC glUniform2fv;
#endif
#ifdef using_glUniform3fv
extern PFNGLUNIFORM3FVPROC glUniform3fv;
#endif
#ifdef using_glUniform4fv
extern PFNGLUNIFORM4FVPROC glUniform4fv;
#endif
#ifdef using_glUniform1iv
extern PFNGLUNIFORM1IVPROC glUniform1iv;
#endif
#ifdef using_glUniform2iv
extern PFNGLUNIFORM2IVPROC glUniform2iv;
#endif
#ifdef using_glUniform3iv
extern PFNGLUNIFORM3IVPROC glUniform3iv;
#endif
#ifdef using_glUniform4iv
extern PFNGLUNIFORM4IVPROC glUniform4iv;
#endif
#ifdef using_glUniformMatrix2fv
extern PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv;
#endif
#ifdef using_glUniformMatrix3fv
extern PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv;
#endif
#ifdef using_glUniformMatrix4fv
extern PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv;
#endif
#ifdef using_glValidateProgram
extern PFNGLVALIDATEPROGRAMPROC glValidateProgram;
#endif
#ifdef using_glVertexAttrib1d
extern PFNGLVERTEXATTRIB1DPROC glVertexAttrib1d;
#endif
#ifdef using_glVertexAttrib1dv
extern PFNGLVERTEXATTRIB1DVPROC glVertexAttrib1dv;
#endif
#ifdef using_glVertexAttrib1f
extern PFNGLVERTEXATTRIB1FPROC glVertexAttrib1f;
#endif
#ifdef using_glVertexAttrib1fv
extern PFNGLVERTEXATTRIB1FVPROC glVertexAttrib1fv;
#endif
#ifdef using_glVertexAttrib1s
extern PFNGLVERTEXATTRIB1SPROC glVertexAttrib1s;
#endif
#ifdef using_glVertexAttrib1sv
extern PFNGLVERTEXATTRIB1SVPROC glVertexAttrib1sv;
#endif
#ifdef using_glVertexAttrib2d
extern PFNGLVERTEXATTRIB2DPROC glVertexAttrib2d;
#endif
#ifdef using_glVertexAttrib2dv
extern PFNGLVERTEXATTRIB2DVPROC glVertexAttrib2dv;
#endif
#ifdef using_glVertexAttrib2f
extern PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f;
#endif
#ifdef using_glVertexAttrib2fv
extern PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv;
#endif
#ifdef using_glVertexAttrib2s
extern PFNGLVERTEXATTRIB2SPROC glVertexAttrib2s;
#endif
#ifdef using_glVertexAttrib2sv
extern PFNGLVERTEXATTRIB2SVPROC glVertexAttrib2sv;
#endif
#ifdef using_glVertexAttrib3d
extern PFNGLVERTEXATTRIB3DPROC glVertexAttrib3d;
#endif
#ifdef using_glVertexAttrib3dv
extern PFNGLVERTEXATTRIB3DVPROC glVertexAttrib3dv;
#endif
#ifdef using_glVertexAttrib3f
extern PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f;
#endif
#ifdef using_glVertexAttrib3fv
extern PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv;
#endif
#ifdef using_glVertexAttrib3s
extern PFNGLVERTEXATTRIB3SPROC glVertexAttrib3s;
#endif
#ifdef using_glVertexAttrib3sv
extern PFNGLVERTEXATTRIB3SVPROC glVertexAttrib3sv;
#endif
#ifdef using_glVertexAttrib4Nbv
extern PFNGLVERTEXATTRIB4NBVPROC glVertexAttrib4Nbv;
#endif
#ifdef using_glVertexAttrib4Niv
extern PFNGLVERTEXATTRIB4NIVPROC glVertexAttrib4Niv;
#endif
#ifdef using_glVertexAttrib4Nsv
extern PFNGLVERTEXATTRIB4NSVPROC glVertexAttrib4Nsv;
#endif
#ifdef using_glVertexAttrib4Nub
extern PFNGLVERTEXATTRIB4NUBPROC glVertexAttrib4Nub;
#endif
#ifdef using_glVertexAttrib4Nubv
extern PFNGLVERTEXATTRIB4NUBVPROC glVertexAttrib4Nubv;
#endif
#ifdef using_glVertexAttrib4Nuiv
extern PFNGLVERTEXATTRIB4NUIVPROC glVertexAttrib4Nuiv;
#endif
#ifdef using_glVertexAttrib4Nusv
extern PFNGLVERTEXATTRIB4NUSVPROC glVertexAttrib4Nusv;
#endif
#ifdef using_glVertexAttrib4bv
extern PFNGLVERTEXATTRIB4BVPROC glVertexAttrib4bv;
#endif
#ifdef using_glVertexAttrib4d
extern PFNGLVERTEXATTRIB4DPROC glVertexAttrib4d;
#endif
#ifdef using_glVertexAttrib4dv
extern PFNGLVERTEXATTRIB4DVPROC glVertexAttrib4dv;
#endif
#ifdef using_glVertexAttrib4f
extern PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f;
#endif
#ifdef using_glVertexAttrib4fv
extern PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv;
#endif
#ifdef using_glVertexAttrib4iv
extern PFNGLVERTEXATTRIB4IVPROC glVertexAttrib4iv;
#endif
#ifdef using_glVertexAttrib4s
extern PFNGLVERTEXATTRIB4SPROC glVertexAttrib4s;
#endif
#ifdef using_glVertexAttrib4sv
extern PFNGLVERTEXATTRIB4SVPROC glVertexAttrib4sv;
#endif
#ifdef using_glVertexAttrib4ubv
extern PFNGLVERTEXATTRIB4UBVPROC glVertexAttrib4ubv;
#endif
#ifdef using_glVertexAttrib4uiv
extern PFNGLVERTEXATTRIB4UIVPROC glVertexAttrib4uiv;
#endif
#ifdef using_glVertexAttrib4usv
extern PFNGLVERTEXATTRIB4USVPROC glVertexAttrib4usv;
#endif
#ifdef using_glVertexAttribPointer
extern PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
#endif

#endif


//
#ifdef define_core_2_1
#ifdef using_glUniformMatrix2x3fv
extern PFNGLUNIFORMMATRIX2X3FVPROC glUniformMatrix2x3fv;
#endif
#ifdef using_glUniformMatrix3x2fv
extern PFNGLUNIFORMMATRIX3X2FVPROC glUniformMatrix3x2fv;
#endif
#ifdef using_glUniformMatrix2x4fv
extern PFNGLUNIFORMMATRIX2X4FVPROC glUniformMatrix2x4fv;
#endif
#ifdef using_glUniformMatrix4x2fv
extern PFNGLUNIFORMMATRIX4X2FVPROC glUniformMatrix4x2fv;
#endif
#ifdef using_glUniformMatrix3x4fv
extern PFNGLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv;
#endif
#ifdef using_glUniformMatrix4x3fv
extern PFNGLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv;
#endif

#endif


//
#ifdef define_core_3_0
#ifdef using_glColorMaski
extern PFNGLCOLORMASKIPROC glColorMaski;
#endif
#ifdef using_glGetBooleani_v
extern PFNGLGETBOOLEANI_VPROC glGetBooleani_v;
#endif
#ifdef using_glGetIntegeri_v
extern PFNGLGETINTEGERI_VPROC glGetIntegeri_v;
#endif
#ifdef using_glEnablei
extern PFNGLENABLEIPROC glEnablei;
#endif
#ifdef using_glDisablei
extern PFNGLDISABLEIPROC glDisablei;
#endif
#ifdef using_glIsEnabledi
extern PFNGLISENABLEDIPROC glIsEnabledi;
#endif
#ifdef using_glBeginTransformFeedback
extern PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback;
#endif
#ifdef using_glEndTransformFeedback
extern PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback;
#endif
#ifdef using_glBindBufferRange
extern PFNGLBINDBUFFERRANGEPROC glBindBufferRange;
#endif
#ifdef using_glBindBufferBase
extern PFNGLBINDBUFFERBASEPROC glBindBufferBase;
#endif
#ifdef using_glTransformFeedbackVaryings
extern PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings;
#endif
#ifdef using_glGetTransformFeedbackVarying
extern PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying;
#endif
#ifdef using_glClampColor
extern PFNGLCLAMPCOLORPROC glClampColor;
#endif
#ifdef using_glBeginConditionalRender
extern PFNGLBEGINCONDITIONALRENDERPROC glBeginConditionalRender;
#endif
#ifdef using_glEndConditionalRender
extern PFNGLENDCONDITIONALRENDERPROC glEndConditionalRender;
#endif
#ifdef using_glVertexAttribIPointer
extern PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer;
#endif
#ifdef using_glGetVertexAttribIiv
extern PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv;
#endif
#ifdef using_glGetVertexAttribIuiv
extern PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv;
#endif
#ifdef using_glVertexAttribI1i
extern PFNGLVERTEXATTRIBI1IPROC glVertexAttribI1i;
#endif
#ifdef using_glVertexAttribI2i
extern PFNGLVERTEXATTRIBI2IPROC glVertexAttribI2i;
#endif
#ifdef using_glVertexAttribI3i
extern PFNGLVERTEXATTRIBI3IPROC glVertexAttribI3i;
#endif
#ifdef using_glVertexAttribI4i
extern PFNGLVERTEXATTRIBI4IPROC glVertexAttribI4i;
#endif
#ifdef using_glVertexAttribI1ui
extern PFNGLVERTEXATTRIBI1UIPROC glVertexAttribI1ui;
#endif
#ifdef using_glVertexAttribI2ui
extern PFNGLVERTEXATTRIBI2UIPROC glVertexAttribI2ui;
#endif
#ifdef using_glVertexAttribI3ui
extern PFNGLVERTEXATTRIBI3UIPROC glVertexAttribI3ui;
#endif
#ifdef using_glVertexAttribI4ui
extern PFNGLVERTEXATTRIBI4UIPROC glVertexAttribI4ui;
#endif
#ifdef using_glVertexAttribI1iv
extern PFNGLVERTEXATTRIBI1IVPROC glVertexAttribI1iv;
#endif
#ifdef using_glVertexAttribI2iv
extern PFNGLVERTEXATTRIBI2IVPROC glVertexAttribI2iv;
#endif
#ifdef using_glVertexAttribI3iv
extern PFNGLVERTEXATTRIBI3IVPROC glVertexAttribI3iv;
#endif
#ifdef using_glVertexAttribI4iv
extern PFNGLVERTEXATTRIBI4IVPROC glVertexAttribI4iv;
#endif
#ifdef using_glVertexAttribI1uiv
extern PFNGLVERTEXATTRIBI1UIVPROC glVertexAttribI1uiv;
#endif
#ifdef using_glVertexAttribI2uiv
extern PFNGLVERTEXATTRIBI2UIVPROC glVertexAttribI2uiv;
#endif
#ifdef using_glVertexAttribI3uiv
extern PFNGLVERTEXATTRIBI3UIVPROC glVertexAttribI3uiv;
#endif
#ifdef using_glVertexAttribI4uiv
extern PFNGLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv;
#endif
#ifdef using_glVertexAttribI4bv
extern PFNGLVERTEXATTRIBI4BVPROC glVertexAttribI4bv;
#endif
#ifdef using_glVertexAttribI4sv
extern PFNGLVERTEXATTRIBI4SVPROC glVertexAttribI4sv;
#endif
#ifdef using_glVertexAttribI4ubv
extern PFNGLVERTEXATTRIBI4UBVPROC glVertexAttribI4ubv;
#endif
#ifdef using_glVertexAttribI4usv
extern PFNGLVERTEXATTRIBI4USVPROC glVertexAttribI4usv;
#endif
#ifdef using_glGetUniformuiv
extern PFNGLGETUNIFORMUIVPROC glGetUniformuiv;
#endif
#ifdef using_glBindFragDataLocation
extern PFNGLBINDFRAGDATALOCATIONPROC glBindFragDataLocation;
#endif
#ifdef using_glGetFragDataLocation
extern PFNGLGETFRAGDATALOCATIONPROC glGetFragDataLocation;
#endif
#ifdef using_glUniform1ui
extern PFNGLUNIFORM1UIPROC glUniform1ui;
#endif
#ifdef using_glUniform2ui
extern PFNGLUNIFORM2UIPROC glUniform2ui;
#endif
#ifdef using_glUniform3ui
extern PFNGLUNIFORM3UIPROC glUniform3ui;
#endif
#ifdef using_glUniform4ui
extern PFNGLUNIFORM4UIPROC glUniform4ui;
#endif
#ifdef using_glUniform1uiv
extern PFNGLUNIFORM1UIVPROC glUniform1uiv;
#endif
#ifdef using_glUniform2uiv
extern PFNGLUNIFORM2UIVPROC glUniform2uiv;
#endif
#ifdef using_glUniform3uiv
extern PFNGLUNIFORM3UIVPROC glUniform3uiv;
#endif
#ifdef using_glUniform4uiv
extern PFNGLUNIFORM4UIVPROC glUniform4uiv;
#endif
#ifdef using_glTexParameterIiv
extern PFNGLTEXPARAMETERIIVPROC glTexParameterIiv;
#endif
#ifdef using_glTexParameterIuiv
extern PFNGLTEXPARAMETERIUIVPROC glTexParameterIuiv;
#endif
#ifdef using_glGetTexParameterIiv
extern PFNGLGETTEXPARAMETERIIVPROC glGetTexParameterIiv;
#endif
#ifdef using_glGetTexParameterIuiv
extern PFNGLGETTEXPARAMETERIUIVPROC glGetTexParameterIuiv;
#endif
#ifdef using_glClearBufferiv
extern PFNGLCLEARBUFFERIVPROC glClearBufferiv;
#endif
#ifdef using_glClearBufferuiv
extern PFNGLCLEARBUFFERUIVPROC glClearBufferuiv;
#endif
#ifdef using_glClearBufferfv
extern PFNGLCLEARBUFFERFVPROC glClearBufferfv;
#endif
#ifdef using_glClearBufferfi
extern PFNGLCLEARBUFFERFIPROC glClearBufferfi;
#endif
#ifdef using_glGetStringi
extern PFNGLGETSTRINGIPROC glGetStringi;
#endif
#ifdef using_glIsRenderbuffer
extern PFNGLISRENDERBUFFERPROC glIsRenderbuffer;
#endif
#ifdef using_glBindRenderbuffer
extern PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer;
#endif
#ifdef using_glDeleteRenderbuffers
extern PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;
#endif
#ifdef using_glGenRenderbuffers
extern PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers;
#endif
#ifdef using_glRenderbufferStorage
extern PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage;
#endif
#ifdef using_glGetRenderbufferParameteriv
extern PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv;
#endif
#ifdef using_glIsFramebuffer
extern PFNGLISFRAMEBUFFERPROC glIsFramebuffer;
#endif
#ifdef using_glBindFramebuffer
extern PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer;
#endif
#ifdef using_glDeleteFramebuffers
extern PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers;
#endif
#ifdef using_glGenFramebuffers
extern PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers;
#endif
#ifdef using_glCheckFramebufferStatus
extern PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus;
#endif
#ifdef using_glFramebufferTexture1D
extern PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D;
#endif
#ifdef using_glFramebufferTexture2D
extern PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D;
#endif
#ifdef using_glFramebufferTexture3D
extern PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D;
#endif
#ifdef using_glFramebufferRenderbuffer
extern PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer;
#endif
#ifdef using_glGetFramebufferAttachmentParameteriv
extern PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv;
#endif
#ifdef using_glGenerateMipmap
extern PFNGLGENERATEMIPMAPPROC glGenerateMipmap;
#endif
#ifdef using_glBlitFramebuffer
extern PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer;
#endif
#ifdef using_glRenderbufferStorageMultisample
extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample;
#endif
#ifdef using_glFramebufferTextureLayer
extern PFNGLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer;
#endif
#ifdef using_glMapBufferRange
extern PFNGLMAPBUFFERRANGEPROC glMapBufferRange;
#endif
#ifdef using_glFlushMappedBufferRange
extern PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange;
#endif
#ifdef using_glBindVertexArray
extern PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
#endif
#ifdef using_glDeleteVertexArrays
extern PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;
#endif
#ifdef using_glGenVertexArrays
extern PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;
#endif
#ifdef using_glIsVertexArray
extern PFNGLISVERTEXARRAYPROC glIsVertexArray;
#endif

#endif


//
#ifdef define_core_3_1
#ifdef using_glDrawArraysInstanced
extern PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced;
#endif
#ifdef using_glDrawElementsInstanced
extern PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced;
#endif
#ifdef using_glTexBuffer
extern PFNGLTEXBUFFERPROC glTexBuffer;
#endif
#ifdef using_glPrimitiveRestartIndex
extern PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex;
#endif
#ifdef using_glCopyBufferSubData
extern PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData;
#endif
#ifdef using_glGetUniformIndices
extern PFNGLGETUNIFORMINDICESPROC glGetUniformIndices;
#endif
#ifdef using_glGetActiveUniformsiv
extern PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv;
#endif
#ifdef using_glGetActiveUniformName
extern PFNGLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName;
#endif
#ifdef using_glGetUniformBlockIndex
extern PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex;
#endif
#ifdef using_glGetActiveUniformBlockiv
extern PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv;
#endif
#ifdef using_glGetActiveUniformBlockName
extern PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName;
#endif
#ifdef using_glUniformBlockBinding
extern PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding;
#endif

#endif


//
#ifdef define_core_3_2
#ifdef using_glDrawElementsBaseVertex
extern PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex;
#endif
#ifdef using_glDrawRangeElementsBaseVertex
extern PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex;
#endif
#ifdef using_glDrawElementsInstancedBaseVertex
extern PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex;
#endif
#ifdef using_glMultiDrawElementsBaseVertex
extern PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex;
#endif
#ifdef using_glProvokingVertex
extern PFNGLPROVOKINGVERTEXPROC glProvokingVertex;
#endif
#ifdef using_glFenceSync
extern PFNGLFENCESYNCPROC glFenceSync;
#endif
#ifdef using_glIsSync
extern PFNGLISSYNCPROC glIsSync;
#endif
#ifdef using_glDeleteSync
extern PFNGLDELETESYNCPROC glDeleteSync;
#endif
#ifdef using_glClientWaitSync
extern PFNGLCLIENTWAITSYNCPROC glClientWaitSync;
#endif
#ifdef using_glWaitSync
extern PFNGLWAITSYNCPROC glWaitSync;
#endif
#ifdef using_glGetInteger64v
extern PFNGLGETINTEGER64VPROC glGetInteger64v;
#endif
#ifdef using_glGetSynciv
extern PFNGLGETSYNCIVPROC glGetSynciv;
#endif
#ifdef using_glGetInteger64i_v
extern PFNGLGETINTEGER64I_VPROC glGetInteger64i_v;
#endif
#ifdef using_glGetBufferParameteri64v
extern PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v;
#endif
#ifdef using_glFramebufferTexture
extern PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture;
#endif
#ifdef using_glTexImage2DMultisample
extern PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample;
#endif
#ifdef using_glTexImage3DMultisample
extern PFNGLTEXIMAGE3DMULTISAMPLEPROC glTexImage3DMultisample;
#endif
#ifdef using_glGetMultisamplefv
extern PFNGLGETMULTISAMPLEFVPROC glGetMultisamplefv;
#endif
#ifdef using_glSampleMaski
extern PFNGLSAMPLEMASKIPROC glSampleMaski;
#endif

#endif


//
#ifdef define_core_3_3
#ifdef using_glBindFragDataLocationIndexed
extern PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed;
#endif
#ifdef using_glGetFragDataIndex
extern PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex;
#endif
#ifdef using_glGenSamplers
extern PFNGLGENSAMPLERSPROC glGenSamplers;
#endif
#ifdef using_glDeleteSamplers
extern PFNGLDELETESAMPLERSPROC glDeleteSamplers;
#endif
#ifdef using_glIsSampler
extern PFNGLISSAMPLERPROC glIsSampler;
#endif
#ifdef using_glBindSampler
extern PFNGLBINDSAMPLERPROC glBindSampler;
#endif
#ifdef using_glSamplerParameteri
extern PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri;
#endif
#ifdef using_glSamplerParameteriv
extern PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv;
#endif
#ifdef using_glSamplerParameterf
extern PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf;
#endif
#ifdef using_glSamplerParameterfv
extern PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv;
#endif
#ifdef using_glSamplerParameterIiv
extern PFNGLSAMPLERPARAMETERIIVPROC glSamplerParameterIiv;
#endif
#ifdef using_glSamplerParameterIuiv
extern PFNGLSAMPLERPARAMETERIUIVPROC glSamplerParameterIuiv;
#endif
#ifdef using_glGetSamplerParameteriv
extern PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv;
#endif
#ifdef using_glGetSamplerParameterIiv
extern PFNGLGETSAMPLERPARAMETERIIVPROC glGetSamplerParameterIiv;
#endif
#ifdef using_glGetSamplerParameterfv
extern PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv;
#endif
#ifdef using_glGetSamplerParameterIuiv
extern PFNGLGETSAMPLERPARAMETERIUIVPROC glGetSamplerParameterIuiv;
#endif
#ifdef using_glQueryCounter
extern PFNGLQUERYCOUNTERPROC glQueryCounter;
#endif
#ifdef using_glGetQueryObjecti64v
extern PFNGLGETQUERYOBJECTI64VPROC glGetQueryObjecti64v;
#endif
#ifdef using_glGetQueryObjectui64v
extern PFNGLGETQUERYOBJECTUI64VPROC glGetQueryObjectui64v;
#endif
#ifdef using_glVertexAttribDivisor
extern PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;
#endif
#ifdef using_glVertexAttribP1ui
extern PFNGLVERTEXATTRIBP1UIPROC glVertexAttribP1ui;
#endif
#ifdef using_glVertexAttribP1uiv
extern PFNGLVERTEXATTRIBP1UIVPROC glVertexAttribP1uiv;
#endif
#ifdef using_glVertexAttribP2ui
extern PFNGLVERTEXATTRIBP2UIPROC glVertexAttribP2ui;
#endif
#ifdef using_glVertexAttribP2uiv
extern PFNGLVERTEXATTRIBP2UIVPROC glVertexAttribP2uiv;
#endif
#ifdef using_glVertexAttribP3ui
extern PFNGLVERTEXATTRIBP3UIPROC glVertexAttribP3ui;
#endif
#ifdef using_glVertexAttribP3uiv
extern PFNGLVERTEXATTRIBP3UIVPROC glVertexAttribP3uiv;
#endif
#ifdef using_glVertexAttribP4ui
extern PFNGLVERTEXATTRIBP4UIPROC glVertexAttribP4ui;
#endif
#ifdef using_glVertexAttribP4uiv
extern PFNGLVERTEXATTRIBP4UIVPROC glVertexAttribP4uiv;
#endif

#endif


//
#ifdef define_core_4_0
#ifdef using_glMinSampleShading
extern PFNGLMINSAMPLESHADINGPROC glMinSampleShading;
#endif
#ifdef using_glBlendEquationi
extern PFNGLBLENDEQUATIONIPROC glBlendEquationi;
#endif
#ifdef using_glBlendEquationSeparatei
extern PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei;
#endif
#ifdef using_glBlendFunci
extern PFNGLBLENDFUNCIPROC glBlendFunci;
#endif
#ifdef using_glBlendFuncSeparatei
extern PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei;
#endif
#ifdef using_glDrawArraysIndirect
extern PFNGLDRAWARRAYSINDIRECTPROC glDrawArraysIndirect;
#endif
#ifdef using_glDrawElementsIndirect
extern PFNGLDRAWELEMENTSINDIRECTPROC glDrawElementsIndirect;
#endif
#ifdef using_glUniform1d
extern PFNGLUNIFORM1DPROC glUniform1d;
#endif
#ifdef using_glUniform2d
extern PFNGLUNIFORM2DPROC glUniform2d;
#endif
#ifdef using_glUniform3d
extern PFNGLUNIFORM3DPROC glUniform3d;
#endif
#ifdef using_glUniform4d
extern PFNGLUNIFORM4DPROC glUniform4d;
#endif
#ifdef using_glUniform1dv
extern PFNGLUNIFORM1DVPROC glUniform1dv;
#endif
#ifdef using_glUniform2dv
extern PFNGLUNIFORM2DVPROC glUniform2dv;
#endif
#ifdef using_glUniform3dv
extern PFNGLUNIFORM3DVPROC glUniform3dv;
#endif
#ifdef using_glUniform4dv
extern PFNGLUNIFORM4DVPROC glUniform4dv;
#endif
#ifdef using_glUniformMatrix2dv
extern PFNGLUNIFORMMATRIX2DVPROC glUniformMatrix2dv;
#endif
#ifdef using_glUniformMatrix3dv
extern PFNGLUNIFORMMATRIX3DVPROC glUniformMatrix3dv;
#endif
#ifdef using_glUniformMatrix4dv
extern PFNGLUNIFORMMATRIX4DVPROC glUniformMatrix4dv;
#endif
#ifdef using_glUniformMatrix2x3dv
extern PFNGLUNIFORMMATRIX2X3DVPROC glUniformMatrix2x3dv;
#endif
#ifdef using_glUniformMatrix2x4dv
extern PFNGLUNIFORMMATRIX2X4DVPROC glUniformMatrix2x4dv;
#endif
#ifdef using_glUniformMatrix3x2dv
extern PFNGLUNIFORMMATRIX3X2DVPROC glUniformMatrix3x2dv;
#endif
#ifdef using_glUniformMatrix3x4dv
extern PFNGLUNIFORMMATRIX3X4DVPROC glUniformMatrix3x4dv;
#endif
#ifdef using_glUniformMatrix4x2dv
extern PFNGLUNIFORMMATRIX4X2DVPROC glUniformMatrix4x2dv;
#endif
#ifdef using_glUniformMatrix4x3dv
extern PFNGLUNIFORMMATRIX4X3DVPROC glUniformMatrix4x3dv;
#endif
#ifdef using_glGetUniformdv
extern PFNGLGETUNIFORMDVPROC glGetUniformdv;
#endif
#ifdef using_glGetSubroutineUniformLocation
extern PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glGetSubroutineUniformLocation;
#endif
#ifdef using_glGetSubroutineIndex
extern PFNGLGETSUBROUTINEINDEXPROC glGetSubroutineIndex;
#endif
#ifdef using_glGetActiveSubroutineUniformiv
extern PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glGetActiveSubroutineUniformiv;
#endif
#ifdef using_glGetActiveSubroutineUniformName
extern PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glGetActiveSubroutineUniformName;
#endif
#ifdef using_glGetActiveSubroutineName
extern PFNGLGETACTIVESUBROUTINENAMEPROC glGetActiveSubroutineName;
#endif
#ifdef using_glUniformSubroutinesuiv
extern PFNGLUNIFORMSUBROUTINESUIVPROC glUniformSubroutinesuiv;
#endif
#ifdef using_glGetUniformSubroutineuiv
extern PFNGLGETUNIFORMSUBROUTINEUIVPROC glGetUniformSubroutineuiv;
#endif
#ifdef using_glGetProgramStageiv
extern PFNGLGETPROGRAMSTAGEIVPROC glGetProgramStageiv;
#endif
#ifdef using_glPatchParameteri
extern PFNGLPATCHPARAMETERIPROC glPatchParameteri;
#endif
#ifdef using_glPatchParameterfv
extern PFNGLPATCHPARAMETERFVPROC glPatchParameterfv;
#endif
#ifdef using_glBindTransformFeedback
extern PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback;
#endif
#ifdef using_glDeleteTransformFeedbacks
extern PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks;
#endif
#ifdef using_glGenTransformFeedbacks
extern PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks;
#endif
#ifdef using_glIsTransformFeedback
extern PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback;
#endif
#ifdef using_glPauseTransformFeedback
extern PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback;
#endif
#ifdef using_glResumeTransformFeedback
extern PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback;
#endif
#ifdef using_glDrawTransformFeedback
extern PFNGLDRAWTRANSFORMFEEDBACKPROC glDrawTransformFeedback;
#endif
#ifdef using_glDrawTransformFeedbackStream
extern PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glDrawTransformFeedbackStream;
#endif
#ifdef using_glBeginQueryIndexed
extern PFNGLBEGINQUERYINDEXEDPROC glBeginQueryIndexed;
#endif
#ifdef using_glEndQueryIndexed
extern PFNGLENDQUERYINDEXEDPROC glEndQueryIndexed;
#endif
#ifdef using_glGetQueryIndexediv
extern PFNGLGETQUERYINDEXEDIVPROC glGetQueryIndexediv;
#endif

#endif


//
#ifdef define_core_4_1
#ifdef using_glReleaseShaderCompiler
extern PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler;
#endif
#ifdef using_glShaderBinary
extern PFNGLSHADERBINARYPROC glShaderBinary;
#endif
#ifdef using_glGetShaderPrecisionFormat
extern PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat;
#endif
#ifdef using_glDepthRangef
extern PFNGLDEPTHRANGEFPROC glDepthRangef;
#endif
#ifdef using_glClearDepthf
extern PFNGLCLEARDEPTHFPROC glClearDepthf;
#endif
#ifdef using_glGetProgramBinary
extern PFNGLGETPROGRAMBINARYPROC glGetProgramBinary;
#endif
#ifdef using_glProgramBinary
extern PFNGLPROGRAMBINARYPROC glProgramBinary;
#endif
#ifdef using_glProgramParameteri
extern PFNGLPROGRAMPARAMETERIPROC glProgramParameteri;
#endif
#ifdef using_glUseProgramStages
extern PFNGLUSEPROGRAMSTAGESPROC glUseProgramStages;
#endif
#ifdef using_glActiveShaderProgram
extern PFNGLACTIVESHADERPROGRAMPROC glActiveShaderProgram;
#endif
#ifdef using_glCreateShaderProgramv
extern PFNGLCREATESHADERPROGRAMVPROC glCreateShaderProgramv;
#endif
#ifdef using_glBindProgramPipeline
extern PFNGLBINDPROGRAMPIPELINEPROC glBindProgramPipeline;
#endif
#ifdef using_glDeleteProgramPipelines
extern PFNGLDELETEPROGRAMPIPELINESPROC glDeleteProgramPipelines;
#endif
#ifdef using_glGenProgramPipelines
extern PFNGLGENPROGRAMPIPELINESPROC glGenProgramPipelines;
#endif
#ifdef using_glIsProgramPipeline
extern PFNGLISPROGRAMPIPELINEPROC glIsProgramPipeline;
#endif
#ifdef using_glGetProgramPipelineiv
extern PFNGLGETPROGRAMPIPELINEIVPROC glGetProgramPipelineiv;
#endif
#ifdef using_glProgramUniform1i
extern PFNGLPROGRAMUNIFORM1IPROC glProgramUniform1i;
#endif
#ifdef using_glProgramUniform1iv
extern PFNGLPROGRAMUNIFORM1IVPROC glProgramUniform1iv;
#endif
#ifdef using_glProgramUniform1f
extern PFNGLPROGRAMUNIFORM1FPROC glProgramUniform1f;
#endif
#ifdef using_glProgramUniform1fv
extern PFNGLPROGRAMUNIFORM1FVPROC glProgramUniform1fv;
#endif
#ifdef using_glProgramUniform1d
extern PFNGLPROGRAMUNIFORM1DPROC glProgramUniform1d;
#endif
#ifdef using_glProgramUniform1dv
extern PFNGLPROGRAMUNIFORM1DVPROC glProgramUniform1dv;
#endif
#ifdef using_glProgramUniform1ui
extern PFNGLPROGRAMUNIFORM1UIPROC glProgramUniform1ui;
#endif
#ifdef using_glProgramUniform1uiv
extern PFNGLPROGRAMUNIFORM1UIVPROC glProgramUniform1uiv;
#endif
#ifdef using_glProgramUniform2i
extern PFNGLPROGRAMUNIFORM2IPROC glProgramUniform2i;
#endif
#ifdef using_glProgramUniform2iv
extern PFNGLPROGRAMUNIFORM2IVPROC glProgramUniform2iv;
#endif
#ifdef using_glProgramUniform2f
extern PFNGLPROGRAMUNIFORM2FPROC glProgramUniform2f;
#endif
#ifdef using_glProgramUniform2fv
extern PFNGLPROGRAMUNIFORM2FVPROC glProgramUniform2fv;
#endif
#ifdef using_glProgramUniform2d
extern PFNGLPROGRAMUNIFORM2DPROC glProgramUniform2d;
#endif
#ifdef using_glProgramUniform2dv
extern PFNGLPROGRAMUNIFORM2DVPROC glProgramUniform2dv;
#endif
#ifdef using_glProgramUniform2ui
extern PFNGLPROGRAMUNIFORM2UIPROC glProgramUniform2ui;
#endif
#ifdef using_glProgramUniform2uiv
extern PFNGLPROGRAMUNIFORM2UIVPROC glProgramUniform2uiv;
#endif
#ifdef using_glProgramUniform3i
extern PFNGLPROGRAMUNIFORM3IPROC glProgramUniform3i;
#endif
#ifdef using_glProgramUniform3iv
extern PFNGLPROGRAMUNIFORM3IVPROC glProgramUniform3iv;
#endif
#ifdef using_glProgramUniform3f
extern PFNGLPROGRAMUNIFORM3FPROC glProgramUniform3f;
#endif
#ifdef using_glProgramUniform3fv
extern PFNGLPROGRAMUNIFORM3FVPROC glProgramUniform3fv;
#endif
#ifdef using_glProgramUniform3d
extern PFNGLPROGRAMUNIFORM3DPROC glProgramUniform3d;
#endif
#ifdef using_glProgramUniform3dv
extern PFNGLPROGRAMUNIFORM3DVPROC glProgramUniform3dv;
#endif
#ifdef using_glProgramUniform3ui
extern PFNGLPROGRAMUNIFORM3UIPROC glProgramUniform3ui;
#endif
#ifdef using_glProgramUniform3uiv
extern PFNGLPROGRAMUNIFORM3UIVPROC glProgramUniform3uiv;
#endif
#ifdef using_glProgramUniform4i
extern PFNGLPROGRAMUNIFORM4IPROC glProgramUniform4i;
#endif
#ifdef using_glProgramUniform4iv
extern PFNGLPROGRAMUNIFORM4IVPROC glProgramUniform4iv;
#endif
#ifdef using_glProgramUniform4f
extern PFNGLPROGRAMUNIFORM4FPROC glProgramUniform4f;
#endif
#ifdef using_glProgramUniform4fv
extern PFNGLPROGRAMUNIFORM4FVPROC glProgramUniform4fv;
#endif
#ifdef using_glProgramUniform4d
extern PFNGLPROGRAMUNIFORM4DPROC glProgramUniform4d;
#endif
#ifdef using_glProgramUniform4dv
extern PFNGLPROGRAMUNIFORM4DVPROC glProgramUniform4dv;
#endif
#ifdef using_glProgramUniform4ui
extern PFNGLPROGRAMUNIFORM4UIPROC glProgramUniform4ui;
#endif
#ifdef using_glProgramUniform4uiv
extern PFNGLPROGRAMUNIFORM4UIVPROC glProgramUniform4uiv;
#endif
#ifdef using_glProgramUniformMatrix2fv
extern PFNGLPROGRAMUNIFORMMATRIX2FVPROC glProgramUniformMatrix2fv;
#endif
#ifdef using_glProgramUniformMatrix3fv
extern PFNGLPROGRAMUNIFORMMATRIX3FVPROC glProgramUniformMatrix3fv;
#endif
#ifdef using_glProgramUniformMatrix4fv
extern PFNGLPROGRAMUNIFORMMATRIX4FVPROC glProgramUniformMatrix4fv;
#endif
#ifdef using_glProgramUniformMatrix2dv
extern PFNGLPROGRAMUNIFORMMATRIX2DVPROC glProgramUniformMatrix2dv;
#endif
#ifdef using_glProgramUniformMatrix3dv
extern PFNGLPROGRAMUNIFORMMATRIX3DVPROC glProgramUniformMatrix3dv;
#endif
#ifdef using_glProgramUniformMatrix4dv
extern PFNGLPROGRAMUNIFORMMATRIX4DVPROC glProgramUniformMatrix4dv;
#endif
#ifdef using_glProgramUniformMatrix2x3fv
extern PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glProgramUniformMatrix2x3fv;
#endif
#ifdef using_glProgramUniformMatrix3x2fv
extern PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glProgramUniformMatrix3x2fv;
#endif
#ifdef using_glProgramUniformMatrix2x4fv
extern PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glProgramUniformMatrix2x4fv;
#endif
#ifdef using_glProgramUniformMatrix4x2fv
extern PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glProgramUniformMatrix4x2fv;
#endif
#ifdef using_glProgramUniformMatrix3x4fv
extern PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glProgramUniformMatrix3x4fv;
#endif
#ifdef using_glProgramUniformMatrix4x3fv
extern PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glProgramUniformMatrix4x3fv;
#endif
#ifdef using_glProgramUniformMatrix2x3dv
extern PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glProgramUniformMatrix2x3dv;
#endif
#ifdef using_glProgramUniformMatrix3x2dv
extern PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glProgramUniformMatrix3x2dv;
#endif
#ifdef using_glProgramUniformMatrix2x4dv
extern PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glProgramUniformMatrix2x4dv;
#endif
#ifdef using_glProgramUniformMatrix4x2dv
extern PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glProgramUniformMatrix4x2dv;
#endif
#ifdef using_glProgramUniformMatrix3x4dv
extern PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glProgramUniformMatrix3x4dv;
#endif
#ifdef using_glProgramUniformMatrix4x3dv
extern PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glProgramUniformMatrix4x3dv;
#endif
#ifdef using_glValidateProgramPipeline
extern PFNGLVALIDATEPROGRAMPIPELINEPROC glValidateProgramPipeline;
#endif
#ifdef using_glGetProgramPipelineInfoLog
extern PFNGLGETPROGRAMPIPELINEINFOLOGPROC glGetProgramPipelineInfoLog;
#endif
#ifdef using_glVertexAttribL1d
extern PFNGLVERTEXATTRIBL1DPROC glVertexAttribL1d;
#endif
#ifdef using_glVertexAttribL2d
extern PFNGLVERTEXATTRIBL2DPROC glVertexAttribL2d;
#endif
#ifdef using_glVertexAttribL3d
extern PFNGLVERTEXATTRIBL3DPROC glVertexAttribL3d;
#endif
#ifdef using_glVertexAttribL4d
extern PFNGLVERTEXATTRIBL4DPROC glVertexAttribL4d;
#endif
#ifdef using_glVertexAttribL1dv
extern PFNGLVERTEXATTRIBL1DVPROC glVertexAttribL1dv;
#endif
#ifdef using_glVertexAttribL2dv
extern PFNGLVERTEXATTRIBL2DVPROC glVertexAttribL2dv;
#endif
#ifdef using_glVertexAttribL3dv
extern PFNGLVERTEXATTRIBL3DVPROC glVertexAttribL3dv;
#endif
#ifdef using_glVertexAttribL4dv
extern PFNGLVERTEXATTRIBL4DVPROC glVertexAttribL4dv;
#endif
#ifdef using_glVertexAttribLPointer
extern PFNGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer;
#endif
#ifdef using_glGetVertexAttribLdv
extern PFNGLGETVERTEXATTRIBLDVPROC glGetVertexAttribLdv;
#endif
#ifdef using_glViewportArrayv
extern PFNGLVIEWPORTARRAYVPROC glViewportArrayv;
#endif
#ifdef using_glViewportIndexedf
extern PFNGLVIEWPORTINDEXEDFPROC glViewportIndexedf;
#endif
#ifdef using_glViewportIndexedfv
extern PFNGLVIEWPORTINDEXEDFVPROC glViewportIndexedfv;
#endif
#ifdef using_glScissorArrayv
extern PFNGLSCISSORARRAYVPROC glScissorArrayv;
#endif
#ifdef using_glScissorIndexed
extern PFNGLSCISSORINDEXEDPROC glScissorIndexed;
#endif
#ifdef using_glScissorIndexedv
extern PFNGLSCISSORINDEXEDVPROC glScissorIndexedv;
#endif
#ifdef using_glDepthRangeArrayv
extern PFNGLDEPTHRANGEARRAYVPROC glDepthRangeArrayv;
#endif
#ifdef using_glDepthRangeIndexed
extern PFNGLDEPTHRANGEINDEXEDPROC glDepthRangeIndexed;
#endif
#ifdef using_glGetFloati_v
extern PFNGLGETFLOATI_VPROC glGetFloati_v;
#endif
#ifdef using_glGetDoublei_v
extern PFNGLGETDOUBLEI_VPROC glGetDoublei_v;
#endif

#endif


//
#ifdef define_core_4_2
#ifdef using_glDrawArraysInstancedBaseInstance
extern PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC glDrawArraysInstancedBaseInstance;
#endif
#ifdef using_glDrawElementsInstancedBaseInstance
extern PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC glDrawElementsInstancedBaseInstance;
#endif
#ifdef using_glDrawElementsInstancedBaseVertexBaseInstance
extern PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC glDrawElementsInstancedBaseVertexBaseInstance;
#endif
#ifdef using_glGetInternalformativ
extern PFNGLGETINTERNALFORMATIVPROC glGetInternalformativ;
#endif
#ifdef using_glGetActiveAtomicCounterBufferiv
extern PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC glGetActiveAtomicCounterBufferiv;
#endif
#ifdef using_glBindImageTexture
extern PFNGLBINDIMAGETEXTUREPROC glBindImageTexture;
#endif
#ifdef using_glMemoryBarrier
extern PFNGLMEMORYBARRIERPROC glMemoryBarrier;
#endif
#ifdef using_glTexStorage1D
extern PFNGLTEXSTORAGE1DPROC glTexStorage1D;
#endif
#ifdef using_glTexStorage2D
extern PFNGLTEXSTORAGE2DPROC glTexStorage2D;
#endif
#ifdef using_glTexStorage3D
extern PFNGLTEXSTORAGE3DPROC glTexStorage3D;
#endif
#ifdef using_glDrawTransformFeedbackInstanced
extern PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC glDrawTransformFeedbackInstanced;
#endif
#ifdef using_glDrawTransformFeedbackStreamInstanced
extern PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC glDrawTransformFeedbackStreamInstanced;
#endif

#endif


//
#ifdef define_core_4_3
#ifdef using_glClearBufferData
extern PFNGLCLEARBUFFERDATAPROC glClearBufferData;
#endif
#ifdef using_glClearBufferSubData
extern PFNGLCLEARBUFFERSUBDATAPROC glClearBufferSubData;
#endif
#ifdef using_glDispatchCompute
extern PFNGLDISPATCHCOMPUTEPROC glDispatchCompute;
#endif
#ifdef using_glDispatchComputeIndirect
extern PFNGLDISPATCHCOMPUTEINDIRECTPROC glDispatchComputeIndirect;
#endif
#ifdef using_glCopyImageSubData
extern PFNGLCOPYIMAGESUBDATAPROC glCopyImageSubData;
#endif
#ifdef using_glFramebufferParameteri
extern PFNGLFRAMEBUFFERPARAMETERIPROC glFramebufferParameteri;
#endif
#ifdef using_glGetFramebufferParameteriv
extern PFNGLGETFRAMEBUFFERPARAMETERIVPROC glGetFramebufferParameteriv;
#endif
#ifdef using_glGetInternalformati64v
extern PFNGLGETINTERNALFORMATI64VPROC glGetInternalformati64v;
#endif
#ifdef using_glInvalidateTexSubImage
extern PFNGLINVALIDATETEXSUBIMAGEPROC glInvalidateTexSubImage;
#endif
#ifdef using_glInvalidateTexImage
extern PFNGLINVALIDATETEXIMAGEPROC glInvalidateTexImage;
#endif
#ifdef using_glInvalidateBufferSubData
extern PFNGLINVALIDATEBUFFERSUBDATAPROC glInvalidateBufferSubData;
#endif
#ifdef using_glInvalidateBufferData
extern PFNGLINVALIDATEBUFFERDATAPROC glInvalidateBufferData;
#endif
#ifdef using_glInvalidateFramebuffer
extern PFNGLINVALIDATEFRAMEBUFFERPROC glInvalidateFramebuffer;
#endif
#ifdef using_glInvalidateSubFramebuffer
extern PFNGLINVALIDATESUBFRAMEBUFFERPROC glInvalidateSubFramebuffer;
#endif
#ifdef using_glMultiDrawArraysIndirect
extern PFNGLMULTIDRAWARRAYSINDIRECTPROC glMultiDrawArraysIndirect;
#endif
#ifdef using_glMultiDrawElementsIndirect
extern PFNGLMULTIDRAWELEMENTSINDIRECTPROC glMultiDrawElementsIndirect;
#endif
#ifdef using_glGetProgramInterfaceiv
extern PFNGLGETPROGRAMINTERFACEIVPROC glGetProgramInterfaceiv;
#endif
#ifdef using_glGetProgramResourceIndex
extern PFNGLGETPROGRAMRESOURCEINDEXPROC glGetProgramResourceIndex;
#endif
#ifdef using_glGetProgramResourceName
extern PFNGLGETPROGRAMRESOURCENAMEPROC glGetProgramResourceName;
#endif
#ifdef using_glGetProgramResourceiv
extern PFNGLGETPROGRAMRESOURCEIVPROC glGetProgramResourceiv;
#endif
#ifdef using_glGetProgramResourceLocation
extern PFNGLGETPROGRAMRESOURCELOCATIONPROC glGetProgramResourceLocation;
#endif
#ifdef using_glGetProgramResourceLocationIndex
extern PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC glGetProgramResourceLocationIndex;
#endif
#ifdef using_glShaderStorageBlockBinding
extern PFNGLSHADERSTORAGEBLOCKBINDINGPROC glShaderStorageBlockBinding;
#endif
#ifdef using_glTexBufferRange
extern PFNGLTEXBUFFERRANGEPROC glTexBufferRange;
#endif
#ifdef using_glTexStorage2DMultisample
extern PFNGLTEXSTORAGE2DMULTISAMPLEPROC glTexStorage2DMultisample;
#endif
#ifdef using_glTexStorage3DMultisample
extern PFNGLTEXSTORAGE3DMULTISAMPLEPROC glTexStorage3DMultisample;
#endif
#ifdef using_glTextureView
extern PFNGLTEXTUREVIEWPROC glTextureView;
#endif
#ifdef using_glBindVertexBuffer
extern PFNGLBINDVERTEXBUFFERPROC glBindVertexBuffer;
#endif
#ifdef using_glVertexAttribFormat
extern PFNGLVERTEXATTRIBFORMATPROC glVertexAttribFormat;
#endif
#ifdef using_glVertexAttribIFormat
extern PFNGLVERTEXATTRIBIFORMATPROC glVertexAttribIFormat;
#endif
#ifdef using_glVertexAttribLFormat
extern PFNGLVERTEXATTRIBLFORMATPROC glVertexAttribLFormat;
#endif
#ifdef using_glVertexAttribBinding
extern PFNGLVERTEXATTRIBBINDINGPROC glVertexAttribBinding;
#endif
#ifdef using_glVertexBindingDivisor
extern PFNGLVERTEXBINDINGDIVISORPROC glVertexBindingDivisor;
#endif
#ifdef using_glDebugMessageControl
extern PFNGLDEBUGMESSAGECONTROLPROC glDebugMessageControl;
#endif
#ifdef using_glDebugMessageInsert
extern PFNGLDEBUGMESSAGEINSERTPROC glDebugMessageInsert;
#endif
#ifdef using_glDebugMessageCallback
extern PFNGLDEBUGMESSAGECALLBACKPROC glDebugMessageCallback;
#endif
#ifdef using_glGetDebugMessageLog
extern PFNGLGETDEBUGMESSAGELOGPROC glGetDebugMessageLog;
#endif
#ifdef using_glPushDebugGroup
extern PFNGLPUSHDEBUGGROUPPROC glPushDebugGroup;
#endif
#ifdef using_glPopDebugGroup
extern PFNGLPOPDEBUGGROUPPROC glPopDebugGroup;
#endif
#ifdef using_glObjectLabel
extern PFNGLOBJECTLABELPROC glObjectLabel;
#endif
#ifdef using_glGetObjectLabel
extern PFNGLGETOBJECTLABELPROC glGetObjectLabel;
#endif
#ifdef using_glObjectPtrLabel
extern PFNGLOBJECTPTRLABELPROC glObjectPtrLabel;
#endif
#ifdef using_glGetObjectPtrLabel
extern PFNGLGETOBJECTPTRLABELPROC glGetObjectPtrLabel;
#endif

#endif


//
#ifdef define_core_4_4
#ifdef using_glBufferStorage
extern PFNGLBUFFERSTORAGEPROC glBufferStorage;
#endif
#ifdef using_glClearTexImage
extern PFNGLCLEARTEXIMAGEPROC glClearTexImage;
#endif
#ifdef using_glClearTexSubImage
extern PFNGLCLEARTEXSUBIMAGEPROC glClearTexSubImage;
#endif
#ifdef using_glBindBuffersBase
extern PFNGLBINDBUFFERSBASEPROC glBindBuffersBase;
#endif
#ifdef using_glBindBuffersRange
extern PFNGLBINDBUFFERSRANGEPROC glBindBuffersRange;
#endif
#ifdef using_glBindTextures
extern PFNGLBINDTEXTURESPROC glBindTextures;
#endif
#ifdef using_glBindSamplers
extern PFNGLBINDSAMPLERSPROC glBindSamplers;
#endif
#ifdef using_glBindImageTextures
extern PFNGLBINDIMAGETEXTURESPROC glBindImageTextures;
#endif
#ifdef using_glBindVertexBuffers
extern PFNGLBINDVERTEXBUFFERSPROC glBindVertexBuffers;
#endif

#endif


//
#ifdef define_GL_ARB_ES2_compatibility

#endif


//
#ifdef define_GL_ARB_ES3_compatibility

#endif


//
#ifdef define_GL_ARB_arrays_of_arrays

#endif


//
#ifdef define_GL_ARB_base_instance

#endif


//
#ifdef define_GL_ARB_bindless_texture
#ifdef using_glGetTextureHandleARB
extern PFNGLGETTEXTUREHANDLEARBPROC glGetTextureHandleARB;
#endif
#ifdef using_glGetTextureSamplerHandleARB
extern PFNGLGETTEXTURESAMPLERHANDLEARBPROC glGetTextureSamplerHandleARB;
#endif
#ifdef using_glMakeTextureHandleResidentARB
extern PFNGLMAKETEXTUREHANDLERESIDENTARBPROC glMakeTextureHandleResidentARB;
#endif
#ifdef using_glMakeTextureHandleNonResidentARB
extern PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC glMakeTextureHandleNonResidentARB;
#endif
#ifdef using_glGetImageHandleARB
extern PFNGLGETIMAGEHANDLEARBPROC glGetImageHandleARB;
#endif
#ifdef using_glMakeImageHandleResidentARB
extern PFNGLMAKEIMAGEHANDLERESIDENTARBPROC glMakeImageHandleResidentARB;
#endif
#ifdef using_glMakeImageHandleNonResidentARB
extern PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC glMakeImageHandleNonResidentARB;
#endif
#ifdef using_glUniformHandleui64ARB
extern PFNGLUNIFORMHANDLEUI64ARBPROC glUniformHandleui64ARB;
#endif
#ifdef using_glUniformHandleui64vARB
extern PFNGLUNIFORMHANDLEUI64VARBPROC glUniformHandleui64vARB;
#endif
#ifdef using_glProgramUniformHandleui64ARB
extern PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC glProgramUniformHandleui64ARB;
#endif
#ifdef using_glProgramUniformHandleui64vARB
extern PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC glProgramUniformHandleui64vARB;
#endif
#ifdef using_glIsTextureHandleResidentARB
extern PFNGLISTEXTUREHANDLERESIDENTARBPROC glIsTextureHandleResidentARB;
#endif
#ifdef using_glIsImageHandleResidentARB
extern PFNGLISIMAGEHANDLERESIDENTARBPROC glIsImageHandleResidentARB;
#endif
#ifdef using_glVertexAttribL1ui64ARB
extern PFNGLVERTEXATTRIBL1UI64ARBPROC glVertexAttribL1ui64ARB;
#endif
#ifdef using_glVertexAttribL1ui64vARB
extern PFNGLVERTEXATTRIBL1UI64VARBPROC glVertexAttribL1ui64vARB;
#endif
#ifdef using_glGetVertexAttribLui64vARB
extern PFNGLGETVERTEXATTRIBLUI64VARBPROC glGetVertexAttribLui64vARB;
#endif

#endif


//
#ifdef define_GL_ARB_blend_func_extended

#endif


//
#ifdef define_GL_ARB_buffer_storage

#endif


//
#ifdef define_GL_ARB_cl_event
#ifdef using_glCreateSyncFromCLeventARB
extern PFNGLCREATESYNCFROMCLEVENTARBPROC glCreateSyncFromCLeventARB;
#endif

#endif


//
#ifdef define_GL_ARB_clear_buffer_object

#endif


//
#ifdef define_GL_ARB_clear_texture

#endif


//
#ifdef define_GL_ARB_compressed_texture_pixel_storage

#endif


//
#ifdef define_GL_ARB_compute_shader

#endif


//
#ifdef define_GL_ARB_compute_variable_group_size
#ifdef using_glDispatchComputeGroupSizeARB
extern PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC glDispatchComputeGroupSizeARB;
#endif

#endif


//
#ifdef define_GL_ARB_conservative_depth

#endif


//
#ifdef define_GL_ARB_copy_buffer

#endif


//
#ifdef define_GL_ARB_copy_image

#endif


//
#ifdef define_GL_ARB_debug_output
#ifdef using_glDebugMessageControlARB
extern PFNGLDEBUGMESSAGECONTROLARBPROC glDebugMessageControlARB;
#endif
#ifdef using_glDebugMessageInsertARB
extern PFNGLDEBUGMESSAGEINSERTARBPROC glDebugMessageInsertARB;
#endif
#ifdef using_glDebugMessageCallbackARB
extern PFNGLDEBUGMESSAGECALLBACKARBPROC glDebugMessageCallbackARB;
#endif
#ifdef using_glGetDebugMessageLogARB
extern PFNGLGETDEBUGMESSAGELOGARBPROC glGetDebugMessageLogARB;
#endif

#endif


//
#ifdef define_GL_ARB_depth_buffer_float

#endif


//
#ifdef define_GL_ARB_depth_clamp

#endif


//
#ifdef define_GL_ARB_draw_buffers_blend
#ifdef using_glBlendEquationiARB
extern PFNGLBLENDEQUATIONIARBPROC glBlendEquationiARB;
#endif
#ifdef using_glBlendEquationSeparateiARB
extern PFNGLBLENDEQUATIONSEPARATEIARBPROC glBlendEquationSeparateiARB;
#endif
#ifdef using_glBlendFunciARB
extern PFNGLBLENDFUNCIARBPROC glBlendFunciARB;
#endif
#ifdef using_glBlendFuncSeparateiARB
extern PFNGLBLENDFUNCSEPARATEIARBPROC glBlendFuncSeparateiARB;
#endif

#endif


//
#ifdef define_GL_ARB_draw_elements_base_vertex

#endif


//
#ifdef define_GL_ARB_draw_indirect

#endif


//
#ifdef define_GL_ARB_enhanced_layouts

#endif


//
#ifdef define_GL_ARB_explicit_attrib_location

#endif


//
#ifdef define_GL_ARB_explicit_uniform_location

#endif


//
#ifdef define_GL_ARB_fragment_coord_conventions

#endif


//
#ifdef define_GL_ARB_fragment_layer_viewport

#endif


//
#ifdef define_GL_ARB_framebuffer_no_attachments

#endif


//
#ifdef define_GL_ARB_framebuffer_object

#endif


//
#ifdef define_GL_ARB_framebuffer_sRGB

#endif


//
#ifdef define_GL_ARB_get_program_binary

#endif


//
#ifdef define_GL_ARB_gpu_shader5

#endif


//
#ifdef define_GL_ARB_gpu_shader_fp64

#endif


//
#ifdef define_GL_ARB_half_float_vertex

#endif


//
#ifdef define_GL_ARB_imaging

#endif


//
#ifdef define_GL_ARB_indirect_parameters
#ifdef using_glMultiDrawArraysIndirectCountARB
extern PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC glMultiDrawArraysIndirectCountARB;
#endif
#ifdef using_glMultiDrawElementsIndirectCountARB
extern PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC glMultiDrawElementsIndirectCountARB;
#endif

#endif


//
#ifdef define_GL_ARB_internalformat_query

#endif


//
#ifdef define_GL_ARB_internalformat_query2

#endif


//
#ifdef define_GL_ARB_invalidate_subdata

#endif


//
#ifdef define_GL_ARB_map_buffer_alignment

#endif


//
#ifdef define_GL_ARB_map_buffer_range

#endif


//
#ifdef define_GL_ARB_multi_bind

#endif


//
#ifdef define_GL_ARB_multi_draw_indirect

#endif


//
#ifdef define_GL_ARB_occlusion_query2

#endif


//
#ifdef define_GL_ARB_program_interface_query

#endif


//
#ifdef define_GL_ARB_provoking_vertex

#endif


//
#ifdef define_GL_ARB_query_buffer_object

#endif


//
#ifdef define_GL_ARB_robust_buffer_access_behavior

#endif


//
#ifdef define_GL_ARB_robustness
#ifdef using_glGetGraphicsResetStatusARB
extern PFNGLGETGRAPHICSRESETSTATUSARBPROC glGetGraphicsResetStatusARB;
#endif
#ifdef using_glGetnTexImageARB
extern PFNGLGETNTEXIMAGEARBPROC glGetnTexImageARB;
#endif
#ifdef using_glReadnPixelsARB
extern PFNGLREADNPIXELSARBPROC glReadnPixelsARB;
#endif
#ifdef using_glGetnCompressedTexImageARB
extern PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC glGetnCompressedTexImageARB;
#endif
#ifdef using_glGetnUniformfvARB
extern PFNGLGETNUNIFORMFVARBPROC glGetnUniformfvARB;
#endif
#ifdef using_glGetnUniformivARB
extern PFNGLGETNUNIFORMIVARBPROC glGetnUniformivARB;
#endif
#ifdef using_glGetnUniformuivARB
extern PFNGLGETNUNIFORMUIVARBPROC glGetnUniformuivARB;
#endif
#ifdef using_glGetnUniformdvARB
extern PFNGLGETNUNIFORMDVARBPROC glGetnUniformdvARB;
#endif

#endif


//
#ifdef define_GL_ARB_robustness_isolation

#endif


//
#ifdef define_GL_ARB_sample_shading
#ifdef using_glMinSampleShadingARB
extern PFNGLMINSAMPLESHADINGARBPROC glMinSampleShadingARB;
#endif

#endif


//
#ifdef define_GL_ARB_sampler_objects

#endif


//
#ifdef define_GL_ARB_seamless_cube_map

#endif


//
#ifdef define_GL_ARB_seamless_cubemap_per_texture

#endif


//
#ifdef define_GL_ARB_separate_shader_objects

#endif


//
#ifdef define_GL_ARB_shader_atomic_counters

#endif


//
#ifdef define_GL_ARB_shader_bit_encoding

#endif


//
#ifdef define_GL_ARB_shader_draw_parameters

#endif


//
#ifdef define_GL_ARB_shader_group_vote

#endif


//
#ifdef define_GL_ARB_shader_image_load_store

#endif


//
#ifdef define_GL_ARB_shader_image_size

#endif


//
#ifdef define_GL_ARB_shader_precision

#endif


//
#ifdef define_GL_ARB_shader_stencil_export

#endif


//
#ifdef define_GL_ARB_shader_storage_buffer_object

#endif


//
#ifdef define_GL_ARB_shader_subroutine

#endif


//
#ifdef define_GL_ARB_shading_language_420pack

#endif


//
#ifdef define_GL_ARB_shading_language_include
#ifdef using_glNamedStringARB
extern PFNGLNAMEDSTRINGARBPROC glNamedStringARB;
#endif
#ifdef using_glDeleteNamedStringARB
extern PFNGLDELETENAMEDSTRINGARBPROC glDeleteNamedStringARB;
#endif
#ifdef using_glCompileShaderIncludeARB
extern PFNGLCOMPILESHADERINCLUDEARBPROC glCompileShaderIncludeARB;
#endif
#ifdef using_glIsNamedStringARB
extern PFNGLISNAMEDSTRINGARBPROC glIsNamedStringARB;
#endif
#ifdef using_glGetNamedStringARB
extern PFNGLGETNAMEDSTRINGARBPROC glGetNamedStringARB;
#endif
#ifdef using_glGetNamedStringivARB
extern PFNGLGETNAMEDSTRINGIVARBPROC glGetNamedStringivARB;
#endif

#endif


//
#ifdef define_GL_ARB_shading_language_packing

#endif


//
#ifdef define_GL_ARB_sparse_texture
#ifdef using_glTexPageCommitmentARB
extern PFNGLTEXPAGECOMMITMENTARBPROC glTexPageCommitmentARB;
#endif

#endif


//
#ifdef define_GL_ARB_stencil_texturing

#endif


//
#ifdef define_GL_ARB_sync

#endif


//
#ifdef define_GL_ARB_tessellation_shader

#endif


//
#ifdef define_GL_ARB_texture_buffer_object_rgb32

#endif


//
#ifdef define_GL_ARB_texture_buffer_range

#endif


//
#ifdef define_GL_ARB_texture_compression_bptc

#endif


//
#ifdef define_GL_ARB_texture_compression_rgtc

#endif


//
#ifdef define_GL_ARB_texture_cube_map_array

#endif


//
#ifdef define_GL_ARB_texture_gather

#endif


//
#ifdef define_GL_ARB_texture_mirror_clamp_to_edge

#endif


//
#ifdef define_GL_ARB_texture_multisample

#endif


//
#ifdef define_GL_ARB_texture_query_levels

#endif


//
#ifdef define_GL_ARB_texture_query_lod

#endif


//
#ifdef define_GL_ARB_texture_rg

#endif


//
#ifdef define_GL_ARB_texture_rgb10_a2ui

#endif


//
#ifdef define_GL_ARB_texture_stencil8

#endif


//
#ifdef define_GL_ARB_texture_storage

#endif


//
#ifdef define_GL_ARB_texture_storage_multisample

#endif


//
#ifdef define_GL_ARB_texture_swizzle

#endif


//
#ifdef define_GL_ARB_texture_view

#endif


//
#ifdef define_GL_ARB_timer_query

#endif


//
#ifdef define_GL_ARB_transform_feedback2

#endif


//
#ifdef define_GL_ARB_transform_feedback3

#endif


//
#ifdef define_GL_ARB_transform_feedback_instanced

#endif


//
#ifdef define_GL_ARB_uniform_buffer_object

#endif


//
#ifdef define_GL_ARB_vertex_array_bgra

#endif


//
#ifdef define_GL_ARB_vertex_array_object

#endif


//
#ifdef define_GL_ARB_vertex_attrib_64bit

#endif


//
#ifdef define_GL_ARB_vertex_attrib_binding

#endif


//
#ifdef define_GL_ARB_vertex_type_10f_11f_11f_rev

#endif


//
#ifdef define_GL_ARB_vertex_type_2_10_10_10_rev

#endif


//
#ifdef define_GL_ARB_viewport_array

#endif


//
#ifdef define_GL_KHR_debug

#endif


//
#ifdef define_GL_KHR_texture_compression_astc_hdr

#endif


//
#ifdef define_GL_KHR_texture_compression_astc_ldr

#endif


#endif // _GLELP_GLCOREARB_H_
