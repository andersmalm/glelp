#include "glelpDefines.h"


// OpenGL_1_2

void glelp::init_OpenGL_1_2()
{
	if(!glelpInternal::checkVersion(1, 2))
		return;




}

// GL_ARB_imaging

void glelp::init_GL_ARB_imaging()
{
	if(!glelpInternal::checkAvailable("GL_ARB_imaging"))
		return;

}

// OpenGL_1_3

void glelp::init_OpenGL_1_3()
{
	if(!glelpInternal::checkVersion(1, 3))
		return;



	init_OpenGL_1_2();

}

// OpenGL_1_4

void glelp::init_OpenGL_1_4()
{
	if(!glelpInternal::checkVersion(1, 4))
		return;



	init_OpenGL_1_3();

}

// OpenGL_1_5

void glelp::init_OpenGL_1_5()
{
	if(!glelpInternal::checkVersion(1, 5))
		return;



	init_OpenGL_1_4();

}

// OpenGL_2_0

void glelp::init_OpenGL_2_0()
{
	if(!glelpInternal::checkVersion(2, 0))
		return;



	init_OpenGL_1_5();

}

// OpenGL_2_1

void glelp::init_OpenGL_2_1()
{
	if(!glelpInternal::checkVersion(2, 1))
		return;



	init_OpenGL_2_0();

}

// OpenGL_3_0
PFNGLCOLORMASKIPROC glColorMaski;
PFNGLGETBOOLEANI_VPROC glGetBooleani_v;
PFNGLGETINTEGERI_VPROC glGetIntegeri_v;
PFNGLENABLEIPROC glEnablei;
PFNGLDISABLEIPROC glDisablei;
PFNGLISENABLEDIPROC glIsEnabledi;
PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback;
PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback;
PFNGLBINDBUFFERRANGEPROC glBindBufferRange;
PFNGLBINDBUFFERBASEPROC glBindBufferBase;
PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings;
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying;
PFNGLCLAMPCOLORPROC glClampColor;
PFNGLBEGINCONDITIONALRENDERPROC glBeginConditionalRender;
PFNGLENDCONDITIONALRENDERPROC glEndConditionalRender;
PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer;
PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv;
PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv;
PFNGLVERTEXATTRIBI1IPROC glVertexAttribI1i;
PFNGLVERTEXATTRIBI2IPROC glVertexAttribI2i;
PFNGLVERTEXATTRIBI3IPROC glVertexAttribI3i;
PFNGLVERTEXATTRIBI4IPROC glVertexAttribI4i;
PFNGLVERTEXATTRIBI1UIPROC glVertexAttribI1ui;
PFNGLVERTEXATTRIBI2UIPROC glVertexAttribI2ui;
PFNGLVERTEXATTRIBI3UIPROC glVertexAttribI3ui;
PFNGLVERTEXATTRIBI4UIPROC glVertexAttribI4ui;
PFNGLVERTEXATTRIBI1IVPROC glVertexAttribI1iv;
PFNGLVERTEXATTRIBI2IVPROC glVertexAttribI2iv;
PFNGLVERTEXATTRIBI3IVPROC glVertexAttribI3iv;
PFNGLVERTEXATTRIBI4IVPROC glVertexAttribI4iv;
PFNGLVERTEXATTRIBI1UIVPROC glVertexAttribI1uiv;
PFNGLVERTEXATTRIBI2UIVPROC glVertexAttribI2uiv;
PFNGLVERTEXATTRIBI3UIVPROC glVertexAttribI3uiv;
PFNGLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv;
PFNGLVERTEXATTRIBI4BVPROC glVertexAttribI4bv;
PFNGLVERTEXATTRIBI4SVPROC glVertexAttribI4sv;
PFNGLVERTEXATTRIBI4UBVPROC glVertexAttribI4ubv;
PFNGLVERTEXATTRIBI4USVPROC glVertexAttribI4usv;
PFNGLGETUNIFORMUIVPROC glGetUniformuiv;
PFNGLBINDFRAGDATALOCATIONPROC glBindFragDataLocation;
PFNGLGETFRAGDATALOCATIONPROC glGetFragDataLocation;
PFNGLUNIFORM1UIPROC glUniform1ui;
PFNGLUNIFORM2UIPROC glUniform2ui;
PFNGLUNIFORM3UIPROC glUniform3ui;
PFNGLUNIFORM4UIPROC glUniform4ui;
PFNGLUNIFORM1UIVPROC glUniform1uiv;
PFNGLUNIFORM2UIVPROC glUniform2uiv;
PFNGLUNIFORM3UIVPROC glUniform3uiv;
PFNGLUNIFORM4UIVPROC glUniform4uiv;
PFNGLTEXPARAMETERIIVPROC glTexParameterIiv;
PFNGLTEXPARAMETERIUIVPROC glTexParameterIuiv;
PFNGLGETTEXPARAMETERIIVPROC glGetTexParameterIiv;
PFNGLGETTEXPARAMETERIUIVPROC glGetTexParameterIuiv;
PFNGLCLEARBUFFERIVPROC glClearBufferiv;
PFNGLCLEARBUFFERUIVPROC glClearBufferuiv;
PFNGLCLEARBUFFERFVPROC glClearBufferfv;
PFNGLCLEARBUFFERFIPROC glClearBufferfi;
PFNGLGETSTRINGIPROC glGetStringi;

void glelp::init_OpenGL_3_0()
{
	if(!glelpInternal::checkVersion(3, 0))
		return;

	glColorMaski = (PFNGLCOLORMASKIPROC)wglGetProcAddress("glColorMaski");
	glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC)wglGetProcAddress("glGetBooleani_v");
	glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC)wglGetProcAddress("glGetIntegeri_v");
	glEnablei = (PFNGLENABLEIPROC)wglGetProcAddress("glEnablei");
	glDisablei = (PFNGLDISABLEIPROC)wglGetProcAddress("glDisablei");
	glIsEnabledi = (PFNGLISENABLEDIPROC)wglGetProcAddress("glIsEnabledi");
	glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC)wglGetProcAddress("glBeginTransformFeedback");
	glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC)wglGetProcAddress("glEndTransformFeedback");
	glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)wglGetProcAddress("glBindBufferRange");
	glBindBufferBase = (PFNGLBINDBUFFERBASEPROC)wglGetProcAddress("glBindBufferBase");
	glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC)wglGetProcAddress("glTransformFeedbackVaryings");
	glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)wglGetProcAddress("glGetTransformFeedbackVarying");
	glClampColor = (PFNGLCLAMPCOLORPROC)wglGetProcAddress("glClampColor");
	glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC)wglGetProcAddress("glBeginConditionalRender");
	glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC)wglGetProcAddress("glEndConditionalRender");
	glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC)wglGetProcAddress("glVertexAttribIPointer");
	glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC)wglGetProcAddress("glGetVertexAttribIiv");
	glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC)wglGetProcAddress("glGetVertexAttribIuiv");
	glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC)wglGetProcAddress("glVertexAttribI1i");
	glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC)wglGetProcAddress("glVertexAttribI2i");
	glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC)wglGetProcAddress("glVertexAttribI3i");
	glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC)wglGetProcAddress("glVertexAttribI4i");
	glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC)wglGetProcAddress("glVertexAttribI1ui");
	glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC)wglGetProcAddress("glVertexAttribI2ui");
	glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC)wglGetProcAddress("glVertexAttribI3ui");
	glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC)wglGetProcAddress("glVertexAttribI4ui");
	glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC)wglGetProcAddress("glVertexAttribI1iv");
	glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC)wglGetProcAddress("glVertexAttribI2iv");
	glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC)wglGetProcAddress("glVertexAttribI3iv");
	glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC)wglGetProcAddress("glVertexAttribI4iv");
	glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC)wglGetProcAddress("glVertexAttribI1uiv");
	glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC)wglGetProcAddress("glVertexAttribI2uiv");
	glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC)wglGetProcAddress("glVertexAttribI3uiv");
	glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC)wglGetProcAddress("glVertexAttribI4uiv");
	glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC)wglGetProcAddress("glVertexAttribI4bv");
	glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC)wglGetProcAddress("glVertexAttribI4sv");
	glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC)wglGetProcAddress("glVertexAttribI4ubv");
	glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC)wglGetProcAddress("glVertexAttribI4usv");
	glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC)wglGetProcAddress("glGetUniformuiv");
	glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC)wglGetProcAddress("glBindFragDataLocation");
	glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC)wglGetProcAddress("glGetFragDataLocation");
	glUniform1ui = (PFNGLUNIFORM1UIPROC)wglGetProcAddress("glUniform1ui");
	glUniform2ui = (PFNGLUNIFORM2UIPROC)wglGetProcAddress("glUniform2ui");
	glUniform3ui = (PFNGLUNIFORM3UIPROC)wglGetProcAddress("glUniform3ui");
	glUniform4ui = (PFNGLUNIFORM4UIPROC)wglGetProcAddress("glUniform4ui");
	glUniform1uiv = (PFNGLUNIFORM1UIVPROC)wglGetProcAddress("glUniform1uiv");
	glUniform2uiv = (PFNGLUNIFORM2UIVPROC)wglGetProcAddress("glUniform2uiv");
	glUniform3uiv = (PFNGLUNIFORM3UIVPROC)wglGetProcAddress("glUniform3uiv");
	glUniform4uiv = (PFNGLUNIFORM4UIVPROC)wglGetProcAddress("glUniform4uiv");
	glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC)wglGetProcAddress("glTexParameterIiv");
	glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC)wglGetProcAddress("glTexParameterIuiv");
	glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC)wglGetProcAddress("glGetTexParameterIiv");
	glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC)wglGetProcAddress("glGetTexParameterIuiv");
	glClearBufferiv = (PFNGLCLEARBUFFERIVPROC)wglGetProcAddress("glClearBufferiv");
	glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC)wglGetProcAddress("glClearBufferuiv");
	glClearBufferfv = (PFNGLCLEARBUFFERFVPROC)wglGetProcAddress("glClearBufferfv");
	glClearBufferfi = (PFNGLCLEARBUFFERFIPROC)wglGetProcAddress("glClearBufferfi");
	glGetStringi = (PFNGLGETSTRINGIPROC)wglGetProcAddress("glGetStringi");

	init_GL_ARB_framebuffer_object();
	init_GL_ARB_map_buffer_range();
	init_GL_ARB_vertex_array_object();


}

// OpenGL_3_1
PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced;
PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced;
PFNGLTEXBUFFERPROC glTexBuffer;
PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex;

void glelp::init_OpenGL_3_1()
{
	if(!glelpInternal::checkVersion(3, 1))
		return;

	glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC)wglGetProcAddress("glDrawArraysInstanced");
	glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC)wglGetProcAddress("glDrawElementsInstanced");
	glTexBuffer = (PFNGLTEXBUFFERPROC)wglGetProcAddress("glTexBuffer");
	glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC)wglGetProcAddress("glPrimitiveRestartIndex");

	init_GL_ARB_copy_buffer();
	init_GL_ARB_uniform_buffer_object();

	init_OpenGL_3_0();

}

// OpenGL_3_2
PFNGLGETINTEGER64I_VPROC glGetInteger64i_v;
PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v;
PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture;

void glelp::init_OpenGL_3_2()
{
	if(!glelpInternal::checkVersion(3, 2))
		return;

	glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC)wglGetProcAddress("glGetInteger64i_v");
	glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC)wglGetProcAddress("glGetBufferParameteri64v");
	glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC)wglGetProcAddress("glFramebufferTexture");

	init_GL_ARB_draw_elements_base_vertex();
	init_GL_ARB_provoking_vertex();
	init_GL_ARB_sync();
	init_GL_ARB_texture_multisample();

	init_OpenGL_3_1();

}

// OpenGL_3_3
PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;

void glelp::init_OpenGL_3_3()
{
	if(!glelpInternal::checkVersion(3, 3))
		return;

	glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC)wglGetProcAddress("glVertexAttribDivisor");

	init_GL_ARB_blend_func_extended();
	init_GL_ARB_sampler_objects();
	init_GL_ARB_explicit_attrib_location();
	init_GL_ARB_occlusion_query2();
	init_GL_ARB_shader_bit_encoding();
	init_GL_ARB_texture_rgb10_a2ui();
	init_GL_ARB_texture_swizzle();
	init_GL_ARB_timer_query();
	init_GL_ARB_vertex_type_2_10_10_10_rev();

	init_OpenGL_3_2();

}

// OpenGL_4_0
PFNGLMINSAMPLESHADINGPROC glMinSampleShading;
PFNGLBLENDEQUATIONIPROC glBlendEquationi;
PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei;
PFNGLBLENDFUNCIPROC glBlendFunci;
PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei;

void glelp::init_OpenGL_4_0()
{
	if(!glelpInternal::checkVersion(4, 0))
		return;

	glMinSampleShading = (PFNGLMINSAMPLESHADINGPROC)wglGetProcAddress("glMinSampleShading");
	glBlendEquationi = (PFNGLBLENDEQUATIONIPROC)wglGetProcAddress("glBlendEquationi");
	glBlendEquationSeparatei = (PFNGLBLENDEQUATIONSEPARATEIPROC)wglGetProcAddress("glBlendEquationSeparatei");
	glBlendFunci = (PFNGLBLENDFUNCIPROC)wglGetProcAddress("glBlendFunci");
	glBlendFuncSeparatei = (PFNGLBLENDFUNCSEPARATEIPROC)wglGetProcAddress("glBlendFuncSeparatei");

	init_GL_ARB_texture_query_lod();
	init_GL_ARB_draw_indirect();
	init_GL_ARB_gpu_shader5();
	init_GL_ARB_gpu_shader_fp64();
	init_GL_ARB_shader_subroutine();
	init_GL_ARB_tessellation_shader();
	init_GL_ARB_texture_buffer_object_rgb32();
	init_GL_ARB_texture_cube_map_array();
	init_GL_ARB_texture_gather();
	init_GL_ARB_transform_feedback2();
	init_GL_ARB_transform_feedback3();

	init_OpenGL_3_3();

}

// OpenGL_4_1

void glelp::init_OpenGL_4_1()
{
	if(!glelpInternal::checkVersion(4, 1))
		return;


	init_GL_ARB_ES2_compatibility();
	init_GL_ARB_get_program_binary();
	init_GL_ARB_separate_shader_objects();
	init_GL_ARB_shader_precision();
	init_GL_ARB_vertex_attrib_64bit();
	init_GL_ARB_viewport_array();

	init_OpenGL_4_0();

}

// GL_ARB_multitexture
PFNGLACTIVETEXTUREARBPROC glActiveTextureARB;
PFNGLCLIENTACTIVETEXTUREARBPROC glClientActiveTextureARB;
PFNGLMULTITEXCOORD1DARBPROC glMultiTexCoord1dARB;
PFNGLMULTITEXCOORD1DVARBPROC glMultiTexCoord1dvARB;
PFNGLMULTITEXCOORD1FARBPROC glMultiTexCoord1fARB;
PFNGLMULTITEXCOORD1FVARBPROC glMultiTexCoord1fvARB;
PFNGLMULTITEXCOORD1IARBPROC glMultiTexCoord1iARB;
PFNGLMULTITEXCOORD1IVARBPROC glMultiTexCoord1ivARB;
PFNGLMULTITEXCOORD1SARBPROC glMultiTexCoord1sARB;
PFNGLMULTITEXCOORD1SVARBPROC glMultiTexCoord1svARB;
PFNGLMULTITEXCOORD2DARBPROC glMultiTexCoord2dARB;
PFNGLMULTITEXCOORD2DVARBPROC glMultiTexCoord2dvARB;
PFNGLMULTITEXCOORD2FARBPROC glMultiTexCoord2fARB;
PFNGLMULTITEXCOORD2FVARBPROC glMultiTexCoord2fvARB;
PFNGLMULTITEXCOORD2IARBPROC glMultiTexCoord2iARB;
PFNGLMULTITEXCOORD2IVARBPROC glMultiTexCoord2ivARB;
PFNGLMULTITEXCOORD2SARBPROC glMultiTexCoord2sARB;
PFNGLMULTITEXCOORD2SVARBPROC glMultiTexCoord2svARB;
PFNGLMULTITEXCOORD3DARBPROC glMultiTexCoord3dARB;
PFNGLMULTITEXCOORD3DVARBPROC glMultiTexCoord3dvARB;
PFNGLMULTITEXCOORD3FARBPROC glMultiTexCoord3fARB;
PFNGLMULTITEXCOORD3FVARBPROC glMultiTexCoord3fvARB;
PFNGLMULTITEXCOORD3IARBPROC glMultiTexCoord3iARB;
PFNGLMULTITEXCOORD3IVARBPROC glMultiTexCoord3ivARB;
PFNGLMULTITEXCOORD3SARBPROC glMultiTexCoord3sARB;
PFNGLMULTITEXCOORD3SVARBPROC glMultiTexCoord3svARB;
PFNGLMULTITEXCOORD4DARBPROC glMultiTexCoord4dARB;
PFNGLMULTITEXCOORD4DVARBPROC glMultiTexCoord4dvARB;
PFNGLMULTITEXCOORD4FARBPROC glMultiTexCoord4fARB;
PFNGLMULTITEXCOORD4FVARBPROC glMultiTexCoord4fvARB;
PFNGLMULTITEXCOORD4IARBPROC glMultiTexCoord4iARB;
PFNGLMULTITEXCOORD4IVARBPROC glMultiTexCoord4ivARB;
PFNGLMULTITEXCOORD4SARBPROC glMultiTexCoord4sARB;
PFNGLMULTITEXCOORD4SVARBPROC glMultiTexCoord4svARB;

void glelp::init_GL_ARB_multitexture()
{
	if(!glelpInternal::checkAvailable("GL_ARB_multitexture"))
		return;

	glActiveTextureARB = (PFNGLACTIVETEXTUREARBPROC)wglGetProcAddress("glActiveTextureARB");
	glClientActiveTextureARB = (PFNGLCLIENTACTIVETEXTUREARBPROC)wglGetProcAddress("glClientActiveTextureARB");
	glMultiTexCoord1dARB = (PFNGLMULTITEXCOORD1DARBPROC)wglGetProcAddress("glMultiTexCoord1dARB");
	glMultiTexCoord1dvARB = (PFNGLMULTITEXCOORD1DVARBPROC)wglGetProcAddress("glMultiTexCoord1dvARB");
	glMultiTexCoord1fARB = (PFNGLMULTITEXCOORD1FARBPROC)wglGetProcAddress("glMultiTexCoord1fARB");
	glMultiTexCoord1fvARB = (PFNGLMULTITEXCOORD1FVARBPROC)wglGetProcAddress("glMultiTexCoord1fvARB");
	glMultiTexCoord1iARB = (PFNGLMULTITEXCOORD1IARBPROC)wglGetProcAddress("glMultiTexCoord1iARB");
	glMultiTexCoord1ivARB = (PFNGLMULTITEXCOORD1IVARBPROC)wglGetProcAddress("glMultiTexCoord1ivARB");
	glMultiTexCoord1sARB = (PFNGLMULTITEXCOORD1SARBPROC)wglGetProcAddress("glMultiTexCoord1sARB");
	glMultiTexCoord1svARB = (PFNGLMULTITEXCOORD1SVARBPROC)wglGetProcAddress("glMultiTexCoord1svARB");
	glMultiTexCoord2dARB = (PFNGLMULTITEXCOORD2DARBPROC)wglGetProcAddress("glMultiTexCoord2dARB");
	glMultiTexCoord2dvARB = (PFNGLMULTITEXCOORD2DVARBPROC)wglGetProcAddress("glMultiTexCoord2dvARB");
	glMultiTexCoord2fARB = (PFNGLMULTITEXCOORD2FARBPROC)wglGetProcAddress("glMultiTexCoord2fARB");
	glMultiTexCoord2fvARB = (PFNGLMULTITEXCOORD2FVARBPROC)wglGetProcAddress("glMultiTexCoord2fvARB");
	glMultiTexCoord2iARB = (PFNGLMULTITEXCOORD2IARBPROC)wglGetProcAddress("glMultiTexCoord2iARB");
	glMultiTexCoord2ivARB = (PFNGLMULTITEXCOORD2IVARBPROC)wglGetProcAddress("glMultiTexCoord2ivARB");
	glMultiTexCoord2sARB = (PFNGLMULTITEXCOORD2SARBPROC)wglGetProcAddress("glMultiTexCoord2sARB");
	glMultiTexCoord2svARB = (PFNGLMULTITEXCOORD2SVARBPROC)wglGetProcAddress("glMultiTexCoord2svARB");
	glMultiTexCoord3dARB = (PFNGLMULTITEXCOORD3DARBPROC)wglGetProcAddress("glMultiTexCoord3dARB");
	glMultiTexCoord3dvARB = (PFNGLMULTITEXCOORD3DVARBPROC)wglGetProcAddress("glMultiTexCoord3dvARB");
	glMultiTexCoord3fARB = (PFNGLMULTITEXCOORD3FARBPROC)wglGetProcAddress("glMultiTexCoord3fARB");
	glMultiTexCoord3fvARB = (PFNGLMULTITEXCOORD3FVARBPROC)wglGetProcAddress("glMultiTexCoord3fvARB");
	glMultiTexCoord3iARB = (PFNGLMULTITEXCOORD3IARBPROC)wglGetProcAddress("glMultiTexCoord3iARB");
	glMultiTexCoord3ivARB = (PFNGLMULTITEXCOORD3IVARBPROC)wglGetProcAddress("glMultiTexCoord3ivARB");
	glMultiTexCoord3sARB = (PFNGLMULTITEXCOORD3SARBPROC)wglGetProcAddress("glMultiTexCoord3sARB");
	glMultiTexCoord3svARB = (PFNGLMULTITEXCOORD3SVARBPROC)wglGetProcAddress("glMultiTexCoord3svARB");
	glMultiTexCoord4dARB = (PFNGLMULTITEXCOORD4DARBPROC)wglGetProcAddress("glMultiTexCoord4dARB");
	glMultiTexCoord4dvARB = (PFNGLMULTITEXCOORD4DVARBPROC)wglGetProcAddress("glMultiTexCoord4dvARB");
	glMultiTexCoord4fARB = (PFNGLMULTITEXCOORD4FARBPROC)wglGetProcAddress("glMultiTexCoord4fARB");
	glMultiTexCoord4fvARB = (PFNGLMULTITEXCOORD4FVARBPROC)wglGetProcAddress("glMultiTexCoord4fvARB");
	glMultiTexCoord4iARB = (PFNGLMULTITEXCOORD4IARBPROC)wglGetProcAddress("glMultiTexCoord4iARB");
	glMultiTexCoord4ivARB = (PFNGLMULTITEXCOORD4IVARBPROC)wglGetProcAddress("glMultiTexCoord4ivARB");
	glMultiTexCoord4sARB = (PFNGLMULTITEXCOORD4SARBPROC)wglGetProcAddress("glMultiTexCoord4sARB");
	glMultiTexCoord4svARB = (PFNGLMULTITEXCOORD4SVARBPROC)wglGetProcAddress("glMultiTexCoord4svARB");
}

// GL_ARB_transpose_matrix
PFNGLLOADTRANSPOSEMATRIXFARBPROC glLoadTransposeMatrixfARB;
PFNGLLOADTRANSPOSEMATRIXDARBPROC glLoadTransposeMatrixdARB;
PFNGLMULTTRANSPOSEMATRIXFARBPROC glMultTransposeMatrixfARB;
PFNGLMULTTRANSPOSEMATRIXDARBPROC glMultTransposeMatrixdARB;

void glelp::init_GL_ARB_transpose_matrix()
{
	if(!glelpInternal::checkAvailable("GL_ARB_transpose_matrix"))
		return;

	glLoadTransposeMatrixfARB = (PFNGLLOADTRANSPOSEMATRIXFARBPROC)wglGetProcAddress("glLoadTransposeMatrixfARB");
	glLoadTransposeMatrixdARB = (PFNGLLOADTRANSPOSEMATRIXDARBPROC)wglGetProcAddress("glLoadTransposeMatrixdARB");
	glMultTransposeMatrixfARB = (PFNGLMULTTRANSPOSEMATRIXFARBPROC)wglGetProcAddress("glMultTransposeMatrixfARB");
	glMultTransposeMatrixdARB = (PFNGLMULTTRANSPOSEMATRIXDARBPROC)wglGetProcAddress("glMultTransposeMatrixdARB");
}

// GL_ARB_multisample
PFNGLSAMPLECOVERAGEARBPROC glSampleCoverageARB;

void glelp::init_GL_ARB_multisample()
{
	if(!glelpInternal::checkAvailable("GL_ARB_multisample"))
		return;

	glSampleCoverageARB = (PFNGLSAMPLECOVERAGEARBPROC)wglGetProcAddress("glSampleCoverageARB");
}

// GL_ARB_texture_env_add

void glelp::init_GL_ARB_texture_env_add()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_env_add"))
		return;

}

// GL_ARB_texture_cube_map

void glelp::init_GL_ARB_texture_cube_map()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_cube_map"))
		return;

}

// GL_ARB_texture_compression
PFNGLCOMPRESSEDTEXIMAGE3DARBPROC glCompressedTexImage3DARB;
PFNGLCOMPRESSEDTEXIMAGE2DARBPROC glCompressedTexImage2DARB;
PFNGLCOMPRESSEDTEXIMAGE1DARBPROC glCompressedTexImage1DARB;
PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC glCompressedTexSubImage3DARB;
PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC glCompressedTexSubImage2DARB;
PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC glCompressedTexSubImage1DARB;
PFNGLGETCOMPRESSEDTEXIMAGEARBPROC glGetCompressedTexImageARB;

void glelp::init_GL_ARB_texture_compression()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_compression"))
		return;

	glCompressedTexImage3DARB = (PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)wglGetProcAddress("glCompressedTexImage3DARB");
	glCompressedTexImage2DARB = (PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)wglGetProcAddress("glCompressedTexImage2DARB");
	glCompressedTexImage1DARB = (PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)wglGetProcAddress("glCompressedTexImage1DARB");
	glCompressedTexSubImage3DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)wglGetProcAddress("glCompressedTexSubImage3DARB");
	glCompressedTexSubImage2DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)wglGetProcAddress("glCompressedTexSubImage2DARB");
	glCompressedTexSubImage1DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)wglGetProcAddress("glCompressedTexSubImage1DARB");
	glGetCompressedTexImageARB = (PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)wglGetProcAddress("glGetCompressedTexImageARB");
}

// GL_ARB_texture_border_clamp

void glelp::init_GL_ARB_texture_border_clamp()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_border_clamp"))
		return;

}

// GL_ARB_point_parameters
PFNGLPOINTPARAMETERFARBPROC glPointParameterfARB;
PFNGLPOINTPARAMETERFVARBPROC glPointParameterfvARB;

void glelp::init_GL_ARB_point_parameters()
{
	if(!glelpInternal::checkAvailable("GL_ARB_point_parameters"))
		return;

	glPointParameterfARB = (PFNGLPOINTPARAMETERFARBPROC)wglGetProcAddress("glPointParameterfARB");
	glPointParameterfvARB = (PFNGLPOINTPARAMETERFVARBPROC)wglGetProcAddress("glPointParameterfvARB");
}

// GL_ARB_vertex_blend
PFNGLWEIGHTBVARBPROC glWeightbvARB;
PFNGLWEIGHTSVARBPROC glWeightsvARB;
PFNGLWEIGHTIVARBPROC glWeightivARB;
PFNGLWEIGHTFVARBPROC glWeightfvARB;
PFNGLWEIGHTDVARBPROC glWeightdvARB;
PFNGLWEIGHTUBVARBPROC glWeightubvARB;
PFNGLWEIGHTUSVARBPROC glWeightusvARB;
PFNGLWEIGHTUIVARBPROC glWeightuivARB;
PFNGLWEIGHTPOINTERARBPROC glWeightPointerARB;
PFNGLVERTEXBLENDARBPROC glVertexBlendARB;

void glelp::init_GL_ARB_vertex_blend()
{
	if(!glelpInternal::checkAvailable("GL_ARB_vertex_blend"))
		return;

	glWeightbvARB = (PFNGLWEIGHTBVARBPROC)wglGetProcAddress("glWeightbvARB");
	glWeightsvARB = (PFNGLWEIGHTSVARBPROC)wglGetProcAddress("glWeightsvARB");
	glWeightivARB = (PFNGLWEIGHTIVARBPROC)wglGetProcAddress("glWeightivARB");
	glWeightfvARB = (PFNGLWEIGHTFVARBPROC)wglGetProcAddress("glWeightfvARB");
	glWeightdvARB = (PFNGLWEIGHTDVARBPROC)wglGetProcAddress("glWeightdvARB");
	glWeightubvARB = (PFNGLWEIGHTUBVARBPROC)wglGetProcAddress("glWeightubvARB");
	glWeightusvARB = (PFNGLWEIGHTUSVARBPROC)wglGetProcAddress("glWeightusvARB");
	glWeightuivARB = (PFNGLWEIGHTUIVARBPROC)wglGetProcAddress("glWeightuivARB");
	glWeightPointerARB = (PFNGLWEIGHTPOINTERARBPROC)wglGetProcAddress("glWeightPointerARB");
	glVertexBlendARB = (PFNGLVERTEXBLENDARBPROC)wglGetProcAddress("glVertexBlendARB");
}

// GL_ARB_matrix_palette
PFNGLCURRENTPALETTEMATRIXARBPROC glCurrentPaletteMatrixARB;
PFNGLMATRIXINDEXUBVARBPROC glMatrixIndexubvARB;
PFNGLMATRIXINDEXUSVARBPROC glMatrixIndexusvARB;
PFNGLMATRIXINDEXUIVARBPROC glMatrixIndexuivARB;
PFNGLMATRIXINDEXPOINTERARBPROC glMatrixIndexPointerARB;

void glelp::init_GL_ARB_matrix_palette()
{
	if(!glelpInternal::checkAvailable("GL_ARB_matrix_palette"))
		return;

	glCurrentPaletteMatrixARB = (PFNGLCURRENTPALETTEMATRIXARBPROC)wglGetProcAddress("glCurrentPaletteMatrixARB");
	glMatrixIndexubvARB = (PFNGLMATRIXINDEXUBVARBPROC)wglGetProcAddress("glMatrixIndexubvARB");
	glMatrixIndexusvARB = (PFNGLMATRIXINDEXUSVARBPROC)wglGetProcAddress("glMatrixIndexusvARB");
	glMatrixIndexuivARB = (PFNGLMATRIXINDEXUIVARBPROC)wglGetProcAddress("glMatrixIndexuivARB");
	glMatrixIndexPointerARB = (PFNGLMATRIXINDEXPOINTERARBPROC)wglGetProcAddress("glMatrixIndexPointerARB");
}

// GL_ARB_texture_env_combine

void glelp::init_GL_ARB_texture_env_combine()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_env_combine"))
		return;

}

// GL_ARB_texture_env_crossbar

void glelp::init_GL_ARB_texture_env_crossbar()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_env_crossbar"))
		return;

}

// GL_ARB_texture_env_dot3

void glelp::init_GL_ARB_texture_env_dot3()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_env_dot3"))
		return;

}

// GL_ARB_texture_mirrored_repeat

void glelp::init_GL_ARB_texture_mirrored_repeat()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_mirrored_repeat"))
		return;

}

// GL_ARB_depth_texture

void glelp::init_GL_ARB_depth_texture()
{
	if(!glelpInternal::checkAvailable("GL_ARB_depth_texture"))
		return;

}

// GL_ARB_shadow

void glelp::init_GL_ARB_shadow()
{
	if(!glelpInternal::checkAvailable("GL_ARB_shadow"))
		return;

}

// GL_ARB_shadow_ambient

void glelp::init_GL_ARB_shadow_ambient()
{
	if(!glelpInternal::checkAvailable("GL_ARB_shadow_ambient"))
		return;

}

// GL_ARB_window_pos
PFNGLWINDOWPOS2DARBPROC glWindowPos2dARB;
PFNGLWINDOWPOS2DVARBPROC glWindowPos2dvARB;
PFNGLWINDOWPOS2FARBPROC glWindowPos2fARB;
PFNGLWINDOWPOS2FVARBPROC glWindowPos2fvARB;
PFNGLWINDOWPOS2IARBPROC glWindowPos2iARB;
PFNGLWINDOWPOS2IVARBPROC glWindowPos2ivARB;
PFNGLWINDOWPOS2SARBPROC glWindowPos2sARB;
PFNGLWINDOWPOS2SVARBPROC glWindowPos2svARB;
PFNGLWINDOWPOS3DARBPROC glWindowPos3dARB;
PFNGLWINDOWPOS3DVARBPROC glWindowPos3dvARB;
PFNGLWINDOWPOS3FARBPROC glWindowPos3fARB;
PFNGLWINDOWPOS3FVARBPROC glWindowPos3fvARB;
PFNGLWINDOWPOS3IARBPROC glWindowPos3iARB;
PFNGLWINDOWPOS3IVARBPROC glWindowPos3ivARB;
PFNGLWINDOWPOS3SARBPROC glWindowPos3sARB;
PFNGLWINDOWPOS3SVARBPROC glWindowPos3svARB;

void glelp::init_GL_ARB_window_pos()
{
	if(!glelpInternal::checkAvailable("GL_ARB_window_pos"))
		return;

	glWindowPos2dARB = (PFNGLWINDOWPOS2DARBPROC)wglGetProcAddress("glWindowPos2dARB");
	glWindowPos2dvARB = (PFNGLWINDOWPOS2DVARBPROC)wglGetProcAddress("glWindowPos2dvARB");
	glWindowPos2fARB = (PFNGLWINDOWPOS2FARBPROC)wglGetProcAddress("glWindowPos2fARB");
	glWindowPos2fvARB = (PFNGLWINDOWPOS2FVARBPROC)wglGetProcAddress("glWindowPos2fvARB");
	glWindowPos2iARB = (PFNGLWINDOWPOS2IARBPROC)wglGetProcAddress("glWindowPos2iARB");
	glWindowPos2ivARB = (PFNGLWINDOWPOS2IVARBPROC)wglGetProcAddress("glWindowPos2ivARB");
	glWindowPos2sARB = (PFNGLWINDOWPOS2SARBPROC)wglGetProcAddress("glWindowPos2sARB");
	glWindowPos2svARB = (PFNGLWINDOWPOS2SVARBPROC)wglGetProcAddress("glWindowPos2svARB");
	glWindowPos3dARB = (PFNGLWINDOWPOS3DARBPROC)wglGetProcAddress("glWindowPos3dARB");
	glWindowPos3dvARB = (PFNGLWINDOWPOS3DVARBPROC)wglGetProcAddress("glWindowPos3dvARB");
	glWindowPos3fARB = (PFNGLWINDOWPOS3FARBPROC)wglGetProcAddress("glWindowPos3fARB");
	glWindowPos3fvARB = (PFNGLWINDOWPOS3FVARBPROC)wglGetProcAddress("glWindowPos3fvARB");
	glWindowPos3iARB = (PFNGLWINDOWPOS3IARBPROC)wglGetProcAddress("glWindowPos3iARB");
	glWindowPos3ivARB = (PFNGLWINDOWPOS3IVARBPROC)wglGetProcAddress("glWindowPos3ivARB");
	glWindowPos3sARB = (PFNGLWINDOWPOS3SARBPROC)wglGetProcAddress("glWindowPos3sARB");
	glWindowPos3svARB = (PFNGLWINDOWPOS3SVARBPROC)wglGetProcAddress("glWindowPos3svARB");
}

// GL_ARB_vertex_program
PFNGLVERTEXATTRIB1DARBPROC glVertexAttrib1dARB;
PFNGLVERTEXATTRIB1DVARBPROC glVertexAttrib1dvARB;
PFNGLVERTEXATTRIB1FARBPROC glVertexAttrib1fARB;
PFNGLVERTEXATTRIB1FVARBPROC glVertexAttrib1fvARB;
PFNGLVERTEXATTRIB1SARBPROC glVertexAttrib1sARB;
PFNGLVERTEXATTRIB1SVARBPROC glVertexAttrib1svARB;
PFNGLVERTEXATTRIB2DARBPROC glVertexAttrib2dARB;
PFNGLVERTEXATTRIB2DVARBPROC glVertexAttrib2dvARB;
PFNGLVERTEXATTRIB2FARBPROC glVertexAttrib2fARB;
PFNGLVERTEXATTRIB2FVARBPROC glVertexAttrib2fvARB;
PFNGLVERTEXATTRIB2SARBPROC glVertexAttrib2sARB;
PFNGLVERTEXATTRIB2SVARBPROC glVertexAttrib2svARB;
PFNGLVERTEXATTRIB3DARBPROC glVertexAttrib3dARB;
PFNGLVERTEXATTRIB3DVARBPROC glVertexAttrib3dvARB;
PFNGLVERTEXATTRIB3FARBPROC glVertexAttrib3fARB;
PFNGLVERTEXATTRIB3FVARBPROC glVertexAttrib3fvARB;
PFNGLVERTEXATTRIB3SARBPROC glVertexAttrib3sARB;
PFNGLVERTEXATTRIB3SVARBPROC glVertexAttrib3svARB;
PFNGLVERTEXATTRIB4NBVARBPROC glVertexAttrib4NbvARB;
PFNGLVERTEXATTRIB4NIVARBPROC glVertexAttrib4NivARB;
PFNGLVERTEXATTRIB4NSVARBPROC glVertexAttrib4NsvARB;
PFNGLVERTEXATTRIB4NUBARBPROC glVertexAttrib4NubARB;
PFNGLVERTEXATTRIB4NUBVARBPROC glVertexAttrib4NubvARB;
PFNGLVERTEXATTRIB4NUIVARBPROC glVertexAttrib4NuivARB;
PFNGLVERTEXATTRIB4NUSVARBPROC glVertexAttrib4NusvARB;
PFNGLVERTEXATTRIB4BVARBPROC glVertexAttrib4bvARB;
PFNGLVERTEXATTRIB4DARBPROC glVertexAttrib4dARB;
PFNGLVERTEXATTRIB4DVARBPROC glVertexAttrib4dvARB;
PFNGLVERTEXATTRIB4FARBPROC glVertexAttrib4fARB;
PFNGLVERTEXATTRIB4FVARBPROC glVertexAttrib4fvARB;
PFNGLVERTEXATTRIB4IVARBPROC glVertexAttrib4ivARB;
PFNGLVERTEXATTRIB4SARBPROC glVertexAttrib4sARB;
PFNGLVERTEXATTRIB4SVARBPROC glVertexAttrib4svARB;
PFNGLVERTEXATTRIB4UBVARBPROC glVertexAttrib4ubvARB;
PFNGLVERTEXATTRIB4UIVARBPROC glVertexAttrib4uivARB;
PFNGLVERTEXATTRIB4USVARBPROC glVertexAttrib4usvARB;
PFNGLVERTEXATTRIBPOINTERARBPROC glVertexAttribPointerARB;
PFNGLENABLEVERTEXATTRIBARRAYARBPROC glEnableVertexAttribArrayARB;
PFNGLDISABLEVERTEXATTRIBARRAYARBPROC glDisableVertexAttribArrayARB;
PFNGLPROGRAMSTRINGARBPROC glProgramStringARB;
PFNGLBINDPROGRAMARBPROC glBindProgramARB;
PFNGLDELETEPROGRAMSARBPROC glDeleteProgramsARB;
PFNGLGENPROGRAMSARBPROC glGenProgramsARB;
PFNGLPROGRAMENVPARAMETER4DARBPROC glProgramEnvParameter4dARB;
PFNGLPROGRAMENVPARAMETER4DVARBPROC glProgramEnvParameter4dvARB;
PFNGLPROGRAMENVPARAMETER4FARBPROC glProgramEnvParameter4fARB;
PFNGLPROGRAMENVPARAMETER4FVARBPROC glProgramEnvParameter4fvARB;
PFNGLPROGRAMLOCALPARAMETER4DARBPROC glProgramLocalParameter4dARB;
PFNGLPROGRAMLOCALPARAMETER4DVARBPROC glProgramLocalParameter4dvARB;
PFNGLPROGRAMLOCALPARAMETER4FARBPROC glProgramLocalParameter4fARB;
PFNGLPROGRAMLOCALPARAMETER4FVARBPROC glProgramLocalParameter4fvARB;
PFNGLGETPROGRAMENVPARAMETERDVARBPROC glGetProgramEnvParameterdvARB;
PFNGLGETPROGRAMENVPARAMETERFVARBPROC glGetProgramEnvParameterfvARB;
PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC glGetProgramLocalParameterdvARB;
PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC glGetProgramLocalParameterfvARB;
PFNGLGETPROGRAMIVARBPROC glGetProgramivARB;
PFNGLGETPROGRAMSTRINGARBPROC glGetProgramStringARB;
PFNGLGETVERTEXATTRIBDVARBPROC glGetVertexAttribdvARB;
PFNGLGETVERTEXATTRIBFVARBPROC glGetVertexAttribfvARB;
PFNGLGETVERTEXATTRIBIVARBPROC glGetVertexAttribivARB;
PFNGLGETVERTEXATTRIBPOINTERVARBPROC glGetVertexAttribPointervARB;
PFNGLISPROGRAMARBPROC glIsProgramARB;

void glelp::init_GL_ARB_vertex_program()
{
	if(!glelpInternal::checkAvailable("GL_ARB_vertex_program"))
		return;

	glVertexAttrib1dARB = (PFNGLVERTEXATTRIB1DARBPROC)wglGetProcAddress("glVertexAttrib1dARB");
	glVertexAttrib1dvARB = (PFNGLVERTEXATTRIB1DVARBPROC)wglGetProcAddress("glVertexAttrib1dvARB");
	glVertexAttrib1fARB = (PFNGLVERTEXATTRIB1FARBPROC)wglGetProcAddress("glVertexAttrib1fARB");
	glVertexAttrib1fvARB = (PFNGLVERTEXATTRIB1FVARBPROC)wglGetProcAddress("glVertexAttrib1fvARB");
	glVertexAttrib1sARB = (PFNGLVERTEXATTRIB1SARBPROC)wglGetProcAddress("glVertexAttrib1sARB");
	glVertexAttrib1svARB = (PFNGLVERTEXATTRIB1SVARBPROC)wglGetProcAddress("glVertexAttrib1svARB");
	glVertexAttrib2dARB = (PFNGLVERTEXATTRIB2DARBPROC)wglGetProcAddress("glVertexAttrib2dARB");
	glVertexAttrib2dvARB = (PFNGLVERTEXATTRIB2DVARBPROC)wglGetProcAddress("glVertexAttrib2dvARB");
	glVertexAttrib2fARB = (PFNGLVERTEXATTRIB2FARBPROC)wglGetProcAddress("glVertexAttrib2fARB");
	glVertexAttrib2fvARB = (PFNGLVERTEXATTRIB2FVARBPROC)wglGetProcAddress("glVertexAttrib2fvARB");
	glVertexAttrib2sARB = (PFNGLVERTEXATTRIB2SARBPROC)wglGetProcAddress("glVertexAttrib2sARB");
	glVertexAttrib2svARB = (PFNGLVERTEXATTRIB2SVARBPROC)wglGetProcAddress("glVertexAttrib2svARB");
	glVertexAttrib3dARB = (PFNGLVERTEXATTRIB3DARBPROC)wglGetProcAddress("glVertexAttrib3dARB");
	glVertexAttrib3dvARB = (PFNGLVERTEXATTRIB3DVARBPROC)wglGetProcAddress("glVertexAttrib3dvARB");
	glVertexAttrib3fARB = (PFNGLVERTEXATTRIB3FARBPROC)wglGetProcAddress("glVertexAttrib3fARB");
	glVertexAttrib3fvARB = (PFNGLVERTEXATTRIB3FVARBPROC)wglGetProcAddress("glVertexAttrib3fvARB");
	glVertexAttrib3sARB = (PFNGLVERTEXATTRIB3SARBPROC)wglGetProcAddress("glVertexAttrib3sARB");
	glVertexAttrib3svARB = (PFNGLVERTEXATTRIB3SVARBPROC)wglGetProcAddress("glVertexAttrib3svARB");
	glVertexAttrib4NbvARB = (PFNGLVERTEXATTRIB4NBVARBPROC)wglGetProcAddress("glVertexAttrib4NbvARB");
	glVertexAttrib4NivARB = (PFNGLVERTEXATTRIB4NIVARBPROC)wglGetProcAddress("glVertexAttrib4NivARB");
	glVertexAttrib4NsvARB = (PFNGLVERTEXATTRIB4NSVARBPROC)wglGetProcAddress("glVertexAttrib4NsvARB");
	glVertexAttrib4NubARB = (PFNGLVERTEXATTRIB4NUBARBPROC)wglGetProcAddress("glVertexAttrib4NubARB");
	glVertexAttrib4NubvARB = (PFNGLVERTEXATTRIB4NUBVARBPROC)wglGetProcAddress("glVertexAttrib4NubvARB");
	glVertexAttrib4NuivARB = (PFNGLVERTEXATTRIB4NUIVARBPROC)wglGetProcAddress("glVertexAttrib4NuivARB");
	glVertexAttrib4NusvARB = (PFNGLVERTEXATTRIB4NUSVARBPROC)wglGetProcAddress("glVertexAttrib4NusvARB");
	glVertexAttrib4bvARB = (PFNGLVERTEXATTRIB4BVARBPROC)wglGetProcAddress("glVertexAttrib4bvARB");
	glVertexAttrib4dARB = (PFNGLVERTEXATTRIB4DARBPROC)wglGetProcAddress("glVertexAttrib4dARB");
	glVertexAttrib4dvARB = (PFNGLVERTEXATTRIB4DVARBPROC)wglGetProcAddress("glVertexAttrib4dvARB");
	glVertexAttrib4fARB = (PFNGLVERTEXATTRIB4FARBPROC)wglGetProcAddress("glVertexAttrib4fARB");
	glVertexAttrib4fvARB = (PFNGLVERTEXATTRIB4FVARBPROC)wglGetProcAddress("glVertexAttrib4fvARB");
	glVertexAttrib4ivARB = (PFNGLVERTEXATTRIB4IVARBPROC)wglGetProcAddress("glVertexAttrib4ivARB");
	glVertexAttrib4sARB = (PFNGLVERTEXATTRIB4SARBPROC)wglGetProcAddress("glVertexAttrib4sARB");
	glVertexAttrib4svARB = (PFNGLVERTEXATTRIB4SVARBPROC)wglGetProcAddress("glVertexAttrib4svARB");
	glVertexAttrib4ubvARB = (PFNGLVERTEXATTRIB4UBVARBPROC)wglGetProcAddress("glVertexAttrib4ubvARB");
	glVertexAttrib4uivARB = (PFNGLVERTEXATTRIB4UIVARBPROC)wglGetProcAddress("glVertexAttrib4uivARB");
	glVertexAttrib4usvARB = (PFNGLVERTEXATTRIB4USVARBPROC)wglGetProcAddress("glVertexAttrib4usvARB");
	glVertexAttribPointerARB = (PFNGLVERTEXATTRIBPOINTERARBPROC)wglGetProcAddress("glVertexAttribPointerARB");
	glEnableVertexAttribArrayARB = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC)wglGetProcAddress("glEnableVertexAttribArrayARB");
	glDisableVertexAttribArrayARB = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)wglGetProcAddress("glDisableVertexAttribArrayARB");
	glProgramStringARB = (PFNGLPROGRAMSTRINGARBPROC)wglGetProcAddress("glProgramStringARB");
	glBindProgramARB = (PFNGLBINDPROGRAMARBPROC)wglGetProcAddress("glBindProgramARB");
	glDeleteProgramsARB = (PFNGLDELETEPROGRAMSARBPROC)wglGetProcAddress("glDeleteProgramsARB");
	glGenProgramsARB = (PFNGLGENPROGRAMSARBPROC)wglGetProcAddress("glGenProgramsARB");
	glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC)wglGetProcAddress("glProgramEnvParameter4dARB");
	glProgramEnvParameter4dvARB = (PFNGLPROGRAMENVPARAMETER4DVARBPROC)wglGetProcAddress("glProgramEnvParameter4dvARB");
	glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC)wglGetProcAddress("glProgramEnvParameter4fARB");
	glProgramEnvParameter4fvARB = (PFNGLPROGRAMENVPARAMETER4FVARBPROC)wglGetProcAddress("glProgramEnvParameter4fvARB");
	glProgramLocalParameter4dARB = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC)wglGetProcAddress("glProgramLocalParameter4dARB");
	glProgramLocalParameter4dvARB = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)wglGetProcAddress("glProgramLocalParameter4dvARB");
	glProgramLocalParameter4fARB = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC)wglGetProcAddress("glProgramLocalParameter4fARB");
	glProgramLocalParameter4fvARB = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)wglGetProcAddress("glProgramLocalParameter4fvARB");
	glGetProgramEnvParameterdvARB = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC)wglGetProcAddress("glGetProgramEnvParameterdvARB");
	glGetProgramEnvParameterfvARB = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC)wglGetProcAddress("glGetProgramEnvParameterfvARB");
	glGetProgramLocalParameterdvARB = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)wglGetProcAddress("glGetProgramLocalParameterdvARB");
	glGetProgramLocalParameterfvARB = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)wglGetProcAddress("glGetProgramLocalParameterfvARB");
	glGetProgramivARB = (PFNGLGETPROGRAMIVARBPROC)wglGetProcAddress("glGetProgramivARB");
	glGetProgramStringARB = (PFNGLGETPROGRAMSTRINGARBPROC)wglGetProcAddress("glGetProgramStringARB");
	glGetVertexAttribdvARB = (PFNGLGETVERTEXATTRIBDVARBPROC)wglGetProcAddress("glGetVertexAttribdvARB");
	glGetVertexAttribfvARB = (PFNGLGETVERTEXATTRIBFVARBPROC)wglGetProcAddress("glGetVertexAttribfvARB");
	glGetVertexAttribivARB = (PFNGLGETVERTEXATTRIBIVARBPROC)wglGetProcAddress("glGetVertexAttribivARB");
	glGetVertexAttribPointervARB = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC)wglGetProcAddress("glGetVertexAttribPointervARB");
	glIsProgramARB = (PFNGLISPROGRAMARBPROC)wglGetProcAddress("glIsProgramARB");
}

// GL_ARB_fragment_program

void glelp::init_GL_ARB_fragment_program()
{
	if(!glelpInternal::checkAvailable("GL_ARB_fragment_program"))
		return;

}

// GL_ARB_vertex_buffer_object

void glelp::init_GL_ARB_vertex_buffer_object()
{
	if(!glelpInternal::checkAvailable("GL_ARB_vertex_buffer_object"))
		return;

}

// GL_ARB_occlusion_query
PFNGLGENQUERIESARBPROC glGenQueriesARB;
PFNGLDELETEQUERIESARBPROC glDeleteQueriesARB;
PFNGLISQUERYARBPROC glIsQueryARB;
PFNGLBEGINQUERYARBPROC glBeginQueryARB;
PFNGLENDQUERYARBPROC glEndQueryARB;
PFNGLGETQUERYIVARBPROC glGetQueryivARB;
PFNGLGETQUERYOBJECTIVARBPROC glGetQueryObjectivARB;
PFNGLGETQUERYOBJECTUIVARBPROC glGetQueryObjectuivARB;

void glelp::init_GL_ARB_occlusion_query()
{
	if(!glelpInternal::checkAvailable("GL_ARB_occlusion_query"))
		return;

	glGenQueriesARB = (PFNGLGENQUERIESARBPROC)wglGetProcAddress("glGenQueriesARB");
	glDeleteQueriesARB = (PFNGLDELETEQUERIESARBPROC)wglGetProcAddress("glDeleteQueriesARB");
	glIsQueryARB = (PFNGLISQUERYARBPROC)wglGetProcAddress("glIsQueryARB");
	glBeginQueryARB = (PFNGLBEGINQUERYARBPROC)wglGetProcAddress("glBeginQueryARB");
	glEndQueryARB = (PFNGLENDQUERYARBPROC)wglGetProcAddress("glEndQueryARB");
	glGetQueryivARB = (PFNGLGETQUERYIVARBPROC)wglGetProcAddress("glGetQueryivARB");
	glGetQueryObjectivARB = (PFNGLGETQUERYOBJECTIVARBPROC)wglGetProcAddress("glGetQueryObjectivARB");
	glGetQueryObjectuivARB = (PFNGLGETQUERYOBJECTUIVARBPROC)wglGetProcAddress("glGetQueryObjectuivARB");
}

// GL_ARB_shader_objects
PFNGLDELETEOBJECTARBPROC glDeleteObjectARB;
PFNGLGETHANDLEARBPROC glGetHandleARB;
PFNGLDETACHOBJECTARBPROC glDetachObjectARB;
PFNGLCREATESHADEROBJECTARBPROC glCreateShaderObjectARB;
PFNGLSHADERSOURCEARBPROC glShaderSourceARB;
PFNGLCOMPILESHADERARBPROC glCompileShaderARB;
PFNGLCREATEPROGRAMOBJECTARBPROC glCreateProgramObjectARB;
PFNGLATTACHOBJECTARBPROC glAttachObjectARB;
PFNGLLINKPROGRAMARBPROC glLinkProgramARB;
PFNGLUSEPROGRAMOBJECTARBPROC glUseProgramObjectARB;
PFNGLVALIDATEPROGRAMARBPROC glValidateProgramARB;
PFNGLUNIFORM1FARBPROC glUniform1fARB;
PFNGLUNIFORM2FARBPROC glUniform2fARB;
PFNGLUNIFORM3FARBPROC glUniform3fARB;
PFNGLUNIFORM4FARBPROC glUniform4fARB;
PFNGLUNIFORM1IARBPROC glUniform1iARB;
PFNGLUNIFORM2IARBPROC glUniform2iARB;
PFNGLUNIFORM3IARBPROC glUniform3iARB;
PFNGLUNIFORM4IARBPROC glUniform4iARB;
PFNGLUNIFORM1FVARBPROC glUniform1fvARB;
PFNGLUNIFORM2FVARBPROC glUniform2fvARB;
PFNGLUNIFORM3FVARBPROC glUniform3fvARB;
PFNGLUNIFORM4FVARBPROC glUniform4fvARB;
PFNGLUNIFORM1IVARBPROC glUniform1ivARB;
PFNGLUNIFORM2IVARBPROC glUniform2ivARB;
PFNGLUNIFORM3IVARBPROC glUniform3ivARB;
PFNGLUNIFORM4IVARBPROC glUniform4ivARB;
PFNGLUNIFORMMATRIX2FVARBPROC glUniformMatrix2fvARB;
PFNGLUNIFORMMATRIX3FVARBPROC glUniformMatrix3fvARB;
PFNGLUNIFORMMATRIX4FVARBPROC glUniformMatrix4fvARB;
PFNGLGETOBJECTPARAMETERFVARBPROC glGetObjectParameterfvARB;
PFNGLGETOBJECTPARAMETERIVARBPROC glGetObjectParameterivARB;
PFNGLGETINFOLOGARBPROC glGetInfoLogARB;
PFNGLGETATTACHEDOBJECTSARBPROC glGetAttachedObjectsARB;
PFNGLGETUNIFORMLOCATIONARBPROC glGetUniformLocationARB;
PFNGLGETACTIVEUNIFORMARBPROC glGetActiveUniformARB;
PFNGLGETUNIFORMFVARBPROC glGetUniformfvARB;
PFNGLGETUNIFORMIVARBPROC glGetUniformivARB;
PFNGLGETSHADERSOURCEARBPROC glGetShaderSourceARB;

void glelp::init_GL_ARB_shader_objects()
{
	if(!glelpInternal::checkAvailable("GL_ARB_shader_objects"))
		return;

	glDeleteObjectARB = (PFNGLDELETEOBJECTARBPROC)wglGetProcAddress("glDeleteObjectARB");
	glGetHandleARB = (PFNGLGETHANDLEARBPROC)wglGetProcAddress("glGetHandleARB");
	glDetachObjectARB = (PFNGLDETACHOBJECTARBPROC)wglGetProcAddress("glDetachObjectARB");
	glCreateShaderObjectARB = (PFNGLCREATESHADEROBJECTARBPROC)wglGetProcAddress("glCreateShaderObjectARB");
	glShaderSourceARB = (PFNGLSHADERSOURCEARBPROC)wglGetProcAddress("glShaderSourceARB");
	glCompileShaderARB = (PFNGLCOMPILESHADERARBPROC)wglGetProcAddress("glCompileShaderARB");
	glCreateProgramObjectARB = (PFNGLCREATEPROGRAMOBJECTARBPROC)wglGetProcAddress("glCreateProgramObjectARB");
	glAttachObjectARB = (PFNGLATTACHOBJECTARBPROC)wglGetProcAddress("glAttachObjectARB");
	glLinkProgramARB = (PFNGLLINKPROGRAMARBPROC)wglGetProcAddress("glLinkProgramARB");
	glUseProgramObjectARB = (PFNGLUSEPROGRAMOBJECTARBPROC)wglGetProcAddress("glUseProgramObjectARB");
	glValidateProgramARB = (PFNGLVALIDATEPROGRAMARBPROC)wglGetProcAddress("glValidateProgramARB");
	glUniform1fARB = (PFNGLUNIFORM1FARBPROC)wglGetProcAddress("glUniform1fARB");
	glUniform2fARB = (PFNGLUNIFORM2FARBPROC)wglGetProcAddress("glUniform2fARB");
	glUniform3fARB = (PFNGLUNIFORM3FARBPROC)wglGetProcAddress("glUniform3fARB");
	glUniform4fARB = (PFNGLUNIFORM4FARBPROC)wglGetProcAddress("glUniform4fARB");
	glUniform1iARB = (PFNGLUNIFORM1IARBPROC)wglGetProcAddress("glUniform1iARB");
	glUniform2iARB = (PFNGLUNIFORM2IARBPROC)wglGetProcAddress("glUniform2iARB");
	glUniform3iARB = (PFNGLUNIFORM3IARBPROC)wglGetProcAddress("glUniform3iARB");
	glUniform4iARB = (PFNGLUNIFORM4IARBPROC)wglGetProcAddress("glUniform4iARB");
	glUniform1fvARB = (PFNGLUNIFORM1FVARBPROC)wglGetProcAddress("glUniform1fvARB");
	glUniform2fvARB = (PFNGLUNIFORM2FVARBPROC)wglGetProcAddress("glUniform2fvARB");
	glUniform3fvARB = (PFNGLUNIFORM3FVARBPROC)wglGetProcAddress("glUniform3fvARB");
	glUniform4fvARB = (PFNGLUNIFORM4FVARBPROC)wglGetProcAddress("glUniform4fvARB");
	glUniform1ivARB = (PFNGLUNIFORM1IVARBPROC)wglGetProcAddress("glUniform1ivARB");
	glUniform2ivARB = (PFNGLUNIFORM2IVARBPROC)wglGetProcAddress("glUniform2ivARB");
	glUniform3ivARB = (PFNGLUNIFORM3IVARBPROC)wglGetProcAddress("glUniform3ivARB");
	glUniform4ivARB = (PFNGLUNIFORM4IVARBPROC)wglGetProcAddress("glUniform4ivARB");
	glUniformMatrix2fvARB = (PFNGLUNIFORMMATRIX2FVARBPROC)wglGetProcAddress("glUniformMatrix2fvARB");
	glUniformMatrix3fvARB = (PFNGLUNIFORMMATRIX3FVARBPROC)wglGetProcAddress("glUniformMatrix3fvARB");
	glUniformMatrix4fvARB = (PFNGLUNIFORMMATRIX4FVARBPROC)wglGetProcAddress("glUniformMatrix4fvARB");
	glGetObjectParameterfvARB = (PFNGLGETOBJECTPARAMETERFVARBPROC)wglGetProcAddress("glGetObjectParameterfvARB");
	glGetObjectParameterivARB = (PFNGLGETOBJECTPARAMETERIVARBPROC)wglGetProcAddress("glGetObjectParameterivARB");
	glGetInfoLogARB = (PFNGLGETINFOLOGARBPROC)wglGetProcAddress("glGetInfoLogARB");
	glGetAttachedObjectsARB = (PFNGLGETATTACHEDOBJECTSARBPROC)wglGetProcAddress("glGetAttachedObjectsARB");
	glGetUniformLocationARB = (PFNGLGETUNIFORMLOCATIONARBPROC)wglGetProcAddress("glGetUniformLocationARB");
	glGetActiveUniformARB = (PFNGLGETACTIVEUNIFORMARBPROC)wglGetProcAddress("glGetActiveUniformARB");
	glGetUniformfvARB = (PFNGLGETUNIFORMFVARBPROC)wglGetProcAddress("glGetUniformfvARB");
	glGetUniformivARB = (PFNGLGETUNIFORMIVARBPROC)wglGetProcAddress("glGetUniformivARB");
	glGetShaderSourceARB = (PFNGLGETSHADERSOURCEARBPROC)wglGetProcAddress("glGetShaderSourceARB");
}

// GL_ARB_vertex_shader
PFNGLBINDATTRIBLOCATIONARBPROC glBindAttribLocationARB;
PFNGLGETACTIVEATTRIBARBPROC glGetActiveAttribARB;
PFNGLGETATTRIBLOCATIONARBPROC glGetAttribLocationARB;

void glelp::init_GL_ARB_vertex_shader()
{
	if(!glelpInternal::checkAvailable("GL_ARB_vertex_shader"))
		return;

	glBindAttribLocationARB = (PFNGLBINDATTRIBLOCATIONARBPROC)wglGetProcAddress("glBindAttribLocationARB");
	glGetActiveAttribARB = (PFNGLGETACTIVEATTRIBARBPROC)wglGetProcAddress("glGetActiveAttribARB");
	glGetAttribLocationARB = (PFNGLGETATTRIBLOCATIONARBPROC)wglGetProcAddress("glGetAttribLocationARB");
}

// GL_ARB_fragment_shader

void glelp::init_GL_ARB_fragment_shader()
{
	if(!glelpInternal::checkAvailable("GL_ARB_fragment_shader"))
		return;

}

// GL_ARB_shading_language_100

void glelp::init_GL_ARB_shading_language_100()
{
	if(!glelpInternal::checkAvailable("GL_ARB_shading_language_100"))
		return;

}

// GL_ARB_texture_non_power_of_two

void glelp::init_GL_ARB_texture_non_power_of_two()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_non_power_of_two"))
		return;

}

// GL_ARB_point_sprite

void glelp::init_GL_ARB_point_sprite()
{
	if(!glelpInternal::checkAvailable("GL_ARB_point_sprite"))
		return;

}

// GL_ARB_fragment_program_shadow

void glelp::init_GL_ARB_fragment_program_shadow()
{
	if(!glelpInternal::checkAvailable("GL_ARB_fragment_program_shadow"))
		return;

}

// GL_ARB_draw_buffers
PFNGLDRAWBUFFERSARBPROC glDrawBuffersARB;

void glelp::init_GL_ARB_draw_buffers()
{
	if(!glelpInternal::checkAvailable("GL_ARB_draw_buffers"))
		return;

	glDrawBuffersARB = (PFNGLDRAWBUFFERSARBPROC)wglGetProcAddress("glDrawBuffersARB");
}

// GL_ARB_texture_rectangle

void glelp::init_GL_ARB_texture_rectangle()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_rectangle"))
		return;

}

// GL_ARB_color_buffer_float
PFNGLCLAMPCOLORARBPROC glClampColorARB;

void glelp::init_GL_ARB_color_buffer_float()
{
	if(!glelpInternal::checkAvailable("GL_ARB_color_buffer_float"))
		return;

	glClampColorARB = (PFNGLCLAMPCOLORARBPROC)wglGetProcAddress("glClampColorARB");
}

// GL_ARB_half_float_pixel

void glelp::init_GL_ARB_half_float_pixel()
{
	if(!glelpInternal::checkAvailable("GL_ARB_half_float_pixel"))
		return;

}

// GL_ARB_texture_float

void glelp::init_GL_ARB_texture_float()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_float"))
		return;

}

// GL_ARB_pixel_buffer_object

void glelp::init_GL_ARB_pixel_buffer_object()
{
	if(!glelpInternal::checkAvailable("GL_ARB_pixel_buffer_object"))
		return;

}

// GL_ARB_depth_buffer_float

void glelp::init_GL_ARB_depth_buffer_float()
{
	if(!glelpInternal::checkAvailable("GL_ARB_depth_buffer_float"))
		return;

}

// GL_ARB_draw_instanced
PFNGLDRAWARRAYSINSTANCEDARBPROC glDrawArraysInstancedARB;
PFNGLDRAWELEMENTSINSTANCEDARBPROC glDrawElementsInstancedARB;

void glelp::init_GL_ARB_draw_instanced()
{
	if(!glelpInternal::checkAvailable("GL_ARB_draw_instanced"))
		return;

	glDrawArraysInstancedARB = (PFNGLDRAWARRAYSINSTANCEDARBPROC)wglGetProcAddress("glDrawArraysInstancedARB");
	glDrawElementsInstancedARB = (PFNGLDRAWELEMENTSINSTANCEDARBPROC)wglGetProcAddress("glDrawElementsInstancedARB");
}

// GL_ARB_framebuffer_object
PFNGLISRENDERBUFFERPROC glIsRenderbuffer;
PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer;
PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;
PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers;
PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage;
PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv;
PFNGLISFRAMEBUFFERPROC glIsFramebuffer;
PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer;
PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers;
PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus;
PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D;
PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D;
PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv;
PFNGLGENERATEMIPMAPPROC glGenerateMipmap;
PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample;
PFNGLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer;

void glelp::init_GL_ARB_framebuffer_object()
{
	if(!glelpInternal::checkAvailable("GL_ARB_framebuffer_object"))
		return;

	glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC)wglGetProcAddress("glIsRenderbuffer");
	glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)wglGetProcAddress("glBindRenderbuffer");
	glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC)wglGetProcAddress("glDeleteRenderbuffers");
	glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)wglGetProcAddress("glGenRenderbuffers");
	glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC)wglGetProcAddress("glRenderbufferStorage");
	glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)wglGetProcAddress("glGetRenderbufferParameteriv");
	glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC)wglGetProcAddress("glIsFramebuffer");
	glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)wglGetProcAddress("glBindFramebuffer");
	glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)wglGetProcAddress("glDeleteFramebuffers");
	glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)wglGetProcAddress("glGenFramebuffers");
	glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)wglGetProcAddress("glCheckFramebufferStatus");
	glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC)wglGetProcAddress("glFramebufferTexture1D");
	glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)wglGetProcAddress("glFramebufferTexture2D");
	glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC)wglGetProcAddress("glFramebufferTexture3D");
	glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)wglGetProcAddress("glFramebufferRenderbuffer");
	glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)wglGetProcAddress("glGetFramebufferAttachmentParameteriv");
	glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC)wglGetProcAddress("glGenerateMipmap");
	glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC)wglGetProcAddress("glBlitFramebuffer");
	glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)wglGetProcAddress("glRenderbufferStorageMultisample");
	glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)wglGetProcAddress("glFramebufferTextureLayer");
}

// GL_ARB_framebuffer_sRGB

void glelp::init_GL_ARB_framebuffer_sRGB()
{
	if(!glelpInternal::checkAvailable("GL_ARB_framebuffer_sRGB"))
		return;

}

// GL_ARB_geometry_shader4
PFNGLPROGRAMPARAMETERIARBPROC glProgramParameteriARB;
PFNGLFRAMEBUFFERTEXTUREARBPROC glFramebufferTextureARB;
PFNGLFRAMEBUFFERTEXTURELAYERARBPROC glFramebufferTextureLayerARB;
PFNGLFRAMEBUFFERTEXTUREFACEARBPROC glFramebufferTextureFaceARB;

void glelp::init_GL_ARB_geometry_shader4()
{
	if(!glelpInternal::checkAvailable("GL_ARB_geometry_shader4"))
		return;

	glProgramParameteriARB = (PFNGLPROGRAMPARAMETERIARBPROC)wglGetProcAddress("glProgramParameteriARB");
	glFramebufferTextureARB = (PFNGLFRAMEBUFFERTEXTUREARBPROC)wglGetProcAddress("glFramebufferTextureARB");
	glFramebufferTextureLayerARB = (PFNGLFRAMEBUFFERTEXTURELAYERARBPROC)wglGetProcAddress("glFramebufferTextureLayerARB");
	glFramebufferTextureFaceARB = (PFNGLFRAMEBUFFERTEXTUREFACEARBPROC)wglGetProcAddress("glFramebufferTextureFaceARB");
}

// GL_ARB_half_float_vertex

void glelp::init_GL_ARB_half_float_vertex()
{
	if(!glelpInternal::checkAvailable("GL_ARB_half_float_vertex"))
		return;

}

// GL_ARB_instanced_arrays
PFNGLVERTEXATTRIBDIVISORARBPROC glVertexAttribDivisorARB;

void glelp::init_GL_ARB_instanced_arrays()
{
	if(!glelpInternal::checkAvailable("GL_ARB_instanced_arrays"))
		return;

	glVertexAttribDivisorARB = (PFNGLVERTEXATTRIBDIVISORARBPROC)wglGetProcAddress("glVertexAttribDivisorARB");
}

// GL_ARB_map_buffer_range
PFNGLMAPBUFFERRANGEPROC glMapBufferRange;
PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange;

void glelp::init_GL_ARB_map_buffer_range()
{
	if(!glelpInternal::checkAvailable("GL_ARB_map_buffer_range"))
		return;

	glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC)wglGetProcAddress("glMapBufferRange");
	glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)wglGetProcAddress("glFlushMappedBufferRange");
}

// GL_ARB_texture_buffer_object
PFNGLTEXBUFFERARBPROC glTexBufferARB;

void glelp::init_GL_ARB_texture_buffer_object()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_buffer_object"))
		return;

	glTexBufferARB = (PFNGLTEXBUFFERARBPROC)wglGetProcAddress("glTexBufferARB");
}

// GL_ARB_texture_compression_rgtc

void glelp::init_GL_ARB_texture_compression_rgtc()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_compression_rgtc"))
		return;

}

// GL_ARB_texture_rg

void glelp::init_GL_ARB_texture_rg()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_rg"))
		return;

}

// GL_ARB_vertex_array_object
PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;
PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;
PFNGLISVERTEXARRAYPROC glIsVertexArray;

void glelp::init_GL_ARB_vertex_array_object()
{
	if(!glelpInternal::checkAvailable("GL_ARB_vertex_array_object"))
		return;

	glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC)wglGetProcAddress("glBindVertexArray");
	glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC)wglGetProcAddress("glDeleteVertexArrays");
	glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC)wglGetProcAddress("glGenVertexArrays");
	glIsVertexArray = (PFNGLISVERTEXARRAYPROC)wglGetProcAddress("glIsVertexArray");
}

// GL_ARB_uniform_buffer_object
PFNGLGETUNIFORMINDICESPROC glGetUniformIndices;
PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv;
PFNGLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName;
PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv;
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName;
PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding;

void glelp::init_GL_ARB_uniform_buffer_object()
{
	if(!glelpInternal::checkAvailable("GL_ARB_uniform_buffer_object"))
		return;

	glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC)wglGetProcAddress("glGetUniformIndices");
	glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC)wglGetProcAddress("glGetActiveUniformsiv");
	glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC)wglGetProcAddress("glGetActiveUniformName");
	glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC)wglGetProcAddress("glGetUniformBlockIndex");
	glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)wglGetProcAddress("glGetActiveUniformBlockiv");
	glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)wglGetProcAddress("glGetActiveUniformBlockName");
	glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC)wglGetProcAddress("glUniformBlockBinding");
}

// GL_ARB_compatibility

void glelp::init_GL_ARB_compatibility()
{
	if(!glelpInternal::checkAvailable("GL_ARB_compatibility"))
		return;

}

// GL_ARB_copy_buffer
PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData;

void glelp::init_GL_ARB_copy_buffer()
{
	if(!glelpInternal::checkAvailable("GL_ARB_copy_buffer"))
		return;

	glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC)wglGetProcAddress("glCopyBufferSubData");
}

// GL_ARB_shader_texture_lod

void glelp::init_GL_ARB_shader_texture_lod()
{
	if(!glelpInternal::checkAvailable("GL_ARB_shader_texture_lod"))
		return;

}

// GL_ARB_depth_clamp

void glelp::init_GL_ARB_depth_clamp()
{
	if(!glelpInternal::checkAvailable("GL_ARB_depth_clamp"))
		return;

}

// GL_ARB_draw_elements_base_vertex
PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex;
PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex;
PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex;

void glelp::init_GL_ARB_draw_elements_base_vertex()
{
	if(!glelpInternal::checkAvailable("GL_ARB_draw_elements_base_vertex"))
		return;

	glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC)wglGetProcAddress("glDrawElementsBaseVertex");
	glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)wglGetProcAddress("glDrawRangeElementsBaseVertex");
	glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)wglGetProcAddress("glDrawElementsInstancedBaseVertex");
	glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)wglGetProcAddress("glMultiDrawElementsBaseVertex");
}

// GL_ARB_fragment_coord_conventions

void glelp::init_GL_ARB_fragment_coord_conventions()
{
	if(!glelpInternal::checkAvailable("GL_ARB_fragment_coord_conventions"))
		return;

}

// GL_ARB_provoking_vertex
PFNGLPROVOKINGVERTEXPROC glProvokingVertex;

void glelp::init_GL_ARB_provoking_vertex()
{
	if(!glelpInternal::checkAvailable("GL_ARB_provoking_vertex"))
		return;

	glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC)wglGetProcAddress("glProvokingVertex");
}

// GL_ARB_seamless_cube_map

void glelp::init_GL_ARB_seamless_cube_map()
{
	if(!glelpInternal::checkAvailable("GL_ARB_seamless_cube_map"))
		return;

}

// GL_ARB_sync
PFNGLFENCESYNCPROC glFenceSync;
PFNGLISSYNCPROC glIsSync;
PFNGLDELETESYNCPROC glDeleteSync;
PFNGLCLIENTWAITSYNCPROC glClientWaitSync;
PFNGLWAITSYNCPROC glWaitSync;
PFNGLGETINTEGER64VPROC glGetInteger64v;
PFNGLGETSYNCIVPROC glGetSynciv;

void glelp::init_GL_ARB_sync()
{
	if(!glelpInternal::checkAvailable("GL_ARB_sync"))
		return;

	glFenceSync = (PFNGLFENCESYNCPROC)wglGetProcAddress("glFenceSync");
	glIsSync = (PFNGLISSYNCPROC)wglGetProcAddress("glIsSync");
	glDeleteSync = (PFNGLDELETESYNCPROC)wglGetProcAddress("glDeleteSync");
	glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC)wglGetProcAddress("glClientWaitSync");
	glWaitSync = (PFNGLWAITSYNCPROC)wglGetProcAddress("glWaitSync");
	glGetInteger64v = (PFNGLGETINTEGER64VPROC)wglGetProcAddress("glGetInteger64v");
	glGetSynciv = (PFNGLGETSYNCIVPROC)wglGetProcAddress("glGetSynciv");
}

// GL_ARB_texture_multisample
PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample;
PFNGLTEXIMAGE3DMULTISAMPLEPROC glTexImage3DMultisample;
PFNGLGETMULTISAMPLEFVPROC glGetMultisamplefv;
PFNGLSAMPLEMASKIPROC glSampleMaski;

void glelp::init_GL_ARB_texture_multisample()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_multisample"))
		return;

	glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)wglGetProcAddress("glTexImage2DMultisample");
	glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)wglGetProcAddress("glTexImage3DMultisample");
	glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC)wglGetProcAddress("glGetMultisamplefv");
	glSampleMaski = (PFNGLSAMPLEMASKIPROC)wglGetProcAddress("glSampleMaski");
}

// GL_ARB_vertex_array_bgra

void glelp::init_GL_ARB_vertex_array_bgra()
{
	if(!glelpInternal::checkAvailable("GL_ARB_vertex_array_bgra"))
		return;

}

// GL_ARB_draw_buffers_blend
PFNGLBLENDEQUATIONIARBPROC glBlendEquationiARB;
PFNGLBLENDEQUATIONSEPARATEIARBPROC glBlendEquationSeparateiARB;
PFNGLBLENDFUNCIARBPROC glBlendFunciARB;
PFNGLBLENDFUNCSEPARATEIARBPROC glBlendFuncSeparateiARB;

void glelp::init_GL_ARB_draw_buffers_blend()
{
	if(!glelpInternal::checkAvailable("GL_ARB_draw_buffers_blend"))
		return;

	glBlendEquationiARB = (PFNGLBLENDEQUATIONIARBPROC)wglGetProcAddress("glBlendEquationiARB");
	glBlendEquationSeparateiARB = (PFNGLBLENDEQUATIONSEPARATEIARBPROC)wglGetProcAddress("glBlendEquationSeparateiARB");
	glBlendFunciARB = (PFNGLBLENDFUNCIARBPROC)wglGetProcAddress("glBlendFunciARB");
	glBlendFuncSeparateiARB = (PFNGLBLENDFUNCSEPARATEIARBPROC)wglGetProcAddress("glBlendFuncSeparateiARB");
}

// GL_ARB_sample_shading
PFNGLMINSAMPLESHADINGARBPROC glMinSampleShadingARB;

void glelp::init_GL_ARB_sample_shading()
{
	if(!glelpInternal::checkAvailable("GL_ARB_sample_shading"))
		return;

	glMinSampleShadingARB = (PFNGLMINSAMPLESHADINGARBPROC)wglGetProcAddress("glMinSampleShadingARB");
}

// GL_ARB_texture_cube_map_array

void glelp::init_GL_ARB_texture_cube_map_array()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_cube_map_array"))
		return;

}

// GL_ARB_texture_gather

void glelp::init_GL_ARB_texture_gather()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_gather"))
		return;

}

// GL_ARB_texture_query_lod

void glelp::init_GL_ARB_texture_query_lod()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_query_lod"))
		return;

}

// GL_ARB_shading_language_include
PFNGLNAMEDSTRINGARBPROC glNamedStringARB;
PFNGLDELETENAMEDSTRINGARBPROC glDeleteNamedStringARB;
PFNGLCOMPILESHADERINCLUDEARBPROC glCompileShaderIncludeARB;
PFNGLISNAMEDSTRINGARBPROC glIsNamedStringARB;
PFNGLGETNAMEDSTRINGARBPROC glGetNamedStringARB;
PFNGLGETNAMEDSTRINGIVARBPROC glGetNamedStringivARB;

void glelp::init_GL_ARB_shading_language_include()
{
	if(!glelpInternal::checkAvailable("GL_ARB_shading_language_include"))
		return;

	glNamedStringARB = (PFNGLNAMEDSTRINGARBPROC)wglGetProcAddress("glNamedStringARB");
	glDeleteNamedStringARB = (PFNGLDELETENAMEDSTRINGARBPROC)wglGetProcAddress("glDeleteNamedStringARB");
	glCompileShaderIncludeARB = (PFNGLCOMPILESHADERINCLUDEARBPROC)wglGetProcAddress("glCompileShaderIncludeARB");
	glIsNamedStringARB = (PFNGLISNAMEDSTRINGARBPROC)wglGetProcAddress("glIsNamedStringARB");
	glGetNamedStringARB = (PFNGLGETNAMEDSTRINGARBPROC)wglGetProcAddress("glGetNamedStringARB");
	glGetNamedStringivARB = (PFNGLGETNAMEDSTRINGIVARBPROC)wglGetProcAddress("glGetNamedStringivARB");
}

// GL_ARB_texture_compression_bptc

void glelp::init_GL_ARB_texture_compression_bptc()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_compression_bptc"))
		return;

}

// GL_ARB_blend_func_extended
PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed;
PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex;

void glelp::init_GL_ARB_blend_func_extended()
{
	if(!glelpInternal::checkAvailable("GL_ARB_blend_func_extended"))
		return;

	glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)wglGetProcAddress("glBindFragDataLocationIndexed");
	glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC)wglGetProcAddress("glGetFragDataIndex");
}

// GL_ARB_explicit_attrib_location

void glelp::init_GL_ARB_explicit_attrib_location()
{
	if(!glelpInternal::checkAvailable("GL_ARB_explicit_attrib_location"))
		return;

}

// GL_ARB_occlusion_query2

void glelp::init_GL_ARB_occlusion_query2()
{
	if(!glelpInternal::checkAvailable("GL_ARB_occlusion_query2"))
		return;

}

// GL_ARB_sampler_objects
PFNGLGENSAMPLERSPROC glGenSamplers;
PFNGLDELETESAMPLERSPROC glDeleteSamplers;
PFNGLISSAMPLERPROC glIsSampler;
PFNGLBINDSAMPLERPROC glBindSampler;
PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri;
PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv;
PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf;
PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv;
PFNGLSAMPLERPARAMETERIIVPROC glSamplerParameterIiv;
PFNGLSAMPLERPARAMETERIUIVPROC glSamplerParameterIuiv;
PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv;
PFNGLGETSAMPLERPARAMETERIIVPROC glGetSamplerParameterIiv;
PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv;
PFNGLGETSAMPLERPARAMETERIUIVPROC glGetSamplerParameterIuiv;

void glelp::init_GL_ARB_sampler_objects()
{
	if(!glelpInternal::checkAvailable("GL_ARB_sampler_objects"))
		return;

	glGenSamplers = (PFNGLGENSAMPLERSPROC)wglGetProcAddress("glGenSamplers");
	glDeleteSamplers = (PFNGLDELETESAMPLERSPROC)wglGetProcAddress("glDeleteSamplers");
	glIsSampler = (PFNGLISSAMPLERPROC)wglGetProcAddress("glIsSampler");
	glBindSampler = (PFNGLBINDSAMPLERPROC)wglGetProcAddress("glBindSampler");
	glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC)wglGetProcAddress("glSamplerParameteri");
	glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC)wglGetProcAddress("glSamplerParameteriv");
	glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC)wglGetProcAddress("glSamplerParameterf");
	glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC)wglGetProcAddress("glSamplerParameterfv");
	glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC)wglGetProcAddress("glSamplerParameterIiv");
	glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC)wglGetProcAddress("glSamplerParameterIuiv");
	glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC)wglGetProcAddress("glGetSamplerParameteriv");
	glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC)wglGetProcAddress("glGetSamplerParameterIiv");
	glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC)wglGetProcAddress("glGetSamplerParameterfv");
	glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC)wglGetProcAddress("glGetSamplerParameterIuiv");
}

// GL_ARB_shader_bit_encoding

void glelp::init_GL_ARB_shader_bit_encoding()
{
	if(!glelpInternal::checkAvailable("GL_ARB_shader_bit_encoding"))
		return;

}

// GL_ARB_texture_rgb10_a2ui

void glelp::init_GL_ARB_texture_rgb10_a2ui()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_rgb10_a2ui"))
		return;

}

// GL_ARB_texture_swizzle

void glelp::init_GL_ARB_texture_swizzle()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_swizzle"))
		return;

}

// GL_ARB_timer_query
PFNGLQUERYCOUNTERPROC glQueryCounter;
PFNGLGETQUERYOBJECTI64VPROC glGetQueryObjecti64v;
PFNGLGETQUERYOBJECTUI64VPROC glGetQueryObjectui64v;

void glelp::init_GL_ARB_timer_query()
{
	if(!glelpInternal::checkAvailable("GL_ARB_timer_query"))
		return;

	glQueryCounter = (PFNGLQUERYCOUNTERPROC)wglGetProcAddress("glQueryCounter");
	glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC)wglGetProcAddress("glGetQueryObjecti64v");
	glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC)wglGetProcAddress("glGetQueryObjectui64v");
}

// GL_ARB_vertex_type_2_10_10_10_rev
PFNGLVERTEXP2UIPROC glVertexP2ui;
PFNGLVERTEXP2UIVPROC glVertexP2uiv;
PFNGLVERTEXP3UIPROC glVertexP3ui;
PFNGLVERTEXP3UIVPROC glVertexP3uiv;
PFNGLVERTEXP4UIPROC glVertexP4ui;
PFNGLVERTEXP4UIVPROC glVertexP4uiv;
PFNGLTEXCOORDP1UIPROC glTexCoordP1ui;
PFNGLTEXCOORDP1UIVPROC glTexCoordP1uiv;
PFNGLTEXCOORDP2UIPROC glTexCoordP2ui;
PFNGLTEXCOORDP2UIVPROC glTexCoordP2uiv;
PFNGLTEXCOORDP3UIPROC glTexCoordP3ui;
PFNGLTEXCOORDP3UIVPROC glTexCoordP3uiv;
PFNGLTEXCOORDP4UIPROC glTexCoordP4ui;
PFNGLTEXCOORDP4UIVPROC glTexCoordP4uiv;
PFNGLMULTITEXCOORDP1UIPROC glMultiTexCoordP1ui;
PFNGLMULTITEXCOORDP1UIVPROC glMultiTexCoordP1uiv;
PFNGLMULTITEXCOORDP2UIPROC glMultiTexCoordP2ui;
PFNGLMULTITEXCOORDP2UIVPROC glMultiTexCoordP2uiv;
PFNGLMULTITEXCOORDP3UIPROC glMultiTexCoordP3ui;
PFNGLMULTITEXCOORDP3UIVPROC glMultiTexCoordP3uiv;
PFNGLMULTITEXCOORDP4UIPROC glMultiTexCoordP4ui;
PFNGLMULTITEXCOORDP4UIVPROC glMultiTexCoordP4uiv;
PFNGLNORMALP3UIPROC glNormalP3ui;
PFNGLNORMALP3UIVPROC glNormalP3uiv;
PFNGLCOLORP3UIPROC glColorP3ui;
PFNGLCOLORP3UIVPROC glColorP3uiv;
PFNGLCOLORP4UIPROC glColorP4ui;
PFNGLCOLORP4UIVPROC glColorP4uiv;
PFNGLSECONDARYCOLORP3UIPROC glSecondaryColorP3ui;
PFNGLSECONDARYCOLORP3UIVPROC glSecondaryColorP3uiv;
PFNGLVERTEXATTRIBP1UIPROC glVertexAttribP1ui;
PFNGLVERTEXATTRIBP1UIVPROC glVertexAttribP1uiv;
PFNGLVERTEXATTRIBP2UIPROC glVertexAttribP2ui;
PFNGLVERTEXATTRIBP2UIVPROC glVertexAttribP2uiv;
PFNGLVERTEXATTRIBP3UIPROC glVertexAttribP3ui;
PFNGLVERTEXATTRIBP3UIVPROC glVertexAttribP3uiv;
PFNGLVERTEXATTRIBP4UIPROC glVertexAttribP4ui;
PFNGLVERTEXATTRIBP4UIVPROC glVertexAttribP4uiv;

void glelp::init_GL_ARB_vertex_type_2_10_10_10_rev()
{
	if(!glelpInternal::checkAvailable("GL_ARB_vertex_type_2_10_10_10_rev"))
		return;

	glVertexP2ui = (PFNGLVERTEXP2UIPROC)wglGetProcAddress("glVertexP2ui");
	glVertexP2uiv = (PFNGLVERTEXP2UIVPROC)wglGetProcAddress("glVertexP2uiv");
	glVertexP3ui = (PFNGLVERTEXP3UIPROC)wglGetProcAddress("glVertexP3ui");
	glVertexP3uiv = (PFNGLVERTEXP3UIVPROC)wglGetProcAddress("glVertexP3uiv");
	glVertexP4ui = (PFNGLVERTEXP4UIPROC)wglGetProcAddress("glVertexP4ui");
	glVertexP4uiv = (PFNGLVERTEXP4UIVPROC)wglGetProcAddress("glVertexP4uiv");
	glTexCoordP1ui = (PFNGLTEXCOORDP1UIPROC)wglGetProcAddress("glTexCoordP1ui");
	glTexCoordP1uiv = (PFNGLTEXCOORDP1UIVPROC)wglGetProcAddress("glTexCoordP1uiv");
	glTexCoordP2ui = (PFNGLTEXCOORDP2UIPROC)wglGetProcAddress("glTexCoordP2ui");
	glTexCoordP2uiv = (PFNGLTEXCOORDP2UIVPROC)wglGetProcAddress("glTexCoordP2uiv");
	glTexCoordP3ui = (PFNGLTEXCOORDP3UIPROC)wglGetProcAddress("glTexCoordP3ui");
	glTexCoordP3uiv = (PFNGLTEXCOORDP3UIVPROC)wglGetProcAddress("glTexCoordP3uiv");
	glTexCoordP4ui = (PFNGLTEXCOORDP4UIPROC)wglGetProcAddress("glTexCoordP4ui");
	glTexCoordP4uiv = (PFNGLTEXCOORDP4UIVPROC)wglGetProcAddress("glTexCoordP4uiv");
	glMultiTexCoordP1ui = (PFNGLMULTITEXCOORDP1UIPROC)wglGetProcAddress("glMultiTexCoordP1ui");
	glMultiTexCoordP1uiv = (PFNGLMULTITEXCOORDP1UIVPROC)wglGetProcAddress("glMultiTexCoordP1uiv");
	glMultiTexCoordP2ui = (PFNGLMULTITEXCOORDP2UIPROC)wglGetProcAddress("glMultiTexCoordP2ui");
	glMultiTexCoordP2uiv = (PFNGLMULTITEXCOORDP2UIVPROC)wglGetProcAddress("glMultiTexCoordP2uiv");
	glMultiTexCoordP3ui = (PFNGLMULTITEXCOORDP3UIPROC)wglGetProcAddress("glMultiTexCoordP3ui");
	glMultiTexCoordP3uiv = (PFNGLMULTITEXCOORDP3UIVPROC)wglGetProcAddress("glMultiTexCoordP3uiv");
	glMultiTexCoordP4ui = (PFNGLMULTITEXCOORDP4UIPROC)wglGetProcAddress("glMultiTexCoordP4ui");
	glMultiTexCoordP4uiv = (PFNGLMULTITEXCOORDP4UIVPROC)wglGetProcAddress("glMultiTexCoordP4uiv");
	glNormalP3ui = (PFNGLNORMALP3UIPROC)wglGetProcAddress("glNormalP3ui");
	glNormalP3uiv = (PFNGLNORMALP3UIVPROC)wglGetProcAddress("glNormalP3uiv");
	glColorP3ui = (PFNGLCOLORP3UIPROC)wglGetProcAddress("glColorP3ui");
	glColorP3uiv = (PFNGLCOLORP3UIVPROC)wglGetProcAddress("glColorP3uiv");
	glColorP4ui = (PFNGLCOLORP4UIPROC)wglGetProcAddress("glColorP4ui");
	glColorP4uiv = (PFNGLCOLORP4UIVPROC)wglGetProcAddress("glColorP4uiv");
	glSecondaryColorP3ui = (PFNGLSECONDARYCOLORP3UIPROC)wglGetProcAddress("glSecondaryColorP3ui");
	glSecondaryColorP3uiv = (PFNGLSECONDARYCOLORP3UIVPROC)wglGetProcAddress("glSecondaryColorP3uiv");
	glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC)wglGetProcAddress("glVertexAttribP1ui");
	glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC)wglGetProcAddress("glVertexAttribP1uiv");
	glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC)wglGetProcAddress("glVertexAttribP2ui");
	glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC)wglGetProcAddress("glVertexAttribP2uiv");
	glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC)wglGetProcAddress("glVertexAttribP3ui");
	glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC)wglGetProcAddress("glVertexAttribP3uiv");
	glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC)wglGetProcAddress("glVertexAttribP4ui");
	glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC)wglGetProcAddress("glVertexAttribP4uiv");
}

// GL_ARB_draw_indirect
PFNGLDRAWARRAYSINDIRECTPROC glDrawArraysIndirect;
PFNGLDRAWELEMENTSINDIRECTPROC glDrawElementsIndirect;

void glelp::init_GL_ARB_draw_indirect()
{
	if(!glelpInternal::checkAvailable("GL_ARB_draw_indirect"))
		return;

	glDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC)wglGetProcAddress("glDrawArraysIndirect");
	glDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC)wglGetProcAddress("glDrawElementsIndirect");
}

// GL_ARB_gpu_shader5

void glelp::init_GL_ARB_gpu_shader5()
{
	if(!glelpInternal::checkAvailable("GL_ARB_gpu_shader5"))
		return;

}

// GL_ARB_gpu_shader_fp64
PFNGLUNIFORM1DPROC glUniform1d;
PFNGLUNIFORM2DPROC glUniform2d;
PFNGLUNIFORM3DPROC glUniform3d;
PFNGLUNIFORM4DPROC glUniform4d;
PFNGLUNIFORM1DVPROC glUniform1dv;
PFNGLUNIFORM2DVPROC glUniform2dv;
PFNGLUNIFORM3DVPROC glUniform3dv;
PFNGLUNIFORM4DVPROC glUniform4dv;
PFNGLUNIFORMMATRIX2DVPROC glUniformMatrix2dv;
PFNGLUNIFORMMATRIX3DVPROC glUniformMatrix3dv;
PFNGLUNIFORMMATRIX4DVPROC glUniformMatrix4dv;
PFNGLUNIFORMMATRIX2X3DVPROC glUniformMatrix2x3dv;
PFNGLUNIFORMMATRIX2X4DVPROC glUniformMatrix2x4dv;
PFNGLUNIFORMMATRIX3X2DVPROC glUniformMatrix3x2dv;
PFNGLUNIFORMMATRIX3X4DVPROC glUniformMatrix3x4dv;
PFNGLUNIFORMMATRIX4X2DVPROC glUniformMatrix4x2dv;
PFNGLUNIFORMMATRIX4X3DVPROC glUniformMatrix4x3dv;
PFNGLGETUNIFORMDVPROC glGetUniformdv;

void glelp::init_GL_ARB_gpu_shader_fp64()
{
	if(!glelpInternal::checkAvailable("GL_ARB_gpu_shader_fp64"))
		return;

	glUniform1d = (PFNGLUNIFORM1DPROC)wglGetProcAddress("glUniform1d");
	glUniform2d = (PFNGLUNIFORM2DPROC)wglGetProcAddress("glUniform2d");
	glUniform3d = (PFNGLUNIFORM3DPROC)wglGetProcAddress("glUniform3d");
	glUniform4d = (PFNGLUNIFORM4DPROC)wglGetProcAddress("glUniform4d");
	glUniform1dv = (PFNGLUNIFORM1DVPROC)wglGetProcAddress("glUniform1dv");
	glUniform2dv = (PFNGLUNIFORM2DVPROC)wglGetProcAddress("glUniform2dv");
	glUniform3dv = (PFNGLUNIFORM3DVPROC)wglGetProcAddress("glUniform3dv");
	glUniform4dv = (PFNGLUNIFORM4DVPROC)wglGetProcAddress("glUniform4dv");
	glUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC)wglGetProcAddress("glUniformMatrix2dv");
	glUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC)wglGetProcAddress("glUniformMatrix3dv");
	glUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC)wglGetProcAddress("glUniformMatrix4dv");
	glUniformMatrix2x3dv = (PFNGLUNIFORMMATRIX2X3DVPROC)wglGetProcAddress("glUniformMatrix2x3dv");
	glUniformMatrix2x4dv = (PFNGLUNIFORMMATRIX2X4DVPROC)wglGetProcAddress("glUniformMatrix2x4dv");
	glUniformMatrix3x2dv = (PFNGLUNIFORMMATRIX3X2DVPROC)wglGetProcAddress("glUniformMatrix3x2dv");
	glUniformMatrix3x4dv = (PFNGLUNIFORMMATRIX3X4DVPROC)wglGetProcAddress("glUniformMatrix3x4dv");
	glUniformMatrix4x2dv = (PFNGLUNIFORMMATRIX4X2DVPROC)wglGetProcAddress("glUniformMatrix4x2dv");
	glUniformMatrix4x3dv = (PFNGLUNIFORMMATRIX4X3DVPROC)wglGetProcAddress("glUniformMatrix4x3dv");
	glGetUniformdv = (PFNGLGETUNIFORMDVPROC)wglGetProcAddress("glGetUniformdv");
}

// GL_ARB_shader_subroutine
PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glGetSubroutineUniformLocation;
PFNGLGETSUBROUTINEINDEXPROC glGetSubroutineIndex;
PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glGetActiveSubroutineUniformiv;
PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glGetActiveSubroutineUniformName;
PFNGLGETACTIVESUBROUTINENAMEPROC glGetActiveSubroutineName;
PFNGLUNIFORMSUBROUTINESUIVPROC glUniformSubroutinesuiv;
PFNGLGETUNIFORMSUBROUTINEUIVPROC glGetUniformSubroutineuiv;
PFNGLGETPROGRAMSTAGEIVPROC glGetProgramStageiv;

void glelp::init_GL_ARB_shader_subroutine()
{
	if(!glelpInternal::checkAvailable("GL_ARB_shader_subroutine"))
		return;

	glGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)wglGetProcAddress("glGetSubroutineUniformLocation");
	glGetSubroutineIndex = (PFNGLGETSUBROUTINEINDEXPROC)wglGetProcAddress("glGetSubroutineIndex");
	glGetActiveSubroutineUniformiv = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)wglGetProcAddress("glGetActiveSubroutineUniformiv");
	glGetActiveSubroutineUniformName = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)wglGetProcAddress("glGetActiveSubroutineUniformName");
	glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC)wglGetProcAddress("glGetActiveSubroutineName");
	glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC)wglGetProcAddress("glUniformSubroutinesuiv");
	glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC)wglGetProcAddress("glGetUniformSubroutineuiv");
	glGetProgramStageiv = (PFNGLGETPROGRAMSTAGEIVPROC)wglGetProcAddress("glGetProgramStageiv");
}

// GL_ARB_tessellation_shader
PFNGLPATCHPARAMETERIPROC glPatchParameteri;
PFNGLPATCHPARAMETERFVPROC glPatchParameterfv;

void glelp::init_GL_ARB_tessellation_shader()
{
	if(!glelpInternal::checkAvailable("GL_ARB_tessellation_shader"))
		return;

	glPatchParameteri = (PFNGLPATCHPARAMETERIPROC)wglGetProcAddress("glPatchParameteri");
	glPatchParameterfv = (PFNGLPATCHPARAMETERFVPROC)wglGetProcAddress("glPatchParameterfv");
}

// GL_ARB_texture_buffer_object_rgb32

void glelp::init_GL_ARB_texture_buffer_object_rgb32()
{
	if(!glelpInternal::checkAvailable("GL_ARB_texture_buffer_object_rgb32"))
		return;

}

// GL_ARB_transform_feedback2
PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback;
PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks;
PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks;
PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback;
PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback;
PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback;
PFNGLDRAWTRANSFORMFEEDBACKPROC glDrawTransformFeedback;

void glelp::init_GL_ARB_transform_feedback2()
{
	if(!glelpInternal::checkAvailable("GL_ARB_transform_feedback2"))
		return;

	glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC)wglGetProcAddress("glBindTransformFeedback");
	glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC)wglGetProcAddress("glDeleteTransformFeedbacks");
	glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC)wglGetProcAddress("glGenTransformFeedbacks");
	glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC)wglGetProcAddress("glIsTransformFeedback");
	glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC)wglGetProcAddress("glPauseTransformFeedback");
	glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC)wglGetProcAddress("glResumeTransformFeedback");
	glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC)wglGetProcAddress("glDrawTransformFeedback");
}

// GL_ARB_transform_feedback3
PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glDrawTransformFeedbackStream;
PFNGLBEGINQUERYINDEXEDPROC glBeginQueryIndexed;
PFNGLENDQUERYINDEXEDPROC glEndQueryIndexed;
PFNGLGETQUERYINDEXEDIVPROC glGetQueryIndexediv;

void glelp::init_GL_ARB_transform_feedback3()
{
	if(!glelpInternal::checkAvailable("GL_ARB_transform_feedback3"))
		return;

	glDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)wglGetProcAddress("glDrawTransformFeedbackStream");
	glBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC)wglGetProcAddress("glBeginQueryIndexed");
	glEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC)wglGetProcAddress("glEndQueryIndexed");
	glGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC)wglGetProcAddress("glGetQueryIndexediv");
}

// GL_ARB_ES2_compatibility
PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler;
PFNGLSHADERBINARYPROC glShaderBinary;
PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat;
PFNGLDEPTHRANGEFPROC glDepthRangef;
PFNGLCLEARDEPTHFPROC glClearDepthf;

void glelp::init_GL_ARB_ES2_compatibility()
{
	if(!glelpInternal::checkAvailable("GL_ARB_ES2_compatibility"))
		return;

	glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC)wglGetProcAddress("glReleaseShaderCompiler");
	glShaderBinary = (PFNGLSHADERBINARYPROC)wglGetProcAddress("glShaderBinary");
	glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC)wglGetProcAddress("glGetShaderPrecisionFormat");
	glDepthRangef = (PFNGLDEPTHRANGEFPROC)wglGetProcAddress("glDepthRangef");
	glClearDepthf = (PFNGLCLEARDEPTHFPROC)wglGetProcAddress("glClearDepthf");
}

// GL_ARB_get_program_binary
PFNGLGETPROGRAMBINARYPROC glGetProgramBinary;
PFNGLPROGRAMBINARYPROC glProgramBinary;
PFNGLPROGRAMPARAMETERIPROC glProgramParameteri;

void glelp::init_GL_ARB_get_program_binary()
{
	if(!glelpInternal::checkAvailable("GL_ARB_get_program_binary"))
		return;

	glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC)wglGetProcAddress("glGetProgramBinary");
	glProgramBinary = (PFNGLPROGRAMBINARYPROC)wglGetProcAddress("glProgramBinary");
	glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC)wglGetProcAddress("glProgramParameteri");
}

// GL_ARB_separate_shader_objects
PFNGLUSEPROGRAMSTAGESPROC glUseProgramStages;
PFNGLACTIVESHADERPROGRAMPROC glActiveShaderProgram;
PFNGLCREATESHADERPROGRAMVPROC glCreateShaderProgramv;
PFNGLBINDPROGRAMPIPELINEPROC glBindProgramPipeline;
PFNGLDELETEPROGRAMPIPELINESPROC glDeleteProgramPipelines;
PFNGLGENPROGRAMPIPELINESPROC glGenProgramPipelines;
PFNGLISPROGRAMPIPELINEPROC glIsProgramPipeline;
PFNGLGETPROGRAMPIPELINEIVPROC glGetProgramPipelineiv;
PFNGLPROGRAMUNIFORM1IPROC glProgramUniform1i;
PFNGLPROGRAMUNIFORM1IVPROC glProgramUniform1iv;
PFNGLPROGRAMUNIFORM1FPROC glProgramUniform1f;
PFNGLPROGRAMUNIFORM1FVPROC glProgramUniform1fv;
PFNGLPROGRAMUNIFORM1DPROC glProgramUniform1d;
PFNGLPROGRAMUNIFORM1DVPROC glProgramUniform1dv;
PFNGLPROGRAMUNIFORM1UIPROC glProgramUniform1ui;
PFNGLPROGRAMUNIFORM1UIVPROC glProgramUniform1uiv;
PFNGLPROGRAMUNIFORM2IPROC glProgramUniform2i;
PFNGLPROGRAMUNIFORM2IVPROC glProgramUniform2iv;
PFNGLPROGRAMUNIFORM2FPROC glProgramUniform2f;
PFNGLPROGRAMUNIFORM2FVPROC glProgramUniform2fv;
PFNGLPROGRAMUNIFORM2DPROC glProgramUniform2d;
PFNGLPROGRAMUNIFORM2DVPROC glProgramUniform2dv;
PFNGLPROGRAMUNIFORM2UIPROC glProgramUniform2ui;
PFNGLPROGRAMUNIFORM2UIVPROC glProgramUniform2uiv;
PFNGLPROGRAMUNIFORM3IPROC glProgramUniform3i;
PFNGLPROGRAMUNIFORM3IVPROC glProgramUniform3iv;
PFNGLPROGRAMUNIFORM3FPROC glProgramUniform3f;
PFNGLPROGRAMUNIFORM3FVPROC glProgramUniform3fv;
PFNGLPROGRAMUNIFORM3DPROC glProgramUniform3d;
PFNGLPROGRAMUNIFORM3DVPROC glProgramUniform3dv;
PFNGLPROGRAMUNIFORM3UIPROC glProgramUniform3ui;
PFNGLPROGRAMUNIFORM3UIVPROC glProgramUniform3uiv;
PFNGLPROGRAMUNIFORM4IPROC glProgramUniform4i;
PFNGLPROGRAMUNIFORM4IVPROC glProgramUniform4iv;
PFNGLPROGRAMUNIFORM4FPROC glProgramUniform4f;
PFNGLPROGRAMUNIFORM4FVPROC glProgramUniform4fv;
PFNGLPROGRAMUNIFORM4DPROC glProgramUniform4d;
PFNGLPROGRAMUNIFORM4DVPROC glProgramUniform4dv;
PFNGLPROGRAMUNIFORM4UIPROC glProgramUniform4ui;
PFNGLPROGRAMUNIFORM4UIVPROC glProgramUniform4uiv;
PFNGLPROGRAMUNIFORMMATRIX2FVPROC glProgramUniformMatrix2fv;
PFNGLPROGRAMUNIFORMMATRIX3FVPROC glProgramUniformMatrix3fv;
PFNGLPROGRAMUNIFORMMATRIX4FVPROC glProgramUniformMatrix4fv;
PFNGLPROGRAMUNIFORMMATRIX2DVPROC glProgramUniformMatrix2dv;
PFNGLPROGRAMUNIFORMMATRIX3DVPROC glProgramUniformMatrix3dv;
PFNGLPROGRAMUNIFORMMATRIX4DVPROC glProgramUniformMatrix4dv;
PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glProgramUniformMatrix2x3fv;
PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glProgramUniformMatrix3x2fv;
PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glProgramUniformMatrix2x4fv;
PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glProgramUniformMatrix4x2fv;
PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glProgramUniformMatrix3x4fv;
PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glProgramUniformMatrix4x3fv;
PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glProgramUniformMatrix2x3dv;
PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glProgramUniformMatrix3x2dv;
PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glProgramUniformMatrix2x4dv;
PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glProgramUniformMatrix4x2dv;
PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glProgramUniformMatrix3x4dv;
PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glProgramUniformMatrix4x3dv;
PFNGLVALIDATEPROGRAMPIPELINEPROC glValidateProgramPipeline;
PFNGLGETPROGRAMPIPELINEINFOLOGPROC glGetProgramPipelineInfoLog;

void glelp::init_GL_ARB_separate_shader_objects()
{
	if(!glelpInternal::checkAvailable("GL_ARB_separate_shader_objects"))
		return;

	glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC)wglGetProcAddress("glUseProgramStages");
	glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC)wglGetProcAddress("glActiveShaderProgram");
	glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC)wglGetProcAddress("glCreateShaderProgramv");
	glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC)wglGetProcAddress("glBindProgramPipeline");
	glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC)wglGetProcAddress("glDeleteProgramPipelines");
	glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC)wglGetProcAddress("glGenProgramPipelines");
	glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC)wglGetProcAddress("glIsProgramPipeline");
	glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC)wglGetProcAddress("glGetProgramPipelineiv");
	glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC)wglGetProcAddress("glProgramUniform1i");
	glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC)wglGetProcAddress("glProgramUniform1iv");
	glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC)wglGetProcAddress("glProgramUniform1f");
	glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC)wglGetProcAddress("glProgramUniform1fv");
	glProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC)wglGetProcAddress("glProgramUniform1d");
	glProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC)wglGetProcAddress("glProgramUniform1dv");
	glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC)wglGetProcAddress("glProgramUniform1ui");
	glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC)wglGetProcAddress("glProgramUniform1uiv");
	glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC)wglGetProcAddress("glProgramUniform2i");
	glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC)wglGetProcAddress("glProgramUniform2iv");
	glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC)wglGetProcAddress("glProgramUniform2f");
	glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC)wglGetProcAddress("glProgramUniform2fv");
	glProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC)wglGetProcAddress("glProgramUniform2d");
	glProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC)wglGetProcAddress("glProgramUniform2dv");
	glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC)wglGetProcAddress("glProgramUniform2ui");
	glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC)wglGetProcAddress("glProgramUniform2uiv");
	glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC)wglGetProcAddress("glProgramUniform3i");
	glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC)wglGetProcAddress("glProgramUniform3iv");
	glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC)wglGetProcAddress("glProgramUniform3f");
	glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC)wglGetProcAddress("glProgramUniform3fv");
	glProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC)wglGetProcAddress("glProgramUniform3d");
	glProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC)wglGetProcAddress("glProgramUniform3dv");
	glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC)wglGetProcAddress("glProgramUniform3ui");
	glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC)wglGetProcAddress("glProgramUniform3uiv");
	glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC)wglGetProcAddress("glProgramUniform4i");
	glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC)wglGetProcAddress("glProgramUniform4iv");
	glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC)wglGetProcAddress("glProgramUniform4f");
	glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC)wglGetProcAddress("glProgramUniform4fv");
	glProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC)wglGetProcAddress("glProgramUniform4d");
	glProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC)wglGetProcAddress("glProgramUniform4dv");
	glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC)wglGetProcAddress("glProgramUniform4ui");
	glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC)wglGetProcAddress("glProgramUniform4uiv");
	glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC)wglGetProcAddress("glProgramUniformMatrix2fv");
	glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC)wglGetProcAddress("glProgramUniformMatrix3fv");
	glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC)wglGetProcAddress("glProgramUniformMatrix4fv");
	glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC)wglGetProcAddress("glProgramUniformMatrix2dv");
	glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC)wglGetProcAddress("glProgramUniformMatrix3dv");
	glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC)wglGetProcAddress("glProgramUniformMatrix4dv");
	glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)wglGetProcAddress("glProgramUniformMatrix2x3fv");
	glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)wglGetProcAddress("glProgramUniformMatrix3x2fv");
	glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)wglGetProcAddress("glProgramUniformMatrix2x4fv");
	glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)wglGetProcAddress("glProgramUniformMatrix4x2fv");
	glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)wglGetProcAddress("glProgramUniformMatrix3x4fv");
	glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)wglGetProcAddress("glProgramUniformMatrix4x3fv");
	glProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)wglGetProcAddress("glProgramUniformMatrix2x3dv");
	glProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)wglGetProcAddress("glProgramUniformMatrix3x2dv");
	glProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)wglGetProcAddress("glProgramUniformMatrix2x4dv");
	glProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)wglGetProcAddress("glProgramUniformMatrix4x2dv");
	glProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)wglGetProcAddress("glProgramUniformMatrix3x4dv");
	glProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)wglGetProcAddress("glProgramUniformMatrix4x3dv");
	glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC)wglGetProcAddress("glValidateProgramPipeline");
	glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC)wglGetProcAddress("glGetProgramPipelineInfoLog");
}

// GL_ARB_shader_precision

void glelp::init_GL_ARB_shader_precision()
{
	if(!glelpInternal::checkAvailable("GL_ARB_shader_precision"))
		return;

}

// GL_ARB_vertex_attrib_64bit
PFNGLVERTEXATTRIBL1DPROC glVertexAttribL1d;
PFNGLVERTEXATTRIBL2DPROC glVertexAttribL2d;
PFNGLVERTEXATTRIBL3DPROC glVertexAttribL3d;
PFNGLVERTEXATTRIBL4DPROC glVertexAttribL4d;
PFNGLVERTEXATTRIBL1DVPROC glVertexAttribL1dv;
PFNGLVERTEXATTRIBL2DVPROC glVertexAttribL2dv;
PFNGLVERTEXATTRIBL3DVPROC glVertexAttribL3dv;
PFNGLVERTEXATTRIBL4DVPROC glVertexAttribL4dv;
PFNGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer;
PFNGLGETVERTEXATTRIBLDVPROC glGetVertexAttribLdv;

void glelp::init_GL_ARB_vertex_attrib_64bit()
{
	if(!glelpInternal::checkAvailable("GL_ARB_vertex_attrib_64bit"))
		return;

	glVertexAttribL1d = (PFNGLVERTEXATTRIBL1DPROC)wglGetProcAddress("glVertexAttribL1d");
	glVertexAttribL2d = (PFNGLVERTEXATTRIBL2DPROC)wglGetProcAddress("glVertexAttribL2d");
	glVertexAttribL3d = (PFNGLVERTEXATTRIBL3DPROC)wglGetProcAddress("glVertexAttribL3d");
	glVertexAttribL4d = (PFNGLVERTEXATTRIBL4DPROC)wglGetProcAddress("glVertexAttribL4d");
	glVertexAttribL1dv = (PFNGLVERTEXATTRIBL1DVPROC)wglGetProcAddress("glVertexAttribL1dv");
	glVertexAttribL2dv = (PFNGLVERTEXATTRIBL2DVPROC)wglGetProcAddress("glVertexAttribL2dv");
	glVertexAttribL3dv = (PFNGLVERTEXATTRIBL3DVPROC)wglGetProcAddress("glVertexAttribL3dv");
	glVertexAttribL4dv = (PFNGLVERTEXATTRIBL4DVPROC)wglGetProcAddress("glVertexAttribL4dv");
	glVertexAttribLPointer = (PFNGLVERTEXATTRIBLPOINTERPROC)wglGetProcAddress("glVertexAttribLPointer");
	glGetVertexAttribLdv = (PFNGLGETVERTEXATTRIBLDVPROC)wglGetProcAddress("glGetVertexAttribLdv");
}

// GL_ARB_viewport_array
PFNGLVIEWPORTARRAYVPROC glViewportArrayv;
PFNGLVIEWPORTINDEXEDFPROC glViewportIndexedf;
PFNGLVIEWPORTINDEXEDFVPROC glViewportIndexedfv;
PFNGLSCISSORARRAYVPROC glScissorArrayv;
PFNGLSCISSORINDEXEDPROC glScissorIndexed;
PFNGLSCISSORINDEXEDVPROC glScissorIndexedv;
PFNGLDEPTHRANGEARRAYVPROC glDepthRangeArrayv;
PFNGLDEPTHRANGEINDEXEDPROC glDepthRangeIndexed;
PFNGLGETFLOATI_VPROC glGetFloati_v;
PFNGLGETDOUBLEI_VPROC glGetDoublei_v;

void glelp::init_GL_ARB_viewport_array()
{
	if(!glelpInternal::checkAvailable("GL_ARB_viewport_array"))
		return;

	glViewportArrayv = (PFNGLVIEWPORTARRAYVPROC)wglGetProcAddress("glViewportArrayv");
	glViewportIndexedf = (PFNGLVIEWPORTINDEXEDFPROC)wglGetProcAddress("glViewportIndexedf");
	glViewportIndexedfv = (PFNGLVIEWPORTINDEXEDFVPROC)wglGetProcAddress("glViewportIndexedfv");
	glScissorArrayv = (PFNGLSCISSORARRAYVPROC)wglGetProcAddress("glScissorArrayv");
	glScissorIndexed = (PFNGLSCISSORINDEXEDPROC)wglGetProcAddress("glScissorIndexed");
	glScissorIndexedv = (PFNGLSCISSORINDEXEDVPROC)wglGetProcAddress("glScissorIndexedv");
	glDepthRangeArrayv = (PFNGLDEPTHRANGEARRAYVPROC)wglGetProcAddress("glDepthRangeArrayv");
	glDepthRangeIndexed = (PFNGLDEPTHRANGEINDEXEDPROC)wglGetProcAddress("glDepthRangeIndexed");
	glGetFloati_v = (PFNGLGETFLOATI_VPROC)wglGetProcAddress("glGetFloati_v");
	glGetDoublei_v = (PFNGLGETDOUBLEI_VPROC)wglGetProcAddress("glGetDoublei_v");
}

// GL_ARB_cl_event
PFNGLCREATESYNCFROMCLEVENTARBPROC glCreateSyncFromCLeventARB;

void glelp::init_GL_ARB_cl_event()
{
	if(!glelpInternal::checkAvailable("GL_ARB_cl_event"))
		return;

	glCreateSyncFromCLeventARB = (PFNGLCREATESYNCFROMCLEVENTARBPROC)wglGetProcAddress("glCreateSyncFromCLeventARB");
}

// GL_ARB_debug_output
PFNGLDEBUGMESSAGECONTROLARBPROC glDebugMessageControlARB;
PFNGLDEBUGMESSAGEINSERTARBPROC glDebugMessageInsertARB;
PFNGLDEBUGMESSAGECALLBACKARBPROC glDebugMessageCallbackARB;
PFNGLGETDEBUGMESSAGELOGARBPROC glGetDebugMessageLogARB;

void glelp::init_GL_ARB_debug_output()
{
	if(!glelpInternal::checkAvailable("GL_ARB_debug_output"))
		return;

	glDebugMessageControlARB = (PFNGLDEBUGMESSAGECONTROLARBPROC)wglGetProcAddress("glDebugMessageControlARB");
	glDebugMessageInsertARB = (PFNGLDEBUGMESSAGEINSERTARBPROC)wglGetProcAddress("glDebugMessageInsertARB");
	glDebugMessageCallbackARB = (PFNGLDEBUGMESSAGECALLBACKARBPROC)wglGetProcAddress("glDebugMessageCallbackARB");
	glGetDebugMessageLogARB = (PFNGLGETDEBUGMESSAGELOGARBPROC)wglGetProcAddress("glGetDebugMessageLogARB");
}

// GL_ARB_robustness
PFNGLGETGRAPHICSRESETSTATUSARBPROC glGetGraphicsResetStatusARB;
PFNGLGETNMAPDVARBPROC glGetnMapdvARB;
PFNGLGETNMAPFVARBPROC glGetnMapfvARB;
PFNGLGETNMAPIVARBPROC glGetnMapivARB;
PFNGLGETNPIXELMAPFVARBPROC glGetnPixelMapfvARB;
PFNGLGETNPIXELMAPUIVARBPROC glGetnPixelMapuivARB;
PFNGLGETNPIXELMAPUSVARBPROC glGetnPixelMapusvARB;
PFNGLGETNPOLYGONSTIPPLEARBPROC glGetnPolygonStippleARB;
PFNGLGETNCOLORTABLEARBPROC glGetnColorTableARB;
PFNGLGETNCONVOLUTIONFILTERARBPROC glGetnConvolutionFilterARB;
PFNGLGETNSEPARABLEFILTERARBPROC glGetnSeparableFilterARB;
PFNGLGETNHISTOGRAMARBPROC glGetnHistogramARB;
PFNGLGETNMINMAXARBPROC glGetnMinmaxARB;
PFNGLGETNTEXIMAGEARBPROC glGetnTexImageARB;
PFNGLREADNPIXELSARBPROC glReadnPixelsARB;
PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC glGetnCompressedTexImageARB;
PFNGLGETNUNIFORMFVARBPROC glGetnUniformfvARB;
PFNGLGETNUNIFORMIVARBPROC glGetnUniformivARB;
PFNGLGETNUNIFORMUIVARBPROC glGetnUniformuivARB;
PFNGLGETNUNIFORMDVARBPROC glGetnUniformdvARB;

void glelp::init_GL_ARB_robustness()
{
	if(!glelpInternal::checkAvailable("GL_ARB_robustness"))
		return;

	glGetGraphicsResetStatusARB = (PFNGLGETGRAPHICSRESETSTATUSARBPROC)wglGetProcAddress("glGetGraphicsResetStatusARB");
	glGetnMapdvARB = (PFNGLGETNMAPDVARBPROC)wglGetProcAddress("glGetnMapdvARB");
	glGetnMapfvARB = (PFNGLGETNMAPFVARBPROC)wglGetProcAddress("glGetnMapfvARB");
	glGetnMapivARB = (PFNGLGETNMAPIVARBPROC)wglGetProcAddress("glGetnMapivARB");
	glGetnPixelMapfvARB = (PFNGLGETNPIXELMAPFVARBPROC)wglGetProcAddress("glGetnPixelMapfvARB");
	glGetnPixelMapuivARB = (PFNGLGETNPIXELMAPUIVARBPROC)wglGetProcAddress("glGetnPixelMapuivARB");
	glGetnPixelMapusvARB = (PFNGLGETNPIXELMAPUSVARBPROC)wglGetProcAddress("glGetnPixelMapusvARB");
	glGetnPolygonStippleARB = (PFNGLGETNPOLYGONSTIPPLEARBPROC)wglGetProcAddress("glGetnPolygonStippleARB");
	glGetnColorTableARB = (PFNGLGETNCOLORTABLEARBPROC)wglGetProcAddress("glGetnColorTableARB");
	glGetnConvolutionFilterARB = (PFNGLGETNCONVOLUTIONFILTERARBPROC)wglGetProcAddress("glGetnConvolutionFilterARB");
	glGetnSeparableFilterARB = (PFNGLGETNSEPARABLEFILTERARBPROC)wglGetProcAddress("glGetnSeparableFilterARB");
	glGetnHistogramARB = (PFNGLGETNHISTOGRAMARBPROC)wglGetProcAddress("glGetnHistogramARB");
	glGetnMinmaxARB = (PFNGLGETNMINMAXARBPROC)wglGetProcAddress("glGetnMinmaxARB");
	glGetnTexImageARB = (PFNGLGETNTEXIMAGEARBPROC)wglGetProcAddress("glGetnTexImageARB");
	glReadnPixelsARB = (PFNGLREADNPIXELSARBPROC)wglGetProcAddress("glReadnPixelsARB");
	glGetnCompressedTexImageARB = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC)wglGetProcAddress("glGetnCompressedTexImageARB");
	glGetnUniformfvARB = (PFNGLGETNUNIFORMFVARBPROC)wglGetProcAddress("glGetnUniformfvARB");
	glGetnUniformivARB = (PFNGLGETNUNIFORMIVARBPROC)wglGetProcAddress("glGetnUniformivARB");
	glGetnUniformuivARB = (PFNGLGETNUNIFORMUIVARBPROC)wglGetProcAddress("glGetnUniformuivARB");
	glGetnUniformdvARB = (PFNGLGETNUNIFORMDVARBPROC)wglGetProcAddress("glGetnUniformdvARB");
}

// GL_ARB_shader_stencil_export

void glelp::init_GL_ARB_shader_stencil_export()
{
	if(!glelpInternal::checkAvailable("GL_ARB_shader_stencil_export"))
		return;

}

// GL_EXT_abgr

void glelp::init_GL_EXT_abgr()
{
	if(!glelpInternal::checkAvailable("GL_EXT_abgr"))
		return;

}

// GL_EXT_blend_color
PFNGLBLENDCOLOREXTPROC glBlendColorEXT;

void glelp::init_GL_EXT_blend_color()
{
	if(!glelpInternal::checkAvailable("GL_EXT_blend_color"))
		return;

	glBlendColorEXT = (PFNGLBLENDCOLOREXTPROC)wglGetProcAddress("glBlendColorEXT");
}

// GL_EXT_polygon_offset
PFNGLPOLYGONOFFSETEXTPROC glPolygonOffsetEXT;

void glelp::init_GL_EXT_polygon_offset()
{
	if(!glelpInternal::checkAvailable("GL_EXT_polygon_offset"))
		return;

	glPolygonOffsetEXT = (PFNGLPOLYGONOFFSETEXTPROC)wglGetProcAddress("glPolygonOffsetEXT");
}

// GL_EXT_texture

void glelp::init_GL_EXT_texture()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture"))
		return;

}

// GL_EXT_texture3D
PFNGLTEXIMAGE3DEXTPROC glTexImage3DEXT;
PFNGLTEXSUBIMAGE3DEXTPROC glTexSubImage3DEXT;

void glelp::init_GL_EXT_texture3D()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture3D"))
		return;

	glTexImage3DEXT = (PFNGLTEXIMAGE3DEXTPROC)wglGetProcAddress("glTexImage3DEXT");
	glTexSubImage3DEXT = (PFNGLTEXSUBIMAGE3DEXTPROC)wglGetProcAddress("glTexSubImage3DEXT");
}

// GL_SGIS_texture_filter4
PFNGLGETTEXFILTERFUNCSGISPROC glGetTexFilterFuncSGIS;
PFNGLTEXFILTERFUNCSGISPROC glTexFilterFuncSGIS;

void glelp::init_GL_SGIS_texture_filter4()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_texture_filter4"))
		return;

	glGetTexFilterFuncSGIS = (PFNGLGETTEXFILTERFUNCSGISPROC)wglGetProcAddress("glGetTexFilterFuncSGIS");
	glTexFilterFuncSGIS = (PFNGLTEXFILTERFUNCSGISPROC)wglGetProcAddress("glTexFilterFuncSGIS");
}

// GL_EXT_subtexture
PFNGLTEXSUBIMAGE1DEXTPROC glTexSubImage1DEXT;
PFNGLTEXSUBIMAGE2DEXTPROC glTexSubImage2DEXT;

void glelp::init_GL_EXT_subtexture()
{
	if(!glelpInternal::checkAvailable("GL_EXT_subtexture"))
		return;

	glTexSubImage1DEXT = (PFNGLTEXSUBIMAGE1DEXTPROC)wglGetProcAddress("glTexSubImage1DEXT");
	glTexSubImage2DEXT = (PFNGLTEXSUBIMAGE2DEXTPROC)wglGetProcAddress("glTexSubImage2DEXT");
}

// GL_EXT_copy_texture
PFNGLCOPYTEXIMAGE1DEXTPROC glCopyTexImage1DEXT;
PFNGLCOPYTEXIMAGE2DEXTPROC glCopyTexImage2DEXT;
PFNGLCOPYTEXSUBIMAGE1DEXTPROC glCopyTexSubImage1DEXT;
PFNGLCOPYTEXSUBIMAGE2DEXTPROC glCopyTexSubImage2DEXT;
PFNGLCOPYTEXSUBIMAGE3DEXTPROC glCopyTexSubImage3DEXT;

void glelp::init_GL_EXT_copy_texture()
{
	if(!glelpInternal::checkAvailable("GL_EXT_copy_texture"))
		return;

	glCopyTexImage1DEXT = (PFNGLCOPYTEXIMAGE1DEXTPROC)wglGetProcAddress("glCopyTexImage1DEXT");
	glCopyTexImage2DEXT = (PFNGLCOPYTEXIMAGE2DEXTPROC)wglGetProcAddress("glCopyTexImage2DEXT");
	glCopyTexSubImage1DEXT = (PFNGLCOPYTEXSUBIMAGE1DEXTPROC)wglGetProcAddress("glCopyTexSubImage1DEXT");
	glCopyTexSubImage2DEXT = (PFNGLCOPYTEXSUBIMAGE2DEXTPROC)wglGetProcAddress("glCopyTexSubImage2DEXT");
	glCopyTexSubImage3DEXT = (PFNGLCOPYTEXSUBIMAGE3DEXTPROC)wglGetProcAddress("glCopyTexSubImage3DEXT");
}

// GL_EXT_histogram
PFNGLGETHISTOGRAMEXTPROC glGetHistogramEXT;
PFNGLGETHISTOGRAMPARAMETERFVEXTPROC glGetHistogramParameterfvEXT;
PFNGLGETHISTOGRAMPARAMETERIVEXTPROC glGetHistogramParameterivEXT;
PFNGLGETMINMAXEXTPROC glGetMinmaxEXT;
PFNGLGETMINMAXPARAMETERFVEXTPROC glGetMinmaxParameterfvEXT;
PFNGLGETMINMAXPARAMETERIVEXTPROC glGetMinmaxParameterivEXT;
PFNGLHISTOGRAMEXTPROC glHistogramEXT;
PFNGLMINMAXEXTPROC glMinmaxEXT;
PFNGLRESETHISTOGRAMEXTPROC glResetHistogramEXT;
PFNGLRESETMINMAXEXTPROC glResetMinmaxEXT;

void glelp::init_GL_EXT_histogram()
{
	if(!glelpInternal::checkAvailable("GL_EXT_histogram"))
		return;

	glGetHistogramEXT = (PFNGLGETHISTOGRAMEXTPROC)wglGetProcAddress("glGetHistogramEXT");
	glGetHistogramParameterfvEXT = (PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)wglGetProcAddress("glGetHistogramParameterfvEXT");
	glGetHistogramParameterivEXT = (PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)wglGetProcAddress("glGetHistogramParameterivEXT");
	glGetMinmaxEXT = (PFNGLGETMINMAXEXTPROC)wglGetProcAddress("glGetMinmaxEXT");
	glGetMinmaxParameterfvEXT = (PFNGLGETMINMAXPARAMETERFVEXTPROC)wglGetProcAddress("glGetMinmaxParameterfvEXT");
	glGetMinmaxParameterivEXT = (PFNGLGETMINMAXPARAMETERIVEXTPROC)wglGetProcAddress("glGetMinmaxParameterivEXT");
	glHistogramEXT = (PFNGLHISTOGRAMEXTPROC)wglGetProcAddress("glHistogramEXT");
	glMinmaxEXT = (PFNGLMINMAXEXTPROC)wglGetProcAddress("glMinmaxEXT");
	glResetHistogramEXT = (PFNGLRESETHISTOGRAMEXTPROC)wglGetProcAddress("glResetHistogramEXT");
	glResetMinmaxEXT = (PFNGLRESETMINMAXEXTPROC)wglGetProcAddress("glResetMinmaxEXT");
}

// GL_EXT_convolution
PFNGLCONVOLUTIONFILTER1DEXTPROC glConvolutionFilter1DEXT;
PFNGLCONVOLUTIONFILTER2DEXTPROC glConvolutionFilter2DEXT;
PFNGLCONVOLUTIONPARAMETERFEXTPROC glConvolutionParameterfEXT;
PFNGLCONVOLUTIONPARAMETERFVEXTPROC glConvolutionParameterfvEXT;
PFNGLCONVOLUTIONPARAMETERIEXTPROC glConvolutionParameteriEXT;
PFNGLCONVOLUTIONPARAMETERIVEXTPROC glConvolutionParameterivEXT;
PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC glCopyConvolutionFilter1DEXT;
PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC glCopyConvolutionFilter2DEXT;
PFNGLGETCONVOLUTIONFILTEREXTPROC glGetConvolutionFilterEXT;
PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC glGetConvolutionParameterfvEXT;
PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC glGetConvolutionParameterivEXT;
PFNGLGETSEPARABLEFILTEREXTPROC glGetSeparableFilterEXT;
PFNGLSEPARABLEFILTER2DEXTPROC glSeparableFilter2DEXT;

void glelp::init_GL_EXT_convolution()
{
	if(!glelpInternal::checkAvailable("GL_EXT_convolution"))
		return;

	glConvolutionFilter1DEXT = (PFNGLCONVOLUTIONFILTER1DEXTPROC)wglGetProcAddress("glConvolutionFilter1DEXT");
	glConvolutionFilter2DEXT = (PFNGLCONVOLUTIONFILTER2DEXTPROC)wglGetProcAddress("glConvolutionFilter2DEXT");
	glConvolutionParameterfEXT = (PFNGLCONVOLUTIONPARAMETERFEXTPROC)wglGetProcAddress("glConvolutionParameterfEXT");
	glConvolutionParameterfvEXT = (PFNGLCONVOLUTIONPARAMETERFVEXTPROC)wglGetProcAddress("glConvolutionParameterfvEXT");
	glConvolutionParameteriEXT = (PFNGLCONVOLUTIONPARAMETERIEXTPROC)wglGetProcAddress("glConvolutionParameteriEXT");
	glConvolutionParameterivEXT = (PFNGLCONVOLUTIONPARAMETERIVEXTPROC)wglGetProcAddress("glConvolutionParameterivEXT");
	glCopyConvolutionFilter1DEXT = (PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)wglGetProcAddress("glCopyConvolutionFilter1DEXT");
	glCopyConvolutionFilter2DEXT = (PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)wglGetProcAddress("glCopyConvolutionFilter2DEXT");
	glGetConvolutionFilterEXT = (PFNGLGETCONVOLUTIONFILTEREXTPROC)wglGetProcAddress("glGetConvolutionFilterEXT");
	glGetConvolutionParameterfvEXT = (PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)wglGetProcAddress("glGetConvolutionParameterfvEXT");
	glGetConvolutionParameterivEXT = (PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)wglGetProcAddress("glGetConvolutionParameterivEXT");
	glGetSeparableFilterEXT = (PFNGLGETSEPARABLEFILTEREXTPROC)wglGetProcAddress("glGetSeparableFilterEXT");
	glSeparableFilter2DEXT = (PFNGLSEPARABLEFILTER2DEXTPROC)wglGetProcAddress("glSeparableFilter2DEXT");
}

// GL_SGI_color_matrix

void glelp::init_GL_SGI_color_matrix()
{
	if(!glelpInternal::checkAvailable("GL_SGI_color_matrix"))
		return;

}

// GL_SGI_color_table
PFNGLCOLORTABLESGIPROC glColorTableSGI;
PFNGLCOLORTABLEPARAMETERFVSGIPROC glColorTableParameterfvSGI;
PFNGLCOLORTABLEPARAMETERIVSGIPROC glColorTableParameterivSGI;
PFNGLCOPYCOLORTABLESGIPROC glCopyColorTableSGI;
PFNGLGETCOLORTABLESGIPROC glGetColorTableSGI;
PFNGLGETCOLORTABLEPARAMETERFVSGIPROC glGetColorTableParameterfvSGI;
PFNGLGETCOLORTABLEPARAMETERIVSGIPROC glGetColorTableParameterivSGI;

void glelp::init_GL_SGI_color_table()
{
	if(!glelpInternal::checkAvailable("GL_SGI_color_table"))
		return;

	glColorTableSGI = (PFNGLCOLORTABLESGIPROC)wglGetProcAddress("glColorTableSGI");
	glColorTableParameterfvSGI = (PFNGLCOLORTABLEPARAMETERFVSGIPROC)wglGetProcAddress("glColorTableParameterfvSGI");
	glColorTableParameterivSGI = (PFNGLCOLORTABLEPARAMETERIVSGIPROC)wglGetProcAddress("glColorTableParameterivSGI");
	glCopyColorTableSGI = (PFNGLCOPYCOLORTABLESGIPROC)wglGetProcAddress("glCopyColorTableSGI");
	glGetColorTableSGI = (PFNGLGETCOLORTABLESGIPROC)wglGetProcAddress("glGetColorTableSGI");
	glGetColorTableParameterfvSGI = (PFNGLGETCOLORTABLEPARAMETERFVSGIPROC)wglGetProcAddress("glGetColorTableParameterfvSGI");
	glGetColorTableParameterivSGI = (PFNGLGETCOLORTABLEPARAMETERIVSGIPROC)wglGetProcAddress("glGetColorTableParameterivSGI");
}

// GL_SGIS_pixel_texture
PFNGLPIXELTEXGENPARAMETERISGISPROC glPixelTexGenParameteriSGIS;
PFNGLPIXELTEXGENPARAMETERIVSGISPROC glPixelTexGenParameterivSGIS;
PFNGLPIXELTEXGENPARAMETERFSGISPROC glPixelTexGenParameterfSGIS;
PFNGLPIXELTEXGENPARAMETERFVSGISPROC glPixelTexGenParameterfvSGIS;
PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC glGetPixelTexGenParameterivSGIS;
PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC glGetPixelTexGenParameterfvSGIS;

void glelp::init_GL_SGIS_pixel_texture()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_pixel_texture"))
		return;

	glPixelTexGenParameteriSGIS = (PFNGLPIXELTEXGENPARAMETERISGISPROC)wglGetProcAddress("glPixelTexGenParameteriSGIS");
	glPixelTexGenParameterivSGIS = (PFNGLPIXELTEXGENPARAMETERIVSGISPROC)wglGetProcAddress("glPixelTexGenParameterivSGIS");
	glPixelTexGenParameterfSGIS = (PFNGLPIXELTEXGENPARAMETERFSGISPROC)wglGetProcAddress("glPixelTexGenParameterfSGIS");
	glPixelTexGenParameterfvSGIS = (PFNGLPIXELTEXGENPARAMETERFVSGISPROC)wglGetProcAddress("glPixelTexGenParameterfvSGIS");
	glGetPixelTexGenParameterivSGIS = (PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC)wglGetProcAddress("glGetPixelTexGenParameterivSGIS");
	glGetPixelTexGenParameterfvSGIS = (PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC)wglGetProcAddress("glGetPixelTexGenParameterfvSGIS");
}

// GL_SGIX_pixel_texture
PFNGLPIXELTEXGENSGIXPROC glPixelTexGenSGIX;

void glelp::init_GL_SGIX_pixel_texture()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_pixel_texture"))
		return;

	glPixelTexGenSGIX = (PFNGLPIXELTEXGENSGIXPROC)wglGetProcAddress("glPixelTexGenSGIX");
}

// GL_SGIS_texture4D
PFNGLTEXIMAGE4DSGISPROC glTexImage4DSGIS;
PFNGLTEXSUBIMAGE4DSGISPROC glTexSubImage4DSGIS;

void glelp::init_GL_SGIS_texture4D()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_texture4D"))
		return;

	glTexImage4DSGIS = (PFNGLTEXIMAGE4DSGISPROC)wglGetProcAddress("glTexImage4DSGIS");
	glTexSubImage4DSGIS = (PFNGLTEXSUBIMAGE4DSGISPROC)wglGetProcAddress("glTexSubImage4DSGIS");
}

// GL_SGI_texture_color_table

void glelp::init_GL_SGI_texture_color_table()
{
	if(!glelpInternal::checkAvailable("GL_SGI_texture_color_table"))
		return;

}

// GL_EXT_cmyka

void glelp::init_GL_EXT_cmyka()
{
	if(!glelpInternal::checkAvailable("GL_EXT_cmyka"))
		return;

}

// GL_EXT_texture_object
PFNGLARETEXTURESRESIDENTEXTPROC glAreTexturesResidentEXT;
PFNGLBINDTEXTUREEXTPROC glBindTextureEXT;
PFNGLDELETETEXTURESEXTPROC glDeleteTexturesEXT;
PFNGLGENTEXTURESEXTPROC glGenTexturesEXT;
PFNGLISTEXTUREEXTPROC glIsTextureEXT;
PFNGLPRIORITIZETEXTURESEXTPROC glPrioritizeTexturesEXT;

void glelp::init_GL_EXT_texture_object()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_object"))
		return;

	glAreTexturesResidentEXT = (PFNGLARETEXTURESRESIDENTEXTPROC)wglGetProcAddress("glAreTexturesResidentEXT");
	glBindTextureEXT = (PFNGLBINDTEXTUREEXTPROC)wglGetProcAddress("glBindTextureEXT");
	glDeleteTexturesEXT = (PFNGLDELETETEXTURESEXTPROC)wglGetProcAddress("glDeleteTexturesEXT");
	glGenTexturesEXT = (PFNGLGENTEXTURESEXTPROC)wglGetProcAddress("glGenTexturesEXT");
	glIsTextureEXT = (PFNGLISTEXTUREEXTPROC)wglGetProcAddress("glIsTextureEXT");
	glPrioritizeTexturesEXT = (PFNGLPRIORITIZETEXTURESEXTPROC)wglGetProcAddress("glPrioritizeTexturesEXT");
}

// GL_SGIS_detail_texture
PFNGLDETAILTEXFUNCSGISPROC glDetailTexFuncSGIS;
PFNGLGETDETAILTEXFUNCSGISPROC glGetDetailTexFuncSGIS;

void glelp::init_GL_SGIS_detail_texture()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_detail_texture"))
		return;

	glDetailTexFuncSGIS = (PFNGLDETAILTEXFUNCSGISPROC)wglGetProcAddress("glDetailTexFuncSGIS");
	glGetDetailTexFuncSGIS = (PFNGLGETDETAILTEXFUNCSGISPROC)wglGetProcAddress("glGetDetailTexFuncSGIS");
}

// GL_SGIS_sharpen_texture
PFNGLSHARPENTEXFUNCSGISPROC glSharpenTexFuncSGIS;
PFNGLGETSHARPENTEXFUNCSGISPROC glGetSharpenTexFuncSGIS;

void glelp::init_GL_SGIS_sharpen_texture()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_sharpen_texture"))
		return;

	glSharpenTexFuncSGIS = (PFNGLSHARPENTEXFUNCSGISPROC)wglGetProcAddress("glSharpenTexFuncSGIS");
	glGetSharpenTexFuncSGIS = (PFNGLGETSHARPENTEXFUNCSGISPROC)wglGetProcAddress("glGetSharpenTexFuncSGIS");
}

// GL_EXT_packed_pixels

void glelp::init_GL_EXT_packed_pixels()
{
	if(!glelpInternal::checkAvailable("GL_EXT_packed_pixels"))
		return;

}

// GL_SGIS_texture_lod

void glelp::init_GL_SGIS_texture_lod()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_texture_lod"))
		return;

}

// GL_SGIS_multisample
PFNGLSAMPLEMASKSGISPROC glSampleMaskSGIS;
PFNGLSAMPLEPATTERNSGISPROC glSamplePatternSGIS;

void glelp::init_GL_SGIS_multisample()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_multisample"))
		return;

	glSampleMaskSGIS = (PFNGLSAMPLEMASKSGISPROC)wglGetProcAddress("glSampleMaskSGIS");
	glSamplePatternSGIS = (PFNGLSAMPLEPATTERNSGISPROC)wglGetProcAddress("glSamplePatternSGIS");
}

// GL_EXT_rescale_normal

void glelp::init_GL_EXT_rescale_normal()
{
	if(!glelpInternal::checkAvailable("GL_EXT_rescale_normal"))
		return;

}

// GL_EXT_vertex_array
PFNGLARRAYELEMENTEXTPROC glArrayElementEXT;
PFNGLCOLORPOINTEREXTPROC glColorPointerEXT;
PFNGLDRAWARRAYSEXTPROC glDrawArraysEXT;
PFNGLEDGEFLAGPOINTEREXTPROC glEdgeFlagPointerEXT;
PFNGLGETPOINTERVEXTPROC glGetPointervEXT;
PFNGLINDEXPOINTEREXTPROC glIndexPointerEXT;
PFNGLNORMALPOINTEREXTPROC glNormalPointerEXT;
PFNGLTEXCOORDPOINTEREXTPROC glTexCoordPointerEXT;
PFNGLVERTEXPOINTEREXTPROC glVertexPointerEXT;

void glelp::init_GL_EXT_vertex_array()
{
	if(!glelpInternal::checkAvailable("GL_EXT_vertex_array"))
		return;

	glArrayElementEXT = (PFNGLARRAYELEMENTEXTPROC)wglGetProcAddress("glArrayElementEXT");
	glColorPointerEXT = (PFNGLCOLORPOINTEREXTPROC)wglGetProcAddress("glColorPointerEXT");
	glDrawArraysEXT = (PFNGLDRAWARRAYSEXTPROC)wglGetProcAddress("glDrawArraysEXT");
	glEdgeFlagPointerEXT = (PFNGLEDGEFLAGPOINTEREXTPROC)wglGetProcAddress("glEdgeFlagPointerEXT");
	glGetPointervEXT = (PFNGLGETPOINTERVEXTPROC)wglGetProcAddress("glGetPointervEXT");
	glIndexPointerEXT = (PFNGLINDEXPOINTEREXTPROC)wglGetProcAddress("glIndexPointerEXT");
	glNormalPointerEXT = (PFNGLNORMALPOINTEREXTPROC)wglGetProcAddress("glNormalPointerEXT");
	glTexCoordPointerEXT = (PFNGLTEXCOORDPOINTEREXTPROC)wglGetProcAddress("glTexCoordPointerEXT");
	glVertexPointerEXT = (PFNGLVERTEXPOINTEREXTPROC)wglGetProcAddress("glVertexPointerEXT");
}

// GL_EXT_misc_attribute

void glelp::init_GL_EXT_misc_attribute()
{
	if(!glelpInternal::checkAvailable("GL_EXT_misc_attribute"))
		return;

}

// GL_SGIS_generate_mipmap

void glelp::init_GL_SGIS_generate_mipmap()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_generate_mipmap"))
		return;

}

// GL_SGIX_clipmap

void glelp::init_GL_SGIX_clipmap()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_clipmap"))
		return;

}

// GL_SGIX_shadow

void glelp::init_GL_SGIX_shadow()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_shadow"))
		return;

}

// GL_SGIS_texture_edge_clamp

void glelp::init_GL_SGIS_texture_edge_clamp()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_texture_edge_clamp"))
		return;

}

// GL_SGIS_texture_border_clamp

void glelp::init_GL_SGIS_texture_border_clamp()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_texture_border_clamp"))
		return;

}

// GL_EXT_blend_minmax
PFNGLBLENDEQUATIONEXTPROC glBlendEquationEXT;

void glelp::init_GL_EXT_blend_minmax()
{
	if(!glelpInternal::checkAvailable("GL_EXT_blend_minmax"))
		return;

	glBlendEquationEXT = (PFNGLBLENDEQUATIONEXTPROC)wglGetProcAddress("glBlendEquationEXT");
}

// GL_EXT_blend_subtract

void glelp::init_GL_EXT_blend_subtract()
{
	if(!glelpInternal::checkAvailable("GL_EXT_blend_subtract"))
		return;

}

// GL_EXT_blend_logic_op

void glelp::init_GL_EXT_blend_logic_op()
{
	if(!glelpInternal::checkAvailable("GL_EXT_blend_logic_op"))
		return;

}

// GL_SGIX_interlace

void glelp::init_GL_SGIX_interlace()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_interlace"))
		return;

}

// GL_SGIX_pixel_tiles

void glelp::init_GL_SGIX_pixel_tiles()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_pixel_tiles"))
		return;

}

// GL_SGIS_texture_select

void glelp::init_GL_SGIS_texture_select()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_texture_select"))
		return;

}

// GL_SGIX_sprite
PFNGLSPRITEPARAMETERFSGIXPROC glSpriteParameterfSGIX;
PFNGLSPRITEPARAMETERFVSGIXPROC glSpriteParameterfvSGIX;
PFNGLSPRITEPARAMETERISGIXPROC glSpriteParameteriSGIX;
PFNGLSPRITEPARAMETERIVSGIXPROC glSpriteParameterivSGIX;

void glelp::init_GL_SGIX_sprite()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_sprite"))
		return;

	glSpriteParameterfSGIX = (PFNGLSPRITEPARAMETERFSGIXPROC)wglGetProcAddress("glSpriteParameterfSGIX");
	glSpriteParameterfvSGIX = (PFNGLSPRITEPARAMETERFVSGIXPROC)wglGetProcAddress("glSpriteParameterfvSGIX");
	glSpriteParameteriSGIX = (PFNGLSPRITEPARAMETERISGIXPROC)wglGetProcAddress("glSpriteParameteriSGIX");
	glSpriteParameterivSGIX = (PFNGLSPRITEPARAMETERIVSGIXPROC)wglGetProcAddress("glSpriteParameterivSGIX");
}

// GL_SGIX_texture_multi_buffer

void glelp::init_GL_SGIX_texture_multi_buffer()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_texture_multi_buffer"))
		return;

}

// GL_EXT_point_parameters
PFNGLPOINTPARAMETERFEXTPROC glPointParameterfEXT;
PFNGLPOINTPARAMETERFVEXTPROC glPointParameterfvEXT;

void glelp::init_GL_EXT_point_parameters()
{
	if(!glelpInternal::checkAvailable("GL_EXT_point_parameters"))
		return;

	glPointParameterfEXT = (PFNGLPOINTPARAMETERFEXTPROC)wglGetProcAddress("glPointParameterfEXT");
	glPointParameterfvEXT = (PFNGLPOINTPARAMETERFVEXTPROC)wglGetProcAddress("glPointParameterfvEXT");
}

// GL_SGIS_point_parameters
PFNGLPOINTPARAMETERFSGISPROC glPointParameterfSGIS;
PFNGLPOINTPARAMETERFVSGISPROC glPointParameterfvSGIS;

void glelp::init_GL_SGIS_point_parameters()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_point_parameters"))
		return;

	glPointParameterfSGIS = (PFNGLPOINTPARAMETERFSGISPROC)wglGetProcAddress("glPointParameterfSGIS");
	glPointParameterfvSGIS = (PFNGLPOINTPARAMETERFVSGISPROC)wglGetProcAddress("glPointParameterfvSGIS");
}

// GL_SGIX_instruments
PFNGLGETINSTRUMENTSSGIXPROC glGetInstrumentsSGIX;
PFNGLINSTRUMENTSBUFFERSGIXPROC glInstrumentsBufferSGIX;
PFNGLPOLLINSTRUMENTSSGIXPROC glPollInstrumentsSGIX;
PFNGLREADINSTRUMENTSSGIXPROC glReadInstrumentsSGIX;
PFNGLSTARTINSTRUMENTSSGIXPROC glStartInstrumentsSGIX;
PFNGLSTOPINSTRUMENTSSGIXPROC glStopInstrumentsSGIX;

void glelp::init_GL_SGIX_instruments()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_instruments"))
		return;

	glGetInstrumentsSGIX = (PFNGLGETINSTRUMENTSSGIXPROC)wglGetProcAddress("glGetInstrumentsSGIX");
	glInstrumentsBufferSGIX = (PFNGLINSTRUMENTSBUFFERSGIXPROC)wglGetProcAddress("glInstrumentsBufferSGIX");
	glPollInstrumentsSGIX = (PFNGLPOLLINSTRUMENTSSGIXPROC)wglGetProcAddress("glPollInstrumentsSGIX");
	glReadInstrumentsSGIX = (PFNGLREADINSTRUMENTSSGIXPROC)wglGetProcAddress("glReadInstrumentsSGIX");
	glStartInstrumentsSGIX = (PFNGLSTARTINSTRUMENTSSGIXPROC)wglGetProcAddress("glStartInstrumentsSGIX");
	glStopInstrumentsSGIX = (PFNGLSTOPINSTRUMENTSSGIXPROC)wglGetProcAddress("glStopInstrumentsSGIX");
}

// GL_SGIX_texture_scale_bias

void glelp::init_GL_SGIX_texture_scale_bias()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_texture_scale_bias"))
		return;

}

// GL_SGIX_framezoom
PFNGLFRAMEZOOMSGIXPROC glFrameZoomSGIX;

void glelp::init_GL_SGIX_framezoom()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_framezoom"))
		return;

	glFrameZoomSGIX = (PFNGLFRAMEZOOMSGIXPROC)wglGetProcAddress("glFrameZoomSGIX");
}

// GL_SGIX_tag_sample_buffer
PFNGLTAGSAMPLEBUFFERSGIXPROC glTagSampleBufferSGIX;

void glelp::init_GL_SGIX_tag_sample_buffer()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_tag_sample_buffer"))
		return;

	glTagSampleBufferSGIX = (PFNGLTAGSAMPLEBUFFERSGIXPROC)wglGetProcAddress("glTagSampleBufferSGIX");
}

// GL_FfdMaskSGIX

void glelp::init_GL_FfdMaskSGIX()
{
	if(!glelpInternal::checkAvailable("GL_FfdMaskSGIX"))
		return;

}

// GL_SGIX_polynomial_ffd
PFNGLDEFORMATIONMAP3DSGIXPROC glDeformationMap3dSGIX;
PFNGLDEFORMATIONMAP3FSGIXPROC glDeformationMap3fSGIX;
PFNGLDEFORMSGIXPROC glDeformSGIX;
PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC glLoadIdentityDeformationMapSGIX;

void glelp::init_GL_SGIX_polynomial_ffd()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_polynomial_ffd"))
		return;

	glDeformationMap3dSGIX = (PFNGLDEFORMATIONMAP3DSGIXPROC)wglGetProcAddress("glDeformationMap3dSGIX");
	glDeformationMap3fSGIX = (PFNGLDEFORMATIONMAP3FSGIXPROC)wglGetProcAddress("glDeformationMap3fSGIX");
	glDeformSGIX = (PFNGLDEFORMSGIXPROC)wglGetProcAddress("glDeformSGIX");
	glLoadIdentityDeformationMapSGIX = (PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC)wglGetProcAddress("glLoadIdentityDeformationMapSGIX");
}

// GL_SGIX_reference_plane
PFNGLREFERENCEPLANESGIXPROC glReferencePlaneSGIX;

void glelp::init_GL_SGIX_reference_plane()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_reference_plane"))
		return;

	glReferencePlaneSGIX = (PFNGLREFERENCEPLANESGIXPROC)wglGetProcAddress("glReferencePlaneSGIX");
}

// GL_SGIX_flush_raster
PFNGLFLUSHRASTERSGIXPROC glFlushRasterSGIX;

void glelp::init_GL_SGIX_flush_raster()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_flush_raster"))
		return;

	glFlushRasterSGIX = (PFNGLFLUSHRASTERSGIXPROC)wglGetProcAddress("glFlushRasterSGIX");
}

// GL_SGIX_depth_texture

void glelp::init_GL_SGIX_depth_texture()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_depth_texture"))
		return;

}

// GL_SGIS_fog_function
PFNGLFOGFUNCSGISPROC glFogFuncSGIS;
PFNGLGETFOGFUNCSGISPROC glGetFogFuncSGIS;

void glelp::init_GL_SGIS_fog_function()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_fog_function"))
		return;

	glFogFuncSGIS = (PFNGLFOGFUNCSGISPROC)wglGetProcAddress("glFogFuncSGIS");
	glGetFogFuncSGIS = (PFNGLGETFOGFUNCSGISPROC)wglGetProcAddress("glGetFogFuncSGIS");
}

// GL_SGIX_fog_offset

void glelp::init_GL_SGIX_fog_offset()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_fog_offset"))
		return;

}

// GL_HP_image_transform
PFNGLIMAGETRANSFORMPARAMETERIHPPROC glImageTransformParameteriHP;
PFNGLIMAGETRANSFORMPARAMETERFHPPROC glImageTransformParameterfHP;
PFNGLIMAGETRANSFORMPARAMETERIVHPPROC glImageTransformParameterivHP;
PFNGLIMAGETRANSFORMPARAMETERFVHPPROC glImageTransformParameterfvHP;
PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC glGetImageTransformParameterivHP;
PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC glGetImageTransformParameterfvHP;

void glelp::init_GL_HP_image_transform()
{
	if(!glelpInternal::checkAvailable("GL_HP_image_transform"))
		return;

	glImageTransformParameteriHP = (PFNGLIMAGETRANSFORMPARAMETERIHPPROC)wglGetProcAddress("glImageTransformParameteriHP");
	glImageTransformParameterfHP = (PFNGLIMAGETRANSFORMPARAMETERFHPPROC)wglGetProcAddress("glImageTransformParameterfHP");
	glImageTransformParameterivHP = (PFNGLIMAGETRANSFORMPARAMETERIVHPPROC)wglGetProcAddress("glImageTransformParameterivHP");
	glImageTransformParameterfvHP = (PFNGLIMAGETRANSFORMPARAMETERFVHPPROC)wglGetProcAddress("glImageTransformParameterfvHP");
	glGetImageTransformParameterivHP = (PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC)wglGetProcAddress("glGetImageTransformParameterivHP");
	glGetImageTransformParameterfvHP = (PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC)wglGetProcAddress("glGetImageTransformParameterfvHP");
}

// GL_HP_convolution_border_modes

void glelp::init_GL_HP_convolution_border_modes()
{
	if(!glelpInternal::checkAvailable("GL_HP_convolution_border_modes"))
		return;

}

// GL_INGR_palette_buffer

void glelp::init_GL_INGR_palette_buffer()
{
	if(!glelpInternal::checkAvailable("GL_INGR_palette_buffer"))
		return;

}

// GL_SGIX_texture_add_env

void glelp::init_GL_SGIX_texture_add_env()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_texture_add_env"))
		return;

}

// GL_EXT_color_subtable
PFNGLCOLORSUBTABLEEXTPROC glColorSubTableEXT;
PFNGLCOPYCOLORSUBTABLEEXTPROC glCopyColorSubTableEXT;

void glelp::init_GL_EXT_color_subtable()
{
	if(!glelpInternal::checkAvailable("GL_EXT_color_subtable"))
		return;

	glColorSubTableEXT = (PFNGLCOLORSUBTABLEEXTPROC)wglGetProcAddress("glColorSubTableEXT");
	glCopyColorSubTableEXT = (PFNGLCOPYCOLORSUBTABLEEXTPROC)wglGetProcAddress("glCopyColorSubTableEXT");
}

// GL_PGI_vertex_hints

void glelp::init_GL_PGI_vertex_hints()
{
	if(!glelpInternal::checkAvailable("GL_PGI_vertex_hints"))
		return;

}

// GL_PGI_misc_hints
PFNGLHINTPGIPROC glHintPGI;

void glelp::init_GL_PGI_misc_hints()
{
	if(!glelpInternal::checkAvailable("GL_PGI_misc_hints"))
		return;

	glHintPGI = (PFNGLHINTPGIPROC)wglGetProcAddress("glHintPGI");
}

// GL_EXT_paletted_texture
PFNGLCOLORTABLEEXTPROC glColorTableEXT;
PFNGLGETCOLORTABLEEXTPROC glGetColorTableEXT;
PFNGLGETCOLORTABLEPARAMETERIVEXTPROC glGetColorTableParameterivEXT;
PFNGLGETCOLORTABLEPARAMETERFVEXTPROC glGetColorTableParameterfvEXT;

void glelp::init_GL_EXT_paletted_texture()
{
	if(!glelpInternal::checkAvailable("GL_EXT_paletted_texture"))
		return;

	glColorTableEXT = (PFNGLCOLORTABLEEXTPROC)wglGetProcAddress("glColorTableEXT");
	glGetColorTableEXT = (PFNGLGETCOLORTABLEEXTPROC)wglGetProcAddress("glGetColorTableEXT");
	glGetColorTableParameterivEXT = (PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)wglGetProcAddress("glGetColorTableParameterivEXT");
	glGetColorTableParameterfvEXT = (PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)wglGetProcAddress("glGetColorTableParameterfvEXT");
}

// GL_EXT_clip_volume_hint

void glelp::init_GL_EXT_clip_volume_hint()
{
	if(!glelpInternal::checkAvailable("GL_EXT_clip_volume_hint"))
		return;

}

// GL_SGIX_list_priority
PFNGLGETLISTPARAMETERFVSGIXPROC glGetListParameterfvSGIX;
PFNGLGETLISTPARAMETERIVSGIXPROC glGetListParameterivSGIX;
PFNGLLISTPARAMETERFSGIXPROC glListParameterfSGIX;
PFNGLLISTPARAMETERFVSGIXPROC glListParameterfvSGIX;
PFNGLLISTPARAMETERISGIXPROC glListParameteriSGIX;
PFNGLLISTPARAMETERIVSGIXPROC glListParameterivSGIX;

void glelp::init_GL_SGIX_list_priority()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_list_priority"))
		return;

	glGetListParameterfvSGIX = (PFNGLGETLISTPARAMETERFVSGIXPROC)wglGetProcAddress("glGetListParameterfvSGIX");
	glGetListParameterivSGIX = (PFNGLGETLISTPARAMETERIVSGIXPROC)wglGetProcAddress("glGetListParameterivSGIX");
	glListParameterfSGIX = (PFNGLLISTPARAMETERFSGIXPROC)wglGetProcAddress("glListParameterfSGIX");
	glListParameterfvSGIX = (PFNGLLISTPARAMETERFVSGIXPROC)wglGetProcAddress("glListParameterfvSGIX");
	glListParameteriSGIX = (PFNGLLISTPARAMETERISGIXPROC)wglGetProcAddress("glListParameteriSGIX");
	glListParameterivSGIX = (PFNGLLISTPARAMETERIVSGIXPROC)wglGetProcAddress("glListParameterivSGIX");
}

// GL_SGIX_ir_instrument1

void glelp::init_GL_SGIX_ir_instrument1()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_ir_instrument1"))
		return;

}

// GL_SGIX_calligraphic_fragment

void glelp::init_GL_SGIX_calligraphic_fragment()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_calligraphic_fragment"))
		return;

}

// GL_SGIX_texture_lod_bias

void glelp::init_GL_SGIX_texture_lod_bias()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_texture_lod_bias"))
		return;

}

// GL_SGIX_shadow_ambient

void glelp::init_GL_SGIX_shadow_ambient()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_shadow_ambient"))
		return;

}

// GL_EXT_index_texture

void glelp::init_GL_EXT_index_texture()
{
	if(!glelpInternal::checkAvailable("GL_EXT_index_texture"))
		return;

}

// GL_EXT_index_material
PFNGLINDEXMATERIALEXTPROC glIndexMaterialEXT;

void glelp::init_GL_EXT_index_material()
{
	if(!glelpInternal::checkAvailable("GL_EXT_index_material"))
		return;

	glIndexMaterialEXT = (PFNGLINDEXMATERIALEXTPROC)wglGetProcAddress("glIndexMaterialEXT");
}

// GL_EXT_index_func
PFNGLINDEXFUNCEXTPROC glIndexFuncEXT;

void glelp::init_GL_EXT_index_func()
{
	if(!glelpInternal::checkAvailable("GL_EXT_index_func"))
		return;

	glIndexFuncEXT = (PFNGLINDEXFUNCEXTPROC)wglGetProcAddress("glIndexFuncEXT");
}

// GL_EXT_index_array_formats

void glelp::init_GL_EXT_index_array_formats()
{
	if(!glelpInternal::checkAvailable("GL_EXT_index_array_formats"))
		return;

}

// GL_EXT_compiled_vertex_array
PFNGLLOCKARRAYSEXTPROC glLockArraysEXT;
PFNGLUNLOCKARRAYSEXTPROC glUnlockArraysEXT;

void glelp::init_GL_EXT_compiled_vertex_array()
{
	if(!glelpInternal::checkAvailable("GL_EXT_compiled_vertex_array"))
		return;

	glLockArraysEXT = (PFNGLLOCKARRAYSEXTPROC)wglGetProcAddress("glLockArraysEXT");
	glUnlockArraysEXT = (PFNGLUNLOCKARRAYSEXTPROC)wglGetProcAddress("glUnlockArraysEXT");
}

// GL_EXT_cull_vertex
PFNGLCULLPARAMETERDVEXTPROC glCullParameterdvEXT;
PFNGLCULLPARAMETERFVEXTPROC glCullParameterfvEXT;

void glelp::init_GL_EXT_cull_vertex()
{
	if(!glelpInternal::checkAvailable("GL_EXT_cull_vertex"))
		return;

	glCullParameterdvEXT = (PFNGLCULLPARAMETERDVEXTPROC)wglGetProcAddress("glCullParameterdvEXT");
	glCullParameterfvEXT = (PFNGLCULLPARAMETERFVEXTPROC)wglGetProcAddress("glCullParameterfvEXT");
}

// GL_SGIX_ycrcb

void glelp::init_GL_SGIX_ycrcb()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_ycrcb"))
		return;

}

// GL_SGIX_fragment_lighting
PFNGLFRAGMENTCOLORMATERIALSGIXPROC glFragmentColorMaterialSGIX;
PFNGLFRAGMENTLIGHTFSGIXPROC glFragmentLightfSGIX;
PFNGLFRAGMENTLIGHTFVSGIXPROC glFragmentLightfvSGIX;
PFNGLFRAGMENTLIGHTISGIXPROC glFragmentLightiSGIX;
PFNGLFRAGMENTLIGHTIVSGIXPROC glFragmentLightivSGIX;
PFNGLFRAGMENTLIGHTMODELFSGIXPROC glFragmentLightModelfSGIX;
PFNGLFRAGMENTLIGHTMODELFVSGIXPROC glFragmentLightModelfvSGIX;
PFNGLFRAGMENTLIGHTMODELISGIXPROC glFragmentLightModeliSGIX;
PFNGLFRAGMENTLIGHTMODELIVSGIXPROC glFragmentLightModelivSGIX;
PFNGLFRAGMENTMATERIALFSGIXPROC glFragmentMaterialfSGIX;
PFNGLFRAGMENTMATERIALFVSGIXPROC glFragmentMaterialfvSGIX;
PFNGLFRAGMENTMATERIALISGIXPROC glFragmentMaterialiSGIX;
PFNGLFRAGMENTMATERIALIVSGIXPROC glFragmentMaterialivSGIX;
PFNGLGETFRAGMENTLIGHTFVSGIXPROC glGetFragmentLightfvSGIX;
PFNGLGETFRAGMENTLIGHTIVSGIXPROC glGetFragmentLightivSGIX;
PFNGLGETFRAGMENTMATERIALFVSGIXPROC glGetFragmentMaterialfvSGIX;
PFNGLGETFRAGMENTMATERIALIVSGIXPROC glGetFragmentMaterialivSGIX;
PFNGLLIGHTENVISGIXPROC glLightEnviSGIX;

void glelp::init_GL_SGIX_fragment_lighting()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_fragment_lighting"))
		return;

	glFragmentColorMaterialSGIX = (PFNGLFRAGMENTCOLORMATERIALSGIXPROC)wglGetProcAddress("glFragmentColorMaterialSGIX");
	glFragmentLightfSGIX = (PFNGLFRAGMENTLIGHTFSGIXPROC)wglGetProcAddress("glFragmentLightfSGIX");
	glFragmentLightfvSGIX = (PFNGLFRAGMENTLIGHTFVSGIXPROC)wglGetProcAddress("glFragmentLightfvSGIX");
	glFragmentLightiSGIX = (PFNGLFRAGMENTLIGHTISGIXPROC)wglGetProcAddress("glFragmentLightiSGIX");
	glFragmentLightivSGIX = (PFNGLFRAGMENTLIGHTIVSGIXPROC)wglGetProcAddress("glFragmentLightivSGIX");
	glFragmentLightModelfSGIX = (PFNGLFRAGMENTLIGHTMODELFSGIXPROC)wglGetProcAddress("glFragmentLightModelfSGIX");
	glFragmentLightModelfvSGIX = (PFNGLFRAGMENTLIGHTMODELFVSGIXPROC)wglGetProcAddress("glFragmentLightModelfvSGIX");
	glFragmentLightModeliSGIX = (PFNGLFRAGMENTLIGHTMODELISGIXPROC)wglGetProcAddress("glFragmentLightModeliSGIX");
	glFragmentLightModelivSGIX = (PFNGLFRAGMENTLIGHTMODELIVSGIXPROC)wglGetProcAddress("glFragmentLightModelivSGIX");
	glFragmentMaterialfSGIX = (PFNGLFRAGMENTMATERIALFSGIXPROC)wglGetProcAddress("glFragmentMaterialfSGIX");
	glFragmentMaterialfvSGIX = (PFNGLFRAGMENTMATERIALFVSGIXPROC)wglGetProcAddress("glFragmentMaterialfvSGIX");
	glFragmentMaterialiSGIX = (PFNGLFRAGMENTMATERIALISGIXPROC)wglGetProcAddress("glFragmentMaterialiSGIX");
	glFragmentMaterialivSGIX = (PFNGLFRAGMENTMATERIALIVSGIXPROC)wglGetProcAddress("glFragmentMaterialivSGIX");
	glGetFragmentLightfvSGIX = (PFNGLGETFRAGMENTLIGHTFVSGIXPROC)wglGetProcAddress("glGetFragmentLightfvSGIX");
	glGetFragmentLightivSGIX = (PFNGLGETFRAGMENTLIGHTIVSGIXPROC)wglGetProcAddress("glGetFragmentLightivSGIX");
	glGetFragmentMaterialfvSGIX = (PFNGLGETFRAGMENTMATERIALFVSGIXPROC)wglGetProcAddress("glGetFragmentMaterialfvSGIX");
	glGetFragmentMaterialivSGIX = (PFNGLGETFRAGMENTMATERIALIVSGIXPROC)wglGetProcAddress("glGetFragmentMaterialivSGIX");
	glLightEnviSGIX = (PFNGLLIGHTENVISGIXPROC)wglGetProcAddress("glLightEnviSGIX");
}

// GL_IBM_rasterpos_clip

void glelp::init_GL_IBM_rasterpos_clip()
{
	if(!glelpInternal::checkAvailable("GL_IBM_rasterpos_clip"))
		return;

}

// GL_HP_texture_lighting

void glelp::init_GL_HP_texture_lighting()
{
	if(!glelpInternal::checkAvailable("GL_HP_texture_lighting"))
		return;

}

// GL_EXT_draw_range_elements
PFNGLDRAWRANGEELEMENTSEXTPROC glDrawRangeElementsEXT;

void glelp::init_GL_EXT_draw_range_elements()
{
	if(!glelpInternal::checkAvailable("GL_EXT_draw_range_elements"))
		return;

	glDrawRangeElementsEXT = (PFNGLDRAWRANGEELEMENTSEXTPROC)wglGetProcAddress("glDrawRangeElementsEXT");
}

// GL_WIN_phong_shading

void glelp::init_GL_WIN_phong_shading()
{
	if(!glelpInternal::checkAvailable("GL_WIN_phong_shading"))
		return;

}

// GL_WIN_specular_fog

void glelp::init_GL_WIN_specular_fog()
{
	if(!glelpInternal::checkAvailable("GL_WIN_specular_fog"))
		return;

}

// GL_EXT_light_texture
PFNGLAPPLYTEXTUREEXTPROC glApplyTextureEXT;
PFNGLTEXTURELIGHTEXTPROC glTextureLightEXT;
PFNGLTEXTUREMATERIALEXTPROC glTextureMaterialEXT;

void glelp::init_GL_EXT_light_texture()
{
	if(!glelpInternal::checkAvailable("GL_EXT_light_texture"))
		return;

	glApplyTextureEXT = (PFNGLAPPLYTEXTUREEXTPROC)wglGetProcAddress("glApplyTextureEXT");
	glTextureLightEXT = (PFNGLTEXTURELIGHTEXTPROC)wglGetProcAddress("glTextureLightEXT");
	glTextureMaterialEXT = (PFNGLTEXTUREMATERIALEXTPROC)wglGetProcAddress("glTextureMaterialEXT");
}

// GL_SGIX_blend_alpha_minmax

void glelp::init_GL_SGIX_blend_alpha_minmax()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_blend_alpha_minmax"))
		return;

}

// GL_SGIX_impact_pixel_texture

void glelp::init_GL_SGIX_impact_pixel_texture()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_impact_pixel_texture"))
		return;

}

// GL_EXT_bgra

void glelp::init_GL_EXT_bgra()
{
	if(!glelpInternal::checkAvailable("GL_EXT_bgra"))
		return;

}

// GL_SGIX_async
PFNGLASYNCMARKERSGIXPROC glAsyncMarkerSGIX;
PFNGLFINISHASYNCSGIXPROC glFinishAsyncSGIX;
PFNGLPOLLASYNCSGIXPROC glPollAsyncSGIX;
PFNGLGENASYNCMARKERSSGIXPROC glGenAsyncMarkersSGIX;
PFNGLDELETEASYNCMARKERSSGIXPROC glDeleteAsyncMarkersSGIX;
PFNGLISASYNCMARKERSGIXPROC glIsAsyncMarkerSGIX;

void glelp::init_GL_SGIX_async()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_async"))
		return;

	glAsyncMarkerSGIX = (PFNGLASYNCMARKERSGIXPROC)wglGetProcAddress("glAsyncMarkerSGIX");
	glFinishAsyncSGIX = (PFNGLFINISHASYNCSGIXPROC)wglGetProcAddress("glFinishAsyncSGIX");
	glPollAsyncSGIX = (PFNGLPOLLASYNCSGIXPROC)wglGetProcAddress("glPollAsyncSGIX");
	glGenAsyncMarkersSGIX = (PFNGLGENASYNCMARKERSSGIXPROC)wglGetProcAddress("glGenAsyncMarkersSGIX");
	glDeleteAsyncMarkersSGIX = (PFNGLDELETEASYNCMARKERSSGIXPROC)wglGetProcAddress("glDeleteAsyncMarkersSGIX");
	glIsAsyncMarkerSGIX = (PFNGLISASYNCMARKERSGIXPROC)wglGetProcAddress("glIsAsyncMarkerSGIX");
}

// GL_SGIX_async_pixel

void glelp::init_GL_SGIX_async_pixel()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_async_pixel"))
		return;

}

// GL_SGIX_async_histogram

void glelp::init_GL_SGIX_async_histogram()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_async_histogram"))
		return;

}

// GL_INTEL_texture_scissor

void glelp::init_GL_INTEL_texture_scissor()
{
	if(!glelpInternal::checkAvailable("GL_INTEL_texture_scissor"))
		return;

}

// GL_INTEL_parallel_arrays
PFNGLVERTEXPOINTERVINTELPROC glVertexPointervINTEL;
PFNGLNORMALPOINTERVINTELPROC glNormalPointervINTEL;
PFNGLCOLORPOINTERVINTELPROC glColorPointervINTEL;
PFNGLTEXCOORDPOINTERVINTELPROC glTexCoordPointervINTEL;

void glelp::init_GL_INTEL_parallel_arrays()
{
	if(!glelpInternal::checkAvailable("GL_INTEL_parallel_arrays"))
		return;

	glVertexPointervINTEL = (PFNGLVERTEXPOINTERVINTELPROC)wglGetProcAddress("glVertexPointervINTEL");
	glNormalPointervINTEL = (PFNGLNORMALPOINTERVINTELPROC)wglGetProcAddress("glNormalPointervINTEL");
	glColorPointervINTEL = (PFNGLCOLORPOINTERVINTELPROC)wglGetProcAddress("glColorPointervINTEL");
	glTexCoordPointervINTEL = (PFNGLTEXCOORDPOINTERVINTELPROC)wglGetProcAddress("glTexCoordPointervINTEL");
}

// GL_HP_occlusion_test

void glelp::init_GL_HP_occlusion_test()
{
	if(!glelpInternal::checkAvailable("GL_HP_occlusion_test"))
		return;

}

// GL_EXT_pixel_transform
PFNGLPIXELTRANSFORMPARAMETERIEXTPROC glPixelTransformParameteriEXT;
PFNGLPIXELTRANSFORMPARAMETERFEXTPROC glPixelTransformParameterfEXT;
PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC glPixelTransformParameterivEXT;
PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC glPixelTransformParameterfvEXT;

void glelp::init_GL_EXT_pixel_transform()
{
	if(!glelpInternal::checkAvailable("GL_EXT_pixel_transform"))
		return;

	glPixelTransformParameteriEXT = (PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)wglGetProcAddress("glPixelTransformParameteriEXT");
	glPixelTransformParameterfEXT = (PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)wglGetProcAddress("glPixelTransformParameterfEXT");
	glPixelTransformParameterivEXT = (PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)wglGetProcAddress("glPixelTransformParameterivEXT");
	glPixelTransformParameterfvEXT = (PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)wglGetProcAddress("glPixelTransformParameterfvEXT");
}

// GL_EXT_pixel_transform_color_table

void glelp::init_GL_EXT_pixel_transform_color_table()
{
	if(!glelpInternal::checkAvailable("GL_EXT_pixel_transform_color_table"))
		return;

}

// GL_EXT_shared_texture_palette

void glelp::init_GL_EXT_shared_texture_palette()
{
	if(!glelpInternal::checkAvailable("GL_EXT_shared_texture_palette"))
		return;

}

// GL_EXT_separate_specular_color

void glelp::init_GL_EXT_separate_specular_color()
{
	if(!glelpInternal::checkAvailable("GL_EXT_separate_specular_color"))
		return;

}

// GL_EXT_secondary_color
PFNGLSECONDARYCOLOR3BEXTPROC glSecondaryColor3bEXT;
PFNGLSECONDARYCOLOR3BVEXTPROC glSecondaryColor3bvEXT;
PFNGLSECONDARYCOLOR3DEXTPROC glSecondaryColor3dEXT;
PFNGLSECONDARYCOLOR3DVEXTPROC glSecondaryColor3dvEXT;
PFNGLSECONDARYCOLOR3FEXTPROC glSecondaryColor3fEXT;
PFNGLSECONDARYCOLOR3FVEXTPROC glSecondaryColor3fvEXT;
PFNGLSECONDARYCOLOR3IEXTPROC glSecondaryColor3iEXT;
PFNGLSECONDARYCOLOR3IVEXTPROC glSecondaryColor3ivEXT;
PFNGLSECONDARYCOLOR3SEXTPROC glSecondaryColor3sEXT;
PFNGLSECONDARYCOLOR3SVEXTPROC glSecondaryColor3svEXT;
PFNGLSECONDARYCOLOR3UBEXTPROC glSecondaryColor3ubEXT;
PFNGLSECONDARYCOLOR3UBVEXTPROC glSecondaryColor3ubvEXT;
PFNGLSECONDARYCOLOR3UIEXTPROC glSecondaryColor3uiEXT;
PFNGLSECONDARYCOLOR3UIVEXTPROC glSecondaryColor3uivEXT;
PFNGLSECONDARYCOLOR3USEXTPROC glSecondaryColor3usEXT;
PFNGLSECONDARYCOLOR3USVEXTPROC glSecondaryColor3usvEXT;
PFNGLSECONDARYCOLORPOINTEREXTPROC glSecondaryColorPointerEXT;

void glelp::init_GL_EXT_secondary_color()
{
	if(!glelpInternal::checkAvailable("GL_EXT_secondary_color"))
		return;

	glSecondaryColor3bEXT = (PFNGLSECONDARYCOLOR3BEXTPROC)wglGetProcAddress("glSecondaryColor3bEXT");
	glSecondaryColor3bvEXT = (PFNGLSECONDARYCOLOR3BVEXTPROC)wglGetProcAddress("glSecondaryColor3bvEXT");
	glSecondaryColor3dEXT = (PFNGLSECONDARYCOLOR3DEXTPROC)wglGetProcAddress("glSecondaryColor3dEXT");
	glSecondaryColor3dvEXT = (PFNGLSECONDARYCOLOR3DVEXTPROC)wglGetProcAddress("glSecondaryColor3dvEXT");
	glSecondaryColor3fEXT = (PFNGLSECONDARYCOLOR3FEXTPROC)wglGetProcAddress("glSecondaryColor3fEXT");
	glSecondaryColor3fvEXT = (PFNGLSECONDARYCOLOR3FVEXTPROC)wglGetProcAddress("glSecondaryColor3fvEXT");
	glSecondaryColor3iEXT = (PFNGLSECONDARYCOLOR3IEXTPROC)wglGetProcAddress("glSecondaryColor3iEXT");
	glSecondaryColor3ivEXT = (PFNGLSECONDARYCOLOR3IVEXTPROC)wglGetProcAddress("glSecondaryColor3ivEXT");
	glSecondaryColor3sEXT = (PFNGLSECONDARYCOLOR3SEXTPROC)wglGetProcAddress("glSecondaryColor3sEXT");
	glSecondaryColor3svEXT = (PFNGLSECONDARYCOLOR3SVEXTPROC)wglGetProcAddress("glSecondaryColor3svEXT");
	glSecondaryColor3ubEXT = (PFNGLSECONDARYCOLOR3UBEXTPROC)wglGetProcAddress("glSecondaryColor3ubEXT");
	glSecondaryColor3ubvEXT = (PFNGLSECONDARYCOLOR3UBVEXTPROC)wglGetProcAddress("glSecondaryColor3ubvEXT");
	glSecondaryColor3uiEXT = (PFNGLSECONDARYCOLOR3UIEXTPROC)wglGetProcAddress("glSecondaryColor3uiEXT");
	glSecondaryColor3uivEXT = (PFNGLSECONDARYCOLOR3UIVEXTPROC)wglGetProcAddress("glSecondaryColor3uivEXT");
	glSecondaryColor3usEXT = (PFNGLSECONDARYCOLOR3USEXTPROC)wglGetProcAddress("glSecondaryColor3usEXT");
	glSecondaryColor3usvEXT = (PFNGLSECONDARYCOLOR3USVEXTPROC)wglGetProcAddress("glSecondaryColor3usvEXT");
	glSecondaryColorPointerEXT = (PFNGLSECONDARYCOLORPOINTEREXTPROC)wglGetProcAddress("glSecondaryColorPointerEXT");
}

// GL_EXT_texture_perturb_normal
PFNGLTEXTURENORMALEXTPROC glTextureNormalEXT;

void glelp::init_GL_EXT_texture_perturb_normal()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_perturb_normal"))
		return;

	glTextureNormalEXT = (PFNGLTEXTURENORMALEXTPROC)wglGetProcAddress("glTextureNormalEXT");
}

// GL_EXT_multi_draw_arrays
PFNGLMULTIDRAWARRAYSEXTPROC glMultiDrawArraysEXT;
PFNGLMULTIDRAWELEMENTSEXTPROC glMultiDrawElementsEXT;

void glelp::init_GL_EXT_multi_draw_arrays()
{
	if(!glelpInternal::checkAvailable("GL_EXT_multi_draw_arrays"))
		return;

	glMultiDrawArraysEXT = (PFNGLMULTIDRAWARRAYSEXTPROC)wglGetProcAddress("glMultiDrawArraysEXT");
	glMultiDrawElementsEXT = (PFNGLMULTIDRAWELEMENTSEXTPROC)wglGetProcAddress("glMultiDrawElementsEXT");
}

// GL_EXT_fog_coord
PFNGLFOGCOORDFEXTPROC glFogCoordfEXT;
PFNGLFOGCOORDFVEXTPROC glFogCoordfvEXT;
PFNGLFOGCOORDDEXTPROC glFogCoorddEXT;
PFNGLFOGCOORDDVEXTPROC glFogCoorddvEXT;
PFNGLFOGCOORDPOINTEREXTPROC glFogCoordPointerEXT;

void glelp::init_GL_EXT_fog_coord()
{
	if(!glelpInternal::checkAvailable("GL_EXT_fog_coord"))
		return;

	glFogCoordfEXT = (PFNGLFOGCOORDFEXTPROC)wglGetProcAddress("glFogCoordfEXT");
	glFogCoordfvEXT = (PFNGLFOGCOORDFVEXTPROC)wglGetProcAddress("glFogCoordfvEXT");
	glFogCoorddEXT = (PFNGLFOGCOORDDEXTPROC)wglGetProcAddress("glFogCoorddEXT");
	glFogCoorddvEXT = (PFNGLFOGCOORDDVEXTPROC)wglGetProcAddress("glFogCoorddvEXT");
	glFogCoordPointerEXT = (PFNGLFOGCOORDPOINTEREXTPROC)wglGetProcAddress("glFogCoordPointerEXT");
}

// GL_REND_screen_coordinates

void glelp::init_GL_REND_screen_coordinates()
{
	if(!glelpInternal::checkAvailable("GL_REND_screen_coordinates"))
		return;

}

// GL_EXT_coordinate_frame
PFNGLTANGENT3BEXTPROC glTangent3bEXT;
PFNGLTANGENT3BVEXTPROC glTangent3bvEXT;
PFNGLTANGENT3DEXTPROC glTangent3dEXT;
PFNGLTANGENT3DVEXTPROC glTangent3dvEXT;
PFNGLTANGENT3FEXTPROC glTangent3fEXT;
PFNGLTANGENT3FVEXTPROC glTangent3fvEXT;
PFNGLTANGENT3IEXTPROC glTangent3iEXT;
PFNGLTANGENT3IVEXTPROC glTangent3ivEXT;
PFNGLTANGENT3SEXTPROC glTangent3sEXT;
PFNGLTANGENT3SVEXTPROC glTangent3svEXT;
PFNGLBINORMAL3BEXTPROC glBinormal3bEXT;
PFNGLBINORMAL3BVEXTPROC glBinormal3bvEXT;
PFNGLBINORMAL3DEXTPROC glBinormal3dEXT;
PFNGLBINORMAL3DVEXTPROC glBinormal3dvEXT;
PFNGLBINORMAL3FEXTPROC glBinormal3fEXT;
PFNGLBINORMAL3FVEXTPROC glBinormal3fvEXT;
PFNGLBINORMAL3IEXTPROC glBinormal3iEXT;
PFNGLBINORMAL3IVEXTPROC glBinormal3ivEXT;
PFNGLBINORMAL3SEXTPROC glBinormal3sEXT;
PFNGLBINORMAL3SVEXTPROC glBinormal3svEXT;
PFNGLTANGENTPOINTEREXTPROC glTangentPointerEXT;
PFNGLBINORMALPOINTEREXTPROC glBinormalPointerEXT;

void glelp::init_GL_EXT_coordinate_frame()
{
	if(!glelpInternal::checkAvailable("GL_EXT_coordinate_frame"))
		return;

	glTangent3bEXT = (PFNGLTANGENT3BEXTPROC)wglGetProcAddress("glTangent3bEXT");
	glTangent3bvEXT = (PFNGLTANGENT3BVEXTPROC)wglGetProcAddress("glTangent3bvEXT");
	glTangent3dEXT = (PFNGLTANGENT3DEXTPROC)wglGetProcAddress("glTangent3dEXT");
	glTangent3dvEXT = (PFNGLTANGENT3DVEXTPROC)wglGetProcAddress("glTangent3dvEXT");
	glTangent3fEXT = (PFNGLTANGENT3FEXTPROC)wglGetProcAddress("glTangent3fEXT");
	glTangent3fvEXT = (PFNGLTANGENT3FVEXTPROC)wglGetProcAddress("glTangent3fvEXT");
	glTangent3iEXT = (PFNGLTANGENT3IEXTPROC)wglGetProcAddress("glTangent3iEXT");
	glTangent3ivEXT = (PFNGLTANGENT3IVEXTPROC)wglGetProcAddress("glTangent3ivEXT");
	glTangent3sEXT = (PFNGLTANGENT3SEXTPROC)wglGetProcAddress("glTangent3sEXT");
	glTangent3svEXT = (PFNGLTANGENT3SVEXTPROC)wglGetProcAddress("glTangent3svEXT");
	glBinormal3bEXT = (PFNGLBINORMAL3BEXTPROC)wglGetProcAddress("glBinormal3bEXT");
	glBinormal3bvEXT = (PFNGLBINORMAL3BVEXTPROC)wglGetProcAddress("glBinormal3bvEXT");
	glBinormal3dEXT = (PFNGLBINORMAL3DEXTPROC)wglGetProcAddress("glBinormal3dEXT");
	glBinormal3dvEXT = (PFNGLBINORMAL3DVEXTPROC)wglGetProcAddress("glBinormal3dvEXT");
	glBinormal3fEXT = (PFNGLBINORMAL3FEXTPROC)wglGetProcAddress("glBinormal3fEXT");
	glBinormal3fvEXT = (PFNGLBINORMAL3FVEXTPROC)wglGetProcAddress("glBinormal3fvEXT");
	glBinormal3iEXT = (PFNGLBINORMAL3IEXTPROC)wglGetProcAddress("glBinormal3iEXT");
	glBinormal3ivEXT = (PFNGLBINORMAL3IVEXTPROC)wglGetProcAddress("glBinormal3ivEXT");
	glBinormal3sEXT = (PFNGLBINORMAL3SEXTPROC)wglGetProcAddress("glBinormal3sEXT");
	glBinormal3svEXT = (PFNGLBINORMAL3SVEXTPROC)wglGetProcAddress("glBinormal3svEXT");
	glTangentPointerEXT = (PFNGLTANGENTPOINTEREXTPROC)wglGetProcAddress("glTangentPointerEXT");
	glBinormalPointerEXT = (PFNGLBINORMALPOINTEREXTPROC)wglGetProcAddress("glBinormalPointerEXT");
}

// GL_EXT_texture_env_combine

void glelp::init_GL_EXT_texture_env_combine()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_env_combine"))
		return;

}

// GL_APPLE_specular_vector

void glelp::init_GL_APPLE_specular_vector()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_specular_vector"))
		return;

}

// GL_APPLE_transform_hint

void glelp::init_GL_APPLE_transform_hint()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_transform_hint"))
		return;

}

// GL_SGIX_fog_scale

void glelp::init_GL_SGIX_fog_scale()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_fog_scale"))
		return;

}

// GL_SUNX_constant_data
PFNGLFINISHTEXTURESUNXPROC glFinishTextureSUNX;

void glelp::init_GL_SUNX_constant_data()
{
	if(!glelpInternal::checkAvailable("GL_SUNX_constant_data"))
		return;

	glFinishTextureSUNX = (PFNGLFINISHTEXTURESUNXPROC)wglGetProcAddress("glFinishTextureSUNX");
}

// GL_SUN_global_alpha
PFNGLGLOBALALPHAFACTORBSUNPROC glGlobalAlphaFactorbSUN;
PFNGLGLOBALALPHAFACTORSSUNPROC glGlobalAlphaFactorsSUN;
PFNGLGLOBALALPHAFACTORISUNPROC glGlobalAlphaFactoriSUN;
PFNGLGLOBALALPHAFACTORFSUNPROC glGlobalAlphaFactorfSUN;
PFNGLGLOBALALPHAFACTORDSUNPROC glGlobalAlphaFactordSUN;
PFNGLGLOBALALPHAFACTORUBSUNPROC glGlobalAlphaFactorubSUN;
PFNGLGLOBALALPHAFACTORUSSUNPROC glGlobalAlphaFactorusSUN;
PFNGLGLOBALALPHAFACTORUISUNPROC glGlobalAlphaFactoruiSUN;

void glelp::init_GL_SUN_global_alpha()
{
	if(!glelpInternal::checkAvailable("GL_SUN_global_alpha"))
		return;

	glGlobalAlphaFactorbSUN = (PFNGLGLOBALALPHAFACTORBSUNPROC)wglGetProcAddress("glGlobalAlphaFactorbSUN");
	glGlobalAlphaFactorsSUN = (PFNGLGLOBALALPHAFACTORSSUNPROC)wglGetProcAddress("glGlobalAlphaFactorsSUN");
	glGlobalAlphaFactoriSUN = (PFNGLGLOBALALPHAFACTORISUNPROC)wglGetProcAddress("glGlobalAlphaFactoriSUN");
	glGlobalAlphaFactorfSUN = (PFNGLGLOBALALPHAFACTORFSUNPROC)wglGetProcAddress("glGlobalAlphaFactorfSUN");
	glGlobalAlphaFactordSUN = (PFNGLGLOBALALPHAFACTORDSUNPROC)wglGetProcAddress("glGlobalAlphaFactordSUN");
	glGlobalAlphaFactorubSUN = (PFNGLGLOBALALPHAFACTORUBSUNPROC)wglGetProcAddress("glGlobalAlphaFactorubSUN");
	glGlobalAlphaFactorusSUN = (PFNGLGLOBALALPHAFACTORUSSUNPROC)wglGetProcAddress("glGlobalAlphaFactorusSUN");
	glGlobalAlphaFactoruiSUN = (PFNGLGLOBALALPHAFACTORUISUNPROC)wglGetProcAddress("glGlobalAlphaFactoruiSUN");
}

// GL_SUN_triangle_list
PFNGLREPLACEMENTCODEUISUNPROC glReplacementCodeuiSUN;
PFNGLREPLACEMENTCODEUSSUNPROC glReplacementCodeusSUN;
PFNGLREPLACEMENTCODEUBSUNPROC glReplacementCodeubSUN;
PFNGLREPLACEMENTCODEUIVSUNPROC glReplacementCodeuivSUN;
PFNGLREPLACEMENTCODEUSVSUNPROC glReplacementCodeusvSUN;
PFNGLREPLACEMENTCODEUBVSUNPROC glReplacementCodeubvSUN;
PFNGLREPLACEMENTCODEPOINTERSUNPROC glReplacementCodePointerSUN;

void glelp::init_GL_SUN_triangle_list()
{
	if(!glelpInternal::checkAvailable("GL_SUN_triangle_list"))
		return;

	glReplacementCodeuiSUN = (PFNGLREPLACEMENTCODEUISUNPROC)wglGetProcAddress("glReplacementCodeuiSUN");
	glReplacementCodeusSUN = (PFNGLREPLACEMENTCODEUSSUNPROC)wglGetProcAddress("glReplacementCodeusSUN");
	glReplacementCodeubSUN = (PFNGLREPLACEMENTCODEUBSUNPROC)wglGetProcAddress("glReplacementCodeubSUN");
	glReplacementCodeuivSUN = (PFNGLREPLACEMENTCODEUIVSUNPROC)wglGetProcAddress("glReplacementCodeuivSUN");
	glReplacementCodeusvSUN = (PFNGLREPLACEMENTCODEUSVSUNPROC)wglGetProcAddress("glReplacementCodeusvSUN");
	glReplacementCodeubvSUN = (PFNGLREPLACEMENTCODEUBVSUNPROC)wglGetProcAddress("glReplacementCodeubvSUN");
	glReplacementCodePointerSUN = (PFNGLREPLACEMENTCODEPOINTERSUNPROC)wglGetProcAddress("glReplacementCodePointerSUN");
}

// GL_SUN_vertex
PFNGLCOLOR4UBVERTEX2FSUNPROC glColor4ubVertex2fSUN;
PFNGLCOLOR4UBVERTEX2FVSUNPROC glColor4ubVertex2fvSUN;
PFNGLCOLOR4UBVERTEX3FSUNPROC glColor4ubVertex3fSUN;
PFNGLCOLOR4UBVERTEX3FVSUNPROC glColor4ubVertex3fvSUN;
PFNGLCOLOR3FVERTEX3FSUNPROC glColor3fVertex3fSUN;
PFNGLCOLOR3FVERTEX3FVSUNPROC glColor3fVertex3fvSUN;
PFNGLNORMAL3FVERTEX3FSUNPROC glNormal3fVertex3fSUN;
PFNGLNORMAL3FVERTEX3FVSUNPROC glNormal3fVertex3fvSUN;
PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC glColor4fNormal3fVertex3fSUN;
PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC glColor4fNormal3fVertex3fvSUN;
PFNGLTEXCOORD2FVERTEX3FSUNPROC glTexCoord2fVertex3fSUN;
PFNGLTEXCOORD2FVERTEX3FVSUNPROC glTexCoord2fVertex3fvSUN;
PFNGLTEXCOORD4FVERTEX4FSUNPROC glTexCoord4fVertex4fSUN;
PFNGLTEXCOORD4FVERTEX4FVSUNPROC glTexCoord4fVertex4fvSUN;
PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC glTexCoord2fColor4ubVertex3fSUN;
PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC glTexCoord2fColor4ubVertex3fvSUN;
PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC glTexCoord2fColor3fVertex3fSUN;
PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC glTexCoord2fColor3fVertex3fvSUN;
PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC glTexCoord2fNormal3fVertex3fSUN;
PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC glTexCoord2fNormal3fVertex3fvSUN;
PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC glTexCoord2fColor4fNormal3fVertex3fSUN;
PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC glTexCoord2fColor4fNormal3fVertex3fvSUN;
PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC glTexCoord4fColor4fNormal3fVertex4fSUN;
PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC glTexCoord4fColor4fNormal3fVertex4fvSUN;
PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC glReplacementCodeuiVertex3fSUN;
PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC glReplacementCodeuiVertex3fvSUN;
PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC glReplacementCodeuiColor4ubVertex3fSUN;
PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC glReplacementCodeuiColor4ubVertex3fvSUN;
PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC glReplacementCodeuiColor3fVertex3fSUN;
PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC glReplacementCodeuiColor3fVertex3fvSUN;
PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC glReplacementCodeuiNormal3fVertex3fSUN;
PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiNormal3fVertex3fvSUN;
PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiColor4fNormal3fVertex3fSUN;
PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiColor4fNormal3fVertex3fvSUN;
PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fVertex3fSUN;
PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fVertex3fvSUN;
PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN;
PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN;
PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN;
PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN;

void glelp::init_GL_SUN_vertex()
{
	if(!glelpInternal::checkAvailable("GL_SUN_vertex"))
		return;

	glColor4ubVertex2fSUN = (PFNGLCOLOR4UBVERTEX2FSUNPROC)wglGetProcAddress("glColor4ubVertex2fSUN");
	glColor4ubVertex2fvSUN = (PFNGLCOLOR4UBVERTEX2FVSUNPROC)wglGetProcAddress("glColor4ubVertex2fvSUN");
	glColor4ubVertex3fSUN = (PFNGLCOLOR4UBVERTEX3FSUNPROC)wglGetProcAddress("glColor4ubVertex3fSUN");
	glColor4ubVertex3fvSUN = (PFNGLCOLOR4UBVERTEX3FVSUNPROC)wglGetProcAddress("glColor4ubVertex3fvSUN");
	glColor3fVertex3fSUN = (PFNGLCOLOR3FVERTEX3FSUNPROC)wglGetProcAddress("glColor3fVertex3fSUN");
	glColor3fVertex3fvSUN = (PFNGLCOLOR3FVERTEX3FVSUNPROC)wglGetProcAddress("glColor3fVertex3fvSUN");
	glNormal3fVertex3fSUN = (PFNGLNORMAL3FVERTEX3FSUNPROC)wglGetProcAddress("glNormal3fVertex3fSUN");
	glNormal3fVertex3fvSUN = (PFNGLNORMAL3FVERTEX3FVSUNPROC)wglGetProcAddress("glNormal3fVertex3fvSUN");
	glColor4fNormal3fVertex3fSUN = (PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC)wglGetProcAddress("glColor4fNormal3fVertex3fSUN");
	glColor4fNormal3fVertex3fvSUN = (PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC)wglGetProcAddress("glColor4fNormal3fVertex3fvSUN");
	glTexCoord2fVertex3fSUN = (PFNGLTEXCOORD2FVERTEX3FSUNPROC)wglGetProcAddress("glTexCoord2fVertex3fSUN");
	glTexCoord2fVertex3fvSUN = (PFNGLTEXCOORD2FVERTEX3FVSUNPROC)wglGetProcAddress("glTexCoord2fVertex3fvSUN");
	glTexCoord4fVertex4fSUN = (PFNGLTEXCOORD4FVERTEX4FSUNPROC)wglGetProcAddress("glTexCoord4fVertex4fSUN");
	glTexCoord4fVertex4fvSUN = (PFNGLTEXCOORD4FVERTEX4FVSUNPROC)wglGetProcAddress("glTexCoord4fVertex4fvSUN");
	glTexCoord2fColor4ubVertex3fSUN = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC)wglGetProcAddress("glTexCoord2fColor4ubVertex3fSUN");
	glTexCoord2fColor4ubVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC)wglGetProcAddress("glTexCoord2fColor4ubVertex3fvSUN");
	glTexCoord2fColor3fVertex3fSUN = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC)wglGetProcAddress("glTexCoord2fColor3fVertex3fSUN");
	glTexCoord2fColor3fVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC)wglGetProcAddress("glTexCoord2fColor3fVertex3fvSUN");
	glTexCoord2fNormal3fVertex3fSUN = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC)wglGetProcAddress("glTexCoord2fNormal3fVertex3fSUN");
	glTexCoord2fNormal3fVertex3fvSUN = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)wglGetProcAddress("glTexCoord2fNormal3fVertex3fvSUN");
	glTexCoord2fColor4fNormal3fVertex3fSUN = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fSUN");
	glTexCoord2fColor4fNormal3fVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fvSUN");
	glTexCoord4fColor4fNormal3fVertex4fSUN = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC)wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fSUN");
	glTexCoord4fColor4fNormal3fVertex4fvSUN = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC)wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fvSUN");
	glReplacementCodeuiVertex3fSUN = (PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC)wglGetProcAddress("glReplacementCodeuiVertex3fSUN");
	glReplacementCodeuiVertex3fvSUN = (PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC)wglGetProcAddress("glReplacementCodeuiVertex3fvSUN");
	glReplacementCodeuiColor4ubVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC)wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fSUN");
	glReplacementCodeuiColor4ubVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC)wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fvSUN");
	glReplacementCodeuiColor3fVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC)wglGetProcAddress("glReplacementCodeuiColor3fVertex3fSUN");
	glReplacementCodeuiColor3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC)wglGetProcAddress("glReplacementCodeuiColor3fVertex3fvSUN");
	glReplacementCodeuiNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC)wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fSUN");
	glReplacementCodeuiNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC)wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fvSUN");
	glReplacementCodeuiColor4fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC)wglGetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fSUN");
	glReplacementCodeuiColor4fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC)wglGetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
	glReplacementCodeuiTexCoord2fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC)wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fSUN");
	glReplacementCodeuiTexCoord2fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC)wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fvSUN");
	glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC)wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
	glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
	glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
	glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
}

// GL_EXT_blend_func_separate
PFNGLBLENDFUNCSEPARATEEXTPROC glBlendFuncSeparateEXT;

void glelp::init_GL_EXT_blend_func_separate()
{
	if(!glelpInternal::checkAvailable("GL_EXT_blend_func_separate"))
		return;

	glBlendFuncSeparateEXT = (PFNGLBLENDFUNCSEPARATEEXTPROC)wglGetProcAddress("glBlendFuncSeparateEXT");
}

// GL_INGR_color_clamp

void glelp::init_GL_INGR_color_clamp()
{
	if(!glelpInternal::checkAvailable("GL_INGR_color_clamp"))
		return;

}

// GL_INGR_interlace_read

void glelp::init_GL_INGR_interlace_read()
{
	if(!glelpInternal::checkAvailable("GL_INGR_interlace_read"))
		return;

}

// GL_EXT_stencil_wrap

void glelp::init_GL_EXT_stencil_wrap()
{
	if(!glelpInternal::checkAvailable("GL_EXT_stencil_wrap"))
		return;

}

// GL_EXT_422_pixels

void glelp::init_GL_EXT_422_pixels()
{
	if(!glelpInternal::checkAvailable("GL_EXT_422_pixels"))
		return;

}

// GL_NV_texgen_reflection

void glelp::init_GL_NV_texgen_reflection()
{
	if(!glelpInternal::checkAvailable("GL_NV_texgen_reflection"))
		return;

}

// GL_EXT_texture_cube_map

void glelp::init_GL_EXT_texture_cube_map()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_cube_map"))
		return;

}

// GL_SUN_convolution_border_modes

void glelp::init_GL_SUN_convolution_border_modes()
{
	if(!glelpInternal::checkAvailable("GL_SUN_convolution_border_modes"))
		return;

}

// GL_EXT_texture_env_add

void glelp::init_GL_EXT_texture_env_add()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_env_add"))
		return;

}

// GL_EXT_texture_lod_bias

void glelp::init_GL_EXT_texture_lod_bias()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_lod_bias"))
		return;

}

// GL_EXT_texture_filter_anisotropic

void glelp::init_GL_EXT_texture_filter_anisotropic()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_filter_anisotropic"))
		return;

}

// GL_EXT_vertex_weighting
PFNGLVERTEXWEIGHTFEXTPROC glVertexWeightfEXT;
PFNGLVERTEXWEIGHTFVEXTPROC glVertexWeightfvEXT;
PFNGLVERTEXWEIGHTPOINTEREXTPROC glVertexWeightPointerEXT;

void glelp::init_GL_EXT_vertex_weighting()
{
	if(!glelpInternal::checkAvailable("GL_EXT_vertex_weighting"))
		return;

	glVertexWeightfEXT = (PFNGLVERTEXWEIGHTFEXTPROC)wglGetProcAddress("glVertexWeightfEXT");
	glVertexWeightfvEXT = (PFNGLVERTEXWEIGHTFVEXTPROC)wglGetProcAddress("glVertexWeightfvEXT");
	glVertexWeightPointerEXT = (PFNGLVERTEXWEIGHTPOINTEREXTPROC)wglGetProcAddress("glVertexWeightPointerEXT");
}

// GL_NV_light_max_exponent

void glelp::init_GL_NV_light_max_exponent()
{
	if(!glelpInternal::checkAvailable("GL_NV_light_max_exponent"))
		return;

}

// GL_NV_vertex_array_range
PFNGLFLUSHVERTEXARRAYRANGENVPROC glFlushVertexArrayRangeNV;
PFNGLVERTEXARRAYRANGENVPROC glVertexArrayRangeNV;

void glelp::init_GL_NV_vertex_array_range()
{
	if(!glelpInternal::checkAvailable("GL_NV_vertex_array_range"))
		return;

	glFlushVertexArrayRangeNV = (PFNGLFLUSHVERTEXARRAYRANGENVPROC)wglGetProcAddress("glFlushVertexArrayRangeNV");
	glVertexArrayRangeNV = (PFNGLVERTEXARRAYRANGENVPROC)wglGetProcAddress("glVertexArrayRangeNV");
}

// GL_NV_register_combiners
PFNGLCOMBINERPARAMETERFVNVPROC glCombinerParameterfvNV;
PFNGLCOMBINERPARAMETERFNVPROC glCombinerParameterfNV;
PFNGLCOMBINERPARAMETERIVNVPROC glCombinerParameterivNV;
PFNGLCOMBINERPARAMETERINVPROC glCombinerParameteriNV;
PFNGLCOMBINERINPUTNVPROC glCombinerInputNV;
PFNGLCOMBINEROUTPUTNVPROC glCombinerOutputNV;
PFNGLFINALCOMBINERINPUTNVPROC glFinalCombinerInputNV;
PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC glGetCombinerInputParameterfvNV;
PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC glGetCombinerInputParameterivNV;
PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC glGetCombinerOutputParameterfvNV;
PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC glGetCombinerOutputParameterivNV;
PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC glGetFinalCombinerInputParameterfvNV;
PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC glGetFinalCombinerInputParameterivNV;

void glelp::init_GL_NV_register_combiners()
{
	if(!glelpInternal::checkAvailable("GL_NV_register_combiners"))
		return;

	glCombinerParameterfvNV = (PFNGLCOMBINERPARAMETERFVNVPROC)wglGetProcAddress("glCombinerParameterfvNV");
	glCombinerParameterfNV = (PFNGLCOMBINERPARAMETERFNVPROC)wglGetProcAddress("glCombinerParameterfNV");
	glCombinerParameterivNV = (PFNGLCOMBINERPARAMETERIVNVPROC)wglGetProcAddress("glCombinerParameterivNV");
	glCombinerParameteriNV = (PFNGLCOMBINERPARAMETERINVPROC)wglGetProcAddress("glCombinerParameteriNV");
	glCombinerInputNV = (PFNGLCOMBINERINPUTNVPROC)wglGetProcAddress("glCombinerInputNV");
	glCombinerOutputNV = (PFNGLCOMBINEROUTPUTNVPROC)wglGetProcAddress("glCombinerOutputNV");
	glFinalCombinerInputNV = (PFNGLFINALCOMBINERINPUTNVPROC)wglGetProcAddress("glFinalCombinerInputNV");
	glGetCombinerInputParameterfvNV = (PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)wglGetProcAddress("glGetCombinerInputParameterfvNV");
	glGetCombinerInputParameterivNV = (PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)wglGetProcAddress("glGetCombinerInputParameterivNV");
	glGetCombinerOutputParameterfvNV = (PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)wglGetProcAddress("glGetCombinerOutputParameterfvNV");
	glGetCombinerOutputParameterivNV = (PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)wglGetProcAddress("glGetCombinerOutputParameterivNV");
	glGetFinalCombinerInputParameterfvNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)wglGetProcAddress("glGetFinalCombinerInputParameterfvNV");
	glGetFinalCombinerInputParameterivNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)wglGetProcAddress("glGetFinalCombinerInputParameterivNV");
}

// GL_NV_fog_distance

void glelp::init_GL_NV_fog_distance()
{
	if(!glelpInternal::checkAvailable("GL_NV_fog_distance"))
		return;

}

// GL_NV_texgen_emboss

void glelp::init_GL_NV_texgen_emboss()
{
	if(!glelpInternal::checkAvailable("GL_NV_texgen_emboss"))
		return;

}

// GL_NV_blend_square

void glelp::init_GL_NV_blend_square()
{
	if(!glelpInternal::checkAvailable("GL_NV_blend_square"))
		return;

}

// GL_NV_texture_env_combine4

void glelp::init_GL_NV_texture_env_combine4()
{
	if(!glelpInternal::checkAvailable("GL_NV_texture_env_combine4"))
		return;

}

// GL_MESA_resize_buffers
PFNGLRESIZEBUFFERSMESAPROC glResizeBuffersMESA;

void glelp::init_GL_MESA_resize_buffers()
{
	if(!glelpInternal::checkAvailable("GL_MESA_resize_buffers"))
		return;

	glResizeBuffersMESA = (PFNGLRESIZEBUFFERSMESAPROC)wglGetProcAddress("glResizeBuffersMESA");
}

// GL_MESA_window_pos
PFNGLWINDOWPOS2DMESAPROC glWindowPos2dMESA;
PFNGLWINDOWPOS2DVMESAPROC glWindowPos2dvMESA;
PFNGLWINDOWPOS2FMESAPROC glWindowPos2fMESA;
PFNGLWINDOWPOS2FVMESAPROC glWindowPos2fvMESA;
PFNGLWINDOWPOS2IMESAPROC glWindowPos2iMESA;
PFNGLWINDOWPOS2IVMESAPROC glWindowPos2ivMESA;
PFNGLWINDOWPOS2SMESAPROC glWindowPos2sMESA;
PFNGLWINDOWPOS2SVMESAPROC glWindowPos2svMESA;
PFNGLWINDOWPOS3DMESAPROC glWindowPos3dMESA;
PFNGLWINDOWPOS3DVMESAPROC glWindowPos3dvMESA;
PFNGLWINDOWPOS3FMESAPROC glWindowPos3fMESA;
PFNGLWINDOWPOS3FVMESAPROC glWindowPos3fvMESA;
PFNGLWINDOWPOS3IMESAPROC glWindowPos3iMESA;
PFNGLWINDOWPOS3IVMESAPROC glWindowPos3ivMESA;
PFNGLWINDOWPOS3SMESAPROC glWindowPos3sMESA;
PFNGLWINDOWPOS3SVMESAPROC glWindowPos3svMESA;
PFNGLWINDOWPOS4DMESAPROC glWindowPos4dMESA;
PFNGLWINDOWPOS4DVMESAPROC glWindowPos4dvMESA;
PFNGLWINDOWPOS4FMESAPROC glWindowPos4fMESA;
PFNGLWINDOWPOS4FVMESAPROC glWindowPos4fvMESA;
PFNGLWINDOWPOS4IMESAPROC glWindowPos4iMESA;
PFNGLWINDOWPOS4IVMESAPROC glWindowPos4ivMESA;
PFNGLWINDOWPOS4SMESAPROC glWindowPos4sMESA;
PFNGLWINDOWPOS4SVMESAPROC glWindowPos4svMESA;

void glelp::init_GL_MESA_window_pos()
{
	if(!glelpInternal::checkAvailable("GL_MESA_window_pos"))
		return;

	glWindowPos2dMESA = (PFNGLWINDOWPOS2DMESAPROC)wglGetProcAddress("glWindowPos2dMESA");
	glWindowPos2dvMESA = (PFNGLWINDOWPOS2DVMESAPROC)wglGetProcAddress("glWindowPos2dvMESA");
	glWindowPos2fMESA = (PFNGLWINDOWPOS2FMESAPROC)wglGetProcAddress("glWindowPos2fMESA");
	glWindowPos2fvMESA = (PFNGLWINDOWPOS2FVMESAPROC)wglGetProcAddress("glWindowPos2fvMESA");
	glWindowPos2iMESA = (PFNGLWINDOWPOS2IMESAPROC)wglGetProcAddress("glWindowPos2iMESA");
	glWindowPos2ivMESA = (PFNGLWINDOWPOS2IVMESAPROC)wglGetProcAddress("glWindowPos2ivMESA");
	glWindowPos2sMESA = (PFNGLWINDOWPOS2SMESAPROC)wglGetProcAddress("glWindowPos2sMESA");
	glWindowPos2svMESA = (PFNGLWINDOWPOS2SVMESAPROC)wglGetProcAddress("glWindowPos2svMESA");
	glWindowPos3dMESA = (PFNGLWINDOWPOS3DMESAPROC)wglGetProcAddress("glWindowPos3dMESA");
	glWindowPos3dvMESA = (PFNGLWINDOWPOS3DVMESAPROC)wglGetProcAddress("glWindowPos3dvMESA");
	glWindowPos3fMESA = (PFNGLWINDOWPOS3FMESAPROC)wglGetProcAddress("glWindowPos3fMESA");
	glWindowPos3fvMESA = (PFNGLWINDOWPOS3FVMESAPROC)wglGetProcAddress("glWindowPos3fvMESA");
	glWindowPos3iMESA = (PFNGLWINDOWPOS3IMESAPROC)wglGetProcAddress("glWindowPos3iMESA");
	glWindowPos3ivMESA = (PFNGLWINDOWPOS3IVMESAPROC)wglGetProcAddress("glWindowPos3ivMESA");
	glWindowPos3sMESA = (PFNGLWINDOWPOS3SMESAPROC)wglGetProcAddress("glWindowPos3sMESA");
	glWindowPos3svMESA = (PFNGLWINDOWPOS3SVMESAPROC)wglGetProcAddress("glWindowPos3svMESA");
	glWindowPos4dMESA = (PFNGLWINDOWPOS4DMESAPROC)wglGetProcAddress("glWindowPos4dMESA");
	glWindowPos4dvMESA = (PFNGLWINDOWPOS4DVMESAPROC)wglGetProcAddress("glWindowPos4dvMESA");
	glWindowPos4fMESA = (PFNGLWINDOWPOS4FMESAPROC)wglGetProcAddress("glWindowPos4fMESA");
	glWindowPos4fvMESA = (PFNGLWINDOWPOS4FVMESAPROC)wglGetProcAddress("glWindowPos4fvMESA");
	glWindowPos4iMESA = (PFNGLWINDOWPOS4IMESAPROC)wglGetProcAddress("glWindowPos4iMESA");
	glWindowPos4ivMESA = (PFNGLWINDOWPOS4IVMESAPROC)wglGetProcAddress("glWindowPos4ivMESA");
	glWindowPos4sMESA = (PFNGLWINDOWPOS4SMESAPROC)wglGetProcAddress("glWindowPos4sMESA");
	glWindowPos4svMESA = (PFNGLWINDOWPOS4SVMESAPROC)wglGetProcAddress("glWindowPos4svMESA");
}

// GL_EXT_texture_compression_s3tc

void glelp::init_GL_EXT_texture_compression_s3tc()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_compression_s3tc"))
		return;

}

// GL_IBM_cull_vertex

void glelp::init_GL_IBM_cull_vertex()
{
	if(!glelpInternal::checkAvailable("GL_IBM_cull_vertex"))
		return;

}

// GL_IBM_multimode_draw_arrays
PFNGLMULTIMODEDRAWARRAYSIBMPROC glMultiModeDrawArraysIBM;
PFNGLMULTIMODEDRAWELEMENTSIBMPROC glMultiModeDrawElementsIBM;

void glelp::init_GL_IBM_multimode_draw_arrays()
{
	if(!glelpInternal::checkAvailable("GL_IBM_multimode_draw_arrays"))
		return;

	glMultiModeDrawArraysIBM = (PFNGLMULTIMODEDRAWARRAYSIBMPROC)wglGetProcAddress("glMultiModeDrawArraysIBM");
	glMultiModeDrawElementsIBM = (PFNGLMULTIMODEDRAWELEMENTSIBMPROC)wglGetProcAddress("glMultiModeDrawElementsIBM");
}

// GL_IBM_vertex_array_lists
PFNGLCOLORPOINTERLISTIBMPROC glColorPointerListIBM;
PFNGLSECONDARYCOLORPOINTERLISTIBMPROC glSecondaryColorPointerListIBM;
PFNGLEDGEFLAGPOINTERLISTIBMPROC glEdgeFlagPointerListIBM;
PFNGLFOGCOORDPOINTERLISTIBMPROC glFogCoordPointerListIBM;
PFNGLINDEXPOINTERLISTIBMPROC glIndexPointerListIBM;
PFNGLNORMALPOINTERLISTIBMPROC glNormalPointerListIBM;
PFNGLTEXCOORDPOINTERLISTIBMPROC glTexCoordPointerListIBM;
PFNGLVERTEXPOINTERLISTIBMPROC glVertexPointerListIBM;

void glelp::init_GL_IBM_vertex_array_lists()
{
	if(!glelpInternal::checkAvailable("GL_IBM_vertex_array_lists"))
		return;

	glColorPointerListIBM = (PFNGLCOLORPOINTERLISTIBMPROC)wglGetProcAddress("glColorPointerListIBM");
	glSecondaryColorPointerListIBM = (PFNGLSECONDARYCOLORPOINTERLISTIBMPROC)wglGetProcAddress("glSecondaryColorPointerListIBM");
	glEdgeFlagPointerListIBM = (PFNGLEDGEFLAGPOINTERLISTIBMPROC)wglGetProcAddress("glEdgeFlagPointerListIBM");
	glFogCoordPointerListIBM = (PFNGLFOGCOORDPOINTERLISTIBMPROC)wglGetProcAddress("glFogCoordPointerListIBM");
	glIndexPointerListIBM = (PFNGLINDEXPOINTERLISTIBMPROC)wglGetProcAddress("glIndexPointerListIBM");
	glNormalPointerListIBM = (PFNGLNORMALPOINTERLISTIBMPROC)wglGetProcAddress("glNormalPointerListIBM");
	glTexCoordPointerListIBM = (PFNGLTEXCOORDPOINTERLISTIBMPROC)wglGetProcAddress("glTexCoordPointerListIBM");
	glVertexPointerListIBM = (PFNGLVERTEXPOINTERLISTIBMPROC)wglGetProcAddress("glVertexPointerListIBM");
}

// GL_SGIX_ycrcb_subsample

void glelp::init_GL_SGIX_ycrcb_subsample()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_ycrcb_subsample"))
		return;

}

// GL_SGIX_ycrcba

void glelp::init_GL_SGIX_ycrcba()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_ycrcba"))
		return;

}

// GL_SGI_depth_pass_instrument

void glelp::init_GL_SGI_depth_pass_instrument()
{
	if(!glelpInternal::checkAvailable("GL_SGI_depth_pass_instrument"))
		return;

}

// GL_3DFX_texture_compression_FXT1

void glelp::init_GL_3DFX_texture_compression_FXT1()
{
	if(!glelpInternal::checkAvailable("GL_3DFX_texture_compression_FXT1"))
		return;

}

// GL_3DFX_multisample

void glelp::init_GL_3DFX_multisample()
{
	if(!glelpInternal::checkAvailable("GL_3DFX_multisample"))
		return;

}

// GL_3DFX_tbuffer
PFNGLTBUFFERMASK3DFXPROC glTbufferMask3DFX;

void glelp::init_GL_3DFX_tbuffer()
{
	if(!glelpInternal::checkAvailable("GL_3DFX_tbuffer"))
		return;

	glTbufferMask3DFX = (PFNGLTBUFFERMASK3DFXPROC)wglGetProcAddress("glTbufferMask3DFX");
}

// GL_EXT_multisample
PFNGLSAMPLEMASKEXTPROC glSampleMaskEXT;
PFNGLSAMPLEPATTERNEXTPROC glSamplePatternEXT;

void glelp::init_GL_EXT_multisample()
{
	if(!glelpInternal::checkAvailable("GL_EXT_multisample"))
		return;

	glSampleMaskEXT = (PFNGLSAMPLEMASKEXTPROC)wglGetProcAddress("glSampleMaskEXT");
	glSamplePatternEXT = (PFNGLSAMPLEPATTERNEXTPROC)wglGetProcAddress("glSamplePatternEXT");
}

// GL_SGIX_vertex_preclip

void glelp::init_GL_SGIX_vertex_preclip()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_vertex_preclip"))
		return;

}

// GL_SGIX_convolution_accuracy

void glelp::init_GL_SGIX_convolution_accuracy()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_convolution_accuracy"))
		return;

}

// GL_SGIX_resample

void glelp::init_GL_SGIX_resample()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_resample"))
		return;

}

// GL_SGIS_point_line_texgen

void glelp::init_GL_SGIS_point_line_texgen()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_point_line_texgen"))
		return;

}

// GL_SGIS_texture_color_mask
PFNGLTEXTURECOLORMASKSGISPROC glTextureColorMaskSGIS;

void glelp::init_GL_SGIS_texture_color_mask()
{
	if(!glelpInternal::checkAvailable("GL_SGIS_texture_color_mask"))
		return;

	glTextureColorMaskSGIS = (PFNGLTEXTURECOLORMASKSGISPROC)wglGetProcAddress("glTextureColorMaskSGIS");
}

// GL_EXT_texture_env_dot3

void glelp::init_GL_EXT_texture_env_dot3()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_env_dot3"))
		return;

}

// GL_ATI_texture_mirror_once

void glelp::init_GL_ATI_texture_mirror_once()
{
	if(!glelpInternal::checkAvailable("GL_ATI_texture_mirror_once"))
		return;

}

// GL_NV_fence
PFNGLDELETEFENCESNVPROC glDeleteFencesNV;
PFNGLGENFENCESNVPROC glGenFencesNV;
PFNGLISFENCENVPROC glIsFenceNV;
PFNGLTESTFENCENVPROC glTestFenceNV;
PFNGLGETFENCEIVNVPROC glGetFenceivNV;
PFNGLFINISHFENCENVPROC glFinishFenceNV;
PFNGLSETFENCENVPROC glSetFenceNV;

void glelp::init_GL_NV_fence()
{
	if(!glelpInternal::checkAvailable("GL_NV_fence"))
		return;

	glDeleteFencesNV = (PFNGLDELETEFENCESNVPROC)wglGetProcAddress("glDeleteFencesNV");
	glGenFencesNV = (PFNGLGENFENCESNVPROC)wglGetProcAddress("glGenFencesNV");
	glIsFenceNV = (PFNGLISFENCENVPROC)wglGetProcAddress("glIsFenceNV");
	glTestFenceNV = (PFNGLTESTFENCENVPROC)wglGetProcAddress("glTestFenceNV");
	glGetFenceivNV = (PFNGLGETFENCEIVNVPROC)wglGetProcAddress("glGetFenceivNV");
	glFinishFenceNV = (PFNGLFINISHFENCENVPROC)wglGetProcAddress("glFinishFenceNV");
	glSetFenceNV = (PFNGLSETFENCENVPROC)wglGetProcAddress("glSetFenceNV");
}

// GL_IBM_texture_mirrored_repeat

void glelp::init_GL_IBM_texture_mirrored_repeat()
{
	if(!glelpInternal::checkAvailable("GL_IBM_texture_mirrored_repeat"))
		return;

}

// GL_NV_evaluators
PFNGLMAPCONTROLPOINTSNVPROC glMapControlPointsNV;
PFNGLMAPPARAMETERIVNVPROC glMapParameterivNV;
PFNGLMAPPARAMETERFVNVPROC glMapParameterfvNV;
PFNGLGETMAPCONTROLPOINTSNVPROC glGetMapControlPointsNV;
PFNGLGETMAPPARAMETERIVNVPROC glGetMapParameterivNV;
PFNGLGETMAPPARAMETERFVNVPROC glGetMapParameterfvNV;
PFNGLGETMAPATTRIBPARAMETERIVNVPROC glGetMapAttribParameterivNV;
PFNGLGETMAPATTRIBPARAMETERFVNVPROC glGetMapAttribParameterfvNV;
PFNGLEVALMAPSNVPROC glEvalMapsNV;

void glelp::init_GL_NV_evaluators()
{
	if(!glelpInternal::checkAvailable("GL_NV_evaluators"))
		return;

	glMapControlPointsNV = (PFNGLMAPCONTROLPOINTSNVPROC)wglGetProcAddress("glMapControlPointsNV");
	glMapParameterivNV = (PFNGLMAPPARAMETERIVNVPROC)wglGetProcAddress("glMapParameterivNV");
	glMapParameterfvNV = (PFNGLMAPPARAMETERFVNVPROC)wglGetProcAddress("glMapParameterfvNV");
	glGetMapControlPointsNV = (PFNGLGETMAPCONTROLPOINTSNVPROC)wglGetProcAddress("glGetMapControlPointsNV");
	glGetMapParameterivNV = (PFNGLGETMAPPARAMETERIVNVPROC)wglGetProcAddress("glGetMapParameterivNV");
	glGetMapParameterfvNV = (PFNGLGETMAPPARAMETERFVNVPROC)wglGetProcAddress("glGetMapParameterfvNV");
	glGetMapAttribParameterivNV = (PFNGLGETMAPATTRIBPARAMETERIVNVPROC)wglGetProcAddress("glGetMapAttribParameterivNV");
	glGetMapAttribParameterfvNV = (PFNGLGETMAPATTRIBPARAMETERFVNVPROC)wglGetProcAddress("glGetMapAttribParameterfvNV");
	glEvalMapsNV = (PFNGLEVALMAPSNVPROC)wglGetProcAddress("glEvalMapsNV");
}

// GL_NV_packed_depth_stencil

void glelp::init_GL_NV_packed_depth_stencil()
{
	if(!glelpInternal::checkAvailable("GL_NV_packed_depth_stencil"))
		return;

}

// GL_NV_register_combiners2
PFNGLCOMBINERSTAGEPARAMETERFVNVPROC glCombinerStageParameterfvNV;
PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC glGetCombinerStageParameterfvNV;

void glelp::init_GL_NV_register_combiners2()
{
	if(!glelpInternal::checkAvailable("GL_NV_register_combiners2"))
		return;

	glCombinerStageParameterfvNV = (PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)wglGetProcAddress("glCombinerStageParameterfvNV");
	glGetCombinerStageParameterfvNV = (PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)wglGetProcAddress("glGetCombinerStageParameterfvNV");
}

// GL_NV_texture_compression_vtc

void glelp::init_GL_NV_texture_compression_vtc()
{
	if(!glelpInternal::checkAvailable("GL_NV_texture_compression_vtc"))
		return;

}

// GL_NV_texture_rectangle

void glelp::init_GL_NV_texture_rectangle()
{
	if(!glelpInternal::checkAvailable("GL_NV_texture_rectangle"))
		return;

}

// GL_NV_texture_shader

void glelp::init_GL_NV_texture_shader()
{
	if(!glelpInternal::checkAvailable("GL_NV_texture_shader"))
		return;

}

// GL_NV_texture_shader2

void glelp::init_GL_NV_texture_shader2()
{
	if(!glelpInternal::checkAvailable("GL_NV_texture_shader2"))
		return;

}

// GL_NV_vertex_array_range2

void glelp::init_GL_NV_vertex_array_range2()
{
	if(!glelpInternal::checkAvailable("GL_NV_vertex_array_range2"))
		return;

}

// GL_NV_vertex_program
PFNGLAREPROGRAMSRESIDENTNVPROC glAreProgramsResidentNV;
PFNGLBINDPROGRAMNVPROC glBindProgramNV;
PFNGLDELETEPROGRAMSNVPROC glDeleteProgramsNV;
PFNGLEXECUTEPROGRAMNVPROC glExecuteProgramNV;
PFNGLGENPROGRAMSNVPROC glGenProgramsNV;
PFNGLGETPROGRAMPARAMETERDVNVPROC glGetProgramParameterdvNV;
PFNGLGETPROGRAMPARAMETERFVNVPROC glGetProgramParameterfvNV;
PFNGLGETPROGRAMIVNVPROC glGetProgramivNV;
PFNGLGETPROGRAMSTRINGNVPROC glGetProgramStringNV;
PFNGLGETTRACKMATRIXIVNVPROC glGetTrackMatrixivNV;
PFNGLGETVERTEXATTRIBDVNVPROC glGetVertexAttribdvNV;
PFNGLGETVERTEXATTRIBFVNVPROC glGetVertexAttribfvNV;
PFNGLGETVERTEXATTRIBIVNVPROC glGetVertexAttribivNV;
PFNGLGETVERTEXATTRIBPOINTERVNVPROC glGetVertexAttribPointervNV;
PFNGLISPROGRAMNVPROC glIsProgramNV;
PFNGLLOADPROGRAMNVPROC glLoadProgramNV;
PFNGLPROGRAMPARAMETER4DNVPROC glProgramParameter4dNV;
PFNGLPROGRAMPARAMETER4DVNVPROC glProgramParameter4dvNV;
PFNGLPROGRAMPARAMETER4FNVPROC glProgramParameter4fNV;
PFNGLPROGRAMPARAMETER4FVNVPROC glProgramParameter4fvNV;
PFNGLPROGRAMPARAMETERS4DVNVPROC glProgramParameters4dvNV;
PFNGLPROGRAMPARAMETERS4FVNVPROC glProgramParameters4fvNV;
PFNGLREQUESTRESIDENTPROGRAMSNVPROC glRequestResidentProgramsNV;
PFNGLTRACKMATRIXNVPROC glTrackMatrixNV;
PFNGLVERTEXATTRIBPOINTERNVPROC glVertexAttribPointerNV;
PFNGLVERTEXATTRIB1DNVPROC glVertexAttrib1dNV;
PFNGLVERTEXATTRIB1DVNVPROC glVertexAttrib1dvNV;
PFNGLVERTEXATTRIB1FNVPROC glVertexAttrib1fNV;
PFNGLVERTEXATTRIB1FVNVPROC glVertexAttrib1fvNV;
PFNGLVERTEXATTRIB1SNVPROC glVertexAttrib1sNV;
PFNGLVERTEXATTRIB1SVNVPROC glVertexAttrib1svNV;
PFNGLVERTEXATTRIB2DNVPROC glVertexAttrib2dNV;
PFNGLVERTEXATTRIB2DVNVPROC glVertexAttrib2dvNV;
PFNGLVERTEXATTRIB2FNVPROC glVertexAttrib2fNV;
PFNGLVERTEXATTRIB2FVNVPROC glVertexAttrib2fvNV;
PFNGLVERTEXATTRIB2SNVPROC glVertexAttrib2sNV;
PFNGLVERTEXATTRIB2SVNVPROC glVertexAttrib2svNV;
PFNGLVERTEXATTRIB3DNVPROC glVertexAttrib3dNV;
PFNGLVERTEXATTRIB3DVNVPROC glVertexAttrib3dvNV;
PFNGLVERTEXATTRIB3FNVPROC glVertexAttrib3fNV;
PFNGLVERTEXATTRIB3FVNVPROC glVertexAttrib3fvNV;
PFNGLVERTEXATTRIB3SNVPROC glVertexAttrib3sNV;
PFNGLVERTEXATTRIB3SVNVPROC glVertexAttrib3svNV;
PFNGLVERTEXATTRIB4DNVPROC glVertexAttrib4dNV;
PFNGLVERTEXATTRIB4DVNVPROC glVertexAttrib4dvNV;
PFNGLVERTEXATTRIB4FNVPROC glVertexAttrib4fNV;
PFNGLVERTEXATTRIB4FVNVPROC glVertexAttrib4fvNV;
PFNGLVERTEXATTRIB4SNVPROC glVertexAttrib4sNV;
PFNGLVERTEXATTRIB4SVNVPROC glVertexAttrib4svNV;
PFNGLVERTEXATTRIB4UBNVPROC glVertexAttrib4ubNV;
PFNGLVERTEXATTRIB4UBVNVPROC glVertexAttrib4ubvNV;
PFNGLVERTEXATTRIBS1DVNVPROC glVertexAttribs1dvNV;
PFNGLVERTEXATTRIBS1FVNVPROC glVertexAttribs1fvNV;
PFNGLVERTEXATTRIBS1SVNVPROC glVertexAttribs1svNV;
PFNGLVERTEXATTRIBS2DVNVPROC glVertexAttribs2dvNV;
PFNGLVERTEXATTRIBS2FVNVPROC glVertexAttribs2fvNV;
PFNGLVERTEXATTRIBS2SVNVPROC glVertexAttribs2svNV;
PFNGLVERTEXATTRIBS3DVNVPROC glVertexAttribs3dvNV;
PFNGLVERTEXATTRIBS3FVNVPROC glVertexAttribs3fvNV;
PFNGLVERTEXATTRIBS3SVNVPROC glVertexAttribs3svNV;
PFNGLVERTEXATTRIBS4DVNVPROC glVertexAttribs4dvNV;
PFNGLVERTEXATTRIBS4FVNVPROC glVertexAttribs4fvNV;
PFNGLVERTEXATTRIBS4SVNVPROC glVertexAttribs4svNV;
PFNGLVERTEXATTRIBS4UBVNVPROC glVertexAttribs4ubvNV;

void glelp::init_GL_NV_vertex_program()
{
	if(!glelpInternal::checkAvailable("GL_NV_vertex_program"))
		return;

	glAreProgramsResidentNV = (PFNGLAREPROGRAMSRESIDENTNVPROC)wglGetProcAddress("glAreProgramsResidentNV");
	glBindProgramNV = (PFNGLBINDPROGRAMNVPROC)wglGetProcAddress("glBindProgramNV");
	glDeleteProgramsNV = (PFNGLDELETEPROGRAMSNVPROC)wglGetProcAddress("glDeleteProgramsNV");
	glExecuteProgramNV = (PFNGLEXECUTEPROGRAMNVPROC)wglGetProcAddress("glExecuteProgramNV");
	glGenProgramsNV = (PFNGLGENPROGRAMSNVPROC)wglGetProcAddress("glGenProgramsNV");
	glGetProgramParameterdvNV = (PFNGLGETPROGRAMPARAMETERDVNVPROC)wglGetProcAddress("glGetProgramParameterdvNV");
	glGetProgramParameterfvNV = (PFNGLGETPROGRAMPARAMETERFVNVPROC)wglGetProcAddress("glGetProgramParameterfvNV");
	glGetProgramivNV = (PFNGLGETPROGRAMIVNVPROC)wglGetProcAddress("glGetProgramivNV");
	glGetProgramStringNV = (PFNGLGETPROGRAMSTRINGNVPROC)wglGetProcAddress("glGetProgramStringNV");
	glGetTrackMatrixivNV = (PFNGLGETTRACKMATRIXIVNVPROC)wglGetProcAddress("glGetTrackMatrixivNV");
	glGetVertexAttribdvNV = (PFNGLGETVERTEXATTRIBDVNVPROC)wglGetProcAddress("glGetVertexAttribdvNV");
	glGetVertexAttribfvNV = (PFNGLGETVERTEXATTRIBFVNVPROC)wglGetProcAddress("glGetVertexAttribfvNV");
	glGetVertexAttribivNV = (PFNGLGETVERTEXATTRIBIVNVPROC)wglGetProcAddress("glGetVertexAttribivNV");
	glGetVertexAttribPointervNV = (PFNGLGETVERTEXATTRIBPOINTERVNVPROC)wglGetProcAddress("glGetVertexAttribPointervNV");
	glIsProgramNV = (PFNGLISPROGRAMNVPROC)wglGetProcAddress("glIsProgramNV");
	glLoadProgramNV = (PFNGLLOADPROGRAMNVPROC)wglGetProcAddress("glLoadProgramNV");
	glProgramParameter4dNV = (PFNGLPROGRAMPARAMETER4DNVPROC)wglGetProcAddress("glProgramParameter4dNV");
	glProgramParameter4dvNV = (PFNGLPROGRAMPARAMETER4DVNVPROC)wglGetProcAddress("glProgramParameter4dvNV");
	glProgramParameter4fNV = (PFNGLPROGRAMPARAMETER4FNVPROC)wglGetProcAddress("glProgramParameter4fNV");
	glProgramParameter4fvNV = (PFNGLPROGRAMPARAMETER4FVNVPROC)wglGetProcAddress("glProgramParameter4fvNV");
	glProgramParameters4dvNV = (PFNGLPROGRAMPARAMETERS4DVNVPROC)wglGetProcAddress("glProgramParameters4dvNV");
	glProgramParameters4fvNV = (PFNGLPROGRAMPARAMETERS4FVNVPROC)wglGetProcAddress("glProgramParameters4fvNV");
	glRequestResidentProgramsNV = (PFNGLREQUESTRESIDENTPROGRAMSNVPROC)wglGetProcAddress("glRequestResidentProgramsNV");
	glTrackMatrixNV = (PFNGLTRACKMATRIXNVPROC)wglGetProcAddress("glTrackMatrixNV");
	glVertexAttribPointerNV = (PFNGLVERTEXATTRIBPOINTERNVPROC)wglGetProcAddress("glVertexAttribPointerNV");
	glVertexAttrib1dNV = (PFNGLVERTEXATTRIB1DNVPROC)wglGetProcAddress("glVertexAttrib1dNV");
	glVertexAttrib1dvNV = (PFNGLVERTEXATTRIB1DVNVPROC)wglGetProcAddress("glVertexAttrib1dvNV");
	glVertexAttrib1fNV = (PFNGLVERTEXATTRIB1FNVPROC)wglGetProcAddress("glVertexAttrib1fNV");
	glVertexAttrib1fvNV = (PFNGLVERTEXATTRIB1FVNVPROC)wglGetProcAddress("glVertexAttrib1fvNV");
	glVertexAttrib1sNV = (PFNGLVERTEXATTRIB1SNVPROC)wglGetProcAddress("glVertexAttrib1sNV");
	glVertexAttrib1svNV = (PFNGLVERTEXATTRIB1SVNVPROC)wglGetProcAddress("glVertexAttrib1svNV");
	glVertexAttrib2dNV = (PFNGLVERTEXATTRIB2DNVPROC)wglGetProcAddress("glVertexAttrib2dNV");
	glVertexAttrib2dvNV = (PFNGLVERTEXATTRIB2DVNVPROC)wglGetProcAddress("glVertexAttrib2dvNV");
	glVertexAttrib2fNV = (PFNGLVERTEXATTRIB2FNVPROC)wglGetProcAddress("glVertexAttrib2fNV");
	glVertexAttrib2fvNV = (PFNGLVERTEXATTRIB2FVNVPROC)wglGetProcAddress("glVertexAttrib2fvNV");
	glVertexAttrib2sNV = (PFNGLVERTEXATTRIB2SNVPROC)wglGetProcAddress("glVertexAttrib2sNV");
	glVertexAttrib2svNV = (PFNGLVERTEXATTRIB2SVNVPROC)wglGetProcAddress("glVertexAttrib2svNV");
	glVertexAttrib3dNV = (PFNGLVERTEXATTRIB3DNVPROC)wglGetProcAddress("glVertexAttrib3dNV");
	glVertexAttrib3dvNV = (PFNGLVERTEXATTRIB3DVNVPROC)wglGetProcAddress("glVertexAttrib3dvNV");
	glVertexAttrib3fNV = (PFNGLVERTEXATTRIB3FNVPROC)wglGetProcAddress("glVertexAttrib3fNV");
	glVertexAttrib3fvNV = (PFNGLVERTEXATTRIB3FVNVPROC)wglGetProcAddress("glVertexAttrib3fvNV");
	glVertexAttrib3sNV = (PFNGLVERTEXATTRIB3SNVPROC)wglGetProcAddress("glVertexAttrib3sNV");
	glVertexAttrib3svNV = (PFNGLVERTEXATTRIB3SVNVPROC)wglGetProcAddress("glVertexAttrib3svNV");
	glVertexAttrib4dNV = (PFNGLVERTEXATTRIB4DNVPROC)wglGetProcAddress("glVertexAttrib4dNV");
	glVertexAttrib4dvNV = (PFNGLVERTEXATTRIB4DVNVPROC)wglGetProcAddress("glVertexAttrib4dvNV");
	glVertexAttrib4fNV = (PFNGLVERTEXATTRIB4FNVPROC)wglGetProcAddress("glVertexAttrib4fNV");
	glVertexAttrib4fvNV = (PFNGLVERTEXATTRIB4FVNVPROC)wglGetProcAddress("glVertexAttrib4fvNV");
	glVertexAttrib4sNV = (PFNGLVERTEXATTRIB4SNVPROC)wglGetProcAddress("glVertexAttrib4sNV");
	glVertexAttrib4svNV = (PFNGLVERTEXATTRIB4SVNVPROC)wglGetProcAddress("glVertexAttrib4svNV");
	glVertexAttrib4ubNV = (PFNGLVERTEXATTRIB4UBNVPROC)wglGetProcAddress("glVertexAttrib4ubNV");
	glVertexAttrib4ubvNV = (PFNGLVERTEXATTRIB4UBVNVPROC)wglGetProcAddress("glVertexAttrib4ubvNV");
	glVertexAttribs1dvNV = (PFNGLVERTEXATTRIBS1DVNVPROC)wglGetProcAddress("glVertexAttribs1dvNV");
	glVertexAttribs1fvNV = (PFNGLVERTEXATTRIBS1FVNVPROC)wglGetProcAddress("glVertexAttribs1fvNV");
	glVertexAttribs1svNV = (PFNGLVERTEXATTRIBS1SVNVPROC)wglGetProcAddress("glVertexAttribs1svNV");
	glVertexAttribs2dvNV = (PFNGLVERTEXATTRIBS2DVNVPROC)wglGetProcAddress("glVertexAttribs2dvNV");
	glVertexAttribs2fvNV = (PFNGLVERTEXATTRIBS2FVNVPROC)wglGetProcAddress("glVertexAttribs2fvNV");
	glVertexAttribs2svNV = (PFNGLVERTEXATTRIBS2SVNVPROC)wglGetProcAddress("glVertexAttribs2svNV");
	glVertexAttribs3dvNV = (PFNGLVERTEXATTRIBS3DVNVPROC)wglGetProcAddress("glVertexAttribs3dvNV");
	glVertexAttribs3fvNV = (PFNGLVERTEXATTRIBS3FVNVPROC)wglGetProcAddress("glVertexAttribs3fvNV");
	glVertexAttribs3svNV = (PFNGLVERTEXATTRIBS3SVNVPROC)wglGetProcAddress("glVertexAttribs3svNV");
	glVertexAttribs4dvNV = (PFNGLVERTEXATTRIBS4DVNVPROC)wglGetProcAddress("glVertexAttribs4dvNV");
	glVertexAttribs4fvNV = (PFNGLVERTEXATTRIBS4FVNVPROC)wglGetProcAddress("glVertexAttribs4fvNV");
	glVertexAttribs4svNV = (PFNGLVERTEXATTRIBS4SVNVPROC)wglGetProcAddress("glVertexAttribs4svNV");
	glVertexAttribs4ubvNV = (PFNGLVERTEXATTRIBS4UBVNVPROC)wglGetProcAddress("glVertexAttribs4ubvNV");
}

// GL_SGIX_texture_coordinate_clamp

void glelp::init_GL_SGIX_texture_coordinate_clamp()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_texture_coordinate_clamp"))
		return;

}

// GL_SGIX_scalebias_hint

void glelp::init_GL_SGIX_scalebias_hint()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_scalebias_hint"))
		return;

}

// GL_OML_interlace

void glelp::init_GL_OML_interlace()
{
	if(!glelpInternal::checkAvailable("GL_OML_interlace"))
		return;

}

// GL_OML_subsample

void glelp::init_GL_OML_subsample()
{
	if(!glelpInternal::checkAvailable("GL_OML_subsample"))
		return;

}

// GL_OML_resample

void glelp::init_GL_OML_resample()
{
	if(!glelpInternal::checkAvailable("GL_OML_resample"))
		return;

}

// GL_NV_copy_depth_to_color

void glelp::init_GL_NV_copy_depth_to_color()
{
	if(!glelpInternal::checkAvailable("GL_NV_copy_depth_to_color"))
		return;

}

// GL_ATI_envmap_bumpmap
PFNGLTEXBUMPPARAMETERIVATIPROC glTexBumpParameterivATI;
PFNGLTEXBUMPPARAMETERFVATIPROC glTexBumpParameterfvATI;
PFNGLGETTEXBUMPPARAMETERIVATIPROC glGetTexBumpParameterivATI;
PFNGLGETTEXBUMPPARAMETERFVATIPROC glGetTexBumpParameterfvATI;

void glelp::init_GL_ATI_envmap_bumpmap()
{
	if(!glelpInternal::checkAvailable("GL_ATI_envmap_bumpmap"))
		return;

	glTexBumpParameterivATI = (PFNGLTEXBUMPPARAMETERIVATIPROC)wglGetProcAddress("glTexBumpParameterivATI");
	glTexBumpParameterfvATI = (PFNGLTEXBUMPPARAMETERFVATIPROC)wglGetProcAddress("glTexBumpParameterfvATI");
	glGetTexBumpParameterivATI = (PFNGLGETTEXBUMPPARAMETERIVATIPROC)wglGetProcAddress("glGetTexBumpParameterivATI");
	glGetTexBumpParameterfvATI = (PFNGLGETTEXBUMPPARAMETERFVATIPROC)wglGetProcAddress("glGetTexBumpParameterfvATI");
}

// GL_ATI_fragment_shader
PFNGLGENFRAGMENTSHADERSATIPROC glGenFragmentShadersATI;
PFNGLBINDFRAGMENTSHADERATIPROC glBindFragmentShaderATI;
PFNGLDELETEFRAGMENTSHADERATIPROC glDeleteFragmentShaderATI;
PFNGLBEGINFRAGMENTSHADERATIPROC glBeginFragmentShaderATI;
PFNGLENDFRAGMENTSHADERATIPROC glEndFragmentShaderATI;
PFNGLPASSTEXCOORDATIPROC glPassTexCoordATI;
PFNGLSAMPLEMAPATIPROC glSampleMapATI;
PFNGLCOLORFRAGMENTOP1ATIPROC glColorFragmentOp1ATI;
PFNGLCOLORFRAGMENTOP2ATIPROC glColorFragmentOp2ATI;
PFNGLCOLORFRAGMENTOP3ATIPROC glColorFragmentOp3ATI;
PFNGLALPHAFRAGMENTOP1ATIPROC glAlphaFragmentOp1ATI;
PFNGLALPHAFRAGMENTOP2ATIPROC glAlphaFragmentOp2ATI;
PFNGLALPHAFRAGMENTOP3ATIPROC glAlphaFragmentOp3ATI;
PFNGLSETFRAGMENTSHADERCONSTANTATIPROC glSetFragmentShaderConstantATI;

void glelp::init_GL_ATI_fragment_shader()
{
	if(!glelpInternal::checkAvailable("GL_ATI_fragment_shader"))
		return;

	glGenFragmentShadersATI = (PFNGLGENFRAGMENTSHADERSATIPROC)wglGetProcAddress("glGenFragmentShadersATI");
	glBindFragmentShaderATI = (PFNGLBINDFRAGMENTSHADERATIPROC)wglGetProcAddress("glBindFragmentShaderATI");
	glDeleteFragmentShaderATI = (PFNGLDELETEFRAGMENTSHADERATIPROC)wglGetProcAddress("glDeleteFragmentShaderATI");
	glBeginFragmentShaderATI = (PFNGLBEGINFRAGMENTSHADERATIPROC)wglGetProcAddress("glBeginFragmentShaderATI");
	glEndFragmentShaderATI = (PFNGLENDFRAGMENTSHADERATIPROC)wglGetProcAddress("glEndFragmentShaderATI");
	glPassTexCoordATI = (PFNGLPASSTEXCOORDATIPROC)wglGetProcAddress("glPassTexCoordATI");
	glSampleMapATI = (PFNGLSAMPLEMAPATIPROC)wglGetProcAddress("glSampleMapATI");
	glColorFragmentOp1ATI = (PFNGLCOLORFRAGMENTOP1ATIPROC)wglGetProcAddress("glColorFragmentOp1ATI");
	glColorFragmentOp2ATI = (PFNGLCOLORFRAGMENTOP2ATIPROC)wglGetProcAddress("glColorFragmentOp2ATI");
	glColorFragmentOp3ATI = (PFNGLCOLORFRAGMENTOP3ATIPROC)wglGetProcAddress("glColorFragmentOp3ATI");
	glAlphaFragmentOp1ATI = (PFNGLALPHAFRAGMENTOP1ATIPROC)wglGetProcAddress("glAlphaFragmentOp1ATI");
	glAlphaFragmentOp2ATI = (PFNGLALPHAFRAGMENTOP2ATIPROC)wglGetProcAddress("glAlphaFragmentOp2ATI");
	glAlphaFragmentOp3ATI = (PFNGLALPHAFRAGMENTOP3ATIPROC)wglGetProcAddress("glAlphaFragmentOp3ATI");
	glSetFragmentShaderConstantATI = (PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)wglGetProcAddress("glSetFragmentShaderConstantATI");
}

// GL_ATI_pn_triangles
PFNGLPNTRIANGLESIATIPROC glPNTrianglesiATI;
PFNGLPNTRIANGLESFATIPROC glPNTrianglesfATI;

void glelp::init_GL_ATI_pn_triangles()
{
	if(!glelpInternal::checkAvailable("GL_ATI_pn_triangles"))
		return;

	glPNTrianglesiATI = (PFNGLPNTRIANGLESIATIPROC)wglGetProcAddress("glPNTrianglesiATI");
	glPNTrianglesfATI = (PFNGLPNTRIANGLESFATIPROC)wglGetProcAddress("glPNTrianglesfATI");
}

// GL_ATI_vertex_array_object
PFNGLNEWOBJECTBUFFERATIPROC glNewObjectBufferATI;
PFNGLISOBJECTBUFFERATIPROC glIsObjectBufferATI;
PFNGLUPDATEOBJECTBUFFERATIPROC glUpdateObjectBufferATI;
PFNGLGETOBJECTBUFFERFVATIPROC glGetObjectBufferfvATI;
PFNGLGETOBJECTBUFFERIVATIPROC glGetObjectBufferivATI;
PFNGLFREEOBJECTBUFFERATIPROC glFreeObjectBufferATI;
PFNGLARRAYOBJECTATIPROC glArrayObjectATI;
PFNGLGETARRAYOBJECTFVATIPROC glGetArrayObjectfvATI;
PFNGLGETARRAYOBJECTIVATIPROC glGetArrayObjectivATI;
PFNGLVARIANTARRAYOBJECTATIPROC glVariantArrayObjectATI;
PFNGLGETVARIANTARRAYOBJECTFVATIPROC glGetVariantArrayObjectfvATI;
PFNGLGETVARIANTARRAYOBJECTIVATIPROC glGetVariantArrayObjectivATI;

void glelp::init_GL_ATI_vertex_array_object()
{
	if(!glelpInternal::checkAvailable("GL_ATI_vertex_array_object"))
		return;

	glNewObjectBufferATI = (PFNGLNEWOBJECTBUFFERATIPROC)wglGetProcAddress("glNewObjectBufferATI");
	glIsObjectBufferATI = (PFNGLISOBJECTBUFFERATIPROC)wglGetProcAddress("glIsObjectBufferATI");
	glUpdateObjectBufferATI = (PFNGLUPDATEOBJECTBUFFERATIPROC)wglGetProcAddress("glUpdateObjectBufferATI");
	glGetObjectBufferfvATI = (PFNGLGETOBJECTBUFFERFVATIPROC)wglGetProcAddress("glGetObjectBufferfvATI");
	glGetObjectBufferivATI = (PFNGLGETOBJECTBUFFERIVATIPROC)wglGetProcAddress("glGetObjectBufferivATI");
	glFreeObjectBufferATI = (PFNGLFREEOBJECTBUFFERATIPROC)wglGetProcAddress("glFreeObjectBufferATI");
	glArrayObjectATI = (PFNGLARRAYOBJECTATIPROC)wglGetProcAddress("glArrayObjectATI");
	glGetArrayObjectfvATI = (PFNGLGETARRAYOBJECTFVATIPROC)wglGetProcAddress("glGetArrayObjectfvATI");
	glGetArrayObjectivATI = (PFNGLGETARRAYOBJECTIVATIPROC)wglGetProcAddress("glGetArrayObjectivATI");
	glVariantArrayObjectATI = (PFNGLVARIANTARRAYOBJECTATIPROC)wglGetProcAddress("glVariantArrayObjectATI");
	glGetVariantArrayObjectfvATI = (PFNGLGETVARIANTARRAYOBJECTFVATIPROC)wglGetProcAddress("glGetVariantArrayObjectfvATI");
	glGetVariantArrayObjectivATI = (PFNGLGETVARIANTARRAYOBJECTIVATIPROC)wglGetProcAddress("glGetVariantArrayObjectivATI");
}

// GL_EXT_vertex_shader
PFNGLBEGINVERTEXSHADEREXTPROC glBeginVertexShaderEXT;
PFNGLENDVERTEXSHADEREXTPROC glEndVertexShaderEXT;
PFNGLBINDVERTEXSHADEREXTPROC glBindVertexShaderEXT;
PFNGLGENVERTEXSHADERSEXTPROC glGenVertexShadersEXT;
PFNGLDELETEVERTEXSHADEREXTPROC glDeleteVertexShaderEXT;
PFNGLSHADEROP1EXTPROC glShaderOp1EXT;
PFNGLSHADEROP2EXTPROC glShaderOp2EXT;
PFNGLSHADEROP3EXTPROC glShaderOp3EXT;
PFNGLSWIZZLEEXTPROC glSwizzleEXT;
PFNGLWRITEMASKEXTPROC glWriteMaskEXT;
PFNGLINSERTCOMPONENTEXTPROC glInsertComponentEXT;
PFNGLEXTRACTCOMPONENTEXTPROC glExtractComponentEXT;
PFNGLGENSYMBOLSEXTPROC glGenSymbolsEXT;
PFNGLSETINVARIANTEXTPROC glSetInvariantEXT;
PFNGLSETLOCALCONSTANTEXTPROC glSetLocalConstantEXT;
PFNGLVARIANTBVEXTPROC glVariantbvEXT;
PFNGLVARIANTSVEXTPROC glVariantsvEXT;
PFNGLVARIANTIVEXTPROC glVariantivEXT;
PFNGLVARIANTFVEXTPROC glVariantfvEXT;
PFNGLVARIANTDVEXTPROC glVariantdvEXT;
PFNGLVARIANTUBVEXTPROC glVariantubvEXT;
PFNGLVARIANTUSVEXTPROC glVariantusvEXT;
PFNGLVARIANTUIVEXTPROC glVariantuivEXT;
PFNGLVARIANTPOINTEREXTPROC glVariantPointerEXT;
PFNGLENABLEVARIANTCLIENTSTATEEXTPROC glEnableVariantClientStateEXT;
PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC glDisableVariantClientStateEXT;
PFNGLBINDLIGHTPARAMETEREXTPROC glBindLightParameterEXT;
PFNGLBINDMATERIALPARAMETEREXTPROC glBindMaterialParameterEXT;
PFNGLBINDTEXGENPARAMETEREXTPROC glBindTexGenParameterEXT;
PFNGLBINDTEXTUREUNITPARAMETEREXTPROC glBindTextureUnitParameterEXT;
PFNGLBINDPARAMETEREXTPROC glBindParameterEXT;
PFNGLISVARIANTENABLEDEXTPROC glIsVariantEnabledEXT;
PFNGLGETVARIANTBOOLEANVEXTPROC glGetVariantBooleanvEXT;
PFNGLGETVARIANTINTEGERVEXTPROC glGetVariantIntegervEXT;
PFNGLGETVARIANTFLOATVEXTPROC glGetVariantFloatvEXT;
PFNGLGETVARIANTPOINTERVEXTPROC glGetVariantPointervEXT;
PFNGLGETINVARIANTBOOLEANVEXTPROC glGetInvariantBooleanvEXT;
PFNGLGETINVARIANTINTEGERVEXTPROC glGetInvariantIntegervEXT;
PFNGLGETINVARIANTFLOATVEXTPROC glGetInvariantFloatvEXT;
PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC glGetLocalConstantBooleanvEXT;
PFNGLGETLOCALCONSTANTINTEGERVEXTPROC glGetLocalConstantIntegervEXT;
PFNGLGETLOCALCONSTANTFLOATVEXTPROC glGetLocalConstantFloatvEXT;

void glelp::init_GL_EXT_vertex_shader()
{
	if(!glelpInternal::checkAvailable("GL_EXT_vertex_shader"))
		return;

	glBeginVertexShaderEXT = (PFNGLBEGINVERTEXSHADEREXTPROC)wglGetProcAddress("glBeginVertexShaderEXT");
	glEndVertexShaderEXT = (PFNGLENDVERTEXSHADEREXTPROC)wglGetProcAddress("glEndVertexShaderEXT");
	glBindVertexShaderEXT = (PFNGLBINDVERTEXSHADEREXTPROC)wglGetProcAddress("glBindVertexShaderEXT");
	glGenVertexShadersEXT = (PFNGLGENVERTEXSHADERSEXTPROC)wglGetProcAddress("glGenVertexShadersEXT");
	glDeleteVertexShaderEXT = (PFNGLDELETEVERTEXSHADEREXTPROC)wglGetProcAddress("glDeleteVertexShaderEXT");
	glShaderOp1EXT = (PFNGLSHADEROP1EXTPROC)wglGetProcAddress("glShaderOp1EXT");
	glShaderOp2EXT = (PFNGLSHADEROP2EXTPROC)wglGetProcAddress("glShaderOp2EXT");
	glShaderOp3EXT = (PFNGLSHADEROP3EXTPROC)wglGetProcAddress("glShaderOp3EXT");
	glSwizzleEXT = (PFNGLSWIZZLEEXTPROC)wglGetProcAddress("glSwizzleEXT");
	glWriteMaskEXT = (PFNGLWRITEMASKEXTPROC)wglGetProcAddress("glWriteMaskEXT");
	glInsertComponentEXT = (PFNGLINSERTCOMPONENTEXTPROC)wglGetProcAddress("glInsertComponentEXT");
	glExtractComponentEXT = (PFNGLEXTRACTCOMPONENTEXTPROC)wglGetProcAddress("glExtractComponentEXT");
	glGenSymbolsEXT = (PFNGLGENSYMBOLSEXTPROC)wglGetProcAddress("glGenSymbolsEXT");
	glSetInvariantEXT = (PFNGLSETINVARIANTEXTPROC)wglGetProcAddress("glSetInvariantEXT");
	glSetLocalConstantEXT = (PFNGLSETLOCALCONSTANTEXTPROC)wglGetProcAddress("glSetLocalConstantEXT");
	glVariantbvEXT = (PFNGLVARIANTBVEXTPROC)wglGetProcAddress("glVariantbvEXT");
	glVariantsvEXT = (PFNGLVARIANTSVEXTPROC)wglGetProcAddress("glVariantsvEXT");
	glVariantivEXT = (PFNGLVARIANTIVEXTPROC)wglGetProcAddress("glVariantivEXT");
	glVariantfvEXT = (PFNGLVARIANTFVEXTPROC)wglGetProcAddress("glVariantfvEXT");
	glVariantdvEXT = (PFNGLVARIANTDVEXTPROC)wglGetProcAddress("glVariantdvEXT");
	glVariantubvEXT = (PFNGLVARIANTUBVEXTPROC)wglGetProcAddress("glVariantubvEXT");
	glVariantusvEXT = (PFNGLVARIANTUSVEXTPROC)wglGetProcAddress("glVariantusvEXT");
	glVariantuivEXT = (PFNGLVARIANTUIVEXTPROC)wglGetProcAddress("glVariantuivEXT");
	glVariantPointerEXT = (PFNGLVARIANTPOINTEREXTPROC)wglGetProcAddress("glVariantPointerEXT");
	glEnableVariantClientStateEXT = (PFNGLENABLEVARIANTCLIENTSTATEEXTPROC)wglGetProcAddress("glEnableVariantClientStateEXT");
	glDisableVariantClientStateEXT = (PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC)wglGetProcAddress("glDisableVariantClientStateEXT");
	glBindLightParameterEXT = (PFNGLBINDLIGHTPARAMETEREXTPROC)wglGetProcAddress("glBindLightParameterEXT");
	glBindMaterialParameterEXT = (PFNGLBINDMATERIALPARAMETEREXTPROC)wglGetProcAddress("glBindMaterialParameterEXT");
	glBindTexGenParameterEXT = (PFNGLBINDTEXGENPARAMETEREXTPROC)wglGetProcAddress("glBindTexGenParameterEXT");
	glBindTextureUnitParameterEXT = (PFNGLBINDTEXTUREUNITPARAMETEREXTPROC)wglGetProcAddress("glBindTextureUnitParameterEXT");
	glBindParameterEXT = (PFNGLBINDPARAMETEREXTPROC)wglGetProcAddress("glBindParameterEXT");
	glIsVariantEnabledEXT = (PFNGLISVARIANTENABLEDEXTPROC)wglGetProcAddress("glIsVariantEnabledEXT");
	glGetVariantBooleanvEXT = (PFNGLGETVARIANTBOOLEANVEXTPROC)wglGetProcAddress("glGetVariantBooleanvEXT");
	glGetVariantIntegervEXT = (PFNGLGETVARIANTINTEGERVEXTPROC)wglGetProcAddress("glGetVariantIntegervEXT");
	glGetVariantFloatvEXT = (PFNGLGETVARIANTFLOATVEXTPROC)wglGetProcAddress("glGetVariantFloatvEXT");
	glGetVariantPointervEXT = (PFNGLGETVARIANTPOINTERVEXTPROC)wglGetProcAddress("glGetVariantPointervEXT");
	glGetInvariantBooleanvEXT = (PFNGLGETINVARIANTBOOLEANVEXTPROC)wglGetProcAddress("glGetInvariantBooleanvEXT");
	glGetInvariantIntegervEXT = (PFNGLGETINVARIANTINTEGERVEXTPROC)wglGetProcAddress("glGetInvariantIntegervEXT");
	glGetInvariantFloatvEXT = (PFNGLGETINVARIANTFLOATVEXTPROC)wglGetProcAddress("glGetInvariantFloatvEXT");
	glGetLocalConstantBooleanvEXT = (PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC)wglGetProcAddress("glGetLocalConstantBooleanvEXT");
	glGetLocalConstantIntegervEXT = (PFNGLGETLOCALCONSTANTINTEGERVEXTPROC)wglGetProcAddress("glGetLocalConstantIntegervEXT");
	glGetLocalConstantFloatvEXT = (PFNGLGETLOCALCONSTANTFLOATVEXTPROC)wglGetProcAddress("glGetLocalConstantFloatvEXT");
}

// GL_ATI_vertex_streams
PFNGLVERTEXSTREAM1SATIPROC glVertexStream1sATI;
PFNGLVERTEXSTREAM1SVATIPROC glVertexStream1svATI;
PFNGLVERTEXSTREAM1IATIPROC glVertexStream1iATI;
PFNGLVERTEXSTREAM1IVATIPROC glVertexStream1ivATI;
PFNGLVERTEXSTREAM1FATIPROC glVertexStream1fATI;
PFNGLVERTEXSTREAM1FVATIPROC glVertexStream1fvATI;
PFNGLVERTEXSTREAM1DATIPROC glVertexStream1dATI;
PFNGLVERTEXSTREAM1DVATIPROC glVertexStream1dvATI;
PFNGLVERTEXSTREAM2SATIPROC glVertexStream2sATI;
PFNGLVERTEXSTREAM2SVATIPROC glVertexStream2svATI;
PFNGLVERTEXSTREAM2IATIPROC glVertexStream2iATI;
PFNGLVERTEXSTREAM2IVATIPROC glVertexStream2ivATI;
PFNGLVERTEXSTREAM2FATIPROC glVertexStream2fATI;
PFNGLVERTEXSTREAM2FVATIPROC glVertexStream2fvATI;
PFNGLVERTEXSTREAM2DATIPROC glVertexStream2dATI;
PFNGLVERTEXSTREAM2DVATIPROC glVertexStream2dvATI;
PFNGLVERTEXSTREAM3SATIPROC glVertexStream3sATI;
PFNGLVERTEXSTREAM3SVATIPROC glVertexStream3svATI;
PFNGLVERTEXSTREAM3IATIPROC glVertexStream3iATI;
PFNGLVERTEXSTREAM3IVATIPROC glVertexStream3ivATI;
PFNGLVERTEXSTREAM3FATIPROC glVertexStream3fATI;
PFNGLVERTEXSTREAM3FVATIPROC glVertexStream3fvATI;
PFNGLVERTEXSTREAM3DATIPROC glVertexStream3dATI;
PFNGLVERTEXSTREAM3DVATIPROC glVertexStream3dvATI;
PFNGLVERTEXSTREAM4SATIPROC glVertexStream4sATI;
PFNGLVERTEXSTREAM4SVATIPROC glVertexStream4svATI;
PFNGLVERTEXSTREAM4IATIPROC glVertexStream4iATI;
PFNGLVERTEXSTREAM4IVATIPROC glVertexStream4ivATI;
PFNGLVERTEXSTREAM4FATIPROC glVertexStream4fATI;
PFNGLVERTEXSTREAM4FVATIPROC glVertexStream4fvATI;
PFNGLVERTEXSTREAM4DATIPROC glVertexStream4dATI;
PFNGLVERTEXSTREAM4DVATIPROC glVertexStream4dvATI;
PFNGLNORMALSTREAM3BATIPROC glNormalStream3bATI;
PFNGLNORMALSTREAM3BVATIPROC glNormalStream3bvATI;
PFNGLNORMALSTREAM3SATIPROC glNormalStream3sATI;
PFNGLNORMALSTREAM3SVATIPROC glNormalStream3svATI;
PFNGLNORMALSTREAM3IATIPROC glNormalStream3iATI;
PFNGLNORMALSTREAM3IVATIPROC glNormalStream3ivATI;
PFNGLNORMALSTREAM3FATIPROC glNormalStream3fATI;
PFNGLNORMALSTREAM3FVATIPROC glNormalStream3fvATI;
PFNGLNORMALSTREAM3DATIPROC glNormalStream3dATI;
PFNGLNORMALSTREAM3DVATIPROC glNormalStream3dvATI;
PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC glClientActiveVertexStreamATI;
PFNGLVERTEXBLENDENVIATIPROC glVertexBlendEnviATI;
PFNGLVERTEXBLENDENVFATIPROC glVertexBlendEnvfATI;

void glelp::init_GL_ATI_vertex_streams()
{
	if(!glelpInternal::checkAvailable("GL_ATI_vertex_streams"))
		return;

	glVertexStream1sATI = (PFNGLVERTEXSTREAM1SATIPROC)wglGetProcAddress("glVertexStream1sATI");
	glVertexStream1svATI = (PFNGLVERTEXSTREAM1SVATIPROC)wglGetProcAddress("glVertexStream1svATI");
	glVertexStream1iATI = (PFNGLVERTEXSTREAM1IATIPROC)wglGetProcAddress("glVertexStream1iATI");
	glVertexStream1ivATI = (PFNGLVERTEXSTREAM1IVATIPROC)wglGetProcAddress("glVertexStream1ivATI");
	glVertexStream1fATI = (PFNGLVERTEXSTREAM1FATIPROC)wglGetProcAddress("glVertexStream1fATI");
	glVertexStream1fvATI = (PFNGLVERTEXSTREAM1FVATIPROC)wglGetProcAddress("glVertexStream1fvATI");
	glVertexStream1dATI = (PFNGLVERTEXSTREAM1DATIPROC)wglGetProcAddress("glVertexStream1dATI");
	glVertexStream1dvATI = (PFNGLVERTEXSTREAM1DVATIPROC)wglGetProcAddress("glVertexStream1dvATI");
	glVertexStream2sATI = (PFNGLVERTEXSTREAM2SATIPROC)wglGetProcAddress("glVertexStream2sATI");
	glVertexStream2svATI = (PFNGLVERTEXSTREAM2SVATIPROC)wglGetProcAddress("glVertexStream2svATI");
	glVertexStream2iATI = (PFNGLVERTEXSTREAM2IATIPROC)wglGetProcAddress("glVertexStream2iATI");
	glVertexStream2ivATI = (PFNGLVERTEXSTREAM2IVATIPROC)wglGetProcAddress("glVertexStream2ivATI");
	glVertexStream2fATI = (PFNGLVERTEXSTREAM2FATIPROC)wglGetProcAddress("glVertexStream2fATI");
	glVertexStream2fvATI = (PFNGLVERTEXSTREAM2FVATIPROC)wglGetProcAddress("glVertexStream2fvATI");
	glVertexStream2dATI = (PFNGLVERTEXSTREAM2DATIPROC)wglGetProcAddress("glVertexStream2dATI");
	glVertexStream2dvATI = (PFNGLVERTEXSTREAM2DVATIPROC)wglGetProcAddress("glVertexStream2dvATI");
	glVertexStream3sATI = (PFNGLVERTEXSTREAM3SATIPROC)wglGetProcAddress("glVertexStream3sATI");
	glVertexStream3svATI = (PFNGLVERTEXSTREAM3SVATIPROC)wglGetProcAddress("glVertexStream3svATI");
	glVertexStream3iATI = (PFNGLVERTEXSTREAM3IATIPROC)wglGetProcAddress("glVertexStream3iATI");
	glVertexStream3ivATI = (PFNGLVERTEXSTREAM3IVATIPROC)wglGetProcAddress("glVertexStream3ivATI");
	glVertexStream3fATI = (PFNGLVERTEXSTREAM3FATIPROC)wglGetProcAddress("glVertexStream3fATI");
	glVertexStream3fvATI = (PFNGLVERTEXSTREAM3FVATIPROC)wglGetProcAddress("glVertexStream3fvATI");
	glVertexStream3dATI = (PFNGLVERTEXSTREAM3DATIPROC)wglGetProcAddress("glVertexStream3dATI");
	glVertexStream3dvATI = (PFNGLVERTEXSTREAM3DVATIPROC)wglGetProcAddress("glVertexStream3dvATI");
	glVertexStream4sATI = (PFNGLVERTEXSTREAM4SATIPROC)wglGetProcAddress("glVertexStream4sATI");
	glVertexStream4svATI = (PFNGLVERTEXSTREAM4SVATIPROC)wglGetProcAddress("glVertexStream4svATI");
	glVertexStream4iATI = (PFNGLVERTEXSTREAM4IATIPROC)wglGetProcAddress("glVertexStream4iATI");
	glVertexStream4ivATI = (PFNGLVERTEXSTREAM4IVATIPROC)wglGetProcAddress("glVertexStream4ivATI");
	glVertexStream4fATI = (PFNGLVERTEXSTREAM4FATIPROC)wglGetProcAddress("glVertexStream4fATI");
	glVertexStream4fvATI = (PFNGLVERTEXSTREAM4FVATIPROC)wglGetProcAddress("glVertexStream4fvATI");
	glVertexStream4dATI = (PFNGLVERTEXSTREAM4DATIPROC)wglGetProcAddress("glVertexStream4dATI");
	glVertexStream4dvATI = (PFNGLVERTEXSTREAM4DVATIPROC)wglGetProcAddress("glVertexStream4dvATI");
	glNormalStream3bATI = (PFNGLNORMALSTREAM3BATIPROC)wglGetProcAddress("glNormalStream3bATI");
	glNormalStream3bvATI = (PFNGLNORMALSTREAM3BVATIPROC)wglGetProcAddress("glNormalStream3bvATI");
	glNormalStream3sATI = (PFNGLNORMALSTREAM3SATIPROC)wglGetProcAddress("glNormalStream3sATI");
	glNormalStream3svATI = (PFNGLNORMALSTREAM3SVATIPROC)wglGetProcAddress("glNormalStream3svATI");
	glNormalStream3iATI = (PFNGLNORMALSTREAM3IATIPROC)wglGetProcAddress("glNormalStream3iATI");
	glNormalStream3ivATI = (PFNGLNORMALSTREAM3IVATIPROC)wglGetProcAddress("glNormalStream3ivATI");
	glNormalStream3fATI = (PFNGLNORMALSTREAM3FATIPROC)wglGetProcAddress("glNormalStream3fATI");
	glNormalStream3fvATI = (PFNGLNORMALSTREAM3FVATIPROC)wglGetProcAddress("glNormalStream3fvATI");
	glNormalStream3dATI = (PFNGLNORMALSTREAM3DATIPROC)wglGetProcAddress("glNormalStream3dATI");
	glNormalStream3dvATI = (PFNGLNORMALSTREAM3DVATIPROC)wglGetProcAddress("glNormalStream3dvATI");
	glClientActiveVertexStreamATI = (PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC)wglGetProcAddress("glClientActiveVertexStreamATI");
	glVertexBlendEnviATI = (PFNGLVERTEXBLENDENVIATIPROC)wglGetProcAddress("glVertexBlendEnviATI");
	glVertexBlendEnvfATI = (PFNGLVERTEXBLENDENVFATIPROC)wglGetProcAddress("glVertexBlendEnvfATI");
}

// GL_ATI_element_array
PFNGLELEMENTPOINTERATIPROC glElementPointerATI;
PFNGLDRAWELEMENTARRAYATIPROC glDrawElementArrayATI;
PFNGLDRAWRANGEELEMENTARRAYATIPROC glDrawRangeElementArrayATI;

void glelp::init_GL_ATI_element_array()
{
	if(!glelpInternal::checkAvailable("GL_ATI_element_array"))
		return;

	glElementPointerATI = (PFNGLELEMENTPOINTERATIPROC)wglGetProcAddress("glElementPointerATI");
	glDrawElementArrayATI = (PFNGLDRAWELEMENTARRAYATIPROC)wglGetProcAddress("glDrawElementArrayATI");
	glDrawRangeElementArrayATI = (PFNGLDRAWRANGEELEMENTARRAYATIPROC)wglGetProcAddress("glDrawRangeElementArrayATI");
}

// GL_SUN_mesh_array
PFNGLDRAWMESHARRAYSSUNPROC glDrawMeshArraysSUN;

void glelp::init_GL_SUN_mesh_array()
{
	if(!glelpInternal::checkAvailable("GL_SUN_mesh_array"))
		return;

	glDrawMeshArraysSUN = (PFNGLDRAWMESHARRAYSSUNPROC)wglGetProcAddress("glDrawMeshArraysSUN");
}

// GL_SUN_slice_accum

void glelp::init_GL_SUN_slice_accum()
{
	if(!glelpInternal::checkAvailable("GL_SUN_slice_accum"))
		return;

}

// GL_NV_multisample_filter_hint

void glelp::init_GL_NV_multisample_filter_hint()
{
	if(!glelpInternal::checkAvailable("GL_NV_multisample_filter_hint"))
		return;

}

// GL_NV_depth_clamp

void glelp::init_GL_NV_depth_clamp()
{
	if(!glelpInternal::checkAvailable("GL_NV_depth_clamp"))
		return;

}

// GL_NV_occlusion_query
PFNGLGENOCCLUSIONQUERIESNVPROC glGenOcclusionQueriesNV;
PFNGLDELETEOCCLUSIONQUERIESNVPROC glDeleteOcclusionQueriesNV;
PFNGLISOCCLUSIONQUERYNVPROC glIsOcclusionQueryNV;
PFNGLBEGINOCCLUSIONQUERYNVPROC glBeginOcclusionQueryNV;
PFNGLENDOCCLUSIONQUERYNVPROC glEndOcclusionQueryNV;
PFNGLGETOCCLUSIONQUERYIVNVPROC glGetOcclusionQueryivNV;
PFNGLGETOCCLUSIONQUERYUIVNVPROC glGetOcclusionQueryuivNV;

void glelp::init_GL_NV_occlusion_query()
{
	if(!glelpInternal::checkAvailable("GL_NV_occlusion_query"))
		return;

	glGenOcclusionQueriesNV = (PFNGLGENOCCLUSIONQUERIESNVPROC)wglGetProcAddress("glGenOcclusionQueriesNV");
	glDeleteOcclusionQueriesNV = (PFNGLDELETEOCCLUSIONQUERIESNVPROC)wglGetProcAddress("glDeleteOcclusionQueriesNV");
	glIsOcclusionQueryNV = (PFNGLISOCCLUSIONQUERYNVPROC)wglGetProcAddress("glIsOcclusionQueryNV");
	glBeginOcclusionQueryNV = (PFNGLBEGINOCCLUSIONQUERYNVPROC)wglGetProcAddress("glBeginOcclusionQueryNV");
	glEndOcclusionQueryNV = (PFNGLENDOCCLUSIONQUERYNVPROC)wglGetProcAddress("glEndOcclusionQueryNV");
	glGetOcclusionQueryivNV = (PFNGLGETOCCLUSIONQUERYIVNVPROC)wglGetProcAddress("glGetOcclusionQueryivNV");
	glGetOcclusionQueryuivNV = (PFNGLGETOCCLUSIONQUERYUIVNVPROC)wglGetProcAddress("glGetOcclusionQueryuivNV");
}

// GL_NV_point_sprite
PFNGLPOINTPARAMETERINVPROC glPointParameteriNV;
PFNGLPOINTPARAMETERIVNVPROC glPointParameterivNV;

void glelp::init_GL_NV_point_sprite()
{
	if(!glelpInternal::checkAvailable("GL_NV_point_sprite"))
		return;

	glPointParameteriNV = (PFNGLPOINTPARAMETERINVPROC)wglGetProcAddress("glPointParameteriNV");
	glPointParameterivNV = (PFNGLPOINTPARAMETERIVNVPROC)wglGetProcAddress("glPointParameterivNV");
}

// GL_NV_texture_shader3

void glelp::init_GL_NV_texture_shader3()
{
	if(!glelpInternal::checkAvailable("GL_NV_texture_shader3"))
		return;

}

// GL_NV_vertex_program1_1

void glelp::init_GL_NV_vertex_program1_1()
{
	if(!glelpInternal::checkAvailable("GL_NV_vertex_program1_1"))
		return;

}

// GL_EXT_shadow_funcs

void glelp::init_GL_EXT_shadow_funcs()
{
	if(!glelpInternal::checkAvailable("GL_EXT_shadow_funcs"))
		return;

}

// GL_EXT_stencil_two_side
PFNGLACTIVESTENCILFACEEXTPROC glActiveStencilFaceEXT;

void glelp::init_GL_EXT_stencil_two_side()
{
	if(!glelpInternal::checkAvailable("GL_EXT_stencil_two_side"))
		return;

	glActiveStencilFaceEXT = (PFNGLACTIVESTENCILFACEEXTPROC)wglGetProcAddress("glActiveStencilFaceEXT");
}

// GL_ATI_text_fragment_shader

void glelp::init_GL_ATI_text_fragment_shader()
{
	if(!glelpInternal::checkAvailable("GL_ATI_text_fragment_shader"))
		return;

}

// GL_APPLE_client_storage

void glelp::init_GL_APPLE_client_storage()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_client_storage"))
		return;

}

// GL_APPLE_element_array
PFNGLELEMENTPOINTERAPPLEPROC glElementPointerAPPLE;
PFNGLDRAWELEMENTARRAYAPPLEPROC glDrawElementArrayAPPLE;
PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC glDrawRangeElementArrayAPPLE;
PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC glMultiDrawElementArrayAPPLE;
PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC glMultiDrawRangeElementArrayAPPLE;

void glelp::init_GL_APPLE_element_array()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_element_array"))
		return;

	glElementPointerAPPLE = (PFNGLELEMENTPOINTERAPPLEPROC)wglGetProcAddress("glElementPointerAPPLE");
	glDrawElementArrayAPPLE = (PFNGLDRAWELEMENTARRAYAPPLEPROC)wglGetProcAddress("glDrawElementArrayAPPLE");
	glDrawRangeElementArrayAPPLE = (PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)wglGetProcAddress("glDrawRangeElementArrayAPPLE");
	glMultiDrawElementArrayAPPLE = (PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)wglGetProcAddress("glMultiDrawElementArrayAPPLE");
	glMultiDrawRangeElementArrayAPPLE = (PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)wglGetProcAddress("glMultiDrawRangeElementArrayAPPLE");
}

// GL_APPLE_fence
PFNGLGENFENCESAPPLEPROC glGenFencesAPPLE;
PFNGLDELETEFENCESAPPLEPROC glDeleteFencesAPPLE;
PFNGLSETFENCEAPPLEPROC glSetFenceAPPLE;
PFNGLISFENCEAPPLEPROC glIsFenceAPPLE;
PFNGLTESTFENCEAPPLEPROC glTestFenceAPPLE;
PFNGLFINISHFENCEAPPLEPROC glFinishFenceAPPLE;
PFNGLTESTOBJECTAPPLEPROC glTestObjectAPPLE;
PFNGLFINISHOBJECTAPPLEPROC glFinishObjectAPPLE;

void glelp::init_GL_APPLE_fence()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_fence"))
		return;

	glGenFencesAPPLE = (PFNGLGENFENCESAPPLEPROC)wglGetProcAddress("glGenFencesAPPLE");
	glDeleteFencesAPPLE = (PFNGLDELETEFENCESAPPLEPROC)wglGetProcAddress("glDeleteFencesAPPLE");
	glSetFenceAPPLE = (PFNGLSETFENCEAPPLEPROC)wglGetProcAddress("glSetFenceAPPLE");
	glIsFenceAPPLE = (PFNGLISFENCEAPPLEPROC)wglGetProcAddress("glIsFenceAPPLE");
	glTestFenceAPPLE = (PFNGLTESTFENCEAPPLEPROC)wglGetProcAddress("glTestFenceAPPLE");
	glFinishFenceAPPLE = (PFNGLFINISHFENCEAPPLEPROC)wglGetProcAddress("glFinishFenceAPPLE");
	glTestObjectAPPLE = (PFNGLTESTOBJECTAPPLEPROC)wglGetProcAddress("glTestObjectAPPLE");
	glFinishObjectAPPLE = (PFNGLFINISHOBJECTAPPLEPROC)wglGetProcAddress("glFinishObjectAPPLE");
}

// GL_APPLE_vertex_array_object
PFNGLBINDVERTEXARRAYAPPLEPROC glBindVertexArrayAPPLE;
PFNGLDELETEVERTEXARRAYSAPPLEPROC glDeleteVertexArraysAPPLE;
PFNGLGENVERTEXARRAYSAPPLEPROC glGenVertexArraysAPPLE;
PFNGLISVERTEXARRAYAPPLEPROC glIsVertexArrayAPPLE;

void glelp::init_GL_APPLE_vertex_array_object()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_vertex_array_object"))
		return;

	glBindVertexArrayAPPLE = (PFNGLBINDVERTEXARRAYAPPLEPROC)wglGetProcAddress("glBindVertexArrayAPPLE");
	glDeleteVertexArraysAPPLE = (PFNGLDELETEVERTEXARRAYSAPPLEPROC)wglGetProcAddress("glDeleteVertexArraysAPPLE");
	glGenVertexArraysAPPLE = (PFNGLGENVERTEXARRAYSAPPLEPROC)wglGetProcAddress("glGenVertexArraysAPPLE");
	glIsVertexArrayAPPLE = (PFNGLISVERTEXARRAYAPPLEPROC)wglGetProcAddress("glIsVertexArrayAPPLE");
}

// GL_APPLE_vertex_array_range
PFNGLVERTEXARRAYRANGEAPPLEPROC glVertexArrayRangeAPPLE;
PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC glFlushVertexArrayRangeAPPLE;
PFNGLVERTEXARRAYPARAMETERIAPPLEPROC glVertexArrayParameteriAPPLE;

void glelp::init_GL_APPLE_vertex_array_range()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_vertex_array_range"))
		return;

	glVertexArrayRangeAPPLE = (PFNGLVERTEXARRAYRANGEAPPLEPROC)wglGetProcAddress("glVertexArrayRangeAPPLE");
	glFlushVertexArrayRangeAPPLE = (PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)wglGetProcAddress("glFlushVertexArrayRangeAPPLE");
	glVertexArrayParameteriAPPLE = (PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)wglGetProcAddress("glVertexArrayParameteriAPPLE");
}

// GL_APPLE_ycbcr_422

void glelp::init_GL_APPLE_ycbcr_422()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_ycbcr_422"))
		return;

}

// GL_S3_s3tc

void glelp::init_GL_S3_s3tc()
{
	if(!glelpInternal::checkAvailable("GL_S3_s3tc"))
		return;

}

// GL_ATI_draw_buffers
PFNGLDRAWBUFFERSATIPROC glDrawBuffersATI;

void glelp::init_GL_ATI_draw_buffers()
{
	if(!glelpInternal::checkAvailable("GL_ATI_draw_buffers"))
		return;

	glDrawBuffersATI = (PFNGLDRAWBUFFERSATIPROC)wglGetProcAddress("glDrawBuffersATI");
}

// GL_ATI_pixel_format_float

void glelp::init_GL_ATI_pixel_format_float()
{
	if(!glelpInternal::checkAvailable("GL_ATI_pixel_format_float"))
		return;

}

// GL_ATI_texture_env_combine3

void glelp::init_GL_ATI_texture_env_combine3()
{
	if(!glelpInternal::checkAvailable("GL_ATI_texture_env_combine3"))
		return;

}

// GL_ATI_texture_float

void glelp::init_GL_ATI_texture_float()
{
	if(!glelpInternal::checkAvailable("GL_ATI_texture_float"))
		return;

}

// GL_NV_float_buffer

void glelp::init_GL_NV_float_buffer()
{
	if(!glelpInternal::checkAvailable("GL_NV_float_buffer"))
		return;

}

// GL_NV_fragment_program
PFNGLPROGRAMNAMEDPARAMETER4FNVPROC glProgramNamedParameter4fNV;
PFNGLPROGRAMNAMEDPARAMETER4DNVPROC glProgramNamedParameter4dNV;
PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC glProgramNamedParameter4fvNV;
PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC glProgramNamedParameter4dvNV;
PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC glGetProgramNamedParameterfvNV;
PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC glGetProgramNamedParameterdvNV;

void glelp::init_GL_NV_fragment_program()
{
	if(!glelpInternal::checkAvailable("GL_NV_fragment_program"))
		return;

	glProgramNamedParameter4fNV = (PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)wglGetProcAddress("glProgramNamedParameter4fNV");
	glProgramNamedParameter4dNV = (PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)wglGetProcAddress("glProgramNamedParameter4dNV");
	glProgramNamedParameter4fvNV = (PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)wglGetProcAddress("glProgramNamedParameter4fvNV");
	glProgramNamedParameter4dvNV = (PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)wglGetProcAddress("glProgramNamedParameter4dvNV");
	glGetProgramNamedParameterfvNV = (PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)wglGetProcAddress("glGetProgramNamedParameterfvNV");
	glGetProgramNamedParameterdvNV = (PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)wglGetProcAddress("glGetProgramNamedParameterdvNV");
}

// GL_NV_half_float
PFNGLVERTEX2HNVPROC glVertex2hNV;
PFNGLVERTEX2HVNVPROC glVertex2hvNV;
PFNGLVERTEX3HNVPROC glVertex3hNV;
PFNGLVERTEX3HVNVPROC glVertex3hvNV;
PFNGLVERTEX4HNVPROC glVertex4hNV;
PFNGLVERTEX4HVNVPROC glVertex4hvNV;
PFNGLNORMAL3HNVPROC glNormal3hNV;
PFNGLNORMAL3HVNVPROC glNormal3hvNV;
PFNGLCOLOR3HNVPROC glColor3hNV;
PFNGLCOLOR3HVNVPROC glColor3hvNV;
PFNGLCOLOR4HNVPROC glColor4hNV;
PFNGLCOLOR4HVNVPROC glColor4hvNV;
PFNGLTEXCOORD1HNVPROC glTexCoord1hNV;
PFNGLTEXCOORD1HVNVPROC glTexCoord1hvNV;
PFNGLTEXCOORD2HNVPROC glTexCoord2hNV;
PFNGLTEXCOORD2HVNVPROC glTexCoord2hvNV;
PFNGLTEXCOORD3HNVPROC glTexCoord3hNV;
PFNGLTEXCOORD3HVNVPROC glTexCoord3hvNV;
PFNGLTEXCOORD4HNVPROC glTexCoord4hNV;
PFNGLTEXCOORD4HVNVPROC glTexCoord4hvNV;
PFNGLMULTITEXCOORD1HNVPROC glMultiTexCoord1hNV;
PFNGLMULTITEXCOORD1HVNVPROC glMultiTexCoord1hvNV;
PFNGLMULTITEXCOORD2HNVPROC glMultiTexCoord2hNV;
PFNGLMULTITEXCOORD2HVNVPROC glMultiTexCoord2hvNV;
PFNGLMULTITEXCOORD3HNVPROC glMultiTexCoord3hNV;
PFNGLMULTITEXCOORD3HVNVPROC glMultiTexCoord3hvNV;
PFNGLMULTITEXCOORD4HNVPROC glMultiTexCoord4hNV;
PFNGLMULTITEXCOORD4HVNVPROC glMultiTexCoord4hvNV;
PFNGLFOGCOORDHNVPROC glFogCoordhNV;
PFNGLFOGCOORDHVNVPROC glFogCoordhvNV;
PFNGLSECONDARYCOLOR3HNVPROC glSecondaryColor3hNV;
PFNGLSECONDARYCOLOR3HVNVPROC glSecondaryColor3hvNV;
PFNGLVERTEXWEIGHTHNVPROC glVertexWeighthNV;
PFNGLVERTEXWEIGHTHVNVPROC glVertexWeighthvNV;
PFNGLVERTEXATTRIB1HNVPROC glVertexAttrib1hNV;
PFNGLVERTEXATTRIB1HVNVPROC glVertexAttrib1hvNV;
PFNGLVERTEXATTRIB2HNVPROC glVertexAttrib2hNV;
PFNGLVERTEXATTRIB2HVNVPROC glVertexAttrib2hvNV;
PFNGLVERTEXATTRIB3HNVPROC glVertexAttrib3hNV;
PFNGLVERTEXATTRIB3HVNVPROC glVertexAttrib3hvNV;
PFNGLVERTEXATTRIB4HNVPROC glVertexAttrib4hNV;
PFNGLVERTEXATTRIB4HVNVPROC glVertexAttrib4hvNV;
PFNGLVERTEXATTRIBS1HVNVPROC glVertexAttribs1hvNV;
PFNGLVERTEXATTRIBS2HVNVPROC glVertexAttribs2hvNV;
PFNGLVERTEXATTRIBS3HVNVPROC glVertexAttribs3hvNV;
PFNGLVERTEXATTRIBS4HVNVPROC glVertexAttribs4hvNV;

void glelp::init_GL_NV_half_float()
{
	if(!glelpInternal::checkAvailable("GL_NV_half_float"))
		return;

	glVertex2hNV = (PFNGLVERTEX2HNVPROC)wglGetProcAddress("glVertex2hNV");
	glVertex2hvNV = (PFNGLVERTEX2HVNVPROC)wglGetProcAddress("glVertex2hvNV");
	glVertex3hNV = (PFNGLVERTEX3HNVPROC)wglGetProcAddress("glVertex3hNV");
	glVertex3hvNV = (PFNGLVERTEX3HVNVPROC)wglGetProcAddress("glVertex3hvNV");
	glVertex4hNV = (PFNGLVERTEX4HNVPROC)wglGetProcAddress("glVertex4hNV");
	glVertex4hvNV = (PFNGLVERTEX4HVNVPROC)wglGetProcAddress("glVertex4hvNV");
	glNormal3hNV = (PFNGLNORMAL3HNVPROC)wglGetProcAddress("glNormal3hNV");
	glNormal3hvNV = (PFNGLNORMAL3HVNVPROC)wglGetProcAddress("glNormal3hvNV");
	glColor3hNV = (PFNGLCOLOR3HNVPROC)wglGetProcAddress("glColor3hNV");
	glColor3hvNV = (PFNGLCOLOR3HVNVPROC)wglGetProcAddress("glColor3hvNV");
	glColor4hNV = (PFNGLCOLOR4HNVPROC)wglGetProcAddress("glColor4hNV");
	glColor4hvNV = (PFNGLCOLOR4HVNVPROC)wglGetProcAddress("glColor4hvNV");
	glTexCoord1hNV = (PFNGLTEXCOORD1HNVPROC)wglGetProcAddress("glTexCoord1hNV");
	glTexCoord1hvNV = (PFNGLTEXCOORD1HVNVPROC)wglGetProcAddress("glTexCoord1hvNV");
	glTexCoord2hNV = (PFNGLTEXCOORD2HNVPROC)wglGetProcAddress("glTexCoord2hNV");
	glTexCoord2hvNV = (PFNGLTEXCOORD2HVNVPROC)wglGetProcAddress("glTexCoord2hvNV");
	glTexCoord3hNV = (PFNGLTEXCOORD3HNVPROC)wglGetProcAddress("glTexCoord3hNV");
	glTexCoord3hvNV = (PFNGLTEXCOORD3HVNVPROC)wglGetProcAddress("glTexCoord3hvNV");
	glTexCoord4hNV = (PFNGLTEXCOORD4HNVPROC)wglGetProcAddress("glTexCoord4hNV");
	glTexCoord4hvNV = (PFNGLTEXCOORD4HVNVPROC)wglGetProcAddress("glTexCoord4hvNV");
	glMultiTexCoord1hNV = (PFNGLMULTITEXCOORD1HNVPROC)wglGetProcAddress("glMultiTexCoord1hNV");
	glMultiTexCoord1hvNV = (PFNGLMULTITEXCOORD1HVNVPROC)wglGetProcAddress("glMultiTexCoord1hvNV");
	glMultiTexCoord2hNV = (PFNGLMULTITEXCOORD2HNVPROC)wglGetProcAddress("glMultiTexCoord2hNV");
	glMultiTexCoord2hvNV = (PFNGLMULTITEXCOORD2HVNVPROC)wglGetProcAddress("glMultiTexCoord2hvNV");
	glMultiTexCoord3hNV = (PFNGLMULTITEXCOORD3HNVPROC)wglGetProcAddress("glMultiTexCoord3hNV");
	glMultiTexCoord3hvNV = (PFNGLMULTITEXCOORD3HVNVPROC)wglGetProcAddress("glMultiTexCoord3hvNV");
	glMultiTexCoord4hNV = (PFNGLMULTITEXCOORD4HNVPROC)wglGetProcAddress("glMultiTexCoord4hNV");
	glMultiTexCoord4hvNV = (PFNGLMULTITEXCOORD4HVNVPROC)wglGetProcAddress("glMultiTexCoord4hvNV");
	glFogCoordhNV = (PFNGLFOGCOORDHNVPROC)wglGetProcAddress("glFogCoordhNV");
	glFogCoordhvNV = (PFNGLFOGCOORDHVNVPROC)wglGetProcAddress("glFogCoordhvNV");
	glSecondaryColor3hNV = (PFNGLSECONDARYCOLOR3HNVPROC)wglGetProcAddress("glSecondaryColor3hNV");
	glSecondaryColor3hvNV = (PFNGLSECONDARYCOLOR3HVNVPROC)wglGetProcAddress("glSecondaryColor3hvNV");
	glVertexWeighthNV = (PFNGLVERTEXWEIGHTHNVPROC)wglGetProcAddress("glVertexWeighthNV");
	glVertexWeighthvNV = (PFNGLVERTEXWEIGHTHVNVPROC)wglGetProcAddress("glVertexWeighthvNV");
	glVertexAttrib1hNV = (PFNGLVERTEXATTRIB1HNVPROC)wglGetProcAddress("glVertexAttrib1hNV");
	glVertexAttrib1hvNV = (PFNGLVERTEXATTRIB1HVNVPROC)wglGetProcAddress("glVertexAttrib1hvNV");
	glVertexAttrib2hNV = (PFNGLVERTEXATTRIB2HNVPROC)wglGetProcAddress("glVertexAttrib2hNV");
	glVertexAttrib2hvNV = (PFNGLVERTEXATTRIB2HVNVPROC)wglGetProcAddress("glVertexAttrib2hvNV");
	glVertexAttrib3hNV = (PFNGLVERTEXATTRIB3HNVPROC)wglGetProcAddress("glVertexAttrib3hNV");
	glVertexAttrib3hvNV = (PFNGLVERTEXATTRIB3HVNVPROC)wglGetProcAddress("glVertexAttrib3hvNV");
	glVertexAttrib4hNV = (PFNGLVERTEXATTRIB4HNVPROC)wglGetProcAddress("glVertexAttrib4hNV");
	glVertexAttrib4hvNV = (PFNGLVERTEXATTRIB4HVNVPROC)wglGetProcAddress("glVertexAttrib4hvNV");
	glVertexAttribs1hvNV = (PFNGLVERTEXATTRIBS1HVNVPROC)wglGetProcAddress("glVertexAttribs1hvNV");
	glVertexAttribs2hvNV = (PFNGLVERTEXATTRIBS2HVNVPROC)wglGetProcAddress("glVertexAttribs2hvNV");
	glVertexAttribs3hvNV = (PFNGLVERTEXATTRIBS3HVNVPROC)wglGetProcAddress("glVertexAttribs3hvNV");
	glVertexAttribs4hvNV = (PFNGLVERTEXATTRIBS4HVNVPROC)wglGetProcAddress("glVertexAttribs4hvNV");
}

// GL_NV_pixel_data_range
PFNGLPIXELDATARANGENVPROC glPixelDataRangeNV;
PFNGLFLUSHPIXELDATARANGENVPROC glFlushPixelDataRangeNV;

void glelp::init_GL_NV_pixel_data_range()
{
	if(!glelpInternal::checkAvailable("GL_NV_pixel_data_range"))
		return;

	glPixelDataRangeNV = (PFNGLPIXELDATARANGENVPROC)wglGetProcAddress("glPixelDataRangeNV");
	glFlushPixelDataRangeNV = (PFNGLFLUSHPIXELDATARANGENVPROC)wglGetProcAddress("glFlushPixelDataRangeNV");
}

// GL_NV_primitive_restart
PFNGLPRIMITIVERESTARTNVPROC glPrimitiveRestartNV;
PFNGLPRIMITIVERESTARTINDEXNVPROC glPrimitiveRestartIndexNV;

void glelp::init_GL_NV_primitive_restart()
{
	if(!glelpInternal::checkAvailable("GL_NV_primitive_restart"))
		return;

	glPrimitiveRestartNV = (PFNGLPRIMITIVERESTARTNVPROC)wglGetProcAddress("glPrimitiveRestartNV");
	glPrimitiveRestartIndexNV = (PFNGLPRIMITIVERESTARTINDEXNVPROC)wglGetProcAddress("glPrimitiveRestartIndexNV");
}

// GL_NV_texture_expand_normal

void glelp::init_GL_NV_texture_expand_normal()
{
	if(!glelpInternal::checkAvailable("GL_NV_texture_expand_normal"))
		return;

}

// GL_NV_vertex_program2

void glelp::init_GL_NV_vertex_program2()
{
	if(!glelpInternal::checkAvailable("GL_NV_vertex_program2"))
		return;

}

// GL_ATI_map_object_buffer
PFNGLMAPOBJECTBUFFERATIPROC glMapObjectBufferATI;
PFNGLUNMAPOBJECTBUFFERATIPROC glUnmapObjectBufferATI;

void glelp::init_GL_ATI_map_object_buffer()
{
	if(!glelpInternal::checkAvailable("GL_ATI_map_object_buffer"))
		return;

	glMapObjectBufferATI = (PFNGLMAPOBJECTBUFFERATIPROC)wglGetProcAddress("glMapObjectBufferATI");
	glUnmapObjectBufferATI = (PFNGLUNMAPOBJECTBUFFERATIPROC)wglGetProcAddress("glUnmapObjectBufferATI");
}

// GL_ATI_separate_stencil
PFNGLSTENCILOPSEPARATEATIPROC glStencilOpSeparateATI;
PFNGLSTENCILFUNCSEPARATEATIPROC glStencilFuncSeparateATI;

void glelp::init_GL_ATI_separate_stencil()
{
	if(!glelpInternal::checkAvailable("GL_ATI_separate_stencil"))
		return;

	glStencilOpSeparateATI = (PFNGLSTENCILOPSEPARATEATIPROC)wglGetProcAddress("glStencilOpSeparateATI");
	glStencilFuncSeparateATI = (PFNGLSTENCILFUNCSEPARATEATIPROC)wglGetProcAddress("glStencilFuncSeparateATI");
}

// GL_ATI_vertex_attrib_array_object
PFNGLVERTEXATTRIBARRAYOBJECTATIPROC glVertexAttribArrayObjectATI;
PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC glGetVertexAttribArrayObjectfvATI;
PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC glGetVertexAttribArrayObjectivATI;

void glelp::init_GL_ATI_vertex_attrib_array_object()
{
	if(!glelpInternal::checkAvailable("GL_ATI_vertex_attrib_array_object"))
		return;

	glVertexAttribArrayObjectATI = (PFNGLVERTEXATTRIBARRAYOBJECTATIPROC)wglGetProcAddress("glVertexAttribArrayObjectATI");
	glGetVertexAttribArrayObjectfvATI = (PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC)wglGetProcAddress("glGetVertexAttribArrayObjectfvATI");
	glGetVertexAttribArrayObjectivATI = (PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC)wglGetProcAddress("glGetVertexAttribArrayObjectivATI");
}

// GL_OES_read_format

void glelp::init_GL_OES_read_format()
{
	if(!glelpInternal::checkAvailable("GL_OES_read_format"))
		return;

}

// GL_EXT_depth_bounds_test
PFNGLDEPTHBOUNDSEXTPROC glDepthBoundsEXT;

void glelp::init_GL_EXT_depth_bounds_test()
{
	if(!glelpInternal::checkAvailable("GL_EXT_depth_bounds_test"))
		return;

	glDepthBoundsEXT = (PFNGLDEPTHBOUNDSEXTPROC)wglGetProcAddress("glDepthBoundsEXT");
}

// GL_EXT_texture_mirror_clamp

void glelp::init_GL_EXT_texture_mirror_clamp()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_mirror_clamp"))
		return;

}

// GL_EXT_blend_equation_separate
PFNGLBLENDEQUATIONSEPARATEEXTPROC glBlendEquationSeparateEXT;

void glelp::init_GL_EXT_blend_equation_separate()
{
	if(!glelpInternal::checkAvailable("GL_EXT_blend_equation_separate"))
		return;

	glBlendEquationSeparateEXT = (PFNGLBLENDEQUATIONSEPARATEEXTPROC)wglGetProcAddress("glBlendEquationSeparateEXT");
}

// GL_MESA_pack_invert

void glelp::init_GL_MESA_pack_invert()
{
	if(!glelpInternal::checkAvailable("GL_MESA_pack_invert"))
		return;

}

// GL_MESA_ycbcr_texture

void glelp::init_GL_MESA_ycbcr_texture()
{
	if(!glelpInternal::checkAvailable("GL_MESA_ycbcr_texture"))
		return;

}

// GL_EXT_pixel_buffer_object

void glelp::init_GL_EXT_pixel_buffer_object()
{
	if(!glelpInternal::checkAvailable("GL_EXT_pixel_buffer_object"))
		return;

}

// GL_NV_fragment_program_option

void glelp::init_GL_NV_fragment_program_option()
{
	if(!glelpInternal::checkAvailable("GL_NV_fragment_program_option"))
		return;

}

// GL_NV_fragment_program2

void glelp::init_GL_NV_fragment_program2()
{
	if(!glelpInternal::checkAvailable("GL_NV_fragment_program2"))
		return;

}

// GL_NV_vertex_program2_option

void glelp::init_GL_NV_vertex_program2_option()
{
	if(!glelpInternal::checkAvailable("GL_NV_vertex_program2_option"))
		return;

}

// GL_NV_vertex_program3

void glelp::init_GL_NV_vertex_program3()
{
	if(!glelpInternal::checkAvailable("GL_NV_vertex_program3"))
		return;

}

// GL_EXT_framebuffer_object
PFNGLISRENDERBUFFEREXTPROC glIsRenderbufferEXT;
PFNGLBINDRENDERBUFFEREXTPROC glBindRenderbufferEXT;
PFNGLDELETERENDERBUFFERSEXTPROC glDeleteRenderbuffersEXT;
PFNGLGENRENDERBUFFERSEXTPROC glGenRenderbuffersEXT;
PFNGLRENDERBUFFERSTORAGEEXTPROC glRenderbufferStorageEXT;
PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC glGetRenderbufferParameterivEXT;
PFNGLISFRAMEBUFFEREXTPROC glIsFramebufferEXT;
PFNGLBINDFRAMEBUFFEREXTPROC glBindFramebufferEXT;
PFNGLDELETEFRAMEBUFFERSEXTPROC glDeleteFramebuffersEXT;
PFNGLGENFRAMEBUFFERSEXTPROC glGenFramebuffersEXT;
PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC glCheckFramebufferStatusEXT;
PFNGLFRAMEBUFFERTEXTURE1DEXTPROC glFramebufferTexture1DEXT;
PFNGLFRAMEBUFFERTEXTURE2DEXTPROC glFramebufferTexture2DEXT;
PFNGLFRAMEBUFFERTEXTURE3DEXTPROC glFramebufferTexture3DEXT;
PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC glFramebufferRenderbufferEXT;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glGetFramebufferAttachmentParameterivEXT;
PFNGLGENERATEMIPMAPEXTPROC glGenerateMipmapEXT;

void glelp::init_GL_EXT_framebuffer_object()
{
	if(!glelpInternal::checkAvailable("GL_EXT_framebuffer_object"))
		return;

	glIsRenderbufferEXT = (PFNGLISRENDERBUFFEREXTPROC)wglGetProcAddress("glIsRenderbufferEXT");
	glBindRenderbufferEXT = (PFNGLBINDRENDERBUFFEREXTPROC)wglGetProcAddress("glBindRenderbufferEXT");
	glDeleteRenderbuffersEXT = (PFNGLDELETERENDERBUFFERSEXTPROC)wglGetProcAddress("glDeleteRenderbuffersEXT");
	glGenRenderbuffersEXT = (PFNGLGENRENDERBUFFERSEXTPROC)wglGetProcAddress("glGenRenderbuffersEXT");
	glRenderbufferStorageEXT = (PFNGLRENDERBUFFERSTORAGEEXTPROC)wglGetProcAddress("glRenderbufferStorageEXT");
	glGetRenderbufferParameterivEXT = (PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC)wglGetProcAddress("glGetRenderbufferParameterivEXT");
	glIsFramebufferEXT = (PFNGLISFRAMEBUFFEREXTPROC)wglGetProcAddress("glIsFramebufferEXT");
	glBindFramebufferEXT = (PFNGLBINDFRAMEBUFFEREXTPROC)wglGetProcAddress("glBindFramebufferEXT");
	glDeleteFramebuffersEXT = (PFNGLDELETEFRAMEBUFFERSEXTPROC)wglGetProcAddress("glDeleteFramebuffersEXT");
	glGenFramebuffersEXT = (PFNGLGENFRAMEBUFFERSEXTPROC)wglGetProcAddress("glGenFramebuffersEXT");
	glCheckFramebufferStatusEXT = (PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC)wglGetProcAddress("glCheckFramebufferStatusEXT");
	glFramebufferTexture1DEXT = (PFNGLFRAMEBUFFERTEXTURE1DEXTPROC)wglGetProcAddress("glFramebufferTexture1DEXT");
	glFramebufferTexture2DEXT = (PFNGLFRAMEBUFFERTEXTURE2DEXTPROC)wglGetProcAddress("glFramebufferTexture2DEXT");
	glFramebufferTexture3DEXT = (PFNGLFRAMEBUFFERTEXTURE3DEXTPROC)wglGetProcAddress("glFramebufferTexture3DEXT");
	glFramebufferRenderbufferEXT = (PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC)wglGetProcAddress("glFramebufferRenderbufferEXT");
	glGetFramebufferAttachmentParameterivEXT = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)wglGetProcAddress("glGetFramebufferAttachmentParameterivEXT");
	glGenerateMipmapEXT = (PFNGLGENERATEMIPMAPEXTPROC)wglGetProcAddress("glGenerateMipmapEXT");
}

// GL_GREMEDY_string_marker
PFNGLSTRINGMARKERGREMEDYPROC glStringMarkerGREMEDY;

void glelp::init_GL_GREMEDY_string_marker()
{
	if(!glelpInternal::checkAvailable("GL_GREMEDY_string_marker"))
		return;

	glStringMarkerGREMEDY = (PFNGLSTRINGMARKERGREMEDYPROC)wglGetProcAddress("glStringMarkerGREMEDY");
}

// GL_EXT_packed_depth_stencil

void glelp::init_GL_EXT_packed_depth_stencil()
{
	if(!glelpInternal::checkAvailable("GL_EXT_packed_depth_stencil"))
		return;

}

// GL_EXT_stencil_clear_tag
PFNGLSTENCILCLEARTAGEXTPROC glStencilClearTagEXT;

void glelp::init_GL_EXT_stencil_clear_tag()
{
	if(!glelpInternal::checkAvailable("GL_EXT_stencil_clear_tag"))
		return;

	glStencilClearTagEXT = (PFNGLSTENCILCLEARTAGEXTPROC)wglGetProcAddress("glStencilClearTagEXT");
}

// GL_EXT_texture_sRGB

void glelp::init_GL_EXT_texture_sRGB()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_sRGB"))
		return;

}

// GL_EXT_framebuffer_blit
PFNGLBLITFRAMEBUFFEREXTPROC glBlitFramebufferEXT;

void glelp::init_GL_EXT_framebuffer_blit()
{
	if(!glelpInternal::checkAvailable("GL_EXT_framebuffer_blit"))
		return;

	glBlitFramebufferEXT = (PFNGLBLITFRAMEBUFFEREXTPROC)wglGetProcAddress("glBlitFramebufferEXT");
}

// GL_EXT_framebuffer_multisample
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glRenderbufferStorageMultisampleEXT;

void glelp::init_GL_EXT_framebuffer_multisample()
{
	if(!glelpInternal::checkAvailable("GL_EXT_framebuffer_multisample"))
		return;

	glRenderbufferStorageMultisampleEXT = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)wglGetProcAddress("glRenderbufferStorageMultisampleEXT");
}

// GL_MESAX_texture_stack

void glelp::init_GL_MESAX_texture_stack()
{
	if(!glelpInternal::checkAvailable("GL_MESAX_texture_stack"))
		return;

}

// GL_EXT_timer_query
PFNGLGETQUERYOBJECTI64VEXTPROC glGetQueryObjecti64vEXT;
PFNGLGETQUERYOBJECTUI64VEXTPROC glGetQueryObjectui64vEXT;

void glelp::init_GL_EXT_timer_query()
{
	if(!glelpInternal::checkAvailable("GL_EXT_timer_query"))
		return;

	glGetQueryObjecti64vEXT = (PFNGLGETQUERYOBJECTI64VEXTPROC)wglGetProcAddress("glGetQueryObjecti64vEXT");
	glGetQueryObjectui64vEXT = (PFNGLGETQUERYOBJECTUI64VEXTPROC)wglGetProcAddress("glGetQueryObjectui64vEXT");
}

// GL_EXT_gpu_program_parameters
PFNGLPROGRAMENVPARAMETERS4FVEXTPROC glProgramEnvParameters4fvEXT;
PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC glProgramLocalParameters4fvEXT;

void glelp::init_GL_EXT_gpu_program_parameters()
{
	if(!glelpInternal::checkAvailable("GL_EXT_gpu_program_parameters"))
		return;

	glProgramEnvParameters4fvEXT = (PFNGLPROGRAMENVPARAMETERS4FVEXTPROC)wglGetProcAddress("glProgramEnvParameters4fvEXT");
	glProgramLocalParameters4fvEXT = (PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC)wglGetProcAddress("glProgramLocalParameters4fvEXT");
}

// GL_APPLE_flush_buffer_range
PFNGLBUFFERPARAMETERIAPPLEPROC glBufferParameteriAPPLE;
PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC glFlushMappedBufferRangeAPPLE;

void glelp::init_GL_APPLE_flush_buffer_range()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_flush_buffer_range"))
		return;

	glBufferParameteriAPPLE = (PFNGLBUFFERPARAMETERIAPPLEPROC)wglGetProcAddress("glBufferParameteriAPPLE");
	glFlushMappedBufferRangeAPPLE = (PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC)wglGetProcAddress("glFlushMappedBufferRangeAPPLE");
}

// GL_NV_gpu_program4
PFNGLPROGRAMLOCALPARAMETERI4INVPROC glProgramLocalParameterI4iNV;
PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC glProgramLocalParameterI4ivNV;
PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC glProgramLocalParametersI4ivNV;
PFNGLPROGRAMLOCALPARAMETERI4UINVPROC glProgramLocalParameterI4uiNV;
PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC glProgramLocalParameterI4uivNV;
PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC glProgramLocalParametersI4uivNV;
PFNGLPROGRAMENVPARAMETERI4INVPROC glProgramEnvParameterI4iNV;
PFNGLPROGRAMENVPARAMETERI4IVNVPROC glProgramEnvParameterI4ivNV;
PFNGLPROGRAMENVPARAMETERSI4IVNVPROC glProgramEnvParametersI4ivNV;
PFNGLPROGRAMENVPARAMETERI4UINVPROC glProgramEnvParameterI4uiNV;
PFNGLPROGRAMENVPARAMETERI4UIVNVPROC glProgramEnvParameterI4uivNV;
PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC glProgramEnvParametersI4uivNV;
PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC glGetProgramLocalParameterIivNV;
PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC glGetProgramLocalParameterIuivNV;
PFNGLGETPROGRAMENVPARAMETERIIVNVPROC glGetProgramEnvParameterIivNV;
PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC glGetProgramEnvParameterIuivNV;

void glelp::init_GL_NV_gpu_program4()
{
	if(!glelpInternal::checkAvailable("GL_NV_gpu_program4"))
		return;

	glProgramLocalParameterI4iNV = (PFNGLPROGRAMLOCALPARAMETERI4INVPROC)wglGetProcAddress("glProgramLocalParameterI4iNV");
	glProgramLocalParameterI4ivNV = (PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC)wglGetProcAddress("glProgramLocalParameterI4ivNV");
	glProgramLocalParametersI4ivNV = (PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC)wglGetProcAddress("glProgramLocalParametersI4ivNV");
	glProgramLocalParameterI4uiNV = (PFNGLPROGRAMLOCALPARAMETERI4UINVPROC)wglGetProcAddress("glProgramLocalParameterI4uiNV");
	glProgramLocalParameterI4uivNV = (PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC)wglGetProcAddress("glProgramLocalParameterI4uivNV");
	glProgramLocalParametersI4uivNV = (PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC)wglGetProcAddress("glProgramLocalParametersI4uivNV");
	glProgramEnvParameterI4iNV = (PFNGLPROGRAMENVPARAMETERI4INVPROC)wglGetProcAddress("glProgramEnvParameterI4iNV");
	glProgramEnvParameterI4ivNV = (PFNGLPROGRAMENVPARAMETERI4IVNVPROC)wglGetProcAddress("glProgramEnvParameterI4ivNV");
	glProgramEnvParametersI4ivNV = (PFNGLPROGRAMENVPARAMETERSI4IVNVPROC)wglGetProcAddress("glProgramEnvParametersI4ivNV");
	glProgramEnvParameterI4uiNV = (PFNGLPROGRAMENVPARAMETERI4UINVPROC)wglGetProcAddress("glProgramEnvParameterI4uiNV");
	glProgramEnvParameterI4uivNV = (PFNGLPROGRAMENVPARAMETERI4UIVNVPROC)wglGetProcAddress("glProgramEnvParameterI4uivNV");
	glProgramEnvParametersI4uivNV = (PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC)wglGetProcAddress("glProgramEnvParametersI4uivNV");
	glGetProgramLocalParameterIivNV = (PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC)wglGetProcAddress("glGetProgramLocalParameterIivNV");
	glGetProgramLocalParameterIuivNV = (PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC)wglGetProcAddress("glGetProgramLocalParameterIuivNV");
	glGetProgramEnvParameterIivNV = (PFNGLGETPROGRAMENVPARAMETERIIVNVPROC)wglGetProcAddress("glGetProgramEnvParameterIivNV");
	glGetProgramEnvParameterIuivNV = (PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC)wglGetProcAddress("glGetProgramEnvParameterIuivNV");
}

// GL_NV_geometry_program4
PFNGLPROGRAMVERTEXLIMITNVPROC glProgramVertexLimitNV;
PFNGLFRAMEBUFFERTEXTUREEXTPROC glFramebufferTextureEXT;
PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC glFramebufferTextureLayerEXT;
PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC glFramebufferTextureFaceEXT;

void glelp::init_GL_NV_geometry_program4()
{
	if(!glelpInternal::checkAvailable("GL_NV_geometry_program4"))
		return;

	glProgramVertexLimitNV = (PFNGLPROGRAMVERTEXLIMITNVPROC)wglGetProcAddress("glProgramVertexLimitNV");
	glFramebufferTextureEXT = (PFNGLFRAMEBUFFERTEXTUREEXTPROC)wglGetProcAddress("glFramebufferTextureEXT");
	glFramebufferTextureLayerEXT = (PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC)wglGetProcAddress("glFramebufferTextureLayerEXT");
	glFramebufferTextureFaceEXT = (PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC)wglGetProcAddress("glFramebufferTextureFaceEXT");
}

// GL_EXT_geometry_shader4
PFNGLPROGRAMPARAMETERIEXTPROC glProgramParameteriEXT;

void glelp::init_GL_EXT_geometry_shader4()
{
	if(!glelpInternal::checkAvailable("GL_EXT_geometry_shader4"))
		return;

	glProgramParameteriEXT = (PFNGLPROGRAMPARAMETERIEXTPROC)wglGetProcAddress("glProgramParameteriEXT");
}

// GL_NV_vertex_program4
PFNGLVERTEXATTRIBI1IEXTPROC glVertexAttribI1iEXT;
PFNGLVERTEXATTRIBI2IEXTPROC glVertexAttribI2iEXT;
PFNGLVERTEXATTRIBI3IEXTPROC glVertexAttribI3iEXT;
PFNGLVERTEXATTRIBI4IEXTPROC glVertexAttribI4iEXT;
PFNGLVERTEXATTRIBI1UIEXTPROC glVertexAttribI1uiEXT;
PFNGLVERTEXATTRIBI2UIEXTPROC glVertexAttribI2uiEXT;
PFNGLVERTEXATTRIBI3UIEXTPROC glVertexAttribI3uiEXT;
PFNGLVERTEXATTRIBI4UIEXTPROC glVertexAttribI4uiEXT;
PFNGLVERTEXATTRIBI1IVEXTPROC glVertexAttribI1ivEXT;
PFNGLVERTEXATTRIBI2IVEXTPROC glVertexAttribI2ivEXT;
PFNGLVERTEXATTRIBI3IVEXTPROC glVertexAttribI3ivEXT;
PFNGLVERTEXATTRIBI4IVEXTPROC glVertexAttribI4ivEXT;
PFNGLVERTEXATTRIBI1UIVEXTPROC glVertexAttribI1uivEXT;
PFNGLVERTEXATTRIBI2UIVEXTPROC glVertexAttribI2uivEXT;
PFNGLVERTEXATTRIBI3UIVEXTPROC glVertexAttribI3uivEXT;
PFNGLVERTEXATTRIBI4UIVEXTPROC glVertexAttribI4uivEXT;
PFNGLVERTEXATTRIBI4BVEXTPROC glVertexAttribI4bvEXT;
PFNGLVERTEXATTRIBI4SVEXTPROC glVertexAttribI4svEXT;
PFNGLVERTEXATTRIBI4UBVEXTPROC glVertexAttribI4ubvEXT;
PFNGLVERTEXATTRIBI4USVEXTPROC glVertexAttribI4usvEXT;
PFNGLVERTEXATTRIBIPOINTEREXTPROC glVertexAttribIPointerEXT;
PFNGLGETVERTEXATTRIBIIVEXTPROC glGetVertexAttribIivEXT;
PFNGLGETVERTEXATTRIBIUIVEXTPROC glGetVertexAttribIuivEXT;

void glelp::init_GL_NV_vertex_program4()
{
	if(!glelpInternal::checkAvailable("GL_NV_vertex_program4"))
		return;

	glVertexAttribI1iEXT = (PFNGLVERTEXATTRIBI1IEXTPROC)wglGetProcAddress("glVertexAttribI1iEXT");
	glVertexAttribI2iEXT = (PFNGLVERTEXATTRIBI2IEXTPROC)wglGetProcAddress("glVertexAttribI2iEXT");
	glVertexAttribI3iEXT = (PFNGLVERTEXATTRIBI3IEXTPROC)wglGetProcAddress("glVertexAttribI3iEXT");
	glVertexAttribI4iEXT = (PFNGLVERTEXATTRIBI4IEXTPROC)wglGetProcAddress("glVertexAttribI4iEXT");
	glVertexAttribI1uiEXT = (PFNGLVERTEXATTRIBI1UIEXTPROC)wglGetProcAddress("glVertexAttribI1uiEXT");
	glVertexAttribI2uiEXT = (PFNGLVERTEXATTRIBI2UIEXTPROC)wglGetProcAddress("glVertexAttribI2uiEXT");
	glVertexAttribI3uiEXT = (PFNGLVERTEXATTRIBI3UIEXTPROC)wglGetProcAddress("glVertexAttribI3uiEXT");
	glVertexAttribI4uiEXT = (PFNGLVERTEXATTRIBI4UIEXTPROC)wglGetProcAddress("glVertexAttribI4uiEXT");
	glVertexAttribI1ivEXT = (PFNGLVERTEXATTRIBI1IVEXTPROC)wglGetProcAddress("glVertexAttribI1ivEXT");
	glVertexAttribI2ivEXT = (PFNGLVERTEXATTRIBI2IVEXTPROC)wglGetProcAddress("glVertexAttribI2ivEXT");
	glVertexAttribI3ivEXT = (PFNGLVERTEXATTRIBI3IVEXTPROC)wglGetProcAddress("glVertexAttribI3ivEXT");
	glVertexAttribI4ivEXT = (PFNGLVERTEXATTRIBI4IVEXTPROC)wglGetProcAddress("glVertexAttribI4ivEXT");
	glVertexAttribI1uivEXT = (PFNGLVERTEXATTRIBI1UIVEXTPROC)wglGetProcAddress("glVertexAttribI1uivEXT");
	glVertexAttribI2uivEXT = (PFNGLVERTEXATTRIBI2UIVEXTPROC)wglGetProcAddress("glVertexAttribI2uivEXT");
	glVertexAttribI3uivEXT = (PFNGLVERTEXATTRIBI3UIVEXTPROC)wglGetProcAddress("glVertexAttribI3uivEXT");
	glVertexAttribI4uivEXT = (PFNGLVERTEXATTRIBI4UIVEXTPROC)wglGetProcAddress("glVertexAttribI4uivEXT");
	glVertexAttribI4bvEXT = (PFNGLVERTEXATTRIBI4BVEXTPROC)wglGetProcAddress("glVertexAttribI4bvEXT");
	glVertexAttribI4svEXT = (PFNGLVERTEXATTRIBI4SVEXTPROC)wglGetProcAddress("glVertexAttribI4svEXT");
	glVertexAttribI4ubvEXT = (PFNGLVERTEXATTRIBI4UBVEXTPROC)wglGetProcAddress("glVertexAttribI4ubvEXT");
	glVertexAttribI4usvEXT = (PFNGLVERTEXATTRIBI4USVEXTPROC)wglGetProcAddress("glVertexAttribI4usvEXT");
	glVertexAttribIPointerEXT = (PFNGLVERTEXATTRIBIPOINTEREXTPROC)wglGetProcAddress("glVertexAttribIPointerEXT");
	glGetVertexAttribIivEXT = (PFNGLGETVERTEXATTRIBIIVEXTPROC)wglGetProcAddress("glGetVertexAttribIivEXT");
	glGetVertexAttribIuivEXT = (PFNGLGETVERTEXATTRIBIUIVEXTPROC)wglGetProcAddress("glGetVertexAttribIuivEXT");
}

// GL_EXT_gpu_shader4
PFNGLGETUNIFORMUIVEXTPROC glGetUniformuivEXT;
PFNGLBINDFRAGDATALOCATIONEXTPROC glBindFragDataLocationEXT;
PFNGLGETFRAGDATALOCATIONEXTPROC glGetFragDataLocationEXT;
PFNGLUNIFORM1UIEXTPROC glUniform1uiEXT;
PFNGLUNIFORM2UIEXTPROC glUniform2uiEXT;
PFNGLUNIFORM3UIEXTPROC glUniform3uiEXT;
PFNGLUNIFORM4UIEXTPROC glUniform4uiEXT;
PFNGLUNIFORM1UIVEXTPROC glUniform1uivEXT;
PFNGLUNIFORM2UIVEXTPROC glUniform2uivEXT;
PFNGLUNIFORM3UIVEXTPROC glUniform3uivEXT;
PFNGLUNIFORM4UIVEXTPROC glUniform4uivEXT;

void glelp::init_GL_EXT_gpu_shader4()
{
	if(!glelpInternal::checkAvailable("GL_EXT_gpu_shader4"))
		return;

	glGetUniformuivEXT = (PFNGLGETUNIFORMUIVEXTPROC)wglGetProcAddress("glGetUniformuivEXT");
	glBindFragDataLocationEXT = (PFNGLBINDFRAGDATALOCATIONEXTPROC)wglGetProcAddress("glBindFragDataLocationEXT");
	glGetFragDataLocationEXT = (PFNGLGETFRAGDATALOCATIONEXTPROC)wglGetProcAddress("glGetFragDataLocationEXT");
	glUniform1uiEXT = (PFNGLUNIFORM1UIEXTPROC)wglGetProcAddress("glUniform1uiEXT");
	glUniform2uiEXT = (PFNGLUNIFORM2UIEXTPROC)wglGetProcAddress("glUniform2uiEXT");
	glUniform3uiEXT = (PFNGLUNIFORM3UIEXTPROC)wglGetProcAddress("glUniform3uiEXT");
	glUniform4uiEXT = (PFNGLUNIFORM4UIEXTPROC)wglGetProcAddress("glUniform4uiEXT");
	glUniform1uivEXT = (PFNGLUNIFORM1UIVEXTPROC)wglGetProcAddress("glUniform1uivEXT");
	glUniform2uivEXT = (PFNGLUNIFORM2UIVEXTPROC)wglGetProcAddress("glUniform2uivEXT");
	glUniform3uivEXT = (PFNGLUNIFORM3UIVEXTPROC)wglGetProcAddress("glUniform3uivEXT");
	glUniform4uivEXT = (PFNGLUNIFORM4UIVEXTPROC)wglGetProcAddress("glUniform4uivEXT");
}

// GL_EXT_draw_instanced
PFNGLDRAWARRAYSINSTANCEDEXTPROC glDrawArraysInstancedEXT;
PFNGLDRAWELEMENTSINSTANCEDEXTPROC glDrawElementsInstancedEXT;

void glelp::init_GL_EXT_draw_instanced()
{
	if(!glelpInternal::checkAvailable("GL_EXT_draw_instanced"))
		return;

	glDrawArraysInstancedEXT = (PFNGLDRAWARRAYSINSTANCEDEXTPROC)wglGetProcAddress("glDrawArraysInstancedEXT");
	glDrawElementsInstancedEXT = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC)wglGetProcAddress("glDrawElementsInstancedEXT");
}

// GL_EXT_packed_float

void glelp::init_GL_EXT_packed_float()
{
	if(!glelpInternal::checkAvailable("GL_EXT_packed_float"))
		return;

}

// GL_EXT_texture_array

void glelp::init_GL_EXT_texture_array()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_array"))
		return;

}

// GL_EXT_texture_buffer_object
PFNGLTEXBUFFEREXTPROC glTexBufferEXT;

void glelp::init_GL_EXT_texture_buffer_object()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_buffer_object"))
		return;

	glTexBufferEXT = (PFNGLTEXBUFFEREXTPROC)wglGetProcAddress("glTexBufferEXT");
}

// GL_EXT_texture_compression_latc

void glelp::init_GL_EXT_texture_compression_latc()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_compression_latc"))
		return;

}

// GL_EXT_texture_compression_rgtc

void glelp::init_GL_EXT_texture_compression_rgtc()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_compression_rgtc"))
		return;

}

// GL_EXT_texture_shared_exponent

void glelp::init_GL_EXT_texture_shared_exponent()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_shared_exponent"))
		return;

}

// GL_NV_depth_buffer_float
PFNGLDEPTHRANGEDNVPROC glDepthRangedNV;
PFNGLCLEARDEPTHDNVPROC glClearDepthdNV;
PFNGLDEPTHBOUNDSDNVPROC glDepthBoundsdNV;

void glelp::init_GL_NV_depth_buffer_float()
{
	if(!glelpInternal::checkAvailable("GL_NV_depth_buffer_float"))
		return;

	glDepthRangedNV = (PFNGLDEPTHRANGEDNVPROC)wglGetProcAddress("glDepthRangedNV");
	glClearDepthdNV = (PFNGLCLEARDEPTHDNVPROC)wglGetProcAddress("glClearDepthdNV");
	glDepthBoundsdNV = (PFNGLDEPTHBOUNDSDNVPROC)wglGetProcAddress("glDepthBoundsdNV");
}

// GL_NV_fragment_program4

void glelp::init_GL_NV_fragment_program4()
{
	if(!glelpInternal::checkAvailable("GL_NV_fragment_program4"))
		return;

}

// GL_NV_framebuffer_multisample_coverage
PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC glRenderbufferStorageMultisampleCoverageNV;

void glelp::init_GL_NV_framebuffer_multisample_coverage()
{
	if(!glelpInternal::checkAvailable("GL_NV_framebuffer_multisample_coverage"))
		return;

	glRenderbufferStorageMultisampleCoverageNV = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC)wglGetProcAddress("glRenderbufferStorageMultisampleCoverageNV");
}

// GL_EXT_framebuffer_sRGB

void glelp::init_GL_EXT_framebuffer_sRGB()
{
	if(!glelpInternal::checkAvailable("GL_EXT_framebuffer_sRGB"))
		return;

}

// GL_NV_geometry_shader4

void glelp::init_GL_NV_geometry_shader4()
{
	if(!glelpInternal::checkAvailable("GL_NV_geometry_shader4"))
		return;

}

// GL_NV_parameter_buffer_object
PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC glProgramBufferParametersfvNV;
PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC glProgramBufferParametersIivNV;
PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC glProgramBufferParametersIuivNV;

void glelp::init_GL_NV_parameter_buffer_object()
{
	if(!glelpInternal::checkAvailable("GL_NV_parameter_buffer_object"))
		return;

	glProgramBufferParametersfvNV = (PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC)wglGetProcAddress("glProgramBufferParametersfvNV");
	glProgramBufferParametersIivNV = (PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC)wglGetProcAddress("glProgramBufferParametersIivNV");
	glProgramBufferParametersIuivNV = (PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC)wglGetProcAddress("glProgramBufferParametersIuivNV");
}

// GL_EXT_draw_buffers2
PFNGLCOLORMASKINDEXEDEXTPROC glColorMaskIndexedEXT;
PFNGLGETBOOLEANINDEXEDVEXTPROC glGetBooleanIndexedvEXT;
PFNGLGETINTEGERINDEXEDVEXTPROC glGetIntegerIndexedvEXT;
PFNGLENABLEINDEXEDEXTPROC glEnableIndexedEXT;
PFNGLDISABLEINDEXEDEXTPROC glDisableIndexedEXT;
PFNGLISENABLEDINDEXEDEXTPROC glIsEnabledIndexedEXT;

void glelp::init_GL_EXT_draw_buffers2()
{
	if(!glelpInternal::checkAvailable("GL_EXT_draw_buffers2"))
		return;

	glColorMaskIndexedEXT = (PFNGLCOLORMASKINDEXEDEXTPROC)wglGetProcAddress("glColorMaskIndexedEXT");
	glGetBooleanIndexedvEXT = (PFNGLGETBOOLEANINDEXEDVEXTPROC)wglGetProcAddress("glGetBooleanIndexedvEXT");
	glGetIntegerIndexedvEXT = (PFNGLGETINTEGERINDEXEDVEXTPROC)wglGetProcAddress("glGetIntegerIndexedvEXT");
	glEnableIndexedEXT = (PFNGLENABLEINDEXEDEXTPROC)wglGetProcAddress("glEnableIndexedEXT");
	glDisableIndexedEXT = (PFNGLDISABLEINDEXEDEXTPROC)wglGetProcAddress("glDisableIndexedEXT");
	glIsEnabledIndexedEXT = (PFNGLISENABLEDINDEXEDEXTPROC)wglGetProcAddress("glIsEnabledIndexedEXT");
}

// GL_NV_transform_feedback
PFNGLBEGINTRANSFORMFEEDBACKNVPROC glBeginTransformFeedbackNV;
PFNGLENDTRANSFORMFEEDBACKNVPROC glEndTransformFeedbackNV;
PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC glTransformFeedbackAttribsNV;
PFNGLBINDBUFFERRANGENVPROC glBindBufferRangeNV;
PFNGLBINDBUFFEROFFSETNVPROC glBindBufferOffsetNV;
PFNGLBINDBUFFERBASENVPROC glBindBufferBaseNV;
PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC glTransformFeedbackVaryingsNV;
PFNGLACTIVEVARYINGNVPROC glActiveVaryingNV;
PFNGLGETVARYINGLOCATIONNVPROC glGetVaryingLocationNV;
PFNGLGETACTIVEVARYINGNVPROC glGetActiveVaryingNV;
PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC glGetTransformFeedbackVaryingNV;
PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC glTransformFeedbackStreamAttribsNV;

void glelp::init_GL_NV_transform_feedback()
{
	if(!glelpInternal::checkAvailable("GL_NV_transform_feedback"))
		return;

	glBeginTransformFeedbackNV = (PFNGLBEGINTRANSFORMFEEDBACKNVPROC)wglGetProcAddress("glBeginTransformFeedbackNV");
	glEndTransformFeedbackNV = (PFNGLENDTRANSFORMFEEDBACKNVPROC)wglGetProcAddress("glEndTransformFeedbackNV");
	glTransformFeedbackAttribsNV = (PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC)wglGetProcAddress("glTransformFeedbackAttribsNV");
	glBindBufferRangeNV = (PFNGLBINDBUFFERRANGENVPROC)wglGetProcAddress("glBindBufferRangeNV");
	glBindBufferOffsetNV = (PFNGLBINDBUFFEROFFSETNVPROC)wglGetProcAddress("glBindBufferOffsetNV");
	glBindBufferBaseNV = (PFNGLBINDBUFFERBASENVPROC)wglGetProcAddress("glBindBufferBaseNV");
	glTransformFeedbackVaryingsNV = (PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC)wglGetProcAddress("glTransformFeedbackVaryingsNV");
	glActiveVaryingNV = (PFNGLACTIVEVARYINGNVPROC)wglGetProcAddress("glActiveVaryingNV");
	glGetVaryingLocationNV = (PFNGLGETVARYINGLOCATIONNVPROC)wglGetProcAddress("glGetVaryingLocationNV");
	glGetActiveVaryingNV = (PFNGLGETACTIVEVARYINGNVPROC)wglGetProcAddress("glGetActiveVaryingNV");
	glGetTransformFeedbackVaryingNV = (PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC)wglGetProcAddress("glGetTransformFeedbackVaryingNV");
	glTransformFeedbackStreamAttribsNV = (PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC)wglGetProcAddress("glTransformFeedbackStreamAttribsNV");
}

// GL_EXT_bindable_uniform
PFNGLUNIFORMBUFFEREXTPROC glUniformBufferEXT;
PFNGLGETUNIFORMBUFFERSIZEEXTPROC glGetUniformBufferSizeEXT;
PFNGLGETUNIFORMOFFSETEXTPROC glGetUniformOffsetEXT;

void glelp::init_GL_EXT_bindable_uniform()
{
	if(!glelpInternal::checkAvailable("GL_EXT_bindable_uniform"))
		return;

	glUniformBufferEXT = (PFNGLUNIFORMBUFFEREXTPROC)wglGetProcAddress("glUniformBufferEXT");
	glGetUniformBufferSizeEXT = (PFNGLGETUNIFORMBUFFERSIZEEXTPROC)wglGetProcAddress("glGetUniformBufferSizeEXT");
	glGetUniformOffsetEXT = (PFNGLGETUNIFORMOFFSETEXTPROC)wglGetProcAddress("glGetUniformOffsetEXT");
}

// GL_EXT_texture_integer
PFNGLTEXPARAMETERIIVEXTPROC glTexParameterIivEXT;
PFNGLTEXPARAMETERIUIVEXTPROC glTexParameterIuivEXT;
PFNGLGETTEXPARAMETERIIVEXTPROC glGetTexParameterIivEXT;
PFNGLGETTEXPARAMETERIUIVEXTPROC glGetTexParameterIuivEXT;
PFNGLCLEARCOLORIIEXTPROC glClearColorIiEXT;
PFNGLCLEARCOLORIUIEXTPROC glClearColorIuiEXT;

void glelp::init_GL_EXT_texture_integer()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_integer"))
		return;

	glTexParameterIivEXT = (PFNGLTEXPARAMETERIIVEXTPROC)wglGetProcAddress("glTexParameterIivEXT");
	glTexParameterIuivEXT = (PFNGLTEXPARAMETERIUIVEXTPROC)wglGetProcAddress("glTexParameterIuivEXT");
	glGetTexParameterIivEXT = (PFNGLGETTEXPARAMETERIIVEXTPROC)wglGetProcAddress("glGetTexParameterIivEXT");
	glGetTexParameterIuivEXT = (PFNGLGETTEXPARAMETERIUIVEXTPROC)wglGetProcAddress("glGetTexParameterIuivEXT");
	glClearColorIiEXT = (PFNGLCLEARCOLORIIEXTPROC)wglGetProcAddress("glClearColorIiEXT");
	glClearColorIuiEXT = (PFNGLCLEARCOLORIUIEXTPROC)wglGetProcAddress("glClearColorIuiEXT");
}

// GL_GREMEDY_frame_terminator
PFNGLFRAMETERMINATORGREMEDYPROC glFrameTerminatorGREMEDY;

void glelp::init_GL_GREMEDY_frame_terminator()
{
	if(!glelpInternal::checkAvailable("GL_GREMEDY_frame_terminator"))
		return;

	glFrameTerminatorGREMEDY = (PFNGLFRAMETERMINATORGREMEDYPROC)wglGetProcAddress("glFrameTerminatorGREMEDY");
}

// GL_NV_conditional_render
PFNGLBEGINCONDITIONALRENDERNVPROC glBeginConditionalRenderNV;
PFNGLENDCONDITIONALRENDERNVPROC glEndConditionalRenderNV;

void glelp::init_GL_NV_conditional_render()
{
	if(!glelpInternal::checkAvailable("GL_NV_conditional_render"))
		return;

	glBeginConditionalRenderNV = (PFNGLBEGINCONDITIONALRENDERNVPROC)wglGetProcAddress("glBeginConditionalRenderNV");
	glEndConditionalRenderNV = (PFNGLENDCONDITIONALRENDERNVPROC)wglGetProcAddress("glEndConditionalRenderNV");
}

// GL_NV_present_video
PFNGLPRESENTFRAMEKEYEDNVPROC glPresentFrameKeyedNV;
PFNGLPRESENTFRAMEDUALFILLNVPROC glPresentFrameDualFillNV;
PFNGLGETVIDEOIVNVPROC glGetVideoivNV;
PFNGLGETVIDEOUIVNVPROC glGetVideouivNV;
PFNGLGETVIDEOI64VNVPROC glGetVideoi64vNV;
PFNGLGETVIDEOUI64VNVPROC glGetVideoui64vNV;

void glelp::init_GL_NV_present_video()
{
	if(!glelpInternal::checkAvailable("GL_NV_present_video"))
		return;

	glPresentFrameKeyedNV = (PFNGLPRESENTFRAMEKEYEDNVPROC)wglGetProcAddress("glPresentFrameKeyedNV");
	glPresentFrameDualFillNV = (PFNGLPRESENTFRAMEDUALFILLNVPROC)wglGetProcAddress("glPresentFrameDualFillNV");
	glGetVideoivNV = (PFNGLGETVIDEOIVNVPROC)wglGetProcAddress("glGetVideoivNV");
	glGetVideouivNV = (PFNGLGETVIDEOUIVNVPROC)wglGetProcAddress("glGetVideouivNV");
	glGetVideoi64vNV = (PFNGLGETVIDEOI64VNVPROC)wglGetProcAddress("glGetVideoi64vNV");
	glGetVideoui64vNV = (PFNGLGETVIDEOUI64VNVPROC)wglGetProcAddress("glGetVideoui64vNV");
}

// GL_EXT_transform_feedback
PFNGLBEGINTRANSFORMFEEDBACKEXTPROC glBeginTransformFeedbackEXT;
PFNGLENDTRANSFORMFEEDBACKEXTPROC glEndTransformFeedbackEXT;
PFNGLBINDBUFFERRANGEEXTPROC glBindBufferRangeEXT;
PFNGLBINDBUFFEROFFSETEXTPROC glBindBufferOffsetEXT;
PFNGLBINDBUFFERBASEEXTPROC glBindBufferBaseEXT;
PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC glTransformFeedbackVaryingsEXT;
PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC glGetTransformFeedbackVaryingEXT;

void glelp::init_GL_EXT_transform_feedback()
{
	if(!glelpInternal::checkAvailable("GL_EXT_transform_feedback"))
		return;

	glBeginTransformFeedbackEXT = (PFNGLBEGINTRANSFORMFEEDBACKEXTPROC)wglGetProcAddress("glBeginTransformFeedbackEXT");
	glEndTransformFeedbackEXT = (PFNGLENDTRANSFORMFEEDBACKEXTPROC)wglGetProcAddress("glEndTransformFeedbackEXT");
	glBindBufferRangeEXT = (PFNGLBINDBUFFERRANGEEXTPROC)wglGetProcAddress("glBindBufferRangeEXT");
	glBindBufferOffsetEXT = (PFNGLBINDBUFFEROFFSETEXTPROC)wglGetProcAddress("glBindBufferOffsetEXT");
	glBindBufferBaseEXT = (PFNGLBINDBUFFERBASEEXTPROC)wglGetProcAddress("glBindBufferBaseEXT");
	glTransformFeedbackVaryingsEXT = (PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC)wglGetProcAddress("glTransformFeedbackVaryingsEXT");
	glGetTransformFeedbackVaryingEXT = (PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC)wglGetProcAddress("glGetTransformFeedbackVaryingEXT");
}

// GL_EXT_direct_state_access
PFNGLCLIENTATTRIBDEFAULTEXTPROC glClientAttribDefaultEXT;
PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC glPushClientAttribDefaultEXT;
PFNGLMATRIXLOADFEXTPROC glMatrixLoadfEXT;
PFNGLMATRIXLOADDEXTPROC glMatrixLoaddEXT;
PFNGLMATRIXMULTFEXTPROC glMatrixMultfEXT;
PFNGLMATRIXMULTDEXTPROC glMatrixMultdEXT;
PFNGLMATRIXLOADIDENTITYEXTPROC glMatrixLoadIdentityEXT;
PFNGLMATRIXROTATEFEXTPROC glMatrixRotatefEXT;
PFNGLMATRIXROTATEDEXTPROC glMatrixRotatedEXT;
PFNGLMATRIXSCALEFEXTPROC glMatrixScalefEXT;
PFNGLMATRIXSCALEDEXTPROC glMatrixScaledEXT;
PFNGLMATRIXTRANSLATEFEXTPROC glMatrixTranslatefEXT;
PFNGLMATRIXTRANSLATEDEXTPROC glMatrixTranslatedEXT;
PFNGLMATRIXFRUSTUMEXTPROC glMatrixFrustumEXT;
PFNGLMATRIXORTHOEXTPROC glMatrixOrthoEXT;
PFNGLMATRIXPOPEXTPROC glMatrixPopEXT;
PFNGLMATRIXPUSHEXTPROC glMatrixPushEXT;
PFNGLMATRIXLOADTRANSPOSEFEXTPROC glMatrixLoadTransposefEXT;
PFNGLMATRIXLOADTRANSPOSEDEXTPROC glMatrixLoadTransposedEXT;
PFNGLMATRIXMULTTRANSPOSEFEXTPROC glMatrixMultTransposefEXT;
PFNGLMATRIXMULTTRANSPOSEDEXTPROC glMatrixMultTransposedEXT;
PFNGLTEXTUREPARAMETERFEXTPROC glTextureParameterfEXT;
PFNGLTEXTUREPARAMETERFVEXTPROC glTextureParameterfvEXT;
PFNGLTEXTUREPARAMETERIEXTPROC glTextureParameteriEXT;
PFNGLTEXTUREPARAMETERIVEXTPROC glTextureParameterivEXT;
PFNGLTEXTUREIMAGE1DEXTPROC glTextureImage1DEXT;
PFNGLTEXTUREIMAGE2DEXTPROC glTextureImage2DEXT;
PFNGLTEXTURESUBIMAGE1DEXTPROC glTextureSubImage1DEXT;
PFNGLTEXTURESUBIMAGE2DEXTPROC glTextureSubImage2DEXT;
PFNGLCOPYTEXTUREIMAGE1DEXTPROC glCopyTextureImage1DEXT;
PFNGLCOPYTEXTUREIMAGE2DEXTPROC glCopyTextureImage2DEXT;
PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC glCopyTextureSubImage1DEXT;
PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC glCopyTextureSubImage2DEXT;
PFNGLGETTEXTUREIMAGEEXTPROC glGetTextureImageEXT;
PFNGLGETTEXTUREPARAMETERFVEXTPROC glGetTextureParameterfvEXT;
PFNGLGETTEXTUREPARAMETERIVEXTPROC glGetTextureParameterivEXT;
PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC glGetTextureLevelParameterfvEXT;
PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC glGetTextureLevelParameterivEXT;
PFNGLTEXTUREIMAGE3DEXTPROC glTextureImage3DEXT;
PFNGLTEXTURESUBIMAGE3DEXTPROC glTextureSubImage3DEXT;
PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC glCopyTextureSubImage3DEXT;
PFNGLMULTITEXPARAMETERFEXTPROC glMultiTexParameterfEXT;
PFNGLMULTITEXPARAMETERFVEXTPROC glMultiTexParameterfvEXT;
PFNGLMULTITEXPARAMETERIEXTPROC glMultiTexParameteriEXT;
PFNGLMULTITEXPARAMETERIVEXTPROC glMultiTexParameterivEXT;
PFNGLMULTITEXIMAGE1DEXTPROC glMultiTexImage1DEXT;
PFNGLMULTITEXIMAGE2DEXTPROC glMultiTexImage2DEXT;
PFNGLMULTITEXSUBIMAGE1DEXTPROC glMultiTexSubImage1DEXT;
PFNGLMULTITEXSUBIMAGE2DEXTPROC glMultiTexSubImage2DEXT;
PFNGLCOPYMULTITEXIMAGE1DEXTPROC glCopyMultiTexImage1DEXT;
PFNGLCOPYMULTITEXIMAGE2DEXTPROC glCopyMultiTexImage2DEXT;
PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC glCopyMultiTexSubImage1DEXT;
PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC glCopyMultiTexSubImage2DEXT;
PFNGLGETMULTITEXIMAGEEXTPROC glGetMultiTexImageEXT;
PFNGLGETMULTITEXPARAMETERFVEXTPROC glGetMultiTexParameterfvEXT;
PFNGLGETMULTITEXPARAMETERIVEXTPROC glGetMultiTexParameterivEXT;
PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC glGetMultiTexLevelParameterfvEXT;
PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC glGetMultiTexLevelParameterivEXT;
PFNGLMULTITEXIMAGE3DEXTPROC glMultiTexImage3DEXT;
PFNGLMULTITEXSUBIMAGE3DEXTPROC glMultiTexSubImage3DEXT;
PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC glCopyMultiTexSubImage3DEXT;
PFNGLBINDMULTITEXTUREEXTPROC glBindMultiTextureEXT;
PFNGLENABLECLIENTSTATEINDEXEDEXTPROC glEnableClientStateIndexedEXT;
PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC glDisableClientStateIndexedEXT;
PFNGLMULTITEXCOORDPOINTEREXTPROC glMultiTexCoordPointerEXT;
PFNGLMULTITEXENVFEXTPROC glMultiTexEnvfEXT;
PFNGLMULTITEXENVFVEXTPROC glMultiTexEnvfvEXT;
PFNGLMULTITEXENVIEXTPROC glMultiTexEnviEXT;
PFNGLMULTITEXENVIVEXTPROC glMultiTexEnvivEXT;
PFNGLMULTITEXGENDEXTPROC glMultiTexGendEXT;
PFNGLMULTITEXGENDVEXTPROC glMultiTexGendvEXT;
PFNGLMULTITEXGENFEXTPROC glMultiTexGenfEXT;
PFNGLMULTITEXGENFVEXTPROC glMultiTexGenfvEXT;
PFNGLMULTITEXGENIEXTPROC glMultiTexGeniEXT;
PFNGLMULTITEXGENIVEXTPROC glMultiTexGenivEXT;
PFNGLGETMULTITEXENVFVEXTPROC glGetMultiTexEnvfvEXT;
PFNGLGETMULTITEXENVIVEXTPROC glGetMultiTexEnvivEXT;
PFNGLGETMULTITEXGENDVEXTPROC glGetMultiTexGendvEXT;
PFNGLGETMULTITEXGENFVEXTPROC glGetMultiTexGenfvEXT;
PFNGLGETMULTITEXGENIVEXTPROC glGetMultiTexGenivEXT;
PFNGLGETFLOATINDEXEDVEXTPROC glGetFloatIndexedvEXT;
PFNGLGETDOUBLEINDEXEDVEXTPROC glGetDoubleIndexedvEXT;
PFNGLGETPOINTERINDEXEDVEXTPROC glGetPointerIndexedvEXT;
PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC glCompressedTextureImage3DEXT;
PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC glCompressedTextureImage2DEXT;
PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC glCompressedTextureImage1DEXT;
PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC glCompressedTextureSubImage3DEXT;
PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC glCompressedTextureSubImage2DEXT;
PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC glCompressedTextureSubImage1DEXT;
PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC glGetCompressedTextureImageEXT;
PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC glCompressedMultiTexImage3DEXT;
PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC glCompressedMultiTexImage2DEXT;
PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC glCompressedMultiTexImage1DEXT;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC glCompressedMultiTexSubImage3DEXT;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC glCompressedMultiTexSubImage2DEXT;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC glCompressedMultiTexSubImage1DEXT;
PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC glGetCompressedMultiTexImageEXT;
PFNGLNAMEDPROGRAMSTRINGEXTPROC glNamedProgramStringEXT;
PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC glNamedProgramLocalParameter4dEXT;
PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC glNamedProgramLocalParameter4dvEXT;
PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC glNamedProgramLocalParameter4fEXT;
PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC glNamedProgramLocalParameter4fvEXT;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC glGetNamedProgramLocalParameterdvEXT;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC glGetNamedProgramLocalParameterfvEXT;
PFNGLGETNAMEDPROGRAMIVEXTPROC glGetNamedProgramivEXT;
PFNGLGETNAMEDPROGRAMSTRINGEXTPROC glGetNamedProgramStringEXT;
PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC glNamedProgramLocalParameters4fvEXT;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC glNamedProgramLocalParameterI4iEXT;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC glNamedProgramLocalParameterI4ivEXT;
PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC glNamedProgramLocalParametersI4ivEXT;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC glNamedProgramLocalParameterI4uiEXT;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC glNamedProgramLocalParameterI4uivEXT;
PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC glNamedProgramLocalParametersI4uivEXT;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC glGetNamedProgramLocalParameterIivEXT;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC glGetNamedProgramLocalParameterIuivEXT;
PFNGLTEXTUREPARAMETERIIVEXTPROC glTextureParameterIivEXT;
PFNGLTEXTUREPARAMETERIUIVEXTPROC glTextureParameterIuivEXT;
PFNGLGETTEXTUREPARAMETERIIVEXTPROC glGetTextureParameterIivEXT;
PFNGLGETTEXTUREPARAMETERIUIVEXTPROC glGetTextureParameterIuivEXT;
PFNGLMULTITEXPARAMETERIIVEXTPROC glMultiTexParameterIivEXT;
PFNGLMULTITEXPARAMETERIUIVEXTPROC glMultiTexParameterIuivEXT;
PFNGLGETMULTITEXPARAMETERIIVEXTPROC glGetMultiTexParameterIivEXT;
PFNGLGETMULTITEXPARAMETERIUIVEXTPROC glGetMultiTexParameterIuivEXT;
PFNGLPROGRAMUNIFORM1FEXTPROC glProgramUniform1fEXT;
PFNGLPROGRAMUNIFORM2FEXTPROC glProgramUniform2fEXT;
PFNGLPROGRAMUNIFORM3FEXTPROC glProgramUniform3fEXT;
PFNGLPROGRAMUNIFORM4FEXTPROC glProgramUniform4fEXT;
PFNGLPROGRAMUNIFORM1IEXTPROC glProgramUniform1iEXT;
PFNGLPROGRAMUNIFORM2IEXTPROC glProgramUniform2iEXT;
PFNGLPROGRAMUNIFORM3IEXTPROC glProgramUniform3iEXT;
PFNGLPROGRAMUNIFORM4IEXTPROC glProgramUniform4iEXT;
PFNGLPROGRAMUNIFORM1FVEXTPROC glProgramUniform1fvEXT;
PFNGLPROGRAMUNIFORM2FVEXTPROC glProgramUniform2fvEXT;
PFNGLPROGRAMUNIFORM3FVEXTPROC glProgramUniform3fvEXT;
PFNGLPROGRAMUNIFORM4FVEXTPROC glProgramUniform4fvEXT;
PFNGLPROGRAMUNIFORM1IVEXTPROC glProgramUniform1ivEXT;
PFNGLPROGRAMUNIFORM2IVEXTPROC glProgramUniform2ivEXT;
PFNGLPROGRAMUNIFORM3IVEXTPROC glProgramUniform3ivEXT;
PFNGLPROGRAMUNIFORM4IVEXTPROC glProgramUniform4ivEXT;
PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC glProgramUniformMatrix2fvEXT;
PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC glProgramUniformMatrix3fvEXT;
PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC glProgramUniformMatrix4fvEXT;
PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC glProgramUniformMatrix2x3fvEXT;
PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC glProgramUniformMatrix3x2fvEXT;
PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC glProgramUniformMatrix2x4fvEXT;
PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC glProgramUniformMatrix4x2fvEXT;
PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC glProgramUniformMatrix3x4fvEXT;
PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC glProgramUniformMatrix4x3fvEXT;
PFNGLPROGRAMUNIFORM1UIEXTPROC glProgramUniform1uiEXT;
PFNGLPROGRAMUNIFORM2UIEXTPROC glProgramUniform2uiEXT;
PFNGLPROGRAMUNIFORM3UIEXTPROC glProgramUniform3uiEXT;
PFNGLPROGRAMUNIFORM4UIEXTPROC glProgramUniform4uiEXT;
PFNGLPROGRAMUNIFORM1UIVEXTPROC glProgramUniform1uivEXT;
PFNGLPROGRAMUNIFORM2UIVEXTPROC glProgramUniform2uivEXT;
PFNGLPROGRAMUNIFORM3UIVEXTPROC glProgramUniform3uivEXT;
PFNGLPROGRAMUNIFORM4UIVEXTPROC glProgramUniform4uivEXT;
PFNGLNAMEDBUFFERDATAEXTPROC glNamedBufferDataEXT;
PFNGLNAMEDBUFFERSUBDATAEXTPROC glNamedBufferSubDataEXT;
PFNGLMAPNAMEDBUFFEREXTPROC glMapNamedBufferEXT;
PFNGLUNMAPNAMEDBUFFEREXTPROC glUnmapNamedBufferEXT;
PFNGLMAPNAMEDBUFFERRANGEEXTPROC glMapNamedBufferRangeEXT;
PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC glFlushMappedNamedBufferRangeEXT;
PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC glNamedCopyBufferSubDataEXT;
PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC glGetNamedBufferParameterivEXT;
PFNGLGETNAMEDBUFFERPOINTERVEXTPROC glGetNamedBufferPointervEXT;
PFNGLGETNAMEDBUFFERSUBDATAEXTPROC glGetNamedBufferSubDataEXT;
PFNGLTEXTUREBUFFEREXTPROC glTextureBufferEXT;
PFNGLMULTITEXBUFFEREXTPROC glMultiTexBufferEXT;
PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC glNamedRenderbufferStorageEXT;
PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC glGetNamedRenderbufferParameterivEXT;
PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC glCheckNamedFramebufferStatusEXT;
PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC glNamedFramebufferTexture1DEXT;
PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC glNamedFramebufferTexture2DEXT;
PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC glNamedFramebufferTexture3DEXT;
PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC glNamedFramebufferRenderbufferEXT;
PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glGetNamedFramebufferAttachmentParameterivEXT;
PFNGLGENERATETEXTUREMIPMAPEXTPROC glGenerateTextureMipmapEXT;
PFNGLGENERATEMULTITEXMIPMAPEXTPROC glGenerateMultiTexMipmapEXT;
PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC glFramebufferDrawBufferEXT;
PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC glFramebufferDrawBuffersEXT;
PFNGLFRAMEBUFFERREADBUFFEREXTPROC glFramebufferReadBufferEXT;
PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC glGetFramebufferParameterivEXT;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glNamedRenderbufferStorageMultisampleEXT;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC glNamedRenderbufferStorageMultisampleCoverageEXT;
PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC glNamedFramebufferTextureEXT;
PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC glNamedFramebufferTextureLayerEXT;
PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC glNamedFramebufferTextureFaceEXT;
PFNGLTEXTURERENDERBUFFEREXTPROC glTextureRenderbufferEXT;
PFNGLMULTITEXRENDERBUFFEREXTPROC glMultiTexRenderbufferEXT;
PFNGLPROGRAMUNIFORM1DEXTPROC glProgramUniform1dEXT;
PFNGLPROGRAMUNIFORM2DEXTPROC glProgramUniform2dEXT;
PFNGLPROGRAMUNIFORM3DEXTPROC glProgramUniform3dEXT;
PFNGLPROGRAMUNIFORM4DEXTPROC glProgramUniform4dEXT;
PFNGLPROGRAMUNIFORM1DVEXTPROC glProgramUniform1dvEXT;
PFNGLPROGRAMUNIFORM2DVEXTPROC glProgramUniform2dvEXT;
PFNGLPROGRAMUNIFORM3DVEXTPROC glProgramUniform3dvEXT;
PFNGLPROGRAMUNIFORM4DVEXTPROC glProgramUniform4dvEXT;
PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC glProgramUniformMatrix2dvEXT;
PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC glProgramUniformMatrix3dvEXT;
PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC glProgramUniformMatrix4dvEXT;
PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC glProgramUniformMatrix2x3dvEXT;
PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC glProgramUniformMatrix2x4dvEXT;
PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC glProgramUniformMatrix3x2dvEXT;
PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC glProgramUniformMatrix3x4dvEXT;
PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC glProgramUniformMatrix4x2dvEXT;
PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC glProgramUniformMatrix4x3dvEXT;

void glelp::init_GL_EXT_direct_state_access()
{
	if(!glelpInternal::checkAvailable("GL_EXT_direct_state_access"))
		return;

	glClientAttribDefaultEXT = (PFNGLCLIENTATTRIBDEFAULTEXTPROC)wglGetProcAddress("glClientAttribDefaultEXT");
	glPushClientAttribDefaultEXT = (PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC)wglGetProcAddress("glPushClientAttribDefaultEXT");
	glMatrixLoadfEXT = (PFNGLMATRIXLOADFEXTPROC)wglGetProcAddress("glMatrixLoadfEXT");
	glMatrixLoaddEXT = (PFNGLMATRIXLOADDEXTPROC)wglGetProcAddress("glMatrixLoaddEXT");
	glMatrixMultfEXT = (PFNGLMATRIXMULTFEXTPROC)wglGetProcAddress("glMatrixMultfEXT");
	glMatrixMultdEXT = (PFNGLMATRIXMULTDEXTPROC)wglGetProcAddress("glMatrixMultdEXT");
	glMatrixLoadIdentityEXT = (PFNGLMATRIXLOADIDENTITYEXTPROC)wglGetProcAddress("glMatrixLoadIdentityEXT");
	glMatrixRotatefEXT = (PFNGLMATRIXROTATEFEXTPROC)wglGetProcAddress("glMatrixRotatefEXT");
	glMatrixRotatedEXT = (PFNGLMATRIXROTATEDEXTPROC)wglGetProcAddress("glMatrixRotatedEXT");
	glMatrixScalefEXT = (PFNGLMATRIXSCALEFEXTPROC)wglGetProcAddress("glMatrixScalefEXT");
	glMatrixScaledEXT = (PFNGLMATRIXSCALEDEXTPROC)wglGetProcAddress("glMatrixScaledEXT");
	glMatrixTranslatefEXT = (PFNGLMATRIXTRANSLATEFEXTPROC)wglGetProcAddress("glMatrixTranslatefEXT");
	glMatrixTranslatedEXT = (PFNGLMATRIXTRANSLATEDEXTPROC)wglGetProcAddress("glMatrixTranslatedEXT");
	glMatrixFrustumEXT = (PFNGLMATRIXFRUSTUMEXTPROC)wglGetProcAddress("glMatrixFrustumEXT");
	glMatrixOrthoEXT = (PFNGLMATRIXORTHOEXTPROC)wglGetProcAddress("glMatrixOrthoEXT");
	glMatrixPopEXT = (PFNGLMATRIXPOPEXTPROC)wglGetProcAddress("glMatrixPopEXT");
	glMatrixPushEXT = (PFNGLMATRIXPUSHEXTPROC)wglGetProcAddress("glMatrixPushEXT");
	glMatrixLoadTransposefEXT = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC)wglGetProcAddress("glMatrixLoadTransposefEXT");
	glMatrixLoadTransposedEXT = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC)wglGetProcAddress("glMatrixLoadTransposedEXT");
	glMatrixMultTransposefEXT = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC)wglGetProcAddress("glMatrixMultTransposefEXT");
	glMatrixMultTransposedEXT = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC)wglGetProcAddress("glMatrixMultTransposedEXT");
	glTextureParameterfEXT = (PFNGLTEXTUREPARAMETERFEXTPROC)wglGetProcAddress("glTextureParameterfEXT");
	glTextureParameterfvEXT = (PFNGLTEXTUREPARAMETERFVEXTPROC)wglGetProcAddress("glTextureParameterfvEXT");
	glTextureParameteriEXT = (PFNGLTEXTUREPARAMETERIEXTPROC)wglGetProcAddress("glTextureParameteriEXT");
	glTextureParameterivEXT = (PFNGLTEXTUREPARAMETERIVEXTPROC)wglGetProcAddress("glTextureParameterivEXT");
	glTextureImage1DEXT = (PFNGLTEXTUREIMAGE1DEXTPROC)wglGetProcAddress("glTextureImage1DEXT");
	glTextureImage2DEXT = (PFNGLTEXTUREIMAGE2DEXTPROC)wglGetProcAddress("glTextureImage2DEXT");
	glTextureSubImage1DEXT = (PFNGLTEXTURESUBIMAGE1DEXTPROC)wglGetProcAddress("glTextureSubImage1DEXT");
	glTextureSubImage2DEXT = (PFNGLTEXTURESUBIMAGE2DEXTPROC)wglGetProcAddress("glTextureSubImage2DEXT");
	glCopyTextureImage1DEXT = (PFNGLCOPYTEXTUREIMAGE1DEXTPROC)wglGetProcAddress("glCopyTextureImage1DEXT");
	glCopyTextureImage2DEXT = (PFNGLCOPYTEXTUREIMAGE2DEXTPROC)wglGetProcAddress("glCopyTextureImage2DEXT");
	glCopyTextureSubImage1DEXT = (PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC)wglGetProcAddress("glCopyTextureSubImage1DEXT");
	glCopyTextureSubImage2DEXT = (PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC)wglGetProcAddress("glCopyTextureSubImage2DEXT");
	glGetTextureImageEXT = (PFNGLGETTEXTUREIMAGEEXTPROC)wglGetProcAddress("glGetTextureImageEXT");
	glGetTextureParameterfvEXT = (PFNGLGETTEXTUREPARAMETERFVEXTPROC)wglGetProcAddress("glGetTextureParameterfvEXT");
	glGetTextureParameterivEXT = (PFNGLGETTEXTUREPARAMETERIVEXTPROC)wglGetProcAddress("glGetTextureParameterivEXT");
	glGetTextureLevelParameterfvEXT = (PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC)wglGetProcAddress("glGetTextureLevelParameterfvEXT");
	glGetTextureLevelParameterivEXT = (PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC)wglGetProcAddress("glGetTextureLevelParameterivEXT");
	glTextureImage3DEXT = (PFNGLTEXTUREIMAGE3DEXTPROC)wglGetProcAddress("glTextureImage3DEXT");
	glTextureSubImage3DEXT = (PFNGLTEXTURESUBIMAGE3DEXTPROC)wglGetProcAddress("glTextureSubImage3DEXT");
	glCopyTextureSubImage3DEXT = (PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC)wglGetProcAddress("glCopyTextureSubImage3DEXT");
	glMultiTexParameterfEXT = (PFNGLMULTITEXPARAMETERFEXTPROC)wglGetProcAddress("glMultiTexParameterfEXT");
	glMultiTexParameterfvEXT = (PFNGLMULTITEXPARAMETERFVEXTPROC)wglGetProcAddress("glMultiTexParameterfvEXT");
	glMultiTexParameteriEXT = (PFNGLMULTITEXPARAMETERIEXTPROC)wglGetProcAddress("glMultiTexParameteriEXT");
	glMultiTexParameterivEXT = (PFNGLMULTITEXPARAMETERIVEXTPROC)wglGetProcAddress("glMultiTexParameterivEXT");
	glMultiTexImage1DEXT = (PFNGLMULTITEXIMAGE1DEXTPROC)wglGetProcAddress("glMultiTexImage1DEXT");
	glMultiTexImage2DEXT = (PFNGLMULTITEXIMAGE2DEXTPROC)wglGetProcAddress("glMultiTexImage2DEXT");
	glMultiTexSubImage1DEXT = (PFNGLMULTITEXSUBIMAGE1DEXTPROC)wglGetProcAddress("glMultiTexSubImage1DEXT");
	glMultiTexSubImage2DEXT = (PFNGLMULTITEXSUBIMAGE2DEXTPROC)wglGetProcAddress("glMultiTexSubImage2DEXT");
	glCopyMultiTexImage1DEXT = (PFNGLCOPYMULTITEXIMAGE1DEXTPROC)wglGetProcAddress("glCopyMultiTexImage1DEXT");
	glCopyMultiTexImage2DEXT = (PFNGLCOPYMULTITEXIMAGE2DEXTPROC)wglGetProcAddress("glCopyMultiTexImage2DEXT");
	glCopyMultiTexSubImage1DEXT = (PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC)wglGetProcAddress("glCopyMultiTexSubImage1DEXT");
	glCopyMultiTexSubImage2DEXT = (PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC)wglGetProcAddress("glCopyMultiTexSubImage2DEXT");
	glGetMultiTexImageEXT = (PFNGLGETMULTITEXIMAGEEXTPROC)wglGetProcAddress("glGetMultiTexImageEXT");
	glGetMultiTexParameterfvEXT = (PFNGLGETMULTITEXPARAMETERFVEXTPROC)wglGetProcAddress("glGetMultiTexParameterfvEXT");
	glGetMultiTexParameterivEXT = (PFNGLGETMULTITEXPARAMETERIVEXTPROC)wglGetProcAddress("glGetMultiTexParameterivEXT");
	glGetMultiTexLevelParameterfvEXT = (PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC)wglGetProcAddress("glGetMultiTexLevelParameterfvEXT");
	glGetMultiTexLevelParameterivEXT = (PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC)wglGetProcAddress("glGetMultiTexLevelParameterivEXT");
	glMultiTexImage3DEXT = (PFNGLMULTITEXIMAGE3DEXTPROC)wglGetProcAddress("glMultiTexImage3DEXT");
	glMultiTexSubImage3DEXT = (PFNGLMULTITEXSUBIMAGE3DEXTPROC)wglGetProcAddress("glMultiTexSubImage3DEXT");
	glCopyMultiTexSubImage3DEXT = (PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC)wglGetProcAddress("glCopyMultiTexSubImage3DEXT");
	glBindMultiTextureEXT = (PFNGLBINDMULTITEXTUREEXTPROC)wglGetProcAddress("glBindMultiTextureEXT");
	glEnableClientStateIndexedEXT = (PFNGLENABLECLIENTSTATEINDEXEDEXTPROC)wglGetProcAddress("glEnableClientStateIndexedEXT");
	glDisableClientStateIndexedEXT = (PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC)wglGetProcAddress("glDisableClientStateIndexedEXT");
	glMultiTexCoordPointerEXT = (PFNGLMULTITEXCOORDPOINTEREXTPROC)wglGetProcAddress("glMultiTexCoordPointerEXT");
	glMultiTexEnvfEXT = (PFNGLMULTITEXENVFEXTPROC)wglGetProcAddress("glMultiTexEnvfEXT");
	glMultiTexEnvfvEXT = (PFNGLMULTITEXENVFVEXTPROC)wglGetProcAddress("glMultiTexEnvfvEXT");
	glMultiTexEnviEXT = (PFNGLMULTITEXENVIEXTPROC)wglGetProcAddress("glMultiTexEnviEXT");
	glMultiTexEnvivEXT = (PFNGLMULTITEXENVIVEXTPROC)wglGetProcAddress("glMultiTexEnvivEXT");
	glMultiTexGendEXT = (PFNGLMULTITEXGENDEXTPROC)wglGetProcAddress("glMultiTexGendEXT");
	glMultiTexGendvEXT = (PFNGLMULTITEXGENDVEXTPROC)wglGetProcAddress("glMultiTexGendvEXT");
	glMultiTexGenfEXT = (PFNGLMULTITEXGENFEXTPROC)wglGetProcAddress("glMultiTexGenfEXT");
	glMultiTexGenfvEXT = (PFNGLMULTITEXGENFVEXTPROC)wglGetProcAddress("glMultiTexGenfvEXT");
	glMultiTexGeniEXT = (PFNGLMULTITEXGENIEXTPROC)wglGetProcAddress("glMultiTexGeniEXT");
	glMultiTexGenivEXT = (PFNGLMULTITEXGENIVEXTPROC)wglGetProcAddress("glMultiTexGenivEXT");
	glGetMultiTexEnvfvEXT = (PFNGLGETMULTITEXENVFVEXTPROC)wglGetProcAddress("glGetMultiTexEnvfvEXT");
	glGetMultiTexEnvivEXT = (PFNGLGETMULTITEXENVIVEXTPROC)wglGetProcAddress("glGetMultiTexEnvivEXT");
	glGetMultiTexGendvEXT = (PFNGLGETMULTITEXGENDVEXTPROC)wglGetProcAddress("glGetMultiTexGendvEXT");
	glGetMultiTexGenfvEXT = (PFNGLGETMULTITEXGENFVEXTPROC)wglGetProcAddress("glGetMultiTexGenfvEXT");
	glGetMultiTexGenivEXT = (PFNGLGETMULTITEXGENIVEXTPROC)wglGetProcAddress("glGetMultiTexGenivEXT");
	glGetFloatIndexedvEXT = (PFNGLGETFLOATINDEXEDVEXTPROC)wglGetProcAddress("glGetFloatIndexedvEXT");
	glGetDoubleIndexedvEXT = (PFNGLGETDOUBLEINDEXEDVEXTPROC)wglGetProcAddress("glGetDoubleIndexedvEXT");
	glGetPointerIndexedvEXT = (PFNGLGETPOINTERINDEXEDVEXTPROC)wglGetProcAddress("glGetPointerIndexedvEXT");
	glCompressedTextureImage3DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC)wglGetProcAddress("glCompressedTextureImage3DEXT");
	glCompressedTextureImage2DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC)wglGetProcAddress("glCompressedTextureImage2DEXT");
	glCompressedTextureImage1DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC)wglGetProcAddress("glCompressedTextureImage1DEXT");
	glCompressedTextureSubImage3DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC)wglGetProcAddress("glCompressedTextureSubImage3DEXT");
	glCompressedTextureSubImage2DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC)wglGetProcAddress("glCompressedTextureSubImage2DEXT");
	glCompressedTextureSubImage1DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC)wglGetProcAddress("glCompressedTextureSubImage1DEXT");
	glGetCompressedTextureImageEXT = (PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC)wglGetProcAddress("glGetCompressedTextureImageEXT");
	glCompressedMultiTexImage3DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC)wglGetProcAddress("glCompressedMultiTexImage3DEXT");
	glCompressedMultiTexImage2DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC)wglGetProcAddress("glCompressedMultiTexImage2DEXT");
	glCompressedMultiTexImage1DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC)wglGetProcAddress("glCompressedMultiTexImage1DEXT");
	glCompressedMultiTexSubImage3DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC)wglGetProcAddress("glCompressedMultiTexSubImage3DEXT");
	glCompressedMultiTexSubImage2DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC)wglGetProcAddress("glCompressedMultiTexSubImage2DEXT");
	glCompressedMultiTexSubImage1DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC)wglGetProcAddress("glCompressedMultiTexSubImage1DEXT");
	glGetCompressedMultiTexImageEXT = (PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC)wglGetProcAddress("glGetCompressedMultiTexImageEXT");
	glNamedProgramStringEXT = (PFNGLNAMEDPROGRAMSTRINGEXTPROC)wglGetProcAddress("glNamedProgramStringEXT");
	glNamedProgramLocalParameter4dEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC)wglGetProcAddress("glNamedProgramLocalParameter4dEXT");
	glNamedProgramLocalParameter4dvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC)wglGetProcAddress("glNamedProgramLocalParameter4dvEXT");
	glNamedProgramLocalParameter4fEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC)wglGetProcAddress("glNamedProgramLocalParameter4fEXT");
	glNamedProgramLocalParameter4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC)wglGetProcAddress("glNamedProgramLocalParameter4fvEXT");
	glGetNamedProgramLocalParameterdvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC)wglGetProcAddress("glGetNamedProgramLocalParameterdvEXT");
	glGetNamedProgramLocalParameterfvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC)wglGetProcAddress("glGetNamedProgramLocalParameterfvEXT");
	glGetNamedProgramivEXT = (PFNGLGETNAMEDPROGRAMIVEXTPROC)wglGetProcAddress("glGetNamedProgramivEXT");
	glGetNamedProgramStringEXT = (PFNGLGETNAMEDPROGRAMSTRINGEXTPROC)wglGetProcAddress("glGetNamedProgramStringEXT");
	glNamedProgramLocalParameters4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC)wglGetProcAddress("glNamedProgramLocalParameters4fvEXT");
	glNamedProgramLocalParameterI4iEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC)wglGetProcAddress("glNamedProgramLocalParameterI4iEXT");
	glNamedProgramLocalParameterI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC)wglGetProcAddress("glNamedProgramLocalParameterI4ivEXT");
	glNamedProgramLocalParametersI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC)wglGetProcAddress("glNamedProgramLocalParametersI4ivEXT");
	glNamedProgramLocalParameterI4uiEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC)wglGetProcAddress("glNamedProgramLocalParameterI4uiEXT");
	glNamedProgramLocalParameterI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC)wglGetProcAddress("glNamedProgramLocalParameterI4uivEXT");
	glNamedProgramLocalParametersI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC)wglGetProcAddress("glNamedProgramLocalParametersI4uivEXT");
	glGetNamedProgramLocalParameterIivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC)wglGetProcAddress("glGetNamedProgramLocalParameterIivEXT");
	glGetNamedProgramLocalParameterIuivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC)wglGetProcAddress("glGetNamedProgramLocalParameterIuivEXT");
	glTextureParameterIivEXT = (PFNGLTEXTUREPARAMETERIIVEXTPROC)wglGetProcAddress("glTextureParameterIivEXT");
	glTextureParameterIuivEXT = (PFNGLTEXTUREPARAMETERIUIVEXTPROC)wglGetProcAddress("glTextureParameterIuivEXT");
	glGetTextureParameterIivEXT = (PFNGLGETTEXTUREPARAMETERIIVEXTPROC)wglGetProcAddress("glGetTextureParameterIivEXT");
	glGetTextureParameterIuivEXT = (PFNGLGETTEXTUREPARAMETERIUIVEXTPROC)wglGetProcAddress("glGetTextureParameterIuivEXT");
	glMultiTexParameterIivEXT = (PFNGLMULTITEXPARAMETERIIVEXTPROC)wglGetProcAddress("glMultiTexParameterIivEXT");
	glMultiTexParameterIuivEXT = (PFNGLMULTITEXPARAMETERIUIVEXTPROC)wglGetProcAddress("glMultiTexParameterIuivEXT");
	glGetMultiTexParameterIivEXT = (PFNGLGETMULTITEXPARAMETERIIVEXTPROC)wglGetProcAddress("glGetMultiTexParameterIivEXT");
	glGetMultiTexParameterIuivEXT = (PFNGLGETMULTITEXPARAMETERIUIVEXTPROC)wglGetProcAddress("glGetMultiTexParameterIuivEXT");
	glProgramUniform1fEXT = (PFNGLPROGRAMUNIFORM1FEXTPROC)wglGetProcAddress("glProgramUniform1fEXT");
	glProgramUniform2fEXT = (PFNGLPROGRAMUNIFORM2FEXTPROC)wglGetProcAddress("glProgramUniform2fEXT");
	glProgramUniform3fEXT = (PFNGLPROGRAMUNIFORM3FEXTPROC)wglGetProcAddress("glProgramUniform3fEXT");
	glProgramUniform4fEXT = (PFNGLPROGRAMUNIFORM4FEXTPROC)wglGetProcAddress("glProgramUniform4fEXT");
	glProgramUniform1iEXT = (PFNGLPROGRAMUNIFORM1IEXTPROC)wglGetProcAddress("glProgramUniform1iEXT");
	glProgramUniform2iEXT = (PFNGLPROGRAMUNIFORM2IEXTPROC)wglGetProcAddress("glProgramUniform2iEXT");
	glProgramUniform3iEXT = (PFNGLPROGRAMUNIFORM3IEXTPROC)wglGetProcAddress("glProgramUniform3iEXT");
	glProgramUniform4iEXT = (PFNGLPROGRAMUNIFORM4IEXTPROC)wglGetProcAddress("glProgramUniform4iEXT");
	glProgramUniform1fvEXT = (PFNGLPROGRAMUNIFORM1FVEXTPROC)wglGetProcAddress("glProgramUniform1fvEXT");
	glProgramUniform2fvEXT = (PFNGLPROGRAMUNIFORM2FVEXTPROC)wglGetProcAddress("glProgramUniform2fvEXT");
	glProgramUniform3fvEXT = (PFNGLPROGRAMUNIFORM3FVEXTPROC)wglGetProcAddress("glProgramUniform3fvEXT");
	glProgramUniform4fvEXT = (PFNGLPROGRAMUNIFORM4FVEXTPROC)wglGetProcAddress("glProgramUniform4fvEXT");
	glProgramUniform1ivEXT = (PFNGLPROGRAMUNIFORM1IVEXTPROC)wglGetProcAddress("glProgramUniform1ivEXT");
	glProgramUniform2ivEXT = (PFNGLPROGRAMUNIFORM2IVEXTPROC)wglGetProcAddress("glProgramUniform2ivEXT");
	glProgramUniform3ivEXT = (PFNGLPROGRAMUNIFORM3IVEXTPROC)wglGetProcAddress("glProgramUniform3ivEXT");
	glProgramUniform4ivEXT = (PFNGLPROGRAMUNIFORM4IVEXTPROC)wglGetProcAddress("glProgramUniform4ivEXT");
	glProgramUniformMatrix2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC)wglGetProcAddress("glProgramUniformMatrix2fvEXT");
	glProgramUniformMatrix3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC)wglGetProcAddress("glProgramUniformMatrix3fvEXT");
	glProgramUniformMatrix4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC)wglGetProcAddress("glProgramUniformMatrix4fvEXT");
	glProgramUniformMatrix2x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC)wglGetProcAddress("glProgramUniformMatrix2x3fvEXT");
	glProgramUniformMatrix3x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC)wglGetProcAddress("glProgramUniformMatrix3x2fvEXT");
	glProgramUniformMatrix2x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC)wglGetProcAddress("glProgramUniformMatrix2x4fvEXT");
	glProgramUniformMatrix4x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC)wglGetProcAddress("glProgramUniformMatrix4x2fvEXT");
	glProgramUniformMatrix3x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC)wglGetProcAddress("glProgramUniformMatrix3x4fvEXT");
	glProgramUniformMatrix4x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC)wglGetProcAddress("glProgramUniformMatrix4x3fvEXT");
	glProgramUniform1uiEXT = (PFNGLPROGRAMUNIFORM1UIEXTPROC)wglGetProcAddress("glProgramUniform1uiEXT");
	glProgramUniform2uiEXT = (PFNGLPROGRAMUNIFORM2UIEXTPROC)wglGetProcAddress("glProgramUniform2uiEXT");
	glProgramUniform3uiEXT = (PFNGLPROGRAMUNIFORM3UIEXTPROC)wglGetProcAddress("glProgramUniform3uiEXT");
	glProgramUniform4uiEXT = (PFNGLPROGRAMUNIFORM4UIEXTPROC)wglGetProcAddress("glProgramUniform4uiEXT");
	glProgramUniform1uivEXT = (PFNGLPROGRAMUNIFORM1UIVEXTPROC)wglGetProcAddress("glProgramUniform1uivEXT");
	glProgramUniform2uivEXT = (PFNGLPROGRAMUNIFORM2UIVEXTPROC)wglGetProcAddress("glProgramUniform2uivEXT");
	glProgramUniform3uivEXT = (PFNGLPROGRAMUNIFORM3UIVEXTPROC)wglGetProcAddress("glProgramUniform3uivEXT");
	glProgramUniform4uivEXT = (PFNGLPROGRAMUNIFORM4UIVEXTPROC)wglGetProcAddress("glProgramUniform4uivEXT");
	glNamedBufferDataEXT = (PFNGLNAMEDBUFFERDATAEXTPROC)wglGetProcAddress("glNamedBufferDataEXT");
	glNamedBufferSubDataEXT = (PFNGLNAMEDBUFFERSUBDATAEXTPROC)wglGetProcAddress("glNamedBufferSubDataEXT");
	glMapNamedBufferEXT = (PFNGLMAPNAMEDBUFFEREXTPROC)wglGetProcAddress("glMapNamedBufferEXT");
	glUnmapNamedBufferEXT = (PFNGLUNMAPNAMEDBUFFEREXTPROC)wglGetProcAddress("glUnmapNamedBufferEXT");
	glMapNamedBufferRangeEXT = (PFNGLMAPNAMEDBUFFERRANGEEXTPROC)wglGetProcAddress("glMapNamedBufferRangeEXT");
	glFlushMappedNamedBufferRangeEXT = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC)wglGetProcAddress("glFlushMappedNamedBufferRangeEXT");
	glNamedCopyBufferSubDataEXT = (PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC)wglGetProcAddress("glNamedCopyBufferSubDataEXT");
	glGetNamedBufferParameterivEXT = (PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC)wglGetProcAddress("glGetNamedBufferParameterivEXT");
	glGetNamedBufferPointervEXT = (PFNGLGETNAMEDBUFFERPOINTERVEXTPROC)wglGetProcAddress("glGetNamedBufferPointervEXT");
	glGetNamedBufferSubDataEXT = (PFNGLGETNAMEDBUFFERSUBDATAEXTPROC)wglGetProcAddress("glGetNamedBufferSubDataEXT");
	glTextureBufferEXT = (PFNGLTEXTUREBUFFEREXTPROC)wglGetProcAddress("glTextureBufferEXT");
	glMultiTexBufferEXT = (PFNGLMULTITEXBUFFEREXTPROC)wglGetProcAddress("glMultiTexBufferEXT");
	glNamedRenderbufferStorageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC)wglGetProcAddress("glNamedRenderbufferStorageEXT");
	glGetNamedRenderbufferParameterivEXT = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC)wglGetProcAddress("glGetNamedRenderbufferParameterivEXT");
	glCheckNamedFramebufferStatusEXT = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC)wglGetProcAddress("glCheckNamedFramebufferStatusEXT");
	glNamedFramebufferTexture1DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC)wglGetProcAddress("glNamedFramebufferTexture1DEXT");
	glNamedFramebufferTexture2DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC)wglGetProcAddress("glNamedFramebufferTexture2DEXT");
	glNamedFramebufferTexture3DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC)wglGetProcAddress("glNamedFramebufferTexture3DEXT");
	glNamedFramebufferRenderbufferEXT = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC)wglGetProcAddress("glNamedFramebufferRenderbufferEXT");
	glGetNamedFramebufferAttachmentParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)wglGetProcAddress("glGetNamedFramebufferAttachmentParameterivEXT");
	glGenerateTextureMipmapEXT = (PFNGLGENERATETEXTUREMIPMAPEXTPROC)wglGetProcAddress("glGenerateTextureMipmapEXT");
	glGenerateMultiTexMipmapEXT = (PFNGLGENERATEMULTITEXMIPMAPEXTPROC)wglGetProcAddress("glGenerateMultiTexMipmapEXT");
	glFramebufferDrawBufferEXT = (PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC)wglGetProcAddress("glFramebufferDrawBufferEXT");
	glFramebufferDrawBuffersEXT = (PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC)wglGetProcAddress("glFramebufferDrawBuffersEXT");
	glFramebufferReadBufferEXT = (PFNGLFRAMEBUFFERREADBUFFEREXTPROC)wglGetProcAddress("glFramebufferReadBufferEXT");
	glGetFramebufferParameterivEXT = (PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC)wglGetProcAddress("glGetFramebufferParameterivEXT");
	glNamedRenderbufferStorageMultisampleEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)wglGetProcAddress("glNamedRenderbufferStorageMultisampleEXT");
	glNamedRenderbufferStorageMultisampleCoverageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC)wglGetProcAddress("glNamedRenderbufferStorageMultisampleCoverageEXT");
	glNamedFramebufferTextureEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC)wglGetProcAddress("glNamedFramebufferTextureEXT");
	glNamedFramebufferTextureLayerEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC)wglGetProcAddress("glNamedFramebufferTextureLayerEXT");
	glNamedFramebufferTextureFaceEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC)wglGetProcAddress("glNamedFramebufferTextureFaceEXT");
	glTextureRenderbufferEXT = (PFNGLTEXTURERENDERBUFFEREXTPROC)wglGetProcAddress("glTextureRenderbufferEXT");
	glMultiTexRenderbufferEXT = (PFNGLMULTITEXRENDERBUFFEREXTPROC)wglGetProcAddress("glMultiTexRenderbufferEXT");
	glProgramUniform1dEXT = (PFNGLPROGRAMUNIFORM1DEXTPROC)wglGetProcAddress("glProgramUniform1dEXT");
	glProgramUniform2dEXT = (PFNGLPROGRAMUNIFORM2DEXTPROC)wglGetProcAddress("glProgramUniform2dEXT");
	glProgramUniform3dEXT = (PFNGLPROGRAMUNIFORM3DEXTPROC)wglGetProcAddress("glProgramUniform3dEXT");
	glProgramUniform4dEXT = (PFNGLPROGRAMUNIFORM4DEXTPROC)wglGetProcAddress("glProgramUniform4dEXT");
	glProgramUniform1dvEXT = (PFNGLPROGRAMUNIFORM1DVEXTPROC)wglGetProcAddress("glProgramUniform1dvEXT");
	glProgramUniform2dvEXT = (PFNGLPROGRAMUNIFORM2DVEXTPROC)wglGetProcAddress("glProgramUniform2dvEXT");
	glProgramUniform3dvEXT = (PFNGLPROGRAMUNIFORM3DVEXTPROC)wglGetProcAddress("glProgramUniform3dvEXT");
	glProgramUniform4dvEXT = (PFNGLPROGRAMUNIFORM4DVEXTPROC)wglGetProcAddress("glProgramUniform4dvEXT");
	glProgramUniformMatrix2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC)wglGetProcAddress("glProgramUniformMatrix2dvEXT");
	glProgramUniformMatrix3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC)wglGetProcAddress("glProgramUniformMatrix3dvEXT");
	glProgramUniformMatrix4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC)wglGetProcAddress("glProgramUniformMatrix4dvEXT");
	glProgramUniformMatrix2x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC)wglGetProcAddress("glProgramUniformMatrix2x3dvEXT");
	glProgramUniformMatrix2x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC)wglGetProcAddress("glProgramUniformMatrix2x4dvEXT");
	glProgramUniformMatrix3x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC)wglGetProcAddress("glProgramUniformMatrix3x2dvEXT");
	glProgramUniformMatrix3x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC)wglGetProcAddress("glProgramUniformMatrix3x4dvEXT");
	glProgramUniformMatrix4x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC)wglGetProcAddress("glProgramUniformMatrix4x2dvEXT");
	glProgramUniformMatrix4x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC)wglGetProcAddress("glProgramUniformMatrix4x3dvEXT");
}

// GL_EXT_vertex_array_bgra

void glelp::init_GL_EXT_vertex_array_bgra()
{
	if(!glelpInternal::checkAvailable("GL_EXT_vertex_array_bgra"))
		return;

}

// GL_EXT_texture_swizzle

void glelp::init_GL_EXT_texture_swizzle()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_swizzle"))
		return;

}

// GL_NV_explicit_multisample
PFNGLGETMULTISAMPLEFVNVPROC glGetMultisamplefvNV;
PFNGLSAMPLEMASKINDEXEDNVPROC glSampleMaskIndexedNV;
PFNGLTEXRENDERBUFFERNVPROC glTexRenderbufferNV;

void glelp::init_GL_NV_explicit_multisample()
{
	if(!glelpInternal::checkAvailable("GL_NV_explicit_multisample"))
		return;

	glGetMultisamplefvNV = (PFNGLGETMULTISAMPLEFVNVPROC)wglGetProcAddress("glGetMultisamplefvNV");
	glSampleMaskIndexedNV = (PFNGLSAMPLEMASKINDEXEDNVPROC)wglGetProcAddress("glSampleMaskIndexedNV");
	glTexRenderbufferNV = (PFNGLTEXRENDERBUFFERNVPROC)wglGetProcAddress("glTexRenderbufferNV");
}

// GL_NV_transform_feedback2
PFNGLBINDTRANSFORMFEEDBACKNVPROC glBindTransformFeedbackNV;
PFNGLDELETETRANSFORMFEEDBACKSNVPROC glDeleteTransformFeedbacksNV;
PFNGLGENTRANSFORMFEEDBACKSNVPROC glGenTransformFeedbacksNV;
PFNGLISTRANSFORMFEEDBACKNVPROC glIsTransformFeedbackNV;
PFNGLPAUSETRANSFORMFEEDBACKNVPROC glPauseTransformFeedbackNV;
PFNGLRESUMETRANSFORMFEEDBACKNVPROC glResumeTransformFeedbackNV;
PFNGLDRAWTRANSFORMFEEDBACKNVPROC glDrawTransformFeedbackNV;

void glelp::init_GL_NV_transform_feedback2()
{
	if(!glelpInternal::checkAvailable("GL_NV_transform_feedback2"))
		return;

	glBindTransformFeedbackNV = (PFNGLBINDTRANSFORMFEEDBACKNVPROC)wglGetProcAddress("glBindTransformFeedbackNV");
	glDeleteTransformFeedbacksNV = (PFNGLDELETETRANSFORMFEEDBACKSNVPROC)wglGetProcAddress("glDeleteTransformFeedbacksNV");
	glGenTransformFeedbacksNV = (PFNGLGENTRANSFORMFEEDBACKSNVPROC)wglGetProcAddress("glGenTransformFeedbacksNV");
	glIsTransformFeedbackNV = (PFNGLISTRANSFORMFEEDBACKNVPROC)wglGetProcAddress("glIsTransformFeedbackNV");
	glPauseTransformFeedbackNV = (PFNGLPAUSETRANSFORMFEEDBACKNVPROC)wglGetProcAddress("glPauseTransformFeedbackNV");
	glResumeTransformFeedbackNV = (PFNGLRESUMETRANSFORMFEEDBACKNVPROC)wglGetProcAddress("glResumeTransformFeedbackNV");
	glDrawTransformFeedbackNV = (PFNGLDRAWTRANSFORMFEEDBACKNVPROC)wglGetProcAddress("glDrawTransformFeedbackNV");
}

// GL_ATI_meminfo

void glelp::init_GL_ATI_meminfo()
{
	if(!glelpInternal::checkAvailable("GL_ATI_meminfo"))
		return;

}

// GL_AMD_performance_monitor
PFNGLGETPERFMONITORGROUPSAMDPROC glGetPerfMonitorGroupsAMD;
PFNGLGETPERFMONITORCOUNTERSAMDPROC glGetPerfMonitorCountersAMD;
PFNGLGETPERFMONITORGROUPSTRINGAMDPROC glGetPerfMonitorGroupStringAMD;
PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC glGetPerfMonitorCounterStringAMD;
PFNGLGETPERFMONITORCOUNTERINFOAMDPROC glGetPerfMonitorCounterInfoAMD;
PFNGLGENPERFMONITORSAMDPROC glGenPerfMonitorsAMD;
PFNGLDELETEPERFMONITORSAMDPROC glDeletePerfMonitorsAMD;
PFNGLSELECTPERFMONITORCOUNTERSAMDPROC glSelectPerfMonitorCountersAMD;
PFNGLBEGINPERFMONITORAMDPROC glBeginPerfMonitorAMD;
PFNGLENDPERFMONITORAMDPROC glEndPerfMonitorAMD;
PFNGLGETPERFMONITORCOUNTERDATAAMDPROC glGetPerfMonitorCounterDataAMD;

void glelp::init_GL_AMD_performance_monitor()
{
	if(!glelpInternal::checkAvailable("GL_AMD_performance_monitor"))
		return;

	glGetPerfMonitorGroupsAMD = (PFNGLGETPERFMONITORGROUPSAMDPROC)wglGetProcAddress("glGetPerfMonitorGroupsAMD");
	glGetPerfMonitorCountersAMD = (PFNGLGETPERFMONITORCOUNTERSAMDPROC)wglGetProcAddress("glGetPerfMonitorCountersAMD");
	glGetPerfMonitorGroupStringAMD = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC)wglGetProcAddress("glGetPerfMonitorGroupStringAMD");
	glGetPerfMonitorCounterStringAMD = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC)wglGetProcAddress("glGetPerfMonitorCounterStringAMD");
	glGetPerfMonitorCounterInfoAMD = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC)wglGetProcAddress("glGetPerfMonitorCounterInfoAMD");
	glGenPerfMonitorsAMD = (PFNGLGENPERFMONITORSAMDPROC)wglGetProcAddress("glGenPerfMonitorsAMD");
	glDeletePerfMonitorsAMD = (PFNGLDELETEPERFMONITORSAMDPROC)wglGetProcAddress("glDeletePerfMonitorsAMD");
	glSelectPerfMonitorCountersAMD = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC)wglGetProcAddress("glSelectPerfMonitorCountersAMD");
	glBeginPerfMonitorAMD = (PFNGLBEGINPERFMONITORAMDPROC)wglGetProcAddress("glBeginPerfMonitorAMD");
	glEndPerfMonitorAMD = (PFNGLENDPERFMONITORAMDPROC)wglGetProcAddress("glEndPerfMonitorAMD");
	glGetPerfMonitorCounterDataAMD = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC)wglGetProcAddress("glGetPerfMonitorCounterDataAMD");
}

// GL_AMD_texture_texture4

void glelp::init_GL_AMD_texture_texture4()
{
	if(!glelpInternal::checkAvailable("GL_AMD_texture_texture4"))
		return;

}

// GL_AMD_vertex_shader_tesselator
PFNGLTESSELLATIONFACTORAMDPROC glTessellationFactorAMD;
PFNGLTESSELLATIONMODEAMDPROC glTessellationModeAMD;

void glelp::init_GL_AMD_vertex_shader_tesselator()
{
	if(!glelpInternal::checkAvailable("GL_AMD_vertex_shader_tesselator"))
		return;

	glTessellationFactorAMD = (PFNGLTESSELLATIONFACTORAMDPROC)wglGetProcAddress("glTessellationFactorAMD");
	glTessellationModeAMD = (PFNGLTESSELLATIONMODEAMDPROC)wglGetProcAddress("glTessellationModeAMD");
}

// GL_EXT_provoking_vertex
PFNGLPROVOKINGVERTEXEXTPROC glProvokingVertexEXT;

void glelp::init_GL_EXT_provoking_vertex()
{
	if(!glelpInternal::checkAvailable("GL_EXT_provoking_vertex"))
		return;

	glProvokingVertexEXT = (PFNGLPROVOKINGVERTEXEXTPROC)wglGetProcAddress("glProvokingVertexEXT");
}

// GL_EXT_texture_snorm

void glelp::init_GL_EXT_texture_snorm()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_snorm"))
		return;

}

// GL_AMD_draw_buffers_blend
PFNGLBLENDFUNCINDEXEDAMDPROC glBlendFuncIndexedAMD;
PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC glBlendFuncSeparateIndexedAMD;
PFNGLBLENDEQUATIONINDEXEDAMDPROC glBlendEquationIndexedAMD;
PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC glBlendEquationSeparateIndexedAMD;

void glelp::init_GL_AMD_draw_buffers_blend()
{
	if(!glelpInternal::checkAvailable("GL_AMD_draw_buffers_blend"))
		return;

	glBlendFuncIndexedAMD = (PFNGLBLENDFUNCINDEXEDAMDPROC)wglGetProcAddress("glBlendFuncIndexedAMD");
	glBlendFuncSeparateIndexedAMD = (PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC)wglGetProcAddress("glBlendFuncSeparateIndexedAMD");
	glBlendEquationIndexedAMD = (PFNGLBLENDEQUATIONINDEXEDAMDPROC)wglGetProcAddress("glBlendEquationIndexedAMD");
	glBlendEquationSeparateIndexedAMD = (PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC)wglGetProcAddress("glBlendEquationSeparateIndexedAMD");
}

// GL_APPLE_texture_range
PFNGLTEXTURERANGEAPPLEPROC glTextureRangeAPPLE;
PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC glGetTexParameterPointervAPPLE;

void glelp::init_GL_APPLE_texture_range()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_texture_range"))
		return;

	glTextureRangeAPPLE = (PFNGLTEXTURERANGEAPPLEPROC)wglGetProcAddress("glTextureRangeAPPLE");
	glGetTexParameterPointervAPPLE = (PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC)wglGetProcAddress("glGetTexParameterPointervAPPLE");
}

// GL_APPLE_float_pixels

void glelp::init_GL_APPLE_float_pixels()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_float_pixels"))
		return;

}

// GL_APPLE_vertex_program_evaluators
PFNGLENABLEVERTEXATTRIBAPPLEPROC glEnableVertexAttribAPPLE;
PFNGLDISABLEVERTEXATTRIBAPPLEPROC glDisableVertexAttribAPPLE;
PFNGLISVERTEXATTRIBENABLEDAPPLEPROC glIsVertexAttribEnabledAPPLE;
PFNGLMAPVERTEXATTRIB1DAPPLEPROC glMapVertexAttrib1dAPPLE;
PFNGLMAPVERTEXATTRIB1FAPPLEPROC glMapVertexAttrib1fAPPLE;
PFNGLMAPVERTEXATTRIB2DAPPLEPROC glMapVertexAttrib2dAPPLE;
PFNGLMAPVERTEXATTRIB2FAPPLEPROC glMapVertexAttrib2fAPPLE;

void glelp::init_GL_APPLE_vertex_program_evaluators()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_vertex_program_evaluators"))
		return;

	glEnableVertexAttribAPPLE = (PFNGLENABLEVERTEXATTRIBAPPLEPROC)wglGetProcAddress("glEnableVertexAttribAPPLE");
	glDisableVertexAttribAPPLE = (PFNGLDISABLEVERTEXATTRIBAPPLEPROC)wglGetProcAddress("glDisableVertexAttribAPPLE");
	glIsVertexAttribEnabledAPPLE = (PFNGLISVERTEXATTRIBENABLEDAPPLEPROC)wglGetProcAddress("glIsVertexAttribEnabledAPPLE");
	glMapVertexAttrib1dAPPLE = (PFNGLMAPVERTEXATTRIB1DAPPLEPROC)wglGetProcAddress("glMapVertexAttrib1dAPPLE");
	glMapVertexAttrib1fAPPLE = (PFNGLMAPVERTEXATTRIB1FAPPLEPROC)wglGetProcAddress("glMapVertexAttrib1fAPPLE");
	glMapVertexAttrib2dAPPLE = (PFNGLMAPVERTEXATTRIB2DAPPLEPROC)wglGetProcAddress("glMapVertexAttrib2dAPPLE");
	glMapVertexAttrib2fAPPLE = (PFNGLMAPVERTEXATTRIB2FAPPLEPROC)wglGetProcAddress("glMapVertexAttrib2fAPPLE");
}

// GL_APPLE_aux_depth_stencil

void glelp::init_GL_APPLE_aux_depth_stencil()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_aux_depth_stencil"))
		return;

}

// GL_APPLE_object_purgeable
PFNGLOBJECTPURGEABLEAPPLEPROC glObjectPurgeableAPPLE;
PFNGLOBJECTUNPURGEABLEAPPLEPROC glObjectUnpurgeableAPPLE;
PFNGLGETOBJECTPARAMETERIVAPPLEPROC glGetObjectParameterivAPPLE;

void glelp::init_GL_APPLE_object_purgeable()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_object_purgeable"))
		return;

	glObjectPurgeableAPPLE = (PFNGLOBJECTPURGEABLEAPPLEPROC)wglGetProcAddress("glObjectPurgeableAPPLE");
	glObjectUnpurgeableAPPLE = (PFNGLOBJECTUNPURGEABLEAPPLEPROC)wglGetProcAddress("glObjectUnpurgeableAPPLE");
	glGetObjectParameterivAPPLE = (PFNGLGETOBJECTPARAMETERIVAPPLEPROC)wglGetProcAddress("glGetObjectParameterivAPPLE");
}

// GL_APPLE_row_bytes

void glelp::init_GL_APPLE_row_bytes()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_row_bytes"))
		return;

}

// GL_APPLE_rgb_422

void glelp::init_GL_APPLE_rgb_422()
{
	if(!glelpInternal::checkAvailable("GL_APPLE_rgb_422"))
		return;

}

// GL_NV_video_capture
PFNGLBEGINVIDEOCAPTURENVPROC glBeginVideoCaptureNV;
PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC glBindVideoCaptureStreamBufferNV;
PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC glBindVideoCaptureStreamTextureNV;
PFNGLENDVIDEOCAPTURENVPROC glEndVideoCaptureNV;
PFNGLGETVIDEOCAPTUREIVNVPROC glGetVideoCaptureivNV;
PFNGLGETVIDEOCAPTURESTREAMIVNVPROC glGetVideoCaptureStreamivNV;
PFNGLGETVIDEOCAPTURESTREAMFVNVPROC glGetVideoCaptureStreamfvNV;
PFNGLGETVIDEOCAPTURESTREAMDVNVPROC glGetVideoCaptureStreamdvNV;
PFNGLVIDEOCAPTURENVPROC glVideoCaptureNV;
PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC glVideoCaptureStreamParameterivNV;
PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC glVideoCaptureStreamParameterfvNV;
PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC glVideoCaptureStreamParameterdvNV;

void glelp::init_GL_NV_video_capture()
{
	if(!glelpInternal::checkAvailable("GL_NV_video_capture"))
		return;

	glBeginVideoCaptureNV = (PFNGLBEGINVIDEOCAPTURENVPROC)wglGetProcAddress("glBeginVideoCaptureNV");
	glBindVideoCaptureStreamBufferNV = (PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC)wglGetProcAddress("glBindVideoCaptureStreamBufferNV");
	glBindVideoCaptureStreamTextureNV = (PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC)wglGetProcAddress("glBindVideoCaptureStreamTextureNV");
	glEndVideoCaptureNV = (PFNGLENDVIDEOCAPTURENVPROC)wglGetProcAddress("glEndVideoCaptureNV");
	glGetVideoCaptureivNV = (PFNGLGETVIDEOCAPTUREIVNVPROC)wglGetProcAddress("glGetVideoCaptureivNV");
	glGetVideoCaptureStreamivNV = (PFNGLGETVIDEOCAPTURESTREAMIVNVPROC)wglGetProcAddress("glGetVideoCaptureStreamivNV");
	glGetVideoCaptureStreamfvNV = (PFNGLGETVIDEOCAPTURESTREAMFVNVPROC)wglGetProcAddress("glGetVideoCaptureStreamfvNV");
	glGetVideoCaptureStreamdvNV = (PFNGLGETVIDEOCAPTURESTREAMDVNVPROC)wglGetProcAddress("glGetVideoCaptureStreamdvNV");
	glVideoCaptureNV = (PFNGLVIDEOCAPTURENVPROC)wglGetProcAddress("glVideoCaptureNV");
	glVideoCaptureStreamParameterivNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC)wglGetProcAddress("glVideoCaptureStreamParameterivNV");
	glVideoCaptureStreamParameterfvNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC)wglGetProcAddress("glVideoCaptureStreamParameterfvNV");
	glVideoCaptureStreamParameterdvNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC)wglGetProcAddress("glVideoCaptureStreamParameterdvNV");
}

// GL_NV_copy_image
PFNGLCOPYIMAGESUBDATANVPROC glCopyImageSubDataNV;

void glelp::init_GL_NV_copy_image()
{
	if(!glelpInternal::checkAvailable("GL_NV_copy_image"))
		return;

	glCopyImageSubDataNV = (PFNGLCOPYIMAGESUBDATANVPROC)wglGetProcAddress("glCopyImageSubDataNV");
}

// GL_EXT_separate_shader_objects
PFNGLUSESHADERPROGRAMEXTPROC glUseShaderProgramEXT;
PFNGLACTIVEPROGRAMEXTPROC glActiveProgramEXT;
PFNGLCREATESHADERPROGRAMEXTPROC glCreateShaderProgramEXT;

void glelp::init_GL_EXT_separate_shader_objects()
{
	if(!glelpInternal::checkAvailable("GL_EXT_separate_shader_objects"))
		return;

	glUseShaderProgramEXT = (PFNGLUSESHADERPROGRAMEXTPROC)wglGetProcAddress("glUseShaderProgramEXT");
	glActiveProgramEXT = (PFNGLACTIVEPROGRAMEXTPROC)wglGetProcAddress("glActiveProgramEXT");
	glCreateShaderProgramEXT = (PFNGLCREATESHADERPROGRAMEXTPROC)wglGetProcAddress("glCreateShaderProgramEXT");
}

// GL_NV_parameter_buffer_object2

void glelp::init_GL_NV_parameter_buffer_object2()
{
	if(!glelpInternal::checkAvailable("GL_NV_parameter_buffer_object2"))
		return;

}

// GL_NV_shader_buffer_load
PFNGLMAKEBUFFERRESIDENTNVPROC glMakeBufferResidentNV;
PFNGLMAKEBUFFERNONRESIDENTNVPROC glMakeBufferNonResidentNV;
PFNGLISBUFFERRESIDENTNVPROC glIsBufferResidentNV;
PFNGLMAKENAMEDBUFFERRESIDENTNVPROC glMakeNamedBufferResidentNV;
PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC glMakeNamedBufferNonResidentNV;
PFNGLISNAMEDBUFFERRESIDENTNVPROC glIsNamedBufferResidentNV;
PFNGLGETBUFFERPARAMETERUI64VNVPROC glGetBufferParameterui64vNV;
PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC glGetNamedBufferParameterui64vNV;
PFNGLGETINTEGERUI64VNVPROC glGetIntegerui64vNV;
PFNGLUNIFORMUI64NVPROC glUniformui64NV;
PFNGLUNIFORMUI64VNVPROC glUniformui64vNV;
PFNGLGETUNIFORMUI64VNVPROC glGetUniformui64vNV;
PFNGLPROGRAMUNIFORMUI64NVPROC glProgramUniformui64NV;
PFNGLPROGRAMUNIFORMUI64VNVPROC glProgramUniformui64vNV;

void glelp::init_GL_NV_shader_buffer_load()
{
	if(!glelpInternal::checkAvailable("GL_NV_shader_buffer_load"))
		return;

	glMakeBufferResidentNV = (PFNGLMAKEBUFFERRESIDENTNVPROC)wglGetProcAddress("glMakeBufferResidentNV");
	glMakeBufferNonResidentNV = (PFNGLMAKEBUFFERNONRESIDENTNVPROC)wglGetProcAddress("glMakeBufferNonResidentNV");
	glIsBufferResidentNV = (PFNGLISBUFFERRESIDENTNVPROC)wglGetProcAddress("glIsBufferResidentNV");
	glMakeNamedBufferResidentNV = (PFNGLMAKENAMEDBUFFERRESIDENTNVPROC)wglGetProcAddress("glMakeNamedBufferResidentNV");
	glMakeNamedBufferNonResidentNV = (PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC)wglGetProcAddress("glMakeNamedBufferNonResidentNV");
	glIsNamedBufferResidentNV = (PFNGLISNAMEDBUFFERRESIDENTNVPROC)wglGetProcAddress("glIsNamedBufferResidentNV");
	glGetBufferParameterui64vNV = (PFNGLGETBUFFERPARAMETERUI64VNVPROC)wglGetProcAddress("glGetBufferParameterui64vNV");
	glGetNamedBufferParameterui64vNV = (PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC)wglGetProcAddress("glGetNamedBufferParameterui64vNV");
	glGetIntegerui64vNV = (PFNGLGETINTEGERUI64VNVPROC)wglGetProcAddress("glGetIntegerui64vNV");
	glUniformui64NV = (PFNGLUNIFORMUI64NVPROC)wglGetProcAddress("glUniformui64NV");
	glUniformui64vNV = (PFNGLUNIFORMUI64VNVPROC)wglGetProcAddress("glUniformui64vNV");
	glGetUniformui64vNV = (PFNGLGETUNIFORMUI64VNVPROC)wglGetProcAddress("glGetUniformui64vNV");
	glProgramUniformui64NV = (PFNGLPROGRAMUNIFORMUI64NVPROC)wglGetProcAddress("glProgramUniformui64NV");
	glProgramUniformui64vNV = (PFNGLPROGRAMUNIFORMUI64VNVPROC)wglGetProcAddress("glProgramUniformui64vNV");
}

// GL_NV_vertex_buffer_unified_memory
PFNGLBUFFERADDRESSRANGENVPROC glBufferAddressRangeNV;
PFNGLVERTEXFORMATNVPROC glVertexFormatNV;
PFNGLNORMALFORMATNVPROC glNormalFormatNV;
PFNGLCOLORFORMATNVPROC glColorFormatNV;
PFNGLINDEXFORMATNVPROC glIndexFormatNV;
PFNGLTEXCOORDFORMATNVPROC glTexCoordFormatNV;
PFNGLEDGEFLAGFORMATNVPROC glEdgeFlagFormatNV;
PFNGLSECONDARYCOLORFORMATNVPROC glSecondaryColorFormatNV;
PFNGLFOGCOORDFORMATNVPROC glFogCoordFormatNV;
PFNGLVERTEXATTRIBFORMATNVPROC glVertexAttribFormatNV;
PFNGLVERTEXATTRIBIFORMATNVPROC glVertexAttribIFormatNV;
PFNGLGETINTEGERUI64I_VNVPROC glGetIntegerui64i_vNV;

void glelp::init_GL_NV_vertex_buffer_unified_memory()
{
	if(!glelpInternal::checkAvailable("GL_NV_vertex_buffer_unified_memory"))
		return;

	glBufferAddressRangeNV = (PFNGLBUFFERADDRESSRANGENVPROC)wglGetProcAddress("glBufferAddressRangeNV");
	glVertexFormatNV = (PFNGLVERTEXFORMATNVPROC)wglGetProcAddress("glVertexFormatNV");
	glNormalFormatNV = (PFNGLNORMALFORMATNVPROC)wglGetProcAddress("glNormalFormatNV");
	glColorFormatNV = (PFNGLCOLORFORMATNVPROC)wglGetProcAddress("glColorFormatNV");
	glIndexFormatNV = (PFNGLINDEXFORMATNVPROC)wglGetProcAddress("glIndexFormatNV");
	glTexCoordFormatNV = (PFNGLTEXCOORDFORMATNVPROC)wglGetProcAddress("glTexCoordFormatNV");
	glEdgeFlagFormatNV = (PFNGLEDGEFLAGFORMATNVPROC)wglGetProcAddress("glEdgeFlagFormatNV");
	glSecondaryColorFormatNV = (PFNGLSECONDARYCOLORFORMATNVPROC)wglGetProcAddress("glSecondaryColorFormatNV");
	glFogCoordFormatNV = (PFNGLFOGCOORDFORMATNVPROC)wglGetProcAddress("glFogCoordFormatNV");
	glVertexAttribFormatNV = (PFNGLVERTEXATTRIBFORMATNVPROC)wglGetProcAddress("glVertexAttribFormatNV");
	glVertexAttribIFormatNV = (PFNGLVERTEXATTRIBIFORMATNVPROC)wglGetProcAddress("glVertexAttribIFormatNV");
	glGetIntegerui64i_vNV = (PFNGLGETINTEGERUI64I_VNVPROC)wglGetProcAddress("glGetIntegerui64i_vNV");
}

// GL_NV_texture_barrier
PFNGLTEXTUREBARRIERNVPROC glTextureBarrierNV;

void glelp::init_GL_NV_texture_barrier()
{
	if(!glelpInternal::checkAvailable("GL_NV_texture_barrier"))
		return;

	glTextureBarrierNV = (PFNGLTEXTUREBARRIERNVPROC)wglGetProcAddress("glTextureBarrierNV");
}

// GL_AMD_shader_stencil_export

void glelp::init_GL_AMD_shader_stencil_export()
{
	if(!glelpInternal::checkAvailable("GL_AMD_shader_stencil_export"))
		return;

}

// GL_AMD_seamless_cubemap_per_texture

void glelp::init_GL_AMD_seamless_cubemap_per_texture()
{
	if(!glelpInternal::checkAvailable("GL_AMD_seamless_cubemap_per_texture"))
		return;

}

// GL_AMD_conservative_depth

void glelp::init_GL_AMD_conservative_depth()
{
	if(!glelpInternal::checkAvailable("GL_AMD_conservative_depth"))
		return;

}

// GL_EXT_shader_image_load_store
PFNGLBINDIMAGETEXTUREEXTPROC glBindImageTextureEXT;
PFNGLMEMORYBARRIEREXTPROC glMemoryBarrierEXT;

void glelp::init_GL_EXT_shader_image_load_store()
{
	if(!glelpInternal::checkAvailable("GL_EXT_shader_image_load_store"))
		return;

	glBindImageTextureEXT = (PFNGLBINDIMAGETEXTUREEXTPROC)wglGetProcAddress("glBindImageTextureEXT");
	glMemoryBarrierEXT = (PFNGLMEMORYBARRIEREXTPROC)wglGetProcAddress("glMemoryBarrierEXT");
}

// GL_EXT_vertex_attrib_64bit
PFNGLVERTEXATTRIBL1DEXTPROC glVertexAttribL1dEXT;
PFNGLVERTEXATTRIBL2DEXTPROC glVertexAttribL2dEXT;
PFNGLVERTEXATTRIBL3DEXTPROC glVertexAttribL3dEXT;
PFNGLVERTEXATTRIBL4DEXTPROC glVertexAttribL4dEXT;
PFNGLVERTEXATTRIBL1DVEXTPROC glVertexAttribL1dvEXT;
PFNGLVERTEXATTRIBL2DVEXTPROC glVertexAttribL2dvEXT;
PFNGLVERTEXATTRIBL3DVEXTPROC glVertexAttribL3dvEXT;
PFNGLVERTEXATTRIBL4DVEXTPROC glVertexAttribL4dvEXT;
PFNGLVERTEXATTRIBLPOINTEREXTPROC glVertexAttribLPointerEXT;
PFNGLGETVERTEXATTRIBLDVEXTPROC glGetVertexAttribLdvEXT;
PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC glVertexArrayVertexAttribLOffsetEXT;

void glelp::init_GL_EXT_vertex_attrib_64bit()
{
	if(!glelpInternal::checkAvailable("GL_EXT_vertex_attrib_64bit"))
		return;

	glVertexAttribL1dEXT = (PFNGLVERTEXATTRIBL1DEXTPROC)wglGetProcAddress("glVertexAttribL1dEXT");
	glVertexAttribL2dEXT = (PFNGLVERTEXATTRIBL2DEXTPROC)wglGetProcAddress("glVertexAttribL2dEXT");
	glVertexAttribL3dEXT = (PFNGLVERTEXATTRIBL3DEXTPROC)wglGetProcAddress("glVertexAttribL3dEXT");
	glVertexAttribL4dEXT = (PFNGLVERTEXATTRIBL4DEXTPROC)wglGetProcAddress("glVertexAttribL4dEXT");
	glVertexAttribL1dvEXT = (PFNGLVERTEXATTRIBL1DVEXTPROC)wglGetProcAddress("glVertexAttribL1dvEXT");
	glVertexAttribL2dvEXT = (PFNGLVERTEXATTRIBL2DVEXTPROC)wglGetProcAddress("glVertexAttribL2dvEXT");
	glVertexAttribL3dvEXT = (PFNGLVERTEXATTRIBL3DVEXTPROC)wglGetProcAddress("glVertexAttribL3dvEXT");
	glVertexAttribL4dvEXT = (PFNGLVERTEXATTRIBL4DVEXTPROC)wglGetProcAddress("glVertexAttribL4dvEXT");
	glVertexAttribLPointerEXT = (PFNGLVERTEXATTRIBLPOINTEREXTPROC)wglGetProcAddress("glVertexAttribLPointerEXT");
	glGetVertexAttribLdvEXT = (PFNGLGETVERTEXATTRIBLDVEXTPROC)wglGetProcAddress("glGetVertexAttribLdvEXT");
	glVertexArrayVertexAttribLOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC)wglGetProcAddress("glVertexArrayVertexAttribLOffsetEXT");
}

// GL_NV_gpu_program5
PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC glProgramSubroutineParametersuivNV;
PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC glGetProgramSubroutineParameteruivNV;

void glelp::init_GL_NV_gpu_program5()
{
	if(!glelpInternal::checkAvailable("GL_NV_gpu_program5"))
		return;

	glProgramSubroutineParametersuivNV = (PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC)wglGetProcAddress("glProgramSubroutineParametersuivNV");
	glGetProgramSubroutineParameteruivNV = (PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC)wglGetProcAddress("glGetProgramSubroutineParameteruivNV");
}

// GL_NV_gpu_shader5
PFNGLUNIFORM1I64NVPROC glUniform1i64NV;
PFNGLUNIFORM2I64NVPROC glUniform2i64NV;
PFNGLUNIFORM3I64NVPROC glUniform3i64NV;
PFNGLUNIFORM4I64NVPROC glUniform4i64NV;
PFNGLUNIFORM1I64VNVPROC glUniform1i64vNV;
PFNGLUNIFORM2I64VNVPROC glUniform2i64vNV;
PFNGLUNIFORM3I64VNVPROC glUniform3i64vNV;
PFNGLUNIFORM4I64VNVPROC glUniform4i64vNV;
PFNGLUNIFORM1UI64NVPROC glUniform1ui64NV;
PFNGLUNIFORM2UI64NVPROC glUniform2ui64NV;
PFNGLUNIFORM3UI64NVPROC glUniform3ui64NV;
PFNGLUNIFORM4UI64NVPROC glUniform4ui64NV;
PFNGLUNIFORM1UI64VNVPROC glUniform1ui64vNV;
PFNGLUNIFORM2UI64VNVPROC glUniform2ui64vNV;
PFNGLUNIFORM3UI64VNVPROC glUniform3ui64vNV;
PFNGLUNIFORM4UI64VNVPROC glUniform4ui64vNV;
PFNGLGETUNIFORMI64VNVPROC glGetUniformi64vNV;
PFNGLPROGRAMUNIFORM1I64NVPROC glProgramUniform1i64NV;
PFNGLPROGRAMUNIFORM2I64NVPROC glProgramUniform2i64NV;
PFNGLPROGRAMUNIFORM3I64NVPROC glProgramUniform3i64NV;
PFNGLPROGRAMUNIFORM4I64NVPROC glProgramUniform4i64NV;
PFNGLPROGRAMUNIFORM1I64VNVPROC glProgramUniform1i64vNV;
PFNGLPROGRAMUNIFORM2I64VNVPROC glProgramUniform2i64vNV;
PFNGLPROGRAMUNIFORM3I64VNVPROC glProgramUniform3i64vNV;
PFNGLPROGRAMUNIFORM4I64VNVPROC glProgramUniform4i64vNV;
PFNGLPROGRAMUNIFORM1UI64NVPROC glProgramUniform1ui64NV;
PFNGLPROGRAMUNIFORM2UI64NVPROC glProgramUniform2ui64NV;
PFNGLPROGRAMUNIFORM3UI64NVPROC glProgramUniform3ui64NV;
PFNGLPROGRAMUNIFORM4UI64NVPROC glProgramUniform4ui64NV;
PFNGLPROGRAMUNIFORM1UI64VNVPROC glProgramUniform1ui64vNV;
PFNGLPROGRAMUNIFORM2UI64VNVPROC glProgramUniform2ui64vNV;
PFNGLPROGRAMUNIFORM3UI64VNVPROC glProgramUniform3ui64vNV;
PFNGLPROGRAMUNIFORM4UI64VNVPROC glProgramUniform4ui64vNV;

void glelp::init_GL_NV_gpu_shader5()
{
	if(!glelpInternal::checkAvailable("GL_NV_gpu_shader5"))
		return;

	glUniform1i64NV = (PFNGLUNIFORM1I64NVPROC)wglGetProcAddress("glUniform1i64NV");
	glUniform2i64NV = (PFNGLUNIFORM2I64NVPROC)wglGetProcAddress("glUniform2i64NV");
	glUniform3i64NV = (PFNGLUNIFORM3I64NVPROC)wglGetProcAddress("glUniform3i64NV");
	glUniform4i64NV = (PFNGLUNIFORM4I64NVPROC)wglGetProcAddress("glUniform4i64NV");
	glUniform1i64vNV = (PFNGLUNIFORM1I64VNVPROC)wglGetProcAddress("glUniform1i64vNV");
	glUniform2i64vNV = (PFNGLUNIFORM2I64VNVPROC)wglGetProcAddress("glUniform2i64vNV");
	glUniform3i64vNV = (PFNGLUNIFORM3I64VNVPROC)wglGetProcAddress("glUniform3i64vNV");
	glUniform4i64vNV = (PFNGLUNIFORM4I64VNVPROC)wglGetProcAddress("glUniform4i64vNV");
	glUniform1ui64NV = (PFNGLUNIFORM1UI64NVPROC)wglGetProcAddress("glUniform1ui64NV");
	glUniform2ui64NV = (PFNGLUNIFORM2UI64NVPROC)wglGetProcAddress("glUniform2ui64NV");
	glUniform3ui64NV = (PFNGLUNIFORM3UI64NVPROC)wglGetProcAddress("glUniform3ui64NV");
	glUniform4ui64NV = (PFNGLUNIFORM4UI64NVPROC)wglGetProcAddress("glUniform4ui64NV");
	glUniform1ui64vNV = (PFNGLUNIFORM1UI64VNVPROC)wglGetProcAddress("glUniform1ui64vNV");
	glUniform2ui64vNV = (PFNGLUNIFORM2UI64VNVPROC)wglGetProcAddress("glUniform2ui64vNV");
	glUniform3ui64vNV = (PFNGLUNIFORM3UI64VNVPROC)wglGetProcAddress("glUniform3ui64vNV");
	glUniform4ui64vNV = (PFNGLUNIFORM4UI64VNVPROC)wglGetProcAddress("glUniform4ui64vNV");
	glGetUniformi64vNV = (PFNGLGETUNIFORMI64VNVPROC)wglGetProcAddress("glGetUniformi64vNV");
	glProgramUniform1i64NV = (PFNGLPROGRAMUNIFORM1I64NVPROC)wglGetProcAddress("glProgramUniform1i64NV");
	glProgramUniform2i64NV = (PFNGLPROGRAMUNIFORM2I64NVPROC)wglGetProcAddress("glProgramUniform2i64NV");
	glProgramUniform3i64NV = (PFNGLPROGRAMUNIFORM3I64NVPROC)wglGetProcAddress("glProgramUniform3i64NV");
	glProgramUniform4i64NV = (PFNGLPROGRAMUNIFORM4I64NVPROC)wglGetProcAddress("glProgramUniform4i64NV");
	glProgramUniform1i64vNV = (PFNGLPROGRAMUNIFORM1I64VNVPROC)wglGetProcAddress("glProgramUniform1i64vNV");
	glProgramUniform2i64vNV = (PFNGLPROGRAMUNIFORM2I64VNVPROC)wglGetProcAddress("glProgramUniform2i64vNV");
	glProgramUniform3i64vNV = (PFNGLPROGRAMUNIFORM3I64VNVPROC)wglGetProcAddress("glProgramUniform3i64vNV");
	glProgramUniform4i64vNV = (PFNGLPROGRAMUNIFORM4I64VNVPROC)wglGetProcAddress("glProgramUniform4i64vNV");
	glProgramUniform1ui64NV = (PFNGLPROGRAMUNIFORM1UI64NVPROC)wglGetProcAddress("glProgramUniform1ui64NV");
	glProgramUniform2ui64NV = (PFNGLPROGRAMUNIFORM2UI64NVPROC)wglGetProcAddress("glProgramUniform2ui64NV");
	glProgramUniform3ui64NV = (PFNGLPROGRAMUNIFORM3UI64NVPROC)wglGetProcAddress("glProgramUniform3ui64NV");
	glProgramUniform4ui64NV = (PFNGLPROGRAMUNIFORM4UI64NVPROC)wglGetProcAddress("glProgramUniform4ui64NV");
	glProgramUniform1ui64vNV = (PFNGLPROGRAMUNIFORM1UI64VNVPROC)wglGetProcAddress("glProgramUniform1ui64vNV");
	glProgramUniform2ui64vNV = (PFNGLPROGRAMUNIFORM2UI64VNVPROC)wglGetProcAddress("glProgramUniform2ui64vNV");
	glProgramUniform3ui64vNV = (PFNGLPROGRAMUNIFORM3UI64VNVPROC)wglGetProcAddress("glProgramUniform3ui64vNV");
	glProgramUniform4ui64vNV = (PFNGLPROGRAMUNIFORM4UI64VNVPROC)wglGetProcAddress("glProgramUniform4ui64vNV");
}

// GL_NV_shader_buffer_store

void glelp::init_GL_NV_shader_buffer_store()
{
	if(!glelpInternal::checkAvailable("GL_NV_shader_buffer_store"))
		return;

}

// GL_NV_tessellation_program5

void glelp::init_GL_NV_tessellation_program5()
{
	if(!glelpInternal::checkAvailable("GL_NV_tessellation_program5"))
		return;

}

// GL_NV_vertex_attrib_integer_64bit
PFNGLVERTEXATTRIBL1I64NVPROC glVertexAttribL1i64NV;
PFNGLVERTEXATTRIBL2I64NVPROC glVertexAttribL2i64NV;
PFNGLVERTEXATTRIBL3I64NVPROC glVertexAttribL3i64NV;
PFNGLVERTEXATTRIBL4I64NVPROC glVertexAttribL4i64NV;
PFNGLVERTEXATTRIBL1I64VNVPROC glVertexAttribL1i64vNV;
PFNGLVERTEXATTRIBL2I64VNVPROC glVertexAttribL2i64vNV;
PFNGLVERTEXATTRIBL3I64VNVPROC glVertexAttribL3i64vNV;
PFNGLVERTEXATTRIBL4I64VNVPROC glVertexAttribL4i64vNV;
PFNGLVERTEXATTRIBL1UI64NVPROC glVertexAttribL1ui64NV;
PFNGLVERTEXATTRIBL2UI64NVPROC glVertexAttribL2ui64NV;
PFNGLVERTEXATTRIBL3UI64NVPROC glVertexAttribL3ui64NV;
PFNGLVERTEXATTRIBL4UI64NVPROC glVertexAttribL4ui64NV;
PFNGLVERTEXATTRIBL1UI64VNVPROC glVertexAttribL1ui64vNV;
PFNGLVERTEXATTRIBL2UI64VNVPROC glVertexAttribL2ui64vNV;
PFNGLVERTEXATTRIBL3UI64VNVPROC glVertexAttribL3ui64vNV;
PFNGLVERTEXATTRIBL4UI64VNVPROC glVertexAttribL4ui64vNV;
PFNGLGETVERTEXATTRIBLI64VNVPROC glGetVertexAttribLi64vNV;
PFNGLGETVERTEXATTRIBLUI64VNVPROC glGetVertexAttribLui64vNV;
PFNGLVERTEXATTRIBLFORMATNVPROC glVertexAttribLFormatNV;

void glelp::init_GL_NV_vertex_attrib_integer_64bit()
{
	if(!glelpInternal::checkAvailable("GL_NV_vertex_attrib_integer_64bit"))
		return;

	glVertexAttribL1i64NV = (PFNGLVERTEXATTRIBL1I64NVPROC)wglGetProcAddress("glVertexAttribL1i64NV");
	glVertexAttribL2i64NV = (PFNGLVERTEXATTRIBL2I64NVPROC)wglGetProcAddress("glVertexAttribL2i64NV");
	glVertexAttribL3i64NV = (PFNGLVERTEXATTRIBL3I64NVPROC)wglGetProcAddress("glVertexAttribL3i64NV");
	glVertexAttribL4i64NV = (PFNGLVERTEXATTRIBL4I64NVPROC)wglGetProcAddress("glVertexAttribL4i64NV");
	glVertexAttribL1i64vNV = (PFNGLVERTEXATTRIBL1I64VNVPROC)wglGetProcAddress("glVertexAttribL1i64vNV");
	glVertexAttribL2i64vNV = (PFNGLVERTEXATTRIBL2I64VNVPROC)wglGetProcAddress("glVertexAttribL2i64vNV");
	glVertexAttribL3i64vNV = (PFNGLVERTEXATTRIBL3I64VNVPROC)wglGetProcAddress("glVertexAttribL3i64vNV");
	glVertexAttribL4i64vNV = (PFNGLVERTEXATTRIBL4I64VNVPROC)wglGetProcAddress("glVertexAttribL4i64vNV");
	glVertexAttribL1ui64NV = (PFNGLVERTEXATTRIBL1UI64NVPROC)wglGetProcAddress("glVertexAttribL1ui64NV");
	glVertexAttribL2ui64NV = (PFNGLVERTEXATTRIBL2UI64NVPROC)wglGetProcAddress("glVertexAttribL2ui64NV");
	glVertexAttribL3ui64NV = (PFNGLVERTEXATTRIBL3UI64NVPROC)wglGetProcAddress("glVertexAttribL3ui64NV");
	glVertexAttribL4ui64NV = (PFNGLVERTEXATTRIBL4UI64NVPROC)wglGetProcAddress("glVertexAttribL4ui64NV");
	glVertexAttribL1ui64vNV = (PFNGLVERTEXATTRIBL1UI64VNVPROC)wglGetProcAddress("glVertexAttribL1ui64vNV");
	glVertexAttribL2ui64vNV = (PFNGLVERTEXATTRIBL2UI64VNVPROC)wglGetProcAddress("glVertexAttribL2ui64vNV");
	glVertexAttribL3ui64vNV = (PFNGLVERTEXATTRIBL3UI64VNVPROC)wglGetProcAddress("glVertexAttribL3ui64vNV");
	glVertexAttribL4ui64vNV = (PFNGLVERTEXATTRIBL4UI64VNVPROC)wglGetProcAddress("glVertexAttribL4ui64vNV");
	glGetVertexAttribLi64vNV = (PFNGLGETVERTEXATTRIBLI64VNVPROC)wglGetProcAddress("glGetVertexAttribLi64vNV");
	glGetVertexAttribLui64vNV = (PFNGLGETVERTEXATTRIBLUI64VNVPROC)wglGetProcAddress("glGetVertexAttribLui64vNV");
	glVertexAttribLFormatNV = (PFNGLVERTEXATTRIBLFORMATNVPROC)wglGetProcAddress("glVertexAttribLFormatNV");
}

// GL_NV_multisample_coverage

void glelp::init_GL_NV_multisample_coverage()
{
	if(!glelpInternal::checkAvailable("GL_NV_multisample_coverage"))
		return;

}

// GL_AMD_name_gen_delete
PFNGLGENNAMESAMDPROC glGenNamesAMD;
PFNGLDELETENAMESAMDPROC glDeleteNamesAMD;
PFNGLISNAMEAMDPROC glIsNameAMD;

void glelp::init_GL_AMD_name_gen_delete()
{
	if(!glelpInternal::checkAvailable("GL_AMD_name_gen_delete"))
		return;

	glGenNamesAMD = (PFNGLGENNAMESAMDPROC)wglGetProcAddress("glGenNamesAMD");
	glDeleteNamesAMD = (PFNGLDELETENAMESAMDPROC)wglGetProcAddress("glDeleteNamesAMD");
	glIsNameAMD = (PFNGLISNAMEAMDPROC)wglGetProcAddress("glIsNameAMD");
}

// GL_AMD_debug_output
PFNGLDEBUGMESSAGEENABLEAMDPROC glDebugMessageEnableAMD;
PFNGLDEBUGMESSAGEINSERTAMDPROC glDebugMessageInsertAMD;
PFNGLDEBUGMESSAGECALLBACKAMDPROC glDebugMessageCallbackAMD;
PFNGLGETDEBUGMESSAGELOGAMDPROC glGetDebugMessageLogAMD;

void glelp::init_GL_AMD_debug_output()
{
	if(!glelpInternal::checkAvailable("GL_AMD_debug_output"))
		return;

	glDebugMessageEnableAMD = (PFNGLDEBUGMESSAGEENABLEAMDPROC)wglGetProcAddress("glDebugMessageEnableAMD");
	glDebugMessageInsertAMD = (PFNGLDEBUGMESSAGEINSERTAMDPROC)wglGetProcAddress("glDebugMessageInsertAMD");
	glDebugMessageCallbackAMD = (PFNGLDEBUGMESSAGECALLBACKAMDPROC)wglGetProcAddress("glDebugMessageCallbackAMD");
	glGetDebugMessageLogAMD = (PFNGLGETDEBUGMESSAGELOGAMDPROC)wglGetProcAddress("glGetDebugMessageLogAMD");
}

// GL_NV_vdpau_interop
PFNGLVDPAUINITNVPROC glVDPAUInitNV;
PFNGLVDPAUFININVPROC glVDPAUFiniNV;
PFNGLVDPAUREGISTERVIDEOSURFACENVPROC glVDPAURegisterVideoSurfaceNV;
PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC glVDPAURegisterOutputSurfaceNV;
PFNGLVDPAUISSURFACENVPROC glVDPAUIsSurfaceNV;
PFNGLVDPAUUNREGISTERSURFACENVPROC glVDPAUUnregisterSurfaceNV;
PFNGLVDPAUGETSURFACEIVNVPROC glVDPAUGetSurfaceivNV;
PFNGLVDPAUSURFACEACCESSNVPROC glVDPAUSurfaceAccessNV;
PFNGLVDPAUMAPSURFACESNVPROC glVDPAUMapSurfacesNV;
PFNGLVDPAUUNMAPSURFACESNVPROC glVDPAUUnmapSurfacesNV;

void glelp::init_GL_NV_vdpau_interop()
{
	if(!glelpInternal::checkAvailable("GL_NV_vdpau_interop"))
		return;

	glVDPAUInitNV = (PFNGLVDPAUINITNVPROC)wglGetProcAddress("glVDPAUInitNV");
	glVDPAUFiniNV = (PFNGLVDPAUFININVPROC)wglGetProcAddress("glVDPAUFiniNV");
	glVDPAURegisterVideoSurfaceNV = (PFNGLVDPAUREGISTERVIDEOSURFACENVPROC)wglGetProcAddress("glVDPAURegisterVideoSurfaceNV");
	glVDPAURegisterOutputSurfaceNV = (PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC)wglGetProcAddress("glVDPAURegisterOutputSurfaceNV");
	glVDPAUIsSurfaceNV = (PFNGLVDPAUISSURFACENVPROC)wglGetProcAddress("glVDPAUIsSurfaceNV");
	glVDPAUUnregisterSurfaceNV = (PFNGLVDPAUUNREGISTERSURFACENVPROC)wglGetProcAddress("glVDPAUUnregisterSurfaceNV");
	glVDPAUGetSurfaceivNV = (PFNGLVDPAUGETSURFACEIVNVPROC)wglGetProcAddress("glVDPAUGetSurfaceivNV");
	glVDPAUSurfaceAccessNV = (PFNGLVDPAUSURFACEACCESSNVPROC)wglGetProcAddress("glVDPAUSurfaceAccessNV");
	glVDPAUMapSurfacesNV = (PFNGLVDPAUMAPSURFACESNVPROC)wglGetProcAddress("glVDPAUMapSurfacesNV");
	glVDPAUUnmapSurfacesNV = (PFNGLVDPAUUNMAPSURFACESNVPROC)wglGetProcAddress("glVDPAUUnmapSurfacesNV");
}

// GL_AMD_transform_feedback3_lines_triangles

void glelp::init_GL_AMD_transform_feedback3_lines_triangles()
{
	if(!glelpInternal::checkAvailable("GL_AMD_transform_feedback3_lines_triangles"))
		return;

}

// GL_AMD_depth_clamp_separate

void glelp::init_GL_AMD_depth_clamp_separate()
{
	if(!glelpInternal::checkAvailable("GL_AMD_depth_clamp_separate"))
		return;

}

// GL_EXT_texture_sRGB_decode

void glelp::init_GL_EXT_texture_sRGB_decode()
{
	if(!glelpInternal::checkAvailable("GL_EXT_texture_sRGB_decode"))
		return;

}

// GL_NV_texture_multisample
PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC glTexImage2DMultisampleCoverageNV;
PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC glTexImage3DMultisampleCoverageNV;
PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC glTextureImage2DMultisampleNV;
PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC glTextureImage3DMultisampleNV;
PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC glTextureImage2DMultisampleCoverageNV;
PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC glTextureImage3DMultisampleCoverageNV;

void glelp::init_GL_NV_texture_multisample()
{
	if(!glelpInternal::checkAvailable("GL_NV_texture_multisample"))
		return;

	glTexImage2DMultisampleCoverageNV = (PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC)wglGetProcAddress("glTexImage2DMultisampleCoverageNV");
	glTexImage3DMultisampleCoverageNV = (PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC)wglGetProcAddress("glTexImage3DMultisampleCoverageNV");
	glTextureImage2DMultisampleNV = (PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC)wglGetProcAddress("glTextureImage2DMultisampleNV");
	glTextureImage3DMultisampleNV = (PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC)wglGetProcAddress("glTextureImage3DMultisampleNV");
	glTextureImage2DMultisampleCoverageNV = (PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC)wglGetProcAddress("glTextureImage2DMultisampleCoverageNV");
	glTextureImage3DMultisampleCoverageNV = (PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC)wglGetProcAddress("glTextureImage3DMultisampleCoverageNV");
}

// GL_AMD_blend_minmax_factor

void glelp::init_GL_AMD_blend_minmax_factor()
{
	if(!glelpInternal::checkAvailable("GL_AMD_blend_minmax_factor"))
		return;

}

// GL_AMD_sample_positions
PFNGLSETMULTISAMPLEFVAMDPROC glSetMultisamplefvAMD;

void glelp::init_GL_AMD_sample_positions()
{
	if(!glelpInternal::checkAvailable("GL_AMD_sample_positions"))
		return;

	glSetMultisamplefvAMD = (PFNGLSETMULTISAMPLEFVAMDPROC)wglGetProcAddress("glSetMultisamplefvAMD");
}

// GL_EXT_x11_sync_object
PFNGLIMPORTSYNCEXTPROC glImportSyncEXT;

void glelp::init_GL_EXT_x11_sync_object()
{
	if(!glelpInternal::checkAvailable("GL_EXT_x11_sync_object"))
		return;

	glImportSyncEXT = (PFNGLIMPORTSYNCEXTPROC)wglGetProcAddress("glImportSyncEXT");
}

// GL_AMD_multi_draw_indirect
PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC glMultiDrawArraysIndirectAMD;
PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC glMultiDrawElementsIndirectAMD;

void glelp::init_GL_AMD_multi_draw_indirect()
{
	if(!glelpInternal::checkAvailable("GL_AMD_multi_draw_indirect"))
		return;

	glMultiDrawArraysIndirectAMD = (PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC)wglGetProcAddress("glMultiDrawArraysIndirectAMD");
	glMultiDrawElementsIndirectAMD = (PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC)wglGetProcAddress("glMultiDrawElementsIndirectAMD");
}

// GL_EXT_framebuffer_multisample_blit_scaled

void glelp::init_GL_EXT_framebuffer_multisample_blit_scaled()
{
	if(!glelpInternal::checkAvailable("GL_EXT_framebuffer_multisample_blit_scaled"))
		return;

}

// GL_SGIX_texture_select

void glelp::init_GL_SGIX_texture_select()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_texture_select"))
		return;

}

// GL_INGR_blend_func_separate
PFNGLBLENDFUNCSEPARATEINGRPROC glBlendFuncSeparateINGR;

void glelp::init_GL_INGR_blend_func_separate()
{
	if(!glelpInternal::checkAvailable("GL_INGR_blend_func_separate"))
		return;

	glBlendFuncSeparateINGR = (PFNGLBLENDFUNCSEPARATEINGRPROC)wglGetProcAddress("glBlendFuncSeparateINGR");
}

// GL_SGIX_subsample

void glelp::init_GL_SGIX_subsample()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_subsample"))
		return;

}

// GL_SGIX_depth_pass_instrument

void glelp::init_GL_SGIX_depth_pass_instrument()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_depth_pass_instrument"))
		return;

}

// GL_SGIX_igloo_interface
PFNGLIGLOOINTERFACESGIXPROC glIglooInterfaceSGIX;

void glelp::init_GL_SGIX_igloo_interface()
{
	if(!glelpInternal::checkAvailable("GL_SGIX_igloo_interface"))
		return;

	glIglooInterfaceSGIX = (PFNGLIGLOOINTERFACESGIXPROC)wglGetProcAddress("glIglooInterfaceSGIX");
}

// WGL_ARB_buffer_region
PFNWGLCREATEBUFFERREGIONARBPROC wglCreateBufferRegionARB;
PFNWGLDELETEBUFFERREGIONARBPROC wglDeleteBufferRegionARB;
PFNWGLSAVEBUFFERREGIONARBPROC wglSaveBufferRegionARB;
PFNWGLRESTOREBUFFERREGIONARBPROC wglRestoreBufferRegionARB;

void glelp::init_WGL_ARB_buffer_region()
{
	if(!glelpInternal::checkAvailable("WGL_ARB_buffer_region"))
		return;

	wglCreateBufferRegionARB = (PFNWGLCREATEBUFFERREGIONARBPROC)wglGetProcAddress("wglCreateBufferRegionARB");
	wglDeleteBufferRegionARB = (PFNWGLDELETEBUFFERREGIONARBPROC)wglGetProcAddress("wglDeleteBufferRegionARB");
	wglSaveBufferRegionARB = (PFNWGLSAVEBUFFERREGIONARBPROC)wglGetProcAddress("wglSaveBufferRegionARB");
	wglRestoreBufferRegionARB = (PFNWGLRESTOREBUFFERREGIONARBPROC)wglGetProcAddress("wglRestoreBufferRegionARB");
}

// WGL_ARB_multisample

void glelp::init_WGL_ARB_multisample()
{
	if(!glelpInternal::checkAvailable("WGL_ARB_multisample"))
		return;

}

// WGL_ARB_extensions_string
PFNWGLGETEXTENSIONSSTRINGARBPROC wglGetExtensionsStringARB;

void glelp::init_WGL_ARB_extensions_string()
{


	wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)wglGetProcAddress("wglGetExtensionsStringARB");
}

// WGL_ARB_pixel_format
PFNWGLGETPIXELFORMATATTRIBIVARBPROC wglGetPixelFormatAttribivARB;
PFNWGLGETPIXELFORMATATTRIBFVARBPROC wglGetPixelFormatAttribfvARB;
PFNWGLCHOOSEPIXELFORMATARBPROC wglChoosePixelFormatARB;

void glelp::init_WGL_ARB_pixel_format()
{
	if(!glelpInternal::checkAvailable("WGL_ARB_pixel_format"))
		return;

	wglGetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC)wglGetProcAddress("wglGetPixelFormatAttribivARB");
	wglGetPixelFormatAttribfvARB = (PFNWGLGETPIXELFORMATATTRIBFVARBPROC)wglGetProcAddress("wglGetPixelFormatAttribfvARB");
	wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC)wglGetProcAddress("wglChoosePixelFormatARB");
}

// WGL_ARB_make_current_read
PFNWGLMAKECONTEXTCURRENTARBPROC wglMakeContextCurrentARB;
PFNWGLGETCURRENTREADDCARBPROC wglGetCurrentReadDCARB;

void glelp::init_WGL_ARB_make_current_read()
{
	if(!glelpInternal::checkAvailable("WGL_ARB_make_current_read"))
		return;

	wglMakeContextCurrentARB = (PFNWGLMAKECONTEXTCURRENTARBPROC)wglGetProcAddress("wglMakeContextCurrentARB");
	wglGetCurrentReadDCARB = (PFNWGLGETCURRENTREADDCARBPROC)wglGetProcAddress("wglGetCurrentReadDCARB");
}

// WGL_ARB_pbuffer
PFNWGLCREATEPBUFFERARBPROC wglCreatePbufferARB;
PFNWGLGETPBUFFERDCARBPROC wglGetPbufferDCARB;
PFNWGLRELEASEPBUFFERDCARBPROC wglReleasePbufferDCARB;
PFNWGLDESTROYPBUFFERARBPROC wglDestroyPbufferARB;
PFNWGLQUERYPBUFFERARBPROC wglQueryPbufferARB;

void glelp::init_WGL_ARB_pbuffer()
{
	if(!glelpInternal::checkAvailable("WGL_ARB_pbuffer"))
		return;

	wglCreatePbufferARB = (PFNWGLCREATEPBUFFERARBPROC)wglGetProcAddress("wglCreatePbufferARB");
	wglGetPbufferDCARB = (PFNWGLGETPBUFFERDCARBPROC)wglGetProcAddress("wglGetPbufferDCARB");
	wglReleasePbufferDCARB = (PFNWGLRELEASEPBUFFERDCARBPROC)wglGetProcAddress("wglReleasePbufferDCARB");
	wglDestroyPbufferARB = (PFNWGLDESTROYPBUFFERARBPROC)wglGetProcAddress("wglDestroyPbufferARB");
	wglQueryPbufferARB = (PFNWGLQUERYPBUFFERARBPROC)wglGetProcAddress("wglQueryPbufferARB");
}

// WGL_ARB_render_texture
PFNWGLBINDTEXIMAGEARBPROC wglBindTexImageARB;
PFNWGLRELEASETEXIMAGEARBPROC wglReleaseTexImageARB;
PFNWGLSETPBUFFERATTRIBARBPROC wglSetPbufferAttribARB;

void glelp::init_WGL_ARB_render_texture()
{
	if(!glelpInternal::checkAvailable("WGL_ARB_render_texture"))
		return;

	wglBindTexImageARB = (PFNWGLBINDTEXIMAGEARBPROC)wglGetProcAddress("wglBindTexImageARB");
	wglReleaseTexImageARB = (PFNWGLRELEASETEXIMAGEARBPROC)wglGetProcAddress("wglReleaseTexImageARB");
	wglSetPbufferAttribARB = (PFNWGLSETPBUFFERATTRIBARBPROC)wglGetProcAddress("wglSetPbufferAttribARB");
}

// WGL_ARB_pixel_format_float

void glelp::init_WGL_ARB_pixel_format_float()
{
	if(!glelpInternal::checkAvailable("WGL_ARB_pixel_format_float"))
		return;

}

// WGL_ARB_framebuffer_sRGB

void glelp::init_WGL_ARB_framebuffer_sRGB()
{
	if(!glelpInternal::checkAvailable("WGL_ARB_framebuffer_sRGB"))
		return;

}

// WGL_ARB_create_context
PFNWGLCREATECONTEXTATTRIBSARBPROC wglCreateContextAttribsARB;

void glelp::init_WGL_ARB_create_context()
{
	if(!glelpInternal::checkAvailable("WGL_ARB_create_context"))
		return;

	wglCreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC)wglGetProcAddress("wglCreateContextAttribsARB");
}

// WGL_ARB_create_context_profile

void glelp::init_WGL_ARB_create_context_profile()
{
	if(!glelpInternal::checkAvailable("WGL_ARB_create_context_profile"))
		return;

}

// WGL_ARB_create_context_robustness

void glelp::init_WGL_ARB_create_context_robustness()
{
	if(!glelpInternal::checkAvailable("WGL_ARB_create_context_robustness"))
		return;

}

// WGL_EXT_make_current_read
PFNWGLMAKECONTEXTCURRENTEXTPROC wglMakeContextCurrentEXT;
PFNWGLGETCURRENTREADDCEXTPROC wglGetCurrentReadDCEXT;

void glelp::init_WGL_EXT_make_current_read()
{
	if(!glelpInternal::checkAvailable("WGL_EXT_make_current_read"))
		return;

	wglMakeContextCurrentEXT = (PFNWGLMAKECONTEXTCURRENTEXTPROC)wglGetProcAddress("wglMakeContextCurrentEXT");
	wglGetCurrentReadDCEXT = (PFNWGLGETCURRENTREADDCEXTPROC)wglGetProcAddress("wglGetCurrentReadDCEXT");
}

// WGL_EXT_pixel_format
PFNWGLGETPIXELFORMATATTRIBIVEXTPROC wglGetPixelFormatAttribivEXT;
PFNWGLGETPIXELFORMATATTRIBFVEXTPROC wglGetPixelFormatAttribfvEXT;
PFNWGLCHOOSEPIXELFORMATEXTPROC wglChoosePixelFormatEXT;

void glelp::init_WGL_EXT_pixel_format()
{
	if(!glelpInternal::checkAvailable("WGL_EXT_pixel_format"))
		return;

	wglGetPixelFormatAttribivEXT = (PFNWGLGETPIXELFORMATATTRIBIVEXTPROC)wglGetProcAddress("wglGetPixelFormatAttribivEXT");
	wglGetPixelFormatAttribfvEXT = (PFNWGLGETPIXELFORMATATTRIBFVEXTPROC)wglGetProcAddress("wglGetPixelFormatAttribfvEXT");
	wglChoosePixelFormatEXT = (PFNWGLCHOOSEPIXELFORMATEXTPROC)wglGetProcAddress("wglChoosePixelFormatEXT");
}

// WGL_EXT_pbuffer
PFNWGLCREATEPBUFFEREXTPROC wglCreatePbufferEXT;
PFNWGLGETPBUFFERDCEXTPROC wglGetPbufferDCEXT;
PFNWGLRELEASEPBUFFERDCEXTPROC wglReleasePbufferDCEXT;
PFNWGLDESTROYPBUFFEREXTPROC wglDestroyPbufferEXT;
PFNWGLQUERYPBUFFEREXTPROC wglQueryPbufferEXT;

void glelp::init_WGL_EXT_pbuffer()
{
	if(!glelpInternal::checkAvailable("WGL_EXT_pbuffer"))
		return;

	wglCreatePbufferEXT = (PFNWGLCREATEPBUFFEREXTPROC)wglGetProcAddress("wglCreatePbufferEXT");
	wglGetPbufferDCEXT = (PFNWGLGETPBUFFERDCEXTPROC)wglGetProcAddress("wglGetPbufferDCEXT");
	wglReleasePbufferDCEXT = (PFNWGLRELEASEPBUFFERDCEXTPROC)wglGetProcAddress("wglReleasePbufferDCEXT");
	wglDestroyPbufferEXT = (PFNWGLDESTROYPBUFFEREXTPROC)wglGetProcAddress("wglDestroyPbufferEXT");
	wglQueryPbufferEXT = (PFNWGLQUERYPBUFFEREXTPROC)wglGetProcAddress("wglQueryPbufferEXT");
}

// WGL_EXT_depth_float

void glelp::init_WGL_EXT_depth_float()
{
	if(!glelpInternal::checkAvailable("WGL_EXT_depth_float"))
		return;

}

// WGL_3DFX_multisample

void glelp::init_WGL_3DFX_multisample()
{
	if(!glelpInternal::checkAvailable("WGL_3DFX_multisample"))
		return;

}

// WGL_EXT_multisample

void glelp::init_WGL_EXT_multisample()
{
	if(!glelpInternal::checkAvailable("WGL_EXT_multisample"))
		return;

}

// WGL_I3D_digital_video_control
PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC wglGetDigitalVideoParametersI3D;
PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC wglSetDigitalVideoParametersI3D;

void glelp::init_WGL_I3D_digital_video_control()
{
	if(!glelpInternal::checkAvailable("WGL_I3D_digital_video_control"))
		return;

	wglGetDigitalVideoParametersI3D = (PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC)wglGetProcAddress("wglGetDigitalVideoParametersI3D");
	wglSetDigitalVideoParametersI3D = (PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC)wglGetProcAddress("wglSetDigitalVideoParametersI3D");
}

// WGL_I3D_gamma
PFNWGLGETGAMMATABLEPARAMETERSI3DPROC wglGetGammaTableParametersI3D;
PFNWGLSETGAMMATABLEPARAMETERSI3DPROC wglSetGammaTableParametersI3D;
PFNWGLGETGAMMATABLEI3DPROC wglGetGammaTableI3D;
PFNWGLSETGAMMATABLEI3DPROC wglSetGammaTableI3D;

void glelp::init_WGL_I3D_gamma()
{
	if(!glelpInternal::checkAvailable("WGL_I3D_gamma"))
		return;

	wglGetGammaTableParametersI3D = (PFNWGLGETGAMMATABLEPARAMETERSI3DPROC)wglGetProcAddress("wglGetGammaTableParametersI3D");
	wglSetGammaTableParametersI3D = (PFNWGLSETGAMMATABLEPARAMETERSI3DPROC)wglGetProcAddress("wglSetGammaTableParametersI3D");
	wglGetGammaTableI3D = (PFNWGLGETGAMMATABLEI3DPROC)wglGetProcAddress("wglGetGammaTableI3D");
	wglSetGammaTableI3D = (PFNWGLSETGAMMATABLEI3DPROC)wglGetProcAddress("wglSetGammaTableI3D");
}

// WGL_I3D_genlock
PFNWGLENABLEGENLOCKI3DPROC wglEnableGenlockI3D;
PFNWGLDISABLEGENLOCKI3DPROC wglDisableGenlockI3D;
PFNWGLISENABLEDGENLOCKI3DPROC wglIsEnabledGenlockI3D;
PFNWGLGENLOCKSOURCEI3DPROC wglGenlockSourceI3D;
PFNWGLGETGENLOCKSOURCEI3DPROC wglGetGenlockSourceI3D;
PFNWGLGENLOCKSOURCEEDGEI3DPROC wglGenlockSourceEdgeI3D;
PFNWGLGETGENLOCKSOURCEEDGEI3DPROC wglGetGenlockSourceEdgeI3D;
PFNWGLGENLOCKSAMPLERATEI3DPROC wglGenlockSampleRateI3D;
PFNWGLGETGENLOCKSAMPLERATEI3DPROC wglGetGenlockSampleRateI3D;
PFNWGLGENLOCKSOURCEDELAYI3DPROC wglGenlockSourceDelayI3D;
PFNWGLGETGENLOCKSOURCEDELAYI3DPROC wglGetGenlockSourceDelayI3D;
PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC wglQueryGenlockMaxSourceDelayI3D;

void glelp::init_WGL_I3D_genlock()
{
	if(!glelpInternal::checkAvailable("WGL_I3D_genlock"))
		return;

	wglEnableGenlockI3D = (PFNWGLENABLEGENLOCKI3DPROC)wglGetProcAddress("wglEnableGenlockI3D");
	wglDisableGenlockI3D = (PFNWGLDISABLEGENLOCKI3DPROC)wglGetProcAddress("wglDisableGenlockI3D");
	wglIsEnabledGenlockI3D = (PFNWGLISENABLEDGENLOCKI3DPROC)wglGetProcAddress("wglIsEnabledGenlockI3D");
	wglGenlockSourceI3D = (PFNWGLGENLOCKSOURCEI3DPROC)wglGetProcAddress("wglGenlockSourceI3D");
	wglGetGenlockSourceI3D = (PFNWGLGETGENLOCKSOURCEI3DPROC)wglGetProcAddress("wglGetGenlockSourceI3D");
	wglGenlockSourceEdgeI3D = (PFNWGLGENLOCKSOURCEEDGEI3DPROC)wglGetProcAddress("wglGenlockSourceEdgeI3D");
	wglGetGenlockSourceEdgeI3D = (PFNWGLGETGENLOCKSOURCEEDGEI3DPROC)wglGetProcAddress("wglGetGenlockSourceEdgeI3D");
	wglGenlockSampleRateI3D = (PFNWGLGENLOCKSAMPLERATEI3DPROC)wglGetProcAddress("wglGenlockSampleRateI3D");
	wglGetGenlockSampleRateI3D = (PFNWGLGETGENLOCKSAMPLERATEI3DPROC)wglGetProcAddress("wglGetGenlockSampleRateI3D");
	wglGenlockSourceDelayI3D = (PFNWGLGENLOCKSOURCEDELAYI3DPROC)wglGetProcAddress("wglGenlockSourceDelayI3D");
	wglGetGenlockSourceDelayI3D = (PFNWGLGETGENLOCKSOURCEDELAYI3DPROC)wglGetProcAddress("wglGetGenlockSourceDelayI3D");
	wglQueryGenlockMaxSourceDelayI3D = (PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC)wglGetProcAddress("wglQueryGenlockMaxSourceDelayI3D");
}

// WGL_I3D_image_buffer
PFNWGLCREATEIMAGEBUFFERI3DPROC wglCreateImageBufferI3D;
PFNWGLDESTROYIMAGEBUFFERI3DPROC wglDestroyImageBufferI3D;
PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC wglAssociateImageBufferEventsI3D;
PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC wglReleaseImageBufferEventsI3D;

void glelp::init_WGL_I3D_image_buffer()
{
	if(!glelpInternal::checkAvailable("WGL_I3D_image_buffer"))
		return;

	wglCreateImageBufferI3D = (PFNWGLCREATEIMAGEBUFFERI3DPROC)wglGetProcAddress("wglCreateImageBufferI3D");
	wglDestroyImageBufferI3D = (PFNWGLDESTROYIMAGEBUFFERI3DPROC)wglGetProcAddress("wglDestroyImageBufferI3D");
	wglAssociateImageBufferEventsI3D = (PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC)wglGetProcAddress("wglAssociateImageBufferEventsI3D");
	wglReleaseImageBufferEventsI3D = (PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC)wglGetProcAddress("wglReleaseImageBufferEventsI3D");
}

// WGL_I3D_swap_frame_lock
PFNWGLENABLEFRAMELOCKI3DPROC wglEnableFrameLockI3D;
PFNWGLDISABLEFRAMELOCKI3DPROC wglDisableFrameLockI3D;
PFNWGLISENABLEDFRAMELOCKI3DPROC wglIsEnabledFrameLockI3D;
PFNWGLQUERYFRAMELOCKMASTERI3DPROC wglQueryFrameLockMasterI3D;

void glelp::init_WGL_I3D_swap_frame_lock()
{
	if(!glelpInternal::checkAvailable("WGL_I3D_swap_frame_lock"))
		return;

	wglEnableFrameLockI3D = (PFNWGLENABLEFRAMELOCKI3DPROC)wglGetProcAddress("wglEnableFrameLockI3D");
	wglDisableFrameLockI3D = (PFNWGLDISABLEFRAMELOCKI3DPROC)wglGetProcAddress("wglDisableFrameLockI3D");
	wglIsEnabledFrameLockI3D = (PFNWGLISENABLEDFRAMELOCKI3DPROC)wglGetProcAddress("wglIsEnabledFrameLockI3D");
	wglQueryFrameLockMasterI3D = (PFNWGLQUERYFRAMELOCKMASTERI3DPROC)wglGetProcAddress("wglQueryFrameLockMasterI3D");
}

// WGL_NV_render_depth_texture

void glelp::init_WGL_NV_render_depth_texture()
{
	if(!glelpInternal::checkAvailable("WGL_NV_render_depth_texture"))
		return;

}

// WGL_NV_render_texture_rectangle

void glelp::init_WGL_NV_render_texture_rectangle()
{
	if(!glelpInternal::checkAvailable("WGL_NV_render_texture_rectangle"))
		return;

}

// WGL_ATI_pixel_format_float

void glelp::init_WGL_ATI_pixel_format_float()
{
	if(!glelpInternal::checkAvailable("WGL_ATI_pixel_format_float"))
		return;

}

// WGL_NV_float_buffer

void glelp::init_WGL_NV_float_buffer()
{
	if(!glelpInternal::checkAvailable("WGL_NV_float_buffer"))
		return;

}

// WGL_3DL_stereo_control
PFNWGLSETSTEREOEMITTERSTATE3DLPROC wglSetStereoEmitterState3DL;

void glelp::init_WGL_3DL_stereo_control()
{
	if(!glelpInternal::checkAvailable("WGL_3DL_stereo_control"))
		return;

	wglSetStereoEmitterState3DL = (PFNWGLSETSTEREOEMITTERSTATE3DLPROC)wglGetProcAddress("wglSetStereoEmitterState3DL");
}

// WGL_EXT_pixel_format_packed_float

void glelp::init_WGL_EXT_pixel_format_packed_float()
{
	if(!glelpInternal::checkAvailable("WGL_EXT_pixel_format_packed_float"))
		return;

}

// WGL_EXT_framebuffer_sRGB

void glelp::init_WGL_EXT_framebuffer_sRGB()
{
	if(!glelpInternal::checkAvailable("WGL_EXT_framebuffer_sRGB"))
		return;

}

// WGL_NV_present_video
PFNWGLENUMERATEVIDEODEVICESNVPROC wglEnumerateVideoDevicesNV;
PFNWGLBINDVIDEODEVICENVPROC wglBindVideoDeviceNV;
PFNWGLQUERYCURRENTCONTEXTNVPROC wglQueryCurrentContextNV;

void glelp::init_WGL_NV_present_video()
{
	if(!glelpInternal::checkAvailable("WGL_NV_present_video"))
		return;

	wglEnumerateVideoDevicesNV = (PFNWGLENUMERATEVIDEODEVICESNVPROC)wglGetProcAddress("wglEnumerateVideoDevicesNV");
	wglBindVideoDeviceNV = (PFNWGLBINDVIDEODEVICENVPROC)wglGetProcAddress("wglBindVideoDeviceNV");
	wglQueryCurrentContextNV = (PFNWGLQUERYCURRENTCONTEXTNVPROC)wglGetProcAddress("wglQueryCurrentContextNV");
}

// WGL_NV_video_out

void glelp::init_WGL_NV_video_out()
{
	if(!glelpInternal::checkAvailable("WGL_NV_video_out"))
		return;

}

// WGL_NV_swap_group
PFNWGLJOINSWAPGROUPNVPROC wglJoinSwapGroupNV;
PFNWGLBINDSWAPBARRIERNVPROC wglBindSwapBarrierNV;
PFNWGLQUERYSWAPGROUPNVPROC wglQuerySwapGroupNV;
PFNWGLQUERYMAXSWAPGROUPSNVPROC wglQueryMaxSwapGroupsNV;
PFNWGLQUERYFRAMECOUNTNVPROC wglQueryFrameCountNV;
PFNWGLRESETFRAMECOUNTNVPROC wglResetFrameCountNV;

void glelp::init_WGL_NV_swap_group()
{
	if(!glelpInternal::checkAvailable("WGL_NV_swap_group"))
		return;

	wglJoinSwapGroupNV = (PFNWGLJOINSWAPGROUPNVPROC)wglGetProcAddress("wglJoinSwapGroupNV");
	wglBindSwapBarrierNV = (PFNWGLBINDSWAPBARRIERNVPROC)wglGetProcAddress("wglBindSwapBarrierNV");
	wglQuerySwapGroupNV = (PFNWGLQUERYSWAPGROUPNVPROC)wglGetProcAddress("wglQuerySwapGroupNV");
	wglQueryMaxSwapGroupsNV = (PFNWGLQUERYMAXSWAPGROUPSNVPROC)wglGetProcAddress("wglQueryMaxSwapGroupsNV");
	wglQueryFrameCountNV = (PFNWGLQUERYFRAMECOUNTNVPROC)wglGetProcAddress("wglQueryFrameCountNV");
	wglResetFrameCountNV = (PFNWGLRESETFRAMECOUNTNVPROC)wglGetProcAddress("wglResetFrameCountNV");
}

// WGL_NV_gpu_affinity
PFNWGLENUMGPUSNVPROC wglEnumGpusNV;
PFNWGLENUMGPUDEVICESNVPROC wglEnumGpuDevicesNV;
PFNWGLCREATEAFFINITYDCNVPROC wglCreateAffinityDCNV;
PFNWGLENUMGPUSFROMAFFINITYDCNVPROC wglEnumGpusFromAffinityDCNV;
PFNWGLDELETEDCNVPROC wglDeleteDCNV;

void glelp::init_WGL_NV_gpu_affinity()
{
	if(!glelpInternal::checkAvailable("WGL_NV_gpu_affinity"))
		return;

	wglEnumGpusNV = (PFNWGLENUMGPUSNVPROC)wglGetProcAddress("wglEnumGpusNV");
	wglEnumGpuDevicesNV = (PFNWGLENUMGPUDEVICESNVPROC)wglGetProcAddress("wglEnumGpuDevicesNV");
	wglCreateAffinityDCNV = (PFNWGLCREATEAFFINITYDCNVPROC)wglGetProcAddress("wglCreateAffinityDCNV");
	wglEnumGpusFromAffinityDCNV = (PFNWGLENUMGPUSFROMAFFINITYDCNVPROC)wglGetProcAddress("wglEnumGpusFromAffinityDCNV");
	wglDeleteDCNV = (PFNWGLDELETEDCNVPROC)wglGetProcAddress("wglDeleteDCNV");
}

// WGL_AMD_gpu_association
PFNWGLGETGPUIDSAMDPROC wglGetGPUIDsAMD;
PFNWGLGETGPUINFOAMDPROC wglGetGPUInfoAMD;
PFNWGLGETCONTEXTGPUIDAMDPROC wglGetContextGPUIDAMD;
PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC wglCreateAssociatedContextAMD;
PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC wglCreateAssociatedContextAttribsAMD;
PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC wglDeleteAssociatedContextAMD;
PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC wglMakeAssociatedContextCurrentAMD;
PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC wglGetCurrentAssociatedContextAMD;
PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC wglBlitContextFramebufferAMD;

void glelp::init_WGL_AMD_gpu_association()
{
	if(!glelpInternal::checkAvailable("WGL_AMD_gpu_association"))
		return;

	wglGetGPUIDsAMD = (PFNWGLGETGPUIDSAMDPROC)wglGetProcAddress("wglGetGPUIDsAMD");
	wglGetGPUInfoAMD = (PFNWGLGETGPUINFOAMDPROC)wglGetProcAddress("wglGetGPUInfoAMD");
	wglGetContextGPUIDAMD = (PFNWGLGETCONTEXTGPUIDAMDPROC)wglGetProcAddress("wglGetContextGPUIDAMD");
	wglCreateAssociatedContextAMD = (PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC)wglGetProcAddress("wglCreateAssociatedContextAMD");
	wglCreateAssociatedContextAttribsAMD = (PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC)wglGetProcAddress("wglCreateAssociatedContextAttribsAMD");
	wglDeleteAssociatedContextAMD = (PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC)wglGetProcAddress("wglDeleteAssociatedContextAMD");
	wglMakeAssociatedContextCurrentAMD = (PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC)wglGetProcAddress("wglMakeAssociatedContextCurrentAMD");
	wglGetCurrentAssociatedContextAMD = (PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC)wglGetProcAddress("wglGetCurrentAssociatedContextAMD");
	wglBlitContextFramebufferAMD = (PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC)wglGetProcAddress("wglBlitContextFramebufferAMD");
}

// WGL_NV_video_capture
PFNWGLBINDVIDEOCAPTUREDEVICENVPROC wglBindVideoCaptureDeviceNV;
PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC wglEnumerateVideoCaptureDevicesNV;
PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC wglLockVideoCaptureDeviceNV;
PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC wglQueryVideoCaptureDeviceNV;
PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC wglReleaseVideoCaptureDeviceNV;

void glelp::init_WGL_NV_video_capture()
{
	if(!glelpInternal::checkAvailable("WGL_NV_video_capture"))
		return;

	wglBindVideoCaptureDeviceNV = (PFNWGLBINDVIDEOCAPTUREDEVICENVPROC)wglGetProcAddress("wglBindVideoCaptureDeviceNV");
	wglEnumerateVideoCaptureDevicesNV = (PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC)wglGetProcAddress("wglEnumerateVideoCaptureDevicesNV");
	wglLockVideoCaptureDeviceNV = (PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC)wglGetProcAddress("wglLockVideoCaptureDeviceNV");
	wglQueryVideoCaptureDeviceNV = (PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC)wglGetProcAddress("wglQueryVideoCaptureDeviceNV");
	wglReleaseVideoCaptureDeviceNV = (PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC)wglGetProcAddress("wglReleaseVideoCaptureDeviceNV");
}

// WGL_NV_copy_image
PFNWGLCOPYIMAGESUBDATANVPROC wglCopyImageSubDataNV;

void glelp::init_WGL_NV_copy_image()
{
	if(!glelpInternal::checkAvailable("WGL_NV_copy_image"))
		return;

	wglCopyImageSubDataNV = (PFNWGLCOPYIMAGESUBDATANVPROC)wglGetProcAddress("wglCopyImageSubDataNV");
}

// WGL_NV_multisample_coverage

void glelp::init_WGL_NV_multisample_coverage()
{
	if(!glelpInternal::checkAvailable("WGL_NV_multisample_coverage"))
		return;

}

// WGL_EXT_create_context_es2_profile

void glelp::init_WGL_EXT_create_context_es2_profile()
{
	if(!glelpInternal::checkAvailable("WGL_EXT_create_context_es2_profile"))
		return;

}

// WGL_NV_DX_interop
PFNWGLDXSETRESOURCESHAREHANDLENVPROC wglDXSetResourceShareHandleNV;
PFNWGLDXOPENDEVICENVPROC wglDXOpenDeviceNV;
PFNWGLDXCLOSEDEVICENVPROC wglDXCloseDeviceNV;
PFNWGLDXREGISTEROBJECTNVPROC wglDXRegisterObjectNV;
PFNWGLDXUNREGISTEROBJECTNVPROC wglDXUnregisterObjectNV;
PFNWGLDXOBJECTACCESSNVPROC wglDXObjectAccessNV;
PFNWGLDXLOCKOBJECTSNVPROC wglDXLockObjectsNV;
PFNWGLDXUNLOCKOBJECTSNVPROC wglDXUnlockObjectsNV;

void glelp::init_WGL_NV_DX_interop()
{
	if(!glelpInternal::checkAvailable("WGL_NV_DX_interop"))
		return;

	wglDXSetResourceShareHandleNV = (PFNWGLDXSETRESOURCESHAREHANDLENVPROC)wglGetProcAddress("wglDXSetResourceShareHandleNV");
	wglDXOpenDeviceNV = (PFNWGLDXOPENDEVICENVPROC)wglGetProcAddress("wglDXOpenDeviceNV");
	wglDXCloseDeviceNV = (PFNWGLDXCLOSEDEVICENVPROC)wglGetProcAddress("wglDXCloseDeviceNV");
	wglDXRegisterObjectNV = (PFNWGLDXREGISTEROBJECTNVPROC)wglGetProcAddress("wglDXRegisterObjectNV");
	wglDXUnregisterObjectNV = (PFNWGLDXUNREGISTEROBJECTNVPROC)wglGetProcAddress("wglDXUnregisterObjectNV");
	wglDXObjectAccessNV = (PFNWGLDXOBJECTACCESSNVPROC)wglGetProcAddress("wglDXObjectAccessNV");
	wglDXLockObjectsNV = (PFNWGLDXLOCKOBJECTSNVPROC)wglGetProcAddress("wglDXLockObjectsNV");
	wglDXUnlockObjectsNV = (PFNWGLDXUNLOCKOBJECTSNVPROC)wglGetProcAddress("wglDXUnlockObjectsNV");
}

// WGL_NV_video_output
PFNWGLGETVIDEODEVICENVPROC wglGetVideoDeviceNV;
PFNWGLRELEASEVIDEODEVICENVPROC wglReleaseVideoDeviceNV;
PFNWGLBINDVIDEOIMAGENVPROC wglBindVideoImageNV;
PFNWGLRELEASEVIDEOIMAGENVPROC wglReleaseVideoImageNV;
PFNWGLSENDPBUFFERTOVIDEONVPROC wglSendPbufferToVideoNV;
PFNWGLGETVIDEOINFONVPROC wglGetVideoInfoNV;

void glelp::init_WGL_NV_video_output()
{
	if(!glelpInternal::checkAvailable("WGL_NV_video_output"))
		return;

	wglGetVideoDeviceNV = (PFNWGLGETVIDEODEVICENVPROC)wglGetProcAddress("wglGetVideoDeviceNV");
	wglReleaseVideoDeviceNV = (PFNWGLRELEASEVIDEODEVICENVPROC)wglGetProcAddress("wglReleaseVideoDeviceNV");
	wglBindVideoImageNV = (PFNWGLBINDVIDEOIMAGENVPROC)wglGetProcAddress("wglBindVideoImageNV");
	wglReleaseVideoImageNV = (PFNWGLRELEASEVIDEOIMAGENVPROC)wglGetProcAddress("wglReleaseVideoImageNV");
	wglSendPbufferToVideoNV = (PFNWGLSENDPBUFFERTOVIDEONVPROC)wglGetProcAddress("wglSendPbufferToVideoNV");
	wglGetVideoInfoNV = (PFNWGLGETVIDEOINFONVPROC)wglGetProcAddress("wglGetVideoInfoNV");
}

// WGL_EXT_display_color_table
PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC wglCreateDisplayColorTableEXT;
PFNWGLLOADDISPLAYCOLORTABLEEXTPROC wglLoadDisplayColorTableEXT;
PFNWGLBINDDISPLAYCOLORTABLEEXTPROC wglBindDisplayColorTableEXT;
PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC wglDestroyDisplayColorTableEXT;

void glelp::init_WGL_EXT_display_color_table()
{
	if(!glelpInternal::checkAvailable("WGL_EXT_display_color_table"))
		return;

	wglCreateDisplayColorTableEXT = (PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC)wglGetProcAddress("wglCreateDisplayColorTableEXT");
	wglLoadDisplayColorTableEXT = (PFNWGLLOADDISPLAYCOLORTABLEEXTPROC)wglGetProcAddress("wglLoadDisplayColorTableEXT");
	wglBindDisplayColorTableEXT = (PFNWGLBINDDISPLAYCOLORTABLEEXTPROC)wglGetProcAddress("wglBindDisplayColorTableEXT");
	wglDestroyDisplayColorTableEXT = (PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC)wglGetProcAddress("wglDestroyDisplayColorTableEXT");
}

// WGL_EXT_extensions_string
PFNWGLGETEXTENSIONSSTRINGEXTPROC wglGetExtensionsStringEXT;

void glelp::init_WGL_EXT_extensions_string()
{
	if(!glelpInternal::checkAvailable("WGL_EXT_extensions_string"))
		return;

	wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC)wglGetProcAddress("wglGetExtensionsStringEXT");
}

// WGL_EXT_swap_control
PFNWGLSWAPINTERVALEXTPROC wglSwapIntervalEXT;
PFNWGLGETSWAPINTERVALEXTPROC wglGetSwapIntervalEXT;

void glelp::init_WGL_EXT_swap_control()
{
	if(!glelpInternal::checkAvailable("WGL_EXT_swap_control"))
		return;

	wglSwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC)wglGetProcAddress("wglSwapIntervalEXT");
	wglGetSwapIntervalEXT = (PFNWGLGETSWAPINTERVALEXTPROC)wglGetProcAddress("wglGetSwapIntervalEXT");
}

// WGL_NV_vertex_array_range
PFNWGLALLOCATEMEMORYNVPROC wglAllocateMemoryNV;
PFNWGLFREEMEMORYNVPROC wglFreeMemoryNV;

void glelp::init_WGL_NV_vertex_array_range()
{
	if(!glelpInternal::checkAvailable("WGL_NV_vertex_array_range"))
		return;

	wglAllocateMemoryNV = (PFNWGLALLOCATEMEMORYNVPROC)wglGetProcAddress("wglAllocateMemoryNV");
	wglFreeMemoryNV = (PFNWGLFREEMEMORYNVPROC)wglGetProcAddress("wglFreeMemoryNV");
}

// WGL_OML_sync_control
PFNWGLGETSYNCVALUESOMLPROC wglGetSyncValuesOML;
PFNWGLGETMSCRATEOMLPROC wglGetMscRateOML;
PFNWGLSWAPBUFFERSMSCOMLPROC wglSwapBuffersMscOML;
PFNWGLSWAPLAYERBUFFERSMSCOMLPROC wglSwapLayerBuffersMscOML;
PFNWGLWAITFORMSCOMLPROC wglWaitForMscOML;
PFNWGLWAITFORSBCOMLPROC wglWaitForSbcOML;

void glelp::init_WGL_OML_sync_control()
{
	if(!glelpInternal::checkAvailable("WGL_OML_sync_control"))
		return;

	wglGetSyncValuesOML = (PFNWGLGETSYNCVALUESOMLPROC)wglGetProcAddress("wglGetSyncValuesOML");
	wglGetMscRateOML = (PFNWGLGETMSCRATEOMLPROC)wglGetProcAddress("wglGetMscRateOML");
	wglSwapBuffersMscOML = (PFNWGLSWAPBUFFERSMSCOMLPROC)wglGetProcAddress("wglSwapBuffersMscOML");
	wglSwapLayerBuffersMscOML = (PFNWGLSWAPLAYERBUFFERSMSCOMLPROC)wglGetProcAddress("wglSwapLayerBuffersMscOML");
	wglWaitForMscOML = (PFNWGLWAITFORMSCOMLPROC)wglGetProcAddress("wglWaitForMscOML");
	wglWaitForSbcOML = (PFNWGLWAITFORSBCOMLPROC)wglGetProcAddress("wglWaitForSbcOML");
}

// WGL_I3D_swap_frame_usage
PFNWGLGETFRAMEUSAGEI3DPROC wglGetFrameUsageI3D;
PFNWGLBEGINFRAMETRACKINGI3DPROC wglBeginFrameTrackingI3D;
PFNWGLENDFRAMETRACKINGI3DPROC wglEndFrameTrackingI3D;
PFNWGLQUERYFRAMETRACKINGI3DPROC wglQueryFrameTrackingI3D;

void glelp::init_WGL_I3D_swap_frame_usage()
{
	if(!glelpInternal::checkAvailable("WGL_I3D_swap_frame_usage"))
		return;

	wglGetFrameUsageI3D = (PFNWGLGETFRAMEUSAGEI3DPROC)wglGetProcAddress("wglGetFrameUsageI3D");
	wglBeginFrameTrackingI3D = (PFNWGLBEGINFRAMETRACKINGI3DPROC)wglGetProcAddress("wglBeginFrameTrackingI3D");
	wglEndFrameTrackingI3D = (PFNWGLENDFRAMETRACKINGI3DPROC)wglGetProcAddress("wglEndFrameTrackingI3D");
	wglQueryFrameTrackingI3D = (PFNWGLQUERYFRAMETRACKINGI3DPROC)wglGetProcAddress("wglQueryFrameTrackingI3D");
}

