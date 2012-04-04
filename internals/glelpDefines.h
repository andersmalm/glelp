#ifndef _GLELP_DEFINES_H_
#define _GLELP_DEFINES_H_

#include "../internals/glelpInternalInclude.h"

#define NUM_EXTENSIONS 457

namespace glelp
{
	void init_OpenGL_1_2();
	void init_GL_ARB_imaging();
	void init_OpenGL_1_3();
	void init_OpenGL_1_4();
	void init_OpenGL_1_5();
	void init_OpenGL_2_0();
	void init_OpenGL_2_1();
	void init_OpenGL_3_0();
	void init_OpenGL_3_1();
	void init_OpenGL_3_2();
	void init_OpenGL_3_3();
	void init_OpenGL_4_0();
	void init_OpenGL_4_1();
	void init_GL_ARB_multitexture();
	void init_GL_ARB_transpose_matrix();
	void init_GL_ARB_multisample();
	void init_GL_ARB_texture_env_add();
	void init_GL_ARB_texture_cube_map();
	void init_GL_ARB_texture_compression();
	void init_GL_ARB_texture_border_clamp();
	void init_GL_ARB_point_parameters();
	void init_GL_ARB_vertex_blend();
	void init_GL_ARB_matrix_palette();
	void init_GL_ARB_texture_env_combine();
	void init_GL_ARB_texture_env_crossbar();
	void init_GL_ARB_texture_env_dot3();
	void init_GL_ARB_texture_mirrored_repeat();
	void init_GL_ARB_depth_texture();
	void init_GL_ARB_shadow();
	void init_GL_ARB_shadow_ambient();
	void init_GL_ARB_window_pos();
	void init_GL_ARB_vertex_program();
	void init_GL_ARB_fragment_program();
	void init_GL_ARB_vertex_buffer_object();
	void init_GL_ARB_occlusion_query();
	void init_GL_ARB_shader_objects();
	void init_GL_ARB_vertex_shader();
	void init_GL_ARB_fragment_shader();
	void init_GL_ARB_shading_language_100();
	void init_GL_ARB_texture_non_power_of_two();
	void init_GL_ARB_point_sprite();
	void init_GL_ARB_fragment_program_shadow();
	void init_GL_ARB_draw_buffers();
	void init_GL_ARB_texture_rectangle();
	void init_GL_ARB_color_buffer_float();
	void init_GL_ARB_half_float_pixel();
	void init_GL_ARB_texture_float();
	void init_GL_ARB_pixel_buffer_object();
	void init_GL_ARB_depth_buffer_float();
	void init_GL_ARB_draw_instanced();
	void init_GL_ARB_framebuffer_object();
	void init_GL_ARB_framebuffer_sRGB();
	void init_GL_ARB_geometry_shader4();
	void init_GL_ARB_half_float_vertex();
	void init_GL_ARB_instanced_arrays();
	void init_GL_ARB_map_buffer_range();
	void init_GL_ARB_texture_buffer_object();
	void init_GL_ARB_texture_compression_rgtc();
	void init_GL_ARB_texture_rg();
	void init_GL_ARB_vertex_array_object();
	void init_GL_ARB_uniform_buffer_object();
	void init_GL_ARB_compatibility();
	void init_GL_ARB_copy_buffer();
	void init_GL_ARB_shader_texture_lod();
	void init_GL_ARB_depth_clamp();
	void init_GL_ARB_draw_elements_base_vertex();
	void init_GL_ARB_fragment_coord_conventions();
	void init_GL_ARB_provoking_vertex();
	void init_GL_ARB_seamless_cube_map();
	void init_GL_ARB_sync();
	void init_GL_ARB_texture_multisample();
	void init_GL_ARB_vertex_array_bgra();
	void init_GL_ARB_draw_buffers_blend();
	void init_GL_ARB_sample_shading();
	void init_GL_ARB_texture_cube_map_array();
	void init_GL_ARB_texture_gather();
	void init_GL_ARB_texture_query_lod();
	void init_GL_ARB_shading_language_include();
	void init_GL_ARB_texture_compression_bptc();
	void init_GL_ARB_blend_func_extended();
	void init_GL_ARB_explicit_attrib_location();
	void init_GL_ARB_occlusion_query2();
	void init_GL_ARB_sampler_objects();
	void init_GL_ARB_shader_bit_encoding();
	void init_GL_ARB_texture_rgb10_a2ui();
	void init_GL_ARB_texture_swizzle();
	void init_GL_ARB_timer_query();
	void init_GL_ARB_vertex_type_2_10_10_10_rev();
	void init_GL_ARB_draw_indirect();
	void init_GL_ARB_gpu_shader5();
	void init_GL_ARB_gpu_shader_fp64();
	void init_GL_ARB_shader_subroutine();
	void init_GL_ARB_tessellation_shader();
	void init_GL_ARB_texture_buffer_object_rgb32();
	void init_GL_ARB_transform_feedback2();
	void init_GL_ARB_transform_feedback3();
	void init_GL_ARB_ES2_compatibility();
	void init_GL_ARB_get_program_binary();
	void init_GL_ARB_separate_shader_objects();
	void init_GL_ARB_shader_precision();
	void init_GL_ARB_vertex_attrib_64bit();
	void init_GL_ARB_viewport_array();
	void init_GL_ARB_cl_event();
	void init_GL_ARB_debug_output();
	void init_GL_ARB_robustness();
	void init_GL_ARB_shader_stencil_export();
	void init_GL_EXT_abgr();
	void init_GL_EXT_blend_color();
	void init_GL_EXT_polygon_offset();
	void init_GL_EXT_texture();
	void init_GL_EXT_texture3D();
	void init_GL_SGIS_texture_filter4();
	void init_GL_EXT_subtexture();
	void init_GL_EXT_copy_texture();
	void init_GL_EXT_histogram();
	void init_GL_EXT_convolution();
	void init_GL_SGI_color_matrix();
	void init_GL_SGI_color_table();
	void init_GL_SGIS_pixel_texture();
	void init_GL_SGIX_pixel_texture();
	void init_GL_SGIS_texture4D();
	void init_GL_SGI_texture_color_table();
	void init_GL_EXT_cmyka();
	void init_GL_EXT_texture_object();
	void init_GL_SGIS_detail_texture();
	void init_GL_SGIS_sharpen_texture();
	void init_GL_EXT_packed_pixels();
	void init_GL_SGIS_texture_lod();
	void init_GL_SGIS_multisample();
	void init_GL_EXT_rescale_normal();
	void init_GL_EXT_vertex_array();
	void init_GL_EXT_misc_attribute();
	void init_GL_SGIS_generate_mipmap();
	void init_GL_SGIX_clipmap();
	void init_GL_SGIX_shadow();
	void init_GL_SGIS_texture_edge_clamp();
	void init_GL_SGIS_texture_border_clamp();
	void init_GL_EXT_blend_minmax();
	void init_GL_EXT_blend_subtract();
	void init_GL_EXT_blend_logic_op();
	void init_GL_SGIX_interlace();
	void init_GL_SGIX_pixel_tiles();
	void init_GL_SGIS_texture_select();
	void init_GL_SGIX_sprite();
	void init_GL_SGIX_texture_multi_buffer();
	void init_GL_EXT_point_parameters();
	void init_GL_SGIS_point_parameters();
	void init_GL_SGIX_instruments();
	void init_GL_SGIX_texture_scale_bias();
	void init_GL_SGIX_framezoom();
	void init_GL_SGIX_tag_sample_buffer();
	void init_GL_FfdMaskSGIX();
	void init_GL_SGIX_polynomial_ffd();
	void init_GL_SGIX_reference_plane();
	void init_GL_SGIX_flush_raster();
	void init_GL_SGIX_depth_texture();
	void init_GL_SGIS_fog_function();
	void init_GL_SGIX_fog_offset();
	void init_GL_HP_image_transform();
	void init_GL_HP_convolution_border_modes();
	void init_GL_INGR_palette_buffer();
	void init_GL_SGIX_texture_add_env();
	void init_GL_EXT_color_subtable();
	void init_GL_PGI_vertex_hints();
	void init_GL_PGI_misc_hints();
	void init_GL_EXT_paletted_texture();
	void init_GL_EXT_clip_volume_hint();
	void init_GL_SGIX_list_priority();
	void init_GL_SGIX_ir_instrument1();
	void init_GL_SGIX_calligraphic_fragment();
	void init_GL_SGIX_texture_lod_bias();
	void init_GL_SGIX_shadow_ambient();
	void init_GL_EXT_index_texture();
	void init_GL_EXT_index_material();
	void init_GL_EXT_index_func();
	void init_GL_EXT_index_array_formats();
	void init_GL_EXT_compiled_vertex_array();
	void init_GL_EXT_cull_vertex();
	void init_GL_SGIX_ycrcb();
	void init_GL_SGIX_fragment_lighting();
	void init_GL_IBM_rasterpos_clip();
	void init_GL_HP_texture_lighting();
	void init_GL_EXT_draw_range_elements();
	void init_GL_WIN_phong_shading();
	void init_GL_WIN_specular_fog();
	void init_GL_EXT_light_texture();
	void init_GL_SGIX_blend_alpha_minmax();
	void init_GL_SGIX_impact_pixel_texture();
	void init_GL_EXT_bgra();
	void init_GL_SGIX_async();
	void init_GL_SGIX_async_pixel();
	void init_GL_SGIX_async_histogram();
	void init_GL_INTEL_texture_scissor();
	void init_GL_INTEL_parallel_arrays();
	void init_GL_HP_occlusion_test();
	void init_GL_EXT_pixel_transform();
	void init_GL_EXT_pixel_transform_color_table();
	void init_GL_EXT_shared_texture_palette();
	void init_GL_EXT_separate_specular_color();
	void init_GL_EXT_secondary_color();
	void init_GL_EXT_texture_perturb_normal();
	void init_GL_EXT_multi_draw_arrays();
	void init_GL_EXT_fog_coord();
	void init_GL_REND_screen_coordinates();
	void init_GL_EXT_coordinate_frame();
	void init_GL_EXT_texture_env_combine();
	void init_GL_APPLE_specular_vector();
	void init_GL_APPLE_transform_hint();
	void init_GL_SGIX_fog_scale();
	void init_GL_SUNX_constant_data();
	void init_GL_SUN_global_alpha();
	void init_GL_SUN_triangle_list();
	void init_GL_SUN_vertex();
	void init_GL_EXT_blend_func_separate();
	void init_GL_INGR_color_clamp();
	void init_GL_INGR_interlace_read();
	void init_GL_EXT_stencil_wrap();
	void init_GL_EXT_422_pixels();
	void init_GL_NV_texgen_reflection();
	void init_GL_EXT_texture_cube_map();
	void init_GL_SUN_convolution_border_modes();
	void init_GL_EXT_texture_env_add();
	void init_GL_EXT_texture_lod_bias();
	void init_GL_EXT_texture_filter_anisotropic();
	void init_GL_EXT_vertex_weighting();
	void init_GL_NV_light_max_exponent();
	void init_GL_NV_vertex_array_range();
	void init_GL_NV_register_combiners();
	void init_GL_NV_fog_distance();
	void init_GL_NV_texgen_emboss();
	void init_GL_NV_blend_square();
	void init_GL_NV_texture_env_combine4();
	void init_GL_MESA_resize_buffers();
	void init_GL_MESA_window_pos();
	void init_GL_EXT_texture_compression_s3tc();
	void init_GL_IBM_cull_vertex();
	void init_GL_IBM_multimode_draw_arrays();
	void init_GL_IBM_vertex_array_lists();
	void init_GL_SGIX_ycrcb_subsample();
	void init_GL_SGIX_ycrcba();
	void init_GL_SGI_depth_pass_instrument();
	void init_GL_3DFX_texture_compression_FXT1();
	void init_GL_3DFX_multisample();
	void init_GL_3DFX_tbuffer();
	void init_GL_EXT_multisample();
	void init_GL_SGIX_vertex_preclip();
	void init_GL_SGIX_convolution_accuracy();
	void init_GL_SGIX_resample();
	void init_GL_SGIS_point_line_texgen();
	void init_GL_SGIS_texture_color_mask();
	void init_GL_EXT_texture_env_dot3();
	void init_GL_ATI_texture_mirror_once();
	void init_GL_NV_fence();
	void init_GL_IBM_texture_mirrored_repeat();
	void init_GL_NV_evaluators();
	void init_GL_NV_packed_depth_stencil();
	void init_GL_NV_register_combiners2();
	void init_GL_NV_texture_compression_vtc();
	void init_GL_NV_texture_rectangle();
	void init_GL_NV_texture_shader();
	void init_GL_NV_texture_shader2();
	void init_GL_NV_vertex_array_range2();
	void init_GL_NV_vertex_program();
	void init_GL_SGIX_texture_coordinate_clamp();
	void init_GL_SGIX_scalebias_hint();
	void init_GL_OML_interlace();
	void init_GL_OML_subsample();
	void init_GL_OML_resample();
	void init_GL_NV_copy_depth_to_color();
	void init_GL_ATI_envmap_bumpmap();
	void init_GL_ATI_fragment_shader();
	void init_GL_ATI_pn_triangles();
	void init_GL_ATI_vertex_array_object();
	void init_GL_EXT_vertex_shader();
	void init_GL_ATI_vertex_streams();
	void init_GL_ATI_element_array();
	void init_GL_SUN_mesh_array();
	void init_GL_SUN_slice_accum();
	void init_GL_NV_multisample_filter_hint();
	void init_GL_NV_depth_clamp();
	void init_GL_NV_occlusion_query();
	void init_GL_NV_point_sprite();
	void init_GL_NV_texture_shader3();
	void init_GL_NV_vertex_program1_1();
	void init_GL_EXT_shadow_funcs();
	void init_GL_EXT_stencil_two_side();
	void init_GL_ATI_text_fragment_shader();
	void init_GL_APPLE_client_storage();
	void init_GL_APPLE_element_array();
	void init_GL_APPLE_fence();
	void init_GL_APPLE_vertex_array_object();
	void init_GL_APPLE_vertex_array_range();
	void init_GL_APPLE_ycbcr_422();
	void init_GL_S3_s3tc();
	void init_GL_ATI_draw_buffers();
	void init_GL_ATI_pixel_format_float();
	void init_GL_ATI_texture_env_combine3();
	void init_GL_ATI_texture_float();
	void init_GL_NV_float_buffer();
	void init_GL_NV_fragment_program();
	void init_GL_NV_half_float();
	void init_GL_NV_pixel_data_range();
	void init_GL_NV_primitive_restart();
	void init_GL_NV_texture_expand_normal();
	void init_GL_NV_vertex_program2();
	void init_GL_ATI_map_object_buffer();
	void init_GL_ATI_separate_stencil();
	void init_GL_ATI_vertex_attrib_array_object();
	void init_GL_OES_read_format();
	void init_GL_EXT_depth_bounds_test();
	void init_GL_EXT_texture_mirror_clamp();
	void init_GL_EXT_blend_equation_separate();
	void init_GL_MESA_pack_invert();
	void init_GL_MESA_ycbcr_texture();
	void init_GL_EXT_pixel_buffer_object();
	void init_GL_NV_fragment_program_option();
	void init_GL_NV_fragment_program2();
	void init_GL_NV_vertex_program2_option();
	void init_GL_NV_vertex_program3();
	void init_GL_EXT_framebuffer_object();
	void init_GL_GREMEDY_string_marker();
	void init_GL_EXT_packed_depth_stencil();
	void init_GL_EXT_stencil_clear_tag();
	void init_GL_EXT_texture_sRGB();
	void init_GL_EXT_framebuffer_blit();
	void init_GL_EXT_framebuffer_multisample();
	void init_GL_MESAX_texture_stack();
	void init_GL_EXT_timer_query();
	void init_GL_EXT_gpu_program_parameters();
	void init_GL_APPLE_flush_buffer_range();
	void init_GL_NV_gpu_program4();
	void init_GL_NV_geometry_program4();
	void init_GL_EXT_geometry_shader4();
	void init_GL_NV_vertex_program4();
	void init_GL_EXT_gpu_shader4();
	void init_GL_EXT_draw_instanced();
	void init_GL_EXT_packed_float();
	void init_GL_EXT_texture_array();
	void init_GL_EXT_texture_buffer_object();
	void init_GL_EXT_texture_compression_latc();
	void init_GL_EXT_texture_compression_rgtc();
	void init_GL_EXT_texture_shared_exponent();
	void init_GL_NV_depth_buffer_float();
	void init_GL_NV_fragment_program4();
	void init_GL_NV_framebuffer_multisample_coverage();
	void init_GL_EXT_framebuffer_sRGB();
	void init_GL_NV_geometry_shader4();
	void init_GL_NV_parameter_buffer_object();
	void init_GL_EXT_draw_buffers2();
	void init_GL_NV_transform_feedback();
	void init_GL_EXT_bindable_uniform();
	void init_GL_EXT_texture_integer();
	void init_GL_GREMEDY_frame_terminator();
	void init_GL_NV_conditional_render();
	void init_GL_NV_present_video();
	void init_GL_EXT_transform_feedback();
	void init_GL_EXT_direct_state_access();
	void init_GL_EXT_vertex_array_bgra();
	void init_GL_EXT_texture_swizzle();
	void init_GL_NV_explicit_multisample();
	void init_GL_NV_transform_feedback2();
	void init_GL_ATI_meminfo();
	void init_GL_AMD_performance_monitor();
	void init_GL_AMD_texture_texture4();
	void init_GL_AMD_vertex_shader_tesselator();
	void init_GL_EXT_provoking_vertex();
	void init_GL_EXT_texture_snorm();
	void init_GL_AMD_draw_buffers_blend();
	void init_GL_APPLE_texture_range();
	void init_GL_APPLE_float_pixels();
	void init_GL_APPLE_vertex_program_evaluators();
	void init_GL_APPLE_aux_depth_stencil();
	void init_GL_APPLE_object_purgeable();
	void init_GL_APPLE_row_bytes();
	void init_GL_APPLE_rgb_422();
	void init_GL_NV_video_capture();
	void init_GL_NV_copy_image();
	void init_GL_EXT_separate_shader_objects();
	void init_GL_NV_parameter_buffer_object2();
	void init_GL_NV_shader_buffer_load();
	void init_GL_NV_vertex_buffer_unified_memory();
	void init_GL_NV_texture_barrier();
	void init_GL_AMD_shader_stencil_export();
	void init_GL_AMD_seamless_cubemap_per_texture();
	void init_GL_AMD_conservative_depth();
	void init_GL_EXT_shader_image_load_store();
	void init_GL_EXT_vertex_attrib_64bit();
	void init_GL_NV_gpu_program5();
	void init_GL_NV_gpu_shader5();
	void init_GL_NV_shader_buffer_store();
	void init_GL_NV_tessellation_program5();
	void init_GL_NV_vertex_attrib_integer_64bit();
	void init_GL_NV_multisample_coverage();
	void init_GL_AMD_name_gen_delete();
	void init_GL_AMD_debug_output();
	void init_GL_NV_vdpau_interop();
	void init_GL_AMD_transform_feedback3_lines_triangles();
	void init_GL_AMD_depth_clamp_separate();
	void init_GL_EXT_texture_sRGB_decode();
	void init_GL_NV_texture_multisample();
	void init_GL_AMD_blend_minmax_factor();
	void init_GL_AMD_sample_positions();
	void init_GL_EXT_x11_sync_object();
	void init_GL_AMD_multi_draw_indirect();
	void init_GL_EXT_framebuffer_multisample_blit_scaled();
	void init_GL_SGIX_texture_select();
	void init_GL_INGR_blend_func_separate();
	void init_GL_SGIX_subsample();
	void init_GL_SGIX_depth_pass_instrument();
	void init_GL_SGIX_igloo_interface();
	void init_WGL_ARB_buffer_region();
	void init_WGL_ARB_multisample();
	void init_WGL_ARB_extensions_string();
	void init_WGL_ARB_pixel_format();
	void init_WGL_ARB_make_current_read();
	void init_WGL_ARB_pbuffer();
	void init_WGL_ARB_render_texture();
	void init_WGL_ARB_pixel_format_float();
	void init_WGL_ARB_framebuffer_sRGB();
	void init_WGL_ARB_create_context();
	void init_WGL_ARB_create_context_profile();
	void init_WGL_ARB_create_context_robustness();
	void init_WGL_EXT_make_current_read();
	void init_WGL_EXT_pixel_format();
	void init_WGL_EXT_pbuffer();
	void init_WGL_EXT_depth_float();
	void init_WGL_3DFX_multisample();
	void init_WGL_EXT_multisample();
	void init_WGL_I3D_digital_video_control();
	void init_WGL_I3D_gamma();
	void init_WGL_I3D_genlock();
	void init_WGL_I3D_image_buffer();
	void init_WGL_I3D_swap_frame_lock();
	void init_WGL_NV_render_depth_texture();
	void init_WGL_NV_render_texture_rectangle();
	void init_WGL_ATI_pixel_format_float();
	void init_WGL_NV_float_buffer();
	void init_WGL_3DL_stereo_control();
	void init_WGL_EXT_pixel_format_packed_float();
	void init_WGL_EXT_framebuffer_sRGB();
	void init_WGL_NV_present_video();
	void init_WGL_NV_video_out();
	void init_WGL_NV_swap_group();
	void init_WGL_NV_gpu_affinity();
	void init_WGL_AMD_gpu_association();
	void init_WGL_NV_video_capture();
	void init_WGL_NV_copy_image();
	void init_WGL_NV_multisample_coverage();
	void init_WGL_EXT_create_context_es2_profile();
	void init_WGL_NV_DX_interop();
	void init_WGL_NV_video_output();
	void init_WGL_EXT_display_color_table();
	void init_WGL_EXT_extensions_string();
	void init_WGL_EXT_swap_control();
	void init_WGL_NV_vertex_array_range();
	void init_WGL_OML_sync_control();
	void init_WGL_I3D_swap_frame_usage();
}

// OpenGL_1_2
#define GL_UNSIGNED_BYTE_3_3_2            0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4         0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1         0x8034
#define GL_UNSIGNED_INT_8_8_8_8           0x8035
#define GL_UNSIGNED_INT_10_10_10_2        0x8036
#define GL_TEXTURE_BINDING_3D             0x806A
#define GL_PACK_SKIP_IMAGES               0x806B
#define GL_PACK_IMAGE_HEIGHT              0x806C
#define GL_UNPACK_SKIP_IMAGES             0x806D
#define GL_UNPACK_IMAGE_HEIGHT            0x806E
#define GL_TEXTURE_3D                     0x806F
#define GL_PROXY_TEXTURE_3D               0x8070
#define GL_TEXTURE_DEPTH                  0x8071
#define GL_TEXTURE_WRAP_R                 0x8072
#define GL_MAX_3D_TEXTURE_SIZE            0x8073
#define GL_UNSIGNED_BYTE_2_3_3_REV        0x8362
#define GL_UNSIGNED_SHORT_5_6_5           0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV       0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV     0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV     0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV       0x8367
#define GL_UNSIGNED_INT_2_10_10_10_REV    0x8368
#define GL_BGR                            0x80E0
#define GL_BGRA                           0x80E1
#define GL_MAX_ELEMENTS_VERTICES          0x80E8
#define GL_MAX_ELEMENTS_INDICES           0x80E9
#define GL_CLAMP_TO_EDGE                  0x812F
#define GL_TEXTURE_MIN_LOD                0x813A
#define GL_TEXTURE_MAX_LOD                0x813B
#define GL_TEXTURE_BASE_LEVEL             0x813C
#define GL_TEXTURE_MAX_LEVEL              0x813D
#define GL_SMOOTH_POINT_SIZE_RANGE        0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY  0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE        0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY  0x0B23
#define GL_ALIASED_LINE_WIDTH_RANGE       0x846E

// GL_ARB_imaging
#define GL_CONSTANT_COLOR                 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR       0x8002
#define GL_CONSTANT_ALPHA                 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA       0x8004
#define GL_BLEND_COLOR                    0x8005
#define GL_FUNC_ADD                       0x8006
#define GL_MIN                            0x8007
#define GL_MAX                            0x8008
#define GL_BLEND_EQUATION                 0x8009
#define GL_FUNC_SUBTRACT                  0x800A
#define GL_FUNC_REVERSE_SUBTRACT          0x800B

// OpenGL_1_3
#define GL_TEXTURE0                       0x84C0
#define GL_TEXTURE1                       0x84C1
#define GL_TEXTURE2                       0x84C2
#define GL_TEXTURE3                       0x84C3
#define GL_TEXTURE4                       0x84C4
#define GL_TEXTURE5                       0x84C5
#define GL_TEXTURE6                       0x84C6
#define GL_TEXTURE7                       0x84C7
#define GL_TEXTURE8                       0x84C8
#define GL_TEXTURE9                       0x84C9
#define GL_TEXTURE10                      0x84CA
#define GL_TEXTURE11                      0x84CB
#define GL_TEXTURE12                      0x84CC
#define GL_TEXTURE13                      0x84CD
#define GL_TEXTURE14                      0x84CE
#define GL_TEXTURE15                      0x84CF
#define GL_TEXTURE16                      0x84D0
#define GL_TEXTURE17                      0x84D1
#define GL_TEXTURE18                      0x84D2
#define GL_TEXTURE19                      0x84D3
#define GL_TEXTURE20                      0x84D4
#define GL_TEXTURE21                      0x84D5
#define GL_TEXTURE22                      0x84D6
#define GL_TEXTURE23                      0x84D7
#define GL_TEXTURE24                      0x84D8
#define GL_TEXTURE25                      0x84D9
#define GL_TEXTURE26                      0x84DA
#define GL_TEXTURE27                      0x84DB
#define GL_TEXTURE28                      0x84DC
#define GL_TEXTURE29                      0x84DD
#define GL_TEXTURE30                      0x84DE
#define GL_TEXTURE31                      0x84DF
#define GL_ACTIVE_TEXTURE                 0x84E0
#define GL_MULTISAMPLE                    0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE       0x809E
#define GL_SAMPLE_ALPHA_TO_ONE            0x809F
#define GL_SAMPLE_COVERAGE                0x80A0
#define GL_SAMPLE_BUFFERS                 0x80A8
#define GL_SAMPLES                        0x80A9
#define GL_SAMPLE_COVERAGE_VALUE          0x80AA
#define GL_SAMPLE_COVERAGE_INVERT         0x80AB
#define GL_TEXTURE_CUBE_MAP               0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP       0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X    0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X    0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y    0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y    0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z    0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z    0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP         0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE      0x851C
#define GL_COMPRESSED_RGB                 0x84ED
#define GL_COMPRESSED_RGBA                0x84EE
#define GL_TEXTURE_COMPRESSION_HINT       0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE  0x86A0
#define GL_TEXTURE_COMPRESSED             0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS     0x86A3
#define GL_CLAMP_TO_BORDER                0x812D

// OpenGL_1_4
#define GL_BLEND_DST_RGB                  0x80C8
#define GL_BLEND_SRC_RGB                  0x80C9
#define GL_BLEND_DST_ALPHA                0x80CA
#define GL_BLEND_SRC_ALPHA                0x80CB
#define GL_POINT_FADE_THRESHOLD_SIZE      0x8128
#define GL_DEPTH_COMPONENT16              0x81A5
#define GL_DEPTH_COMPONENT24              0x81A6
#define GL_DEPTH_COMPONENT32              0x81A7
#define GL_MIRRORED_REPEAT                0x8370
#define GL_MAX_TEXTURE_LOD_BIAS           0x84FD
#define GL_TEXTURE_LOD_BIAS               0x8501
#define GL_INCR_WRAP                      0x8507
#define GL_DECR_WRAP                      0x8508
#define GL_TEXTURE_DEPTH_SIZE             0x884A
#define GL_TEXTURE_COMPARE_MODE           0x884C
#define GL_TEXTURE_COMPARE_FUNC           0x884D

// OpenGL_1_5
#define GL_BUFFER_SIZE                    0x8764
#define GL_BUFFER_USAGE                   0x8765
#define GL_QUERY_COUNTER_BITS             0x8864
#define GL_CURRENT_QUERY                  0x8865
#define GL_QUERY_RESULT                   0x8866
#define GL_QUERY_RESULT_AVAILABLE         0x8867
#define GL_ARRAY_BUFFER                   0x8892
#define GL_ELEMENT_ARRAY_BUFFER           0x8893
#define GL_ARRAY_BUFFER_BINDING           0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING   0x8895
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_READ_ONLY                      0x88B8
#define GL_WRITE_ONLY                     0x88B9
#define GL_READ_WRITE                     0x88BA
#define GL_BUFFER_ACCESS                  0x88BB
#define GL_BUFFER_MAPPED                  0x88BC
#define GL_BUFFER_MAP_POINTER             0x88BD
#define GL_STREAM_DRAW                    0x88E0
#define GL_STREAM_READ                    0x88E1
#define GL_STREAM_COPY                    0x88E2
#define GL_STATIC_DRAW                    0x88E4
#define GL_STATIC_READ                    0x88E5
#define GL_STATIC_COPY                    0x88E6
#define GL_DYNAMIC_DRAW                   0x88E8
#define GL_DYNAMIC_READ                   0x88E9
#define GL_DYNAMIC_COPY                   0x88EA
#define GL_SAMPLES_PASSED                 0x8914
/* GL types for handling large vertex buffer objects */
typedef ptrdiff_t GLintptr;
typedef ptrdiff_t GLsizeiptr;

// OpenGL_2_0
#define GL_BLEND_EQUATION_RGB             0x8009
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED    0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE       0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE     0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE       0x8625
#define GL_CURRENT_VERTEX_ATTRIB          0x8626
#define GL_VERTEX_PROGRAM_POINT_SIZE      0x8642
#define GL_VERTEX_ATTRIB_ARRAY_POINTER    0x8645
#define GL_STENCIL_BACK_FUNC              0x8800
#define GL_STENCIL_BACK_FAIL              0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL   0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS   0x8803
#define GL_MAX_DRAW_BUFFERS               0x8824
#define GL_DRAW_BUFFER0                   0x8825
#define GL_DRAW_BUFFER1                   0x8826
#define GL_DRAW_BUFFER2                   0x8827
#define GL_DRAW_BUFFER3                   0x8828
#define GL_DRAW_BUFFER4                   0x8829
#define GL_DRAW_BUFFER5                   0x882A
#define GL_DRAW_BUFFER6                   0x882B
#define GL_DRAW_BUFFER7                   0x882C
#define GL_DRAW_BUFFER8                   0x882D
#define GL_DRAW_BUFFER9                   0x882E
#define GL_DRAW_BUFFER10                  0x882F
#define GL_DRAW_BUFFER11                  0x8830
#define GL_DRAW_BUFFER12                  0x8831
#define GL_DRAW_BUFFER13                  0x8832
#define GL_DRAW_BUFFER14                  0x8833
#define GL_DRAW_BUFFER15                  0x8834
#define GL_BLEND_EQUATION_ALPHA           0x883D
#define GL_MAX_VERTEX_ATTRIBS             0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_MAX_TEXTURE_IMAGE_UNITS        0x8872
#define GL_FRAGMENT_SHADER                0x8B30
#define GL_VERTEX_SHADER                  0x8B31
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS  0x8B4A
#define GL_MAX_VARYING_FLOATS             0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_SHADER_TYPE                    0x8B4F
#define GL_FLOAT_VEC2                     0x8B50
#define GL_FLOAT_VEC3                     0x8B51
#define GL_FLOAT_VEC4                     0x8B52
#define GL_INT_VEC2                       0x8B53
#define GL_INT_VEC3                       0x8B54
#define GL_INT_VEC4                       0x8B55
#define GL_BOOL                           0x8B56
#define GL_BOOL_VEC2                      0x8B57
#define GL_BOOL_VEC3                      0x8B58
#define GL_BOOL_VEC4                      0x8B59
#define GL_FLOAT_MAT2                     0x8B5A
#define GL_FLOAT_MAT3                     0x8B5B
#define GL_FLOAT_MAT4                     0x8B5C
#define GL_SAMPLER_1D                     0x8B5D
#define GL_SAMPLER_2D                     0x8B5E
#define GL_SAMPLER_3D                     0x8B5F
#define GL_SAMPLER_CUBE                   0x8B60
#define GL_SAMPLER_1D_SHADOW              0x8B61
#define GL_SAMPLER_2D_SHADOW              0x8B62
#define GL_DELETE_STATUS                  0x8B80
#define GL_COMPILE_STATUS                 0x8B81
#define GL_LINK_STATUS                    0x8B82
#define GL_VALIDATE_STATUS                0x8B83
#define GL_INFO_LOG_LENGTH                0x8B84
#define GL_ATTACHED_SHADERS               0x8B85
#define GL_ACTIVE_UNIFORMS                0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH      0x8B87
#define GL_SHADER_SOURCE_LENGTH           0x8B88
#define GL_ACTIVE_ATTRIBUTES              0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH    0x8B8A
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#define GL_SHADING_LANGUAGE_VERSION       0x8B8C
#define GL_CURRENT_PROGRAM                0x8B8D
#define GL_POINT_SPRITE_COORD_ORIGIN      0x8CA0
#define GL_LOWER_LEFT                     0x8CA1
#define GL_UPPER_LEFT                     0x8CA2
#define GL_STENCIL_BACK_REF               0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK        0x8CA4
#define GL_STENCIL_BACK_WRITEMASK         0x8CA5
/* GL type for program/shader text */
typedef char GLchar;

// OpenGL_2_1
#define GL_PIXEL_PACK_BUFFER              0x88EB
#define GL_PIXEL_UNPACK_BUFFER            0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING      0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING    0x88EF
#define GL_FLOAT_MAT2x3                   0x8B65
#define GL_FLOAT_MAT2x4                   0x8B66
#define GL_FLOAT_MAT3x2                   0x8B67
#define GL_FLOAT_MAT3x4                   0x8B68
#define GL_FLOAT_MAT4x2                   0x8B69
#define GL_FLOAT_MAT4x3                   0x8B6A
#define GL_SRGB                           0x8C40
#define GL_SRGB8                          0x8C41
#define GL_SRGB_ALPHA                     0x8C42
#define GL_SRGB8_ALPHA8                   0x8C43
#define GL_COMPRESSED_SRGB                0x8C48
#define GL_COMPRESSED_SRGB_ALPHA          0x8C49

// OpenGL_3_0
#define GL_COMPARE_REF_TO_TEXTURE         0x884E
#define GL_CLIP_DISTANCE0                 0x3000
#define GL_CLIP_DISTANCE1                 0x3001
#define GL_CLIP_DISTANCE2                 0x3002
#define GL_CLIP_DISTANCE3                 0x3003
#define GL_CLIP_DISTANCE4                 0x3004
#define GL_CLIP_DISTANCE5                 0x3005
#define GL_CLIP_DISTANCE6                 0x3006
#define GL_CLIP_DISTANCE7                 0x3007
#define GL_MAX_CLIP_DISTANCES             0x0D32
#define GL_MAJOR_VERSION                  0x821B
#define GL_MINOR_VERSION                  0x821C
#define GL_NUM_EXTENSIONS                 0x821D
#define GL_CONTEXT_FLAGS                  0x821E
#define GL_DEPTH_BUFFER                   0x8223
#define GL_STENCIL_BUFFER                 0x8224
#define GL_COMPRESSED_RED                 0x8225
#define GL_COMPRESSED_RG                  0x8226
#define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT 0x0001
#define GL_RGBA32F                        0x8814
#define GL_RGB32F                         0x8815
#define GL_RGBA16F                        0x881A
#define GL_RGB16F                         0x881B
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER    0x88FD
#define GL_MAX_ARRAY_TEXTURE_LAYERS       0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET       0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET       0x8905
#define GL_CLAMP_READ_COLOR               0x891C
#define GL_FIXED_ONLY                     0x891D
#define GL_MAX_VARYING_COMPONENTS         0x8B4B
#define GL_TEXTURE_1D_ARRAY               0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY         0x8C19
#define GL_TEXTURE_2D_ARRAY               0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY         0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY       0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY       0x8C1D
#define GL_R11F_G11F_B10F                 0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV   0x8C3B
#define GL_RGB9_E5                        0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV       0x8C3E
#define GL_TEXTURE_SHARED_SIZE            0x8C3F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS    0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
#define GL_PRIMITIVES_GENERATED           0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
#define GL_RASTERIZER_DISCARD             0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
#define GL_INTERLEAVED_ATTRIBS            0x8C8C
#define GL_SEPARATE_ATTRIBS               0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER      0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
#define GL_RGBA32UI                       0x8D70
#define GL_RGB32UI                        0x8D71
#define GL_RGBA16UI                       0x8D76
#define GL_RGB16UI                        0x8D77
#define GL_RGBA8UI                        0x8D7C
#define GL_RGB8UI                         0x8D7D
#define GL_RGBA32I                        0x8D82
#define GL_RGB32I                         0x8D83
#define GL_RGBA16I                        0x8D88
#define GL_RGB16I                         0x8D89
#define GL_RGBA8I                         0x8D8E
#define GL_RGB8I                          0x8D8F
#define GL_RED_INTEGER                    0x8D94
#define GL_GREEN_INTEGER                  0x8D95
#define GL_BLUE_INTEGER                   0x8D96
#define GL_RGB_INTEGER                    0x8D98
#define GL_RGBA_INTEGER                   0x8D99
#define GL_BGR_INTEGER                    0x8D9A
#define GL_BGRA_INTEGER                   0x8D9B
#define GL_SAMPLER_1D_ARRAY               0x8DC0
#define GL_SAMPLER_2D_ARRAY               0x8DC1
#define GL_SAMPLER_1D_ARRAY_SHADOW        0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW        0x8DC4
#define GL_SAMPLER_CUBE_SHADOW            0x8DC5
#define GL_UNSIGNED_INT_VEC2              0x8DC6
#define GL_UNSIGNED_INT_VEC3              0x8DC7
#define GL_UNSIGNED_INT_VEC4              0x8DC8
#define GL_INT_SAMPLER_1D                 0x8DC9
#define GL_INT_SAMPLER_2D                 0x8DCA
#define GL_INT_SAMPLER_3D                 0x8DCB
#define GL_INT_SAMPLER_CUBE               0x8DCC
#define GL_INT_SAMPLER_1D_ARRAY           0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY           0x8DCF
#define GL_UNSIGNED_INT_SAMPLER_1D        0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D        0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D        0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE      0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY  0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY  0x8DD7
#define GL_QUERY_WAIT                     0x8E13
#define GL_QUERY_NO_WAIT                  0x8E14
#define GL_QUERY_BY_REGION_WAIT           0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT        0x8E16
#define GL_BUFFER_ACCESS_FLAGS            0x911F
#define GL_BUFFER_MAP_LENGTH              0x9120
#define GL_BUFFER_MAP_OFFSET              0x9121
/* Reuse tokens from ARB_depth_buffer_float */
/* reuse GL_DEPTH_COMPONENT32F */
/* reuse GL_DEPTH32F_STENCIL8 */
/* reuse GL_FLOAT_32_UNSIGNED_INT_24_8_REV */
/* Reuse tokens from ARB_framebuffer_object */
/* reuse GL_INVALID_FRAMEBUFFER_OPERATION */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE */
/* reuse GL_FRAMEBUFFER_DEFAULT */
/* reuse GL_FRAMEBUFFER_UNDEFINED */
/* reuse GL_DEPTH_STENCIL_ATTACHMENT */
/* reuse GL_INDEX */
/* reuse GL_MAX_RENDERBUFFER_SIZE */
/* reuse GL_DEPTH_STENCIL */
/* reuse GL_UNSIGNED_INT_24_8 */
/* reuse GL_DEPTH24_STENCIL8 */
/* reuse GL_TEXTURE_STENCIL_SIZE */
/* reuse GL_TEXTURE_RED_TYPE */
/* reuse GL_TEXTURE_GREEN_TYPE */
/* reuse GL_TEXTURE_BLUE_TYPE */
/* reuse GL_TEXTURE_ALPHA_TYPE */
/* reuse GL_TEXTURE_DEPTH_TYPE */
/* reuse GL_UNSIGNED_NORMALIZED */
/* reuse GL_FRAMEBUFFER_BINDING */
/* reuse GL_DRAW_FRAMEBUFFER_BINDING */
/* reuse GL_RENDERBUFFER_BINDING */
/* reuse GL_READ_FRAMEBUFFER */
/* reuse GL_DRAW_FRAMEBUFFER */
/* reuse GL_READ_FRAMEBUFFER_BINDING */
/* reuse GL_RENDERBUFFER_SAMPLES */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER */
/* reuse GL_FRAMEBUFFER_COMPLETE */
/* reuse GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT */
/* reuse GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT */
/* reuse GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER */
/* reuse GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER */
/* reuse GL_FRAMEBUFFER_UNSUPPORTED */
/* reuse GL_MAX_COLOR_ATTACHMENTS */
/* reuse GL_COLOR_ATTACHMENT0 */
/* reuse GL_COLOR_ATTACHMENT1 */
/* reuse GL_COLOR_ATTACHMENT2 */
/* reuse GL_COLOR_ATTACHMENT3 */
/* reuse GL_COLOR_ATTACHMENT4 */
/* reuse GL_COLOR_ATTACHMENT5 */
/* reuse GL_COLOR_ATTACHMENT6 */
/* reuse GL_COLOR_ATTACHMENT7 */
/* reuse GL_COLOR_ATTACHMENT8 */
/* reuse GL_COLOR_ATTACHMENT9 */
/* reuse GL_COLOR_ATTACHMENT10 */
/* reuse GL_COLOR_ATTACHMENT11 */
/* reuse GL_COLOR_ATTACHMENT12 */
/* reuse GL_COLOR_ATTACHMENT13 */
/* reuse GL_COLOR_ATTACHMENT14 */
/* reuse GL_COLOR_ATTACHMENT15 */
/* reuse GL_DEPTH_ATTACHMENT */
/* reuse GL_STENCIL_ATTACHMENT */
/* reuse GL_FRAMEBUFFER */
/* reuse GL_RENDERBUFFER */
/* reuse GL_RENDERBUFFER_WIDTH */
/* reuse GL_RENDERBUFFER_HEIGHT */
/* reuse GL_RENDERBUFFER_INTERNAL_FORMAT */
/* reuse GL_STENCIL_INDEX1 */
/* reuse GL_STENCIL_INDEX4 */
/* reuse GL_STENCIL_INDEX8 */
/* reuse GL_STENCIL_INDEX16 */
/* reuse GL_RENDERBUFFER_RED_SIZE */
/* reuse GL_RENDERBUFFER_GREEN_SIZE */
/* reuse GL_RENDERBUFFER_BLUE_SIZE */
/* reuse GL_RENDERBUFFER_ALPHA_SIZE */
/* reuse GL_RENDERBUFFER_DEPTH_SIZE */
/* reuse GL_RENDERBUFFER_STENCIL_SIZE */
/* reuse GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE */
/* reuse GL_MAX_SAMPLES */
/* Reuse tokens from ARB_framebuffer_sRGB */
/* reuse GL_FRAMEBUFFER_SRGB */
/* Reuse tokens from ARB_half_float_vertex */
/* reuse GL_HALF_FLOAT */
/* Reuse tokens from ARB_map_buffer_range */
/* reuse GL_MAP_READ_BIT */
/* reuse GL_MAP_WRITE_BIT */
/* reuse GL_MAP_INVALIDATE_RANGE_BIT */
/* reuse GL_MAP_INVALIDATE_BUFFER_BIT */
/* reuse GL_MAP_FLUSH_EXPLICIT_BIT */
/* reuse GL_MAP_UNSYNCHRONIZED_BIT */
/* Reuse tokens from ARB_texture_compression_rgtc */
/* reuse GL_COMPRESSED_RED_RGTC1 */
/* reuse GL_COMPRESSED_SIGNED_RED_RGTC1 */
/* reuse GL_COMPRESSED_RG_RGTC2 */
/* reuse GL_COMPRESSED_SIGNED_RG_RGTC2 */
/* Reuse tokens from ARB_texture_rg */
/* reuse GL_RG */
/* reuse GL_RG_INTEGER */
/* reuse GL_R8 */
/* reuse GL_R16 */
/* reuse GL_RG8 */
/* reuse GL_RG16 */
/* reuse GL_R16F */
/* reuse GL_R32F */
/* reuse GL_RG16F */
/* reuse GL_RG32F */
/* reuse GL_R8I */
/* reuse GL_R8UI */
/* reuse GL_R16I */
/* reuse GL_R16UI */
/* reuse GL_R32I */
/* reuse GL_R32UI */
/* reuse GL_RG8I */
/* reuse GL_RG8UI */
/* reuse GL_RG16I */
/* reuse GL_RG16UI */
/* reuse GL_RG32I */
/* reuse GL_RG32UI */
/* Reuse tokens from ARB_vertex_array_object */
/* reuse GL_VERTEX_ARRAY_BINDING */

// OpenGL_3_1
#define GL_SAMPLER_2D_RECT                0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW         0x8B64
#define GL_SAMPLER_BUFFER                 0x8DC2
#define GL_INT_SAMPLER_2D_RECT            0x8DCD
#define GL_INT_SAMPLER_BUFFER             0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT   0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_BUFFER    0x8DD8
#define GL_TEXTURE_BUFFER                 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE        0x8C2B
#define GL_TEXTURE_BINDING_BUFFER         0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING 0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT          0x8C2E
#define GL_TEXTURE_RECTANGLE              0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE      0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE        0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE     0x84F8
#define GL_RED_SNORM                      0x8F90
#define GL_RG_SNORM                       0x8F91
#define GL_RGB_SNORM                      0x8F92
#define GL_RGBA_SNORM                     0x8F93
#define GL_R8_SNORM                       0x8F94
#define GL_RG8_SNORM                      0x8F95
#define GL_RGB8_SNORM                     0x8F96
#define GL_RGBA8_SNORM                    0x8F97
#define GL_R16_SNORM                      0x8F98
#define GL_RG16_SNORM                     0x8F99
#define GL_RGB16_SNORM                    0x8F9A
#define GL_RGBA16_SNORM                   0x8F9B
#define GL_SIGNED_NORMALIZED              0x8F9C
#define GL_PRIMITIVE_RESTART              0x8F9D
#define GL_PRIMITIVE_RESTART_INDEX        0x8F9E
/* Reuse tokens from ARB_copy_buffer */
/* reuse GL_COPY_READ_BUFFER */
/* reuse GL_COPY_WRITE_BUFFER */
/* Reuse tokens from ARB_draw_instanced (none) */
/* Reuse tokens from ARB_uniform_buffer_object */
/* reuse GL_UNIFORM_BUFFER */
/* reuse GL_UNIFORM_BUFFER_BINDING */
/* reuse GL_UNIFORM_BUFFER_START */
/* reuse GL_UNIFORM_BUFFER_SIZE */
/* reuse GL_MAX_VERTEX_UNIFORM_BLOCKS */
/* reuse GL_MAX_FRAGMENT_UNIFORM_BLOCKS */
/* reuse GL_MAX_COMBINED_UNIFORM_BLOCKS */
/* reuse GL_MAX_UNIFORM_BUFFER_BINDINGS */
/* reuse GL_MAX_UNIFORM_BLOCK_SIZE */
/* reuse GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS */
/* reuse GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS */
/* reuse GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT */
/* reuse GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH */
/* reuse GL_ACTIVE_UNIFORM_BLOCKS */
/* reuse GL_UNIFORM_TYPE */
/* reuse GL_UNIFORM_SIZE */
/* reuse GL_UNIFORM_NAME_LENGTH */
/* reuse GL_UNIFORM_BLOCK_INDEX */
/* reuse GL_UNIFORM_OFFSET */
/* reuse GL_UNIFORM_ARRAY_STRIDE */
/* reuse GL_UNIFORM_MATRIX_STRIDE */
/* reuse GL_UNIFORM_IS_ROW_MAJOR */
/* reuse GL_UNIFORM_BLOCK_BINDING */
/* reuse GL_UNIFORM_BLOCK_DATA_SIZE */
/* reuse GL_UNIFORM_BLOCK_NAME_LENGTH */
/* reuse GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS */
/* reuse GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES */
/* reuse GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER */
/* reuse GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER */
/* reuse GL_INVALID_INDEX */

// OpenGL_3_2
#define GL_CONTEXT_CORE_PROFILE_BIT       0x00000001
#define GL_CONTEXT_COMPATIBILITY_PROFILE_BIT 0x00000002
#define GL_LINES_ADJACENCY                0x000A
#define GL_LINE_STRIP_ADJACENCY           0x000B
#define GL_TRIANGLES_ADJACENCY            0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY       0x000D
#define GL_PROGRAM_POINT_SIZE             0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS 0x8DA8
#define GL_GEOMETRY_SHADER                0x8DD9
#define GL_GEOMETRY_VERTICES_OUT          0x8916
#define GL_GEOMETRY_INPUT_TYPE            0x8917
#define GL_GEOMETRY_OUTPUT_TYPE           0x8918
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES   0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS 0x8DE1
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS   0x9122
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS  0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS 0x9124
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS  0x9125
#define GL_CONTEXT_PROFILE_MASK           0x9126
/* reuse GL_MAX_VARYING_COMPONENTS */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER */
/* Reuse tokens from ARB_depth_clamp */
/* reuse GL_DEPTH_CLAMP */
/* Reuse tokens from ARB_draw_elements_base_vertex (none) */
/* Reuse tokens from ARB_fragment_coord_conventions (none) */
/* Reuse tokens from ARB_provoking_vertex */
/* reuse GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION */
/* reuse GL_FIRST_VERTEX_CONVENTION */
/* reuse GL_LAST_VERTEX_CONVENTION */
/* reuse GL_PROVOKING_VERTEX */
/* Reuse tokens from ARB_seamless_cube_map */
/* reuse GL_TEXTURE_CUBE_MAP_SEAMLESS */
/* Reuse tokens from ARB_sync */
/* reuse GL_MAX_SERVER_WAIT_TIMEOUT */
/* reuse GL_OBJECT_TYPE */
/* reuse GL_SYNC_CONDITION */
/* reuse GL_SYNC_STATUS */
/* reuse GL_SYNC_FLAGS */
/* reuse GL_SYNC_FENCE */
/* reuse GL_SYNC_GPU_COMMANDS_COMPLETE */
/* reuse GL_UNSIGNALED */
/* reuse GL_SIGNALED */
/* reuse GL_ALREADY_SIGNALED */
/* reuse GL_TIMEOUT_EXPIRED */
/* reuse GL_CONDITION_SATISFIED */
/* reuse GL_WAIT_FAILED */
/* reuse GL_TIMEOUT_IGNORED */
/* reuse GL_SYNC_FLUSH_COMMANDS_BIT */
/* reuse GL_TIMEOUT_IGNORED */
/* Reuse tokens from ARB_texture_multisample */
/* reuse GL_SAMPLE_POSITION */
/* reuse GL_SAMPLE_MASK */
/* reuse GL_SAMPLE_MASK_VALUE */
/* reuse GL_MAX_SAMPLE_MASK_WORDS */
/* reuse GL_TEXTURE_2D_MULTISAMPLE */
/* reuse GL_PROXY_TEXTURE_2D_MULTISAMPLE */
/* reuse GL_TEXTURE_2D_MULTISAMPLE_ARRAY */
/* reuse GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY */
/* reuse GL_TEXTURE_BINDING_2D_MULTISAMPLE */
/* reuse GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY */
/* reuse GL_TEXTURE_SAMPLES */
/* reuse GL_TEXTURE_FIXED_SAMPLE_LOCATIONS */
/* reuse GL_SAMPLER_2D_MULTISAMPLE */
/* reuse GL_INT_SAMPLER_2D_MULTISAMPLE */
/* reuse GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE */
/* reuse GL_SAMPLER_2D_MULTISAMPLE_ARRAY */
/* reuse GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY */
/* reuse GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY */
/* reuse GL_MAX_COLOR_TEXTURE_SAMPLES */
/* reuse GL_MAX_DEPTH_TEXTURE_SAMPLES */
/* reuse GL_MAX_INTEGER_SAMPLES */
/* Don't need to reuse tokens from ARB_vertex_array_bgra since they're already in 1.2 core */

// OpenGL_3_3
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR    0x88FE
/* Reuse tokens from ARB_blend_func_extended */
/* reuse GL_SRC1_COLOR */
/* reuse GL_ONE_MINUS_SRC1_COLOR */
/* reuse GL_ONE_MINUS_SRC1_ALPHA */
/* reuse GL_MAX_DUAL_SOURCE_DRAW_BUFFERS */
/* Reuse tokens from ARB_explicit_attrib_location (none) */
/* Reuse tokens from ARB_occlusion_query2 */
/* reuse GL_ANY_SAMPLES_PASSED */
/* Reuse tokens from ARB_sampler_objects */
/* reuse GL_SAMPLER_BINDING */
/* Reuse tokens from ARB_shader_bit_encoding (none) */
/* Reuse tokens from ARB_texture_rgb10_a2ui */
/* reuse GL_RGB10_A2UI */
/* Reuse tokens from ARB_texture_swizzle */
/* reuse GL_TEXTURE_SWIZZLE_R */
/* reuse GL_TEXTURE_SWIZZLE_G */
/* reuse GL_TEXTURE_SWIZZLE_B */
/* reuse GL_TEXTURE_SWIZZLE_A */
/* reuse GL_TEXTURE_SWIZZLE_RGBA */
/* Reuse tokens from ARB_timer_query */
/* reuse GL_TIME_ELAPSED */
/* reuse GL_TIMESTAMP */
/* Reuse tokens from ARB_vertex_type_2_10_10_10_rev */
/* reuse GL_INT_2_10_10_10_REV */

// OpenGL_4_0
#define GL_SAMPLE_SHADING                 0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE       0x8C37
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5F
#define GL_TEXTURE_CUBE_MAP_ARRAY         0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY 0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY   0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY         0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW  0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY     0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY 0x900F
/* Reuse tokens from ARB_texture_query_lod (none) */
/* Reuse tokens from ARB_draw_buffers_blend (none) */
/* Reuse tokens from ARB_draw_indirect */
/* reuse GL_DRAW_INDIRECT_BUFFER */
/* reuse GL_DRAW_INDIRECT_BUFFER_BINDING */
/* Reuse tokens from ARB_gpu_shader5 */
/* reuse GL_GEOMETRY_SHADER_INVOCATIONS */
/* reuse GL_MAX_GEOMETRY_SHADER_INVOCATIONS */
/* reuse GL_MIN_FRAGMENT_INTERPOLATION_OFFSET */
/* reuse GL_MAX_FRAGMENT_INTERPOLATION_OFFSET */
/* reuse GL_FRAGMENT_INTERPOLATION_OFFSET_BITS */
/* reuse GL_MAX_VERTEX_STREAMS */
/* Reuse tokens from ARB_gpu_shader_fp64 */
/* reuse GL_DOUBLE_VEC2 */
/* reuse GL_DOUBLE_VEC3 */
/* reuse GL_DOUBLE_VEC4 */
/* reuse GL_DOUBLE_MAT2 */
/* reuse GL_DOUBLE_MAT3 */
/* reuse GL_DOUBLE_MAT4 */
/* reuse GL_DOUBLE_MAT2x3 */
/* reuse GL_DOUBLE_MAT2x4 */
/* reuse GL_DOUBLE_MAT3x2 */
/* reuse GL_DOUBLE_MAT3x4 */
/* reuse GL_DOUBLE_MAT4x2 */
/* reuse GL_DOUBLE_MAT4x3 */
/* Reuse tokens from ARB_shader_subroutine */
/* reuse GL_ACTIVE_SUBROUTINES */
/* reuse GL_ACTIVE_SUBROUTINE_UNIFORMS */
/* reuse GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS */
/* reuse GL_ACTIVE_SUBROUTINE_MAX_LENGTH */
/* reuse GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH */
/* reuse GL_MAX_SUBROUTINES */
/* reuse GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS */
/* reuse GL_NUM_COMPATIBLE_SUBROUTINES */
/* reuse GL_COMPATIBLE_SUBROUTINES */
/* Reuse tokens from ARB_tessellation_shader */
/* reuse GL_PATCHES */
/* reuse GL_PATCH_VERTICES */
/* reuse GL_PATCH_DEFAULT_INNER_LEVEL */
/* reuse GL_PATCH_DEFAULT_OUTER_LEVEL */
/* reuse GL_TESS_CONTROL_OUTPUT_VERTICES */
/* reuse GL_TESS_GEN_MODE */
/* reuse GL_TESS_GEN_SPACING */
/* reuse GL_TESS_GEN_VERTEX_ORDER */
/* reuse GL_TESS_GEN_POINT_MODE */
/* reuse GL_ISOLINES */
/* reuse GL_FRACTIONAL_ODD */
/* reuse GL_FRACTIONAL_EVEN */
/* reuse GL_MAX_PATCH_VERTICES */
/* reuse GL_MAX_TESS_GEN_LEVEL */
/* reuse GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS */
/* reuse GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS */
/* reuse GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS */
/* reuse GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS */
/* reuse GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS */
/* reuse GL_MAX_TESS_PATCH_COMPONENTS */
/* reuse GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS */
/* reuse GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS */
/* reuse GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS */
/* reuse GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS */
/* reuse GL_MAX_TESS_CONTROL_INPUT_COMPONENTS */
/* reuse GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS */
/* reuse GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS */
/* reuse GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS */
/* reuse GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER */
/* reuse GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER */
/* reuse GL_TESS_EVALUATION_SHADER */
/* reuse GL_TESS_CONTROL_SHADER */
/* Reuse tokens from ARB_texture_buffer_object_rgb32 (none) */
/* Reuse tokens from ARB_transform_feedback2 */
/* reuse GL_TRANSFORM_FEEDBACK */
/* reuse GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED */
/* reuse GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE */
/* reuse GL_TRANSFORM_FEEDBACK_BINDING */
/* Reuse tokens from ARB_transform_feedback3 */
/* reuse GL_MAX_TRANSFORM_FEEDBACK_BUFFERS */
/* reuse GL_MAX_VERTEX_STREAMS */

// OpenGL_4_1
/* Reuse tokens from ARB_ES2_compatibility */
/* reuse GL_FIXED */
/* reuse GL_IMPLEMENTATION_COLOR_READ_TYPE */
/* reuse GL_IMPLEMENTATION_COLOR_READ_FORMAT */
/* reuse GL_LOW_FLOAT */
/* reuse GL_MEDIUM_FLOAT */
/* reuse GL_HIGH_FLOAT */
/* reuse GL_LOW_INT */
/* reuse GL_MEDIUM_INT */
/* reuse GL_HIGH_INT */
/* reuse GL_SHADER_COMPILER */
/* reuse GL_NUM_SHADER_BINARY_FORMATS */
/* reuse GL_MAX_VERTEX_UNIFORM_VECTORS */
/* reuse GL_MAX_VARYING_VECTORS */
/* reuse GL_MAX_FRAGMENT_UNIFORM_VECTORS */
/* Reuse tokens from ARB_get_program_binary */
/* reuse GL_PROGRAM_BINARY_RETRIEVABLE_HINT */
/* reuse GL_PROGRAM_BINARY_LENGTH */
/* reuse GL_NUM_PROGRAM_BINARY_FORMATS */
/* reuse GL_PROGRAM_BINARY_FORMATS */
/* Reuse tokens from ARB_separate_shader_objects */
/* reuse GL_VERTEX_SHADER_BIT */
/* reuse GL_FRAGMENT_SHADER_BIT */
/* reuse GL_GEOMETRY_SHADER_BIT */
/* reuse GL_TESS_CONTROL_SHADER_BIT */
/* reuse GL_TESS_EVALUATION_SHADER_BIT */
/* reuse GL_ALL_SHADER_BITS */
/* reuse GL_PROGRAM_SEPARABLE */
/* reuse GL_ACTIVE_PROGRAM */
/* reuse GL_PROGRAM_PIPELINE_BINDING */
/* Reuse tokens from ARB_shader_precision (none) */
/* Reuse tokens from ARB_vertex_attrib_64bit - all are in GL 3.0 and 4.0 already */
/* Reuse tokens from ARB_viewport_array - some are in GL 1.1 and ARB_provoking_vertex already */
/* reuse GL_MAX_VIEWPORTS */
/* reuse GL_VIEWPORT_SUBPIXEL_BITS */
/* reuse GL_VIEWPORT_BOUNDS_RANGE */
/* reuse GL_LAYER_PROVOKING_VERTEX */
/* reuse GL_VIEWPORT_INDEX_PROVOKING_VERTEX */
/* reuse GL_UNDEFINED_VERTEX */

// GL_ARB_multitexture
#define GL_TEXTURE0_ARB                   0x84C0
#define GL_TEXTURE1_ARB                   0x84C1
#define GL_TEXTURE2_ARB                   0x84C2
#define GL_TEXTURE3_ARB                   0x84C3
#define GL_TEXTURE4_ARB                   0x84C4
#define GL_TEXTURE5_ARB                   0x84C5
#define GL_TEXTURE6_ARB                   0x84C6
#define GL_TEXTURE7_ARB                   0x84C7
#define GL_TEXTURE8_ARB                   0x84C8
#define GL_TEXTURE9_ARB                   0x84C9
#define GL_TEXTURE10_ARB                  0x84CA
#define GL_TEXTURE11_ARB                  0x84CB
#define GL_TEXTURE12_ARB                  0x84CC
#define GL_TEXTURE13_ARB                  0x84CD
#define GL_TEXTURE14_ARB                  0x84CE
#define GL_TEXTURE15_ARB                  0x84CF
#define GL_TEXTURE16_ARB                  0x84D0
#define GL_TEXTURE17_ARB                  0x84D1
#define GL_TEXTURE18_ARB                  0x84D2
#define GL_TEXTURE19_ARB                  0x84D3
#define GL_TEXTURE20_ARB                  0x84D4
#define GL_TEXTURE21_ARB                  0x84D5
#define GL_TEXTURE22_ARB                  0x84D6
#define GL_TEXTURE23_ARB                  0x84D7
#define GL_TEXTURE24_ARB                  0x84D8
#define GL_TEXTURE25_ARB                  0x84D9
#define GL_TEXTURE26_ARB                  0x84DA
#define GL_TEXTURE27_ARB                  0x84DB
#define GL_TEXTURE28_ARB                  0x84DC
#define GL_TEXTURE29_ARB                  0x84DD
#define GL_TEXTURE30_ARB                  0x84DE
#define GL_TEXTURE31_ARB                  0x84DF
#define GL_ACTIVE_TEXTURE_ARB             0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE_ARB      0x84E1
#define GL_MAX_TEXTURE_UNITS_ARB          0x84E2

// GL_ARB_transpose_matrix
#define GL_TRANSPOSE_MODELVIEW_MATRIX_ARB 0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX_ARB 0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX_ARB   0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX_ARB     0x84E6

// GL_ARB_multisample
#define GL_MULTISAMPLE_ARB                0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE_ARB   0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_ARB        0x809F
#define GL_SAMPLE_COVERAGE_ARB            0x80A0
#define GL_SAMPLE_BUFFERS_ARB             0x80A8
#define GL_SAMPLES_ARB                    0x80A9
#define GL_SAMPLE_COVERAGE_VALUE_ARB      0x80AA
#define GL_SAMPLE_COVERAGE_INVERT_ARB     0x80AB
#define GL_MULTISAMPLE_BIT_ARB            0x20000000

// GL_ARB_texture_env_add

// GL_ARB_texture_cube_map
#define GL_NORMAL_MAP_ARB                 0x8511
#define GL_REFLECTION_MAP_ARB             0x8512
#define GL_TEXTURE_CUBE_MAP_ARB           0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_ARB   0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB 0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARB     0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB  0x851C

// GL_ARB_texture_compression
#define GL_COMPRESSED_ALPHA_ARB           0x84E9
#define GL_COMPRESSED_LUMINANCE_ARB       0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA_ARB 0x84EB
#define GL_COMPRESSED_INTENSITY_ARB       0x84EC
#define GL_COMPRESSED_RGB_ARB             0x84ED
#define GL_COMPRESSED_RGBA_ARB            0x84EE
#define GL_TEXTURE_COMPRESSION_HINT_ARB   0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB 0x86A0
#define GL_TEXTURE_COMPRESSED_ARB         0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A3

// GL_ARB_texture_border_clamp
#define GL_CLAMP_TO_BORDER_ARB            0x812D

// GL_ARB_point_parameters
#define GL_POINT_SIZE_MIN_ARB             0x8126
#define GL_POINT_SIZE_MAX_ARB             0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_ARB  0x8128
#define GL_POINT_DISTANCE_ATTENUATION_ARB 0x8129

// GL_ARB_vertex_blend
#define GL_MAX_VERTEX_UNITS_ARB           0x86A4
#define GL_ACTIVE_VERTEX_UNITS_ARB        0x86A5
#define GL_WEIGHT_SUM_UNITY_ARB           0x86A6
#define GL_VERTEX_BLEND_ARB               0x86A7
#define GL_CURRENT_WEIGHT_ARB             0x86A8
#define GL_WEIGHT_ARRAY_TYPE_ARB          0x86A9
#define GL_WEIGHT_ARRAY_STRIDE_ARB        0x86AA
#define GL_WEIGHT_ARRAY_SIZE_ARB          0x86AB
#define GL_WEIGHT_ARRAY_POINTER_ARB       0x86AC
#define GL_WEIGHT_ARRAY_ARB               0x86AD
#define GL_MODELVIEW0_ARB                 0x1700
#define GL_MODELVIEW1_ARB                 0x850A
#define GL_MODELVIEW2_ARB                 0x8722
#define GL_MODELVIEW3_ARB                 0x8723
#define GL_MODELVIEW4_ARB                 0x8724
#define GL_MODELVIEW5_ARB                 0x8725
#define GL_MODELVIEW6_ARB                 0x8726
#define GL_MODELVIEW7_ARB                 0x8727
#define GL_MODELVIEW8_ARB                 0x8728
#define GL_MODELVIEW9_ARB                 0x8729
#define GL_MODELVIEW10_ARB                0x872A
#define GL_MODELVIEW11_ARB                0x872B
#define GL_MODELVIEW12_ARB                0x872C
#define GL_MODELVIEW13_ARB                0x872D
#define GL_MODELVIEW14_ARB                0x872E
#define GL_MODELVIEW15_ARB                0x872F
#define GL_MODELVIEW16_ARB                0x8730
#define GL_MODELVIEW17_ARB                0x8731
#define GL_MODELVIEW18_ARB                0x8732
#define GL_MODELVIEW19_ARB                0x8733
#define GL_MODELVIEW20_ARB                0x8734
#define GL_MODELVIEW21_ARB                0x8735
#define GL_MODELVIEW22_ARB                0x8736
#define GL_MODELVIEW23_ARB                0x8737
#define GL_MODELVIEW24_ARB                0x8738
#define GL_MODELVIEW25_ARB                0x8739
#define GL_MODELVIEW26_ARB                0x873A
#define GL_MODELVIEW27_ARB                0x873B
#define GL_MODELVIEW28_ARB                0x873C
#define GL_MODELVIEW29_ARB                0x873D
#define GL_MODELVIEW30_ARB                0x873E
#define GL_MODELVIEW31_ARB                0x873F

// GL_ARB_matrix_palette
#define GL_MATRIX_PALETTE_ARB             0x8840
#define GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB 0x8841
#define GL_MAX_PALETTE_MATRICES_ARB       0x8842
#define GL_CURRENT_PALETTE_MATRIX_ARB     0x8843
#define GL_MATRIX_INDEX_ARRAY_ARB         0x8844
#define GL_CURRENT_MATRIX_INDEX_ARB       0x8845
#define GL_MATRIX_INDEX_ARRAY_SIZE_ARB    0x8846
#define GL_MATRIX_INDEX_ARRAY_TYPE_ARB    0x8847
#define GL_MATRIX_INDEX_ARRAY_STRIDE_ARB  0x8848
#define GL_MATRIX_INDEX_ARRAY_POINTER_ARB 0x8849

// GL_ARB_texture_env_combine
#define GL_COMBINE_ARB                    0x8570
#define GL_COMBINE_RGB_ARB                0x8571
#define GL_COMBINE_ALPHA_ARB              0x8572
#define GL_SOURCE0_RGB_ARB                0x8580
#define GL_SOURCE1_RGB_ARB                0x8581
#define GL_SOURCE2_RGB_ARB                0x8582
#define GL_SOURCE0_ALPHA_ARB              0x8588
#define GL_SOURCE1_ALPHA_ARB              0x8589
#define GL_SOURCE2_ALPHA_ARB              0x858A
#define GL_OPERAND0_RGB_ARB               0x8590
#define GL_OPERAND1_RGB_ARB               0x8591
#define GL_OPERAND2_RGB_ARB               0x8592
#define GL_OPERAND0_ALPHA_ARB             0x8598
#define GL_OPERAND1_ALPHA_ARB             0x8599
#define GL_OPERAND2_ALPHA_ARB             0x859A
#define GL_RGB_SCALE_ARB                  0x8573
#define GL_ADD_SIGNED_ARB                 0x8574
#define GL_INTERPOLATE_ARB                0x8575
#define GL_SUBTRACT_ARB                   0x84E7
#define GL_CONSTANT_ARB                   0x8576
#define GL_PRIMARY_COLOR_ARB              0x8577
#define GL_PREVIOUS_ARB                   0x8578

// GL_ARB_texture_env_crossbar

// GL_ARB_texture_env_dot3
#define GL_DOT3_RGB_ARB                   0x86AE
#define GL_DOT3_RGBA_ARB                  0x86AF

// GL_ARB_texture_mirrored_repeat
#define GL_MIRRORED_REPEAT_ARB            0x8370

// GL_ARB_depth_texture
#define GL_DEPTH_COMPONENT16_ARB          0x81A5
#define GL_DEPTH_COMPONENT24_ARB          0x81A6
#define GL_DEPTH_COMPONENT32_ARB          0x81A7
#define GL_TEXTURE_DEPTH_SIZE_ARB         0x884A
#define GL_DEPTH_TEXTURE_MODE_ARB         0x884B

// GL_ARB_shadow
#define GL_TEXTURE_COMPARE_MODE_ARB       0x884C
#define GL_TEXTURE_COMPARE_FUNC_ARB       0x884D
#define GL_COMPARE_R_TO_TEXTURE_ARB       0x884E

// GL_ARB_shadow_ambient
#define GL_TEXTURE_COMPARE_FAIL_VALUE_ARB 0x80BF

// GL_ARB_window_pos

// GL_ARB_vertex_program
#define GL_COLOR_SUM_ARB                  0x8458
#define GL_VERTEX_PROGRAM_ARB             0x8620
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB 0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB   0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB 0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB   0x8625
#define GL_CURRENT_VERTEX_ATTRIB_ARB      0x8626
#define GL_PROGRAM_LENGTH_ARB             0x8627
#define GL_PROGRAM_STRING_ARB             0x8628
#define GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB 0x862E
#define GL_MAX_PROGRAM_MATRICES_ARB       0x862F
#define GL_CURRENT_MATRIX_STACK_DEPTH_ARB 0x8640
#define GL_CURRENT_MATRIX_ARB             0x8641
#define GL_VERTEX_PROGRAM_POINT_SIZE_ARB  0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_ARB    0x8643
#define GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB 0x8645
#define GL_PROGRAM_ERROR_POSITION_ARB     0x864B
#define GL_PROGRAM_BINDING_ARB            0x8677
#define GL_MAX_VERTEX_ATTRIBS_ARB         0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB 0x886A
#define GL_PROGRAM_ERROR_STRING_ARB       0x8874
#define GL_PROGRAM_FORMAT_ASCII_ARB       0x8875
#define GL_PROGRAM_FORMAT_ARB             0x8876
#define GL_PROGRAM_INSTRUCTIONS_ARB       0x88A0
#define GL_MAX_PROGRAM_INSTRUCTIONS_ARB   0x88A1
#define GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB 0x88A2
#define GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB 0x88A3
#define GL_PROGRAM_TEMPORARIES_ARB        0x88A4
#define GL_MAX_PROGRAM_TEMPORARIES_ARB    0x88A5
#define GL_PROGRAM_NATIVE_TEMPORARIES_ARB 0x88A6
#define GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB 0x88A7
#define GL_PROGRAM_PARAMETERS_ARB         0x88A8
#define GL_MAX_PROGRAM_PARAMETERS_ARB     0x88A9
#define GL_PROGRAM_NATIVE_PARAMETERS_ARB  0x88AA
#define GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB 0x88AB
#define GL_PROGRAM_ATTRIBS_ARB            0x88AC
#define GL_MAX_PROGRAM_ATTRIBS_ARB        0x88AD
#define GL_PROGRAM_NATIVE_ATTRIBS_ARB     0x88AE
#define GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB 0x88AF
#define GL_PROGRAM_ADDRESS_REGISTERS_ARB  0x88B0
#define GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB 0x88B1
#define GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB 0x88B2
#define GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB 0x88B3
#define GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB 0x88B4
#define GL_MAX_PROGRAM_ENV_PARAMETERS_ARB 0x88B5
#define GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB 0x88B6
#define GL_TRANSPOSE_CURRENT_MATRIX_ARB   0x88B7
#define GL_MATRIX0_ARB                    0x88C0
#define GL_MATRIX1_ARB                    0x88C1
#define GL_MATRIX2_ARB                    0x88C2
#define GL_MATRIX3_ARB                    0x88C3
#define GL_MATRIX4_ARB                    0x88C4
#define GL_MATRIX5_ARB                    0x88C5
#define GL_MATRIX6_ARB                    0x88C6
#define GL_MATRIX7_ARB                    0x88C7
#define GL_MATRIX8_ARB                    0x88C8
#define GL_MATRIX9_ARB                    0x88C9
#define GL_MATRIX10_ARB                   0x88CA
#define GL_MATRIX11_ARB                   0x88CB
#define GL_MATRIX12_ARB                   0x88CC
#define GL_MATRIX13_ARB                   0x88CD
#define GL_MATRIX14_ARB                   0x88CE
#define GL_MATRIX15_ARB                   0x88CF
#define GL_MATRIX16_ARB                   0x88D0
#define GL_MATRIX17_ARB                   0x88D1
#define GL_MATRIX18_ARB                   0x88D2
#define GL_MATRIX19_ARB                   0x88D3
#define GL_MATRIX20_ARB                   0x88D4
#define GL_MATRIX21_ARB                   0x88D5
#define GL_MATRIX22_ARB                   0x88D6
#define GL_MATRIX23_ARB                   0x88D7
#define GL_MATRIX24_ARB                   0x88D8
#define GL_MATRIX25_ARB                   0x88D9
#define GL_MATRIX26_ARB                   0x88DA
#define GL_MATRIX27_ARB                   0x88DB
#define GL_MATRIX28_ARB                   0x88DC
#define GL_MATRIX29_ARB                   0x88DD
#define GL_MATRIX30_ARB                   0x88DE
#define GL_MATRIX31_ARB                   0x88DF

// GL_ARB_fragment_program
#define GL_FRAGMENT_PROGRAM_ARB           0x8804
#define GL_PROGRAM_ALU_INSTRUCTIONS_ARB   0x8805
#define GL_PROGRAM_TEX_INSTRUCTIONS_ARB   0x8806
#define GL_PROGRAM_TEX_INDIRECTIONS_ARB   0x8807
#define GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB 0x8808
#define GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB 0x8809
#define GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB 0x880A
#define GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB 0x880B
#define GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB 0x880C
#define GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB 0x880D
#define GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB 0x880E
#define GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB 0x880F
#define GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB 0x8810
#define GL_MAX_TEXTURE_COORDS_ARB         0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_ARB    0x8872

// GL_ARB_vertex_buffer_object
#define GL_BUFFER_SIZE_ARB                0x8764
#define GL_BUFFER_USAGE_ARB               0x8765
#define GL_ARRAY_BUFFER_ARB               0x8892
#define GL_ELEMENT_ARRAY_BUFFER_ARB       0x8893
#define GL_ARRAY_BUFFER_BINDING_ARB       0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB 0x8895
#define GL_VERTEX_ARRAY_BUFFER_BINDING_ARB 0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING_ARB 0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING_ARB 0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING_ARB 0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB 0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB 0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB 0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB 0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB 0x889E
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB 0x889F
#define GL_READ_ONLY_ARB                  0x88B8
#define GL_WRITE_ONLY_ARB                 0x88B9
#define GL_READ_WRITE_ARB                 0x88BA
#define GL_BUFFER_ACCESS_ARB              0x88BB
#define GL_BUFFER_MAPPED_ARB              0x88BC
#define GL_BUFFER_MAP_POINTER_ARB         0x88BD
#define GL_STREAM_DRAW_ARB                0x88E0
#define GL_STREAM_READ_ARB                0x88E1
#define GL_STREAM_COPY_ARB                0x88E2
#define GL_STATIC_DRAW_ARB                0x88E4
#define GL_STATIC_READ_ARB                0x88E5
#define GL_STATIC_COPY_ARB                0x88E6
#define GL_DYNAMIC_DRAW_ARB               0x88E8
#define GL_DYNAMIC_READ_ARB               0x88E9
#define GL_DYNAMIC_COPY_ARB               0x88EA
/* GL types for handling large vertex buffer objects */
typedef ptrdiff_t GLintptrARB;
typedef ptrdiff_t GLsizeiptrARB;

// GL_ARB_occlusion_query
#define GL_QUERY_COUNTER_BITS_ARB         0x8864
#define GL_CURRENT_QUERY_ARB              0x8865
#define GL_QUERY_RESULT_ARB               0x8866
#define GL_QUERY_RESULT_AVAILABLE_ARB     0x8867
#define GL_SAMPLES_PASSED_ARB             0x8914

// GL_ARB_shader_objects
#define GL_PROGRAM_OBJECT_ARB             0x8B40
#define GL_SHADER_OBJECT_ARB              0x8B48
#define GL_OBJECT_TYPE_ARB                0x8B4E
#define GL_OBJECT_SUBTYPE_ARB             0x8B4F
#define GL_FLOAT_VEC2_ARB                 0x8B50
#define GL_FLOAT_VEC3_ARB                 0x8B51
#define GL_FLOAT_VEC4_ARB                 0x8B52
#define GL_INT_VEC2_ARB                   0x8B53
#define GL_INT_VEC3_ARB                   0x8B54
#define GL_INT_VEC4_ARB                   0x8B55
#define GL_BOOL_ARB                       0x8B56
#define GL_BOOL_VEC2_ARB                  0x8B57
#define GL_BOOL_VEC3_ARB                  0x8B58
#define GL_BOOL_VEC4_ARB                  0x8B59
#define GL_FLOAT_MAT2_ARB                 0x8B5A
#define GL_FLOAT_MAT3_ARB                 0x8B5B
#define GL_FLOAT_MAT4_ARB                 0x8B5C
#define GL_SAMPLER_1D_ARB                 0x8B5D
#define GL_SAMPLER_2D_ARB                 0x8B5E
#define GL_SAMPLER_3D_ARB                 0x8B5F
#define GL_SAMPLER_CUBE_ARB               0x8B60
#define GL_SAMPLER_1D_SHADOW_ARB          0x8B61
#define GL_SAMPLER_2D_SHADOW_ARB          0x8B62
#define GL_SAMPLER_2D_RECT_ARB            0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW_ARB     0x8B64
#define GL_OBJECT_DELETE_STATUS_ARB       0x8B80
#define GL_OBJECT_COMPILE_STATUS_ARB      0x8B81
#define GL_OBJECT_LINK_STATUS_ARB         0x8B82
#define GL_OBJECT_VALIDATE_STATUS_ARB     0x8B83
#define GL_OBJECT_INFO_LOG_LENGTH_ARB     0x8B84
#define GL_OBJECT_ATTACHED_OBJECTS_ARB    0x8B85
#define GL_OBJECT_ACTIVE_UNIFORMS_ARB     0x8B86
#define GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB 0x8B87
#define GL_OBJECT_SHADER_SOURCE_LENGTH_ARB 0x8B88
/* GL types for program/shader text and shader object handles */
typedef char GLcharARB;
typedef unsigned int GLhandleARB;

// GL_ARB_vertex_shader
#define GL_VERTEX_SHADER_ARB              0x8B31
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB 0x8B4A
#define GL_MAX_VARYING_FLOATS_ARB         0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB 0x8B4D
#define GL_OBJECT_ACTIVE_ATTRIBUTES_ARB   0x8B89
#define GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB 0x8B8A

// GL_ARB_fragment_shader
#define GL_FRAGMENT_SHADER_ARB            0x8B30
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB 0x8B49
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB 0x8B8B

// GL_ARB_shading_language_100
#define GL_SHADING_LANGUAGE_VERSION_ARB   0x8B8C

// GL_ARB_texture_non_power_of_two

// GL_ARB_point_sprite
#define GL_POINT_SPRITE_ARB               0x8861
#define GL_COORD_REPLACE_ARB              0x8862

// GL_ARB_fragment_program_shadow

// GL_ARB_draw_buffers
#define GL_MAX_DRAW_BUFFERS_ARB           0x8824
#define GL_DRAW_BUFFER0_ARB               0x8825
#define GL_DRAW_BUFFER1_ARB               0x8826
#define GL_DRAW_BUFFER2_ARB               0x8827
#define GL_DRAW_BUFFER3_ARB               0x8828
#define GL_DRAW_BUFFER4_ARB               0x8829
#define GL_DRAW_BUFFER5_ARB               0x882A
#define GL_DRAW_BUFFER6_ARB               0x882B
#define GL_DRAW_BUFFER7_ARB               0x882C
#define GL_DRAW_BUFFER8_ARB               0x882D
#define GL_DRAW_BUFFER9_ARB               0x882E
#define GL_DRAW_BUFFER10_ARB              0x882F
#define GL_DRAW_BUFFER11_ARB              0x8830
#define GL_DRAW_BUFFER12_ARB              0x8831
#define GL_DRAW_BUFFER13_ARB              0x8832
#define GL_DRAW_BUFFER14_ARB              0x8833
#define GL_DRAW_BUFFER15_ARB              0x8834

// GL_ARB_texture_rectangle
#define GL_TEXTURE_RECTANGLE_ARB          0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE_ARB  0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE_ARB    0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB 0x84F8

// GL_ARB_color_buffer_float
#define GL_RGBA_FLOAT_MODE_ARB            0x8820
#define GL_CLAMP_VERTEX_COLOR_ARB         0x891A
#define GL_CLAMP_FRAGMENT_COLOR_ARB       0x891B
#define GL_CLAMP_READ_COLOR_ARB           0x891C
#define GL_FIXED_ONLY_ARB                 0x891D

// GL_ARB_half_float_pixel
#define GL_HALF_FLOAT_ARB                 0x140B
typedef unsigned short GLhalfARB;

// GL_ARB_texture_float
#define GL_TEXTURE_RED_TYPE_ARB           0x8C10
#define GL_TEXTURE_GREEN_TYPE_ARB         0x8C11
#define GL_TEXTURE_BLUE_TYPE_ARB          0x8C12
#define GL_TEXTURE_ALPHA_TYPE_ARB         0x8C13
#define GL_TEXTURE_LUMINANCE_TYPE_ARB     0x8C14
#define GL_TEXTURE_INTENSITY_TYPE_ARB     0x8C15
#define GL_TEXTURE_DEPTH_TYPE_ARB         0x8C16
#define GL_UNSIGNED_NORMALIZED_ARB        0x8C17
#define GL_RGBA32F_ARB                    0x8814
#define GL_RGB32F_ARB                     0x8815
#define GL_ALPHA32F_ARB                   0x8816
#define GL_INTENSITY32F_ARB               0x8817
#define GL_LUMINANCE32F_ARB               0x8818
#define GL_LUMINANCE_ALPHA32F_ARB         0x8819
#define GL_RGBA16F_ARB                    0x881A
#define GL_RGB16F_ARB                     0x881B
#define GL_ALPHA16F_ARB                   0x881C
#define GL_INTENSITY16F_ARB               0x881D
#define GL_LUMINANCE16F_ARB               0x881E
#define GL_LUMINANCE_ALPHA16F_ARB         0x881F

// GL_ARB_pixel_buffer_object
#define GL_PIXEL_PACK_BUFFER_ARB          0x88EB
#define GL_PIXEL_UNPACK_BUFFER_ARB        0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_ARB  0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_ARB 0x88EF

// GL_ARB_depth_buffer_float
#define GL_DEPTH_COMPONENT32F             0x8CAC
#define GL_DEPTH32F_STENCIL8              0x8CAD
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD

// GL_ARB_draw_instanced

// GL_ARB_framebuffer_object
#define GL_INVALID_FRAMEBUFFER_OPERATION  0x0506
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
#define GL_FRAMEBUFFER_DEFAULT            0x8218
#define GL_FRAMEBUFFER_UNDEFINED          0x8219
#define GL_DEPTH_STENCIL_ATTACHMENT       0x821A
#define GL_MAX_RENDERBUFFER_SIZE          0x84E8
#define GL_DEPTH_STENCIL                  0x84F9
#define GL_UNSIGNED_INT_24_8              0x84FA
#define GL_DEPTH24_STENCIL8               0x88F0
#define GL_TEXTURE_STENCIL_SIZE           0x88F1
#define GL_TEXTURE_RED_TYPE               0x8C10
#define GL_TEXTURE_GREEN_TYPE             0x8C11
#define GL_TEXTURE_BLUE_TYPE              0x8C12
#define GL_TEXTURE_ALPHA_TYPE             0x8C13
#define GL_TEXTURE_DEPTH_TYPE             0x8C16
#define GL_UNSIGNED_NORMALIZED            0x8C17
#define GL_FRAMEBUFFER_BINDING            0x8CA6
#define GL_DRAW_FRAMEBUFFER_BINDING       GL_FRAMEBUFFER_BINDING
#define GL_RENDERBUFFER_BINDING           0x8CA7
#define GL_READ_FRAMEBUFFER               0x8CA8
#define GL_DRAW_FRAMEBUFFER               0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING       0x8CAA
#define GL_RENDERBUFFER_SAMPLES           0x8CAB
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#define GL_FRAMEBUFFER_COMPLETE           0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER 0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED        0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS          0x8CDF
#define GL_COLOR_ATTACHMENT0              0x8CE0
#define GL_COLOR_ATTACHMENT1              0x8CE1
#define GL_COLOR_ATTACHMENT2              0x8CE2
#define GL_COLOR_ATTACHMENT3              0x8CE3
#define GL_COLOR_ATTACHMENT4              0x8CE4
#define GL_COLOR_ATTACHMENT5              0x8CE5
#define GL_COLOR_ATTACHMENT6              0x8CE6
#define GL_COLOR_ATTACHMENT7              0x8CE7
#define GL_COLOR_ATTACHMENT8              0x8CE8
#define GL_COLOR_ATTACHMENT9              0x8CE9
#define GL_COLOR_ATTACHMENT10             0x8CEA
#define GL_COLOR_ATTACHMENT11             0x8CEB
#define GL_COLOR_ATTACHMENT12             0x8CEC
#define GL_COLOR_ATTACHMENT13             0x8CED
#define GL_COLOR_ATTACHMENT14             0x8CEE
#define GL_COLOR_ATTACHMENT15             0x8CEF
#define GL_DEPTH_ATTACHMENT               0x8D00
#define GL_STENCIL_ATTACHMENT             0x8D20
#define GL_FRAMEBUFFER                    0x8D40
#define GL_RENDERBUFFER                   0x8D41
#define GL_RENDERBUFFER_WIDTH             0x8D42
#define GL_RENDERBUFFER_HEIGHT            0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT   0x8D44
#define GL_STENCIL_INDEX1                 0x8D46
#define GL_STENCIL_INDEX4                 0x8D47
#define GL_STENCIL_INDEX8                 0x8D48
#define GL_STENCIL_INDEX16                0x8D49
#define GL_RENDERBUFFER_RED_SIZE          0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE        0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE         0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE        0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE        0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE      0x8D55
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
#define GL_MAX_SAMPLES                    0x8D57

// GL_ARB_framebuffer_sRGB
#define GL_FRAMEBUFFER_SRGB               0x8DB9

// GL_ARB_geometry_shader4
#define GL_LINES_ADJACENCY_ARB            0x000A
#define GL_LINE_STRIP_ADJACENCY_ARB       0x000B
#define GL_TRIANGLES_ADJACENCY_ARB        0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_ARB   0x000D
#define GL_PROGRAM_POINT_SIZE_ARB         0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_ARB 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_ARB 0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_ARB 0x8DA9
#define GL_GEOMETRY_SHADER_ARB            0x8DD9
#define GL_GEOMETRY_VERTICES_OUT_ARB      0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_ARB        0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_ARB       0x8DDC
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_ARB 0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_ARB 0x8DDE
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_ARB 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_ARB 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_ARB 0x8DE1
/* reuse GL_MAX_VARYING_COMPONENTS */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER */

// GL_ARB_half_float_vertex
#define GL_HALF_FLOAT                     0x140B

// GL_ARB_instanced_arrays
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ARB 0x88FE

// GL_ARB_map_buffer_range
#define GL_MAP_READ_BIT                   0x0001
#define GL_MAP_WRITE_BIT                  0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT       0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT      0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT         0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT         0x0020

// GL_ARB_texture_buffer_object
#define GL_TEXTURE_BUFFER_ARB             0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_ARB    0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_ARB     0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_ARB 0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT_ARB      0x8C2E

// GL_ARB_texture_compression_rgtc
#define GL_COMPRESSED_RED_RGTC1           0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1    0x8DBC
#define GL_COMPRESSED_RG_RGTC2            0x8DBD
#define GL_COMPRESSED_SIGNED_RG_RGTC2     0x8DBE

// GL_ARB_texture_rg
#define GL_RG                             0x8227
#define GL_RG_INTEGER                     0x8228
#define GL_R8                             0x8229
#define GL_R16                            0x822A
#define GL_RG8                            0x822B
#define GL_RG16                           0x822C
#define GL_R16F                           0x822D
#define GL_R32F                           0x822E
#define GL_RG16F                          0x822F
#define GL_RG32F                          0x8230
#define GL_R8I                            0x8231
#define GL_R8UI                           0x8232
#define GL_R16I                           0x8233
#define GL_R16UI                          0x8234
#define GL_R32I                           0x8235
#define GL_R32UI                          0x8236
#define GL_RG8I                           0x8237
#define GL_RG8UI                          0x8238
#define GL_RG16I                          0x8239
#define GL_RG16UI                         0x823A
#define GL_RG32I                          0x823B
#define GL_RG32UI                         0x823C

// GL_ARB_vertex_array_object
#define GL_VERTEX_ARRAY_BINDING           0x85B5

// GL_ARB_uniform_buffer_object
#define GL_UNIFORM_BUFFER                 0x8A11
#define GL_UNIFORM_BUFFER_BINDING         0x8A28
#define GL_UNIFORM_BUFFER_START           0x8A29
#define GL_UNIFORM_BUFFER_SIZE            0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS      0x8A2B
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS    0x8A2C
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS    0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS    0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS    0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE         0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS 0x8A32
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS          0x8A36
#define GL_UNIFORM_TYPE                   0x8A37
#define GL_UNIFORM_SIZE                   0x8A38
#define GL_UNIFORM_NAME_LENGTH            0x8A39
#define GL_UNIFORM_BLOCK_INDEX            0x8A3A
#define GL_UNIFORM_OFFSET                 0x8A3B
#define GL_UNIFORM_ARRAY_STRIDE           0x8A3C
#define GL_UNIFORM_MATRIX_STRIDE          0x8A3D
#define GL_UNIFORM_IS_ROW_MAJOR           0x8A3E
#define GL_UNIFORM_BLOCK_BINDING          0x8A3F
#define GL_UNIFORM_BLOCK_DATA_SIZE        0x8A40
#define GL_UNIFORM_BLOCK_NAME_LENGTH      0x8A41
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS  0x8A42
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
#define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER 0x8A45
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#define GL_INVALID_INDEX                  0xFFFFFFFFu

// GL_ARB_compatibility
/* ARB_compatibility just defines tokens from core 3.0 */

// GL_ARB_copy_buffer
#define GL_COPY_READ_BUFFER               0x8F36
#define GL_COPY_WRITE_BUFFER              0x8F37

// GL_ARB_shader_texture_lod

// GL_ARB_depth_clamp
#define GL_DEPTH_CLAMP                    0x864F

// GL_ARB_draw_elements_base_vertex

// GL_ARB_fragment_coord_conventions

// GL_ARB_provoking_vertex
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION 0x8E4C
#define GL_FIRST_VERTEX_CONVENTION        0x8E4D
#define GL_LAST_VERTEX_CONVENTION         0x8E4E
#define GL_PROVOKING_VERTEX               0x8E4F

// GL_ARB_seamless_cube_map
#define GL_TEXTURE_CUBE_MAP_SEAMLESS      0x884F

// GL_ARB_sync
#define GL_MAX_SERVER_WAIT_TIMEOUT        0x9111
#define GL_OBJECT_TYPE                    0x9112
#define GL_SYNC_CONDITION                 0x9113
#define GL_SYNC_STATUS                    0x9114
#define GL_SYNC_FLAGS                     0x9115
#define GL_SYNC_FENCE                     0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE     0x9117
#define GL_UNSIGNALED                     0x9118
#define GL_SIGNALED                       0x9119
#define GL_ALREADY_SIGNALED               0x911A
#define GL_TIMEOUT_EXPIRED                0x911B
#define GL_CONDITION_SATISFIED            0x911C
#define GL_WAIT_FAILED                    0x911D
#define GL_SYNC_FLUSH_COMMANDS_BIT        0x00000001
#define GL_TIMEOUT_IGNORED                0xFFFFFFFFFFFFFFFFull
typedef int64_t GLint64;
typedef uint64_t GLuint64;
typedef struct __GLsync *GLsync;

// GL_ARB_texture_multisample
#define GL_SAMPLE_POSITION                0x8E50
#define GL_SAMPLE_MASK                    0x8E51
#define GL_SAMPLE_MASK_VALUE              0x8E52
#define GL_MAX_SAMPLE_MASK_WORDS          0x8E59
#define GL_TEXTURE_2D_MULTISAMPLE         0x9100
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE   0x9101
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY   0x9102
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9103
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE 0x9104
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY 0x9105
#define GL_TEXTURE_SAMPLES                0x9106
#define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS 0x9107
#define GL_SAMPLER_2D_MULTISAMPLE         0x9108
#define GL_INT_SAMPLER_2D_MULTISAMPLE     0x9109
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY   0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D
#define GL_MAX_COLOR_TEXTURE_SAMPLES      0x910E
#define GL_MAX_DEPTH_TEXTURE_SAMPLES      0x910F
#define GL_MAX_INTEGER_SAMPLES            0x9110

// GL_ARB_vertex_array_bgra
/* reuse GL_BGRA */

// GL_ARB_draw_buffers_blend

// GL_ARB_sample_shading
#define GL_SAMPLE_SHADING_ARB             0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE_ARB   0x8C37

// GL_ARB_texture_cube_map_array
#define GL_TEXTURE_CUBE_MAP_ARRAY_ARB     0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB 0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB 0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY_ARB     0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900F

// GL_ARB_texture_gather
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5F

// GL_ARB_texture_query_lod

// GL_ARB_shading_language_include
#define GL_SHADER_INCLUDE_ARB             0x8DAE
#define GL_NAMED_STRING_LENGTH_ARB        0x8DE9
#define GL_NAMED_STRING_TYPE_ARB          0x8DEA

// GL_ARB_texture_compression_bptc
#define GL_COMPRESSED_RGBA_BPTC_UNORM_ARB 0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB 0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB 0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB 0x8E8F

// GL_ARB_blend_func_extended
#define GL_SRC1_COLOR                     0x88F9
/* reuse GL_SRC1_ALPHA */
#define GL_ONE_MINUS_SRC1_COLOR           0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA           0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS   0x88FC

// GL_ARB_explicit_attrib_location

// GL_ARB_occlusion_query2
#define GL_ANY_SAMPLES_PASSED             0x8C2F

// GL_ARB_sampler_objects
#define GL_SAMPLER_BINDING                0x8919

// GL_ARB_shader_bit_encoding

// GL_ARB_texture_rgb10_a2ui
#define GL_RGB10_A2UI                     0x906F

// GL_ARB_texture_swizzle
#define GL_TEXTURE_SWIZZLE_R              0x8E42
#define GL_TEXTURE_SWIZZLE_G              0x8E43
#define GL_TEXTURE_SWIZZLE_B              0x8E44
#define GL_TEXTURE_SWIZZLE_A              0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA           0x8E46

// GL_ARB_timer_query
#define GL_TIME_ELAPSED                   0x88BF
#define GL_TIMESTAMP                      0x8E28

// GL_ARB_vertex_type_2_10_10_10_rev
/* reuse GL_UNSIGNED_INT_2_10_10_10_REV */
#define GL_INT_2_10_10_10_REV             0x8D9F

// GL_ARB_draw_indirect
#define GL_DRAW_INDIRECT_BUFFER           0x8F3F
#define GL_DRAW_INDIRECT_BUFFER_BINDING   0x8F43

// GL_ARB_gpu_shader5
#define GL_GEOMETRY_SHADER_INVOCATIONS    0x887F
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS 0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET 0x8E5C
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS 0x8E5D
/* reuse GL_MAX_VERTEX_STREAMS */

// GL_ARB_gpu_shader_fp64
/* reuse GL_DOUBLE */
#define GL_DOUBLE_VEC2                    0x8FFC
#define GL_DOUBLE_VEC3                    0x8FFD
#define GL_DOUBLE_VEC4                    0x8FFE
#define GL_DOUBLE_MAT2                    0x8F46
#define GL_DOUBLE_MAT3                    0x8F47
#define GL_DOUBLE_MAT4                    0x8F48
#define GL_DOUBLE_MAT2x3                  0x8F49
#define GL_DOUBLE_MAT2x4                  0x8F4A
#define GL_DOUBLE_MAT3x2                  0x8F4B
#define GL_DOUBLE_MAT3x4                  0x8F4C
#define GL_DOUBLE_MAT4x2                  0x8F4D
#define GL_DOUBLE_MAT4x3                  0x8F4E

// GL_ARB_shader_subroutine
#define GL_ACTIVE_SUBROUTINES             0x8DE5
#define GL_ACTIVE_SUBROUTINE_UNIFORMS     0x8DE6
#define GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS 0x8E47
#define GL_ACTIVE_SUBROUTINE_MAX_LENGTH   0x8E48
#define GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH 0x8E49
#define GL_MAX_SUBROUTINES                0x8DE7
#define GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS 0x8DE8
#define GL_NUM_COMPATIBLE_SUBROUTINES     0x8E4A
#define GL_COMPATIBLE_SUBROUTINES         0x8E4B
/* reuse GL_UNIFORM_SIZE */
/* reuse GL_UNIFORM_NAME_LENGTH */

// GL_ARB_tessellation_shader
#define GL_PATCHES                        0x000E
#define GL_PATCH_VERTICES                 0x8E72
#define GL_PATCH_DEFAULT_INNER_LEVEL      0x8E73
#define GL_PATCH_DEFAULT_OUTER_LEVEL      0x8E74
#define GL_TESS_CONTROL_OUTPUT_VERTICES   0x8E75
#define GL_TESS_GEN_MODE                  0x8E76
#define GL_TESS_GEN_SPACING               0x8E77
#define GL_TESS_GEN_VERTEX_ORDER          0x8E78
#define GL_TESS_GEN_POINT_MODE            0x8E79
/* reuse GL_TRIANGLES */
/* reuse GL_QUADS */
#define GL_ISOLINES                       0x8E7A
/* reuse GL_EQUAL */
#define GL_FRACTIONAL_ODD                 0x8E7B
#define GL_FRACTIONAL_EVEN                0x8E7C
/* reuse GL_CCW */
/* reuse GL_CW */
#define GL_MAX_PATCH_VERTICES             0x8E7D
#define GL_MAX_TESS_GEN_LEVEL             0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS      0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E1F
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER 0x84F0
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER 0x84F1
#define GL_TESS_EVALUATION_SHADER         0x8E87
#define GL_TESS_CONTROL_SHADER            0x8E88

// GL_ARB_texture_buffer_object_rgb32
/* reuse GL_RGB32F */
/* reuse GL_RGB32UI */
/* reuse GL_RGB32I */

// GL_ARB_transform_feedback2
#define GL_TRANSFORM_FEEDBACK             0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED 0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING     0x8E25

// GL_ARB_transform_feedback3
#define GL_MAX_TRANSFORM_FEEDBACK_BUFFERS 0x8E70
#define GL_MAX_VERTEX_STREAMS             0x8E71

// GL_ARB_ES2_compatibility
#define GL_FIXED                          0x140C
#define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
#define GL_LOW_FLOAT                      0x8DF0
#define GL_MEDIUM_FLOAT                   0x8DF1
#define GL_HIGH_FLOAT                     0x8DF2
#define GL_LOW_INT                        0x8DF3
#define GL_MEDIUM_INT                     0x8DF4
#define GL_HIGH_INT                       0x8DF5
#define GL_SHADER_COMPILER                0x8DFA
#define GL_NUM_SHADER_BINARY_FORMATS      0x8DF9
#define GL_MAX_VERTEX_UNIFORM_VECTORS     0x8DFB
#define GL_MAX_VARYING_VECTORS            0x8DFC
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS   0x8DFD

// GL_ARB_get_program_binary
#define GL_PROGRAM_BINARY_RETRIEVABLE_HINT 0x8257
#define GL_PROGRAM_BINARY_LENGTH          0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS     0x87FE
#define GL_PROGRAM_BINARY_FORMATS         0x87FF

// GL_ARB_separate_shader_objects
#define GL_VERTEX_SHADER_BIT              0x00000001
#define GL_FRAGMENT_SHADER_BIT            0x00000002
#define GL_GEOMETRY_SHADER_BIT            0x00000004
#define GL_TESS_CONTROL_SHADER_BIT        0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT     0x00000010
#define GL_ALL_SHADER_BITS                0xFFFFFFFF
#define GL_PROGRAM_SEPARABLE              0x8258
#define GL_ACTIVE_PROGRAM                 0x8259
#define GL_PROGRAM_PIPELINE_BINDING       0x825A

// GL_ARB_shader_precision

// GL_ARB_vertex_attrib_64bit
/* reuse GL_RGB32I */
/* reuse GL_DOUBLE_VEC2 */
/* reuse GL_DOUBLE_VEC3 */
/* reuse GL_DOUBLE_VEC4 */
/* reuse GL_DOUBLE_MAT2 */
/* reuse GL_DOUBLE_MAT3 */
/* reuse GL_DOUBLE_MAT4 */
/* reuse GL_DOUBLE_MAT2x3 */
/* reuse GL_DOUBLE_MAT2x4 */
/* reuse GL_DOUBLE_MAT3x2 */
/* reuse GL_DOUBLE_MAT3x4 */
/* reuse GL_DOUBLE_MAT4x2 */
/* reuse GL_DOUBLE_MAT4x3 */

// GL_ARB_viewport_array
/* reuse GL_SCISSOR_BOX */
/* reuse GL_VIEWPORT */
/* reuse GL_DEPTH_RANGE */
/* reuse GL_SCISSOR_TEST */
#define GL_MAX_VIEWPORTS                  0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS         0x825C
#define GL_VIEWPORT_BOUNDS_RANGE          0x825D
#define GL_LAYER_PROVOKING_VERTEX         0x825E
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX 0x825F
#define GL_UNDEFINED_VERTEX               0x8260
/* reuse GL_FIRST_VERTEX_CONVENTION */
/* reuse GL_LAST_VERTEX_CONVENTION */
/* reuse GL_PROVOKING_VERTEX */

// GL_ARB_cl_event
#define GL_SYNC_CL_EVENT_ARB              0x8240
#define GL_SYNC_CL_EVENT_COMPLETE_ARB     0x8241
/* These incomplete types let us declare types compatible with OpenCL's cl_context and cl_event */
struct _cl_context;
struct _cl_event;

// GL_ARB_debug_output
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB   0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION_ARB    0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM_ARB  0x8245
#define GL_DEBUG_SOURCE_API_ARB           0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER_ARB 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY_ARB   0x8249
#define GL_DEBUG_SOURCE_APPLICATION_ARB   0x824A
#define GL_DEBUG_SOURCE_OTHER_ARB         0x824B
#define GL_DEBUG_TYPE_ERROR_ARB           0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB 0x824E
#define GL_DEBUG_TYPE_PORTABILITY_ARB     0x824F
#define GL_DEBUG_TYPE_PERFORMANCE_ARB     0x8250
#define GL_DEBUG_TYPE_OTHER_ARB           0x8251
#define GL_MAX_DEBUG_MESSAGE_LENGTH_ARB   0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_ARB  0x9144
#define GL_DEBUG_LOGGED_MESSAGES_ARB      0x9145
#define GL_DEBUG_SEVERITY_HIGH_ARB        0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_ARB      0x9147
#define GL_DEBUG_SEVERITY_LOW_ARB         0x9148
typedef void (APIENTRY *GLDEBUGPROCARB)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,GLvoid *userParam);

// GL_ARB_robustness
/* reuse GL_NO_ERROR */
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB 0x00000004
#define GL_LOSE_CONTEXT_ON_RESET_ARB      0x8252
#define GL_GUILTY_CONTEXT_RESET_ARB       0x8253
#define GL_INNOCENT_CONTEXT_RESET_ARB     0x8254
#define GL_UNKNOWN_CONTEXT_RESET_ARB      0x8255
#define GL_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define GL_NO_RESET_NOTIFICATION_ARB      0x8261

// GL_ARB_shader_stencil_export

// GL_EXT_abgr
#define GL_ABGR_EXT                       0x8000

// GL_EXT_blend_color
#define GL_CONSTANT_COLOR_EXT             0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR_EXT   0x8002
#define GL_CONSTANT_ALPHA_EXT             0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA_EXT   0x8004
#define GL_BLEND_COLOR_EXT                0x8005

// GL_EXT_polygon_offset
#define GL_POLYGON_OFFSET_EXT             0x8037
#define GL_POLYGON_OFFSET_FACTOR_EXT      0x8038
#define GL_POLYGON_OFFSET_BIAS_EXT        0x8039

// GL_EXT_texture
#define GL_ALPHA4_EXT                     0x803B
#define GL_ALPHA8_EXT                     0x803C
#define GL_ALPHA12_EXT                    0x803D
#define GL_ALPHA16_EXT                    0x803E
#define GL_LUMINANCE4_EXT                 0x803F
#define GL_LUMINANCE8_EXT                 0x8040
#define GL_LUMINANCE12_EXT                0x8041
#define GL_LUMINANCE16_EXT                0x8042
#define GL_LUMINANCE4_ALPHA4_EXT          0x8043
#define GL_LUMINANCE6_ALPHA2_EXT          0x8044
#define GL_LUMINANCE8_ALPHA8_EXT          0x8045
#define GL_LUMINANCE12_ALPHA4_EXT         0x8046
#define GL_LUMINANCE12_ALPHA12_EXT        0x8047
#define GL_LUMINANCE16_ALPHA16_EXT        0x8048
#define GL_INTENSITY_EXT                  0x8049
#define GL_INTENSITY4_EXT                 0x804A
#define GL_INTENSITY8_EXT                 0x804B
#define GL_INTENSITY12_EXT                0x804C
#define GL_INTENSITY16_EXT                0x804D
#define GL_RGB2_EXT                       0x804E
#define GL_RGB4_EXT                       0x804F
#define GL_RGB5_EXT                       0x8050
#define GL_RGB8_EXT                       0x8051
#define GL_RGB10_EXT                      0x8052
#define GL_RGB12_EXT                      0x8053
#define GL_RGB16_EXT                      0x8054
#define GL_RGBA2_EXT                      0x8055
#define GL_RGBA4_EXT                      0x8056
#define GL_RGB5_A1_EXT                    0x8057
#define GL_RGBA8_EXT                      0x8058
#define GL_RGB10_A2_EXT                   0x8059
#define GL_RGBA12_EXT                     0x805A
#define GL_RGBA16_EXT                     0x805B
#define GL_TEXTURE_RED_SIZE_EXT           0x805C
#define GL_TEXTURE_GREEN_SIZE_EXT         0x805D
#define GL_TEXTURE_BLUE_SIZE_EXT          0x805E
#define GL_TEXTURE_ALPHA_SIZE_EXT         0x805F
#define GL_TEXTURE_LUMINANCE_SIZE_EXT     0x8060
#define GL_TEXTURE_INTENSITY_SIZE_EXT     0x8061
#define GL_REPLACE_EXT                    0x8062
#define GL_PROXY_TEXTURE_1D_EXT           0x8063
#define GL_PROXY_TEXTURE_2D_EXT           0x8064
#define GL_TEXTURE_TOO_LARGE_EXT          0x8065

// GL_EXT_texture3D
#define GL_PACK_SKIP_IMAGES_EXT           0x806B
#define GL_PACK_IMAGE_HEIGHT_EXT          0x806C
#define GL_UNPACK_SKIP_IMAGES_EXT         0x806D
#define GL_UNPACK_IMAGE_HEIGHT_EXT        0x806E
#define GL_TEXTURE_3D_EXT                 0x806F
#define GL_PROXY_TEXTURE_3D_EXT           0x8070
#define GL_TEXTURE_DEPTH_EXT              0x8071
#define GL_TEXTURE_WRAP_R_EXT             0x8072
#define GL_MAX_3D_TEXTURE_SIZE_EXT        0x8073

// GL_SGIS_texture_filter4
#define GL_FILTER4_SGIS                   0x8146
#define GL_TEXTURE_FILTER4_SIZE_SGIS      0x8147

// GL_EXT_subtexture

// GL_EXT_copy_texture

// GL_EXT_histogram
#define GL_HISTOGRAM_EXT                  0x8024
#define GL_PROXY_HISTOGRAM_EXT            0x8025
#define GL_HISTOGRAM_WIDTH_EXT            0x8026
#define GL_HISTOGRAM_FORMAT_EXT           0x8027
#define GL_HISTOGRAM_RED_SIZE_EXT         0x8028
#define GL_HISTOGRAM_GREEN_SIZE_EXT       0x8029
#define GL_HISTOGRAM_BLUE_SIZE_EXT        0x802A
#define GL_HISTOGRAM_ALPHA_SIZE_EXT       0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE_EXT   0x802C
#define GL_HISTOGRAM_SINK_EXT             0x802D
#define GL_MINMAX_EXT                     0x802E
#define GL_MINMAX_FORMAT_EXT              0x802F
#define GL_MINMAX_SINK_EXT                0x8030
#define GL_TABLE_TOO_LARGE_EXT            0x8031

// GL_EXT_convolution
#define GL_CONVOLUTION_1D_EXT             0x8010
#define GL_CONVOLUTION_2D_EXT             0x8011
#define GL_SEPARABLE_2D_EXT               0x8012
#define GL_CONVOLUTION_BORDER_MODE_EXT    0x8013
#define GL_CONVOLUTION_FILTER_SCALE_EXT   0x8014
#define GL_CONVOLUTION_FILTER_BIAS_EXT    0x8015
#define GL_REDUCE_EXT                     0x8016
#define GL_CONVOLUTION_FORMAT_EXT         0x8017
#define GL_CONVOLUTION_WIDTH_EXT          0x8018
#define GL_CONVOLUTION_HEIGHT_EXT         0x8019
#define GL_MAX_CONVOLUTION_WIDTH_EXT      0x801A
#define GL_MAX_CONVOLUTION_HEIGHT_EXT     0x801B
#define GL_POST_CONVOLUTION_RED_SCALE_EXT 0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE_EXT 0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE_EXT 0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE_EXT 0x801F
#define GL_POST_CONVOLUTION_RED_BIAS_EXT  0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS_EXT 0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS_EXT 0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS_EXT 0x8023

// GL_SGI_color_matrix
#define GL_COLOR_MATRIX_SGI               0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH_SGI   0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI 0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE_SGI 0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI 0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI 0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI 0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS_SGI 0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI 0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI 0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI 0x80BB

// GL_SGI_color_table
#define GL_COLOR_TABLE_SGI                0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE_SGI 0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI 0x80D2
#define GL_PROXY_COLOR_TABLE_SGI          0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI 0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI 0x80D5
#define GL_COLOR_TABLE_SCALE_SGI          0x80D6
#define GL_COLOR_TABLE_BIAS_SGI           0x80D7
#define GL_COLOR_TABLE_FORMAT_SGI         0x80D8
#define GL_COLOR_TABLE_WIDTH_SGI          0x80D9
#define GL_COLOR_TABLE_RED_SIZE_SGI       0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE_SGI     0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE_SGI      0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE_SGI     0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE_SGI 0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE_SGI 0x80DF

// GL_SGIS_pixel_texture
#define GL_PIXEL_TEXTURE_SGIS             0x8353
#define GL_PIXEL_FRAGMENT_RGB_SOURCE_SGIS 0x8354
#define GL_PIXEL_FRAGMENT_ALPHA_SOURCE_SGIS 0x8355
#define GL_PIXEL_GROUP_COLOR_SGIS         0x8356

// GL_SGIX_pixel_texture
#define GL_PIXEL_TEX_GEN_SGIX             0x8139
#define GL_PIXEL_TEX_GEN_MODE_SGIX        0x832B

// GL_SGIS_texture4D
#define GL_PACK_SKIP_VOLUMES_SGIS         0x8130
#define GL_PACK_IMAGE_DEPTH_SGIS          0x8131
#define GL_UNPACK_SKIP_VOLUMES_SGIS       0x8132
#define GL_UNPACK_IMAGE_DEPTH_SGIS        0x8133
#define GL_TEXTURE_4D_SGIS                0x8134
#define GL_PROXY_TEXTURE_4D_SGIS          0x8135
#define GL_TEXTURE_4DSIZE_SGIS            0x8136
#define GL_TEXTURE_WRAP_Q_SGIS            0x8137
#define GL_MAX_4D_TEXTURE_SIZE_SGIS       0x8138
#define GL_TEXTURE_4D_BINDING_SGIS        0x814F

// GL_SGI_texture_color_table
#define GL_TEXTURE_COLOR_TABLE_SGI        0x80BC
#define GL_PROXY_TEXTURE_COLOR_TABLE_SGI  0x80BD

// GL_EXT_cmyka
#define GL_CMYK_EXT                       0x800C
#define GL_CMYKA_EXT                      0x800D
#define GL_PACK_CMYK_HINT_EXT             0x800E
#define GL_UNPACK_CMYK_HINT_EXT           0x800F

// GL_EXT_texture_object
#define GL_TEXTURE_PRIORITY_EXT           0x8066
#define GL_TEXTURE_RESIDENT_EXT           0x8067
#define GL_TEXTURE_1D_BINDING_EXT         0x8068
#define GL_TEXTURE_2D_BINDING_EXT         0x8069
#define GL_TEXTURE_3D_BINDING_EXT         0x806A

// GL_SGIS_detail_texture
#define GL_DETAIL_TEXTURE_2D_SGIS         0x8095
#define GL_DETAIL_TEXTURE_2D_BINDING_SGIS 0x8096
#define GL_LINEAR_DETAIL_SGIS             0x8097
#define GL_LINEAR_DETAIL_ALPHA_SGIS       0x8098
#define GL_LINEAR_DETAIL_COLOR_SGIS       0x8099
#define GL_DETAIL_TEXTURE_LEVEL_SGIS      0x809A
#define GL_DETAIL_TEXTURE_MODE_SGIS       0x809B
#define GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS 0x809C

// GL_SGIS_sharpen_texture
#define GL_LINEAR_SHARPEN_SGIS            0x80AD
#define GL_LINEAR_SHARPEN_ALPHA_SGIS      0x80AE
#define GL_LINEAR_SHARPEN_COLOR_SGIS      0x80AF
#define GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS 0x80B0

// GL_EXT_packed_pixels
#define GL_UNSIGNED_BYTE_3_3_2_EXT        0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4_EXT     0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1_EXT     0x8034
#define GL_UNSIGNED_INT_8_8_8_8_EXT       0x8035
#define GL_UNSIGNED_INT_10_10_10_2_EXT    0x8036

// GL_SGIS_texture_lod
#define GL_TEXTURE_MIN_LOD_SGIS           0x813A
#define GL_TEXTURE_MAX_LOD_SGIS           0x813B
#define GL_TEXTURE_BASE_LEVEL_SGIS        0x813C
#define GL_TEXTURE_MAX_LEVEL_SGIS         0x813D

// GL_SGIS_multisample
#define GL_MULTISAMPLE_SGIS               0x809D
#define GL_SAMPLE_ALPHA_TO_MASK_SGIS      0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_SGIS       0x809F
#define GL_SAMPLE_MASK_SGIS               0x80A0
#define GL_1PASS_SGIS                     0x80A1
#define GL_2PASS_0_SGIS                   0x80A2
#define GL_2PASS_1_SGIS                   0x80A3
#define GL_4PASS_0_SGIS                   0x80A4
#define GL_4PASS_1_SGIS                   0x80A5
#define GL_4PASS_2_SGIS                   0x80A6
#define GL_4PASS_3_SGIS                   0x80A7
#define GL_SAMPLE_BUFFERS_SGIS            0x80A8
#define GL_SAMPLES_SGIS                   0x80A9
#define GL_SAMPLE_MASK_VALUE_SGIS         0x80AA
#define GL_SAMPLE_MASK_INVERT_SGIS        0x80AB
#define GL_SAMPLE_PATTERN_SGIS            0x80AC

// GL_EXT_rescale_normal
#define GL_RESCALE_NORMAL_EXT             0x803A

// GL_EXT_vertex_array
#define GL_VERTEX_ARRAY_EXT               0x8074
#define GL_NORMAL_ARRAY_EXT               0x8075
#define GL_COLOR_ARRAY_EXT                0x8076
#define GL_INDEX_ARRAY_EXT                0x8077
#define GL_TEXTURE_COORD_ARRAY_EXT        0x8078
#define GL_EDGE_FLAG_ARRAY_EXT            0x8079
#define GL_VERTEX_ARRAY_SIZE_EXT          0x807A
#define GL_VERTEX_ARRAY_TYPE_EXT          0x807B
#define GL_VERTEX_ARRAY_STRIDE_EXT        0x807C
#define GL_VERTEX_ARRAY_COUNT_EXT         0x807D
#define GL_NORMAL_ARRAY_TYPE_EXT          0x807E
#define GL_NORMAL_ARRAY_STRIDE_EXT        0x807F
#define GL_NORMAL_ARRAY_COUNT_EXT         0x8080
#define GL_COLOR_ARRAY_SIZE_EXT           0x8081
#define GL_COLOR_ARRAY_TYPE_EXT           0x8082
#define GL_COLOR_ARRAY_STRIDE_EXT         0x8083
#define GL_COLOR_ARRAY_COUNT_EXT          0x8084
#define GL_INDEX_ARRAY_TYPE_EXT           0x8085
#define GL_INDEX_ARRAY_STRIDE_EXT         0x8086
#define GL_INDEX_ARRAY_COUNT_EXT          0x8087
#define GL_TEXTURE_COORD_ARRAY_SIZE_EXT   0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE_EXT   0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE_EXT 0x808A
#define GL_TEXTURE_COORD_ARRAY_COUNT_EXT  0x808B
#define GL_EDGE_FLAG_ARRAY_STRIDE_EXT     0x808C
#define GL_EDGE_FLAG_ARRAY_COUNT_EXT      0x808D
#define GL_VERTEX_ARRAY_POINTER_EXT       0x808E
#define GL_NORMAL_ARRAY_POINTER_EXT       0x808F
#define GL_COLOR_ARRAY_POINTER_EXT        0x8090
#define GL_INDEX_ARRAY_POINTER_EXT        0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER_EXT 0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER_EXT    0x8093

// GL_EXT_misc_attribute

// GL_SGIS_generate_mipmap
#define GL_GENERATE_MIPMAP_SGIS           0x8191
#define GL_GENERATE_MIPMAP_HINT_SGIS      0x8192

// GL_SGIX_clipmap
#define GL_LINEAR_CLIPMAP_LINEAR_SGIX     0x8170
#define GL_TEXTURE_CLIPMAP_CENTER_SGIX    0x8171
#define GL_TEXTURE_CLIPMAP_FRAME_SGIX     0x8172
#define GL_TEXTURE_CLIPMAP_OFFSET_SGIX    0x8173
#define GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX 0x8174
#define GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX 0x8175
#define GL_TEXTURE_CLIPMAP_DEPTH_SGIX     0x8176
#define GL_MAX_CLIPMAP_DEPTH_SGIX         0x8177
#define GL_MAX_CLIPMAP_VIRTUAL_DEPTH_SGIX 0x8178
#define GL_NEAREST_CLIPMAP_NEAREST_SGIX   0x844D
#define GL_NEAREST_CLIPMAP_LINEAR_SGIX    0x844E
#define GL_LINEAR_CLIPMAP_NEAREST_SGIX    0x844F

// GL_SGIX_shadow
#define GL_TEXTURE_COMPARE_SGIX           0x819A
#define GL_TEXTURE_COMPARE_OPERATOR_SGIX  0x819B
#define GL_TEXTURE_LEQUAL_R_SGIX          0x819C
#define GL_TEXTURE_GEQUAL_R_SGIX          0x819D

// GL_SGIS_texture_edge_clamp
#define GL_CLAMP_TO_EDGE_SGIS             0x812F

// GL_SGIS_texture_border_clamp
#define GL_CLAMP_TO_BORDER_SGIS           0x812D

// GL_EXT_blend_minmax
#define GL_FUNC_ADD_EXT                   0x8006
#define GL_MIN_EXT                        0x8007
#define GL_MAX_EXT                        0x8008
#define GL_BLEND_EQUATION_EXT             0x8009

// GL_EXT_blend_subtract
#define GL_FUNC_SUBTRACT_EXT              0x800A
#define GL_FUNC_REVERSE_SUBTRACT_EXT      0x800B

// GL_EXT_blend_logic_op

// GL_SGIX_interlace
#define GL_INTERLACE_SGIX                 0x8094

// GL_SGIX_pixel_tiles
#define GL_PIXEL_TILE_BEST_ALIGNMENT_SGIX 0x813E
#define GL_PIXEL_TILE_CACHE_INCREMENT_SGIX 0x813F
#define GL_PIXEL_TILE_WIDTH_SGIX          0x8140
#define GL_PIXEL_TILE_HEIGHT_SGIX         0x8141
#define GL_PIXEL_TILE_GRID_WIDTH_SGIX     0x8142
#define GL_PIXEL_TILE_GRID_HEIGHT_SGIX    0x8143
#define GL_PIXEL_TILE_GRID_DEPTH_SGIX     0x8144
#define GL_PIXEL_TILE_CACHE_SIZE_SGIX     0x8145

// GL_SGIS_texture_select
#define GL_DUAL_ALPHA4_SGIS               0x8110
#define GL_DUAL_ALPHA8_SGIS               0x8111
#define GL_DUAL_ALPHA12_SGIS              0x8112
#define GL_DUAL_ALPHA16_SGIS              0x8113
#define GL_DUAL_LUMINANCE4_SGIS           0x8114
#define GL_DUAL_LUMINANCE8_SGIS           0x8115
#define GL_DUAL_LUMINANCE12_SGIS          0x8116
#define GL_DUAL_LUMINANCE16_SGIS          0x8117
#define GL_DUAL_INTENSITY4_SGIS           0x8118
#define GL_DUAL_INTENSITY8_SGIS           0x8119
#define GL_DUAL_INTENSITY12_SGIS          0x811A
#define GL_DUAL_INTENSITY16_SGIS          0x811B
#define GL_DUAL_LUMINANCE_ALPHA4_SGIS     0x811C
#define GL_DUAL_LUMINANCE_ALPHA8_SGIS     0x811D
#define GL_QUAD_ALPHA4_SGIS               0x811E
#define GL_QUAD_ALPHA8_SGIS               0x811F
#define GL_QUAD_LUMINANCE4_SGIS           0x8120
#define GL_QUAD_LUMINANCE8_SGIS           0x8121
#define GL_QUAD_INTENSITY4_SGIS           0x8122
#define GL_QUAD_INTENSITY8_SGIS           0x8123
#define GL_DUAL_TEXTURE_SELECT_SGIS       0x8124
#define GL_QUAD_TEXTURE_SELECT_SGIS       0x8125

// GL_SGIX_sprite
#define GL_SPRITE_SGIX                    0x8148
#define GL_SPRITE_MODE_SGIX               0x8149
#define GL_SPRITE_AXIS_SGIX               0x814A
#define GL_SPRITE_TRANSLATION_SGIX        0x814B
#define GL_SPRITE_AXIAL_SGIX              0x814C
#define GL_SPRITE_OBJECT_ALIGNED_SGIX     0x814D
#define GL_SPRITE_EYE_ALIGNED_SGIX        0x814E

// GL_SGIX_texture_multi_buffer
#define GL_TEXTURE_MULTI_BUFFER_HINT_SGIX 0x812E

// GL_EXT_point_parameters
#define GL_POINT_SIZE_MIN_EXT             0x8126
#define GL_POINT_SIZE_MAX_EXT             0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_EXT  0x8128
#define GL_DISTANCE_ATTENUATION_EXT       0x8129

// GL_SGIS_point_parameters
#define GL_POINT_SIZE_MIN_SGIS            0x8126
#define GL_POINT_SIZE_MAX_SGIS            0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_SGIS 0x8128
#define GL_DISTANCE_ATTENUATION_SGIS      0x8129

// GL_SGIX_instruments
#define GL_INSTRUMENT_BUFFER_POINTER_SGIX 0x8180
#define GL_INSTRUMENT_MEASUREMENTS_SGIX   0x8181

// GL_SGIX_texture_scale_bias
#define GL_POST_TEXTURE_FILTER_BIAS_SGIX  0x8179
#define GL_POST_TEXTURE_FILTER_SCALE_SGIX 0x817A
#define GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX 0x817B
#define GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX 0x817C

// GL_SGIX_framezoom
#define GL_FRAMEZOOM_SGIX                 0x818B
#define GL_FRAMEZOOM_FACTOR_SGIX          0x818C
#define GL_MAX_FRAMEZOOM_FACTOR_SGIX      0x818D

// GL_SGIX_tag_sample_buffer

// GL_FfdMaskSGIX
#define GL_TEXTURE_DEFORMATION_BIT_SGIX   0x00000001
#define GL_GEOMETRY_DEFORMATION_BIT_SGIX  0x00000002

// GL_SGIX_polynomial_ffd
#define GL_GEOMETRY_DEFORMATION_SGIX      0x8194
#define GL_TEXTURE_DEFORMATION_SGIX       0x8195
#define GL_DEFORMATIONS_MASK_SGIX         0x8196
#define GL_MAX_DEFORMATION_ORDER_SGIX     0x8197

// GL_SGIX_reference_plane
#define GL_REFERENCE_PLANE_SGIX           0x817D
#define GL_REFERENCE_PLANE_EQUATION_SGIX  0x817E

// GL_SGIX_flush_raster

// GL_SGIX_depth_texture
#define GL_DEPTH_COMPONENT16_SGIX         0x81A5
#define GL_DEPTH_COMPONENT24_SGIX         0x81A6
#define GL_DEPTH_COMPONENT32_SGIX         0x81A7

// GL_SGIS_fog_function
#define GL_FOG_FUNC_SGIS                  0x812A
#define GL_FOG_FUNC_POINTS_SGIS           0x812B
#define GL_MAX_FOG_FUNC_POINTS_SGIS       0x812C

// GL_SGIX_fog_offset
#define GL_FOG_OFFSET_SGIX                0x8198
#define GL_FOG_OFFSET_VALUE_SGIX          0x8199

// GL_HP_image_transform
#define GL_IMAGE_SCALE_X_HP               0x8155
#define GL_IMAGE_SCALE_Y_HP               0x8156
#define GL_IMAGE_TRANSLATE_X_HP           0x8157
#define GL_IMAGE_TRANSLATE_Y_HP           0x8158
#define GL_IMAGE_ROTATE_ANGLE_HP          0x8159
#define GL_IMAGE_ROTATE_ORIGIN_X_HP       0x815A
#define GL_IMAGE_ROTATE_ORIGIN_Y_HP       0x815B
#define GL_IMAGE_MAG_FILTER_HP            0x815C
#define GL_IMAGE_MIN_FILTER_HP            0x815D
#define GL_IMAGE_CUBIC_WEIGHT_HP          0x815E
#define GL_CUBIC_HP                       0x815F
#define GL_AVERAGE_HP                     0x8160
#define GL_IMAGE_TRANSFORM_2D_HP          0x8161
#define GL_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP 0x8162
#define GL_PROXY_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP 0x8163

// GL_HP_convolution_border_modes
#define GL_IGNORE_BORDER_HP               0x8150
#define GL_CONSTANT_BORDER_HP             0x8151
#define GL_REPLICATE_BORDER_HP            0x8153
#define GL_CONVOLUTION_BORDER_COLOR_HP    0x8154

// GL_INGR_palette_buffer

// GL_SGIX_texture_add_env
#define GL_TEXTURE_ENV_BIAS_SGIX          0x80BE

// GL_EXT_color_subtable

// GL_PGI_vertex_hints
#define GL_VERTEX_DATA_HINT_PGI           0x1A22A
#define GL_VERTEX_CONSISTENT_HINT_PGI     0x1A22B
#define GL_MATERIAL_SIDE_HINT_PGI         0x1A22C
#define GL_MAX_VERTEX_HINT_PGI            0x1A22D
#define GL_COLOR3_BIT_PGI                 0x00010000
#define GL_COLOR4_BIT_PGI                 0x00020000
#define GL_EDGEFLAG_BIT_PGI               0x00040000
#define GL_INDEX_BIT_PGI                  0x00080000
#define GL_MAT_AMBIENT_BIT_PGI            0x00100000
#define GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI 0x00200000
#define GL_MAT_DIFFUSE_BIT_PGI            0x00400000
#define GL_MAT_EMISSION_BIT_PGI           0x00800000
#define GL_MAT_COLOR_INDEXES_BIT_PGI      0x01000000
#define GL_MAT_SHININESS_BIT_PGI          0x02000000
#define GL_MAT_SPECULAR_BIT_PGI           0x04000000
#define GL_NORMAL_BIT_PGI                 0x08000000
#define GL_TEXCOORD1_BIT_PGI              0x10000000
#define GL_TEXCOORD2_BIT_PGI              0x20000000
#define GL_TEXCOORD3_BIT_PGI              0x40000000
#define GL_TEXCOORD4_BIT_PGI              0x80000000
#define GL_VERTEX23_BIT_PGI               0x00000004
#define GL_VERTEX4_BIT_PGI                0x00000008

// GL_PGI_misc_hints
#define GL_PREFER_DOUBLEBUFFER_HINT_PGI   0x1A1F8
#define GL_CONSERVE_MEMORY_HINT_PGI       0x1A1FD
#define GL_RECLAIM_MEMORY_HINT_PGI        0x1A1FE
#define GL_NATIVE_GRAPHICS_HANDLE_PGI     0x1A202
#define GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI 0x1A203
#define GL_NATIVE_GRAPHICS_END_HINT_PGI   0x1A204
#define GL_ALWAYS_FAST_HINT_PGI           0x1A20C
#define GL_ALWAYS_SOFT_HINT_PGI           0x1A20D
#define GL_ALLOW_DRAW_OBJ_HINT_PGI        0x1A20E
#define GL_ALLOW_DRAW_WIN_HINT_PGI        0x1A20F
#define GL_ALLOW_DRAW_FRG_HINT_PGI        0x1A210
#define GL_ALLOW_DRAW_MEM_HINT_PGI        0x1A211
#define GL_STRICT_DEPTHFUNC_HINT_PGI      0x1A216
#define GL_STRICT_LIGHTING_HINT_PGI       0x1A217
#define GL_STRICT_SCISSOR_HINT_PGI        0x1A218
#define GL_FULL_STIPPLE_HINT_PGI          0x1A219
#define GL_CLIP_NEAR_HINT_PGI             0x1A220
#define GL_CLIP_FAR_HINT_PGI              0x1A221
#define GL_WIDE_LINE_HINT_PGI             0x1A222
#define GL_BACK_NORMALS_HINT_PGI          0x1A223

// GL_EXT_paletted_texture
#define GL_COLOR_INDEX1_EXT               0x80E2
#define GL_COLOR_INDEX2_EXT               0x80E3
#define GL_COLOR_INDEX4_EXT               0x80E4
#define GL_COLOR_INDEX8_EXT               0x80E5
#define GL_COLOR_INDEX12_EXT              0x80E6
#define GL_COLOR_INDEX16_EXT              0x80E7
#define GL_TEXTURE_INDEX_SIZE_EXT         0x80ED

// GL_EXT_clip_volume_hint
#define GL_CLIP_VOLUME_CLIPPING_HINT_EXT  0x80F0

// GL_SGIX_list_priority
#define GL_LIST_PRIORITY_SGIX             0x8182

// GL_SGIX_ir_instrument1
#define GL_IR_INSTRUMENT1_SGIX            0x817F

// GL_SGIX_calligraphic_fragment
#define GL_CALLIGRAPHIC_FRAGMENT_SGIX     0x8183

// GL_SGIX_texture_lod_bias
#define GL_TEXTURE_LOD_BIAS_S_SGIX        0x818E
#define GL_TEXTURE_LOD_BIAS_T_SGIX        0x818F
#define GL_TEXTURE_LOD_BIAS_R_SGIX        0x8190

// GL_SGIX_shadow_ambient
#define GL_SHADOW_AMBIENT_SGIX            0x80BF

// GL_EXT_index_texture

// GL_EXT_index_material
#define GL_INDEX_MATERIAL_EXT             0x81B8
#define GL_INDEX_MATERIAL_PARAMETER_EXT   0x81B9
#define GL_INDEX_MATERIAL_FACE_EXT        0x81BA

// GL_EXT_index_func
#define GL_INDEX_TEST_EXT                 0x81B5
#define GL_INDEX_TEST_FUNC_EXT            0x81B6
#define GL_INDEX_TEST_REF_EXT             0x81B7

// GL_EXT_index_array_formats
#define GL_IUI_V2F_EXT                    0x81AD
#define GL_IUI_V3F_EXT                    0x81AE
#define GL_IUI_N3F_V2F_EXT                0x81AF
#define GL_IUI_N3F_V3F_EXT                0x81B0
#define GL_T2F_IUI_V2F_EXT                0x81B1
#define GL_T2F_IUI_V3F_EXT                0x81B2
#define GL_T2F_IUI_N3F_V2F_EXT            0x81B3
#define GL_T2F_IUI_N3F_V3F_EXT            0x81B4

// GL_EXT_compiled_vertex_array
#define GL_ARRAY_ELEMENT_LOCK_FIRST_EXT   0x81A8
#define GL_ARRAY_ELEMENT_LOCK_COUNT_EXT   0x81A9

// GL_EXT_cull_vertex
#define GL_CULL_VERTEX_EXT                0x81AA
#define GL_CULL_VERTEX_EYE_POSITION_EXT   0x81AB
#define GL_CULL_VERTEX_OBJECT_POSITION_EXT 0x81AC

// GL_SGIX_ycrcb
#define GL_YCRCB_422_SGIX                 0x81BB
#define GL_YCRCB_444_SGIX                 0x81BC

// GL_SGIX_fragment_lighting
#define GL_FRAGMENT_LIGHTING_SGIX         0x8400
#define GL_FRAGMENT_COLOR_MATERIAL_SGIX   0x8401
#define GL_FRAGMENT_COLOR_MATERIAL_FACE_SGIX 0x8402
#define GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_SGIX 0x8403
#define GL_MAX_FRAGMENT_LIGHTS_SGIX       0x8404
#define GL_MAX_ACTIVE_LIGHTS_SGIX         0x8405
#define GL_CURRENT_RASTER_NORMAL_SGIX     0x8406
#define GL_LIGHT_ENV_MODE_SGIX            0x8407
#define GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX 0x8408
#define GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX 0x8409
#define GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX 0x840A
#define GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX 0x840B
#define GL_FRAGMENT_LIGHT0_SGIX           0x840C
#define GL_FRAGMENT_LIGHT1_SGIX           0x840D
#define GL_FRAGMENT_LIGHT2_SGIX           0x840E
#define GL_FRAGMENT_LIGHT3_SGIX           0x840F
#define GL_FRAGMENT_LIGHT4_SGIX           0x8410
#define GL_FRAGMENT_LIGHT5_SGIX           0x8411
#define GL_FRAGMENT_LIGHT6_SGIX           0x8412
#define GL_FRAGMENT_LIGHT7_SGIX           0x8413

// GL_IBM_rasterpos_clip
#define GL_RASTER_POSITION_UNCLIPPED_IBM  0x19262

// GL_HP_texture_lighting
#define GL_TEXTURE_LIGHTING_MODE_HP       0x8167
#define GL_TEXTURE_POST_SPECULAR_HP       0x8168
#define GL_TEXTURE_PRE_SPECULAR_HP        0x8169

// GL_EXT_draw_range_elements
#define GL_MAX_ELEMENTS_VERTICES_EXT      0x80E8
#define GL_MAX_ELEMENTS_INDICES_EXT       0x80E9

// GL_WIN_phong_shading
#define GL_PHONG_WIN                      0x80EA
#define GL_PHONG_HINT_WIN                 0x80EB

// GL_WIN_specular_fog
#define GL_FOG_SPECULAR_TEXTURE_WIN       0x80EC

// GL_EXT_light_texture
#define GL_FRAGMENT_MATERIAL_EXT          0x8349
#define GL_FRAGMENT_NORMAL_EXT            0x834A
#define GL_FRAGMENT_COLOR_EXT             0x834C
#define GL_ATTENUATION_EXT                0x834D
#define GL_SHADOW_ATTENUATION_EXT         0x834E
#define GL_TEXTURE_APPLICATION_MODE_EXT   0x834F
#define GL_TEXTURE_LIGHT_EXT              0x8350
#define GL_TEXTURE_MATERIAL_FACE_EXT      0x8351
#define GL_TEXTURE_MATERIAL_PARAMETER_EXT 0x8352
/* reuse GL_FRAGMENT_DEPTH_EXT */

// GL_SGIX_blend_alpha_minmax
#define GL_ALPHA_MIN_SGIX                 0x8320
#define GL_ALPHA_MAX_SGIX                 0x8321

// GL_SGIX_impact_pixel_texture
#define GL_PIXEL_TEX_GEN_Q_CEILING_SGIX   0x8184
#define GL_PIXEL_TEX_GEN_Q_ROUND_SGIX     0x8185
#define GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX     0x8186
#define GL_PIXEL_TEX_GEN_ALPHA_REPLACE_SGIX 0x8187
#define GL_PIXEL_TEX_GEN_ALPHA_NO_REPLACE_SGIX 0x8188
#define GL_PIXEL_TEX_GEN_ALPHA_LS_SGIX    0x8189
#define GL_PIXEL_TEX_GEN_ALPHA_MS_SGIX    0x818A

// GL_EXT_bgra
#define GL_BGR_EXT                        0x80E0
#define GL_BGRA_EXT                       0x80E1

// GL_SGIX_async
#define GL_ASYNC_MARKER_SGIX              0x8329

// GL_SGIX_async_pixel
#define GL_ASYNC_TEX_IMAGE_SGIX           0x835C
#define GL_ASYNC_DRAW_PIXELS_SGIX         0x835D
#define GL_ASYNC_READ_PIXELS_SGIX         0x835E
#define GL_MAX_ASYNC_TEX_IMAGE_SGIX       0x835F
#define GL_MAX_ASYNC_DRAW_PIXELS_SGIX     0x8360
#define GL_MAX_ASYNC_READ_PIXELS_SGIX     0x8361

// GL_SGIX_async_histogram
#define GL_ASYNC_HISTOGRAM_SGIX           0x832C
#define GL_MAX_ASYNC_HISTOGRAM_SGIX       0x832D

// GL_INTEL_texture_scissor

// GL_INTEL_parallel_arrays
#define GL_PARALLEL_ARRAYS_INTEL          0x83F4
#define GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL 0x83F5
#define GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL 0x83F6
#define GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL 0x83F7
#define GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL 0x83F8

// GL_HP_occlusion_test
#define GL_OCCLUSION_TEST_HP              0x8165
#define GL_OCCLUSION_TEST_RESULT_HP       0x8166

// GL_EXT_pixel_transform
#define GL_PIXEL_TRANSFORM_2D_EXT         0x8330
#define GL_PIXEL_MAG_FILTER_EXT           0x8331
#define GL_PIXEL_MIN_FILTER_EXT           0x8332
#define GL_PIXEL_CUBIC_WEIGHT_EXT         0x8333
#define GL_CUBIC_EXT                      0x8334
#define GL_AVERAGE_EXT                    0x8335
#define GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT 0x8336
#define GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT 0x8337
#define GL_PIXEL_TRANSFORM_2D_MATRIX_EXT  0x8338

// GL_EXT_pixel_transform_color_table

// GL_EXT_shared_texture_palette
#define GL_SHARED_TEXTURE_PALETTE_EXT     0x81FB

// GL_EXT_separate_specular_color
#define GL_LIGHT_MODEL_COLOR_CONTROL_EXT  0x81F8
#define GL_SINGLE_COLOR_EXT               0x81F9
#define GL_SEPARATE_SPECULAR_COLOR_EXT    0x81FA

// GL_EXT_secondary_color
#define GL_COLOR_SUM_EXT                  0x8458
#define GL_CURRENT_SECONDARY_COLOR_EXT    0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE_EXT 0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE_EXT 0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT 0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER_EXT 0x845D
#define GL_SECONDARY_COLOR_ARRAY_EXT      0x845E

// GL_EXT_texture_perturb_normal
#define GL_PERTURB_EXT                    0x85AE
#define GL_TEXTURE_NORMAL_EXT             0x85AF

// GL_EXT_multi_draw_arrays

// GL_EXT_fog_coord
#define GL_FOG_COORDINATE_SOURCE_EXT      0x8450
#define GL_FOG_COORDINATE_EXT             0x8451
#define GL_FRAGMENT_DEPTH_EXT             0x8452
#define GL_CURRENT_FOG_COORDINATE_EXT     0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE_EXT  0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE_EXT 0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER_EXT 0x8456
#define GL_FOG_COORDINATE_ARRAY_EXT       0x8457

// GL_REND_screen_coordinates
#define GL_SCREEN_COORDINATES_REND        0x8490
#define GL_INVERTED_SCREEN_W_REND         0x8491

// GL_EXT_coordinate_frame
#define GL_TANGENT_ARRAY_EXT              0x8439
#define GL_BINORMAL_ARRAY_EXT             0x843A
#define GL_CURRENT_TANGENT_EXT            0x843B
#define GL_CURRENT_BINORMAL_EXT           0x843C
#define GL_TANGENT_ARRAY_TYPE_EXT         0x843E
#define GL_TANGENT_ARRAY_STRIDE_EXT       0x843F
#define GL_BINORMAL_ARRAY_TYPE_EXT        0x8440
#define GL_BINORMAL_ARRAY_STRIDE_EXT      0x8441
#define GL_TANGENT_ARRAY_POINTER_EXT      0x8442
#define GL_BINORMAL_ARRAY_POINTER_EXT     0x8443
#define GL_MAP1_TANGENT_EXT               0x8444
#define GL_MAP2_TANGENT_EXT               0x8445
#define GL_MAP1_BINORMAL_EXT              0x8446
#define GL_MAP2_BINORMAL_EXT              0x8447

// GL_EXT_texture_env_combine
#define GL_COMBINE_EXT                    0x8570
#define GL_COMBINE_RGB_EXT                0x8571
#define GL_COMBINE_ALPHA_EXT              0x8572
#define GL_RGB_SCALE_EXT                  0x8573
#define GL_ADD_SIGNED_EXT                 0x8574
#define GL_INTERPOLATE_EXT                0x8575
#define GL_CONSTANT_EXT                   0x8576
#define GL_PRIMARY_COLOR_EXT              0x8577
#define GL_PREVIOUS_EXT                   0x8578
#define GL_SOURCE0_RGB_EXT                0x8580
#define GL_SOURCE1_RGB_EXT                0x8581
#define GL_SOURCE2_RGB_EXT                0x8582
#define GL_SOURCE0_ALPHA_EXT              0x8588
#define GL_SOURCE1_ALPHA_EXT              0x8589
#define GL_SOURCE2_ALPHA_EXT              0x858A
#define GL_OPERAND0_RGB_EXT               0x8590
#define GL_OPERAND1_RGB_EXT               0x8591
#define GL_OPERAND2_RGB_EXT               0x8592
#define GL_OPERAND0_ALPHA_EXT             0x8598
#define GL_OPERAND1_ALPHA_EXT             0x8599
#define GL_OPERAND2_ALPHA_EXT             0x859A

// GL_APPLE_specular_vector
#define GL_LIGHT_MODEL_SPECULAR_VECTOR_APPLE 0x85B0

// GL_APPLE_transform_hint
#define GL_TRANSFORM_HINT_APPLE           0x85B1

// GL_SGIX_fog_scale
#define GL_FOG_SCALE_SGIX                 0x81FC
#define GL_FOG_SCALE_VALUE_SGIX           0x81FD

// GL_SUNX_constant_data
#define GL_UNPACK_CONSTANT_DATA_SUNX      0x81D5
#define GL_TEXTURE_CONSTANT_DATA_SUNX     0x81D6

// GL_SUN_global_alpha
#define GL_GLOBAL_ALPHA_SUN               0x81D9
#define GL_GLOBAL_ALPHA_FACTOR_SUN        0x81DA

// GL_SUN_triangle_list
#define GL_RESTART_SUN                    0x0001
#define GL_REPLACE_MIDDLE_SUN             0x0002
#define GL_REPLACE_OLDEST_SUN             0x0003
#define GL_TRIANGLE_LIST_SUN              0x81D7
#define GL_REPLACEMENT_CODE_SUN           0x81D8
#define GL_REPLACEMENT_CODE_ARRAY_SUN     0x85C0
#define GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN 0x85C1
#define GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN 0x85C2
#define GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN 0x85C3
#define GL_R1UI_V3F_SUN                   0x85C4
#define GL_R1UI_C4UB_V3F_SUN              0x85C5
#define GL_R1UI_C3F_V3F_SUN               0x85C6
#define GL_R1UI_N3F_V3F_SUN               0x85C7
#define GL_R1UI_C4F_N3F_V3F_SUN           0x85C8
#define GL_R1UI_T2F_V3F_SUN               0x85C9
#define GL_R1UI_T2F_N3F_V3F_SUN           0x85CA
#define GL_R1UI_T2F_C4F_N3F_V3F_SUN       0x85CB

// GL_SUN_vertex

// GL_EXT_blend_func_separate
#define GL_BLEND_DST_RGB_EXT              0x80C8
#define GL_BLEND_SRC_RGB_EXT              0x80C9
#define GL_BLEND_DST_ALPHA_EXT            0x80CA
#define GL_BLEND_SRC_ALPHA_EXT            0x80CB

// GL_INGR_color_clamp
#define GL_RED_MIN_CLAMP_INGR             0x8560
#define GL_GREEN_MIN_CLAMP_INGR           0x8561
#define GL_BLUE_MIN_CLAMP_INGR            0x8562
#define GL_ALPHA_MIN_CLAMP_INGR           0x8563
#define GL_RED_MAX_CLAMP_INGR             0x8564
#define GL_GREEN_MAX_CLAMP_INGR           0x8565
#define GL_BLUE_MAX_CLAMP_INGR            0x8566
#define GL_ALPHA_MAX_CLAMP_INGR           0x8567

// GL_INGR_interlace_read
#define GL_INTERLACE_READ_INGR            0x8568

// GL_EXT_stencil_wrap
#define GL_INCR_WRAP_EXT                  0x8507
#define GL_DECR_WRAP_EXT                  0x8508

// GL_EXT_422_pixels
#define GL_422_EXT                        0x80CC
#define GL_422_REV_EXT                    0x80CD
#define GL_422_AVERAGE_EXT                0x80CE
#define GL_422_REV_AVERAGE_EXT            0x80CF

// GL_NV_texgen_reflection
#define GL_NORMAL_MAP_NV                  0x8511
#define GL_REFLECTION_MAP_NV              0x8512

// GL_EXT_texture_cube_map
#define GL_NORMAL_MAP_EXT                 0x8511
#define GL_REFLECTION_MAP_EXT             0x8512
#define GL_TEXTURE_CUBE_MAP_EXT           0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_EXT   0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT 0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_EXT     0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT  0x851C

// GL_SUN_convolution_border_modes
#define GL_WRAP_BORDER_SUN                0x81D4

// GL_EXT_texture_env_add

// GL_EXT_texture_lod_bias
#define GL_MAX_TEXTURE_LOD_BIAS_EXT       0x84FD
#define GL_TEXTURE_FILTER_CONTROL_EXT     0x8500
#define GL_TEXTURE_LOD_BIAS_EXT           0x8501

// GL_EXT_texture_filter_anisotropic
#define GL_TEXTURE_MAX_ANISOTROPY_EXT     0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF

// GL_EXT_vertex_weighting
#define GL_MODELVIEW0_STACK_DEPTH_EXT     GL_MODELVIEW_STACK_DEPTH
#define GL_MODELVIEW1_STACK_DEPTH_EXT     0x8502
#define GL_MODELVIEW0_MATRIX_EXT          GL_MODELVIEW_MATRIX
#define GL_MODELVIEW1_MATRIX_EXT          0x8506
#define GL_VERTEX_WEIGHTING_EXT           0x8509
#define GL_MODELVIEW0_EXT                 GL_MODELVIEW
#define GL_MODELVIEW1_EXT                 0x850A
#define GL_CURRENT_VERTEX_WEIGHT_EXT      0x850B
#define GL_VERTEX_WEIGHT_ARRAY_EXT        0x850C
#define GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT   0x850D
#define GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT   0x850E
#define GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT 0x850F
#define GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT 0x8510

// GL_NV_light_max_exponent
#define GL_MAX_SHININESS_NV               0x8504
#define GL_MAX_SPOT_EXPONENT_NV           0x8505

// GL_NV_vertex_array_range
#define GL_VERTEX_ARRAY_RANGE_NV          0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_NV   0x851E
#define GL_VERTEX_ARRAY_RANGE_VALID_NV    0x851F
#define GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV 0x8520
#define GL_VERTEX_ARRAY_RANGE_POINTER_NV  0x8521

// GL_NV_register_combiners
#define GL_REGISTER_COMBINERS_NV          0x8522
#define GL_VARIABLE_A_NV                  0x8523
#define GL_VARIABLE_B_NV                  0x8524
#define GL_VARIABLE_C_NV                  0x8525
#define GL_VARIABLE_D_NV                  0x8526
#define GL_VARIABLE_E_NV                  0x8527
#define GL_VARIABLE_F_NV                  0x8528
#define GL_VARIABLE_G_NV                  0x8529
#define GL_CONSTANT_COLOR0_NV             0x852A
#define GL_CONSTANT_COLOR1_NV             0x852B
#define GL_PRIMARY_COLOR_NV               0x852C
#define GL_SECONDARY_COLOR_NV             0x852D
#define GL_SPARE0_NV                      0x852E
#define GL_SPARE1_NV                      0x852F
#define GL_DISCARD_NV                     0x8530
#define GL_E_TIMES_F_NV                   0x8531
#define GL_SPARE0_PLUS_SECONDARY_COLOR_NV 0x8532
#define GL_UNSIGNED_IDENTITY_NV           0x8536
#define GL_UNSIGNED_INVERT_NV             0x8537
#define GL_EXPAND_NORMAL_NV               0x8538
#define GL_EXPAND_NEGATE_NV               0x8539
#define GL_HALF_BIAS_NORMAL_NV            0x853A
#define GL_HALF_BIAS_NEGATE_NV            0x853B
#define GL_SIGNED_IDENTITY_NV             0x853C
#define GL_SIGNED_NEGATE_NV               0x853D
#define GL_SCALE_BY_TWO_NV                0x853E
#define GL_SCALE_BY_FOUR_NV               0x853F
#define GL_SCALE_BY_ONE_HALF_NV           0x8540
#define GL_BIAS_BY_NEGATIVE_ONE_HALF_NV   0x8541
#define GL_COMBINER_INPUT_NV              0x8542
#define GL_COMBINER_MAPPING_NV            0x8543
#define GL_COMBINER_COMPONENT_USAGE_NV    0x8544
#define GL_COMBINER_AB_DOT_PRODUCT_NV     0x8545
#define GL_COMBINER_CD_DOT_PRODUCT_NV     0x8546
#define GL_COMBINER_MUX_SUM_NV            0x8547
#define GL_COMBINER_SCALE_NV              0x8548
#define GL_COMBINER_BIAS_NV               0x8549
#define GL_COMBINER_AB_OUTPUT_NV          0x854A
#define GL_COMBINER_CD_OUTPUT_NV          0x854B
#define GL_COMBINER_SUM_OUTPUT_NV         0x854C
#define GL_MAX_GENERAL_COMBINERS_NV       0x854D
#define GL_NUM_GENERAL_COMBINERS_NV       0x854E
#define GL_COLOR_SUM_CLAMP_NV             0x854F
#define GL_COMBINER0_NV                   0x8550
#define GL_COMBINER1_NV                   0x8551
#define GL_COMBINER2_NV                   0x8552
#define GL_COMBINER3_NV                   0x8553
#define GL_COMBINER4_NV                   0x8554
#define GL_COMBINER5_NV                   0x8555
#define GL_COMBINER6_NV                   0x8556
#define GL_COMBINER7_NV                   0x8557
/* reuse GL_TEXTURE0_ARB */
/* reuse GL_TEXTURE1_ARB */
/* reuse GL_ZERO */
/* reuse GL_NONE */
/* reuse GL_FOG */

// GL_NV_fog_distance
#define GL_FOG_DISTANCE_MODE_NV           0x855A
#define GL_EYE_RADIAL_NV                  0x855B
#define GL_EYE_PLANE_ABSOLUTE_NV          0x855C
/* reuse GL_EYE_PLANE */

// GL_NV_texgen_emboss
#define GL_EMBOSS_LIGHT_NV                0x855D
#define GL_EMBOSS_CONSTANT_NV             0x855E
#define GL_EMBOSS_MAP_NV                  0x855F

// GL_NV_blend_square

// GL_NV_texture_env_combine4
#define GL_COMBINE4_NV                    0x8503
#define GL_SOURCE3_RGB_NV                 0x8583
#define GL_SOURCE3_ALPHA_NV               0x858B
#define GL_OPERAND3_RGB_NV                0x8593
#define GL_OPERAND3_ALPHA_NV              0x859B

// GL_MESA_resize_buffers

// GL_MESA_window_pos

// GL_EXT_texture_compression_s3tc
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT   0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT  0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT  0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT  0x83F3

// GL_IBM_cull_vertex

// GL_IBM_multimode_draw_arrays

// GL_IBM_vertex_array_lists

// GL_SGIX_ycrcb_subsample

// GL_SGIX_ycrcba
#define GL_YCRCB_SGIX                     0x8318
#define GL_YCRCBA_SGIX                    0x8319

// GL_SGI_depth_pass_instrument
#define GL_DEPTH_PASS_INSTRUMENT_SGIX     0x8310
#define GL_DEPTH_PASS_INSTRUMENT_COUNTERS_SGIX 0x8311
#define GL_DEPTH_PASS_INSTRUMENT_MAX_SGIX 0x8312

// GL_3DFX_texture_compression_FXT1
#define GL_COMPRESSED_RGB_FXT1_3DFX       0x86B0
#define GL_COMPRESSED_RGBA_FXT1_3DFX      0x86B1

// GL_3DFX_multisample
#define GL_MULTISAMPLE_3DFX               0x86B2
#define GL_SAMPLE_BUFFERS_3DFX            0x86B3
#define GL_SAMPLES_3DFX                   0x86B4
#define GL_MULTISAMPLE_BIT_3DFX           0x20000000

// GL_3DFX_tbuffer

// GL_EXT_multisample
#define GL_MULTISAMPLE_EXT                0x809D
#define GL_SAMPLE_ALPHA_TO_MASK_EXT       0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_EXT        0x809F
#define GL_SAMPLE_MASK_EXT                0x80A0
#define GL_1PASS_EXT                      0x80A1
#define GL_2PASS_0_EXT                    0x80A2
#define GL_2PASS_1_EXT                    0x80A3
#define GL_4PASS_0_EXT                    0x80A4
#define GL_4PASS_1_EXT                    0x80A5
#define GL_4PASS_2_EXT                    0x80A6
#define GL_4PASS_3_EXT                    0x80A7
#define GL_SAMPLE_BUFFERS_EXT             0x80A8
#define GL_SAMPLES_EXT                    0x80A9
#define GL_SAMPLE_MASK_VALUE_EXT          0x80AA
#define GL_SAMPLE_MASK_INVERT_EXT         0x80AB
#define GL_SAMPLE_PATTERN_EXT             0x80AC
#define GL_MULTISAMPLE_BIT_EXT            0x20000000

// GL_SGIX_vertex_preclip
#define GL_VERTEX_PRECLIP_SGIX            0x83EE
#define GL_VERTEX_PRECLIP_HINT_SGIX       0x83EF

// GL_SGIX_convolution_accuracy
#define GL_CONVOLUTION_HINT_SGIX          0x8316

// GL_SGIX_resample
#define GL_PACK_RESAMPLE_SGIX             0x842C
#define GL_UNPACK_RESAMPLE_SGIX           0x842D
#define GL_RESAMPLE_REPLICATE_SGIX        0x842E
#define GL_RESAMPLE_ZERO_FILL_SGIX        0x842F
#define GL_RESAMPLE_DECIMATE_SGIX         0x8430

// GL_SGIS_point_line_texgen
#define GL_EYE_DISTANCE_TO_POINT_SGIS     0x81F0
#define GL_OBJECT_DISTANCE_TO_POINT_SGIS  0x81F1
#define GL_EYE_DISTANCE_TO_LINE_SGIS      0x81F2
#define GL_OBJECT_DISTANCE_TO_LINE_SGIS   0x81F3
#define GL_EYE_POINT_SGIS                 0x81F4
#define GL_OBJECT_POINT_SGIS              0x81F5
#define GL_EYE_LINE_SGIS                  0x81F6
#define GL_OBJECT_LINE_SGIS               0x81F7

// GL_SGIS_texture_color_mask
#define GL_TEXTURE_COLOR_WRITEMASK_SGIS   0x81EF

// GL_EXT_texture_env_dot3
#define GL_DOT3_RGB_EXT                   0x8740
#define GL_DOT3_RGBA_EXT                  0x8741

// GL_ATI_texture_mirror_once
#define GL_MIRROR_CLAMP_ATI               0x8742
#define GL_MIRROR_CLAMP_TO_EDGE_ATI       0x8743

// GL_NV_fence
#define GL_ALL_COMPLETED_NV               0x84F2
#define GL_FENCE_STATUS_NV                0x84F3
#define GL_FENCE_CONDITION_NV             0x84F4

// GL_IBM_texture_mirrored_repeat
#define GL_MIRRORED_REPEAT_IBM            0x8370

// GL_NV_evaluators
#define GL_EVAL_2D_NV                     0x86C0
#define GL_EVAL_TRIANGULAR_2D_NV          0x86C1
#define GL_MAP_TESSELLATION_NV            0x86C2
#define GL_MAP_ATTRIB_U_ORDER_NV          0x86C3
#define GL_MAP_ATTRIB_V_ORDER_NV          0x86C4
#define GL_EVAL_FRACTIONAL_TESSELLATION_NV 0x86C5
#define GL_EVAL_VERTEX_ATTRIB0_NV         0x86C6
#define GL_EVAL_VERTEX_ATTRIB1_NV         0x86C7
#define GL_EVAL_VERTEX_ATTRIB2_NV         0x86C8
#define GL_EVAL_VERTEX_ATTRIB3_NV         0x86C9
#define GL_EVAL_VERTEX_ATTRIB4_NV         0x86CA
#define GL_EVAL_VERTEX_ATTRIB5_NV         0x86CB
#define GL_EVAL_VERTEX_ATTRIB6_NV         0x86CC
#define GL_EVAL_VERTEX_ATTRIB7_NV         0x86CD
#define GL_EVAL_VERTEX_ATTRIB8_NV         0x86CE
#define GL_EVAL_VERTEX_ATTRIB9_NV         0x86CF
#define GL_EVAL_VERTEX_ATTRIB10_NV        0x86D0
#define GL_EVAL_VERTEX_ATTRIB11_NV        0x86D1
#define GL_EVAL_VERTEX_ATTRIB12_NV        0x86D2
#define GL_EVAL_VERTEX_ATTRIB13_NV        0x86D3
#define GL_EVAL_VERTEX_ATTRIB14_NV        0x86D4
#define GL_EVAL_VERTEX_ATTRIB15_NV        0x86D5
#define GL_MAX_MAP_TESSELLATION_NV        0x86D6
#define GL_MAX_RATIONAL_EVAL_ORDER_NV     0x86D7

// GL_NV_packed_depth_stencil
#define GL_DEPTH_STENCIL_NV               0x84F9
#define GL_UNSIGNED_INT_24_8_NV           0x84FA

// GL_NV_register_combiners2
#define GL_PER_STAGE_CONSTANTS_NV         0x8535

// GL_NV_texture_compression_vtc

// GL_NV_texture_rectangle
#define GL_TEXTURE_RECTANGLE_NV           0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE_NV   0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE_NV     0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_NV  0x84F8

// GL_NV_texture_shader
#define GL_OFFSET_TEXTURE_RECTANGLE_NV    0x864C
#define GL_OFFSET_TEXTURE_RECTANGLE_SCALE_NV 0x864D
#define GL_DOT_PRODUCT_TEXTURE_RECTANGLE_NV 0x864E
#define GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV 0x86D9
#define GL_UNSIGNED_INT_S8_S8_8_8_NV      0x86DA
#define GL_UNSIGNED_INT_8_8_S8_S8_REV_NV  0x86DB
#define GL_DSDT_MAG_INTENSITY_NV          0x86DC
#define GL_SHADER_CONSISTENT_NV           0x86DD
#define GL_TEXTURE_SHADER_NV              0x86DE
#define GL_SHADER_OPERATION_NV            0x86DF
#define GL_CULL_MODES_NV                  0x86E0
#define GL_OFFSET_TEXTURE_MATRIX_NV       0x86E1
#define GL_OFFSET_TEXTURE_SCALE_NV        0x86E2
#define GL_OFFSET_TEXTURE_BIAS_NV         0x86E3
#define GL_OFFSET_TEXTURE_2D_MATRIX_NV    GL_OFFSET_TEXTURE_MATRIX_NV
#define GL_OFFSET_TEXTURE_2D_SCALE_NV     GL_OFFSET_TEXTURE_SCALE_NV
#define GL_OFFSET_TEXTURE_2D_BIAS_NV      GL_OFFSET_TEXTURE_BIAS_NV
#define GL_PREVIOUS_TEXTURE_INPUT_NV      0x86E4
#define GL_CONST_EYE_NV                   0x86E5
#define GL_PASS_THROUGH_NV                0x86E6
#define GL_CULL_FRAGMENT_NV               0x86E7
#define GL_OFFSET_TEXTURE_2D_NV           0x86E8
#define GL_DEPENDENT_AR_TEXTURE_2D_NV     0x86E9
#define GL_DEPENDENT_GB_TEXTURE_2D_NV     0x86EA
#define GL_DOT_PRODUCT_NV                 0x86EC
#define GL_DOT_PRODUCT_DEPTH_REPLACE_NV   0x86ED
#define GL_DOT_PRODUCT_TEXTURE_2D_NV      0x86EE
#define GL_DOT_PRODUCT_TEXTURE_CUBE_MAP_NV 0x86F0
#define GL_DOT_PRODUCT_DIFFUSE_CUBE_MAP_NV 0x86F1
#define GL_DOT_PRODUCT_REFLECT_CUBE_MAP_NV 0x86F2
#define GL_DOT_PRODUCT_CONST_EYE_REFLECT_CUBE_MAP_NV 0x86F3
#define GL_HILO_NV                        0x86F4
#define GL_DSDT_NV                        0x86F5
#define GL_DSDT_MAG_NV                    0x86F6
#define GL_DSDT_MAG_VIB_NV                0x86F7
#define GL_HILO16_NV                      0x86F8
#define GL_SIGNED_HILO_NV                 0x86F9
#define GL_SIGNED_HILO16_NV               0x86FA
#define GL_SIGNED_RGBA_NV                 0x86FB
#define GL_SIGNED_RGBA8_NV                0x86FC
#define GL_SIGNED_RGB_NV                  0x86FE
#define GL_SIGNED_RGB8_NV                 0x86FF
#define GL_SIGNED_LUMINANCE_NV            0x8701
#define GL_SIGNED_LUMINANCE8_NV           0x8702
#define GL_SIGNED_LUMINANCE_ALPHA_NV      0x8703
#define GL_SIGNED_LUMINANCE8_ALPHA8_NV    0x8704
#define GL_SIGNED_ALPHA_NV                0x8705
#define GL_SIGNED_ALPHA8_NV               0x8706
#define GL_SIGNED_INTENSITY_NV            0x8707
#define GL_SIGNED_INTENSITY8_NV           0x8708
#define GL_DSDT8_NV                       0x8709
#define GL_DSDT8_MAG8_NV                  0x870A
#define GL_DSDT8_MAG8_INTENSITY8_NV       0x870B
#define GL_SIGNED_RGB_UNSIGNED_ALPHA_NV   0x870C
#define GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV 0x870D
#define GL_HI_SCALE_NV                    0x870E
#define GL_LO_SCALE_NV                    0x870F
#define GL_DS_SCALE_NV                    0x8710
#define GL_DT_SCALE_NV                    0x8711
#define GL_MAGNITUDE_SCALE_NV             0x8712
#define GL_VIBRANCE_SCALE_NV              0x8713
#define GL_HI_BIAS_NV                     0x8714
#define GL_LO_BIAS_NV                     0x8715
#define GL_DS_BIAS_NV                     0x8716
#define GL_DT_BIAS_NV                     0x8717
#define GL_MAGNITUDE_BIAS_NV              0x8718
#define GL_VIBRANCE_BIAS_NV               0x8719
#define GL_TEXTURE_BORDER_VALUES_NV       0x871A
#define GL_TEXTURE_HI_SIZE_NV             0x871B
#define GL_TEXTURE_LO_SIZE_NV             0x871C
#define GL_TEXTURE_DS_SIZE_NV             0x871D
#define GL_TEXTURE_DT_SIZE_NV             0x871E
#define GL_TEXTURE_MAG_SIZE_NV            0x871F

// GL_NV_texture_shader2
#define GL_DOT_PRODUCT_TEXTURE_3D_NV      0x86EF

// GL_NV_vertex_array_range2
#define GL_VERTEX_ARRAY_RANGE_WITHOUT_FLUSH_NV 0x8533

// GL_NV_vertex_program
#define GL_VERTEX_PROGRAM_NV              0x8620
#define GL_VERTEX_STATE_PROGRAM_NV        0x8621
#define GL_ATTRIB_ARRAY_SIZE_NV           0x8623
#define GL_ATTRIB_ARRAY_STRIDE_NV         0x8624
#define GL_ATTRIB_ARRAY_TYPE_NV           0x8625
#define GL_CURRENT_ATTRIB_NV              0x8626
#define GL_PROGRAM_LENGTH_NV              0x8627
#define GL_PROGRAM_STRING_NV              0x8628
#define GL_MODELVIEW_PROJECTION_NV        0x8629
#define GL_IDENTITY_NV                    0x862A
#define GL_INVERSE_NV                     0x862B
#define GL_TRANSPOSE_NV                   0x862C
#define GL_INVERSE_TRANSPOSE_NV           0x862D
#define GL_MAX_TRACK_MATRIX_STACK_DEPTH_NV 0x862E
#define GL_MAX_TRACK_MATRICES_NV          0x862F
#define GL_MATRIX0_NV                     0x8630
#define GL_MATRIX1_NV                     0x8631
#define GL_MATRIX2_NV                     0x8632
#define GL_MATRIX3_NV                     0x8633
#define GL_MATRIX4_NV                     0x8634
#define GL_MATRIX5_NV                     0x8635
#define GL_MATRIX6_NV                     0x8636
#define GL_MATRIX7_NV                     0x8637
#define GL_CURRENT_MATRIX_STACK_DEPTH_NV  0x8640
#define GL_CURRENT_MATRIX_NV              0x8641
#define GL_VERTEX_PROGRAM_POINT_SIZE_NV   0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_NV     0x8643
#define GL_PROGRAM_PARAMETER_NV           0x8644
#define GL_ATTRIB_ARRAY_POINTER_NV        0x8645
#define GL_PROGRAM_TARGET_NV              0x8646
#define GL_PROGRAM_RESIDENT_NV            0x8647
#define GL_TRACK_MATRIX_NV                0x8648
#define GL_TRACK_MATRIX_TRANSFORM_NV      0x8649
#define GL_VERTEX_PROGRAM_BINDING_NV      0x864A
#define GL_PROGRAM_ERROR_POSITION_NV      0x864B
#define GL_VERTEX_ATTRIB_ARRAY0_NV        0x8650
#define GL_VERTEX_ATTRIB_ARRAY1_NV        0x8651
#define GL_VERTEX_ATTRIB_ARRAY2_NV        0x8652
#define GL_VERTEX_ATTRIB_ARRAY3_NV        0x8653
#define GL_VERTEX_ATTRIB_ARRAY4_NV        0x8654
#define GL_VERTEX_ATTRIB_ARRAY5_NV        0x8655
#define GL_VERTEX_ATTRIB_ARRAY6_NV        0x8656
#define GL_VERTEX_ATTRIB_ARRAY7_NV        0x8657
#define GL_VERTEX_ATTRIB_ARRAY8_NV        0x8658
#define GL_VERTEX_ATTRIB_ARRAY9_NV        0x8659
#define GL_VERTEX_ATTRIB_ARRAY10_NV       0x865A
#define GL_VERTEX_ATTRIB_ARRAY11_NV       0x865B
#define GL_VERTEX_ATTRIB_ARRAY12_NV       0x865C
#define GL_VERTEX_ATTRIB_ARRAY13_NV       0x865D
#define GL_VERTEX_ATTRIB_ARRAY14_NV       0x865E
#define GL_VERTEX_ATTRIB_ARRAY15_NV       0x865F
#define GL_MAP1_VERTEX_ATTRIB0_4_NV       0x8660
#define GL_MAP1_VERTEX_ATTRIB1_4_NV       0x8661
#define GL_MAP1_VERTEX_ATTRIB2_4_NV       0x8662
#define GL_MAP1_VERTEX_ATTRIB3_4_NV       0x8663
#define GL_MAP1_VERTEX_ATTRIB4_4_NV       0x8664
#define GL_MAP1_VERTEX_ATTRIB5_4_NV       0x8665
#define GL_MAP1_VERTEX_ATTRIB6_4_NV       0x8666
#define GL_MAP1_VERTEX_ATTRIB7_4_NV       0x8667
#define GL_MAP1_VERTEX_ATTRIB8_4_NV       0x8668
#define GL_MAP1_VERTEX_ATTRIB9_4_NV       0x8669
#define GL_MAP1_VERTEX_ATTRIB10_4_NV      0x866A
#define GL_MAP1_VERTEX_ATTRIB11_4_NV      0x866B
#define GL_MAP1_VERTEX_ATTRIB12_4_NV      0x866C
#define GL_MAP1_VERTEX_ATTRIB13_4_NV      0x866D
#define GL_MAP1_VERTEX_ATTRIB14_4_NV      0x866E
#define GL_MAP1_VERTEX_ATTRIB15_4_NV      0x866F
#define GL_MAP2_VERTEX_ATTRIB0_4_NV       0x8670
#define GL_MAP2_VERTEX_ATTRIB1_4_NV       0x8671
#define GL_MAP2_VERTEX_ATTRIB2_4_NV       0x8672
#define GL_MAP2_VERTEX_ATTRIB3_4_NV       0x8673
#define GL_MAP2_VERTEX_ATTRIB4_4_NV       0x8674
#define GL_MAP2_VERTEX_ATTRIB5_4_NV       0x8675
#define GL_MAP2_VERTEX_ATTRIB6_4_NV       0x8676
#define GL_MAP2_VERTEX_ATTRIB7_4_NV       0x8677
#define GL_MAP2_VERTEX_ATTRIB8_4_NV       0x8678
#define GL_MAP2_VERTEX_ATTRIB9_4_NV       0x8679
#define GL_MAP2_VERTEX_ATTRIB10_4_NV      0x867A
#define GL_MAP2_VERTEX_ATTRIB11_4_NV      0x867B
#define GL_MAP2_VERTEX_ATTRIB12_4_NV      0x867C
#define GL_MAP2_VERTEX_ATTRIB13_4_NV      0x867D
#define GL_MAP2_VERTEX_ATTRIB14_4_NV      0x867E
#define GL_MAP2_VERTEX_ATTRIB15_4_NV      0x867F

// GL_SGIX_texture_coordinate_clamp
#define GL_TEXTURE_MAX_CLAMP_S_SGIX       0x8369
#define GL_TEXTURE_MAX_CLAMP_T_SGIX       0x836A
#define GL_TEXTURE_MAX_CLAMP_R_SGIX       0x836B

// GL_SGIX_scalebias_hint
#define GL_SCALEBIAS_HINT_SGIX            0x8322

// GL_OML_interlace
#define GL_INTERLACE_OML                  0x8980
#define GL_INTERLACE_READ_OML             0x8981

// GL_OML_subsample
#define GL_FORMAT_SUBSAMPLE_24_24_OML     0x8982
#define GL_FORMAT_SUBSAMPLE_244_244_OML   0x8983

// GL_OML_resample
#define GL_PACK_RESAMPLE_OML              0x8984
#define GL_UNPACK_RESAMPLE_OML            0x8985
#define GL_RESAMPLE_REPLICATE_OML         0x8986
#define GL_RESAMPLE_ZERO_FILL_OML         0x8987
#define GL_RESAMPLE_AVERAGE_OML           0x8988
#define GL_RESAMPLE_DECIMATE_OML          0x8989

// GL_NV_copy_depth_to_color
#define GL_DEPTH_STENCIL_TO_RGBA_NV       0x886E
#define GL_DEPTH_STENCIL_TO_BGRA_NV       0x886F

// GL_ATI_envmap_bumpmap
#define GL_BUMP_ROT_MATRIX_ATI            0x8775
#define GL_BUMP_ROT_MATRIX_SIZE_ATI       0x8776
#define GL_BUMP_NUM_TEX_UNITS_ATI         0x8777
#define GL_BUMP_TEX_UNITS_ATI             0x8778
#define GL_DUDV_ATI                       0x8779
#define GL_DU8DV8_ATI                     0x877A
#define GL_BUMP_ENVMAP_ATI                0x877B
#define GL_BUMP_TARGET_ATI                0x877C

// GL_ATI_fragment_shader
#define GL_FRAGMENT_SHADER_ATI            0x8920
#define GL_REG_0_ATI                      0x8921
#define GL_REG_1_ATI                      0x8922
#define GL_REG_2_ATI                      0x8923
#define GL_REG_3_ATI                      0x8924
#define GL_REG_4_ATI                      0x8925
#define GL_REG_5_ATI                      0x8926
#define GL_REG_6_ATI                      0x8927
#define GL_REG_7_ATI                      0x8928
#define GL_REG_8_ATI                      0x8929
#define GL_REG_9_ATI                      0x892A
#define GL_REG_10_ATI                     0x892B
#define GL_REG_11_ATI                     0x892C
#define GL_REG_12_ATI                     0x892D
#define GL_REG_13_ATI                     0x892E
#define GL_REG_14_ATI                     0x892F
#define GL_REG_15_ATI                     0x8930
#define GL_REG_16_ATI                     0x8931
#define GL_REG_17_ATI                     0x8932
#define GL_REG_18_ATI                     0x8933
#define GL_REG_19_ATI                     0x8934
#define GL_REG_20_ATI                     0x8935
#define GL_REG_21_ATI                     0x8936
#define GL_REG_22_ATI                     0x8937
#define GL_REG_23_ATI                     0x8938
#define GL_REG_24_ATI                     0x8939
#define GL_REG_25_ATI                     0x893A
#define GL_REG_26_ATI                     0x893B
#define GL_REG_27_ATI                     0x893C
#define GL_REG_28_ATI                     0x893D
#define GL_REG_29_ATI                     0x893E
#define GL_REG_30_ATI                     0x893F
#define GL_REG_31_ATI                     0x8940
#define GL_CON_0_ATI                      0x8941
#define GL_CON_1_ATI                      0x8942
#define GL_CON_2_ATI                      0x8943
#define GL_CON_3_ATI                      0x8944
#define GL_CON_4_ATI                      0x8945
#define GL_CON_5_ATI                      0x8946
#define GL_CON_6_ATI                      0x8947
#define GL_CON_7_ATI                      0x8948
#define GL_CON_8_ATI                      0x8949
#define GL_CON_9_ATI                      0x894A
#define GL_CON_10_ATI                     0x894B
#define GL_CON_11_ATI                     0x894C
#define GL_CON_12_ATI                     0x894D
#define GL_CON_13_ATI                     0x894E
#define GL_CON_14_ATI                     0x894F
#define GL_CON_15_ATI                     0x8950
#define GL_CON_16_ATI                     0x8951
#define GL_CON_17_ATI                     0x8952
#define GL_CON_18_ATI                     0x8953
#define GL_CON_19_ATI                     0x8954
#define GL_CON_20_ATI                     0x8955
#define GL_CON_21_ATI                     0x8956
#define GL_CON_22_ATI                     0x8957
#define GL_CON_23_ATI                     0x8958
#define GL_CON_24_ATI                     0x8959
#define GL_CON_25_ATI                     0x895A
#define GL_CON_26_ATI                     0x895B
#define GL_CON_27_ATI                     0x895C
#define GL_CON_28_ATI                     0x895D
#define GL_CON_29_ATI                     0x895E
#define GL_CON_30_ATI                     0x895F
#define GL_CON_31_ATI                     0x8960
#define GL_MOV_ATI                        0x8961
#define GL_ADD_ATI                        0x8963
#define GL_MUL_ATI                        0x8964
#define GL_SUB_ATI                        0x8965
#define GL_DOT3_ATI                       0x8966
#define GL_DOT4_ATI                       0x8967
#define GL_MAD_ATI                        0x8968
#define GL_LERP_ATI                       0x8969
#define GL_CND_ATI                        0x896A
#define GL_CND0_ATI                       0x896B
#define GL_DOT2_ADD_ATI                   0x896C
#define GL_SECONDARY_INTERPOLATOR_ATI     0x896D
#define GL_NUM_FRAGMENT_REGISTERS_ATI     0x896E
#define GL_NUM_FRAGMENT_CONSTANTS_ATI     0x896F
#define GL_NUM_PASSES_ATI                 0x8970
#define GL_NUM_INSTRUCTIONS_PER_PASS_ATI  0x8971
#define GL_NUM_INSTRUCTIONS_TOTAL_ATI     0x8972
#define GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI 0x8973
#define GL_NUM_LOOPBACK_COMPONENTS_ATI    0x8974
#define GL_COLOR_ALPHA_PAIRING_ATI        0x8975
#define GL_SWIZZLE_STR_ATI                0x8976
#define GL_SWIZZLE_STQ_ATI                0x8977
#define GL_SWIZZLE_STR_DR_ATI             0x8978
#define GL_SWIZZLE_STQ_DQ_ATI             0x8979
#define GL_SWIZZLE_STRQ_ATI               0x897A
#define GL_SWIZZLE_STRQ_DQ_ATI            0x897B
#define GL_RED_BIT_ATI                    0x00000001
#define GL_GREEN_BIT_ATI                  0x00000002
#define GL_BLUE_BIT_ATI                   0x00000004
#define GL_2X_BIT_ATI                     0x00000001
#define GL_4X_BIT_ATI                     0x00000002
#define GL_8X_BIT_ATI                     0x00000004
#define GL_HALF_BIT_ATI                   0x00000008
#define GL_QUARTER_BIT_ATI                0x00000010
#define GL_EIGHTH_BIT_ATI                 0x00000020
#define GL_SATURATE_BIT_ATI               0x00000040
#define GL_COMP_BIT_ATI                   0x00000002
#define GL_NEGATE_BIT_ATI                 0x00000004
#define GL_BIAS_BIT_ATI                   0x00000008

// GL_ATI_pn_triangles
#define GL_PN_TRIANGLES_ATI               0x87F0
#define GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI 0x87F1
#define GL_PN_TRIANGLES_POINT_MODE_ATI    0x87F2
#define GL_PN_TRIANGLES_NORMAL_MODE_ATI   0x87F3
#define GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI 0x87F4
#define GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI 0x87F5
#define GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI 0x87F6
#define GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI 0x87F7
#define GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI 0x87F8

// GL_ATI_vertex_array_object
#define GL_STATIC_ATI                     0x8760
#define GL_DYNAMIC_ATI                    0x8761
#define GL_PRESERVE_ATI                   0x8762
#define GL_DISCARD_ATI                    0x8763
#define GL_OBJECT_BUFFER_SIZE_ATI         0x8764
#define GL_OBJECT_BUFFER_USAGE_ATI        0x8765
#define GL_ARRAY_OBJECT_BUFFER_ATI        0x8766
#define GL_ARRAY_OBJECT_OFFSET_ATI        0x8767

// GL_EXT_vertex_shader
#define GL_VERTEX_SHADER_EXT              0x8780
#define GL_VERTEX_SHADER_BINDING_EXT      0x8781
#define GL_OP_INDEX_EXT                   0x8782
#define GL_OP_NEGATE_EXT                  0x8783
#define GL_OP_DOT3_EXT                    0x8784
#define GL_OP_DOT4_EXT                    0x8785
#define GL_OP_MUL_EXT                     0x8786
#define GL_OP_ADD_EXT                     0x8787
#define GL_OP_MADD_EXT                    0x8788
#define GL_OP_FRAC_EXT                    0x8789
#define GL_OP_MAX_EXT                     0x878A
#define GL_OP_MIN_EXT                     0x878B
#define GL_OP_SET_GE_EXT                  0x878C
#define GL_OP_SET_LT_EXT                  0x878D
#define GL_OP_CLAMP_EXT                   0x878E
#define GL_OP_FLOOR_EXT                   0x878F
#define GL_OP_ROUND_EXT                   0x8790
#define GL_OP_EXP_BASE_2_EXT              0x8791
#define GL_OP_LOG_BASE_2_EXT              0x8792
#define GL_OP_POWER_EXT                   0x8793
#define GL_OP_RECIP_EXT                   0x8794
#define GL_OP_RECIP_SQRT_EXT              0x8795
#define GL_OP_SUB_EXT                     0x8796
#define GL_OP_CROSS_PRODUCT_EXT           0x8797
#define GL_OP_MULTIPLY_MATRIX_EXT         0x8798
#define GL_OP_MOV_EXT                     0x8799
#define GL_OUTPUT_VERTEX_EXT              0x879A
#define GL_OUTPUT_COLOR0_EXT              0x879B
#define GL_OUTPUT_COLOR1_EXT              0x879C
#define GL_OUTPUT_TEXTURE_COORD0_EXT      0x879D
#define GL_OUTPUT_TEXTURE_COORD1_EXT      0x879E
#define GL_OUTPUT_TEXTURE_COORD2_EXT      0x879F
#define GL_OUTPUT_TEXTURE_COORD3_EXT      0x87A0
#define GL_OUTPUT_TEXTURE_COORD4_EXT      0x87A1
#define GL_OUTPUT_TEXTURE_COORD5_EXT      0x87A2
#define GL_OUTPUT_TEXTURE_COORD6_EXT      0x87A3
#define GL_OUTPUT_TEXTURE_COORD7_EXT      0x87A4
#define GL_OUTPUT_TEXTURE_COORD8_EXT      0x87A5
#define GL_OUTPUT_TEXTURE_COORD9_EXT      0x87A6
#define GL_OUTPUT_TEXTURE_COORD10_EXT     0x87A7
#define GL_OUTPUT_TEXTURE_COORD11_EXT     0x87A8
#define GL_OUTPUT_TEXTURE_COORD12_EXT     0x87A9
#define GL_OUTPUT_TEXTURE_COORD13_EXT     0x87AA
#define GL_OUTPUT_TEXTURE_COORD14_EXT     0x87AB
#define GL_OUTPUT_TEXTURE_COORD15_EXT     0x87AC
#define GL_OUTPUT_TEXTURE_COORD16_EXT     0x87AD
#define GL_OUTPUT_TEXTURE_COORD17_EXT     0x87AE
#define GL_OUTPUT_TEXTURE_COORD18_EXT     0x87AF
#define GL_OUTPUT_TEXTURE_COORD19_EXT     0x87B0
#define GL_OUTPUT_TEXTURE_COORD20_EXT     0x87B1
#define GL_OUTPUT_TEXTURE_COORD21_EXT     0x87B2
#define GL_OUTPUT_TEXTURE_COORD22_EXT     0x87B3
#define GL_OUTPUT_TEXTURE_COORD23_EXT     0x87B4
#define GL_OUTPUT_TEXTURE_COORD24_EXT     0x87B5
#define GL_OUTPUT_TEXTURE_COORD25_EXT     0x87B6
#define GL_OUTPUT_TEXTURE_COORD26_EXT     0x87B7
#define GL_OUTPUT_TEXTURE_COORD27_EXT     0x87B8
#define GL_OUTPUT_TEXTURE_COORD28_EXT     0x87B9
#define GL_OUTPUT_TEXTURE_COORD29_EXT     0x87BA
#define GL_OUTPUT_TEXTURE_COORD30_EXT     0x87BB
#define GL_OUTPUT_TEXTURE_COORD31_EXT     0x87BC
#define GL_OUTPUT_FOG_EXT                 0x87BD
#define GL_SCALAR_EXT                     0x87BE
#define GL_VECTOR_EXT                     0x87BF
#define GL_MATRIX_EXT                     0x87C0
#define GL_VARIANT_EXT                    0x87C1
#define GL_INVARIANT_EXT                  0x87C2
#define GL_LOCAL_CONSTANT_EXT             0x87C3
#define GL_LOCAL_EXT                      0x87C4
#define GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87C5
#define GL_MAX_VERTEX_SHADER_VARIANTS_EXT 0x87C6
#define GL_MAX_VERTEX_SHADER_INVARIANTS_EXT 0x87C7
#define GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87C8
#define GL_MAX_VERTEX_SHADER_LOCALS_EXT   0x87C9
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87CA
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT 0x87CB
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87CC
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT 0x87CD
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT 0x87CE
#define GL_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87CF
#define GL_VERTEX_SHADER_VARIANTS_EXT     0x87D0
#define GL_VERTEX_SHADER_INVARIANTS_EXT   0x87D1
#define GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87D2
#define GL_VERTEX_SHADER_LOCALS_EXT       0x87D3
#define GL_VERTEX_SHADER_OPTIMIZED_EXT    0x87D4
#define GL_X_EXT                          0x87D5
#define GL_Y_EXT                          0x87D6
#define GL_Z_EXT                          0x87D7
#define GL_W_EXT                          0x87D8
#define GL_NEGATIVE_X_EXT                 0x87D9
#define GL_NEGATIVE_Y_EXT                 0x87DA
#define GL_NEGATIVE_Z_EXT                 0x87DB
#define GL_NEGATIVE_W_EXT                 0x87DC
#define GL_ZERO_EXT                       0x87DD
#define GL_ONE_EXT                        0x87DE
#define GL_NEGATIVE_ONE_EXT               0x87DF
#define GL_NORMALIZED_RANGE_EXT           0x87E0
#define GL_FULL_RANGE_EXT                 0x87E1
#define GL_CURRENT_VERTEX_EXT             0x87E2
#define GL_MVP_MATRIX_EXT                 0x87E3
#define GL_VARIANT_VALUE_EXT              0x87E4
#define GL_VARIANT_DATATYPE_EXT           0x87E5
#define GL_VARIANT_ARRAY_STRIDE_EXT       0x87E6
#define GL_VARIANT_ARRAY_TYPE_EXT         0x87E7
#define GL_VARIANT_ARRAY_EXT              0x87E8
#define GL_VARIANT_ARRAY_POINTER_EXT      0x87E9
#define GL_INVARIANT_VALUE_EXT            0x87EA
#define GL_INVARIANT_DATATYPE_EXT         0x87EB
#define GL_LOCAL_CONSTANT_VALUE_EXT       0x87EC
#define GL_LOCAL_CONSTANT_DATATYPE_EXT    0x87ED

// GL_ATI_vertex_streams
#define GL_MAX_VERTEX_STREAMS_ATI         0x876B
#define GL_VERTEX_STREAM0_ATI             0x876C
#define GL_VERTEX_STREAM1_ATI             0x876D
#define GL_VERTEX_STREAM2_ATI             0x876E
#define GL_VERTEX_STREAM3_ATI             0x876F
#define GL_VERTEX_STREAM4_ATI             0x8770
#define GL_VERTEX_STREAM5_ATI             0x8771
#define GL_VERTEX_STREAM6_ATI             0x8772
#define GL_VERTEX_STREAM7_ATI             0x8773
#define GL_VERTEX_SOURCE_ATI              0x8774

// GL_ATI_element_array
#define GL_ELEMENT_ARRAY_ATI              0x8768
#define GL_ELEMENT_ARRAY_TYPE_ATI         0x8769
#define GL_ELEMENT_ARRAY_POINTER_ATI      0x876A

// GL_SUN_mesh_array
#define GL_QUAD_MESH_SUN                  0x8614
#define GL_TRIANGLE_MESH_SUN              0x8615

// GL_SUN_slice_accum
#define GL_SLICE_ACCUM_SUN                0x85CC

// GL_NV_multisample_filter_hint
#define GL_MULTISAMPLE_FILTER_HINT_NV     0x8534

// GL_NV_depth_clamp
#define GL_DEPTH_CLAMP_NV                 0x864F

// GL_NV_occlusion_query
#define GL_PIXEL_COUNTER_BITS_NV          0x8864
#define GL_CURRENT_OCCLUSION_QUERY_ID_NV  0x8865
#define GL_PIXEL_COUNT_NV                 0x8866
#define GL_PIXEL_COUNT_AVAILABLE_NV       0x8867

// GL_NV_point_sprite
#define GL_POINT_SPRITE_NV                0x8861
#define GL_COORD_REPLACE_NV               0x8862
#define GL_POINT_SPRITE_R_MODE_NV         0x8863

// GL_NV_texture_shader3
#define GL_OFFSET_PROJECTIVE_TEXTURE_2D_NV 0x8850
#define GL_OFFSET_PROJECTIVE_TEXTURE_2D_SCALE_NV 0x8851
#define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_NV 0x8852
#define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_SCALE_NV 0x8853
#define GL_OFFSET_HILO_TEXTURE_2D_NV      0x8854
#define GL_OFFSET_HILO_TEXTURE_RECTANGLE_NV 0x8855
#define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_2D_NV 0x8856
#define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_RECTANGLE_NV 0x8857
#define GL_DEPENDENT_HILO_TEXTURE_2D_NV   0x8858
#define GL_DEPENDENT_RGB_TEXTURE_3D_NV    0x8859
#define GL_DEPENDENT_RGB_TEXTURE_CUBE_MAP_NV 0x885A
#define GL_DOT_PRODUCT_PASS_THROUGH_NV    0x885B
#define GL_DOT_PRODUCT_TEXTURE_1D_NV      0x885C
#define GL_DOT_PRODUCT_AFFINE_DEPTH_REPLACE_NV 0x885D
#define GL_HILO8_NV                       0x885E
#define GL_SIGNED_HILO8_NV                0x885F
#define GL_FORCE_BLUE_TO_ONE_NV           0x8860

// GL_NV_vertex_program1_1

// GL_EXT_shadow_funcs

// GL_EXT_stencil_two_side
#define GL_STENCIL_TEST_TWO_SIDE_EXT      0x8910
#define GL_ACTIVE_STENCIL_FACE_EXT        0x8911

// GL_ATI_text_fragment_shader
#define GL_TEXT_FRAGMENT_SHADER_ATI       0x8200

// GL_APPLE_client_storage
#define GL_UNPACK_CLIENT_STORAGE_APPLE    0x85B2

// GL_APPLE_element_array
#define GL_ELEMENT_ARRAY_APPLE            0x8A0C
#define GL_ELEMENT_ARRAY_TYPE_APPLE       0x8A0D
#define GL_ELEMENT_ARRAY_POINTER_APPLE    0x8A0E

// GL_APPLE_fence
#define GL_DRAW_PIXELS_APPLE              0x8A0A
#define GL_FENCE_APPLE                    0x8A0B

// GL_APPLE_vertex_array_object
#define GL_VERTEX_ARRAY_BINDING_APPLE     0x85B5

// GL_APPLE_vertex_array_range
#define GL_VERTEX_ARRAY_RANGE_APPLE       0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_APPLE 0x851E
#define GL_VERTEX_ARRAY_STORAGE_HINT_APPLE 0x851F
#define GL_VERTEX_ARRAY_RANGE_POINTER_APPLE 0x8521
#define GL_STORAGE_CLIENT_APPLE           0x85B4
#define GL_STORAGE_CACHED_APPLE           0x85BE
#define GL_STORAGE_SHARED_APPLE           0x85BF

// GL_APPLE_ycbcr_422
#define GL_YCBCR_422_APPLE                0x85B9
#define GL_UNSIGNED_SHORT_8_8_APPLE       0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE   0x85BB

// GL_S3_s3tc
#define GL_RGB_S3TC                       0x83A0
#define GL_RGB4_S3TC                      0x83A1
#define GL_RGBA_S3TC                      0x83A2
#define GL_RGBA4_S3TC                     0x83A3

// GL_ATI_draw_buffers
#define GL_MAX_DRAW_BUFFERS_ATI           0x8824
#define GL_DRAW_BUFFER0_ATI               0x8825
#define GL_DRAW_BUFFER1_ATI               0x8826
#define GL_DRAW_BUFFER2_ATI               0x8827
#define GL_DRAW_BUFFER3_ATI               0x8828
#define GL_DRAW_BUFFER4_ATI               0x8829
#define GL_DRAW_BUFFER5_ATI               0x882A
#define GL_DRAW_BUFFER6_ATI               0x882B
#define GL_DRAW_BUFFER7_ATI               0x882C
#define GL_DRAW_BUFFER8_ATI               0x882D
#define GL_DRAW_BUFFER9_ATI               0x882E
#define GL_DRAW_BUFFER10_ATI              0x882F
#define GL_DRAW_BUFFER11_ATI              0x8830
#define GL_DRAW_BUFFER12_ATI              0x8831
#define GL_DRAW_BUFFER13_ATI              0x8832
#define GL_DRAW_BUFFER14_ATI              0x8833
#define GL_DRAW_BUFFER15_ATI              0x8834

// GL_ATI_pixel_format_float
#define GL_TYPE_RGBA_FLOAT_ATI            0x8820
#define GL_COLOR_CLEAR_UNCLAMPED_VALUE_ATI 0x8835

// GL_ATI_texture_env_combine3
#define GL_MODULATE_ADD_ATI               0x8744
#define GL_MODULATE_SIGNED_ADD_ATI        0x8745
#define GL_MODULATE_SUBTRACT_ATI          0x8746

// GL_ATI_texture_float
#define GL_RGBA_FLOAT32_ATI               0x8814
#define GL_RGB_FLOAT32_ATI                0x8815
#define GL_ALPHA_FLOAT32_ATI              0x8816
#define GL_INTENSITY_FLOAT32_ATI          0x8817
#define GL_LUMINANCE_FLOAT32_ATI          0x8818
#define GL_LUMINANCE_ALPHA_FLOAT32_ATI    0x8819
#define GL_RGBA_FLOAT16_ATI               0x881A
#define GL_RGB_FLOAT16_ATI                0x881B
#define GL_ALPHA_FLOAT16_ATI              0x881C
#define GL_INTENSITY_FLOAT16_ATI          0x881D
#define GL_LUMINANCE_FLOAT16_ATI          0x881E
#define GL_LUMINANCE_ALPHA_FLOAT16_ATI    0x881F

// GL_NV_float_buffer
#define GL_FLOAT_R_NV                     0x8880
#define GL_FLOAT_RG_NV                    0x8881
#define GL_FLOAT_RGB_NV                   0x8882
#define GL_FLOAT_RGBA_NV                  0x8883
#define GL_FLOAT_R16_NV                   0x8884
#define GL_FLOAT_R32_NV                   0x8885
#define GL_FLOAT_RG16_NV                  0x8886
#define GL_FLOAT_RG32_NV                  0x8887
#define GL_FLOAT_RGB16_NV                 0x8888
#define GL_FLOAT_RGB32_NV                 0x8889
#define GL_FLOAT_RGBA16_NV                0x888A
#define GL_FLOAT_RGBA32_NV                0x888B
#define GL_TEXTURE_FLOAT_COMPONENTS_NV    0x888C
#define GL_FLOAT_CLEAR_COLOR_VALUE_NV     0x888D
#define GL_FLOAT_RGBA_MODE_NV             0x888E

// GL_NV_fragment_program
#define GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV 0x8868
#define GL_FRAGMENT_PROGRAM_NV            0x8870
#define GL_MAX_TEXTURE_COORDS_NV          0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_NV     0x8872
#define GL_FRAGMENT_PROGRAM_BINDING_NV    0x8873
#define GL_PROGRAM_ERROR_STRING_NV        0x8874

// GL_NV_half_float
#define GL_HALF_FLOAT_NV                  0x140B
typedef unsigned short GLhalfNV;

// GL_NV_pixel_data_range
#define GL_WRITE_PIXEL_DATA_RANGE_NV      0x8878
#define GL_READ_PIXEL_DATA_RANGE_NV       0x8879
#define GL_WRITE_PIXEL_DATA_RANGE_LENGTH_NV 0x887A
#define GL_READ_PIXEL_DATA_RANGE_LENGTH_NV 0x887B
#define GL_WRITE_PIXEL_DATA_RANGE_POINTER_NV 0x887C
#define GL_READ_PIXEL_DATA_RANGE_POINTER_NV 0x887D

// GL_NV_primitive_restart
#define GL_PRIMITIVE_RESTART_NV           0x8558
#define GL_PRIMITIVE_RESTART_INDEX_NV     0x8559

// GL_NV_texture_expand_normal
#define GL_TEXTURE_UNSIGNED_REMAP_MODE_NV 0x888F

// GL_NV_vertex_program2

// GL_ATI_map_object_buffer

// GL_ATI_separate_stencil
#define GL_STENCIL_BACK_FUNC_ATI          0x8800
#define GL_STENCIL_BACK_FAIL_ATI          0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI 0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI 0x8803

// GL_ATI_vertex_attrib_array_object

// GL_OES_read_format
#define GL_IMPLEMENTATION_COLOR_READ_TYPE_OES 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES 0x8B9B

// GL_EXT_depth_bounds_test
#define GL_DEPTH_BOUNDS_TEST_EXT          0x8890
#define GL_DEPTH_BOUNDS_EXT               0x8891

// GL_EXT_texture_mirror_clamp
#define GL_MIRROR_CLAMP_EXT               0x8742
#define GL_MIRROR_CLAMP_TO_EDGE_EXT       0x8743
#define GL_MIRROR_CLAMP_TO_BORDER_EXT     0x8912

// GL_EXT_blend_equation_separate
#define GL_BLEND_EQUATION_RGB_EXT         0x8009
#define GL_BLEND_EQUATION_ALPHA_EXT       0x883D

// GL_MESA_pack_invert
#define GL_PACK_INVERT_MESA               0x8758

// GL_MESA_ycbcr_texture
#define GL_UNSIGNED_SHORT_8_8_MESA        0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_MESA    0x85BB
#define GL_YCBCR_MESA                     0x8757

// GL_EXT_pixel_buffer_object
#define GL_PIXEL_PACK_BUFFER_EXT          0x88EB
#define GL_PIXEL_UNPACK_BUFFER_EXT        0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_EXT  0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_EXT 0x88EF

// GL_NV_fragment_program_option

// GL_NV_fragment_program2
#define GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV 0x88F4
#define GL_MAX_PROGRAM_CALL_DEPTH_NV      0x88F5
#define GL_MAX_PROGRAM_IF_DEPTH_NV        0x88F6
#define GL_MAX_PROGRAM_LOOP_DEPTH_NV      0x88F7
#define GL_MAX_PROGRAM_LOOP_COUNT_NV      0x88F8

// GL_NV_vertex_program2_option
/* reuse GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV */
/* reuse GL_MAX_PROGRAM_CALL_DEPTH_NV */

// GL_NV_vertex_program3
/* reuse GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB */

// GL_EXT_framebuffer_object
#define GL_INVALID_FRAMEBUFFER_OPERATION_EXT 0x0506
#define GL_MAX_RENDERBUFFER_SIZE_EXT      0x84E8
#define GL_FRAMEBUFFER_BINDING_EXT        0x8CA6
#define GL_RENDERBUFFER_BINDING_EXT       0x8CA7
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT 0x8CD4
#define GL_FRAMEBUFFER_COMPLETE_EXT       0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT 0x8CD9
#define GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT 0x8CDA
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT 0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED_EXT    0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS_EXT      0x8CDF
#define GL_COLOR_ATTACHMENT0_EXT          0x8CE0
#define GL_COLOR_ATTACHMENT1_EXT          0x8CE1
#define GL_COLOR_ATTACHMENT2_EXT          0x8CE2
#define GL_COLOR_ATTACHMENT3_EXT          0x8CE3
#define GL_COLOR_ATTACHMENT4_EXT          0x8CE4
#define GL_COLOR_ATTACHMENT5_EXT          0x8CE5
#define GL_COLOR_ATTACHMENT6_EXT          0x8CE6
#define GL_COLOR_ATTACHMENT7_EXT          0x8CE7
#define GL_COLOR_ATTACHMENT8_EXT          0x8CE8
#define GL_COLOR_ATTACHMENT9_EXT          0x8CE9
#define GL_COLOR_ATTACHMENT10_EXT         0x8CEA
#define GL_COLOR_ATTACHMENT11_EXT         0x8CEB
#define GL_COLOR_ATTACHMENT12_EXT         0x8CEC
#define GL_COLOR_ATTACHMENT13_EXT         0x8CED
#define GL_COLOR_ATTACHMENT14_EXT         0x8CEE
#define GL_COLOR_ATTACHMENT15_EXT         0x8CEF
#define GL_DEPTH_ATTACHMENT_EXT           0x8D00
#define GL_STENCIL_ATTACHMENT_EXT         0x8D20
#define GL_FRAMEBUFFER_EXT                0x8D40
#define GL_RENDERBUFFER_EXT               0x8D41
#define GL_RENDERBUFFER_WIDTH_EXT         0x8D42
#define GL_RENDERBUFFER_HEIGHT_EXT        0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT_EXT 0x8D44
#define GL_STENCIL_INDEX1_EXT             0x8D46
#define GL_STENCIL_INDEX4_EXT             0x8D47
#define GL_STENCIL_INDEX8_EXT             0x8D48
#define GL_STENCIL_INDEX16_EXT            0x8D49
#define GL_RENDERBUFFER_RED_SIZE_EXT      0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE_EXT    0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE_EXT     0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE_EXT    0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE_EXT    0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE_EXT  0x8D55

// GL_GREMEDY_string_marker

// GL_EXT_packed_depth_stencil
#define GL_DEPTH_STENCIL_EXT              0x84F9
#define GL_UNSIGNED_INT_24_8_EXT          0x84FA
#define GL_DEPTH24_STENCIL8_EXT           0x88F0
#define GL_TEXTURE_STENCIL_SIZE_EXT       0x88F1

// GL_EXT_stencil_clear_tag
#define GL_STENCIL_TAG_BITS_EXT           0x88F2
#define GL_STENCIL_CLEAR_TAG_VALUE_EXT    0x88F3

// GL_EXT_texture_sRGB
#define GL_SRGB_EXT                       0x8C40
#define GL_SRGB8_EXT                      0x8C41
#define GL_SRGB_ALPHA_EXT                 0x8C42
#define GL_SRGB8_ALPHA8_EXT               0x8C43
#define GL_SLUMINANCE_ALPHA_EXT           0x8C44
#define GL_SLUMINANCE8_ALPHA8_EXT         0x8C45
#define GL_SLUMINANCE_EXT                 0x8C46
#define GL_SLUMINANCE8_EXT                0x8C47
#define GL_COMPRESSED_SRGB_EXT            0x8C48
#define GL_COMPRESSED_SRGB_ALPHA_EXT      0x8C49
#define GL_COMPRESSED_SLUMINANCE_EXT      0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA_EXT 0x8C4B
#define GL_COMPRESSED_SRGB_S3TC_DXT1_EXT  0x8C4C
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT 0x8C4D
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT 0x8C4E
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT 0x8C4F

// GL_EXT_framebuffer_blit
#define GL_READ_FRAMEBUFFER_EXT           0x8CA8
#define GL_DRAW_FRAMEBUFFER_EXT           0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_EXT   GL_FRAMEBUFFER_BINDING_EXT
#define GL_READ_FRAMEBUFFER_BINDING_EXT   0x8CAA

// GL_EXT_framebuffer_multisample
#define GL_RENDERBUFFER_SAMPLES_EXT       0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT 0x8D56
#define GL_MAX_SAMPLES_EXT                0x8D57

// GL_MESAX_texture_stack
#define GL_TEXTURE_1D_STACK_MESAX         0x8759
#define GL_TEXTURE_2D_STACK_MESAX         0x875A
#define GL_PROXY_TEXTURE_1D_STACK_MESAX   0x875B
#define GL_PROXY_TEXTURE_2D_STACK_MESAX   0x875C
#define GL_TEXTURE_1D_STACK_BINDING_MESAX 0x875D
#define GL_TEXTURE_2D_STACK_BINDING_MESAX 0x875E

// GL_EXT_timer_query
#define GL_TIME_ELAPSED_EXT               0x88BF
typedef int64_t GLint64EXT;
typedef uint64_t GLuint64EXT;

// GL_EXT_gpu_program_parameters

// GL_APPLE_flush_buffer_range
#define GL_BUFFER_SERIALIZED_MODIFY_APPLE 0x8A12
#define GL_BUFFER_FLUSHING_UNMAP_APPLE    0x8A13

// GL_NV_gpu_program4
#define GL_MIN_PROGRAM_TEXEL_OFFSET_NV    0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET_NV    0x8905
#define GL_PROGRAM_ATTRIB_COMPONENTS_NV   0x8906
#define GL_PROGRAM_RESULT_COMPONENTS_NV   0x8907
#define GL_MAX_PROGRAM_ATTRIB_COMPONENTS_NV 0x8908
#define GL_MAX_PROGRAM_RESULT_COMPONENTS_NV 0x8909
#define GL_MAX_PROGRAM_GENERIC_ATTRIBS_NV 0x8DA5
#define GL_MAX_PROGRAM_GENERIC_RESULTS_NV 0x8DA6

// GL_NV_geometry_program4
#define GL_LINES_ADJACENCY_EXT            0x000A
#define GL_LINE_STRIP_ADJACENCY_EXT       0x000B
#define GL_TRIANGLES_ADJACENCY_EXT        0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_EXT   0x000D
#define GL_GEOMETRY_PROGRAM_NV            0x8C26
#define GL_MAX_PROGRAM_OUTPUT_VERTICES_NV 0x8C27
#define GL_MAX_PROGRAM_TOTAL_OUTPUT_COMPONENTS_NV 0x8C28
#define GL_GEOMETRY_VERTICES_OUT_EXT      0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_EXT        0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_EXT       0x8DDC
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT 0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT 0x8DA9
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT 0x8CD4
#define GL_PROGRAM_POINT_SIZE_EXT         0x8642

// GL_EXT_geometry_shader4
#define GL_GEOMETRY_SHADER_EXT            0x8DD9
/* reuse GL_GEOMETRY_VERTICES_OUT_EXT */
/* reuse GL_GEOMETRY_INPUT_TYPE_EXT */
/* reuse GL_GEOMETRY_OUTPUT_TYPE_EXT */
/* reuse GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT */
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_EXT 0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_EXT 0x8DDE
#define GL_MAX_VARYING_COMPONENTS_EXT     0x8B4B
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT 0x8DE1
/* reuse GL_LINES_ADJACENCY_EXT */
/* reuse GL_LINE_STRIP_ADJACENCY_EXT */
/* reuse GL_TRIANGLES_ADJACENCY_EXT */
/* reuse GL_TRIANGLE_STRIP_ADJACENCY_EXT */
/* reuse GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT */
/* reuse GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT */
/* reuse GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT */
/* reuse GL_PROGRAM_POINT_SIZE_EXT */

// GL_NV_vertex_program4
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER_NV 0x88FD

// GL_EXT_gpu_shader4
#define GL_SAMPLER_1D_ARRAY_EXT           0x8DC0
#define GL_SAMPLER_2D_ARRAY_EXT           0x8DC1
#define GL_SAMPLER_BUFFER_EXT             0x8DC2
#define GL_SAMPLER_1D_ARRAY_SHADOW_EXT    0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW_EXT    0x8DC4
#define GL_SAMPLER_CUBE_SHADOW_EXT        0x8DC5
#define GL_UNSIGNED_INT_VEC2_EXT          0x8DC6
#define GL_UNSIGNED_INT_VEC3_EXT          0x8DC7
#define GL_UNSIGNED_INT_VEC4_EXT          0x8DC8
#define GL_INT_SAMPLER_1D_EXT             0x8DC9
#define GL_INT_SAMPLER_2D_EXT             0x8DCA
#define GL_INT_SAMPLER_3D_EXT             0x8DCB
#define GL_INT_SAMPLER_CUBE_EXT           0x8DCC
#define GL_INT_SAMPLER_2D_RECT_EXT        0x8DCD
#define GL_INT_SAMPLER_1D_ARRAY_EXT       0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY_EXT       0x8DCF
#define GL_INT_SAMPLER_BUFFER_EXT         0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_1D_EXT    0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D_EXT    0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D_EXT    0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE_EXT  0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT_EXT 0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY_EXT 0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY_EXT 0x8DD7
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT 0x8DD8

// GL_EXT_draw_instanced

// GL_EXT_packed_float
#define GL_R11F_G11F_B10F_EXT             0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV_EXT 0x8C3B
#define GL_RGBA_SIGNED_COMPONENTS_EXT     0x8C3C

// GL_EXT_texture_array
#define GL_TEXTURE_1D_ARRAY_EXT           0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY_EXT     0x8C19
#define GL_TEXTURE_2D_ARRAY_EXT           0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY_EXT     0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY_EXT   0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY_EXT   0x8C1D
#define GL_MAX_ARRAY_TEXTURE_LAYERS_EXT   0x88FF
#define GL_COMPARE_REF_DEPTH_TO_TEXTURE_EXT 0x884E
/* reuse GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT */

// GL_EXT_texture_buffer_object
#define GL_TEXTURE_BUFFER_EXT             0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_EXT    0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_EXT     0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT 0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT_EXT      0x8C2E

// GL_EXT_texture_compression_latc
#define GL_COMPRESSED_LUMINANCE_LATC1_EXT 0x8C70
#define GL_COMPRESSED_SIGNED_LUMINANCE_LATC1_EXT 0x8C71
#define GL_COMPRESSED_LUMINANCE_ALPHA_LATC2_EXT 0x8C72
#define GL_COMPRESSED_SIGNED_LUMINANCE_ALPHA_LATC2_EXT 0x8C73

// GL_EXT_texture_compression_rgtc
#define GL_COMPRESSED_RED_RGTC1_EXT       0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1_EXT 0x8DBC
#define GL_COMPRESSED_RED_GREEN_RGTC2_EXT 0x8DBD
#define GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT 0x8DBE

// GL_EXT_texture_shared_exponent
#define GL_RGB9_E5_EXT                    0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV_EXT   0x8C3E
#define GL_TEXTURE_SHARED_SIZE_EXT        0x8C3F

// GL_NV_depth_buffer_float
#define GL_DEPTH_COMPONENT32F_NV          0x8DAB
#define GL_DEPTH32F_STENCIL8_NV           0x8DAC
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV 0x8DAD
#define GL_DEPTH_BUFFER_FLOAT_MODE_NV     0x8DAF

// GL_NV_fragment_program4

// GL_NV_framebuffer_multisample_coverage
#define GL_RENDERBUFFER_COVERAGE_SAMPLES_NV 0x8CAB
#define GL_RENDERBUFFER_COLOR_SAMPLES_NV  0x8E10
#define GL_MAX_MULTISAMPLE_COVERAGE_MODES_NV 0x8E11
#define GL_MULTISAMPLE_COVERAGE_MODES_NV  0x8E12

// GL_EXT_framebuffer_sRGB
#define GL_FRAMEBUFFER_SRGB_EXT           0x8DB9
#define GL_FRAMEBUFFER_SRGB_CAPABLE_EXT   0x8DBA

// GL_NV_geometry_shader4

// GL_NV_parameter_buffer_object
#define GL_MAX_PROGRAM_PARAMETER_BUFFER_BINDINGS_NV 0x8DA0
#define GL_MAX_PROGRAM_PARAMETER_BUFFER_SIZE_NV 0x8DA1
#define GL_VERTEX_PROGRAM_PARAMETER_BUFFER_NV 0x8DA2
#define GL_GEOMETRY_PROGRAM_PARAMETER_BUFFER_NV 0x8DA3
#define GL_FRAGMENT_PROGRAM_PARAMETER_BUFFER_NV 0x8DA4

// GL_EXT_draw_buffers2

// GL_NV_transform_feedback
#define GL_BACK_PRIMARY_COLOR_NV          0x8C77
#define GL_BACK_SECONDARY_COLOR_NV        0x8C78
#define GL_TEXTURE_COORD_NV               0x8C79
#define GL_CLIP_DISTANCE_NV               0x8C7A
#define GL_VERTEX_ID_NV                   0x8C7B
#define GL_PRIMITIVE_ID_NV                0x8C7C
#define GL_GENERIC_ATTRIB_NV              0x8C7D
#define GL_TRANSFORM_FEEDBACK_ATTRIBS_NV  0x8C7E
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE_NV 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_NV 0x8C80
#define GL_ACTIVE_VARYINGS_NV             0x8C81
#define GL_ACTIVE_VARYING_MAX_LENGTH_NV   0x8C82
#define GL_TRANSFORM_FEEDBACK_VARYINGS_NV 0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START_NV 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_NV 0x8C85
#define GL_TRANSFORM_FEEDBACK_RECORD_NV   0x8C86
#define GL_PRIMITIVES_GENERATED_NV        0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_NV 0x8C88
#define GL_RASTERIZER_DISCARD_NV          0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_ATTRIBS_NV 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_NV 0x8C8B
#define GL_INTERLEAVED_ATTRIBS_NV         0x8C8C
#define GL_SEPARATE_ATTRIBS_NV            0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER_NV   0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_NV 0x8C8F
#define GL_LAYER_NV                       0x8DAA
#define GL_NEXT_BUFFER_NV                 -2
#define GL_SKIP_COMPONENTS4_NV            -3
#define GL_SKIP_COMPONENTS3_NV            -4
#define GL_SKIP_COMPONENTS2_NV            -5
#define GL_SKIP_COMPONENTS1_NV            -6

// GL_EXT_bindable_uniform
#define GL_MAX_VERTEX_BINDABLE_UNIFORMS_EXT 0x8DE2
#define GL_MAX_FRAGMENT_BINDABLE_UNIFORMS_EXT 0x8DE3
#define GL_MAX_GEOMETRY_BINDABLE_UNIFORMS_EXT 0x8DE4
#define GL_MAX_BINDABLE_UNIFORM_SIZE_EXT  0x8DED
#define GL_UNIFORM_BUFFER_EXT             0x8DEE
#define GL_UNIFORM_BUFFER_BINDING_EXT     0x8DEF

// GL_EXT_texture_integer
#define GL_RGBA32UI_EXT                   0x8D70
#define GL_RGB32UI_EXT                    0x8D71
#define GL_ALPHA32UI_EXT                  0x8D72
#define GL_INTENSITY32UI_EXT              0x8D73
#define GL_LUMINANCE32UI_EXT              0x8D74
#define GL_LUMINANCE_ALPHA32UI_EXT        0x8D75
#define GL_RGBA16UI_EXT                   0x8D76
#define GL_RGB16UI_EXT                    0x8D77
#define GL_ALPHA16UI_EXT                  0x8D78
#define GL_INTENSITY16UI_EXT              0x8D79
#define GL_LUMINANCE16UI_EXT              0x8D7A
#define GL_LUMINANCE_ALPHA16UI_EXT        0x8D7B
#define GL_RGBA8UI_EXT                    0x8D7C
#define GL_RGB8UI_EXT                     0x8D7D
#define GL_ALPHA8UI_EXT                   0x8D7E
#define GL_INTENSITY8UI_EXT               0x8D7F
#define GL_LUMINANCE8UI_EXT               0x8D80
#define GL_LUMINANCE_ALPHA8UI_EXT         0x8D81
#define GL_RGBA32I_EXT                    0x8D82
#define GL_RGB32I_EXT                     0x8D83
#define GL_ALPHA32I_EXT                   0x8D84
#define GL_INTENSITY32I_EXT               0x8D85
#define GL_LUMINANCE32I_EXT               0x8D86
#define GL_LUMINANCE_ALPHA32I_EXT         0x8D87
#define GL_RGBA16I_EXT                    0x8D88
#define GL_RGB16I_EXT                     0x8D89
#define GL_ALPHA16I_EXT                   0x8D8A
#define GL_INTENSITY16I_EXT               0x8D8B
#define GL_LUMINANCE16I_EXT               0x8D8C
#define GL_LUMINANCE_ALPHA16I_EXT         0x8D8D
#define GL_RGBA8I_EXT                     0x8D8E
#define GL_RGB8I_EXT                      0x8D8F
#define GL_ALPHA8I_EXT                    0x8D90
#define GL_INTENSITY8I_EXT                0x8D91
#define GL_LUMINANCE8I_EXT                0x8D92
#define GL_LUMINANCE_ALPHA8I_EXT          0x8D93
#define GL_RED_INTEGER_EXT                0x8D94
#define GL_GREEN_INTEGER_EXT              0x8D95
#define GL_BLUE_INTEGER_EXT               0x8D96
#define GL_ALPHA_INTEGER_EXT              0x8D97
#define GL_RGB_INTEGER_EXT                0x8D98
#define GL_RGBA_INTEGER_EXT               0x8D99
#define GL_BGR_INTEGER_EXT                0x8D9A
#define GL_BGRA_INTEGER_EXT               0x8D9B
#define GL_LUMINANCE_INTEGER_EXT          0x8D9C
#define GL_LUMINANCE_ALPHA_INTEGER_EXT    0x8D9D
#define GL_RGBA_INTEGER_MODE_EXT          0x8D9E

// GL_GREMEDY_frame_terminator

// GL_NV_conditional_render
#define GL_QUERY_WAIT_NV                  0x8E13
#define GL_QUERY_NO_WAIT_NV               0x8E14
#define GL_QUERY_BY_REGION_WAIT_NV        0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT_NV     0x8E16

// GL_NV_present_video
#define GL_FRAME_NV                       0x8E26
#define GL_FIELDS_NV                      0x8E27
#define GL_CURRENT_TIME_NV                0x8E28
#define GL_NUM_FILL_STREAMS_NV            0x8E29
#define GL_PRESENT_TIME_NV                0x8E2A
#define GL_PRESENT_DURATION_NV            0x8E2B

// GL_EXT_transform_feedback
#define GL_TRANSFORM_FEEDBACK_BUFFER_EXT  0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_START_EXT 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_EXT 0x8C85
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_EXT 0x8C8F
#define GL_INTERLEAVED_ATTRIBS_EXT        0x8C8C
#define GL_SEPARATE_ATTRIBS_EXT           0x8C8D
#define GL_PRIMITIVES_GENERATED_EXT       0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_EXT 0x8C88
#define GL_RASTERIZER_DISCARD_EXT         0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_EXT 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_EXT 0x8C8B
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_EXT 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS_EXT 0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE_EXT 0x8C7F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH_EXT 0x8C76

// GL_EXT_direct_state_access
#define GL_PROGRAM_MATRIX_EXT             0x8E2D
#define GL_TRANSPOSE_PROGRAM_MATRIX_EXT   0x8E2E
#define GL_PROGRAM_MATRIX_STACK_DEPTH_EXT 0x8E2F

// GL_EXT_vertex_array_bgra
/* reuse GL_BGRA */

// GL_EXT_texture_swizzle
#define GL_TEXTURE_SWIZZLE_R_EXT          0x8E42
#define GL_TEXTURE_SWIZZLE_G_EXT          0x8E43
#define GL_TEXTURE_SWIZZLE_B_EXT          0x8E44
#define GL_TEXTURE_SWIZZLE_A_EXT          0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA_EXT       0x8E46

// GL_NV_explicit_multisample
#define GL_SAMPLE_POSITION_NV             0x8E50
#define GL_SAMPLE_MASK_NV                 0x8E51
#define GL_SAMPLE_MASK_VALUE_NV           0x8E52
#define GL_TEXTURE_BINDING_RENDERBUFFER_NV 0x8E53
#define GL_TEXTURE_RENDERBUFFER_DATA_STORE_BINDING_NV 0x8E54
#define GL_TEXTURE_RENDERBUFFER_NV        0x8E55
#define GL_SAMPLER_RENDERBUFFER_NV        0x8E56
#define GL_INT_SAMPLER_RENDERBUFFER_NV    0x8E57
#define GL_UNSIGNED_INT_SAMPLER_RENDERBUFFER_NV 0x8E58
#define GL_MAX_SAMPLE_MASK_WORDS_NV       0x8E59

// GL_NV_transform_feedback2
#define GL_TRANSFORM_FEEDBACK_NV          0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED_NV 0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE_NV 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING_NV  0x8E25

// GL_ATI_meminfo
#define GL_VBO_FREE_MEMORY_ATI            0x87FB
#define GL_TEXTURE_FREE_MEMORY_ATI        0x87FC
#define GL_RENDERBUFFER_FREE_MEMORY_ATI   0x87FD

// GL_AMD_performance_monitor
#define GL_COUNTER_TYPE_AMD               0x8BC0
#define GL_COUNTER_RANGE_AMD              0x8BC1
#define GL_UNSIGNED_INT64_AMD             0x8BC2
#define GL_PERCENTAGE_AMD                 0x8BC3
#define GL_PERFMON_RESULT_AVAILABLE_AMD   0x8BC4
#define GL_PERFMON_RESULT_SIZE_AMD        0x8BC5
#define GL_PERFMON_RESULT_AMD             0x8BC6

// GL_AMD_texture_texture4

// GL_AMD_vertex_shader_tesselator
#define GL_SAMPLER_BUFFER_AMD             0x9001
#define GL_INT_SAMPLER_BUFFER_AMD         0x9002
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_AMD 0x9003
#define GL_TESSELLATION_MODE_AMD          0x9004
#define GL_TESSELLATION_FACTOR_AMD        0x9005
#define GL_DISCRETE_AMD                   0x9006
#define GL_CONTINUOUS_AMD                 0x9007

// GL_EXT_provoking_vertex
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION_EXT 0x8E4C
#define GL_FIRST_VERTEX_CONVENTION_EXT    0x8E4D
#define GL_LAST_VERTEX_CONVENTION_EXT     0x8E4E
#define GL_PROVOKING_VERTEX_EXT           0x8E4F

// GL_EXT_texture_snorm
#define GL_ALPHA_SNORM                    0x9010
#define GL_LUMINANCE_SNORM                0x9011
#define GL_LUMINANCE_ALPHA_SNORM          0x9012
#define GL_INTENSITY_SNORM                0x9013
#define GL_ALPHA8_SNORM                   0x9014
#define GL_LUMINANCE8_SNORM               0x9015
#define GL_LUMINANCE8_ALPHA8_SNORM        0x9016
#define GL_INTENSITY8_SNORM               0x9017
#define GL_ALPHA16_SNORM                  0x9018
#define GL_LUMINANCE16_SNORM              0x9019
#define GL_LUMINANCE16_ALPHA16_SNORM      0x901A
#define GL_INTENSITY16_SNORM              0x901B
/* reuse GL_RED_SNORM */
/* reuse GL_RG_SNORM */
/* reuse GL_RGB_SNORM */
/* reuse GL_RGBA_SNORM */
/* reuse GL_R8_SNORM */
/* reuse GL_RG8_SNORM */
/* reuse GL_RGB8_SNORM */
/* reuse GL_RGBA8_SNORM */
/* reuse GL_R16_SNORM */
/* reuse GL_RG16_SNORM */
/* reuse GL_RGB16_SNORM */
/* reuse GL_RGBA16_SNORM */
/* reuse GL_SIGNED_NORMALIZED */

// GL_AMD_draw_buffers_blend

// GL_APPLE_texture_range
#define GL_TEXTURE_RANGE_LENGTH_APPLE     0x85B7
#define GL_TEXTURE_RANGE_POINTER_APPLE    0x85B8
#define GL_TEXTURE_STORAGE_HINT_APPLE     0x85BC
#define GL_STORAGE_PRIVATE_APPLE          0x85BD
/* reuse GL_STORAGE_CACHED_APPLE */
/* reuse GL_STORAGE_SHARED_APPLE */

// GL_APPLE_float_pixels
#define GL_HALF_APPLE                     0x140B
#define GL_RGBA_FLOAT32_APPLE             0x8814
#define GL_RGB_FLOAT32_APPLE              0x8815
#define GL_ALPHA_FLOAT32_APPLE            0x8816
#define GL_INTENSITY_FLOAT32_APPLE        0x8817
#define GL_LUMINANCE_FLOAT32_APPLE        0x8818
#define GL_LUMINANCE_ALPHA_FLOAT32_APPLE  0x8819
#define GL_RGBA_FLOAT16_APPLE             0x881A
#define GL_RGB_FLOAT16_APPLE              0x881B
#define GL_ALPHA_FLOAT16_APPLE            0x881C
#define GL_INTENSITY_FLOAT16_APPLE        0x881D
#define GL_LUMINANCE_FLOAT16_APPLE        0x881E
#define GL_LUMINANCE_ALPHA_FLOAT16_APPLE  0x881F
#define GL_COLOR_FLOAT_APPLE              0x8A0F

// GL_APPLE_vertex_program_evaluators
#define GL_VERTEX_ATTRIB_MAP1_APPLE       0x8A00
#define GL_VERTEX_ATTRIB_MAP2_APPLE       0x8A01
#define GL_VERTEX_ATTRIB_MAP1_SIZE_APPLE  0x8A02
#define GL_VERTEX_ATTRIB_MAP1_COEFF_APPLE 0x8A03
#define GL_VERTEX_ATTRIB_MAP1_ORDER_APPLE 0x8A04
#define GL_VERTEX_ATTRIB_MAP1_DOMAIN_APPLE 0x8A05
#define GL_VERTEX_ATTRIB_MAP2_SIZE_APPLE  0x8A06
#define GL_VERTEX_ATTRIB_MAP2_COEFF_APPLE 0x8A07
#define GL_VERTEX_ATTRIB_MAP2_ORDER_APPLE 0x8A08
#define GL_VERTEX_ATTRIB_MAP2_DOMAIN_APPLE 0x8A09

// GL_APPLE_aux_depth_stencil
#define GL_AUX_DEPTH_STENCIL_APPLE        0x8A14

// GL_APPLE_object_purgeable
#define GL_BUFFER_OBJECT_APPLE            0x85B3
#define GL_RELEASED_APPLE                 0x8A19
#define GL_VOLATILE_APPLE                 0x8A1A
#define GL_RETAINED_APPLE                 0x8A1B
#define GL_UNDEFINED_APPLE                0x8A1C
#define GL_PURGEABLE_APPLE                0x8A1D

// GL_APPLE_row_bytes
#define GL_PACK_ROW_BYTES_APPLE           0x8A15
#define GL_UNPACK_ROW_BYTES_APPLE         0x8A16

// GL_APPLE_rgb_422
#define GL_RGB_422_APPLE                  0x8A1F
/* reuse GL_UNSIGNED_SHORT_8_8_APPLE */
/* reuse GL_UNSIGNED_SHORT_8_8_REV_APPLE */

// GL_NV_video_capture
#define GL_VIDEO_BUFFER_NV                0x9020
#define GL_VIDEO_BUFFER_BINDING_NV        0x9021
#define GL_FIELD_UPPER_NV                 0x9022
#define GL_FIELD_LOWER_NV                 0x9023
#define GL_NUM_VIDEO_CAPTURE_STREAMS_NV   0x9024
#define GL_NEXT_VIDEO_CAPTURE_BUFFER_STATUS_NV 0x9025
#define GL_VIDEO_CAPTURE_TO_422_SUPPORTED_NV 0x9026
#define GL_LAST_VIDEO_CAPTURE_STATUS_NV   0x9027
#define GL_VIDEO_BUFFER_PITCH_NV          0x9028
#define GL_VIDEO_COLOR_CONVERSION_MATRIX_NV 0x9029
#define GL_VIDEO_COLOR_CONVERSION_MAX_NV  0x902A
#define GL_VIDEO_COLOR_CONVERSION_MIN_NV  0x902B
#define GL_VIDEO_COLOR_CONVERSION_OFFSET_NV 0x902C
#define GL_VIDEO_BUFFER_INTERNAL_FORMAT_NV 0x902D
#define GL_PARTIAL_SUCCESS_NV             0x902E
#define GL_SUCCESS_NV                     0x902F
#define GL_FAILURE_NV                     0x9030
#define GL_YCBYCR8_422_NV                 0x9031
#define GL_YCBAYCR8A_4224_NV              0x9032
#define GL_Z6Y10Z6CB10Z6Y10Z6CR10_422_NV  0x9033
#define GL_Z6Y10Z6CB10Z6A10Z6Y10Z6CR10Z6A10_4224_NV 0x9034
#define GL_Z4Y12Z4CB12Z4Y12Z4CR12_422_NV  0x9035
#define GL_Z4Y12Z4CB12Z4A12Z4Y12Z4CR12Z4A12_4224_NV 0x9036
#define GL_Z4Y12Z4CB12Z4CR12_444_NV       0x9037
#define GL_VIDEO_CAPTURE_FRAME_WIDTH_NV   0x9038
#define GL_VIDEO_CAPTURE_FRAME_HEIGHT_NV  0x9039
#define GL_VIDEO_CAPTURE_FIELD_UPPER_HEIGHT_NV 0x903A
#define GL_VIDEO_CAPTURE_FIELD_LOWER_HEIGHT_NV 0x903B
#define GL_VIDEO_CAPTURE_SURFACE_ORIGIN_NV 0x903C

// GL_NV_copy_image

// GL_EXT_separate_shader_objects
#define GL_ACTIVE_PROGRAM_EXT             0x8B8D

// GL_NV_parameter_buffer_object2

// GL_NV_shader_buffer_load
#define GL_BUFFER_GPU_ADDRESS_NV          0x8F1D
#define GL_GPU_ADDRESS_NV                 0x8F34
#define GL_MAX_SHADER_BUFFER_ADDRESS_NV   0x8F35

// GL_NV_vertex_buffer_unified_memory
#define GL_VERTEX_ATTRIB_ARRAY_UNIFIED_NV 0x8F1E
#define GL_ELEMENT_ARRAY_UNIFIED_NV       0x8F1F
#define GL_VERTEX_ATTRIB_ARRAY_ADDRESS_NV 0x8F20
#define GL_VERTEX_ARRAY_ADDRESS_NV        0x8F21
#define GL_NORMAL_ARRAY_ADDRESS_NV        0x8F22
#define GL_COLOR_ARRAY_ADDRESS_NV         0x8F23
#define GL_INDEX_ARRAY_ADDRESS_NV         0x8F24
#define GL_TEXTURE_COORD_ARRAY_ADDRESS_NV 0x8F25
#define GL_EDGE_FLAG_ARRAY_ADDRESS_NV     0x8F26
#define GL_SECONDARY_COLOR_ARRAY_ADDRESS_NV 0x8F27
#define GL_FOG_COORD_ARRAY_ADDRESS_NV     0x8F28
#define GL_ELEMENT_ARRAY_ADDRESS_NV       0x8F29
#define GL_VERTEX_ATTRIB_ARRAY_LENGTH_NV  0x8F2A
#define GL_VERTEX_ARRAY_LENGTH_NV         0x8F2B
#define GL_NORMAL_ARRAY_LENGTH_NV         0x8F2C
#define GL_COLOR_ARRAY_LENGTH_NV          0x8F2D
#define GL_INDEX_ARRAY_LENGTH_NV          0x8F2E
#define GL_TEXTURE_COORD_ARRAY_LENGTH_NV  0x8F2F
#define GL_EDGE_FLAG_ARRAY_LENGTH_NV      0x8F30
#define GL_SECONDARY_COLOR_ARRAY_LENGTH_NV 0x8F31
#define GL_FOG_COORD_ARRAY_LENGTH_NV      0x8F32
#define GL_ELEMENT_ARRAY_LENGTH_NV        0x8F33
#define GL_DRAW_INDIRECT_UNIFIED_NV       0x8F40
#define GL_DRAW_INDIRECT_ADDRESS_NV       0x8F41
#define GL_DRAW_INDIRECT_LENGTH_NV        0x8F42

// GL_NV_texture_barrier

// GL_AMD_shader_stencil_export

// GL_AMD_seamless_cubemap_per_texture
/* reuse GL_TEXTURE_CUBE_MAP_SEAMLESS */

// GL_AMD_conservative_depth

// GL_EXT_shader_image_load_store
#define GL_MAX_IMAGE_UNITS_EXT            0x8F38
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS_EXT 0x8F39
#define GL_IMAGE_BINDING_NAME_EXT         0x8F3A
#define GL_IMAGE_BINDING_LEVEL_EXT        0x8F3B
#define GL_IMAGE_BINDING_LAYERED_EXT      0x8F3C
#define GL_IMAGE_BINDING_LAYER_EXT        0x8F3D
#define GL_IMAGE_BINDING_ACCESS_EXT       0x8F3E
#define GL_IMAGE_1D_EXT                   0x904C
#define GL_IMAGE_2D_EXT                   0x904D
#define GL_IMAGE_3D_EXT                   0x904E
#define GL_IMAGE_2D_RECT_EXT              0x904F
#define GL_IMAGE_CUBE_EXT                 0x9050
#define GL_IMAGE_BUFFER_EXT               0x9051
#define GL_IMAGE_1D_ARRAY_EXT             0x9052
#define GL_IMAGE_2D_ARRAY_EXT             0x9053
#define GL_IMAGE_CUBE_MAP_ARRAY_EXT       0x9054
#define GL_IMAGE_2D_MULTISAMPLE_EXT       0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x9056
#define GL_INT_IMAGE_1D_EXT               0x9057
#define GL_INT_IMAGE_2D_EXT               0x9058
#define GL_INT_IMAGE_3D_EXT               0x9059
#define GL_INT_IMAGE_2D_RECT_EXT          0x905A
#define GL_INT_IMAGE_CUBE_EXT             0x905B
#define GL_INT_IMAGE_BUFFER_EXT           0x905C
#define GL_INT_IMAGE_1D_ARRAY_EXT         0x905D
#define GL_INT_IMAGE_2D_ARRAY_EXT         0x905E
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT   0x905F
#define GL_INT_IMAGE_2D_MULTISAMPLE_EXT   0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x9061
#define GL_UNSIGNED_INT_IMAGE_1D_EXT      0x9062
#define GL_UNSIGNED_INT_IMAGE_2D_EXT      0x9063
#define GL_UNSIGNED_INT_IMAGE_3D_EXT      0x9064
#define GL_UNSIGNED_INT_IMAGE_2D_RECT_EXT 0x9065
#define GL_UNSIGNED_INT_IMAGE_CUBE_EXT    0x9066
#define GL_UNSIGNED_INT_IMAGE_BUFFER_EXT  0x9067
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY_EXT 0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY_EXT 0x9069
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT 0x906A
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_EXT 0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x906C
#define GL_MAX_IMAGE_SAMPLES_EXT          0x906D
#define GL_IMAGE_BINDING_FORMAT_EXT       0x906E
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT 0x00000001
#define GL_ELEMENT_ARRAY_BARRIER_BIT_EXT  0x00000002
#define GL_UNIFORM_BARRIER_BIT_EXT        0x00000004
#define GL_TEXTURE_FETCH_BARRIER_BIT_EXT  0x00000008
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT 0x00000020
#define GL_COMMAND_BARRIER_BIT_EXT        0x00000040
#define GL_PIXEL_BUFFER_BARRIER_BIT_EXT   0x00000080
#define GL_TEXTURE_UPDATE_BARRIER_BIT_EXT 0x00000100
#define GL_BUFFER_UPDATE_BARRIER_BIT_EXT  0x00000200
#define GL_FRAMEBUFFER_BARRIER_BIT_EXT    0x00000400
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT 0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT_EXT 0x00001000
#define GL_ALL_BARRIER_BITS_EXT           0xFFFFFFFF

// GL_EXT_vertex_attrib_64bit
/* reuse GL_DOUBLE */
#define GL_DOUBLE_VEC2_EXT                0x8FFC
#define GL_DOUBLE_VEC3_EXT                0x8FFD
#define GL_DOUBLE_VEC4_EXT                0x8FFE
#define GL_DOUBLE_MAT2_EXT                0x8F46
#define GL_DOUBLE_MAT3_EXT                0x8F47
#define GL_DOUBLE_MAT4_EXT                0x8F48
#define GL_DOUBLE_MAT2x3_EXT              0x8F49
#define GL_DOUBLE_MAT2x4_EXT              0x8F4A
#define GL_DOUBLE_MAT3x2_EXT              0x8F4B
#define GL_DOUBLE_MAT3x4_EXT              0x8F4C
#define GL_DOUBLE_MAT4x2_EXT              0x8F4D
#define GL_DOUBLE_MAT4x3_EXT              0x8F4E

// GL_NV_gpu_program5
#define GL_MAX_GEOMETRY_PROGRAM_INVOCATIONS_NV 0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_NV 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_NV 0x8E5C
#define GL_FRAGMENT_PROGRAM_INTERPOLATION_OFFSET_BITS_NV 0x8E5D
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_NV 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_NV 0x8E5F
#define GL_MAX_PROGRAM_SUBROUTINE_PARAMETERS_NV 0x8F44
#define GL_MAX_PROGRAM_SUBROUTINE_NUM_NV  0x8F45

// GL_NV_gpu_shader5
#define GL_INT64_NV                       0x140E
#define GL_UNSIGNED_INT64_NV              0x140F
#define GL_INT8_NV                        0x8FE0
#define GL_INT8_VEC2_NV                   0x8FE1
#define GL_INT8_VEC3_NV                   0x8FE2
#define GL_INT8_VEC4_NV                   0x8FE3
#define GL_INT16_NV                       0x8FE4
#define GL_INT16_VEC2_NV                  0x8FE5
#define GL_INT16_VEC3_NV                  0x8FE6
#define GL_INT16_VEC4_NV                  0x8FE7
#define GL_INT64_VEC2_NV                  0x8FE9
#define GL_INT64_VEC3_NV                  0x8FEA
#define GL_INT64_VEC4_NV                  0x8FEB
#define GL_UNSIGNED_INT8_NV               0x8FEC
#define GL_UNSIGNED_INT8_VEC2_NV          0x8FED
#define GL_UNSIGNED_INT8_VEC3_NV          0x8FEE
#define GL_UNSIGNED_INT8_VEC4_NV          0x8FEF
#define GL_UNSIGNED_INT16_NV              0x8FF0
#define GL_UNSIGNED_INT16_VEC2_NV         0x8FF1
#define GL_UNSIGNED_INT16_VEC3_NV         0x8FF2
#define GL_UNSIGNED_INT16_VEC4_NV         0x8FF3
#define GL_UNSIGNED_INT64_VEC2_NV         0x8FF5
#define GL_UNSIGNED_INT64_VEC3_NV         0x8FF6
#define GL_UNSIGNED_INT64_VEC4_NV         0x8FF7
#define GL_FLOAT16_NV                     0x8FF8
#define GL_FLOAT16_VEC2_NV                0x8FF9
#define GL_FLOAT16_VEC3_NV                0x8FFA
#define GL_FLOAT16_VEC4_NV                0x8FFB
/* reuse GL_PATCHES */

// GL_NV_shader_buffer_store
#define GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV 0x00000010
/* reuse GL_READ_WRITE */
/* reuse GL_WRITE_ONLY */

// GL_NV_tessellation_program5
#define GL_MAX_PROGRAM_PATCH_ATTRIBS_NV   0x86D8
#define GL_TESS_CONTROL_PROGRAM_NV        0x891E
#define GL_TESS_EVALUATION_PROGRAM_NV     0x891F
#define GL_TESS_CONTROL_PROGRAM_PARAMETER_BUFFER_NV 0x8C74
#define GL_TESS_EVALUATION_PROGRAM_PARAMETER_BUFFER_NV 0x8C75

// GL_NV_vertex_attrib_integer_64bit
/* reuse GL_INT64_NV */
/* reuse GL_UNSIGNED_INT64_NV */

// GL_NV_multisample_coverage
#define GL_COVERAGE_SAMPLES_NV            0x80A9
#define GL_COLOR_SAMPLES_NV               0x8E20

// GL_AMD_name_gen_delete
#define GL_DATA_BUFFER_AMD                0x9151
#define GL_PERFORMANCE_MONITOR_AMD        0x9152
#define GL_QUERY_OBJECT_AMD               0x9153
#define GL_VERTEX_ARRAY_OBJECT_AMD        0x9154
#define GL_SAMPLER_OBJECT_AMD             0x9155

// GL_AMD_debug_output
#define GL_MAX_DEBUG_LOGGED_MESSAGES_AMD  0x9144
#define GL_DEBUG_LOGGED_MESSAGES_AMD      0x9145
#define GL_DEBUG_SEVERITY_HIGH_AMD        0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_AMD      0x9147
#define GL_DEBUG_SEVERITY_LOW_AMD         0x9148
#define GL_DEBUG_CATEGORY_API_ERROR_AMD   0x9149
#define GL_DEBUG_CATEGORY_WINDOW_SYSTEM_AMD 0x914A
#define GL_DEBUG_CATEGORY_DEPRECATION_AMD 0x914B
#define GL_DEBUG_CATEGORY_UNDEFINED_BEHAVIOR_AMD 0x914C
#define GL_DEBUG_CATEGORY_PERFORMANCE_AMD 0x914D
#define GL_DEBUG_CATEGORY_SHADER_COMPILER_AMD 0x914E
#define GL_DEBUG_CATEGORY_APPLICATION_AMD 0x914F
#define GL_DEBUG_CATEGORY_OTHER_AMD       0x9150
typedef void (APIENTRY *GLDEBUGPROCAMD)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,GLvoid *userParam);

// GL_NV_vdpau_interop
#define GL_SURFACE_STATE_NV               0x86EB
#define GL_SURFACE_REGISTERED_NV          0x86FD
#define GL_SURFACE_MAPPED_NV              0x8700
#define GL_WRITE_DISCARD_NV               0x88BE
typedef GLintptr GLvdpauSurfaceNV;

// GL_AMD_transform_feedback3_lines_triangles

// GL_AMD_depth_clamp_separate
#define GL_DEPTH_CLAMP_NEAR_AMD           0x901E
#define GL_DEPTH_CLAMP_FAR_AMD            0x901F

// GL_EXT_texture_sRGB_decode
#define GL_TEXTURE_SRGB_DECODE_EXT        0x8A48
#define GL_DECODE_EXT                     0x8A49
#define GL_SKIP_DECODE_EXT                0x8A4A

// GL_NV_texture_multisample
#define GL_TEXTURE_COVERAGE_SAMPLES_NV    0x9045
#define GL_TEXTURE_COLOR_SAMPLES_NV       0x9046

// GL_AMD_blend_minmax_factor
#define GL_FACTOR_MIN_AMD                 0x901C
#define GL_FACTOR_MAX_AMD                 0x901D

// GL_AMD_sample_positions
#define GL_SUBSAMPLE_DISTANCE_AMD         0x883F

// GL_EXT_x11_sync_object
#define GL_SYNC_X11_FENCE_EXT             0x90E1

// GL_AMD_multi_draw_indirect

// GL_EXT_framebuffer_multisample_blit_scaled
#define GL_SCALED_RESOLVE_FASTEST_EXT     0x90BA
#define GL_SCALED_RESOLVE_NICEST_EXT      0x90BB

// GL_SGIX_texture_select

// GL_INGR_blend_func_separate

// GL_SGIX_subsample

// GL_SGIX_depth_pass_instrument

// GL_SGIX_igloo_interface

// WGL_ARB_buffer_region
#define WGL_FRONT_COLOR_BUFFER_BIT_ARB 0x00000001
#define WGL_BACK_COLOR_BUFFER_BIT_ARB  0x00000002
#define WGL_DEPTH_BUFFER_BIT_ARB       0x00000004
#define WGL_STENCIL_BUFFER_BIT_ARB     0x00000008

// WGL_ARB_multisample
#define WGL_SAMPLE_BUFFERS_ARB         0x2041
#define WGL_SAMPLES_ARB                0x2042

// WGL_ARB_extensions_string

// WGL_ARB_pixel_format
#define WGL_NUMBER_PIXEL_FORMATS_ARB   0x2000
#define WGL_DRAW_TO_WINDOW_ARB         0x2001
#define WGL_DRAW_TO_BITMAP_ARB         0x2002
#define WGL_ACCELERATION_ARB           0x2003
#define WGL_NEED_PALETTE_ARB           0x2004
#define WGL_NEED_SYSTEM_PALETTE_ARB    0x2005
#define WGL_SWAP_LAYER_BUFFERS_ARB     0x2006
#define WGL_SWAP_METHOD_ARB            0x2007
#define WGL_NUMBER_OVERLAYS_ARB        0x2008
#define WGL_NUMBER_UNDERLAYS_ARB       0x2009
#define WGL_TRANSPARENT_ARB            0x200A
#define WGL_TRANSPARENT_RED_VALUE_ARB  0x2037
#define WGL_TRANSPARENT_GREEN_VALUE_ARB 0x2038
#define WGL_TRANSPARENT_BLUE_VALUE_ARB 0x2039
#define WGL_TRANSPARENT_ALPHA_VALUE_ARB 0x203A
#define WGL_TRANSPARENT_INDEX_VALUE_ARB 0x203B
#define WGL_SHARE_DEPTH_ARB            0x200C
#define WGL_SHARE_STENCIL_ARB          0x200D
#define WGL_SHARE_ACCUM_ARB            0x200E
#define WGL_SUPPORT_GDI_ARB            0x200F
#define WGL_SUPPORT_OPENGL_ARB         0x2010
#define WGL_DOUBLE_BUFFER_ARB          0x2011
#define WGL_STEREO_ARB                 0x2012
#define WGL_PIXEL_TYPE_ARB             0x2013
#define WGL_COLOR_BITS_ARB             0x2014
#define WGL_RED_BITS_ARB               0x2015
#define WGL_RED_SHIFT_ARB              0x2016
#define WGL_GREEN_BITS_ARB             0x2017
#define WGL_GREEN_SHIFT_ARB            0x2018
#define WGL_BLUE_BITS_ARB              0x2019
#define WGL_BLUE_SHIFT_ARB             0x201A
#define WGL_ALPHA_BITS_ARB             0x201B
#define WGL_ALPHA_SHIFT_ARB            0x201C
#define WGL_ACCUM_BITS_ARB             0x201D
#define WGL_ACCUM_RED_BITS_ARB         0x201E
#define WGL_ACCUM_GREEN_BITS_ARB       0x201F
#define WGL_ACCUM_BLUE_BITS_ARB        0x2020
#define WGL_ACCUM_ALPHA_BITS_ARB       0x2021
#define WGL_DEPTH_BITS_ARB             0x2022
#define WGL_STENCIL_BITS_ARB           0x2023
#define WGL_AUX_BUFFERS_ARB            0x2024
#define WGL_NO_ACCELERATION_ARB        0x2025
#define WGL_GENERIC_ACCELERATION_ARB   0x2026
#define WGL_FULL_ACCELERATION_ARB      0x2027
#define WGL_SWAP_EXCHANGE_ARB          0x2028
#define WGL_SWAP_COPY_ARB              0x2029
#define WGL_SWAP_UNDEFINED_ARB         0x202A
#define WGL_TYPE_RGBA_ARB              0x202B
#define WGL_TYPE_COLORINDEX_ARB        0x202C

// WGL_ARB_make_current_read
#define ERROR_INVALID_PIXEL_TYPE_ARB   0x2043
#define ERROR_INCOMPATIBLE_DEVICE_CONTEXTS_ARB 0x2054

// WGL_ARB_pbuffer
#define WGL_DRAW_TO_PBUFFER_ARB        0x202D
#define WGL_MAX_PBUFFER_PIXELS_ARB     0x202E
#define WGL_MAX_PBUFFER_WIDTH_ARB      0x202F
#define WGL_MAX_PBUFFER_HEIGHT_ARB     0x2030
#define WGL_PBUFFER_LARGEST_ARB        0x2033
#define WGL_PBUFFER_WIDTH_ARB          0x2034
#define WGL_PBUFFER_HEIGHT_ARB         0x2035
#define WGL_PBUFFER_LOST_ARB           0x2036
DECLARE_HANDLE(HPBUFFERARB);

// WGL_ARB_render_texture
#define WGL_BIND_TO_TEXTURE_RGB_ARB    0x2070
#define WGL_BIND_TO_TEXTURE_RGBA_ARB   0x2071
#define WGL_TEXTURE_FORMAT_ARB         0x2072
#define WGL_TEXTURE_TARGET_ARB         0x2073
#define WGL_MIPMAP_TEXTURE_ARB         0x2074
#define WGL_TEXTURE_RGB_ARB            0x2075
#define WGL_TEXTURE_RGBA_ARB           0x2076
#define WGL_NO_TEXTURE_ARB             0x2077
#define WGL_TEXTURE_CUBE_MAP_ARB       0x2078
#define WGL_TEXTURE_1D_ARB             0x2079
#define WGL_TEXTURE_2D_ARB             0x207A
#define WGL_MIPMAP_LEVEL_ARB           0x207B
#define WGL_CUBE_MAP_FACE_ARB          0x207C
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB 0x207D
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB 0x207E
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB 0x207F
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB 0x2080
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB 0x2081
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB 0x2082
#define WGL_FRONT_LEFT_ARB             0x2083
#define WGL_FRONT_RIGHT_ARB            0x2084
#define WGL_BACK_LEFT_ARB              0x2085
#define WGL_BACK_RIGHT_ARB             0x2086
#define WGL_AUX0_ARB                   0x2087
#define WGL_AUX1_ARB                   0x2088
#define WGL_AUX2_ARB                   0x2089
#define WGL_AUX3_ARB                   0x208A
#define WGL_AUX4_ARB                   0x208B
#define WGL_AUX5_ARB                   0x208C
#define WGL_AUX6_ARB                   0x208D
#define WGL_AUX7_ARB                   0x208E
#define WGL_AUX8_ARB                   0x208F
#define WGL_AUX9_ARB                   0x2090

// WGL_ARB_pixel_format_float
#define WGL_TYPE_RGBA_FLOAT_ARB        0x21A0

// WGL_ARB_framebuffer_sRGB
#define WGL_FRAMEBUFFER_SRGB_CAPABLE_ARB 0x20A9

// WGL_ARB_create_context
#define WGL_CONTEXT_DEBUG_BIT_ARB      0x00000001
#define WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB 0x00000002
#define WGL_CONTEXT_MAJOR_VERSION_ARB  0x2091
#define WGL_CONTEXT_MINOR_VERSION_ARB  0x2092
#define WGL_CONTEXT_LAYER_PLANE_ARB    0x2093
#define WGL_CONTEXT_FLAGS_ARB          0x2094
#define ERROR_INVALID_VERSION_ARB      0x2095

// WGL_ARB_create_context_profile
#define WGL_CONTEXT_PROFILE_MASK_ARB   0x9126
#define WGL_CONTEXT_CORE_PROFILE_BIT_ARB 0x00000001
#define WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB 0x00000002
#define ERROR_INVALID_PROFILE_ARB      0x2096

// WGL_ARB_create_context_robustness
#define WGL_CONTEXT_ROBUST_ACCESS_BIT_ARB 0x00000004
#define WGL_LOSE_CONTEXT_ON_RESET_ARB  0x8252
#define WGL_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define WGL_NO_RESET_NOTIFICATION_ARB  0x8261

// WGL_EXT_make_current_read
#define ERROR_INVALID_PIXEL_TYPE_EXT   0x2043

// WGL_EXT_pixel_format
#define WGL_NUMBER_PIXEL_FORMATS_EXT   0x2000
#define WGL_DRAW_TO_WINDOW_EXT         0x2001
#define WGL_DRAW_TO_BITMAP_EXT         0x2002
#define WGL_ACCELERATION_EXT           0x2003
#define WGL_NEED_PALETTE_EXT           0x2004
#define WGL_NEED_SYSTEM_PALETTE_EXT    0x2005
#define WGL_SWAP_LAYER_BUFFERS_EXT     0x2006
#define WGL_SWAP_METHOD_EXT            0x2007
#define WGL_NUMBER_OVERLAYS_EXT        0x2008
#define WGL_NUMBER_UNDERLAYS_EXT       0x2009
#define WGL_TRANSPARENT_EXT            0x200A
#define WGL_TRANSPARENT_VALUE_EXT      0x200B
#define WGL_SHARE_DEPTH_EXT            0x200C
#define WGL_SHARE_STENCIL_EXT          0x200D
#define WGL_SHARE_ACCUM_EXT            0x200E
#define WGL_SUPPORT_GDI_EXT            0x200F
#define WGL_SUPPORT_OPENGL_EXT         0x2010
#define WGL_DOUBLE_BUFFER_EXT          0x2011
#define WGL_STEREO_EXT                 0x2012
#define WGL_PIXEL_TYPE_EXT             0x2013
#define WGL_COLOR_BITS_EXT             0x2014
#define WGL_RED_BITS_EXT               0x2015
#define WGL_RED_SHIFT_EXT              0x2016
#define WGL_GREEN_BITS_EXT             0x2017
#define WGL_GREEN_SHIFT_EXT            0x2018
#define WGL_BLUE_BITS_EXT              0x2019
#define WGL_BLUE_SHIFT_EXT             0x201A
#define WGL_ALPHA_BITS_EXT             0x201B
#define WGL_ALPHA_SHIFT_EXT            0x201C
#define WGL_ACCUM_BITS_EXT             0x201D
#define WGL_ACCUM_RED_BITS_EXT         0x201E
#define WGL_ACCUM_GREEN_BITS_EXT       0x201F
#define WGL_ACCUM_BLUE_BITS_EXT        0x2020
#define WGL_ACCUM_ALPHA_BITS_EXT       0x2021
#define WGL_DEPTH_BITS_EXT             0x2022
#define WGL_STENCIL_BITS_EXT           0x2023
#define WGL_AUX_BUFFERS_EXT            0x2024
#define WGL_NO_ACCELERATION_EXT        0x2025
#define WGL_GENERIC_ACCELERATION_EXT   0x2026
#define WGL_FULL_ACCELERATION_EXT      0x2027
#define WGL_SWAP_EXCHANGE_EXT          0x2028
#define WGL_SWAP_COPY_EXT              0x2029
#define WGL_SWAP_UNDEFINED_EXT         0x202A
#define WGL_TYPE_RGBA_EXT              0x202B
#define WGL_TYPE_COLORINDEX_EXT        0x202C

// WGL_EXT_pbuffer
#define WGL_DRAW_TO_PBUFFER_EXT        0x202D
#define WGL_MAX_PBUFFER_PIXELS_EXT     0x202E
#define WGL_MAX_PBUFFER_WIDTH_EXT      0x202F
#define WGL_MAX_PBUFFER_HEIGHT_EXT     0x2030
#define WGL_OPTIMAL_PBUFFER_WIDTH_EXT  0x2031
#define WGL_OPTIMAL_PBUFFER_HEIGHT_EXT 0x2032
#define WGL_PBUFFER_LARGEST_EXT        0x2033
#define WGL_PBUFFER_WIDTH_EXT          0x2034
#define WGL_PBUFFER_HEIGHT_EXT         0x2035
DECLARE_HANDLE(HPBUFFEREXT);

// WGL_EXT_depth_float
#define WGL_DEPTH_FLOAT_EXT            0x2040

// WGL_3DFX_multisample
#define WGL_SAMPLE_BUFFERS_3DFX        0x2060
#define WGL_SAMPLES_3DFX               0x2061

// WGL_EXT_multisample
#define WGL_SAMPLE_BUFFERS_EXT         0x2041
#define WGL_SAMPLES_EXT                0x2042

// WGL_I3D_digital_video_control
#define WGL_DIGITAL_VIDEO_CURSOR_ALPHA_FRAMEBUFFER_I3D 0x2050
#define WGL_DIGITAL_VIDEO_CURSOR_ALPHA_VALUE_I3D 0x2051
#define WGL_DIGITAL_VIDEO_CURSOR_INCLUDED_I3D 0x2052
#define WGL_DIGITAL_VIDEO_GAMMA_CORRECTED_I3D 0x2053

// WGL_I3D_gamma
#define WGL_GAMMA_TABLE_SIZE_I3D       0x204E
#define WGL_GAMMA_EXCLUDE_DESKTOP_I3D  0x204F

// WGL_I3D_genlock
#define WGL_GENLOCK_SOURCE_MULTIVIEW_I3D 0x2044
#define WGL_GENLOCK_SOURCE_EXTENAL_SYNC_I3D 0x2045
#define WGL_GENLOCK_SOURCE_EXTENAL_FIELD_I3D 0x2046
#define WGL_GENLOCK_SOURCE_EXTENAL_TTL_I3D 0x2047
#define WGL_GENLOCK_SOURCE_DIGITAL_SYNC_I3D 0x2048
#define WGL_GENLOCK_SOURCE_DIGITAL_FIELD_I3D 0x2049
#define WGL_GENLOCK_SOURCE_EDGE_FALLING_I3D 0x204A
#define WGL_GENLOCK_SOURCE_EDGE_RISING_I3D 0x204B
#define WGL_GENLOCK_SOURCE_EDGE_BOTH_I3D 0x204C

// WGL_I3D_image_buffer
#define WGL_IMAGE_BUFFER_MIN_ACCESS_I3D 0x00000001
#define WGL_IMAGE_BUFFER_LOCK_I3D      0x00000002

// WGL_I3D_swap_frame_lock

// WGL_NV_render_depth_texture
#define WGL_BIND_TO_TEXTURE_DEPTH_NV   0x20A3
#define WGL_BIND_TO_TEXTURE_RECTANGLE_DEPTH_NV 0x20A4
#define WGL_DEPTH_TEXTURE_FORMAT_NV    0x20A5
#define WGL_TEXTURE_DEPTH_COMPONENT_NV 0x20A6
#define WGL_DEPTH_COMPONENT_NV         0x20A7

// WGL_NV_render_texture_rectangle
#define WGL_BIND_TO_TEXTURE_RECTANGLE_RGB_NV 0x20A0
#define WGL_BIND_TO_TEXTURE_RECTANGLE_RGBA_NV 0x20A1
#define WGL_TEXTURE_RECTANGLE_NV       0x20A2

// WGL_ATI_pixel_format_float
#define WGL_TYPE_RGBA_FLOAT_ATI        0x21A0

// WGL_NV_float_buffer
#define WGL_FLOAT_COMPONENTS_NV        0x20B0
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_R_NV 0x20B1
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RG_NV 0x20B2
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGB_NV 0x20B3
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGBA_NV 0x20B4
#define WGL_TEXTURE_FLOAT_R_NV         0x20B5
#define WGL_TEXTURE_FLOAT_RG_NV        0x20B6
#define WGL_TEXTURE_FLOAT_RGB_NV       0x20B7
#define WGL_TEXTURE_FLOAT_RGBA_NV      0x20B8

// WGL_3DL_stereo_control
#define WGL_STEREO_EMITTER_ENABLE_3DL  0x2055
#define WGL_STEREO_EMITTER_DISABLE_3DL 0x2056
#define WGL_STEREO_POLARITY_NORMAL_3DL 0x2057
#define WGL_STEREO_POLARITY_INVERT_3DL 0x2058

// WGL_EXT_pixel_format_packed_float
#define WGL_TYPE_RGBA_UNSIGNED_FLOAT_EXT 0x20A8

// WGL_EXT_framebuffer_sRGB
#define WGL_FRAMEBUFFER_SRGB_CAPABLE_EXT 0x20A9

// WGL_NV_present_video
#define WGL_NUM_VIDEO_SLOTS_NV         0x20F0
DECLARE_HANDLE(HVIDEOOUTPUTDEVICENV);

// WGL_NV_video_out
#define WGL_BIND_TO_VIDEO_RGB_NV       0x20C0
#define WGL_BIND_TO_VIDEO_RGBA_NV      0x20C1
#define WGL_BIND_TO_VIDEO_RGB_AND_DEPTH_NV 0x20C2
#define WGL_VIDEO_OUT_COLOR_NV         0x20C3
#define WGL_VIDEO_OUT_ALPHA_NV         0x20C4
#define WGL_VIDEO_OUT_DEPTH_NV         0x20C5
#define WGL_VIDEO_OUT_COLOR_AND_ALPHA_NV 0x20C6
#define WGL_VIDEO_OUT_COLOR_AND_DEPTH_NV 0x20C7
#define WGL_VIDEO_OUT_FRAME            0x20C8
#define WGL_VIDEO_OUT_FIELD_1          0x20C9
#define WGL_VIDEO_OUT_FIELD_2          0x20CA
#define WGL_VIDEO_OUT_STACKED_FIELDS_1_2 0x20CB
#define WGL_VIDEO_OUT_STACKED_FIELDS_2_1 0x20CC

// WGL_NV_swap_group

// WGL_NV_gpu_affinity
#define WGL_ERROR_INCOMPATIBLE_AFFINITY_MASKS_NV 0x20D0
#define WGL_ERROR_MISSING_AFFINITY_MASK_NV 0x20D1
DECLARE_HANDLE(HPGPUNV);
DECLARE_HANDLE(HGPUNV);

typedef struct _GPU_DEVICE {
    DWORD  cb;
    CHAR   DeviceName[32];
    CHAR   DeviceString[128];
    DWORD  Flags;
    RECT   rcVirtualScreen;
} GPU_DEVICE, *PGPU_DEVICE;

// WGL_AMD_gpu_association
#define WGL_GPU_VENDOR_AMD             0x1F00
#define WGL_GPU_RENDERER_STRING_AMD    0x1F01
#define WGL_GPU_OPENGL_VERSION_STRING_AMD 0x1F02
#define WGL_GPU_FASTEST_TARGET_GPUS_AMD 0x21A2
#define WGL_GPU_RAM_AMD                0x21A3
#define WGL_GPU_CLOCK_AMD              0x21A4
#define WGL_GPU_NUM_PIPES_AMD          0x21A5
#define WGL_GPU_NUM_SIMD_AMD           0x21A6
#define WGL_GPU_NUM_RB_AMD             0x21A7
#define WGL_GPU_NUM_SPI_AMD            0x21A8

// WGL_NV_video_capture
#define WGL_UNIQUE_ID_NV               0x20CE
#define WGL_NUM_VIDEO_CAPTURE_SLOTS_NV 0x20CF
DECLARE_HANDLE(HVIDEOINPUTDEVICENV);

// WGL_NV_copy_image

// WGL_NV_multisample_coverage
#define WGL_COVERAGE_SAMPLES_NV        0x2042
#define WGL_COLOR_SAMPLES_NV           0x20B9

// WGL_EXT_create_context_es2_profile
#define WGL_CONTEXT_ES2_PROFILE_BIT_EXT 0x00000004

// WGL_NV_DX_interop
#define WGL_ACCESS_READ_ONLY_NV        0x00000000
#define WGL_ACCESS_READ_WRITE_NV       0x00000001
#define WGL_ACCESS_WRITE_DISCARD_NV    0x00000002

// WGL_NV_video_output
DECLARE_HANDLE(HPVIDEODEV);

// WGL_EXT_display_color_table

// WGL_EXT_extensions_string

// WGL_EXT_swap_control

// WGL_NV_vertex_array_range

// WGL_OML_sync_control

// WGL_I3D_swap_frame_usage


// OpenGL_1_2

// GL_ARB_imaging

// OpenGL_1_3

// OpenGL_1_4

// OpenGL_1_5

// OpenGL_2_0

// OpenGL_2_1

// OpenGL_3_0
typedef void (APIENTRYP PFNGLCOLORMASKIPROC) (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
extern PFNGLCOLORMASKIPROC glColorMaski;
typedef void (APIENTRYP PFNGLGETBOOLEANI_VPROC) (GLenum target, GLuint index, GLboolean *data);
extern PFNGLGETBOOLEANI_VPROC glGetBooleani_v;
typedef void (APIENTRYP PFNGLGETINTEGERI_VPROC) (GLenum target, GLuint index, GLint *data);
extern PFNGLGETINTEGERI_VPROC glGetIntegeri_v;
typedef void (APIENTRYP PFNGLENABLEIPROC) (GLenum target, GLuint index);
extern PFNGLENABLEIPROC glEnablei;
typedef void (APIENTRYP PFNGLDISABLEIPROC) (GLenum target, GLuint index);
extern PFNGLDISABLEIPROC glDisablei;
typedef GLboolean (APIENTRYP PFNGLISENABLEDIPROC) (GLenum target, GLuint index);
extern PFNGLISENABLEDIPROC glIsEnabledi;
typedef void (APIENTRYP PFNGLBEGINTRANSFORMFEEDBACKPROC) (GLenum primitiveMode);
extern PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback;
typedef void (APIENTRYP PFNGLENDTRANSFORMFEEDBACKPROC) (void);
extern PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback;
typedef void (APIENTRYP PFNGLBINDBUFFERRANGEPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
extern PFNGLBINDBUFFERRANGEPROC glBindBufferRange;
typedef void (APIENTRYP PFNGLBINDBUFFERBASEPROC) (GLenum target, GLuint index, GLuint buffer);
extern PFNGLBINDBUFFERBASEPROC glBindBufferBase;
typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKVARYINGSPROC) (GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode);
extern PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings;
typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
extern PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying;
typedef void (APIENTRYP PFNGLCLAMPCOLORPROC) (GLenum target, GLenum clamp);
extern PFNGLCLAMPCOLORPROC glClampColor;
typedef void (APIENTRYP PFNGLBEGINCONDITIONALRENDERPROC) (GLuint id, GLenum mode);
extern PFNGLBEGINCONDITIONALRENDERPROC glBeginConditionalRender;
typedef void (APIENTRYP PFNGLENDCONDITIONALRENDERPROC) (void);
extern PFNGLENDCONDITIONALRENDERPROC glEndConditionalRender;
typedef void (APIENTRYP PFNGLVERTEXATTRIBIPOINTERPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIIVPROC) (GLuint index, GLenum pname, GLint *params);
extern PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIUIVPROC) (GLuint index, GLenum pname, GLuint *params);
extern PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1IPROC) (GLuint index, GLint x);
extern PFNGLVERTEXATTRIBI1IPROC glVertexAttribI1i;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2IPROC) (GLuint index, GLint x, GLint y);
extern PFNGLVERTEXATTRIBI2IPROC glVertexAttribI2i;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3IPROC) (GLuint index, GLint x, GLint y, GLint z);
extern PFNGLVERTEXATTRIBI3IPROC glVertexAttribI3i;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4IPROC) (GLuint index, GLint x, GLint y, GLint z, GLint w);
extern PFNGLVERTEXATTRIBI4IPROC glVertexAttribI4i;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1UIPROC) (GLuint index, GLuint x);
extern PFNGLVERTEXATTRIBI1UIPROC glVertexAttribI1ui;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2UIPROC) (GLuint index, GLuint x, GLuint y);
extern PFNGLVERTEXATTRIBI2UIPROC glVertexAttribI2ui;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3UIPROC) (GLuint index, GLuint x, GLuint y, GLuint z);
extern PFNGLVERTEXATTRIBI3UIPROC glVertexAttribI3ui;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UIPROC) (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
extern PFNGLVERTEXATTRIBI4UIPROC glVertexAttribI4ui;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1IVPROC) (GLuint index, const GLint *v);
extern PFNGLVERTEXATTRIBI1IVPROC glVertexAttribI1iv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2IVPROC) (GLuint index, const GLint *v);
extern PFNGLVERTEXATTRIBI2IVPROC glVertexAttribI2iv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3IVPROC) (GLuint index, const GLint *v);
extern PFNGLVERTEXATTRIBI3IVPROC glVertexAttribI3iv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4IVPROC) (GLuint index, const GLint *v);
extern PFNGLVERTEXATTRIBI4IVPROC glVertexAttribI4iv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1UIVPROC) (GLuint index, const GLuint *v);
extern PFNGLVERTEXATTRIBI1UIVPROC glVertexAttribI1uiv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2UIVPROC) (GLuint index, const GLuint *v);
extern PFNGLVERTEXATTRIBI2UIVPROC glVertexAttribI2uiv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3UIVPROC) (GLuint index, const GLuint *v);
extern PFNGLVERTEXATTRIBI3UIVPROC glVertexAttribI3uiv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UIVPROC) (GLuint index, const GLuint *v);
extern PFNGLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4BVPROC) (GLuint index, const GLbyte *v);
extern PFNGLVERTEXATTRIBI4BVPROC glVertexAttribI4bv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4SVPROC) (GLuint index, const GLshort *v);
extern PFNGLVERTEXATTRIBI4SVPROC glVertexAttribI4sv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UBVPROC) (GLuint index, const GLubyte *v);
extern PFNGLVERTEXATTRIBI4UBVPROC glVertexAttribI4ubv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4USVPROC) (GLuint index, const GLushort *v);
extern PFNGLVERTEXATTRIBI4USVPROC glVertexAttribI4usv;
typedef void (APIENTRYP PFNGLGETUNIFORMUIVPROC) (GLuint program, GLint location, GLuint *params);
extern PFNGLGETUNIFORMUIVPROC glGetUniformuiv;
typedef void (APIENTRYP PFNGLBINDFRAGDATALOCATIONPROC) (GLuint program, GLuint color, const GLchar *name);
extern PFNGLBINDFRAGDATALOCATIONPROC glBindFragDataLocation;
typedef GLint (APIENTRYP PFNGLGETFRAGDATALOCATIONPROC) (GLuint program, const GLchar *name);
extern PFNGLGETFRAGDATALOCATIONPROC glGetFragDataLocation;
typedef void (APIENTRYP PFNGLUNIFORM1UIPROC) (GLint location, GLuint v0);
extern PFNGLUNIFORM1UIPROC glUniform1ui;
typedef void (APIENTRYP PFNGLUNIFORM2UIPROC) (GLint location, GLuint v0, GLuint v1);
extern PFNGLUNIFORM2UIPROC glUniform2ui;
typedef void (APIENTRYP PFNGLUNIFORM3UIPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2);
extern PFNGLUNIFORM3UIPROC glUniform3ui;
typedef void (APIENTRYP PFNGLUNIFORM4UIPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
extern PFNGLUNIFORM4UIPROC glUniform4ui;
typedef void (APIENTRYP PFNGLUNIFORM1UIVPROC) (GLint location, GLsizei count, const GLuint *value);
extern PFNGLUNIFORM1UIVPROC glUniform1uiv;
typedef void (APIENTRYP PFNGLUNIFORM2UIVPROC) (GLint location, GLsizei count, const GLuint *value);
extern PFNGLUNIFORM2UIVPROC glUniform2uiv;
typedef void (APIENTRYP PFNGLUNIFORM3UIVPROC) (GLint location, GLsizei count, const GLuint *value);
extern PFNGLUNIFORM3UIVPROC glUniform3uiv;
typedef void (APIENTRYP PFNGLUNIFORM4UIVPROC) (GLint location, GLsizei count, const GLuint *value);
extern PFNGLUNIFORM4UIVPROC glUniform4uiv;
typedef void (APIENTRYP PFNGLTEXPARAMETERIIVPROC) (GLenum target, GLenum pname, const GLint *params);
extern PFNGLTEXPARAMETERIIVPROC glTexParameterIiv;
typedef void (APIENTRYP PFNGLTEXPARAMETERIUIVPROC) (GLenum target, GLenum pname, const GLuint *params);
extern PFNGLTEXPARAMETERIUIVPROC glTexParameterIuiv;
typedef void (APIENTRYP PFNGLGETTEXPARAMETERIIVPROC) (GLenum target, GLenum pname, GLint *params);
extern PFNGLGETTEXPARAMETERIIVPROC glGetTexParameterIiv;
typedef void (APIENTRYP PFNGLGETTEXPARAMETERIUIVPROC) (GLenum target, GLenum pname, GLuint *params);
extern PFNGLGETTEXPARAMETERIUIVPROC glGetTexParameterIuiv;
typedef void (APIENTRYP PFNGLCLEARBUFFERIVPROC) (GLenum buffer, GLint drawbuffer, const GLint *value);
extern PFNGLCLEARBUFFERIVPROC glClearBufferiv;
typedef void (APIENTRYP PFNGLCLEARBUFFERUIVPROC) (GLenum buffer, GLint drawbuffer, const GLuint *value);
extern PFNGLCLEARBUFFERUIVPROC glClearBufferuiv;
typedef void (APIENTRYP PFNGLCLEARBUFFERFVPROC) (GLenum buffer, GLint drawbuffer, const GLfloat *value);
extern PFNGLCLEARBUFFERFVPROC glClearBufferfv;
typedef void (APIENTRYP PFNGLCLEARBUFFERFIPROC) (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
extern PFNGLCLEARBUFFERFIPROC glClearBufferfi;
typedef const GLubyte * (APIENTRYP PFNGLGETSTRINGIPROC) (GLenum name, GLuint index);
extern PFNGLGETSTRINGIPROC glGetStringi;

// OpenGL_3_1
typedef void (APIENTRYP PFNGLDRAWARRAYSINSTANCEDPROC) (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
extern PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced;
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDPROC) (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount);
extern PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced;
typedef void (APIENTRYP PFNGLTEXBUFFERPROC) (GLenum target, GLenum internalformat, GLuint buffer);
extern PFNGLTEXBUFFERPROC glTexBuffer;
typedef void (APIENTRYP PFNGLPRIMITIVERESTARTINDEXPROC) (GLuint index);
extern PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex;

// OpenGL_3_2
typedef void (APIENTRYP PFNGLGETINTEGER64I_VPROC) (GLenum target, GLuint index, GLint64 *data);
extern PFNGLGETINTEGER64I_VPROC glGetInteger64i_v;
typedef void (APIENTRYP PFNGLGETBUFFERPARAMETERI64VPROC) (GLenum target, GLenum pname, GLint64 *params);
extern PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v;
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTUREPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);
extern PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture;

// OpenGL_3_3
typedef void (APIENTRYP PFNGLVERTEXATTRIBDIVISORPROC) (GLuint index, GLuint divisor);
extern PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;

// OpenGL_4_0
typedef void (APIENTRYP PFNGLMINSAMPLESHADINGPROC) (GLclampf value);
extern PFNGLMINSAMPLESHADINGPROC glMinSampleShading;
typedef void (APIENTRYP PFNGLBLENDEQUATIONIPROC) (GLuint buf, GLenum mode);
extern PFNGLBLENDEQUATIONIPROC glBlendEquationi;
typedef void (APIENTRYP PFNGLBLENDEQUATIONSEPARATEIPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
extern PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei;
typedef void (APIENTRYP PFNGLBLENDFUNCIPROC) (GLuint buf, GLenum src, GLenum dst);
extern PFNGLBLENDFUNCIPROC glBlendFunci;
typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEIPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
extern PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei;

// OpenGL_4_1

// GL_ARB_multitexture
typedef void (APIENTRYP PFNGLACTIVETEXTUREARBPROC) (GLenum texture);
extern PFNGLACTIVETEXTUREARBPROC glActiveTextureARB;
typedef void (APIENTRYP PFNGLCLIENTACTIVETEXTUREARBPROC) (GLenum texture);
extern PFNGLCLIENTACTIVETEXTUREARBPROC glClientActiveTextureARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD1DARBPROC) (GLenum target, GLdouble s);
extern PFNGLMULTITEXCOORD1DARBPROC glMultiTexCoord1dARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD1DVARBPROC) (GLenum target, const GLdouble *v);
extern PFNGLMULTITEXCOORD1DVARBPROC glMultiTexCoord1dvARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD1FARBPROC) (GLenum target, GLfloat s);
extern PFNGLMULTITEXCOORD1FARBPROC glMultiTexCoord1fARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD1FVARBPROC) (GLenum target, const GLfloat *v);
extern PFNGLMULTITEXCOORD1FVARBPROC glMultiTexCoord1fvARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD1IARBPROC) (GLenum target, GLint s);
extern PFNGLMULTITEXCOORD1IARBPROC glMultiTexCoord1iARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD1IVARBPROC) (GLenum target, const GLint *v);
extern PFNGLMULTITEXCOORD1IVARBPROC glMultiTexCoord1ivARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD1SARBPROC) (GLenum target, GLshort s);
extern PFNGLMULTITEXCOORD1SARBPROC glMultiTexCoord1sARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD1SVARBPROC) (GLenum target, const GLshort *v);
extern PFNGLMULTITEXCOORD1SVARBPROC glMultiTexCoord1svARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD2DARBPROC) (GLenum target, GLdouble s, GLdouble t);
extern PFNGLMULTITEXCOORD2DARBPROC glMultiTexCoord2dARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD2DVARBPROC) (GLenum target, const GLdouble *v);
extern PFNGLMULTITEXCOORD2DVARBPROC glMultiTexCoord2dvARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD2FARBPROC) (GLenum target, GLfloat s, GLfloat t);
extern PFNGLMULTITEXCOORD2FARBPROC glMultiTexCoord2fARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD2FVARBPROC) (GLenum target, const GLfloat *v);
extern PFNGLMULTITEXCOORD2FVARBPROC glMultiTexCoord2fvARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD2IARBPROC) (GLenum target, GLint s, GLint t);
extern PFNGLMULTITEXCOORD2IARBPROC glMultiTexCoord2iARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD2IVARBPROC) (GLenum target, const GLint *v);
extern PFNGLMULTITEXCOORD2IVARBPROC glMultiTexCoord2ivARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD2SARBPROC) (GLenum target, GLshort s, GLshort t);
extern PFNGLMULTITEXCOORD2SARBPROC glMultiTexCoord2sARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD2SVARBPROC) (GLenum target, const GLshort *v);
extern PFNGLMULTITEXCOORD2SVARBPROC glMultiTexCoord2svARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD3DARBPROC) (GLenum target, GLdouble s, GLdouble t, GLdouble r);
extern PFNGLMULTITEXCOORD3DARBPROC glMultiTexCoord3dARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD3DVARBPROC) (GLenum target, const GLdouble *v);
extern PFNGLMULTITEXCOORD3DVARBPROC glMultiTexCoord3dvARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD3FARBPROC) (GLenum target, GLfloat s, GLfloat t, GLfloat r);
extern PFNGLMULTITEXCOORD3FARBPROC glMultiTexCoord3fARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD3FVARBPROC) (GLenum target, const GLfloat *v);
extern PFNGLMULTITEXCOORD3FVARBPROC glMultiTexCoord3fvARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD3IARBPROC) (GLenum target, GLint s, GLint t, GLint r);
extern PFNGLMULTITEXCOORD3IARBPROC glMultiTexCoord3iARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD3IVARBPROC) (GLenum target, const GLint *v);
extern PFNGLMULTITEXCOORD3IVARBPROC glMultiTexCoord3ivARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD3SARBPROC) (GLenum target, GLshort s, GLshort t, GLshort r);
extern PFNGLMULTITEXCOORD3SARBPROC glMultiTexCoord3sARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD3SVARBPROC) (GLenum target, const GLshort *v);
extern PFNGLMULTITEXCOORD3SVARBPROC glMultiTexCoord3svARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD4DARBPROC) (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
extern PFNGLMULTITEXCOORD4DARBPROC glMultiTexCoord4dARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD4DVARBPROC) (GLenum target, const GLdouble *v);
extern PFNGLMULTITEXCOORD4DVARBPROC glMultiTexCoord4dvARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD4FARBPROC) (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
extern PFNGLMULTITEXCOORD4FARBPROC glMultiTexCoord4fARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD4FVARBPROC) (GLenum target, const GLfloat *v);
extern PFNGLMULTITEXCOORD4FVARBPROC glMultiTexCoord4fvARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD4IARBPROC) (GLenum target, GLint s, GLint t, GLint r, GLint q);
extern PFNGLMULTITEXCOORD4IARBPROC glMultiTexCoord4iARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD4IVARBPROC) (GLenum target, const GLint *v);
extern PFNGLMULTITEXCOORD4IVARBPROC glMultiTexCoord4ivARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD4SARBPROC) (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
extern PFNGLMULTITEXCOORD4SARBPROC glMultiTexCoord4sARB;
typedef void (APIENTRYP PFNGLMULTITEXCOORD4SVARBPROC) (GLenum target, const GLshort *v);
extern PFNGLMULTITEXCOORD4SVARBPROC glMultiTexCoord4svARB;

// GL_ARB_transpose_matrix
typedef void (APIENTRYP PFNGLLOADTRANSPOSEMATRIXFARBPROC) (const GLfloat *m);
extern PFNGLLOADTRANSPOSEMATRIXFARBPROC glLoadTransposeMatrixfARB;
typedef void (APIENTRYP PFNGLLOADTRANSPOSEMATRIXDARBPROC) (const GLdouble *m);
extern PFNGLLOADTRANSPOSEMATRIXDARBPROC glLoadTransposeMatrixdARB;
typedef void (APIENTRYP PFNGLMULTTRANSPOSEMATRIXFARBPROC) (const GLfloat *m);
extern PFNGLMULTTRANSPOSEMATRIXFARBPROC glMultTransposeMatrixfARB;
typedef void (APIENTRYP PFNGLMULTTRANSPOSEMATRIXDARBPROC) (const GLdouble *m);
extern PFNGLMULTTRANSPOSEMATRIXDARBPROC glMultTransposeMatrixdARB;

// GL_ARB_multisample
typedef void (APIENTRYP PFNGLSAMPLECOVERAGEARBPROC) (GLclampf value, GLboolean invert);
extern PFNGLSAMPLECOVERAGEARBPROC glSampleCoverageARB;

// GL_ARB_texture_env_add

// GL_ARB_texture_cube_map

// GL_ARB_texture_compression
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXIMAGE3DARBPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data);
extern PFNGLCOMPRESSEDTEXIMAGE3DARBPROC glCompressedTexImage3DARB;
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXIMAGE2DARBPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
extern PFNGLCOMPRESSEDTEXIMAGE2DARBPROC glCompressedTexImage2DARB;
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXIMAGE1DARBPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);
extern PFNGLCOMPRESSEDTEXIMAGE1DARBPROC glCompressedTexImage1DARB;
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data);
extern PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC glCompressedTexSubImage3DARB;
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
extern PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC glCompressedTexSubImage2DARB;
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data);
extern PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC glCompressedTexSubImage1DARB;
typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXIMAGEARBPROC) (GLenum target, GLint level, GLvoid *img);
extern PFNGLGETCOMPRESSEDTEXIMAGEARBPROC glGetCompressedTexImageARB;

// GL_ARB_texture_border_clamp

// GL_ARB_point_parameters
typedef void (APIENTRYP PFNGLPOINTPARAMETERFARBPROC) (GLenum pname, GLfloat param);
extern PFNGLPOINTPARAMETERFARBPROC glPointParameterfARB;
typedef void (APIENTRYP PFNGLPOINTPARAMETERFVARBPROC) (GLenum pname, const GLfloat *params);
extern PFNGLPOINTPARAMETERFVARBPROC glPointParameterfvARB;

// GL_ARB_vertex_blend
typedef void (APIENTRYP PFNGLWEIGHTBVARBPROC) (GLint size, const GLbyte *weights);
extern PFNGLWEIGHTBVARBPROC glWeightbvARB;
typedef void (APIENTRYP PFNGLWEIGHTSVARBPROC) (GLint size, const GLshort *weights);
extern PFNGLWEIGHTSVARBPROC glWeightsvARB;
typedef void (APIENTRYP PFNGLWEIGHTIVARBPROC) (GLint size, const GLint *weights);
extern PFNGLWEIGHTIVARBPROC glWeightivARB;
typedef void (APIENTRYP PFNGLWEIGHTFVARBPROC) (GLint size, const GLfloat *weights);
extern PFNGLWEIGHTFVARBPROC glWeightfvARB;
typedef void (APIENTRYP PFNGLWEIGHTDVARBPROC) (GLint size, const GLdouble *weights);
extern PFNGLWEIGHTDVARBPROC glWeightdvARB;
typedef void (APIENTRYP PFNGLWEIGHTUBVARBPROC) (GLint size, const GLubyte *weights);
extern PFNGLWEIGHTUBVARBPROC glWeightubvARB;
typedef void (APIENTRYP PFNGLWEIGHTUSVARBPROC) (GLint size, const GLushort *weights);
extern PFNGLWEIGHTUSVARBPROC glWeightusvARB;
typedef void (APIENTRYP PFNGLWEIGHTUIVARBPROC) (GLint size, const GLuint *weights);
extern PFNGLWEIGHTUIVARBPROC glWeightuivARB;
typedef void (APIENTRYP PFNGLWEIGHTPOINTERARBPROC) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern PFNGLWEIGHTPOINTERARBPROC glWeightPointerARB;
typedef void (APIENTRYP PFNGLVERTEXBLENDARBPROC) (GLint count);
extern PFNGLVERTEXBLENDARBPROC glVertexBlendARB;

// GL_ARB_matrix_palette
typedef void (APIENTRYP PFNGLCURRENTPALETTEMATRIXARBPROC) (GLint index);
extern PFNGLCURRENTPALETTEMATRIXARBPROC glCurrentPaletteMatrixARB;
typedef void (APIENTRYP PFNGLMATRIXINDEXUBVARBPROC) (GLint size, const GLubyte *indices);
extern PFNGLMATRIXINDEXUBVARBPROC glMatrixIndexubvARB;
typedef void (APIENTRYP PFNGLMATRIXINDEXUSVARBPROC) (GLint size, const GLushort *indices);
extern PFNGLMATRIXINDEXUSVARBPROC glMatrixIndexusvARB;
typedef void (APIENTRYP PFNGLMATRIXINDEXUIVARBPROC) (GLint size, const GLuint *indices);
extern PFNGLMATRIXINDEXUIVARBPROC glMatrixIndexuivARB;
typedef void (APIENTRYP PFNGLMATRIXINDEXPOINTERARBPROC) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern PFNGLMATRIXINDEXPOINTERARBPROC glMatrixIndexPointerARB;

// GL_ARB_texture_env_combine

// GL_ARB_texture_env_crossbar

// GL_ARB_texture_env_dot3

// GL_ARB_texture_mirrored_repeat

// GL_ARB_depth_texture

// GL_ARB_shadow

// GL_ARB_shadow_ambient

// GL_ARB_window_pos
typedef void (APIENTRYP PFNGLWINDOWPOS2DARBPROC) (GLdouble x, GLdouble y);
extern PFNGLWINDOWPOS2DARBPROC glWindowPos2dARB;
typedef void (APIENTRYP PFNGLWINDOWPOS2DVARBPROC) (const GLdouble *v);
extern PFNGLWINDOWPOS2DVARBPROC glWindowPos2dvARB;
typedef void (APIENTRYP PFNGLWINDOWPOS2FARBPROC) (GLfloat x, GLfloat y);
extern PFNGLWINDOWPOS2FARBPROC glWindowPos2fARB;
typedef void (APIENTRYP PFNGLWINDOWPOS2FVARBPROC) (const GLfloat *v);
extern PFNGLWINDOWPOS2FVARBPROC glWindowPos2fvARB;
typedef void (APIENTRYP PFNGLWINDOWPOS2IARBPROC) (GLint x, GLint y);
extern PFNGLWINDOWPOS2IARBPROC glWindowPos2iARB;
typedef void (APIENTRYP PFNGLWINDOWPOS2IVARBPROC) (const GLint *v);
extern PFNGLWINDOWPOS2IVARBPROC glWindowPos2ivARB;
typedef void (APIENTRYP PFNGLWINDOWPOS2SARBPROC) (GLshort x, GLshort y);
extern PFNGLWINDOWPOS2SARBPROC glWindowPos2sARB;
typedef void (APIENTRYP PFNGLWINDOWPOS2SVARBPROC) (const GLshort *v);
extern PFNGLWINDOWPOS2SVARBPROC glWindowPos2svARB;
typedef void (APIENTRYP PFNGLWINDOWPOS3DARBPROC) (GLdouble x, GLdouble y, GLdouble z);
extern PFNGLWINDOWPOS3DARBPROC glWindowPos3dARB;
typedef void (APIENTRYP PFNGLWINDOWPOS3DVARBPROC) (const GLdouble *v);
extern PFNGLWINDOWPOS3DVARBPROC glWindowPos3dvARB;
typedef void (APIENTRYP PFNGLWINDOWPOS3FARBPROC) (GLfloat x, GLfloat y, GLfloat z);
extern PFNGLWINDOWPOS3FARBPROC glWindowPos3fARB;
typedef void (APIENTRYP PFNGLWINDOWPOS3FVARBPROC) (const GLfloat *v);
extern PFNGLWINDOWPOS3FVARBPROC glWindowPos3fvARB;
typedef void (APIENTRYP PFNGLWINDOWPOS3IARBPROC) (GLint x, GLint y, GLint z);
extern PFNGLWINDOWPOS3IARBPROC glWindowPos3iARB;
typedef void (APIENTRYP PFNGLWINDOWPOS3IVARBPROC) (const GLint *v);
extern PFNGLWINDOWPOS3IVARBPROC glWindowPos3ivARB;
typedef void (APIENTRYP PFNGLWINDOWPOS3SARBPROC) (GLshort x, GLshort y, GLshort z);
extern PFNGLWINDOWPOS3SARBPROC glWindowPos3sARB;
typedef void (APIENTRYP PFNGLWINDOWPOS3SVARBPROC) (const GLshort *v);
extern PFNGLWINDOWPOS3SVARBPROC glWindowPos3svARB;

// GL_ARB_vertex_program
typedef void (APIENTRYP PFNGLVERTEXATTRIB1DARBPROC) (GLuint index, GLdouble x);
extern PFNGLVERTEXATTRIB1DARBPROC glVertexAttrib1dARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB1DVARBPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIB1DVARBPROC glVertexAttrib1dvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB1FARBPROC) (GLuint index, GLfloat x);
extern PFNGLVERTEXATTRIB1FARBPROC glVertexAttrib1fARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB1FVARBPROC) (GLuint index, const GLfloat *v);
extern PFNGLVERTEXATTRIB1FVARBPROC glVertexAttrib1fvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB1SARBPROC) (GLuint index, GLshort x);
extern PFNGLVERTEXATTRIB1SARBPROC glVertexAttrib1sARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB1SVARBPROC) (GLuint index, const GLshort *v);
extern PFNGLVERTEXATTRIB1SVARBPROC glVertexAttrib1svARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB2DARBPROC) (GLuint index, GLdouble x, GLdouble y);
extern PFNGLVERTEXATTRIB2DARBPROC glVertexAttrib2dARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB2DVARBPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIB2DVARBPROC glVertexAttrib2dvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB2FARBPROC) (GLuint index, GLfloat x, GLfloat y);
extern PFNGLVERTEXATTRIB2FARBPROC glVertexAttrib2fARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB2FVARBPROC) (GLuint index, const GLfloat *v);
extern PFNGLVERTEXATTRIB2FVARBPROC glVertexAttrib2fvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB2SARBPROC) (GLuint index, GLshort x, GLshort y);
extern PFNGLVERTEXATTRIB2SARBPROC glVertexAttrib2sARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB2SVARBPROC) (GLuint index, const GLshort *v);
extern PFNGLVERTEXATTRIB2SVARBPROC glVertexAttrib2svARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB3DARBPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
extern PFNGLVERTEXATTRIB3DARBPROC glVertexAttrib3dARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB3DVARBPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIB3DVARBPROC glVertexAttrib3dvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB3FARBPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLVERTEXATTRIB3FARBPROC glVertexAttrib3fARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB3FVARBPROC) (GLuint index, const GLfloat *v);
extern PFNGLVERTEXATTRIB3FVARBPROC glVertexAttrib3fvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB3SARBPROC) (GLuint index, GLshort x, GLshort y, GLshort z);
extern PFNGLVERTEXATTRIB3SARBPROC glVertexAttrib3sARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB3SVARBPROC) (GLuint index, const GLshort *v);
extern PFNGLVERTEXATTRIB3SVARBPROC glVertexAttrib3svARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NBVARBPROC) (GLuint index, const GLbyte *v);
extern PFNGLVERTEXATTRIB4NBVARBPROC glVertexAttrib4NbvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NIVARBPROC) (GLuint index, const GLint *v);
extern PFNGLVERTEXATTRIB4NIVARBPROC glVertexAttrib4NivARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NSVARBPROC) (GLuint index, const GLshort *v);
extern PFNGLVERTEXATTRIB4NSVARBPROC glVertexAttrib4NsvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUBARBPROC) (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
extern PFNGLVERTEXATTRIB4NUBARBPROC glVertexAttrib4NubARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUBVARBPROC) (GLuint index, const GLubyte *v);
extern PFNGLVERTEXATTRIB4NUBVARBPROC glVertexAttrib4NubvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUIVARBPROC) (GLuint index, const GLuint *v);
extern PFNGLVERTEXATTRIB4NUIVARBPROC glVertexAttrib4NuivARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUSVARBPROC) (GLuint index, const GLushort *v);
extern PFNGLVERTEXATTRIB4NUSVARBPROC glVertexAttrib4NusvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4BVARBPROC) (GLuint index, const GLbyte *v);
extern PFNGLVERTEXATTRIB4BVARBPROC glVertexAttrib4bvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4DARBPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern PFNGLVERTEXATTRIB4DARBPROC glVertexAttrib4dARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4DVARBPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIB4DVARBPROC glVertexAttrib4dvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4FARBPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern PFNGLVERTEXATTRIB4FARBPROC glVertexAttrib4fARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4FVARBPROC) (GLuint index, const GLfloat *v);
extern PFNGLVERTEXATTRIB4FVARBPROC glVertexAttrib4fvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4IVARBPROC) (GLuint index, const GLint *v);
extern PFNGLVERTEXATTRIB4IVARBPROC glVertexAttrib4ivARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4SARBPROC) (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
extern PFNGLVERTEXATTRIB4SARBPROC glVertexAttrib4sARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4SVARBPROC) (GLuint index, const GLshort *v);
extern PFNGLVERTEXATTRIB4SVARBPROC glVertexAttrib4svARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4UBVARBPROC) (GLuint index, const GLubyte *v);
extern PFNGLVERTEXATTRIB4UBVARBPROC glVertexAttrib4ubvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4UIVARBPROC) (GLuint index, const GLuint *v);
extern PFNGLVERTEXATTRIB4UIVARBPROC glVertexAttrib4uivARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4USVARBPROC) (GLuint index, const GLushort *v);
extern PFNGLVERTEXATTRIB4USVARBPROC glVertexAttrib4usvARB;
typedef void (APIENTRYP PFNGLVERTEXATTRIBPOINTERARBPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer);
extern PFNGLVERTEXATTRIBPOINTERARBPROC glVertexAttribPointerARB;
typedef void (APIENTRYP PFNGLENABLEVERTEXATTRIBARRAYARBPROC) (GLuint index);
extern PFNGLENABLEVERTEXATTRIBARRAYARBPROC glEnableVertexAttribArrayARB;
typedef void (APIENTRYP PFNGLDISABLEVERTEXATTRIBARRAYARBPROC) (GLuint index);
extern PFNGLDISABLEVERTEXATTRIBARRAYARBPROC glDisableVertexAttribArrayARB;
typedef void (APIENTRYP PFNGLPROGRAMSTRINGARBPROC) (GLenum target, GLenum format, GLsizei len, const GLvoid *string);
extern PFNGLPROGRAMSTRINGARBPROC glProgramStringARB;
typedef void (APIENTRYP PFNGLBINDPROGRAMARBPROC) (GLenum target, GLuint program);
extern PFNGLBINDPROGRAMARBPROC glBindProgramARB;
typedef void (APIENTRYP PFNGLDELETEPROGRAMSARBPROC) (GLsizei n, const GLuint *programs);
extern PFNGLDELETEPROGRAMSARBPROC glDeleteProgramsARB;
typedef void (APIENTRYP PFNGLGENPROGRAMSARBPROC) (GLsizei n, GLuint *programs);
extern PFNGLGENPROGRAMSARBPROC glGenProgramsARB;
typedef void (APIENTRYP PFNGLPROGRAMENVPARAMETER4DARBPROC) (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern PFNGLPROGRAMENVPARAMETER4DARBPROC glProgramEnvParameter4dARB;
typedef void (APIENTRYP PFNGLPROGRAMENVPARAMETER4DVARBPROC) (GLenum target, GLuint index, const GLdouble *params);
extern PFNGLPROGRAMENVPARAMETER4DVARBPROC glProgramEnvParameter4dvARB;
typedef void (APIENTRYP PFNGLPROGRAMENVPARAMETER4FARBPROC) (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern PFNGLPROGRAMENVPARAMETER4FARBPROC glProgramEnvParameter4fARB;
typedef void (APIENTRYP PFNGLPROGRAMENVPARAMETER4FVARBPROC) (GLenum target, GLuint index, const GLfloat *params);
extern PFNGLPROGRAMENVPARAMETER4FVARBPROC glProgramEnvParameter4fvARB;
typedef void (APIENTRYP PFNGLPROGRAMLOCALPARAMETER4DARBPROC) (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern PFNGLPROGRAMLOCALPARAMETER4DARBPROC glProgramLocalParameter4dARB;
typedef void (APIENTRYP PFNGLPROGRAMLOCALPARAMETER4DVARBPROC) (GLenum target, GLuint index, const GLdouble *params);
extern PFNGLPROGRAMLOCALPARAMETER4DVARBPROC glProgramLocalParameter4dvARB;
typedef void (APIENTRYP PFNGLPROGRAMLOCALPARAMETER4FARBPROC) (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern PFNGLPROGRAMLOCALPARAMETER4FARBPROC glProgramLocalParameter4fARB;
typedef void (APIENTRYP PFNGLPROGRAMLOCALPARAMETER4FVARBPROC) (GLenum target, GLuint index, const GLfloat *params);
extern PFNGLPROGRAMLOCALPARAMETER4FVARBPROC glProgramLocalParameter4fvARB;
typedef void (APIENTRYP PFNGLGETPROGRAMENVPARAMETERDVARBPROC) (GLenum target, GLuint index, GLdouble *params);
extern PFNGLGETPROGRAMENVPARAMETERDVARBPROC glGetProgramEnvParameterdvARB;
typedef void (APIENTRYP PFNGLGETPROGRAMENVPARAMETERFVARBPROC) (GLenum target, GLuint index, GLfloat *params);
extern PFNGLGETPROGRAMENVPARAMETERFVARBPROC glGetProgramEnvParameterfvARB;
typedef void (APIENTRYP PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC) (GLenum target, GLuint index, GLdouble *params);
extern PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC glGetProgramLocalParameterdvARB;
typedef void (APIENTRYP PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC) (GLenum target, GLuint index, GLfloat *params);
extern PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC glGetProgramLocalParameterfvARB;
typedef void (APIENTRYP PFNGLGETPROGRAMIVARBPROC) (GLenum target, GLenum pname, GLint *params);
extern PFNGLGETPROGRAMIVARBPROC glGetProgramivARB;
typedef void (APIENTRYP PFNGLGETPROGRAMSTRINGARBPROC) (GLenum target, GLenum pname, GLvoid *string);
extern PFNGLGETPROGRAMSTRINGARBPROC glGetProgramStringARB;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBDVARBPROC) (GLuint index, GLenum pname, GLdouble *params);
extern PFNGLGETVERTEXATTRIBDVARBPROC glGetVertexAttribdvARB;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBFVARBPROC) (GLuint index, GLenum pname, GLfloat *params);
extern PFNGLGETVERTEXATTRIBFVARBPROC glGetVertexAttribfvARB;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIVARBPROC) (GLuint index, GLenum pname, GLint *params);
extern PFNGLGETVERTEXATTRIBIVARBPROC glGetVertexAttribivARB;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBPOINTERVARBPROC) (GLuint index, GLenum pname, GLvoid* *pointer);
extern PFNGLGETVERTEXATTRIBPOINTERVARBPROC glGetVertexAttribPointervARB;
typedef GLboolean (APIENTRYP PFNGLISPROGRAMARBPROC) (GLuint program);
extern PFNGLISPROGRAMARBPROC glIsProgramARB;

// GL_ARB_fragment_program

// GL_ARB_vertex_buffer_object

// GL_ARB_occlusion_query
typedef void (APIENTRYP PFNGLGENQUERIESARBPROC) (GLsizei n, GLuint *ids);
extern PFNGLGENQUERIESARBPROC glGenQueriesARB;
typedef void (APIENTRYP PFNGLDELETEQUERIESARBPROC) (GLsizei n, const GLuint *ids);
extern PFNGLDELETEQUERIESARBPROC glDeleteQueriesARB;
typedef GLboolean (APIENTRYP PFNGLISQUERYARBPROC) (GLuint id);
extern PFNGLISQUERYARBPROC glIsQueryARB;
typedef void (APIENTRYP PFNGLBEGINQUERYARBPROC) (GLenum target, GLuint id);
extern PFNGLBEGINQUERYARBPROC glBeginQueryARB;
typedef void (APIENTRYP PFNGLENDQUERYARBPROC) (GLenum target);
extern PFNGLENDQUERYARBPROC glEndQueryARB;
typedef void (APIENTRYP PFNGLGETQUERYIVARBPROC) (GLenum target, GLenum pname, GLint *params);
extern PFNGLGETQUERYIVARBPROC glGetQueryivARB;
typedef void (APIENTRYP PFNGLGETQUERYOBJECTIVARBPROC) (GLuint id, GLenum pname, GLint *params);
extern PFNGLGETQUERYOBJECTIVARBPROC glGetQueryObjectivARB;
typedef void (APIENTRYP PFNGLGETQUERYOBJECTUIVARBPROC) (GLuint id, GLenum pname, GLuint *params);
extern PFNGLGETQUERYOBJECTUIVARBPROC glGetQueryObjectuivARB;

// GL_ARB_shader_objects
typedef void (APIENTRYP PFNGLDELETEOBJECTARBPROC) (GLhandleARB obj);
extern PFNGLDELETEOBJECTARBPROC glDeleteObjectARB;
typedef GLhandleARB (APIENTRYP PFNGLGETHANDLEARBPROC) (GLenum pname);
extern PFNGLGETHANDLEARBPROC glGetHandleARB;
typedef void (APIENTRYP PFNGLDETACHOBJECTARBPROC) (GLhandleARB containerObj, GLhandleARB attachedObj);
extern PFNGLDETACHOBJECTARBPROC glDetachObjectARB;
typedef GLhandleARB (APIENTRYP PFNGLCREATESHADEROBJECTARBPROC) (GLenum shaderType);
extern PFNGLCREATESHADEROBJECTARBPROC glCreateShaderObjectARB;
typedef void (APIENTRYP PFNGLSHADERSOURCEARBPROC) (GLhandleARB shaderObj, GLsizei count, const GLcharARB* *string, const GLint *length);
extern PFNGLSHADERSOURCEARBPROC glShaderSourceARB;
typedef void (APIENTRYP PFNGLCOMPILESHADERARBPROC) (GLhandleARB shaderObj);
extern PFNGLCOMPILESHADERARBPROC glCompileShaderARB;
typedef GLhandleARB (APIENTRYP PFNGLCREATEPROGRAMOBJECTARBPROC) (void);
extern PFNGLCREATEPROGRAMOBJECTARBPROC glCreateProgramObjectARB;
typedef void (APIENTRYP PFNGLATTACHOBJECTARBPROC) (GLhandleARB containerObj, GLhandleARB obj);
extern PFNGLATTACHOBJECTARBPROC glAttachObjectARB;
typedef void (APIENTRYP PFNGLLINKPROGRAMARBPROC) (GLhandleARB programObj);
extern PFNGLLINKPROGRAMARBPROC glLinkProgramARB;
typedef void (APIENTRYP PFNGLUSEPROGRAMOBJECTARBPROC) (GLhandleARB programObj);
extern PFNGLUSEPROGRAMOBJECTARBPROC glUseProgramObjectARB;
typedef void (APIENTRYP PFNGLVALIDATEPROGRAMARBPROC) (GLhandleARB programObj);
extern PFNGLVALIDATEPROGRAMARBPROC glValidateProgramARB;
typedef void (APIENTRYP PFNGLUNIFORM1FARBPROC) (GLint location, GLfloat v0);
extern PFNGLUNIFORM1FARBPROC glUniform1fARB;
typedef void (APIENTRYP PFNGLUNIFORM2FARBPROC) (GLint location, GLfloat v0, GLfloat v1);
extern PFNGLUNIFORM2FARBPROC glUniform2fARB;
typedef void (APIENTRYP PFNGLUNIFORM3FARBPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
extern PFNGLUNIFORM3FARBPROC glUniform3fARB;
typedef void (APIENTRYP PFNGLUNIFORM4FARBPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
extern PFNGLUNIFORM4FARBPROC glUniform4fARB;
typedef void (APIENTRYP PFNGLUNIFORM1IARBPROC) (GLint location, GLint v0);
extern PFNGLUNIFORM1IARBPROC glUniform1iARB;
typedef void (APIENTRYP PFNGLUNIFORM2IARBPROC) (GLint location, GLint v0, GLint v1);
extern PFNGLUNIFORM2IARBPROC glUniform2iARB;
typedef void (APIENTRYP PFNGLUNIFORM3IARBPROC) (GLint location, GLint v0, GLint v1, GLint v2);
extern PFNGLUNIFORM3IARBPROC glUniform3iARB;
typedef void (APIENTRYP PFNGLUNIFORM4IARBPROC) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
extern PFNGLUNIFORM4IARBPROC glUniform4iARB;
typedef void (APIENTRYP PFNGLUNIFORM1FVARBPROC) (GLint location, GLsizei count, const GLfloat *value);
extern PFNGLUNIFORM1FVARBPROC glUniform1fvARB;
typedef void (APIENTRYP PFNGLUNIFORM2FVARBPROC) (GLint location, GLsizei count, const GLfloat *value);
extern PFNGLUNIFORM2FVARBPROC glUniform2fvARB;
typedef void (APIENTRYP PFNGLUNIFORM3FVARBPROC) (GLint location, GLsizei count, const GLfloat *value);
extern PFNGLUNIFORM3FVARBPROC glUniform3fvARB;
typedef void (APIENTRYP PFNGLUNIFORM4FVARBPROC) (GLint location, GLsizei count, const GLfloat *value);
extern PFNGLUNIFORM4FVARBPROC glUniform4fvARB;
typedef void (APIENTRYP PFNGLUNIFORM1IVARBPROC) (GLint location, GLsizei count, const GLint *value);
extern PFNGLUNIFORM1IVARBPROC glUniform1ivARB;
typedef void (APIENTRYP PFNGLUNIFORM2IVARBPROC) (GLint location, GLsizei count, const GLint *value);
extern PFNGLUNIFORM2IVARBPROC glUniform2ivARB;
typedef void (APIENTRYP PFNGLUNIFORM3IVARBPROC) (GLint location, GLsizei count, const GLint *value);
extern PFNGLUNIFORM3IVARBPROC glUniform3ivARB;
typedef void (APIENTRYP PFNGLUNIFORM4IVARBPROC) (GLint location, GLsizei count, const GLint *value);
extern PFNGLUNIFORM4IVARBPROC glUniform4ivARB;
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2FVARBPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLUNIFORMMATRIX2FVARBPROC glUniformMatrix2fvARB;
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3FVARBPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLUNIFORMMATRIX3FVARBPROC glUniformMatrix3fvARB;
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4FVARBPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLUNIFORMMATRIX4FVARBPROC glUniformMatrix4fvARB;
typedef void (APIENTRYP PFNGLGETOBJECTPARAMETERFVARBPROC) (GLhandleARB obj, GLenum pname, GLfloat *params);
extern PFNGLGETOBJECTPARAMETERFVARBPROC glGetObjectParameterfvARB;
typedef void (APIENTRYP PFNGLGETOBJECTPARAMETERIVARBPROC) (GLhandleARB obj, GLenum pname, GLint *params);
extern PFNGLGETOBJECTPARAMETERIVARBPROC glGetObjectParameterivARB;
typedef void (APIENTRYP PFNGLGETINFOLOGARBPROC) (GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog);
extern PFNGLGETINFOLOGARBPROC glGetInfoLogARB;
typedef void (APIENTRYP PFNGLGETATTACHEDOBJECTSARBPROC) (GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj);
extern PFNGLGETATTACHEDOBJECTSARBPROC glGetAttachedObjectsARB;
typedef GLint (APIENTRYP PFNGLGETUNIFORMLOCATIONARBPROC) (GLhandleARB programObj, const GLcharARB *name);
extern PFNGLGETUNIFORMLOCATIONARBPROC glGetUniformLocationARB;
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMARBPROC) (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
extern PFNGLGETACTIVEUNIFORMARBPROC glGetActiveUniformARB;
typedef void (APIENTRYP PFNGLGETUNIFORMFVARBPROC) (GLhandleARB programObj, GLint location, GLfloat *params);
extern PFNGLGETUNIFORMFVARBPROC glGetUniformfvARB;
typedef void (APIENTRYP PFNGLGETUNIFORMIVARBPROC) (GLhandleARB programObj, GLint location, GLint *params);
extern PFNGLGETUNIFORMIVARBPROC glGetUniformivARB;
typedef void (APIENTRYP PFNGLGETSHADERSOURCEARBPROC) (GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source);
extern PFNGLGETSHADERSOURCEARBPROC glGetShaderSourceARB;

// GL_ARB_vertex_shader
typedef void (APIENTRYP PFNGLBINDATTRIBLOCATIONARBPROC) (GLhandleARB programObj, GLuint index, const GLcharARB *name);
extern PFNGLBINDATTRIBLOCATIONARBPROC glBindAttribLocationARB;
typedef void (APIENTRYP PFNGLGETACTIVEATTRIBARBPROC) (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
extern PFNGLGETACTIVEATTRIBARBPROC glGetActiveAttribARB;
typedef GLint (APIENTRYP PFNGLGETATTRIBLOCATIONARBPROC) (GLhandleARB programObj, const GLcharARB *name);
extern PFNGLGETATTRIBLOCATIONARBPROC glGetAttribLocationARB;

// GL_ARB_fragment_shader

// GL_ARB_shading_language_100

// GL_ARB_texture_non_power_of_two

// GL_ARB_point_sprite

// GL_ARB_fragment_program_shadow

// GL_ARB_draw_buffers
typedef void (APIENTRYP PFNGLDRAWBUFFERSARBPROC) (GLsizei n, const GLenum *bufs);
extern PFNGLDRAWBUFFERSARBPROC glDrawBuffersARB;

// GL_ARB_texture_rectangle

// GL_ARB_color_buffer_float
typedef void (APIENTRYP PFNGLCLAMPCOLORARBPROC) (GLenum target, GLenum clamp);
extern PFNGLCLAMPCOLORARBPROC glClampColorARB;

// GL_ARB_half_float_pixel

// GL_ARB_texture_float

// GL_ARB_pixel_buffer_object

// GL_ARB_depth_buffer_float

// GL_ARB_draw_instanced
typedef void (APIENTRYP PFNGLDRAWARRAYSINSTANCEDARBPROC) (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
extern PFNGLDRAWARRAYSINSTANCEDARBPROC glDrawArraysInstancedARB;
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDARBPROC) (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount);
extern PFNGLDRAWELEMENTSINSTANCEDARBPROC glDrawElementsInstancedARB;

// GL_ARB_framebuffer_object
typedef GLboolean (APIENTRYP PFNGLISRENDERBUFFERPROC) (GLuint renderbuffer);
extern PFNGLISRENDERBUFFERPROC glIsRenderbuffer;
typedef void (APIENTRYP PFNGLBINDRENDERBUFFERPROC) (GLenum target, GLuint renderbuffer);
extern PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer;
typedef void (APIENTRYP PFNGLDELETERENDERBUFFERSPROC) (GLsizei n, const GLuint *renderbuffers);
extern PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;
typedef void (APIENTRYP PFNGLGENRENDERBUFFERSPROC) (GLsizei n, GLuint *renderbuffers);
extern PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers;
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
extern PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage;
typedef void (APIENTRYP PFNGLGETRENDERBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
extern PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv;
typedef GLboolean (APIENTRYP PFNGLISFRAMEBUFFERPROC) (GLuint framebuffer);
extern PFNGLISFRAMEBUFFERPROC glIsFramebuffer;
typedef void (APIENTRYP PFNGLBINDFRAMEBUFFERPROC) (GLenum target, GLuint framebuffer);
extern PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer;
typedef void (APIENTRYP PFNGLDELETEFRAMEBUFFERSPROC) (GLsizei n, const GLuint *framebuffers);
extern PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers;
typedef void (APIENTRYP PFNGLGENFRAMEBUFFERSPROC) (GLsizei n, GLuint *framebuffers);
extern PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers;
typedef GLenum (APIENTRYP PFNGLCHECKFRAMEBUFFERSTATUSPROC) (GLenum target);
extern PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus;
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE1DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D;
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D;
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE3DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
extern PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D;
typedef void (APIENTRYP PFNGLFRAMEBUFFERRENDERBUFFERPROC) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
extern PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer;
typedef void (APIENTRYP PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLenum target, GLenum attachment, GLenum pname, GLint *params);
extern PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv;
typedef void (APIENTRYP PFNGLGENERATEMIPMAPPROC) (GLenum target);
extern PFNGLGENERATEMIPMAPPROC glGenerateMipmap;
typedef void (APIENTRYP PFNGLBLITFRAMEBUFFERPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
extern PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer;
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample;
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYERPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
extern PFNGLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer;

// GL_ARB_framebuffer_sRGB

// GL_ARB_geometry_shader4
typedef void (APIENTRYP PFNGLPROGRAMPARAMETERIARBPROC) (GLuint program, GLenum pname, GLint value);
extern PFNGLPROGRAMPARAMETERIARBPROC glProgramParameteriARB;
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTUREARBPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);
extern PFNGLFRAMEBUFFERTEXTUREARBPROC glFramebufferTextureARB;
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYERARBPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
extern PFNGLFRAMEBUFFERTEXTURELAYERARBPROC glFramebufferTextureLayerARB;
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTUREFACEARBPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
extern PFNGLFRAMEBUFFERTEXTUREFACEARBPROC glFramebufferTextureFaceARB;

// GL_ARB_half_float_vertex

// GL_ARB_instanced_arrays
typedef void (APIENTRYP PFNGLVERTEXATTRIBDIVISORARBPROC) (GLuint index, GLuint divisor);
extern PFNGLVERTEXATTRIBDIVISORARBPROC glVertexAttribDivisorARB;

// GL_ARB_map_buffer_range
typedef GLvoid* (APIENTRYP PFNGLMAPBUFFERRANGEPROC) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
extern PFNGLMAPBUFFERRANGEPROC glMapBufferRange;
typedef void (APIENTRYP PFNGLFLUSHMAPPEDBUFFERRANGEPROC) (GLenum target, GLintptr offset, GLsizeiptr length);
extern PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange;

// GL_ARB_texture_buffer_object
typedef void (APIENTRYP PFNGLTEXBUFFERARBPROC) (GLenum target, GLenum internalformat, GLuint buffer);
extern PFNGLTEXBUFFERARBPROC glTexBufferARB;

// GL_ARB_texture_compression_rgtc

// GL_ARB_texture_rg

// GL_ARB_vertex_array_object
typedef void (APIENTRYP PFNGLBINDVERTEXARRAYPROC) (GLuint array);
extern PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
typedef void (APIENTRYP PFNGLDELETEVERTEXARRAYSPROC) (GLsizei n, const GLuint *arrays);
extern PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;
typedef void (APIENTRYP PFNGLGENVERTEXARRAYSPROC) (GLsizei n, GLuint *arrays);
extern PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;
typedef GLboolean (APIENTRYP PFNGLISVERTEXARRAYPROC) (GLuint array);
extern PFNGLISVERTEXARRAYPROC glIsVertexArray;

// GL_ARB_uniform_buffer_object
typedef void (APIENTRYP PFNGLGETUNIFORMINDICESPROC) (GLuint program, GLsizei uniformCount, const GLchar* *uniformNames, GLuint *uniformIndices);
extern PFNGLGETUNIFORMINDICESPROC glGetUniformIndices;
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMSIVPROC) (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
extern PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv;
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMNAMEPROC) (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
extern PFNGLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName;
typedef GLuint (APIENTRYP PFNGLGETUNIFORMBLOCKINDEXPROC) (GLuint program, const GLchar *uniformBlockName);
extern PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex;
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMBLOCKIVPROC) (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
extern PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv;
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
extern PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName;
typedef void (APIENTRYP PFNGLUNIFORMBLOCKBINDINGPROC) (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
extern PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding;

// GL_ARB_compatibility

// GL_ARB_copy_buffer
typedef void (APIENTRYP PFNGLCOPYBUFFERSUBDATAPROC) (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
extern PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData;

// GL_ARB_shader_texture_lod

// GL_ARB_depth_clamp

// GL_ARB_draw_elements_base_vertex
typedef void (APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXPROC) (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex);
extern PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex;
typedef void (APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex);
extern PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex;
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount, GLint basevertex);
extern PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex;
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) (GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount, const GLint *basevertex);
extern PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex;

// GL_ARB_fragment_coord_conventions

// GL_ARB_provoking_vertex
typedef void (APIENTRYP PFNGLPROVOKINGVERTEXPROC) (GLenum mode);
extern PFNGLPROVOKINGVERTEXPROC glProvokingVertex;

// GL_ARB_seamless_cube_map

// GL_ARB_sync
typedef GLsync (APIENTRYP PFNGLFENCESYNCPROC) (GLenum condition, GLbitfield flags);
extern PFNGLFENCESYNCPROC glFenceSync;
typedef GLboolean (APIENTRYP PFNGLISSYNCPROC) (GLsync sync);
extern PFNGLISSYNCPROC glIsSync;
typedef void (APIENTRYP PFNGLDELETESYNCPROC) (GLsync sync);
extern PFNGLDELETESYNCPROC glDeleteSync;
typedef GLenum (APIENTRYP PFNGLCLIENTWAITSYNCPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
extern PFNGLCLIENTWAITSYNCPROC glClientWaitSync;
typedef void (APIENTRYP PFNGLWAITSYNCPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
extern PFNGLWAITSYNCPROC glWaitSync;
typedef void (APIENTRYP PFNGLGETINTEGER64VPROC) (GLenum pname, GLint64 *params);
extern PFNGLGETINTEGER64VPROC glGetInteger64v;
typedef void (APIENTRYP PFNGLGETSYNCIVPROC) (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
extern PFNGLGETSYNCIVPROC glGetSynciv;

// GL_ARB_texture_multisample
typedef void (APIENTRYP PFNGLTEXIMAGE2DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
extern PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample;
typedef void (APIENTRYP PFNGLTEXIMAGE3DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
extern PFNGLTEXIMAGE3DMULTISAMPLEPROC glTexImage3DMultisample;
typedef void (APIENTRYP PFNGLGETMULTISAMPLEFVPROC) (GLenum pname, GLuint index, GLfloat *val);
extern PFNGLGETMULTISAMPLEFVPROC glGetMultisamplefv;
typedef void (APIENTRYP PFNGLSAMPLEMASKIPROC) (GLuint index, GLbitfield mask);
extern PFNGLSAMPLEMASKIPROC glSampleMaski;

// GL_ARB_vertex_array_bgra

// GL_ARB_draw_buffers_blend
typedef void (APIENTRYP PFNGLBLENDEQUATIONIARBPROC) (GLuint buf, GLenum mode);
extern PFNGLBLENDEQUATIONIARBPROC glBlendEquationiARB;
typedef void (APIENTRYP PFNGLBLENDEQUATIONSEPARATEIARBPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
extern PFNGLBLENDEQUATIONSEPARATEIARBPROC glBlendEquationSeparateiARB;
typedef void (APIENTRYP PFNGLBLENDFUNCIARBPROC) (GLuint buf, GLenum src, GLenum dst);
extern PFNGLBLENDFUNCIARBPROC glBlendFunciARB;
typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEIARBPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
extern PFNGLBLENDFUNCSEPARATEIARBPROC glBlendFuncSeparateiARB;

// GL_ARB_sample_shading
typedef void (APIENTRYP PFNGLMINSAMPLESHADINGARBPROC) (GLclampf value);
extern PFNGLMINSAMPLESHADINGARBPROC glMinSampleShadingARB;

// GL_ARB_texture_cube_map_array

// GL_ARB_texture_gather

// GL_ARB_texture_query_lod

// GL_ARB_shading_language_include
typedef void (APIENTRYP PFNGLNAMEDSTRINGARBPROC) (GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string);
extern PFNGLNAMEDSTRINGARBPROC glNamedStringARB;
typedef void (APIENTRYP PFNGLDELETENAMEDSTRINGARBPROC) (GLint namelen, const GLchar *name);
extern PFNGLDELETENAMEDSTRINGARBPROC glDeleteNamedStringARB;
typedef void (APIENTRYP PFNGLCOMPILESHADERINCLUDEARBPROC) (GLuint shader, GLsizei count, const GLchar* *path, const GLint *length);
extern PFNGLCOMPILESHADERINCLUDEARBPROC glCompileShaderIncludeARB;
typedef GLboolean (APIENTRYP PFNGLISNAMEDSTRINGARBPROC) (GLint namelen, const GLchar *name);
extern PFNGLISNAMEDSTRINGARBPROC glIsNamedStringARB;
typedef void (APIENTRYP PFNGLGETNAMEDSTRINGARBPROC) (GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string);
extern PFNGLGETNAMEDSTRINGARBPROC glGetNamedStringARB;
typedef void (APIENTRYP PFNGLGETNAMEDSTRINGIVARBPROC) (GLint namelen, const GLchar *name, GLenum pname, GLint *params);
extern PFNGLGETNAMEDSTRINGIVARBPROC glGetNamedStringivARB;

// GL_ARB_texture_compression_bptc

// GL_ARB_blend_func_extended
typedef void (APIENTRYP PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
extern PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed;
typedef GLint (APIENTRYP PFNGLGETFRAGDATAINDEXPROC) (GLuint program, const GLchar *name);
extern PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex;

// GL_ARB_explicit_attrib_location

// GL_ARB_occlusion_query2

// GL_ARB_sampler_objects
typedef void (APIENTRYP PFNGLGENSAMPLERSPROC) (GLsizei count, GLuint *samplers);
extern PFNGLGENSAMPLERSPROC glGenSamplers;
typedef void (APIENTRYP PFNGLDELETESAMPLERSPROC) (GLsizei count, const GLuint *samplers);
extern PFNGLDELETESAMPLERSPROC glDeleteSamplers;
typedef GLboolean (APIENTRYP PFNGLISSAMPLERPROC) (GLuint sampler);
extern PFNGLISSAMPLERPROC glIsSampler;
typedef void (APIENTRYP PFNGLBINDSAMPLERPROC) (GLuint unit, GLuint sampler);
extern PFNGLBINDSAMPLERPROC glBindSampler;
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIPROC) (GLuint sampler, GLenum pname, GLint param);
extern PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri;
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIVPROC) (GLuint sampler, GLenum pname, const GLint *param);
extern PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv;
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERFPROC) (GLuint sampler, GLenum pname, GLfloat param);
extern PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf;
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERFVPROC) (GLuint sampler, GLenum pname, const GLfloat *param);
extern PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv;
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIIVPROC) (GLuint sampler, GLenum pname, const GLint *param);
extern PFNGLSAMPLERPARAMETERIIVPROC glSamplerParameterIiv;
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIUIVPROC) (GLuint sampler, GLenum pname, const GLuint *param);
extern PFNGLSAMPLERPARAMETERIUIVPROC glSamplerParameterIuiv;
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIVPROC) (GLuint sampler, GLenum pname, GLint *params);
extern PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv;
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIIVPROC) (GLuint sampler, GLenum pname, GLint *params);
extern PFNGLGETSAMPLERPARAMETERIIVPROC glGetSamplerParameterIiv;
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERFVPROC) (GLuint sampler, GLenum pname, GLfloat *params);
extern PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv;
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVPROC) (GLuint sampler, GLenum pname, GLuint *params);
extern PFNGLGETSAMPLERPARAMETERIUIVPROC glGetSamplerParameterIuiv;

// GL_ARB_shader_bit_encoding

// GL_ARB_texture_rgb10_a2ui

// GL_ARB_texture_swizzle

// GL_ARB_timer_query
typedef void (APIENTRYP PFNGLQUERYCOUNTERPROC) (GLuint id, GLenum target);
extern PFNGLQUERYCOUNTERPROC glQueryCounter;
typedef void (APIENTRYP PFNGLGETQUERYOBJECTI64VPROC) (GLuint id, GLenum pname, GLint64 *params);
extern PFNGLGETQUERYOBJECTI64VPROC glGetQueryObjecti64v;
typedef void (APIENTRYP PFNGLGETQUERYOBJECTUI64VPROC) (GLuint id, GLenum pname, GLuint64 *params);
extern PFNGLGETQUERYOBJECTUI64VPROC glGetQueryObjectui64v;

// GL_ARB_vertex_type_2_10_10_10_rev
typedef void (APIENTRYP PFNGLVERTEXP2UIPROC) (GLenum type, GLuint value);
extern PFNGLVERTEXP2UIPROC glVertexP2ui;
typedef void (APIENTRYP PFNGLVERTEXP2UIVPROC) (GLenum type, const GLuint *value);
extern PFNGLVERTEXP2UIVPROC glVertexP2uiv;
typedef void (APIENTRYP PFNGLVERTEXP3UIPROC) (GLenum type, GLuint value);
extern PFNGLVERTEXP3UIPROC glVertexP3ui;
typedef void (APIENTRYP PFNGLVERTEXP3UIVPROC) (GLenum type, const GLuint *value);
extern PFNGLVERTEXP3UIVPROC glVertexP3uiv;
typedef void (APIENTRYP PFNGLVERTEXP4UIPROC) (GLenum type, GLuint value);
extern PFNGLVERTEXP4UIPROC glVertexP4ui;
typedef void (APIENTRYP PFNGLVERTEXP4UIVPROC) (GLenum type, const GLuint *value);
extern PFNGLVERTEXP4UIVPROC glVertexP4uiv;
typedef void (APIENTRYP PFNGLTEXCOORDP1UIPROC) (GLenum type, GLuint coords);
extern PFNGLTEXCOORDP1UIPROC glTexCoordP1ui;
typedef void (APIENTRYP PFNGLTEXCOORDP1UIVPROC) (GLenum type, const GLuint *coords);
extern PFNGLTEXCOORDP1UIVPROC glTexCoordP1uiv;
typedef void (APIENTRYP PFNGLTEXCOORDP2UIPROC) (GLenum type, GLuint coords);
extern PFNGLTEXCOORDP2UIPROC glTexCoordP2ui;
typedef void (APIENTRYP PFNGLTEXCOORDP2UIVPROC) (GLenum type, const GLuint *coords);
extern PFNGLTEXCOORDP2UIVPROC glTexCoordP2uiv;
typedef void (APIENTRYP PFNGLTEXCOORDP3UIPROC) (GLenum type, GLuint coords);
extern PFNGLTEXCOORDP3UIPROC glTexCoordP3ui;
typedef void (APIENTRYP PFNGLTEXCOORDP3UIVPROC) (GLenum type, const GLuint *coords);
extern PFNGLTEXCOORDP3UIVPROC glTexCoordP3uiv;
typedef void (APIENTRYP PFNGLTEXCOORDP4UIPROC) (GLenum type, GLuint coords);
extern PFNGLTEXCOORDP4UIPROC glTexCoordP4ui;
typedef void (APIENTRYP PFNGLTEXCOORDP4UIVPROC) (GLenum type, const GLuint *coords);
extern PFNGLTEXCOORDP4UIVPROC glTexCoordP4uiv;
typedef void (APIENTRYP PFNGLMULTITEXCOORDP1UIPROC) (GLenum texture, GLenum type, GLuint coords);
extern PFNGLMULTITEXCOORDP1UIPROC glMultiTexCoordP1ui;
typedef void (APIENTRYP PFNGLMULTITEXCOORDP1UIVPROC) (GLenum texture, GLenum type, const GLuint *coords);
extern PFNGLMULTITEXCOORDP1UIVPROC glMultiTexCoordP1uiv;
typedef void (APIENTRYP PFNGLMULTITEXCOORDP2UIPROC) (GLenum texture, GLenum type, GLuint coords);
extern PFNGLMULTITEXCOORDP2UIPROC glMultiTexCoordP2ui;
typedef void (APIENTRYP PFNGLMULTITEXCOORDP2UIVPROC) (GLenum texture, GLenum type, const GLuint *coords);
extern PFNGLMULTITEXCOORDP2UIVPROC glMultiTexCoordP2uiv;
typedef void (APIENTRYP PFNGLMULTITEXCOORDP3UIPROC) (GLenum texture, GLenum type, GLuint coords);
extern PFNGLMULTITEXCOORDP3UIPROC glMultiTexCoordP3ui;
typedef void (APIENTRYP PFNGLMULTITEXCOORDP3UIVPROC) (GLenum texture, GLenum type, const GLuint *coords);
extern PFNGLMULTITEXCOORDP3UIVPROC glMultiTexCoordP3uiv;
typedef void (APIENTRYP PFNGLMULTITEXCOORDP4UIPROC) (GLenum texture, GLenum type, GLuint coords);
extern PFNGLMULTITEXCOORDP4UIPROC glMultiTexCoordP4ui;
typedef void (APIENTRYP PFNGLMULTITEXCOORDP4UIVPROC) (GLenum texture, GLenum type, const GLuint *coords);
extern PFNGLMULTITEXCOORDP4UIVPROC glMultiTexCoordP4uiv;
typedef void (APIENTRYP PFNGLNORMALP3UIPROC) (GLenum type, GLuint coords);
extern PFNGLNORMALP3UIPROC glNormalP3ui;
typedef void (APIENTRYP PFNGLNORMALP3UIVPROC) (GLenum type, const GLuint *coords);
extern PFNGLNORMALP3UIVPROC glNormalP3uiv;
typedef void (APIENTRYP PFNGLCOLORP3UIPROC) (GLenum type, GLuint color);
extern PFNGLCOLORP3UIPROC glColorP3ui;
typedef void (APIENTRYP PFNGLCOLORP3UIVPROC) (GLenum type, const GLuint *color);
extern PFNGLCOLORP3UIVPROC glColorP3uiv;
typedef void (APIENTRYP PFNGLCOLORP4UIPROC) (GLenum type, GLuint color);
extern PFNGLCOLORP4UIPROC glColorP4ui;
typedef void (APIENTRYP PFNGLCOLORP4UIVPROC) (GLenum type, const GLuint *color);
extern PFNGLCOLORP4UIVPROC glColorP4uiv;
typedef void (APIENTRYP PFNGLSECONDARYCOLORP3UIPROC) (GLenum type, GLuint color);
extern PFNGLSECONDARYCOLORP3UIPROC glSecondaryColorP3ui;
typedef void (APIENTRYP PFNGLSECONDARYCOLORP3UIVPROC) (GLenum type, const GLuint *color);
extern PFNGLSECONDARYCOLORP3UIVPROC glSecondaryColorP3uiv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBP1UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
extern PFNGLVERTEXATTRIBP1UIPROC glVertexAttribP1ui;
typedef void (APIENTRYP PFNGLVERTEXATTRIBP1UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
extern PFNGLVERTEXATTRIBP1UIVPROC glVertexAttribP1uiv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBP2UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
extern PFNGLVERTEXATTRIBP2UIPROC glVertexAttribP2ui;
typedef void (APIENTRYP PFNGLVERTEXATTRIBP2UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
extern PFNGLVERTEXATTRIBP2UIVPROC glVertexAttribP2uiv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBP3UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
extern PFNGLVERTEXATTRIBP3UIPROC glVertexAttribP3ui;
typedef void (APIENTRYP PFNGLVERTEXATTRIBP3UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
extern PFNGLVERTEXATTRIBP3UIVPROC glVertexAttribP3uiv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBP4UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
extern PFNGLVERTEXATTRIBP4UIPROC glVertexAttribP4ui;
typedef void (APIENTRYP PFNGLVERTEXATTRIBP4UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
extern PFNGLVERTEXATTRIBP4UIVPROC glVertexAttribP4uiv;

// GL_ARB_draw_indirect
typedef void (APIENTRYP PFNGLDRAWARRAYSINDIRECTPROC) (GLenum mode, const GLvoid *indirect);
extern PFNGLDRAWARRAYSINDIRECTPROC glDrawArraysIndirect;
typedef void (APIENTRYP PFNGLDRAWELEMENTSINDIRECTPROC) (GLenum mode, GLenum type, const GLvoid *indirect);
extern PFNGLDRAWELEMENTSINDIRECTPROC glDrawElementsIndirect;

// GL_ARB_gpu_shader5

// GL_ARB_gpu_shader_fp64
typedef void (APIENTRYP PFNGLUNIFORM1DPROC) (GLint location, GLdouble x);
extern PFNGLUNIFORM1DPROC glUniform1d;
typedef void (APIENTRYP PFNGLUNIFORM2DPROC) (GLint location, GLdouble x, GLdouble y);
extern PFNGLUNIFORM2DPROC glUniform2d;
typedef void (APIENTRYP PFNGLUNIFORM3DPROC) (GLint location, GLdouble x, GLdouble y, GLdouble z);
extern PFNGLUNIFORM3DPROC glUniform3d;
typedef void (APIENTRYP PFNGLUNIFORM4DPROC) (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern PFNGLUNIFORM4DPROC glUniform4d;
typedef void (APIENTRYP PFNGLUNIFORM1DVPROC) (GLint location, GLsizei count, const GLdouble *value);
extern PFNGLUNIFORM1DVPROC glUniform1dv;
typedef void (APIENTRYP PFNGLUNIFORM2DVPROC) (GLint location, GLsizei count, const GLdouble *value);
extern PFNGLUNIFORM2DVPROC glUniform2dv;
typedef void (APIENTRYP PFNGLUNIFORM3DVPROC) (GLint location, GLsizei count, const GLdouble *value);
extern PFNGLUNIFORM3DVPROC glUniform3dv;
typedef void (APIENTRYP PFNGLUNIFORM4DVPROC) (GLint location, GLsizei count, const GLdouble *value);
extern PFNGLUNIFORM4DVPROC glUniform4dv;
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLUNIFORMMATRIX2DVPROC glUniformMatrix2dv;
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLUNIFORMMATRIX3DVPROC glUniformMatrix3dv;
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLUNIFORMMATRIX4DVPROC glUniformMatrix4dv;
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLUNIFORMMATRIX2X3DVPROC glUniformMatrix2x3dv;
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLUNIFORMMATRIX2X4DVPROC glUniformMatrix2x4dv;
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLUNIFORMMATRIX3X2DVPROC glUniformMatrix3x2dv;
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLUNIFORMMATRIX3X4DVPROC glUniformMatrix3x4dv;
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLUNIFORMMATRIX4X2DVPROC glUniformMatrix4x2dv;
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLUNIFORMMATRIX4X3DVPROC glUniformMatrix4x3dv;
typedef void (APIENTRYP PFNGLGETUNIFORMDVPROC) (GLuint program, GLint location, GLdouble *params);
extern PFNGLGETUNIFORMDVPROC glGetUniformdv;

// GL_ARB_shader_subroutine
typedef GLint (APIENTRYP PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) (GLuint program, GLenum shadertype, const GLchar *name);
extern PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glGetSubroutineUniformLocation;
typedef GLuint (APIENTRYP PFNGLGETSUBROUTINEINDEXPROC) (GLuint program, GLenum shadertype, const GLchar *name);
extern PFNGLGETSUBROUTINEINDEXPROC glGetSubroutineIndex;
typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
extern PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glGetActiveSubroutineUniformiv;
typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
extern PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glGetActiveSubroutineUniformName;
typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINENAMEPROC) (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
extern PFNGLGETACTIVESUBROUTINENAMEPROC glGetActiveSubroutineName;
typedef void (APIENTRYP PFNGLUNIFORMSUBROUTINESUIVPROC) (GLenum shadertype, GLsizei count, const GLuint *indices);
extern PFNGLUNIFORMSUBROUTINESUIVPROC glUniformSubroutinesuiv;
typedef void (APIENTRYP PFNGLGETUNIFORMSUBROUTINEUIVPROC) (GLenum shadertype, GLint location, GLuint *params);
extern PFNGLGETUNIFORMSUBROUTINEUIVPROC glGetUniformSubroutineuiv;
typedef void (APIENTRYP PFNGLGETPROGRAMSTAGEIVPROC) (GLuint program, GLenum shadertype, GLenum pname, GLint *values);
extern PFNGLGETPROGRAMSTAGEIVPROC glGetProgramStageiv;

// GL_ARB_tessellation_shader
typedef void (APIENTRYP PFNGLPATCHPARAMETERIPROC) (GLenum pname, GLint value);
extern PFNGLPATCHPARAMETERIPROC glPatchParameteri;
typedef void (APIENTRYP PFNGLPATCHPARAMETERFVPROC) (GLenum pname, const GLfloat *values);
extern PFNGLPATCHPARAMETERFVPROC glPatchParameterfv;

// GL_ARB_texture_buffer_object_rgb32

// GL_ARB_transform_feedback2
typedef void (APIENTRYP PFNGLBINDTRANSFORMFEEDBACKPROC) (GLenum target, GLuint id);
extern PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback;
typedef void (APIENTRYP PFNGLDELETETRANSFORMFEEDBACKSPROC) (GLsizei n, const GLuint *ids);
extern PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks;
typedef void (APIENTRYP PFNGLGENTRANSFORMFEEDBACKSPROC) (GLsizei n, GLuint *ids);
extern PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks;
typedef GLboolean (APIENTRYP PFNGLISTRANSFORMFEEDBACKPROC) (GLuint id);
extern PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback;
typedef void (APIENTRYP PFNGLPAUSETRANSFORMFEEDBACKPROC) (void);
extern PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback;
typedef void (APIENTRYP PFNGLRESUMETRANSFORMFEEDBACKPROC) (void);
extern PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback;
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKPROC) (GLenum mode, GLuint id);
extern PFNGLDRAWTRANSFORMFEEDBACKPROC glDrawTransformFeedback;

// GL_ARB_transform_feedback3
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) (GLenum mode, GLuint id, GLuint stream);
extern PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glDrawTransformFeedbackStream;
typedef void (APIENTRYP PFNGLBEGINQUERYINDEXEDPROC) (GLenum target, GLuint index, GLuint id);
extern PFNGLBEGINQUERYINDEXEDPROC glBeginQueryIndexed;
typedef void (APIENTRYP PFNGLENDQUERYINDEXEDPROC) (GLenum target, GLuint index);
extern PFNGLENDQUERYINDEXEDPROC glEndQueryIndexed;
typedef void (APIENTRYP PFNGLGETQUERYINDEXEDIVPROC) (GLenum target, GLuint index, GLenum pname, GLint *params);
extern PFNGLGETQUERYINDEXEDIVPROC glGetQueryIndexediv;

// GL_ARB_ES2_compatibility
typedef void (APIENTRYP PFNGLRELEASESHADERCOMPILERPROC) (void);
extern PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler;
typedef void (APIENTRYP PFNGLSHADERBINARYPROC) (GLsizei count, const GLuint *shaders, GLenum binaryformat, const GLvoid *binary, GLsizei length);
extern PFNGLSHADERBINARYPROC glShaderBinary;
typedef void (APIENTRYP PFNGLGETSHADERPRECISIONFORMATPROC) (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
extern PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat;
typedef void (APIENTRYP PFNGLDEPTHRANGEFPROC) (GLclampf n, GLclampf f);
extern PFNGLDEPTHRANGEFPROC glDepthRangef;
typedef void (APIENTRYP PFNGLCLEARDEPTHFPROC) (GLclampf d);
extern PFNGLCLEARDEPTHFPROC glClearDepthf;

// GL_ARB_get_program_binary
typedef void (APIENTRYP PFNGLGETPROGRAMBINARYPROC) (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, GLvoid *binary);
extern PFNGLGETPROGRAMBINARYPROC glGetProgramBinary;
typedef void (APIENTRYP PFNGLPROGRAMBINARYPROC) (GLuint program, GLenum binaryFormat, const GLvoid *binary, GLsizei length);
extern PFNGLPROGRAMBINARYPROC glProgramBinary;
typedef void (APIENTRYP PFNGLPROGRAMPARAMETERIPROC) (GLuint program, GLenum pname, GLint value);
extern PFNGLPROGRAMPARAMETERIPROC glProgramParameteri;

// GL_ARB_separate_shader_objects
typedef void (APIENTRYP PFNGLUSEPROGRAMSTAGESPROC) (GLuint pipeline, GLbitfield stages, GLuint program);
extern PFNGLUSEPROGRAMSTAGESPROC glUseProgramStages;
typedef void (APIENTRYP PFNGLACTIVESHADERPROGRAMPROC) (GLuint pipeline, GLuint program);
extern PFNGLACTIVESHADERPROGRAMPROC glActiveShaderProgram;
typedef GLuint (APIENTRYP PFNGLCREATESHADERPROGRAMVPROC) (GLenum type, GLsizei count, const GLchar* *strings);
extern PFNGLCREATESHADERPROGRAMVPROC glCreateShaderProgramv;
typedef void (APIENTRYP PFNGLBINDPROGRAMPIPELINEPROC) (GLuint pipeline);
extern PFNGLBINDPROGRAMPIPELINEPROC glBindProgramPipeline;
typedef void (APIENTRYP PFNGLDELETEPROGRAMPIPELINESPROC) (GLsizei n, const GLuint *pipelines);
extern PFNGLDELETEPROGRAMPIPELINESPROC glDeleteProgramPipelines;
typedef void (APIENTRYP PFNGLGENPROGRAMPIPELINESPROC) (GLsizei n, GLuint *pipelines);
extern PFNGLGENPROGRAMPIPELINESPROC glGenProgramPipelines;
typedef GLboolean (APIENTRYP PFNGLISPROGRAMPIPELINEPROC) (GLuint pipeline);
extern PFNGLISPROGRAMPIPELINEPROC glIsProgramPipeline;
typedef void (APIENTRYP PFNGLGETPROGRAMPIPELINEIVPROC) (GLuint pipeline, GLenum pname, GLint *params);
extern PFNGLGETPROGRAMPIPELINEIVPROC glGetProgramPipelineiv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IPROC) (GLuint program, GLint location, GLint v0);
extern PFNGLPROGRAMUNIFORM1IPROC glProgramUniform1i;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
extern PFNGLPROGRAMUNIFORM1IVPROC glProgramUniform1iv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FPROC) (GLuint program, GLint location, GLfloat v0);
extern PFNGLPROGRAMUNIFORM1FPROC glProgramUniform1f;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern PFNGLPROGRAMUNIFORM1FVPROC glProgramUniform1fv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DPROC) (GLuint program, GLint location, GLdouble v0);
extern PFNGLPROGRAMUNIFORM1DPROC glProgramUniform1d;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern PFNGLPROGRAMUNIFORM1DVPROC glProgramUniform1dv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIPROC) (GLuint program, GLint location, GLuint v0);
extern PFNGLPROGRAMUNIFORM1UIPROC glProgramUniform1ui;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern PFNGLPROGRAMUNIFORM1UIVPROC glProgramUniform1uiv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IPROC) (GLuint program, GLint location, GLint v0, GLint v1);
extern PFNGLPROGRAMUNIFORM2IPROC glProgramUniform2i;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
extern PFNGLPROGRAMUNIFORM2IVPROC glProgramUniform2iv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1);
extern PFNGLPROGRAMUNIFORM2FPROC glProgramUniform2f;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern PFNGLPROGRAMUNIFORM2FVPROC glProgramUniform2fv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1);
extern PFNGLPROGRAMUNIFORM2DPROC glProgramUniform2d;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern PFNGLPROGRAMUNIFORM2DVPROC glProgramUniform2dv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1);
extern PFNGLPROGRAMUNIFORM2UIPROC glProgramUniform2ui;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern PFNGLPROGRAMUNIFORM2UIVPROC glProgramUniform2uiv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
extern PFNGLPROGRAMUNIFORM3IPROC glProgramUniform3i;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
extern PFNGLPROGRAMUNIFORM3IVPROC glProgramUniform3iv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
extern PFNGLPROGRAMUNIFORM3FPROC glProgramUniform3f;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern PFNGLPROGRAMUNIFORM3FVPROC glProgramUniform3fv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
extern PFNGLPROGRAMUNIFORM3DPROC glProgramUniform3d;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern PFNGLPROGRAMUNIFORM3DVPROC glProgramUniform3dv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
extern PFNGLPROGRAMUNIFORM3UIPROC glProgramUniform3ui;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern PFNGLPROGRAMUNIFORM3UIVPROC glProgramUniform3uiv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
extern PFNGLPROGRAMUNIFORM4IPROC glProgramUniform4i;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
extern PFNGLPROGRAMUNIFORM4IVPROC glProgramUniform4iv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
extern PFNGLPROGRAMUNIFORM4FPROC glProgramUniform4f;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern PFNGLPROGRAMUNIFORM4FVPROC glProgramUniform4fv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
extern PFNGLPROGRAMUNIFORM4DPROC glProgramUniform4d;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern PFNGLPROGRAMUNIFORM4DVPROC glProgramUniform4dv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
extern PFNGLPROGRAMUNIFORM4UIPROC glProgramUniform4ui;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern PFNGLPROGRAMUNIFORM4UIVPROC glProgramUniform4uiv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX2FVPROC glProgramUniformMatrix2fv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX3FVPROC glProgramUniformMatrix3fv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX4FVPROC glProgramUniformMatrix4fv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX2DVPROC glProgramUniformMatrix2dv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX3DVPROC glProgramUniformMatrix3dv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX4DVPROC glProgramUniformMatrix4dv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glProgramUniformMatrix2x3fv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glProgramUniformMatrix3x2fv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glProgramUniformMatrix2x4fv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glProgramUniformMatrix4x2fv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glProgramUniformMatrix3x4fv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glProgramUniformMatrix4x3fv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glProgramUniformMatrix2x3dv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glProgramUniformMatrix3x2dv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glProgramUniformMatrix2x4dv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glProgramUniformMatrix4x2dv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glProgramUniformMatrix3x4dv;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glProgramUniformMatrix4x3dv;
typedef void (APIENTRYP PFNGLVALIDATEPROGRAMPIPELINEPROC) (GLuint pipeline);
extern PFNGLVALIDATEPROGRAMPIPELINEPROC glValidateProgramPipeline;
typedef void (APIENTRYP PFNGLGETPROGRAMPIPELINEINFOLOGPROC) (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
extern PFNGLGETPROGRAMPIPELINEINFOLOGPROC glGetProgramPipelineInfoLog;

// GL_ARB_shader_precision

// GL_ARB_vertex_attrib_64bit
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1DPROC) (GLuint index, GLdouble x);
extern PFNGLVERTEXATTRIBL1DPROC glVertexAttribL1d;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2DPROC) (GLuint index, GLdouble x, GLdouble y);
extern PFNGLVERTEXATTRIBL2DPROC glVertexAttribL2d;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
extern PFNGLVERTEXATTRIBL3DPROC glVertexAttribL3d;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern PFNGLVERTEXATTRIBL4DPROC glVertexAttribL4d;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1DVPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIBL1DVPROC glVertexAttribL1dv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2DVPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIBL2DVPROC glVertexAttribL2dv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3DVPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIBL3DVPROC glVertexAttribL3dv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4DVPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIBL4DVPROC glVertexAttribL4dv;
typedef void (APIENTRYP PFNGLVERTEXATTRIBLPOINTERPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern PFNGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLDVPROC) (GLuint index, GLenum pname, GLdouble *params);
extern PFNGLGETVERTEXATTRIBLDVPROC glGetVertexAttribLdv;

// GL_ARB_viewport_array
typedef void (APIENTRYP PFNGLVIEWPORTARRAYVPROC) (GLuint first, GLsizei count, const GLfloat *v);
extern PFNGLVIEWPORTARRAYVPROC glViewportArrayv;
typedef void (APIENTRYP PFNGLVIEWPORTINDEXEDFPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
extern PFNGLVIEWPORTINDEXEDFPROC glViewportIndexedf;
typedef void (APIENTRYP PFNGLVIEWPORTINDEXEDFVPROC) (GLuint index, const GLfloat *v);
extern PFNGLVIEWPORTINDEXEDFVPROC glViewportIndexedfv;
typedef void (APIENTRYP PFNGLSCISSORARRAYVPROC) (GLuint first, GLsizei count, const GLint *v);
extern PFNGLSCISSORARRAYVPROC glScissorArrayv;
typedef void (APIENTRYP PFNGLSCISSORINDEXEDPROC) (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
extern PFNGLSCISSORINDEXEDPROC glScissorIndexed;
typedef void (APIENTRYP PFNGLSCISSORINDEXEDVPROC) (GLuint index, const GLint *v);
extern PFNGLSCISSORINDEXEDVPROC glScissorIndexedv;
typedef void (APIENTRYP PFNGLDEPTHRANGEARRAYVPROC) (GLuint first, GLsizei count, const GLclampd *v);
extern PFNGLDEPTHRANGEARRAYVPROC glDepthRangeArrayv;
typedef void (APIENTRYP PFNGLDEPTHRANGEINDEXEDPROC) (GLuint index, GLclampd n, GLclampd f);
extern PFNGLDEPTHRANGEINDEXEDPROC glDepthRangeIndexed;
typedef void (APIENTRYP PFNGLGETFLOATI_VPROC) (GLenum target, GLuint index, GLfloat *data);
extern PFNGLGETFLOATI_VPROC glGetFloati_v;
typedef void (APIENTRYP PFNGLGETDOUBLEI_VPROC) (GLenum target, GLuint index, GLdouble *data);
extern PFNGLGETDOUBLEI_VPROC glGetDoublei_v;

// GL_ARB_cl_event
typedef GLsync (APIENTRYP PFNGLCREATESYNCFROMCLEVENTARBPROC) (struct _cl_context * context, struct _cl_event * event, GLbitfield flags);
extern PFNGLCREATESYNCFROMCLEVENTARBPROC glCreateSyncFromCLeventARB;

// GL_ARB_debug_output
typedef void (APIENTRYP PFNGLDEBUGMESSAGECONTROLARBPROC) (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
extern PFNGLDEBUGMESSAGECONTROLARBPROC glDebugMessageControlARB;
typedef void (APIENTRYP PFNGLDEBUGMESSAGEINSERTARBPROC) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
extern PFNGLDEBUGMESSAGEINSERTARBPROC glDebugMessageInsertARB;
typedef void (APIENTRYP PFNGLDEBUGMESSAGECALLBACKARBPROC) (GLDEBUGPROCARB callback, const GLvoid *userParam);
extern PFNGLDEBUGMESSAGECALLBACKARBPROC glDebugMessageCallbackARB;
typedef GLuint (APIENTRYP PFNGLGETDEBUGMESSAGELOGARBPROC) (GLuint count, GLsizei bufsize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
extern PFNGLGETDEBUGMESSAGELOGARBPROC glGetDebugMessageLogARB;

// GL_ARB_robustness
typedef GLenum (APIENTRYP PFNGLGETGRAPHICSRESETSTATUSARBPROC) (void);
extern PFNGLGETGRAPHICSRESETSTATUSARBPROC glGetGraphicsResetStatusARB;
typedef void (APIENTRYP PFNGLGETNMAPDVARBPROC) (GLenum target, GLenum query, GLsizei bufSize, GLdouble *v);
extern PFNGLGETNMAPDVARBPROC glGetnMapdvARB;
typedef void (APIENTRYP PFNGLGETNMAPFVARBPROC) (GLenum target, GLenum query, GLsizei bufSize, GLfloat *v);
extern PFNGLGETNMAPFVARBPROC glGetnMapfvARB;
typedef void (APIENTRYP PFNGLGETNMAPIVARBPROC) (GLenum target, GLenum query, GLsizei bufSize, GLint *v);
extern PFNGLGETNMAPIVARBPROC glGetnMapivARB;
typedef void (APIENTRYP PFNGLGETNPIXELMAPFVARBPROC) (GLenum map, GLsizei bufSize, GLfloat *values);
extern PFNGLGETNPIXELMAPFVARBPROC glGetnPixelMapfvARB;
typedef void (APIENTRYP PFNGLGETNPIXELMAPUIVARBPROC) (GLenum map, GLsizei bufSize, GLuint *values);
extern PFNGLGETNPIXELMAPUIVARBPROC glGetnPixelMapuivARB;
typedef void (APIENTRYP PFNGLGETNPIXELMAPUSVARBPROC) (GLenum map, GLsizei bufSize, GLushort *values);
extern PFNGLGETNPIXELMAPUSVARBPROC glGetnPixelMapusvARB;
typedef void (APIENTRYP PFNGLGETNPOLYGONSTIPPLEARBPROC) (GLsizei bufSize, GLubyte *pattern);
extern PFNGLGETNPOLYGONSTIPPLEARBPROC glGetnPolygonStippleARB;
typedef void (APIENTRYP PFNGLGETNCOLORTABLEARBPROC) (GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid *table);
extern PFNGLGETNCOLORTABLEARBPROC glGetnColorTableARB;
typedef void (APIENTRYP PFNGLGETNCONVOLUTIONFILTERARBPROC) (GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid *image);
extern PFNGLGETNCONVOLUTIONFILTERARBPROC glGetnConvolutionFilterARB;
typedef void (APIENTRYP PFNGLGETNSEPARABLEFILTERARBPROC) (GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, GLvoid *row, GLsizei columnBufSize, GLvoid *column, GLvoid *span);
extern PFNGLGETNSEPARABLEFILTERARBPROC glGetnSeparableFilterARB;
typedef void (APIENTRYP PFNGLGETNHISTOGRAMARBPROC) (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid *values);
extern PFNGLGETNHISTOGRAMARBPROC glGetnHistogramARB;
typedef void (APIENTRYP PFNGLGETNMINMAXARBPROC) (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid *values);
extern PFNGLGETNMINMAXARBPROC glGetnMinmaxARB;
typedef void (APIENTRYP PFNGLGETNTEXIMAGEARBPROC) (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid *img);
extern PFNGLGETNTEXIMAGEARBPROC glGetnTexImageARB;
typedef void (APIENTRYP PFNGLREADNPIXELSARBPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid *data);
extern PFNGLREADNPIXELSARBPROC glReadnPixelsARB;
typedef void (APIENTRYP PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) (GLenum target, GLint lod, GLsizei bufSize, GLvoid *img);
extern PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC glGetnCompressedTexImageARB;
typedef void (APIENTRYP PFNGLGETNUNIFORMFVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
extern PFNGLGETNUNIFORMFVARBPROC glGetnUniformfvARB;
typedef void (APIENTRYP PFNGLGETNUNIFORMIVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLint *params);
extern PFNGLGETNUNIFORMIVARBPROC glGetnUniformivARB;
typedef void (APIENTRYP PFNGLGETNUNIFORMUIVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
extern PFNGLGETNUNIFORMUIVARBPROC glGetnUniformuivARB;
typedef void (APIENTRYP PFNGLGETNUNIFORMDVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
extern PFNGLGETNUNIFORMDVARBPROC glGetnUniformdvARB;

// GL_ARB_shader_stencil_export

// GL_EXT_abgr

// GL_EXT_blend_color
typedef void (APIENTRYP PFNGLBLENDCOLOREXTPROC) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
extern PFNGLBLENDCOLOREXTPROC glBlendColorEXT;

// GL_EXT_polygon_offset
typedef void (APIENTRYP PFNGLPOLYGONOFFSETEXTPROC) (GLfloat factor, GLfloat bias);
extern PFNGLPOLYGONOFFSETEXTPROC glPolygonOffsetEXT;

// GL_EXT_texture

// GL_EXT_texture3D
typedef void (APIENTRYP PFNGLTEXIMAGE3DEXTPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLTEXIMAGE3DEXTPROC glTexImage3DEXT;
typedef void (APIENTRYP PFNGLTEXSUBIMAGE3DEXTPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLTEXSUBIMAGE3DEXTPROC glTexSubImage3DEXT;

// GL_SGIS_texture_filter4
typedef void (APIENTRYP PFNGLGETTEXFILTERFUNCSGISPROC) (GLenum target, GLenum filter, GLfloat *weights);
extern PFNGLGETTEXFILTERFUNCSGISPROC glGetTexFilterFuncSGIS;
typedef void (APIENTRYP PFNGLTEXFILTERFUNCSGISPROC) (GLenum target, GLenum filter, GLsizei n, const GLfloat *weights);
extern PFNGLTEXFILTERFUNCSGISPROC glTexFilterFuncSGIS;

// GL_EXT_subtexture
typedef void (APIENTRYP PFNGLTEXSUBIMAGE1DEXTPROC) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLTEXSUBIMAGE1DEXTPROC glTexSubImage1DEXT;
typedef void (APIENTRYP PFNGLTEXSUBIMAGE2DEXTPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLTEXSUBIMAGE2DEXTPROC glTexSubImage2DEXT;

// GL_EXT_copy_texture
typedef void (APIENTRYP PFNGLCOPYTEXIMAGE1DEXTPROC) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
extern PFNGLCOPYTEXIMAGE1DEXTPROC glCopyTexImage1DEXT;
typedef void (APIENTRYP PFNGLCOPYTEXIMAGE2DEXTPROC) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
extern PFNGLCOPYTEXIMAGE2DEXTPROC glCopyTexImage2DEXT;
typedef void (APIENTRYP PFNGLCOPYTEXSUBIMAGE1DEXTPROC) (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
extern PFNGLCOPYTEXSUBIMAGE1DEXTPROC glCopyTexSubImage1DEXT;
typedef void (APIENTRYP PFNGLCOPYTEXSUBIMAGE2DEXTPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern PFNGLCOPYTEXSUBIMAGE2DEXTPROC glCopyTexSubImage2DEXT;
typedef void (APIENTRYP PFNGLCOPYTEXSUBIMAGE3DEXTPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern PFNGLCOPYTEXSUBIMAGE3DEXTPROC glCopyTexSubImage3DEXT;

// GL_EXT_histogram
typedef void (APIENTRYP PFNGLGETHISTOGRAMEXTPROC) (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
extern PFNGLGETHISTOGRAMEXTPROC glGetHistogramEXT;
typedef void (APIENTRYP PFNGLGETHISTOGRAMPARAMETERFVEXTPROC) (GLenum target, GLenum pname, GLfloat *params);
extern PFNGLGETHISTOGRAMPARAMETERFVEXTPROC glGetHistogramParameterfvEXT;
typedef void (APIENTRYP PFNGLGETHISTOGRAMPARAMETERIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
extern PFNGLGETHISTOGRAMPARAMETERIVEXTPROC glGetHistogramParameterivEXT;
typedef void (APIENTRYP PFNGLGETMINMAXEXTPROC) (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
extern PFNGLGETMINMAXEXTPROC glGetMinmaxEXT;
typedef void (APIENTRYP PFNGLGETMINMAXPARAMETERFVEXTPROC) (GLenum target, GLenum pname, GLfloat *params);
extern PFNGLGETMINMAXPARAMETERFVEXTPROC glGetMinmaxParameterfvEXT;
typedef void (APIENTRYP PFNGLGETMINMAXPARAMETERIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
extern PFNGLGETMINMAXPARAMETERIVEXTPROC glGetMinmaxParameterivEXT;
typedef void (APIENTRYP PFNGLHISTOGRAMEXTPROC) (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
extern PFNGLHISTOGRAMEXTPROC glHistogramEXT;
typedef void (APIENTRYP PFNGLMINMAXEXTPROC) (GLenum target, GLenum internalformat, GLboolean sink);
extern PFNGLMINMAXEXTPROC glMinmaxEXT;
typedef void (APIENTRYP PFNGLRESETHISTOGRAMEXTPROC) (GLenum target);
extern PFNGLRESETHISTOGRAMEXTPROC glResetHistogramEXT;
typedef void (APIENTRYP PFNGLRESETMINMAXEXTPROC) (GLenum target);
extern PFNGLRESETMINMAXEXTPROC glResetMinmaxEXT;

// GL_EXT_convolution
typedef void (APIENTRYP PFNGLCONVOLUTIONFILTER1DEXTPROC) (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image);
extern PFNGLCONVOLUTIONFILTER1DEXTPROC glConvolutionFilter1DEXT;
typedef void (APIENTRYP PFNGLCONVOLUTIONFILTER2DEXTPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image);
extern PFNGLCONVOLUTIONFILTER2DEXTPROC glConvolutionFilter2DEXT;
typedef void (APIENTRYP PFNGLCONVOLUTIONPARAMETERFEXTPROC) (GLenum target, GLenum pname, GLfloat params);
extern PFNGLCONVOLUTIONPARAMETERFEXTPROC glConvolutionParameterfEXT;
typedef void (APIENTRYP PFNGLCONVOLUTIONPARAMETERFVEXTPROC) (GLenum target, GLenum pname, const GLfloat *params);
extern PFNGLCONVOLUTIONPARAMETERFVEXTPROC glConvolutionParameterfvEXT;
typedef void (APIENTRYP PFNGLCONVOLUTIONPARAMETERIEXTPROC) (GLenum target, GLenum pname, GLint params);
extern PFNGLCONVOLUTIONPARAMETERIEXTPROC glConvolutionParameteriEXT;
typedef void (APIENTRYP PFNGLCONVOLUTIONPARAMETERIVEXTPROC) (GLenum target, GLenum pname, const GLint *params);
extern PFNGLCONVOLUTIONPARAMETERIVEXTPROC glConvolutionParameterivEXT;
typedef void (APIENTRYP PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
extern PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC glCopyConvolutionFilter1DEXT;
typedef void (APIENTRYP PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
extern PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC glCopyConvolutionFilter2DEXT;
typedef void (APIENTRYP PFNGLGETCONVOLUTIONFILTEREXTPROC) (GLenum target, GLenum format, GLenum type, GLvoid *image);
extern PFNGLGETCONVOLUTIONFILTEREXTPROC glGetConvolutionFilterEXT;
typedef void (APIENTRYP PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC) (GLenum target, GLenum pname, GLfloat *params);
extern PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC glGetConvolutionParameterfvEXT;
typedef void (APIENTRYP PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
extern PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC glGetConvolutionParameterivEXT;
typedef void (APIENTRYP PFNGLGETSEPARABLEFILTEREXTPROC) (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span);
extern PFNGLGETSEPARABLEFILTEREXTPROC glGetSeparableFilterEXT;
typedef void (APIENTRYP PFNGLSEPARABLEFILTER2DEXTPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column);
extern PFNGLSEPARABLEFILTER2DEXTPROC glSeparableFilter2DEXT;

// GL_SGI_color_matrix

// GL_SGI_color_table
typedef void (APIENTRYP PFNGLCOLORTABLESGIPROC) (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
extern PFNGLCOLORTABLESGIPROC glColorTableSGI;
typedef void (APIENTRYP PFNGLCOLORTABLEPARAMETERFVSGIPROC) (GLenum target, GLenum pname, const GLfloat *params);
extern PFNGLCOLORTABLEPARAMETERFVSGIPROC glColorTableParameterfvSGI;
typedef void (APIENTRYP PFNGLCOLORTABLEPARAMETERIVSGIPROC) (GLenum target, GLenum pname, const GLint *params);
extern PFNGLCOLORTABLEPARAMETERIVSGIPROC glColorTableParameterivSGI;
typedef void (APIENTRYP PFNGLCOPYCOLORTABLESGIPROC) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
extern PFNGLCOPYCOLORTABLESGIPROC glCopyColorTableSGI;
typedef void (APIENTRYP PFNGLGETCOLORTABLESGIPROC) (GLenum target, GLenum format, GLenum type, GLvoid *table);
extern PFNGLGETCOLORTABLESGIPROC glGetColorTableSGI;
typedef void (APIENTRYP PFNGLGETCOLORTABLEPARAMETERFVSGIPROC) (GLenum target, GLenum pname, GLfloat *params);
extern PFNGLGETCOLORTABLEPARAMETERFVSGIPROC glGetColorTableParameterfvSGI;
typedef void (APIENTRYP PFNGLGETCOLORTABLEPARAMETERIVSGIPROC) (GLenum target, GLenum pname, GLint *params);
extern PFNGLGETCOLORTABLEPARAMETERIVSGIPROC glGetColorTableParameterivSGI;

// GL_SGIS_pixel_texture
typedef void (APIENTRYP PFNGLPIXELTEXGENPARAMETERISGISPROC) (GLenum pname, GLint param);
extern PFNGLPIXELTEXGENPARAMETERISGISPROC glPixelTexGenParameteriSGIS;
typedef void (APIENTRYP PFNGLPIXELTEXGENPARAMETERIVSGISPROC) (GLenum pname, const GLint *params);
extern PFNGLPIXELTEXGENPARAMETERIVSGISPROC glPixelTexGenParameterivSGIS;
typedef void (APIENTRYP PFNGLPIXELTEXGENPARAMETERFSGISPROC) (GLenum pname, GLfloat param);
extern PFNGLPIXELTEXGENPARAMETERFSGISPROC glPixelTexGenParameterfSGIS;
typedef void (APIENTRYP PFNGLPIXELTEXGENPARAMETERFVSGISPROC) (GLenum pname, const GLfloat *params);
extern PFNGLPIXELTEXGENPARAMETERFVSGISPROC glPixelTexGenParameterfvSGIS;
typedef void (APIENTRYP PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC) (GLenum pname, GLint *params);
extern PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC glGetPixelTexGenParameterivSGIS;
typedef void (APIENTRYP PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC) (GLenum pname, GLfloat *params);
extern PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC glGetPixelTexGenParameterfvSGIS;

// GL_SGIX_pixel_texture
typedef void (APIENTRYP PFNGLPIXELTEXGENSGIXPROC) (GLenum mode);
extern PFNGLPIXELTEXGENSGIXPROC glPixelTexGenSGIX;

// GL_SGIS_texture4D
typedef void (APIENTRYP PFNGLTEXIMAGE4DSGISPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLTEXIMAGE4DSGISPROC glTexImage4DSGIS;
typedef void (APIENTRYP PFNGLTEXSUBIMAGE4DSGISPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLTEXSUBIMAGE4DSGISPROC glTexSubImage4DSGIS;

// GL_SGI_texture_color_table

// GL_EXT_cmyka

// GL_EXT_texture_object
typedef GLboolean (APIENTRYP PFNGLARETEXTURESRESIDENTEXTPROC) (GLsizei n, const GLuint *textures, GLboolean *residences);
extern PFNGLARETEXTURESRESIDENTEXTPROC glAreTexturesResidentEXT;
typedef void (APIENTRYP PFNGLBINDTEXTUREEXTPROC) (GLenum target, GLuint texture);
extern PFNGLBINDTEXTUREEXTPROC glBindTextureEXT;
typedef void (APIENTRYP PFNGLDELETETEXTURESEXTPROC) (GLsizei n, const GLuint *textures);
extern PFNGLDELETETEXTURESEXTPROC glDeleteTexturesEXT;
typedef void (APIENTRYP PFNGLGENTEXTURESEXTPROC) (GLsizei n, GLuint *textures);
extern PFNGLGENTEXTURESEXTPROC glGenTexturesEXT;
typedef GLboolean (APIENTRYP PFNGLISTEXTUREEXTPROC) (GLuint texture);
extern PFNGLISTEXTUREEXTPROC glIsTextureEXT;
typedef void (APIENTRYP PFNGLPRIORITIZETEXTURESEXTPROC) (GLsizei n, const GLuint *textures, const GLclampf *priorities);
extern PFNGLPRIORITIZETEXTURESEXTPROC glPrioritizeTexturesEXT;

// GL_SGIS_detail_texture
typedef void (APIENTRYP PFNGLDETAILTEXFUNCSGISPROC) (GLenum target, GLsizei n, const GLfloat *points);
extern PFNGLDETAILTEXFUNCSGISPROC glDetailTexFuncSGIS;
typedef void (APIENTRYP PFNGLGETDETAILTEXFUNCSGISPROC) (GLenum target, GLfloat *points);
extern PFNGLGETDETAILTEXFUNCSGISPROC glGetDetailTexFuncSGIS;

// GL_SGIS_sharpen_texture
typedef void (APIENTRYP PFNGLSHARPENTEXFUNCSGISPROC) (GLenum target, GLsizei n, const GLfloat *points);
extern PFNGLSHARPENTEXFUNCSGISPROC glSharpenTexFuncSGIS;
typedef void (APIENTRYP PFNGLGETSHARPENTEXFUNCSGISPROC) (GLenum target, GLfloat *points);
extern PFNGLGETSHARPENTEXFUNCSGISPROC glGetSharpenTexFuncSGIS;

// GL_EXT_packed_pixels

// GL_SGIS_texture_lod

// GL_SGIS_multisample
typedef void (APIENTRYP PFNGLSAMPLEMASKSGISPROC) (GLclampf value, GLboolean invert);
extern PFNGLSAMPLEMASKSGISPROC glSampleMaskSGIS;
typedef void (APIENTRYP PFNGLSAMPLEPATTERNSGISPROC) (GLenum pattern);
extern PFNGLSAMPLEPATTERNSGISPROC glSamplePatternSGIS;

// GL_EXT_rescale_normal

// GL_EXT_vertex_array
typedef void (APIENTRYP PFNGLARRAYELEMENTEXTPROC) (GLint i);
extern PFNGLARRAYELEMENTEXTPROC glArrayElementEXT;
typedef void (APIENTRYP PFNGLCOLORPOINTEREXTPROC) (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
extern PFNGLCOLORPOINTEREXTPROC glColorPointerEXT;
typedef void (APIENTRYP PFNGLDRAWARRAYSEXTPROC) (GLenum mode, GLint first, GLsizei count);
extern PFNGLDRAWARRAYSEXTPROC glDrawArraysEXT;
typedef void (APIENTRYP PFNGLEDGEFLAGPOINTEREXTPROC) (GLsizei stride, GLsizei count, const GLboolean *pointer);
extern PFNGLEDGEFLAGPOINTEREXTPROC glEdgeFlagPointerEXT;
typedef void (APIENTRYP PFNGLGETPOINTERVEXTPROC) (GLenum pname, GLvoid* *params);
extern PFNGLGETPOINTERVEXTPROC glGetPointervEXT;
typedef void (APIENTRYP PFNGLINDEXPOINTEREXTPROC) (GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
extern PFNGLINDEXPOINTEREXTPROC glIndexPointerEXT;
typedef void (APIENTRYP PFNGLNORMALPOINTEREXTPROC) (GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
extern PFNGLNORMALPOINTEREXTPROC glNormalPointerEXT;
typedef void (APIENTRYP PFNGLTEXCOORDPOINTEREXTPROC) (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
extern PFNGLTEXCOORDPOINTEREXTPROC glTexCoordPointerEXT;
typedef void (APIENTRYP PFNGLVERTEXPOINTEREXTPROC) (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
extern PFNGLVERTEXPOINTEREXTPROC glVertexPointerEXT;

// GL_EXT_misc_attribute

// GL_SGIS_generate_mipmap

// GL_SGIX_clipmap

// GL_SGIX_shadow

// GL_SGIS_texture_edge_clamp

// GL_SGIS_texture_border_clamp

// GL_EXT_blend_minmax
typedef void (APIENTRYP PFNGLBLENDEQUATIONEXTPROC) (GLenum mode);
extern PFNGLBLENDEQUATIONEXTPROC glBlendEquationEXT;

// GL_EXT_blend_subtract

// GL_EXT_blend_logic_op

// GL_SGIX_interlace

// GL_SGIX_pixel_tiles

// GL_SGIS_texture_select

// GL_SGIX_sprite
typedef void (APIENTRYP PFNGLSPRITEPARAMETERFSGIXPROC) (GLenum pname, GLfloat param);
extern PFNGLSPRITEPARAMETERFSGIXPROC glSpriteParameterfSGIX;
typedef void (APIENTRYP PFNGLSPRITEPARAMETERFVSGIXPROC) (GLenum pname, const GLfloat *params);
extern PFNGLSPRITEPARAMETERFVSGIXPROC glSpriteParameterfvSGIX;
typedef void (APIENTRYP PFNGLSPRITEPARAMETERISGIXPROC) (GLenum pname, GLint param);
extern PFNGLSPRITEPARAMETERISGIXPROC glSpriteParameteriSGIX;
typedef void (APIENTRYP PFNGLSPRITEPARAMETERIVSGIXPROC) (GLenum pname, const GLint *params);
extern PFNGLSPRITEPARAMETERIVSGIXPROC glSpriteParameterivSGIX;

// GL_SGIX_texture_multi_buffer

// GL_EXT_point_parameters
typedef void (APIENTRYP PFNGLPOINTPARAMETERFEXTPROC) (GLenum pname, GLfloat param);
extern PFNGLPOINTPARAMETERFEXTPROC glPointParameterfEXT;
typedef void (APIENTRYP PFNGLPOINTPARAMETERFVEXTPROC) (GLenum pname, const GLfloat *params);
extern PFNGLPOINTPARAMETERFVEXTPROC glPointParameterfvEXT;

// GL_SGIS_point_parameters
typedef void (APIENTRYP PFNGLPOINTPARAMETERFSGISPROC) (GLenum pname, GLfloat param);
extern PFNGLPOINTPARAMETERFSGISPROC glPointParameterfSGIS;
typedef void (APIENTRYP PFNGLPOINTPARAMETERFVSGISPROC) (GLenum pname, const GLfloat *params);
extern PFNGLPOINTPARAMETERFVSGISPROC glPointParameterfvSGIS;

// GL_SGIX_instruments
typedef GLint (APIENTRYP PFNGLGETINSTRUMENTSSGIXPROC) (void);
extern PFNGLGETINSTRUMENTSSGIXPROC glGetInstrumentsSGIX;
typedef void (APIENTRYP PFNGLINSTRUMENTSBUFFERSGIXPROC) (GLsizei size, GLint *buffer);
extern PFNGLINSTRUMENTSBUFFERSGIXPROC glInstrumentsBufferSGIX;
typedef GLint (APIENTRYP PFNGLPOLLINSTRUMENTSSGIXPROC) (GLint *marker_p);
extern PFNGLPOLLINSTRUMENTSSGIXPROC glPollInstrumentsSGIX;
typedef void (APIENTRYP PFNGLREADINSTRUMENTSSGIXPROC) (GLint marker);
extern PFNGLREADINSTRUMENTSSGIXPROC glReadInstrumentsSGIX;
typedef void (APIENTRYP PFNGLSTARTINSTRUMENTSSGIXPROC) (void);
extern PFNGLSTARTINSTRUMENTSSGIXPROC glStartInstrumentsSGIX;
typedef void (APIENTRYP PFNGLSTOPINSTRUMENTSSGIXPROC) (GLint marker);
extern PFNGLSTOPINSTRUMENTSSGIXPROC glStopInstrumentsSGIX;

// GL_SGIX_texture_scale_bias

// GL_SGIX_framezoom
typedef void (APIENTRYP PFNGLFRAMEZOOMSGIXPROC) (GLint factor);
extern PFNGLFRAMEZOOMSGIXPROC glFrameZoomSGIX;

// GL_SGIX_tag_sample_buffer
typedef void (APIENTRYP PFNGLTAGSAMPLEBUFFERSGIXPROC) (void);
extern PFNGLTAGSAMPLEBUFFERSGIXPROC glTagSampleBufferSGIX;

// GL_FfdMaskSGIX

// GL_SGIX_polynomial_ffd
typedef void (APIENTRYP PFNGLDEFORMATIONMAP3DSGIXPROC) (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points);
extern PFNGLDEFORMATIONMAP3DSGIXPROC glDeformationMap3dSGIX;
typedef void (APIENTRYP PFNGLDEFORMATIONMAP3FSGIXPROC) (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points);
extern PFNGLDEFORMATIONMAP3FSGIXPROC glDeformationMap3fSGIX;
typedef void (APIENTRYP PFNGLDEFORMSGIXPROC) (GLbitfield mask);
extern PFNGLDEFORMSGIXPROC glDeformSGIX;
typedef void (APIENTRYP PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC) (GLbitfield mask);
extern PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC glLoadIdentityDeformationMapSGIX;

// GL_SGIX_reference_plane
typedef void (APIENTRYP PFNGLREFERENCEPLANESGIXPROC) (const GLdouble *equation);
extern PFNGLREFERENCEPLANESGIXPROC glReferencePlaneSGIX;

// GL_SGIX_flush_raster
typedef void (APIENTRYP PFNGLFLUSHRASTERSGIXPROC) (void);
extern PFNGLFLUSHRASTERSGIXPROC glFlushRasterSGIX;

// GL_SGIX_depth_texture

// GL_SGIS_fog_function
typedef void (APIENTRYP PFNGLFOGFUNCSGISPROC) (GLsizei n, const GLfloat *points);
extern PFNGLFOGFUNCSGISPROC glFogFuncSGIS;
typedef void (APIENTRYP PFNGLGETFOGFUNCSGISPROC) (GLfloat *points);
extern PFNGLGETFOGFUNCSGISPROC glGetFogFuncSGIS;

// GL_SGIX_fog_offset

// GL_HP_image_transform
typedef void (APIENTRYP PFNGLIMAGETRANSFORMPARAMETERIHPPROC) (GLenum target, GLenum pname, GLint param);
extern PFNGLIMAGETRANSFORMPARAMETERIHPPROC glImageTransformParameteriHP;
typedef void (APIENTRYP PFNGLIMAGETRANSFORMPARAMETERFHPPROC) (GLenum target, GLenum pname, GLfloat param);
extern PFNGLIMAGETRANSFORMPARAMETERFHPPROC glImageTransformParameterfHP;
typedef void (APIENTRYP PFNGLIMAGETRANSFORMPARAMETERIVHPPROC) (GLenum target, GLenum pname, const GLint *params);
extern PFNGLIMAGETRANSFORMPARAMETERIVHPPROC glImageTransformParameterivHP;
typedef void (APIENTRYP PFNGLIMAGETRANSFORMPARAMETERFVHPPROC) (GLenum target, GLenum pname, const GLfloat *params);
extern PFNGLIMAGETRANSFORMPARAMETERFVHPPROC glImageTransformParameterfvHP;
typedef void (APIENTRYP PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC) (GLenum target, GLenum pname, GLint *params);
extern PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC glGetImageTransformParameterivHP;
typedef void (APIENTRYP PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC) (GLenum target, GLenum pname, GLfloat *params);
extern PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC glGetImageTransformParameterfvHP;

// GL_HP_convolution_border_modes

// GL_INGR_palette_buffer

// GL_SGIX_texture_add_env

// GL_EXT_color_subtable
typedef void (APIENTRYP PFNGLCOLORSUBTABLEEXTPROC) (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data);
extern PFNGLCOLORSUBTABLEEXTPROC glColorSubTableEXT;
typedef void (APIENTRYP PFNGLCOPYCOLORSUBTABLEEXTPROC) (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
extern PFNGLCOPYCOLORSUBTABLEEXTPROC glCopyColorSubTableEXT;

// GL_PGI_vertex_hints

// GL_PGI_misc_hints
typedef void (APIENTRYP PFNGLHINTPGIPROC) (GLenum target, GLint mode);
extern PFNGLHINTPGIPROC glHintPGI;

// GL_EXT_paletted_texture
typedef void (APIENTRYP PFNGLCOLORTABLEEXTPROC) (GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
extern PFNGLCOLORTABLEEXTPROC glColorTableEXT;
typedef void (APIENTRYP PFNGLGETCOLORTABLEEXTPROC) (GLenum target, GLenum format, GLenum type, GLvoid *data);
extern PFNGLGETCOLORTABLEEXTPROC glGetColorTableEXT;
typedef void (APIENTRYP PFNGLGETCOLORTABLEPARAMETERIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
extern PFNGLGETCOLORTABLEPARAMETERIVEXTPROC glGetColorTableParameterivEXT;
typedef void (APIENTRYP PFNGLGETCOLORTABLEPARAMETERFVEXTPROC) (GLenum target, GLenum pname, GLfloat *params);
extern PFNGLGETCOLORTABLEPARAMETERFVEXTPROC glGetColorTableParameterfvEXT;

// GL_EXT_clip_volume_hint

// GL_SGIX_list_priority
typedef void (APIENTRYP PFNGLGETLISTPARAMETERFVSGIXPROC) (GLuint list, GLenum pname, GLfloat *params);
extern PFNGLGETLISTPARAMETERFVSGIXPROC glGetListParameterfvSGIX;
typedef void (APIENTRYP PFNGLGETLISTPARAMETERIVSGIXPROC) (GLuint list, GLenum pname, GLint *params);
extern PFNGLGETLISTPARAMETERIVSGIXPROC glGetListParameterivSGIX;
typedef void (APIENTRYP PFNGLLISTPARAMETERFSGIXPROC) (GLuint list, GLenum pname, GLfloat param);
extern PFNGLLISTPARAMETERFSGIXPROC glListParameterfSGIX;
typedef void (APIENTRYP PFNGLLISTPARAMETERFVSGIXPROC) (GLuint list, GLenum pname, const GLfloat *params);
extern PFNGLLISTPARAMETERFVSGIXPROC glListParameterfvSGIX;
typedef void (APIENTRYP PFNGLLISTPARAMETERISGIXPROC) (GLuint list, GLenum pname, GLint param);
extern PFNGLLISTPARAMETERISGIXPROC glListParameteriSGIX;
typedef void (APIENTRYP PFNGLLISTPARAMETERIVSGIXPROC) (GLuint list, GLenum pname, const GLint *params);
extern PFNGLLISTPARAMETERIVSGIXPROC glListParameterivSGIX;

// GL_SGIX_ir_instrument1

// GL_SGIX_calligraphic_fragment

// GL_SGIX_texture_lod_bias

// GL_SGIX_shadow_ambient

// GL_EXT_index_texture

// GL_EXT_index_material
typedef void (APIENTRYP PFNGLINDEXMATERIALEXTPROC) (GLenum face, GLenum mode);
extern PFNGLINDEXMATERIALEXTPROC glIndexMaterialEXT;

// GL_EXT_index_func
typedef void (APIENTRYP PFNGLINDEXFUNCEXTPROC) (GLenum func, GLclampf ref);
extern PFNGLINDEXFUNCEXTPROC glIndexFuncEXT;

// GL_EXT_index_array_formats

// GL_EXT_compiled_vertex_array
typedef void (APIENTRYP PFNGLLOCKARRAYSEXTPROC) (GLint first, GLsizei count);
extern PFNGLLOCKARRAYSEXTPROC glLockArraysEXT;
typedef void (APIENTRYP PFNGLUNLOCKARRAYSEXTPROC) (void);
extern PFNGLUNLOCKARRAYSEXTPROC glUnlockArraysEXT;

// GL_EXT_cull_vertex
typedef void (APIENTRYP PFNGLCULLPARAMETERDVEXTPROC) (GLenum pname, GLdouble *params);
extern PFNGLCULLPARAMETERDVEXTPROC glCullParameterdvEXT;
typedef void (APIENTRYP PFNGLCULLPARAMETERFVEXTPROC) (GLenum pname, GLfloat *params);
extern PFNGLCULLPARAMETERFVEXTPROC glCullParameterfvEXT;

// GL_SGIX_ycrcb

// GL_SGIX_fragment_lighting
typedef void (APIENTRYP PFNGLFRAGMENTCOLORMATERIALSGIXPROC) (GLenum face, GLenum mode);
extern PFNGLFRAGMENTCOLORMATERIALSGIXPROC glFragmentColorMaterialSGIX;
typedef void (APIENTRYP PFNGLFRAGMENTLIGHTFSGIXPROC) (GLenum light, GLenum pname, GLfloat param);
extern PFNGLFRAGMENTLIGHTFSGIXPROC glFragmentLightfSGIX;
typedef void (APIENTRYP PFNGLFRAGMENTLIGHTFVSGIXPROC) (GLenum light, GLenum pname, const GLfloat *params);
extern PFNGLFRAGMENTLIGHTFVSGIXPROC glFragmentLightfvSGIX;
typedef void (APIENTRYP PFNGLFRAGMENTLIGHTISGIXPROC) (GLenum light, GLenum pname, GLint param);
extern PFNGLFRAGMENTLIGHTISGIXPROC glFragmentLightiSGIX;
typedef void (APIENTRYP PFNGLFRAGMENTLIGHTIVSGIXPROC) (GLenum light, GLenum pname, const GLint *params);
extern PFNGLFRAGMENTLIGHTIVSGIXPROC glFragmentLightivSGIX;
typedef void (APIENTRYP PFNGLFRAGMENTLIGHTMODELFSGIXPROC) (GLenum pname, GLfloat param);
extern PFNGLFRAGMENTLIGHTMODELFSGIXPROC glFragmentLightModelfSGIX;
typedef void (APIENTRYP PFNGLFRAGMENTLIGHTMODELFVSGIXPROC) (GLenum pname, const GLfloat *params);
extern PFNGLFRAGMENTLIGHTMODELFVSGIXPROC glFragmentLightModelfvSGIX;
typedef void (APIENTRYP PFNGLFRAGMENTLIGHTMODELISGIXPROC) (GLenum pname, GLint param);
extern PFNGLFRAGMENTLIGHTMODELISGIXPROC glFragmentLightModeliSGIX;
typedef void (APIENTRYP PFNGLFRAGMENTLIGHTMODELIVSGIXPROC) (GLenum pname, const GLint *params);
extern PFNGLFRAGMENTLIGHTMODELIVSGIXPROC glFragmentLightModelivSGIX;
typedef void (APIENTRYP PFNGLFRAGMENTMATERIALFSGIXPROC) (GLenum face, GLenum pname, GLfloat param);
extern PFNGLFRAGMENTMATERIALFSGIXPROC glFragmentMaterialfSGIX;
typedef void (APIENTRYP PFNGLFRAGMENTMATERIALFVSGIXPROC) (GLenum face, GLenum pname, const GLfloat *params);
extern PFNGLFRAGMENTMATERIALFVSGIXPROC glFragmentMaterialfvSGIX;
typedef void (APIENTRYP PFNGLFRAGMENTMATERIALISGIXPROC) (GLenum face, GLenum pname, GLint param);
extern PFNGLFRAGMENTMATERIALISGIXPROC glFragmentMaterialiSGIX;
typedef void (APIENTRYP PFNGLFRAGMENTMATERIALIVSGIXPROC) (GLenum face, GLenum pname, const GLint *params);
extern PFNGLFRAGMENTMATERIALIVSGIXPROC glFragmentMaterialivSGIX;
typedef void (APIENTRYP PFNGLGETFRAGMENTLIGHTFVSGIXPROC) (GLenum light, GLenum pname, GLfloat *params);
extern PFNGLGETFRAGMENTLIGHTFVSGIXPROC glGetFragmentLightfvSGIX;
typedef void (APIENTRYP PFNGLGETFRAGMENTLIGHTIVSGIXPROC) (GLenum light, GLenum pname, GLint *params);
extern PFNGLGETFRAGMENTLIGHTIVSGIXPROC glGetFragmentLightivSGIX;
typedef void (APIENTRYP PFNGLGETFRAGMENTMATERIALFVSGIXPROC) (GLenum face, GLenum pname, GLfloat *params);
extern PFNGLGETFRAGMENTMATERIALFVSGIXPROC glGetFragmentMaterialfvSGIX;
typedef void (APIENTRYP PFNGLGETFRAGMENTMATERIALIVSGIXPROC) (GLenum face, GLenum pname, GLint *params);
extern PFNGLGETFRAGMENTMATERIALIVSGIXPROC glGetFragmentMaterialivSGIX;
typedef void (APIENTRYP PFNGLLIGHTENVISGIXPROC) (GLenum pname, GLint param);
extern PFNGLLIGHTENVISGIXPROC glLightEnviSGIX;

// GL_IBM_rasterpos_clip

// GL_HP_texture_lighting

// GL_EXT_draw_range_elements
typedef void (APIENTRYP PFNGLDRAWRANGEELEMENTSEXTPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);
extern PFNGLDRAWRANGEELEMENTSEXTPROC glDrawRangeElementsEXT;

// GL_WIN_phong_shading

// GL_WIN_specular_fog

// GL_EXT_light_texture
typedef void (APIENTRYP PFNGLAPPLYTEXTUREEXTPROC) (GLenum mode);
extern PFNGLAPPLYTEXTUREEXTPROC glApplyTextureEXT;
typedef void (APIENTRYP PFNGLTEXTURELIGHTEXTPROC) (GLenum pname);
extern PFNGLTEXTURELIGHTEXTPROC glTextureLightEXT;
typedef void (APIENTRYP PFNGLTEXTUREMATERIALEXTPROC) (GLenum face, GLenum mode);
extern PFNGLTEXTUREMATERIALEXTPROC glTextureMaterialEXT;

// GL_SGIX_blend_alpha_minmax

// GL_SGIX_impact_pixel_texture

// GL_EXT_bgra

// GL_SGIX_async
typedef void (APIENTRYP PFNGLASYNCMARKERSGIXPROC) (GLuint marker);
extern PFNGLASYNCMARKERSGIXPROC glAsyncMarkerSGIX;
typedef GLint (APIENTRYP PFNGLFINISHASYNCSGIXPROC) (GLuint *markerp);
extern PFNGLFINISHASYNCSGIXPROC glFinishAsyncSGIX;
typedef GLint (APIENTRYP PFNGLPOLLASYNCSGIXPROC) (GLuint *markerp);
extern PFNGLPOLLASYNCSGIXPROC glPollAsyncSGIX;
typedef GLuint (APIENTRYP PFNGLGENASYNCMARKERSSGIXPROC) (GLsizei range);
extern PFNGLGENASYNCMARKERSSGIXPROC glGenAsyncMarkersSGIX;
typedef void (APIENTRYP PFNGLDELETEASYNCMARKERSSGIXPROC) (GLuint marker, GLsizei range);
extern PFNGLDELETEASYNCMARKERSSGIXPROC glDeleteAsyncMarkersSGIX;
typedef GLboolean (APIENTRYP PFNGLISASYNCMARKERSGIXPROC) (GLuint marker);
extern PFNGLISASYNCMARKERSGIXPROC glIsAsyncMarkerSGIX;

// GL_SGIX_async_pixel

// GL_SGIX_async_histogram

// GL_INTEL_texture_scissor

// GL_INTEL_parallel_arrays
typedef void (APIENTRYP PFNGLVERTEXPOINTERVINTELPROC) (GLint size, GLenum type, const GLvoid* *pointer);
extern PFNGLVERTEXPOINTERVINTELPROC glVertexPointervINTEL;
typedef void (APIENTRYP PFNGLNORMALPOINTERVINTELPROC) (GLenum type, const GLvoid* *pointer);
extern PFNGLNORMALPOINTERVINTELPROC glNormalPointervINTEL;
typedef void (APIENTRYP PFNGLCOLORPOINTERVINTELPROC) (GLint size, GLenum type, const GLvoid* *pointer);
extern PFNGLCOLORPOINTERVINTELPROC glColorPointervINTEL;
typedef void (APIENTRYP PFNGLTEXCOORDPOINTERVINTELPROC) (GLint size, GLenum type, const GLvoid* *pointer);
extern PFNGLTEXCOORDPOINTERVINTELPROC glTexCoordPointervINTEL;

// GL_HP_occlusion_test

// GL_EXT_pixel_transform
typedef void (APIENTRYP PFNGLPIXELTRANSFORMPARAMETERIEXTPROC) (GLenum target, GLenum pname, GLint param);
extern PFNGLPIXELTRANSFORMPARAMETERIEXTPROC glPixelTransformParameteriEXT;
typedef void (APIENTRYP PFNGLPIXELTRANSFORMPARAMETERFEXTPROC) (GLenum target, GLenum pname, GLfloat param);
extern PFNGLPIXELTRANSFORMPARAMETERFEXTPROC glPixelTransformParameterfEXT;
typedef void (APIENTRYP PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC) (GLenum target, GLenum pname, const GLint *params);
extern PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC glPixelTransformParameterivEXT;
typedef void (APIENTRYP PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC) (GLenum target, GLenum pname, const GLfloat *params);
extern PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC glPixelTransformParameterfvEXT;

// GL_EXT_pixel_transform_color_table

// GL_EXT_shared_texture_palette

// GL_EXT_separate_specular_color

// GL_EXT_secondary_color
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3BEXTPROC) (GLbyte red, GLbyte green, GLbyte blue);
extern PFNGLSECONDARYCOLOR3BEXTPROC glSecondaryColor3bEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3BVEXTPROC) (const GLbyte *v);
extern PFNGLSECONDARYCOLOR3BVEXTPROC glSecondaryColor3bvEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3DEXTPROC) (GLdouble red, GLdouble green, GLdouble blue);
extern PFNGLSECONDARYCOLOR3DEXTPROC glSecondaryColor3dEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3DVEXTPROC) (const GLdouble *v);
extern PFNGLSECONDARYCOLOR3DVEXTPROC glSecondaryColor3dvEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3FEXTPROC) (GLfloat red, GLfloat green, GLfloat blue);
extern PFNGLSECONDARYCOLOR3FEXTPROC glSecondaryColor3fEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3FVEXTPROC) (const GLfloat *v);
extern PFNGLSECONDARYCOLOR3FVEXTPROC glSecondaryColor3fvEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3IEXTPROC) (GLint red, GLint green, GLint blue);
extern PFNGLSECONDARYCOLOR3IEXTPROC glSecondaryColor3iEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3IVEXTPROC) (const GLint *v);
extern PFNGLSECONDARYCOLOR3IVEXTPROC glSecondaryColor3ivEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3SEXTPROC) (GLshort red, GLshort green, GLshort blue);
extern PFNGLSECONDARYCOLOR3SEXTPROC glSecondaryColor3sEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3SVEXTPROC) (const GLshort *v);
extern PFNGLSECONDARYCOLOR3SVEXTPROC glSecondaryColor3svEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3UBEXTPROC) (GLubyte red, GLubyte green, GLubyte blue);
extern PFNGLSECONDARYCOLOR3UBEXTPROC glSecondaryColor3ubEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3UBVEXTPROC) (const GLubyte *v);
extern PFNGLSECONDARYCOLOR3UBVEXTPROC glSecondaryColor3ubvEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3UIEXTPROC) (GLuint red, GLuint green, GLuint blue);
extern PFNGLSECONDARYCOLOR3UIEXTPROC glSecondaryColor3uiEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3UIVEXTPROC) (const GLuint *v);
extern PFNGLSECONDARYCOLOR3UIVEXTPROC glSecondaryColor3uivEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3USEXTPROC) (GLushort red, GLushort green, GLushort blue);
extern PFNGLSECONDARYCOLOR3USEXTPROC glSecondaryColor3usEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3USVEXTPROC) (const GLushort *v);
extern PFNGLSECONDARYCOLOR3USVEXTPROC glSecondaryColor3usvEXT;
typedef void (APIENTRYP PFNGLSECONDARYCOLORPOINTEREXTPROC) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern PFNGLSECONDARYCOLORPOINTEREXTPROC glSecondaryColorPointerEXT;

// GL_EXT_texture_perturb_normal
typedef void (APIENTRYP PFNGLTEXTURENORMALEXTPROC) (GLenum mode);
extern PFNGLTEXTURENORMALEXTPROC glTextureNormalEXT;

// GL_EXT_multi_draw_arrays
typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSEXTPROC) (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
extern PFNGLMULTIDRAWARRAYSEXTPROC glMultiDrawArraysEXT;
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSEXTPROC) (GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount);
extern PFNGLMULTIDRAWELEMENTSEXTPROC glMultiDrawElementsEXT;

// GL_EXT_fog_coord
typedef void (APIENTRYP PFNGLFOGCOORDFEXTPROC) (GLfloat coord);
extern PFNGLFOGCOORDFEXTPROC glFogCoordfEXT;
typedef void (APIENTRYP PFNGLFOGCOORDFVEXTPROC) (const GLfloat *coord);
extern PFNGLFOGCOORDFVEXTPROC glFogCoordfvEXT;
typedef void (APIENTRYP PFNGLFOGCOORDDEXTPROC) (GLdouble coord);
extern PFNGLFOGCOORDDEXTPROC glFogCoorddEXT;
typedef void (APIENTRYP PFNGLFOGCOORDDVEXTPROC) (const GLdouble *coord);
extern PFNGLFOGCOORDDVEXTPROC glFogCoorddvEXT;
typedef void (APIENTRYP PFNGLFOGCOORDPOINTEREXTPROC) (GLenum type, GLsizei stride, const GLvoid *pointer);
extern PFNGLFOGCOORDPOINTEREXTPROC glFogCoordPointerEXT;

// GL_REND_screen_coordinates

// GL_EXT_coordinate_frame
typedef void (APIENTRYP PFNGLTANGENT3BEXTPROC) (GLbyte tx, GLbyte ty, GLbyte tz);
extern PFNGLTANGENT3BEXTPROC glTangent3bEXT;
typedef void (APIENTRYP PFNGLTANGENT3BVEXTPROC) (const GLbyte *v);
extern PFNGLTANGENT3BVEXTPROC glTangent3bvEXT;
typedef void (APIENTRYP PFNGLTANGENT3DEXTPROC) (GLdouble tx, GLdouble ty, GLdouble tz);
extern PFNGLTANGENT3DEXTPROC glTangent3dEXT;
typedef void (APIENTRYP PFNGLTANGENT3DVEXTPROC) (const GLdouble *v);
extern PFNGLTANGENT3DVEXTPROC glTangent3dvEXT;
typedef void (APIENTRYP PFNGLTANGENT3FEXTPROC) (GLfloat tx, GLfloat ty, GLfloat tz);
extern PFNGLTANGENT3FEXTPROC glTangent3fEXT;
typedef void (APIENTRYP PFNGLTANGENT3FVEXTPROC) (const GLfloat *v);
extern PFNGLTANGENT3FVEXTPROC glTangent3fvEXT;
typedef void (APIENTRYP PFNGLTANGENT3IEXTPROC) (GLint tx, GLint ty, GLint tz);
extern PFNGLTANGENT3IEXTPROC glTangent3iEXT;
typedef void (APIENTRYP PFNGLTANGENT3IVEXTPROC) (const GLint *v);
extern PFNGLTANGENT3IVEXTPROC glTangent3ivEXT;
typedef void (APIENTRYP PFNGLTANGENT3SEXTPROC) (GLshort tx, GLshort ty, GLshort tz);
extern PFNGLTANGENT3SEXTPROC glTangent3sEXT;
typedef void (APIENTRYP PFNGLTANGENT3SVEXTPROC) (const GLshort *v);
extern PFNGLTANGENT3SVEXTPROC glTangent3svEXT;
typedef void (APIENTRYP PFNGLBINORMAL3BEXTPROC) (GLbyte bx, GLbyte by, GLbyte bz);
extern PFNGLBINORMAL3BEXTPROC glBinormal3bEXT;
typedef void (APIENTRYP PFNGLBINORMAL3BVEXTPROC) (const GLbyte *v);
extern PFNGLBINORMAL3BVEXTPROC glBinormal3bvEXT;
typedef void (APIENTRYP PFNGLBINORMAL3DEXTPROC) (GLdouble bx, GLdouble by, GLdouble bz);
extern PFNGLBINORMAL3DEXTPROC glBinormal3dEXT;
typedef void (APIENTRYP PFNGLBINORMAL3DVEXTPROC) (const GLdouble *v);
extern PFNGLBINORMAL3DVEXTPROC glBinormal3dvEXT;
typedef void (APIENTRYP PFNGLBINORMAL3FEXTPROC) (GLfloat bx, GLfloat by, GLfloat bz);
extern PFNGLBINORMAL3FEXTPROC glBinormal3fEXT;
typedef void (APIENTRYP PFNGLBINORMAL3FVEXTPROC) (const GLfloat *v);
extern PFNGLBINORMAL3FVEXTPROC glBinormal3fvEXT;
typedef void (APIENTRYP PFNGLBINORMAL3IEXTPROC) (GLint bx, GLint by, GLint bz);
extern PFNGLBINORMAL3IEXTPROC glBinormal3iEXT;
typedef void (APIENTRYP PFNGLBINORMAL3IVEXTPROC) (const GLint *v);
extern PFNGLBINORMAL3IVEXTPROC glBinormal3ivEXT;
typedef void (APIENTRYP PFNGLBINORMAL3SEXTPROC) (GLshort bx, GLshort by, GLshort bz);
extern PFNGLBINORMAL3SEXTPROC glBinormal3sEXT;
typedef void (APIENTRYP PFNGLBINORMAL3SVEXTPROC) (const GLshort *v);
extern PFNGLBINORMAL3SVEXTPROC glBinormal3svEXT;
typedef void (APIENTRYP PFNGLTANGENTPOINTEREXTPROC) (GLenum type, GLsizei stride, const GLvoid *pointer);
extern PFNGLTANGENTPOINTEREXTPROC glTangentPointerEXT;
typedef void (APIENTRYP PFNGLBINORMALPOINTEREXTPROC) (GLenum type, GLsizei stride, const GLvoid *pointer);
extern PFNGLBINORMALPOINTEREXTPROC glBinormalPointerEXT;

// GL_EXT_texture_env_combine

// GL_APPLE_specular_vector

// GL_APPLE_transform_hint

// GL_SGIX_fog_scale

// GL_SUNX_constant_data
typedef void (APIENTRYP PFNGLFINISHTEXTURESUNXPROC) (void);
extern PFNGLFINISHTEXTURESUNXPROC glFinishTextureSUNX;

// GL_SUN_global_alpha
typedef void (APIENTRYP PFNGLGLOBALALPHAFACTORBSUNPROC) (GLbyte factor);
extern PFNGLGLOBALALPHAFACTORBSUNPROC glGlobalAlphaFactorbSUN;
typedef void (APIENTRYP PFNGLGLOBALALPHAFACTORSSUNPROC) (GLshort factor);
extern PFNGLGLOBALALPHAFACTORSSUNPROC glGlobalAlphaFactorsSUN;
typedef void (APIENTRYP PFNGLGLOBALALPHAFACTORISUNPROC) (GLint factor);
extern PFNGLGLOBALALPHAFACTORISUNPROC glGlobalAlphaFactoriSUN;
typedef void (APIENTRYP PFNGLGLOBALALPHAFACTORFSUNPROC) (GLfloat factor);
extern PFNGLGLOBALALPHAFACTORFSUNPROC glGlobalAlphaFactorfSUN;
typedef void (APIENTRYP PFNGLGLOBALALPHAFACTORDSUNPROC) (GLdouble factor);
extern PFNGLGLOBALALPHAFACTORDSUNPROC glGlobalAlphaFactordSUN;
typedef void (APIENTRYP PFNGLGLOBALALPHAFACTORUBSUNPROC) (GLubyte factor);
extern PFNGLGLOBALALPHAFACTORUBSUNPROC glGlobalAlphaFactorubSUN;
typedef void (APIENTRYP PFNGLGLOBALALPHAFACTORUSSUNPROC) (GLushort factor);
extern PFNGLGLOBALALPHAFACTORUSSUNPROC glGlobalAlphaFactorusSUN;
typedef void (APIENTRYP PFNGLGLOBALALPHAFACTORUISUNPROC) (GLuint factor);
extern PFNGLGLOBALALPHAFACTORUISUNPROC glGlobalAlphaFactoruiSUN;

// GL_SUN_triangle_list
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUISUNPROC) (GLuint code);
extern PFNGLREPLACEMENTCODEUISUNPROC glReplacementCodeuiSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUSSUNPROC) (GLushort code);
extern PFNGLREPLACEMENTCODEUSSUNPROC glReplacementCodeusSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUBSUNPROC) (GLubyte code);
extern PFNGLREPLACEMENTCODEUBSUNPROC glReplacementCodeubSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUIVSUNPROC) (const GLuint *code);
extern PFNGLREPLACEMENTCODEUIVSUNPROC glReplacementCodeuivSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUSVSUNPROC) (const GLushort *code);
extern PFNGLREPLACEMENTCODEUSVSUNPROC glReplacementCodeusvSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUBVSUNPROC) (const GLubyte *code);
extern PFNGLREPLACEMENTCODEUBVSUNPROC glReplacementCodeubvSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEPOINTERSUNPROC) (GLenum type, GLsizei stride, const GLvoid* *pointer);
extern PFNGLREPLACEMENTCODEPOINTERSUNPROC glReplacementCodePointerSUN;

// GL_SUN_vertex
typedef void (APIENTRYP PFNGLCOLOR4UBVERTEX2FSUNPROC) (GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y);
extern PFNGLCOLOR4UBVERTEX2FSUNPROC glColor4ubVertex2fSUN;
typedef void (APIENTRYP PFNGLCOLOR4UBVERTEX2FVSUNPROC) (const GLubyte *c, const GLfloat *v);
extern PFNGLCOLOR4UBVERTEX2FVSUNPROC glColor4ubVertex2fvSUN;
typedef void (APIENTRYP PFNGLCOLOR4UBVERTEX3FSUNPROC) (GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLCOLOR4UBVERTEX3FSUNPROC glColor4ubVertex3fSUN;
typedef void (APIENTRYP PFNGLCOLOR4UBVERTEX3FVSUNPROC) (const GLubyte *c, const GLfloat *v);
extern PFNGLCOLOR4UBVERTEX3FVSUNPROC glColor4ubVertex3fvSUN;
typedef void (APIENTRYP PFNGLCOLOR3FVERTEX3FSUNPROC) (GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLCOLOR3FVERTEX3FSUNPROC glColor3fVertex3fSUN;
typedef void (APIENTRYP PFNGLCOLOR3FVERTEX3FVSUNPROC) (const GLfloat *c, const GLfloat *v);
extern PFNGLCOLOR3FVERTEX3FVSUNPROC glColor3fVertex3fvSUN;
typedef void (APIENTRYP PFNGLNORMAL3FVERTEX3FSUNPROC) (GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLNORMAL3FVERTEX3FSUNPROC glNormal3fVertex3fSUN;
typedef void (APIENTRYP PFNGLNORMAL3FVERTEX3FVSUNPROC) (const GLfloat *n, const GLfloat *v);
extern PFNGLNORMAL3FVERTEX3FVSUNPROC glNormal3fVertex3fvSUN;
typedef void (APIENTRYP PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC) (GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC glColor4fNormal3fVertex3fSUN;
typedef void (APIENTRYP PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC) (const GLfloat *c, const GLfloat *n, const GLfloat *v);
extern PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC glColor4fNormal3fVertex3fvSUN;
typedef void (APIENTRYP PFNGLTEXCOORD2FVERTEX3FSUNPROC) (GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLTEXCOORD2FVERTEX3FSUNPROC glTexCoord2fVertex3fSUN;
typedef void (APIENTRYP PFNGLTEXCOORD2FVERTEX3FVSUNPROC) (const GLfloat *tc, const GLfloat *v);
extern PFNGLTEXCOORD2FVERTEX3FVSUNPROC glTexCoord2fVertex3fvSUN;
typedef void (APIENTRYP PFNGLTEXCOORD4FVERTEX4FSUNPROC) (GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern PFNGLTEXCOORD4FVERTEX4FSUNPROC glTexCoord4fVertex4fSUN;
typedef void (APIENTRYP PFNGLTEXCOORD4FVERTEX4FVSUNPROC) (const GLfloat *tc, const GLfloat *v);
extern PFNGLTEXCOORD4FVERTEX4FVSUNPROC glTexCoord4fVertex4fvSUN;
typedef void (APIENTRYP PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC) (GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC glTexCoord2fColor4ubVertex3fSUN;
typedef void (APIENTRYP PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC) (const GLfloat *tc, const GLubyte *c, const GLfloat *v);
extern PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC glTexCoord2fColor4ubVertex3fvSUN;
typedef void (APIENTRYP PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC) (GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC glTexCoord2fColor3fVertex3fSUN;
typedef void (APIENTRYP PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC) (const GLfloat *tc, const GLfloat *c, const GLfloat *v);
extern PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC glTexCoord2fColor3fVertex3fvSUN;
typedef void (APIENTRYP PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC) (GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC glTexCoord2fNormal3fVertex3fSUN;
typedef void (APIENTRYP PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC) (const GLfloat *tc, const GLfloat *n, const GLfloat *v);
extern PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC glTexCoord2fNormal3fVertex3fvSUN;
typedef void (APIENTRYP PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC) (GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC glTexCoord2fColor4fNormal3fVertex3fSUN;
typedef void (APIENTRYP PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC) (const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
extern PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC glTexCoord2fColor4fNormal3fVertex3fvSUN;
typedef void (APIENTRYP PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC) (GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC glTexCoord4fColor4fNormal3fVertex4fSUN;
typedef void (APIENTRYP PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC) (const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
extern PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC glTexCoord4fColor4fNormal3fVertex4fvSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC) (GLuint rc, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC glReplacementCodeuiVertex3fSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC) (const GLuint *rc, const GLfloat *v);
extern PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC glReplacementCodeuiVertex3fvSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC) (GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC glReplacementCodeuiColor4ubVertex3fSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC) (const GLuint *rc, const GLubyte *c, const GLfloat *v);
extern PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC glReplacementCodeuiColor4ubVertex3fvSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC) (GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC glReplacementCodeuiColor3fVertex3fSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC) (const GLuint *rc, const GLfloat *c, const GLfloat *v);
extern PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC glReplacementCodeuiColor3fVertex3fvSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC) (GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC glReplacementCodeuiNormal3fVertex3fSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC) (const GLuint *rc, const GLfloat *n, const GLfloat *v);
extern PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiNormal3fVertex3fvSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC) (GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiColor4fNormal3fVertex3fSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC) (const GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
extern PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiColor4fNormal3fVertex3fvSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC) (GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fVertex3fSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC) (const GLuint *rc, const GLfloat *tc, const GLfloat *v);
extern PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fVertex3fvSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC) (GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC) (const GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v);
extern PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC) (GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN;
typedef void (APIENTRYP PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC) (const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
extern PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN;

// GL_EXT_blend_func_separate
typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEEXTPROC) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
extern PFNGLBLENDFUNCSEPARATEEXTPROC glBlendFuncSeparateEXT;

// GL_INGR_color_clamp

// GL_INGR_interlace_read

// GL_EXT_stencil_wrap

// GL_EXT_422_pixels

// GL_NV_texgen_reflection

// GL_EXT_texture_cube_map

// GL_SUN_convolution_border_modes

// GL_EXT_texture_env_add

// GL_EXT_texture_lod_bias

// GL_EXT_texture_filter_anisotropic

// GL_EXT_vertex_weighting
typedef void (APIENTRYP PFNGLVERTEXWEIGHTFEXTPROC) (GLfloat weight);
extern PFNGLVERTEXWEIGHTFEXTPROC glVertexWeightfEXT;
typedef void (APIENTRYP PFNGLVERTEXWEIGHTFVEXTPROC) (const GLfloat *weight);
extern PFNGLVERTEXWEIGHTFVEXTPROC glVertexWeightfvEXT;
typedef void (APIENTRYP PFNGLVERTEXWEIGHTPOINTEREXTPROC) (GLsizei size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern PFNGLVERTEXWEIGHTPOINTEREXTPROC glVertexWeightPointerEXT;

// GL_NV_light_max_exponent

// GL_NV_vertex_array_range
typedef void (APIENTRYP PFNGLFLUSHVERTEXARRAYRANGENVPROC) (void);
extern PFNGLFLUSHVERTEXARRAYRANGENVPROC glFlushVertexArrayRangeNV;
typedef void (APIENTRYP PFNGLVERTEXARRAYRANGENVPROC) (GLsizei length, const GLvoid *pointer);
extern PFNGLVERTEXARRAYRANGENVPROC glVertexArrayRangeNV;

// GL_NV_register_combiners
typedef void (APIENTRYP PFNGLCOMBINERPARAMETERFVNVPROC) (GLenum pname, const GLfloat *params);
extern PFNGLCOMBINERPARAMETERFVNVPROC glCombinerParameterfvNV;
typedef void (APIENTRYP PFNGLCOMBINERPARAMETERFNVPROC) (GLenum pname, GLfloat param);
extern PFNGLCOMBINERPARAMETERFNVPROC glCombinerParameterfNV;
typedef void (APIENTRYP PFNGLCOMBINERPARAMETERIVNVPROC) (GLenum pname, const GLint *params);
extern PFNGLCOMBINERPARAMETERIVNVPROC glCombinerParameterivNV;
typedef void (APIENTRYP PFNGLCOMBINERPARAMETERINVPROC) (GLenum pname, GLint param);
extern PFNGLCOMBINERPARAMETERINVPROC glCombinerParameteriNV;
typedef void (APIENTRYP PFNGLCOMBINERINPUTNVPROC) (GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
extern PFNGLCOMBINERINPUTNVPROC glCombinerInputNV;
typedef void (APIENTRYP PFNGLCOMBINEROUTPUTNVPROC) (GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
extern PFNGLCOMBINEROUTPUTNVPROC glCombinerOutputNV;
typedef void (APIENTRYP PFNGLFINALCOMBINERINPUTNVPROC) (GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
extern PFNGLFINALCOMBINERINPUTNVPROC glFinalCombinerInputNV;
typedef void (APIENTRYP PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC) (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params);
extern PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC glGetCombinerInputParameterfvNV;
typedef void (APIENTRYP PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC) (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params);
extern PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC glGetCombinerInputParameterivNV;
typedef void (APIENTRYP PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC) (GLenum stage, GLenum portion, GLenum pname, GLfloat *params);
extern PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC glGetCombinerOutputParameterfvNV;
typedef void (APIENTRYP PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC) (GLenum stage, GLenum portion, GLenum pname, GLint *params);
extern PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC glGetCombinerOutputParameterivNV;
typedef void (APIENTRYP PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC) (GLenum variable, GLenum pname, GLfloat *params);
extern PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC glGetFinalCombinerInputParameterfvNV;
typedef void (APIENTRYP PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC) (GLenum variable, GLenum pname, GLint *params);
extern PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC glGetFinalCombinerInputParameterivNV;

// GL_NV_fog_distance

// GL_NV_texgen_emboss

// GL_NV_blend_square

// GL_NV_texture_env_combine4

// GL_MESA_resize_buffers
typedef void (APIENTRYP PFNGLRESIZEBUFFERSMESAPROC) (void);
extern PFNGLRESIZEBUFFERSMESAPROC glResizeBuffersMESA;

// GL_MESA_window_pos
typedef void (APIENTRYP PFNGLWINDOWPOS2DMESAPROC) (GLdouble x, GLdouble y);
extern PFNGLWINDOWPOS2DMESAPROC glWindowPos2dMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS2DVMESAPROC) (const GLdouble *v);
extern PFNGLWINDOWPOS2DVMESAPROC glWindowPos2dvMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS2FMESAPROC) (GLfloat x, GLfloat y);
extern PFNGLWINDOWPOS2FMESAPROC glWindowPos2fMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS2FVMESAPROC) (const GLfloat *v);
extern PFNGLWINDOWPOS2FVMESAPROC glWindowPos2fvMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS2IMESAPROC) (GLint x, GLint y);
extern PFNGLWINDOWPOS2IMESAPROC glWindowPos2iMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS2IVMESAPROC) (const GLint *v);
extern PFNGLWINDOWPOS2IVMESAPROC glWindowPos2ivMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS2SMESAPROC) (GLshort x, GLshort y);
extern PFNGLWINDOWPOS2SMESAPROC glWindowPos2sMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS2SVMESAPROC) (const GLshort *v);
extern PFNGLWINDOWPOS2SVMESAPROC glWindowPos2svMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS3DMESAPROC) (GLdouble x, GLdouble y, GLdouble z);
extern PFNGLWINDOWPOS3DMESAPROC glWindowPos3dMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS3DVMESAPROC) (const GLdouble *v);
extern PFNGLWINDOWPOS3DVMESAPROC glWindowPos3dvMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS3FMESAPROC) (GLfloat x, GLfloat y, GLfloat z);
extern PFNGLWINDOWPOS3FMESAPROC glWindowPos3fMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS3FVMESAPROC) (const GLfloat *v);
extern PFNGLWINDOWPOS3FVMESAPROC glWindowPos3fvMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS3IMESAPROC) (GLint x, GLint y, GLint z);
extern PFNGLWINDOWPOS3IMESAPROC glWindowPos3iMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS3IVMESAPROC) (const GLint *v);
extern PFNGLWINDOWPOS3IVMESAPROC glWindowPos3ivMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS3SMESAPROC) (GLshort x, GLshort y, GLshort z);
extern PFNGLWINDOWPOS3SMESAPROC glWindowPos3sMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS3SVMESAPROC) (const GLshort *v);
extern PFNGLWINDOWPOS3SVMESAPROC glWindowPos3svMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS4DMESAPROC) (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern PFNGLWINDOWPOS4DMESAPROC glWindowPos4dMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS4DVMESAPROC) (const GLdouble *v);
extern PFNGLWINDOWPOS4DVMESAPROC glWindowPos4dvMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS4FMESAPROC) (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern PFNGLWINDOWPOS4FMESAPROC glWindowPos4fMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS4FVMESAPROC) (const GLfloat *v);
extern PFNGLWINDOWPOS4FVMESAPROC glWindowPos4fvMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS4IMESAPROC) (GLint x, GLint y, GLint z, GLint w);
extern PFNGLWINDOWPOS4IMESAPROC glWindowPos4iMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS4IVMESAPROC) (const GLint *v);
extern PFNGLWINDOWPOS4IVMESAPROC glWindowPos4ivMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS4SMESAPROC) (GLshort x, GLshort y, GLshort z, GLshort w);
extern PFNGLWINDOWPOS4SMESAPROC glWindowPos4sMESA;
typedef void (APIENTRYP PFNGLWINDOWPOS4SVMESAPROC) (const GLshort *v);
extern PFNGLWINDOWPOS4SVMESAPROC glWindowPos4svMESA;

// GL_EXT_texture_compression_s3tc

// GL_IBM_cull_vertex

// GL_IBM_multimode_draw_arrays
typedef void (APIENTRYP PFNGLMULTIMODEDRAWARRAYSIBMPROC) (const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride);
extern PFNGLMULTIMODEDRAWARRAYSIBMPROC glMultiModeDrawArraysIBM;
typedef void (APIENTRYP PFNGLMULTIMODEDRAWELEMENTSIBMPROC) (const GLenum *mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount, GLint modestride);
extern PFNGLMULTIMODEDRAWELEMENTSIBMPROC glMultiModeDrawElementsIBM;

// GL_IBM_vertex_array_lists
typedef void (APIENTRYP PFNGLCOLORPOINTERLISTIBMPROC) (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
extern PFNGLCOLORPOINTERLISTIBMPROC glColorPointerListIBM;
typedef void (APIENTRYP PFNGLSECONDARYCOLORPOINTERLISTIBMPROC) (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
extern PFNGLSECONDARYCOLORPOINTERLISTIBMPROC glSecondaryColorPointerListIBM;
typedef void (APIENTRYP PFNGLEDGEFLAGPOINTERLISTIBMPROC) (GLint stride, const GLboolean* *pointer, GLint ptrstride);
extern PFNGLEDGEFLAGPOINTERLISTIBMPROC glEdgeFlagPointerListIBM;
typedef void (APIENTRYP PFNGLFOGCOORDPOINTERLISTIBMPROC) (GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
extern PFNGLFOGCOORDPOINTERLISTIBMPROC glFogCoordPointerListIBM;
typedef void (APIENTRYP PFNGLINDEXPOINTERLISTIBMPROC) (GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
extern PFNGLINDEXPOINTERLISTIBMPROC glIndexPointerListIBM;
typedef void (APIENTRYP PFNGLNORMALPOINTERLISTIBMPROC) (GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
extern PFNGLNORMALPOINTERLISTIBMPROC glNormalPointerListIBM;
typedef void (APIENTRYP PFNGLTEXCOORDPOINTERLISTIBMPROC) (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
extern PFNGLTEXCOORDPOINTERLISTIBMPROC glTexCoordPointerListIBM;
typedef void (APIENTRYP PFNGLVERTEXPOINTERLISTIBMPROC) (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
extern PFNGLVERTEXPOINTERLISTIBMPROC glVertexPointerListIBM;

// GL_SGIX_ycrcb_subsample

// GL_SGIX_ycrcba

// GL_SGI_depth_pass_instrument

// GL_3DFX_texture_compression_FXT1

// GL_3DFX_multisample

// GL_3DFX_tbuffer
typedef void (APIENTRYP PFNGLTBUFFERMASK3DFXPROC) (GLuint mask);
extern PFNGLTBUFFERMASK3DFXPROC glTbufferMask3DFX;

// GL_EXT_multisample
typedef void (APIENTRYP PFNGLSAMPLEMASKEXTPROC) (GLclampf value, GLboolean invert);
extern PFNGLSAMPLEMASKEXTPROC glSampleMaskEXT;
typedef void (APIENTRYP PFNGLSAMPLEPATTERNEXTPROC) (GLenum pattern);
extern PFNGLSAMPLEPATTERNEXTPROC glSamplePatternEXT;

// GL_SGIX_vertex_preclip

// GL_SGIX_convolution_accuracy

// GL_SGIX_resample

// GL_SGIS_point_line_texgen

// GL_SGIS_texture_color_mask
typedef void (APIENTRYP PFNGLTEXTURECOLORMASKSGISPROC) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
extern PFNGLTEXTURECOLORMASKSGISPROC glTextureColorMaskSGIS;

// GL_EXT_texture_env_dot3

// GL_ATI_texture_mirror_once

// GL_NV_fence
typedef void (APIENTRYP PFNGLDELETEFENCESNVPROC) (GLsizei n, const GLuint *fences);
extern PFNGLDELETEFENCESNVPROC glDeleteFencesNV;
typedef void (APIENTRYP PFNGLGENFENCESNVPROC) (GLsizei n, GLuint *fences);
extern PFNGLGENFENCESNVPROC glGenFencesNV;
typedef GLboolean (APIENTRYP PFNGLISFENCENVPROC) (GLuint fence);
extern PFNGLISFENCENVPROC glIsFenceNV;
typedef GLboolean (APIENTRYP PFNGLTESTFENCENVPROC) (GLuint fence);
extern PFNGLTESTFENCENVPROC glTestFenceNV;
typedef void (APIENTRYP PFNGLGETFENCEIVNVPROC) (GLuint fence, GLenum pname, GLint *params);
extern PFNGLGETFENCEIVNVPROC glGetFenceivNV;
typedef void (APIENTRYP PFNGLFINISHFENCENVPROC) (GLuint fence);
extern PFNGLFINISHFENCENVPROC glFinishFenceNV;
typedef void (APIENTRYP PFNGLSETFENCENVPROC) (GLuint fence, GLenum condition);
extern PFNGLSETFENCENVPROC glSetFenceNV;

// GL_IBM_texture_mirrored_repeat

// GL_NV_evaluators
typedef void (APIENTRYP PFNGLMAPCONTROLPOINTSNVPROC) (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const GLvoid *points);
extern PFNGLMAPCONTROLPOINTSNVPROC glMapControlPointsNV;
typedef void (APIENTRYP PFNGLMAPPARAMETERIVNVPROC) (GLenum target, GLenum pname, const GLint *params);
extern PFNGLMAPPARAMETERIVNVPROC glMapParameterivNV;
typedef void (APIENTRYP PFNGLMAPPARAMETERFVNVPROC) (GLenum target, GLenum pname, const GLfloat *params);
extern PFNGLMAPPARAMETERFVNVPROC glMapParameterfvNV;
typedef void (APIENTRYP PFNGLGETMAPCONTROLPOINTSNVPROC) (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, GLvoid *points);
extern PFNGLGETMAPCONTROLPOINTSNVPROC glGetMapControlPointsNV;
typedef void (APIENTRYP PFNGLGETMAPPARAMETERIVNVPROC) (GLenum target, GLenum pname, GLint *params);
extern PFNGLGETMAPPARAMETERIVNVPROC glGetMapParameterivNV;
typedef void (APIENTRYP PFNGLGETMAPPARAMETERFVNVPROC) (GLenum target, GLenum pname, GLfloat *params);
extern PFNGLGETMAPPARAMETERFVNVPROC glGetMapParameterfvNV;
typedef void (APIENTRYP PFNGLGETMAPATTRIBPARAMETERIVNVPROC) (GLenum target, GLuint index, GLenum pname, GLint *params);
extern PFNGLGETMAPATTRIBPARAMETERIVNVPROC glGetMapAttribParameterivNV;
typedef void (APIENTRYP PFNGLGETMAPATTRIBPARAMETERFVNVPROC) (GLenum target, GLuint index, GLenum pname, GLfloat *params);
extern PFNGLGETMAPATTRIBPARAMETERFVNVPROC glGetMapAttribParameterfvNV;
typedef void (APIENTRYP PFNGLEVALMAPSNVPROC) (GLenum target, GLenum mode);
extern PFNGLEVALMAPSNVPROC glEvalMapsNV;

// GL_NV_packed_depth_stencil

// GL_NV_register_combiners2
typedef void (APIENTRYP PFNGLCOMBINERSTAGEPARAMETERFVNVPROC) (GLenum stage, GLenum pname, const GLfloat *params);
extern PFNGLCOMBINERSTAGEPARAMETERFVNVPROC glCombinerStageParameterfvNV;
typedef void (APIENTRYP PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC) (GLenum stage, GLenum pname, GLfloat *params);
extern PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC glGetCombinerStageParameterfvNV;

// GL_NV_texture_compression_vtc

// GL_NV_texture_rectangle

// GL_NV_texture_shader

// GL_NV_texture_shader2

// GL_NV_vertex_array_range2

// GL_NV_vertex_program
typedef GLboolean (APIENTRYP PFNGLAREPROGRAMSRESIDENTNVPROC) (GLsizei n, const GLuint *programs, GLboolean *residences);
extern PFNGLAREPROGRAMSRESIDENTNVPROC glAreProgramsResidentNV;
typedef void (APIENTRYP PFNGLBINDPROGRAMNVPROC) (GLenum target, GLuint id);
extern PFNGLBINDPROGRAMNVPROC glBindProgramNV;
typedef void (APIENTRYP PFNGLDELETEPROGRAMSNVPROC) (GLsizei n, const GLuint *programs);
extern PFNGLDELETEPROGRAMSNVPROC glDeleteProgramsNV;
typedef void (APIENTRYP PFNGLEXECUTEPROGRAMNVPROC) (GLenum target, GLuint id, const GLfloat *params);
extern PFNGLEXECUTEPROGRAMNVPROC glExecuteProgramNV;
typedef void (APIENTRYP PFNGLGENPROGRAMSNVPROC) (GLsizei n, GLuint *programs);
extern PFNGLGENPROGRAMSNVPROC glGenProgramsNV;
typedef void (APIENTRYP PFNGLGETPROGRAMPARAMETERDVNVPROC) (GLenum target, GLuint index, GLenum pname, GLdouble *params);
extern PFNGLGETPROGRAMPARAMETERDVNVPROC glGetProgramParameterdvNV;
typedef void (APIENTRYP PFNGLGETPROGRAMPARAMETERFVNVPROC) (GLenum target, GLuint index, GLenum pname, GLfloat *params);
extern PFNGLGETPROGRAMPARAMETERFVNVPROC glGetProgramParameterfvNV;
typedef void (APIENTRYP PFNGLGETPROGRAMIVNVPROC) (GLuint id, GLenum pname, GLint *params);
extern PFNGLGETPROGRAMIVNVPROC glGetProgramivNV;
typedef void (APIENTRYP PFNGLGETPROGRAMSTRINGNVPROC) (GLuint id, GLenum pname, GLubyte *program);
extern PFNGLGETPROGRAMSTRINGNVPROC glGetProgramStringNV;
typedef void (APIENTRYP PFNGLGETTRACKMATRIXIVNVPROC) (GLenum target, GLuint address, GLenum pname, GLint *params);
extern PFNGLGETTRACKMATRIXIVNVPROC glGetTrackMatrixivNV;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBDVNVPROC) (GLuint index, GLenum pname, GLdouble *params);
extern PFNGLGETVERTEXATTRIBDVNVPROC glGetVertexAttribdvNV;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBFVNVPROC) (GLuint index, GLenum pname, GLfloat *params);
extern PFNGLGETVERTEXATTRIBFVNVPROC glGetVertexAttribfvNV;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIVNVPROC) (GLuint index, GLenum pname, GLint *params);
extern PFNGLGETVERTEXATTRIBIVNVPROC glGetVertexAttribivNV;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBPOINTERVNVPROC) (GLuint index, GLenum pname, GLvoid* *pointer);
extern PFNGLGETVERTEXATTRIBPOINTERVNVPROC glGetVertexAttribPointervNV;
typedef GLboolean (APIENTRYP PFNGLISPROGRAMNVPROC) (GLuint id);
extern PFNGLISPROGRAMNVPROC glIsProgramNV;
typedef void (APIENTRYP PFNGLLOADPROGRAMNVPROC) (GLenum target, GLuint id, GLsizei len, const GLubyte *program);
extern PFNGLLOADPROGRAMNVPROC glLoadProgramNV;
typedef void (APIENTRYP PFNGLPROGRAMPARAMETER4DNVPROC) (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern PFNGLPROGRAMPARAMETER4DNVPROC glProgramParameter4dNV;
typedef void (APIENTRYP PFNGLPROGRAMPARAMETER4DVNVPROC) (GLenum target, GLuint index, const GLdouble *v);
extern PFNGLPROGRAMPARAMETER4DVNVPROC glProgramParameter4dvNV;
typedef void (APIENTRYP PFNGLPROGRAMPARAMETER4FNVPROC) (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern PFNGLPROGRAMPARAMETER4FNVPROC glProgramParameter4fNV;
typedef void (APIENTRYP PFNGLPROGRAMPARAMETER4FVNVPROC) (GLenum target, GLuint index, const GLfloat *v);
extern PFNGLPROGRAMPARAMETER4FVNVPROC glProgramParameter4fvNV;
typedef void (APIENTRYP PFNGLPROGRAMPARAMETERS4DVNVPROC) (GLenum target, GLuint index, GLsizei count, const GLdouble *v);
extern PFNGLPROGRAMPARAMETERS4DVNVPROC glProgramParameters4dvNV;
typedef void (APIENTRYP PFNGLPROGRAMPARAMETERS4FVNVPROC) (GLenum target, GLuint index, GLsizei count, const GLfloat *v);
extern PFNGLPROGRAMPARAMETERS4FVNVPROC glProgramParameters4fvNV;
typedef void (APIENTRYP PFNGLREQUESTRESIDENTPROGRAMSNVPROC) (GLsizei n, const GLuint *programs);
extern PFNGLREQUESTRESIDENTPROGRAMSNVPROC glRequestResidentProgramsNV;
typedef void (APIENTRYP PFNGLTRACKMATRIXNVPROC) (GLenum target, GLuint address, GLenum matrix, GLenum transform);
extern PFNGLTRACKMATRIXNVPROC glTrackMatrixNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBPOINTERNVPROC) (GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid *pointer);
extern PFNGLVERTEXATTRIBPOINTERNVPROC glVertexAttribPointerNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB1DNVPROC) (GLuint index, GLdouble x);
extern PFNGLVERTEXATTRIB1DNVPROC glVertexAttrib1dNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB1DVNVPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIB1DVNVPROC glVertexAttrib1dvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB1FNVPROC) (GLuint index, GLfloat x);
extern PFNGLVERTEXATTRIB1FNVPROC glVertexAttrib1fNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB1FVNVPROC) (GLuint index, const GLfloat *v);
extern PFNGLVERTEXATTRIB1FVNVPROC glVertexAttrib1fvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB1SNVPROC) (GLuint index, GLshort x);
extern PFNGLVERTEXATTRIB1SNVPROC glVertexAttrib1sNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB1SVNVPROC) (GLuint index, const GLshort *v);
extern PFNGLVERTEXATTRIB1SVNVPROC glVertexAttrib1svNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB2DNVPROC) (GLuint index, GLdouble x, GLdouble y);
extern PFNGLVERTEXATTRIB2DNVPROC glVertexAttrib2dNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB2DVNVPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIB2DVNVPROC glVertexAttrib2dvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB2FNVPROC) (GLuint index, GLfloat x, GLfloat y);
extern PFNGLVERTEXATTRIB2FNVPROC glVertexAttrib2fNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB2FVNVPROC) (GLuint index, const GLfloat *v);
extern PFNGLVERTEXATTRIB2FVNVPROC glVertexAttrib2fvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB2SNVPROC) (GLuint index, GLshort x, GLshort y);
extern PFNGLVERTEXATTRIB2SNVPROC glVertexAttrib2sNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB2SVNVPROC) (GLuint index, const GLshort *v);
extern PFNGLVERTEXATTRIB2SVNVPROC glVertexAttrib2svNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB3DNVPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
extern PFNGLVERTEXATTRIB3DNVPROC glVertexAttrib3dNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB3DVNVPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIB3DVNVPROC glVertexAttrib3dvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB3FNVPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLVERTEXATTRIB3FNVPROC glVertexAttrib3fNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB3FVNVPROC) (GLuint index, const GLfloat *v);
extern PFNGLVERTEXATTRIB3FVNVPROC glVertexAttrib3fvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB3SNVPROC) (GLuint index, GLshort x, GLshort y, GLshort z);
extern PFNGLVERTEXATTRIB3SNVPROC glVertexAttrib3sNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB3SVNVPROC) (GLuint index, const GLshort *v);
extern PFNGLVERTEXATTRIB3SVNVPROC glVertexAttrib3svNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4DNVPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern PFNGLVERTEXATTRIB4DNVPROC glVertexAttrib4dNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4DVNVPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIB4DVNVPROC glVertexAttrib4dvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4FNVPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern PFNGLVERTEXATTRIB4FNVPROC glVertexAttrib4fNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4FVNVPROC) (GLuint index, const GLfloat *v);
extern PFNGLVERTEXATTRIB4FVNVPROC glVertexAttrib4fvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4SNVPROC) (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
extern PFNGLVERTEXATTRIB4SNVPROC glVertexAttrib4sNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4SVNVPROC) (GLuint index, const GLshort *v);
extern PFNGLVERTEXATTRIB4SVNVPROC glVertexAttrib4svNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4UBNVPROC) (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
extern PFNGLVERTEXATTRIB4UBNVPROC glVertexAttrib4ubNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4UBVNVPROC) (GLuint index, const GLubyte *v);
extern PFNGLVERTEXATTRIB4UBVNVPROC glVertexAttrib4ubvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS1DVNVPROC) (GLuint index, GLsizei count, const GLdouble *v);
extern PFNGLVERTEXATTRIBS1DVNVPROC glVertexAttribs1dvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS1FVNVPROC) (GLuint index, GLsizei count, const GLfloat *v);
extern PFNGLVERTEXATTRIBS1FVNVPROC glVertexAttribs1fvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS1SVNVPROC) (GLuint index, GLsizei count, const GLshort *v);
extern PFNGLVERTEXATTRIBS1SVNVPROC glVertexAttribs1svNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS2DVNVPROC) (GLuint index, GLsizei count, const GLdouble *v);
extern PFNGLVERTEXATTRIBS2DVNVPROC glVertexAttribs2dvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS2FVNVPROC) (GLuint index, GLsizei count, const GLfloat *v);
extern PFNGLVERTEXATTRIBS2FVNVPROC glVertexAttribs2fvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS2SVNVPROC) (GLuint index, GLsizei count, const GLshort *v);
extern PFNGLVERTEXATTRIBS2SVNVPROC glVertexAttribs2svNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS3DVNVPROC) (GLuint index, GLsizei count, const GLdouble *v);
extern PFNGLVERTEXATTRIBS3DVNVPROC glVertexAttribs3dvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS3FVNVPROC) (GLuint index, GLsizei count, const GLfloat *v);
extern PFNGLVERTEXATTRIBS3FVNVPROC glVertexAttribs3fvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS3SVNVPROC) (GLuint index, GLsizei count, const GLshort *v);
extern PFNGLVERTEXATTRIBS3SVNVPROC glVertexAttribs3svNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS4DVNVPROC) (GLuint index, GLsizei count, const GLdouble *v);
extern PFNGLVERTEXATTRIBS4DVNVPROC glVertexAttribs4dvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS4FVNVPROC) (GLuint index, GLsizei count, const GLfloat *v);
extern PFNGLVERTEXATTRIBS4FVNVPROC glVertexAttribs4fvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS4SVNVPROC) (GLuint index, GLsizei count, const GLshort *v);
extern PFNGLVERTEXATTRIBS4SVNVPROC glVertexAttribs4svNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS4UBVNVPROC) (GLuint index, GLsizei count, const GLubyte *v);
extern PFNGLVERTEXATTRIBS4UBVNVPROC glVertexAttribs4ubvNV;

// GL_SGIX_texture_coordinate_clamp

// GL_SGIX_scalebias_hint

// GL_OML_interlace

// GL_OML_subsample

// GL_OML_resample

// GL_NV_copy_depth_to_color

// GL_ATI_envmap_bumpmap
typedef void (APIENTRYP PFNGLTEXBUMPPARAMETERIVATIPROC) (GLenum pname, const GLint *param);
extern PFNGLTEXBUMPPARAMETERIVATIPROC glTexBumpParameterivATI;
typedef void (APIENTRYP PFNGLTEXBUMPPARAMETERFVATIPROC) (GLenum pname, const GLfloat *param);
extern PFNGLTEXBUMPPARAMETERFVATIPROC glTexBumpParameterfvATI;
typedef void (APIENTRYP PFNGLGETTEXBUMPPARAMETERIVATIPROC) (GLenum pname, GLint *param);
extern PFNGLGETTEXBUMPPARAMETERIVATIPROC glGetTexBumpParameterivATI;
typedef void (APIENTRYP PFNGLGETTEXBUMPPARAMETERFVATIPROC) (GLenum pname, GLfloat *param);
extern PFNGLGETTEXBUMPPARAMETERFVATIPROC glGetTexBumpParameterfvATI;

// GL_ATI_fragment_shader
typedef GLuint (APIENTRYP PFNGLGENFRAGMENTSHADERSATIPROC) (GLuint range);
extern PFNGLGENFRAGMENTSHADERSATIPROC glGenFragmentShadersATI;
typedef void (APIENTRYP PFNGLBINDFRAGMENTSHADERATIPROC) (GLuint id);
extern PFNGLBINDFRAGMENTSHADERATIPROC glBindFragmentShaderATI;
typedef void (APIENTRYP PFNGLDELETEFRAGMENTSHADERATIPROC) (GLuint id);
extern PFNGLDELETEFRAGMENTSHADERATIPROC glDeleteFragmentShaderATI;
typedef void (APIENTRYP PFNGLBEGINFRAGMENTSHADERATIPROC) (void);
extern PFNGLBEGINFRAGMENTSHADERATIPROC glBeginFragmentShaderATI;
typedef void (APIENTRYP PFNGLENDFRAGMENTSHADERATIPROC) (void);
extern PFNGLENDFRAGMENTSHADERATIPROC glEndFragmentShaderATI;
typedef void (APIENTRYP PFNGLPASSTEXCOORDATIPROC) (GLuint dst, GLuint coord, GLenum swizzle);
extern PFNGLPASSTEXCOORDATIPROC glPassTexCoordATI;
typedef void (APIENTRYP PFNGLSAMPLEMAPATIPROC) (GLuint dst, GLuint interp, GLenum swizzle);
extern PFNGLSAMPLEMAPATIPROC glSampleMapATI;
typedef void (APIENTRYP PFNGLCOLORFRAGMENTOP1ATIPROC) (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
extern PFNGLCOLORFRAGMENTOP1ATIPROC glColorFragmentOp1ATI;
typedef void (APIENTRYP PFNGLCOLORFRAGMENTOP2ATIPROC) (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
extern PFNGLCOLORFRAGMENTOP2ATIPROC glColorFragmentOp2ATI;
typedef void (APIENTRYP PFNGLCOLORFRAGMENTOP3ATIPROC) (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
extern PFNGLCOLORFRAGMENTOP3ATIPROC glColorFragmentOp3ATI;
typedef void (APIENTRYP PFNGLALPHAFRAGMENTOP1ATIPROC) (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
extern PFNGLALPHAFRAGMENTOP1ATIPROC glAlphaFragmentOp1ATI;
typedef void (APIENTRYP PFNGLALPHAFRAGMENTOP2ATIPROC) (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
extern PFNGLALPHAFRAGMENTOP2ATIPROC glAlphaFragmentOp2ATI;
typedef void (APIENTRYP PFNGLALPHAFRAGMENTOP3ATIPROC) (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
extern PFNGLALPHAFRAGMENTOP3ATIPROC glAlphaFragmentOp3ATI;
typedef void (APIENTRYP PFNGLSETFRAGMENTSHADERCONSTANTATIPROC) (GLuint dst, const GLfloat *value);
extern PFNGLSETFRAGMENTSHADERCONSTANTATIPROC glSetFragmentShaderConstantATI;

// GL_ATI_pn_triangles
typedef void (APIENTRYP PFNGLPNTRIANGLESIATIPROC) (GLenum pname, GLint param);
extern PFNGLPNTRIANGLESIATIPROC glPNTrianglesiATI;
typedef void (APIENTRYP PFNGLPNTRIANGLESFATIPROC) (GLenum pname, GLfloat param);
extern PFNGLPNTRIANGLESFATIPROC glPNTrianglesfATI;

// GL_ATI_vertex_array_object
typedef GLuint (APIENTRYP PFNGLNEWOBJECTBUFFERATIPROC) (GLsizei size, const GLvoid *pointer, GLenum usage);
extern PFNGLNEWOBJECTBUFFERATIPROC glNewObjectBufferATI;
typedef GLboolean (APIENTRYP PFNGLISOBJECTBUFFERATIPROC) (GLuint buffer);
extern PFNGLISOBJECTBUFFERATIPROC glIsObjectBufferATI;
typedef void (APIENTRYP PFNGLUPDATEOBJECTBUFFERATIPROC) (GLuint buffer, GLuint offset, GLsizei size, const GLvoid *pointer, GLenum preserve);
extern PFNGLUPDATEOBJECTBUFFERATIPROC glUpdateObjectBufferATI;
typedef void (APIENTRYP PFNGLGETOBJECTBUFFERFVATIPROC) (GLuint buffer, GLenum pname, GLfloat *params);
extern PFNGLGETOBJECTBUFFERFVATIPROC glGetObjectBufferfvATI;
typedef void (APIENTRYP PFNGLGETOBJECTBUFFERIVATIPROC) (GLuint buffer, GLenum pname, GLint *params);
extern PFNGLGETOBJECTBUFFERIVATIPROC glGetObjectBufferivATI;
typedef void (APIENTRYP PFNGLFREEOBJECTBUFFERATIPROC) (GLuint buffer);
extern PFNGLFREEOBJECTBUFFERATIPROC glFreeObjectBufferATI;
typedef void (APIENTRYP PFNGLARRAYOBJECTATIPROC) (GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
extern PFNGLARRAYOBJECTATIPROC glArrayObjectATI;
typedef void (APIENTRYP PFNGLGETARRAYOBJECTFVATIPROC) (GLenum array, GLenum pname, GLfloat *params);
extern PFNGLGETARRAYOBJECTFVATIPROC glGetArrayObjectfvATI;
typedef void (APIENTRYP PFNGLGETARRAYOBJECTIVATIPROC) (GLenum array, GLenum pname, GLint *params);
extern PFNGLGETARRAYOBJECTIVATIPROC glGetArrayObjectivATI;
typedef void (APIENTRYP PFNGLVARIANTARRAYOBJECTATIPROC) (GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
extern PFNGLVARIANTARRAYOBJECTATIPROC glVariantArrayObjectATI;
typedef void (APIENTRYP PFNGLGETVARIANTARRAYOBJECTFVATIPROC) (GLuint id, GLenum pname, GLfloat *params);
extern PFNGLGETVARIANTARRAYOBJECTFVATIPROC glGetVariantArrayObjectfvATI;
typedef void (APIENTRYP PFNGLGETVARIANTARRAYOBJECTIVATIPROC) (GLuint id, GLenum pname, GLint *params);
extern PFNGLGETVARIANTARRAYOBJECTIVATIPROC glGetVariantArrayObjectivATI;

// GL_EXT_vertex_shader
typedef void (APIENTRYP PFNGLBEGINVERTEXSHADEREXTPROC) (void);
extern PFNGLBEGINVERTEXSHADEREXTPROC glBeginVertexShaderEXT;
typedef void (APIENTRYP PFNGLENDVERTEXSHADEREXTPROC) (void);
extern PFNGLENDVERTEXSHADEREXTPROC glEndVertexShaderEXT;
typedef void (APIENTRYP PFNGLBINDVERTEXSHADEREXTPROC) (GLuint id);
extern PFNGLBINDVERTEXSHADEREXTPROC glBindVertexShaderEXT;
typedef GLuint (APIENTRYP PFNGLGENVERTEXSHADERSEXTPROC) (GLuint range);
extern PFNGLGENVERTEXSHADERSEXTPROC glGenVertexShadersEXT;
typedef void (APIENTRYP PFNGLDELETEVERTEXSHADEREXTPROC) (GLuint id);
extern PFNGLDELETEVERTEXSHADEREXTPROC glDeleteVertexShaderEXT;
typedef void (APIENTRYP PFNGLSHADEROP1EXTPROC) (GLenum op, GLuint res, GLuint arg1);
extern PFNGLSHADEROP1EXTPROC glShaderOp1EXT;
typedef void (APIENTRYP PFNGLSHADEROP2EXTPROC) (GLenum op, GLuint res, GLuint arg1, GLuint arg2);
extern PFNGLSHADEROP2EXTPROC glShaderOp2EXT;
typedef void (APIENTRYP PFNGLSHADEROP3EXTPROC) (GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3);
extern PFNGLSHADEROP3EXTPROC glShaderOp3EXT;
typedef void (APIENTRYP PFNGLSWIZZLEEXTPROC) (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
extern PFNGLSWIZZLEEXTPROC glSwizzleEXT;
typedef void (APIENTRYP PFNGLWRITEMASKEXTPROC) (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
extern PFNGLWRITEMASKEXTPROC glWriteMaskEXT;
typedef void (APIENTRYP PFNGLINSERTCOMPONENTEXTPROC) (GLuint res, GLuint src, GLuint num);
extern PFNGLINSERTCOMPONENTEXTPROC glInsertComponentEXT;
typedef void (APIENTRYP PFNGLEXTRACTCOMPONENTEXTPROC) (GLuint res, GLuint src, GLuint num);
extern PFNGLEXTRACTCOMPONENTEXTPROC glExtractComponentEXT;
typedef GLuint (APIENTRYP PFNGLGENSYMBOLSEXTPROC) (GLenum datatype, GLenum storagetype, GLenum range, GLuint components);
extern PFNGLGENSYMBOLSEXTPROC glGenSymbolsEXT;
typedef void (APIENTRYP PFNGLSETINVARIANTEXTPROC) (GLuint id, GLenum type, const GLvoid *addr);
extern PFNGLSETINVARIANTEXTPROC glSetInvariantEXT;
typedef void (APIENTRYP PFNGLSETLOCALCONSTANTEXTPROC) (GLuint id, GLenum type, const GLvoid *addr);
extern PFNGLSETLOCALCONSTANTEXTPROC glSetLocalConstantEXT;
typedef void (APIENTRYP PFNGLVARIANTBVEXTPROC) (GLuint id, const GLbyte *addr);
extern PFNGLVARIANTBVEXTPROC glVariantbvEXT;
typedef void (APIENTRYP PFNGLVARIANTSVEXTPROC) (GLuint id, const GLshort *addr);
extern PFNGLVARIANTSVEXTPROC glVariantsvEXT;
typedef void (APIENTRYP PFNGLVARIANTIVEXTPROC) (GLuint id, const GLint *addr);
extern PFNGLVARIANTIVEXTPROC glVariantivEXT;
typedef void (APIENTRYP PFNGLVARIANTFVEXTPROC) (GLuint id, const GLfloat *addr);
extern PFNGLVARIANTFVEXTPROC glVariantfvEXT;
typedef void (APIENTRYP PFNGLVARIANTDVEXTPROC) (GLuint id, const GLdouble *addr);
extern PFNGLVARIANTDVEXTPROC glVariantdvEXT;
typedef void (APIENTRYP PFNGLVARIANTUBVEXTPROC) (GLuint id, const GLubyte *addr);
extern PFNGLVARIANTUBVEXTPROC glVariantubvEXT;
typedef void (APIENTRYP PFNGLVARIANTUSVEXTPROC) (GLuint id, const GLushort *addr);
extern PFNGLVARIANTUSVEXTPROC glVariantusvEXT;
typedef void (APIENTRYP PFNGLVARIANTUIVEXTPROC) (GLuint id, const GLuint *addr);
extern PFNGLVARIANTUIVEXTPROC glVariantuivEXT;
typedef void (APIENTRYP PFNGLVARIANTPOINTEREXTPROC) (GLuint id, GLenum type, GLuint stride, const GLvoid *addr);
extern PFNGLVARIANTPOINTEREXTPROC glVariantPointerEXT;
typedef void (APIENTRYP PFNGLENABLEVARIANTCLIENTSTATEEXTPROC) (GLuint id);
extern PFNGLENABLEVARIANTCLIENTSTATEEXTPROC glEnableVariantClientStateEXT;
typedef void (APIENTRYP PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC) (GLuint id);
extern PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC glDisableVariantClientStateEXT;
typedef GLuint (APIENTRYP PFNGLBINDLIGHTPARAMETEREXTPROC) (GLenum light, GLenum value);
extern PFNGLBINDLIGHTPARAMETEREXTPROC glBindLightParameterEXT;
typedef GLuint (APIENTRYP PFNGLBINDMATERIALPARAMETEREXTPROC) (GLenum face, GLenum value);
extern PFNGLBINDMATERIALPARAMETEREXTPROC glBindMaterialParameterEXT;
typedef GLuint (APIENTRYP PFNGLBINDTEXGENPARAMETEREXTPROC) (GLenum unit, GLenum coord, GLenum value);
extern PFNGLBINDTEXGENPARAMETEREXTPROC glBindTexGenParameterEXT;
typedef GLuint (APIENTRYP PFNGLBINDTEXTUREUNITPARAMETEREXTPROC) (GLenum unit, GLenum value);
extern PFNGLBINDTEXTUREUNITPARAMETEREXTPROC glBindTextureUnitParameterEXT;
typedef GLuint (APIENTRYP PFNGLBINDPARAMETEREXTPROC) (GLenum value);
extern PFNGLBINDPARAMETEREXTPROC glBindParameterEXT;
typedef GLboolean (APIENTRYP PFNGLISVARIANTENABLEDEXTPROC) (GLuint id, GLenum cap);
extern PFNGLISVARIANTENABLEDEXTPROC glIsVariantEnabledEXT;
typedef void (APIENTRYP PFNGLGETVARIANTBOOLEANVEXTPROC) (GLuint id, GLenum value, GLboolean *data);
extern PFNGLGETVARIANTBOOLEANVEXTPROC glGetVariantBooleanvEXT;
typedef void (APIENTRYP PFNGLGETVARIANTINTEGERVEXTPROC) (GLuint id, GLenum value, GLint *data);
extern PFNGLGETVARIANTINTEGERVEXTPROC glGetVariantIntegervEXT;
typedef void (APIENTRYP PFNGLGETVARIANTFLOATVEXTPROC) (GLuint id, GLenum value, GLfloat *data);
extern PFNGLGETVARIANTFLOATVEXTPROC glGetVariantFloatvEXT;
typedef void (APIENTRYP PFNGLGETVARIANTPOINTERVEXTPROC) (GLuint id, GLenum value, GLvoid* *data);
extern PFNGLGETVARIANTPOINTERVEXTPROC glGetVariantPointervEXT;
typedef void (APIENTRYP PFNGLGETINVARIANTBOOLEANVEXTPROC) (GLuint id, GLenum value, GLboolean *data);
extern PFNGLGETINVARIANTBOOLEANVEXTPROC glGetInvariantBooleanvEXT;
typedef void (APIENTRYP PFNGLGETINVARIANTINTEGERVEXTPROC) (GLuint id, GLenum value, GLint *data);
extern PFNGLGETINVARIANTINTEGERVEXTPROC glGetInvariantIntegervEXT;
typedef void (APIENTRYP PFNGLGETINVARIANTFLOATVEXTPROC) (GLuint id, GLenum value, GLfloat *data);
extern PFNGLGETINVARIANTFLOATVEXTPROC glGetInvariantFloatvEXT;
typedef void (APIENTRYP PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC) (GLuint id, GLenum value, GLboolean *data);
extern PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC glGetLocalConstantBooleanvEXT;
typedef void (APIENTRYP PFNGLGETLOCALCONSTANTINTEGERVEXTPROC) (GLuint id, GLenum value, GLint *data);
extern PFNGLGETLOCALCONSTANTINTEGERVEXTPROC glGetLocalConstantIntegervEXT;
typedef void (APIENTRYP PFNGLGETLOCALCONSTANTFLOATVEXTPROC) (GLuint id, GLenum value, GLfloat *data);
extern PFNGLGETLOCALCONSTANTFLOATVEXTPROC glGetLocalConstantFloatvEXT;

// GL_ATI_vertex_streams
typedef void (APIENTRYP PFNGLVERTEXSTREAM1SATIPROC) (GLenum stream, GLshort x);
extern PFNGLVERTEXSTREAM1SATIPROC glVertexStream1sATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM1SVATIPROC) (GLenum stream, const GLshort *coords);
extern PFNGLVERTEXSTREAM1SVATIPROC glVertexStream1svATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM1IATIPROC) (GLenum stream, GLint x);
extern PFNGLVERTEXSTREAM1IATIPROC glVertexStream1iATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM1IVATIPROC) (GLenum stream, const GLint *coords);
extern PFNGLVERTEXSTREAM1IVATIPROC glVertexStream1ivATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM1FATIPROC) (GLenum stream, GLfloat x);
extern PFNGLVERTEXSTREAM1FATIPROC glVertexStream1fATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM1FVATIPROC) (GLenum stream, const GLfloat *coords);
extern PFNGLVERTEXSTREAM1FVATIPROC glVertexStream1fvATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM1DATIPROC) (GLenum stream, GLdouble x);
extern PFNGLVERTEXSTREAM1DATIPROC glVertexStream1dATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM1DVATIPROC) (GLenum stream, const GLdouble *coords);
extern PFNGLVERTEXSTREAM1DVATIPROC glVertexStream1dvATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM2SATIPROC) (GLenum stream, GLshort x, GLshort y);
extern PFNGLVERTEXSTREAM2SATIPROC glVertexStream2sATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM2SVATIPROC) (GLenum stream, const GLshort *coords);
extern PFNGLVERTEXSTREAM2SVATIPROC glVertexStream2svATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM2IATIPROC) (GLenum stream, GLint x, GLint y);
extern PFNGLVERTEXSTREAM2IATIPROC glVertexStream2iATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM2IVATIPROC) (GLenum stream, const GLint *coords);
extern PFNGLVERTEXSTREAM2IVATIPROC glVertexStream2ivATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM2FATIPROC) (GLenum stream, GLfloat x, GLfloat y);
extern PFNGLVERTEXSTREAM2FATIPROC glVertexStream2fATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM2FVATIPROC) (GLenum stream, const GLfloat *coords);
extern PFNGLVERTEXSTREAM2FVATIPROC glVertexStream2fvATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM2DATIPROC) (GLenum stream, GLdouble x, GLdouble y);
extern PFNGLVERTEXSTREAM2DATIPROC glVertexStream2dATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM2DVATIPROC) (GLenum stream, const GLdouble *coords);
extern PFNGLVERTEXSTREAM2DVATIPROC glVertexStream2dvATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM3SATIPROC) (GLenum stream, GLshort x, GLshort y, GLshort z);
extern PFNGLVERTEXSTREAM3SATIPROC glVertexStream3sATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM3SVATIPROC) (GLenum stream, const GLshort *coords);
extern PFNGLVERTEXSTREAM3SVATIPROC glVertexStream3svATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM3IATIPROC) (GLenum stream, GLint x, GLint y, GLint z);
extern PFNGLVERTEXSTREAM3IATIPROC glVertexStream3iATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM3IVATIPROC) (GLenum stream, const GLint *coords);
extern PFNGLVERTEXSTREAM3IVATIPROC glVertexStream3ivATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM3FATIPROC) (GLenum stream, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLVERTEXSTREAM3FATIPROC glVertexStream3fATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM3FVATIPROC) (GLenum stream, const GLfloat *coords);
extern PFNGLVERTEXSTREAM3FVATIPROC glVertexStream3fvATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM3DATIPROC) (GLenum stream, GLdouble x, GLdouble y, GLdouble z);
extern PFNGLVERTEXSTREAM3DATIPROC glVertexStream3dATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM3DVATIPROC) (GLenum stream, const GLdouble *coords);
extern PFNGLVERTEXSTREAM3DVATIPROC glVertexStream3dvATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM4SATIPROC) (GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w);
extern PFNGLVERTEXSTREAM4SATIPROC glVertexStream4sATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM4SVATIPROC) (GLenum stream, const GLshort *coords);
extern PFNGLVERTEXSTREAM4SVATIPROC glVertexStream4svATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM4IATIPROC) (GLenum stream, GLint x, GLint y, GLint z, GLint w);
extern PFNGLVERTEXSTREAM4IATIPROC glVertexStream4iATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM4IVATIPROC) (GLenum stream, const GLint *coords);
extern PFNGLVERTEXSTREAM4IVATIPROC glVertexStream4ivATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM4FATIPROC) (GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern PFNGLVERTEXSTREAM4FATIPROC glVertexStream4fATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM4FVATIPROC) (GLenum stream, const GLfloat *coords);
extern PFNGLVERTEXSTREAM4FVATIPROC glVertexStream4fvATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM4DATIPROC) (GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern PFNGLVERTEXSTREAM4DATIPROC glVertexStream4dATI;
typedef void (APIENTRYP PFNGLVERTEXSTREAM4DVATIPROC) (GLenum stream, const GLdouble *coords);
extern PFNGLVERTEXSTREAM4DVATIPROC glVertexStream4dvATI;
typedef void (APIENTRYP PFNGLNORMALSTREAM3BATIPROC) (GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz);
extern PFNGLNORMALSTREAM3BATIPROC glNormalStream3bATI;
typedef void (APIENTRYP PFNGLNORMALSTREAM3BVATIPROC) (GLenum stream, const GLbyte *coords);
extern PFNGLNORMALSTREAM3BVATIPROC glNormalStream3bvATI;
typedef void (APIENTRYP PFNGLNORMALSTREAM3SATIPROC) (GLenum stream, GLshort nx, GLshort ny, GLshort nz);
extern PFNGLNORMALSTREAM3SATIPROC glNormalStream3sATI;
typedef void (APIENTRYP PFNGLNORMALSTREAM3SVATIPROC) (GLenum stream, const GLshort *coords);
extern PFNGLNORMALSTREAM3SVATIPROC glNormalStream3svATI;
typedef void (APIENTRYP PFNGLNORMALSTREAM3IATIPROC) (GLenum stream, GLint nx, GLint ny, GLint nz);
extern PFNGLNORMALSTREAM3IATIPROC glNormalStream3iATI;
typedef void (APIENTRYP PFNGLNORMALSTREAM3IVATIPROC) (GLenum stream, const GLint *coords);
extern PFNGLNORMALSTREAM3IVATIPROC glNormalStream3ivATI;
typedef void (APIENTRYP PFNGLNORMALSTREAM3FATIPROC) (GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz);
extern PFNGLNORMALSTREAM3FATIPROC glNormalStream3fATI;
typedef void (APIENTRYP PFNGLNORMALSTREAM3FVATIPROC) (GLenum stream, const GLfloat *coords);
extern PFNGLNORMALSTREAM3FVATIPROC glNormalStream3fvATI;
typedef void (APIENTRYP PFNGLNORMALSTREAM3DATIPROC) (GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz);
extern PFNGLNORMALSTREAM3DATIPROC glNormalStream3dATI;
typedef void (APIENTRYP PFNGLNORMALSTREAM3DVATIPROC) (GLenum stream, const GLdouble *coords);
extern PFNGLNORMALSTREAM3DVATIPROC glNormalStream3dvATI;
typedef void (APIENTRYP PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC) (GLenum stream);
extern PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC glClientActiveVertexStreamATI;
typedef void (APIENTRYP PFNGLVERTEXBLENDENVIATIPROC) (GLenum pname, GLint param);
extern PFNGLVERTEXBLENDENVIATIPROC glVertexBlendEnviATI;
typedef void (APIENTRYP PFNGLVERTEXBLENDENVFATIPROC) (GLenum pname, GLfloat param);
extern PFNGLVERTEXBLENDENVFATIPROC glVertexBlendEnvfATI;

// GL_ATI_element_array
typedef void (APIENTRYP PFNGLELEMENTPOINTERATIPROC) (GLenum type, const GLvoid *pointer);
extern PFNGLELEMENTPOINTERATIPROC glElementPointerATI;
typedef void (APIENTRYP PFNGLDRAWELEMENTARRAYATIPROC) (GLenum mode, GLsizei count);
extern PFNGLDRAWELEMENTARRAYATIPROC glDrawElementArrayATI;
typedef void (APIENTRYP PFNGLDRAWRANGEELEMENTARRAYATIPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count);
extern PFNGLDRAWRANGEELEMENTARRAYATIPROC glDrawRangeElementArrayATI;

// GL_SUN_mesh_array
typedef void (APIENTRYP PFNGLDRAWMESHARRAYSSUNPROC) (GLenum mode, GLint first, GLsizei count, GLsizei width);
extern PFNGLDRAWMESHARRAYSSUNPROC glDrawMeshArraysSUN;

// GL_SUN_slice_accum

// GL_NV_multisample_filter_hint

// GL_NV_depth_clamp

// GL_NV_occlusion_query
typedef void (APIENTRYP PFNGLGENOCCLUSIONQUERIESNVPROC) (GLsizei n, GLuint *ids);
extern PFNGLGENOCCLUSIONQUERIESNVPROC glGenOcclusionQueriesNV;
typedef void (APIENTRYP PFNGLDELETEOCCLUSIONQUERIESNVPROC) (GLsizei n, const GLuint *ids);
extern PFNGLDELETEOCCLUSIONQUERIESNVPROC glDeleteOcclusionQueriesNV;
typedef GLboolean (APIENTRYP PFNGLISOCCLUSIONQUERYNVPROC) (GLuint id);
extern PFNGLISOCCLUSIONQUERYNVPROC glIsOcclusionQueryNV;
typedef void (APIENTRYP PFNGLBEGINOCCLUSIONQUERYNVPROC) (GLuint id);
extern PFNGLBEGINOCCLUSIONQUERYNVPROC glBeginOcclusionQueryNV;
typedef void (APIENTRYP PFNGLENDOCCLUSIONQUERYNVPROC) (void);
extern PFNGLENDOCCLUSIONQUERYNVPROC glEndOcclusionQueryNV;
typedef void (APIENTRYP PFNGLGETOCCLUSIONQUERYIVNVPROC) (GLuint id, GLenum pname, GLint *params);
extern PFNGLGETOCCLUSIONQUERYIVNVPROC glGetOcclusionQueryivNV;
typedef void (APIENTRYP PFNGLGETOCCLUSIONQUERYUIVNVPROC) (GLuint id, GLenum pname, GLuint *params);
extern PFNGLGETOCCLUSIONQUERYUIVNVPROC glGetOcclusionQueryuivNV;

// GL_NV_point_sprite
typedef void (APIENTRYP PFNGLPOINTPARAMETERINVPROC) (GLenum pname, GLint param);
extern PFNGLPOINTPARAMETERINVPROC glPointParameteriNV;
typedef void (APIENTRYP PFNGLPOINTPARAMETERIVNVPROC) (GLenum pname, const GLint *params);
extern PFNGLPOINTPARAMETERIVNVPROC glPointParameterivNV;

// GL_NV_texture_shader3

// GL_NV_vertex_program1_1

// GL_EXT_shadow_funcs

// GL_EXT_stencil_two_side
typedef void (APIENTRYP PFNGLACTIVESTENCILFACEEXTPROC) (GLenum face);
extern PFNGLACTIVESTENCILFACEEXTPROC glActiveStencilFaceEXT;

// GL_ATI_text_fragment_shader

// GL_APPLE_client_storage

// GL_APPLE_element_array
typedef void (APIENTRYP PFNGLELEMENTPOINTERAPPLEPROC) (GLenum type, const GLvoid *pointer);
extern PFNGLELEMENTPOINTERAPPLEPROC glElementPointerAPPLE;
typedef void (APIENTRYP PFNGLDRAWELEMENTARRAYAPPLEPROC) (GLenum mode, GLint first, GLsizei count);
extern PFNGLDRAWELEMENTARRAYAPPLEPROC glDrawElementArrayAPPLE;
typedef void (APIENTRYP PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC) (GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count);
extern PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC glDrawRangeElementArrayAPPLE;
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC) (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
extern PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC glMultiDrawElementArrayAPPLE;
typedef void (APIENTRYP PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC) (GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount);
extern PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC glMultiDrawRangeElementArrayAPPLE;

// GL_APPLE_fence
typedef void (APIENTRYP PFNGLGENFENCESAPPLEPROC) (GLsizei n, GLuint *fences);
extern PFNGLGENFENCESAPPLEPROC glGenFencesAPPLE;
typedef void (APIENTRYP PFNGLDELETEFENCESAPPLEPROC) (GLsizei n, const GLuint *fences);
extern PFNGLDELETEFENCESAPPLEPROC glDeleteFencesAPPLE;
typedef void (APIENTRYP PFNGLSETFENCEAPPLEPROC) (GLuint fence);
extern PFNGLSETFENCEAPPLEPROC glSetFenceAPPLE;
typedef GLboolean (APIENTRYP PFNGLISFENCEAPPLEPROC) (GLuint fence);
extern PFNGLISFENCEAPPLEPROC glIsFenceAPPLE;
typedef GLboolean (APIENTRYP PFNGLTESTFENCEAPPLEPROC) (GLuint fence);
extern PFNGLTESTFENCEAPPLEPROC glTestFenceAPPLE;
typedef void (APIENTRYP PFNGLFINISHFENCEAPPLEPROC) (GLuint fence);
extern PFNGLFINISHFENCEAPPLEPROC glFinishFenceAPPLE;
typedef GLboolean (APIENTRYP PFNGLTESTOBJECTAPPLEPROC) (GLenum object, GLuint name);
extern PFNGLTESTOBJECTAPPLEPROC glTestObjectAPPLE;
typedef void (APIENTRYP PFNGLFINISHOBJECTAPPLEPROC) (GLenum object, GLint name);
extern PFNGLFINISHOBJECTAPPLEPROC glFinishObjectAPPLE;

// GL_APPLE_vertex_array_object
typedef void (APIENTRYP PFNGLBINDVERTEXARRAYAPPLEPROC) (GLuint array);
extern PFNGLBINDVERTEXARRAYAPPLEPROC glBindVertexArrayAPPLE;
typedef void (APIENTRYP PFNGLDELETEVERTEXARRAYSAPPLEPROC) (GLsizei n, const GLuint *arrays);
extern PFNGLDELETEVERTEXARRAYSAPPLEPROC glDeleteVertexArraysAPPLE;
typedef void (APIENTRYP PFNGLGENVERTEXARRAYSAPPLEPROC) (GLsizei n, GLuint *arrays);
extern PFNGLGENVERTEXARRAYSAPPLEPROC glGenVertexArraysAPPLE;
typedef GLboolean (APIENTRYP PFNGLISVERTEXARRAYAPPLEPROC) (GLuint array);
extern PFNGLISVERTEXARRAYAPPLEPROC glIsVertexArrayAPPLE;

// GL_APPLE_vertex_array_range
typedef void (APIENTRYP PFNGLVERTEXARRAYRANGEAPPLEPROC) (GLsizei length, GLvoid *pointer);
extern PFNGLVERTEXARRAYRANGEAPPLEPROC glVertexArrayRangeAPPLE;
typedef void (APIENTRYP PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC) (GLsizei length, GLvoid *pointer);
extern PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC glFlushVertexArrayRangeAPPLE;
typedef void (APIENTRYP PFNGLVERTEXARRAYPARAMETERIAPPLEPROC) (GLenum pname, GLint param);
extern PFNGLVERTEXARRAYPARAMETERIAPPLEPROC glVertexArrayParameteriAPPLE;

// GL_APPLE_ycbcr_422

// GL_S3_s3tc

// GL_ATI_draw_buffers
typedef void (APIENTRYP PFNGLDRAWBUFFERSATIPROC) (GLsizei n, const GLenum *bufs);
extern PFNGLDRAWBUFFERSATIPROC glDrawBuffersATI;

// GL_ATI_pixel_format_float

// GL_ATI_texture_env_combine3

// GL_ATI_texture_float

// GL_NV_float_buffer

// GL_NV_fragment_program
typedef void (APIENTRYP PFNGLPROGRAMNAMEDPARAMETER4FNVPROC) (GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern PFNGLPROGRAMNAMEDPARAMETER4FNVPROC glProgramNamedParameter4fNV;
typedef void (APIENTRYP PFNGLPROGRAMNAMEDPARAMETER4DNVPROC) (GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern PFNGLPROGRAMNAMEDPARAMETER4DNVPROC glProgramNamedParameter4dNV;
typedef void (APIENTRYP PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC) (GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v);
extern PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC glProgramNamedParameter4fvNV;
typedef void (APIENTRYP PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC) (GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v);
extern PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC glProgramNamedParameter4dvNV;
typedef void (APIENTRYP PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC) (GLuint id, GLsizei len, const GLubyte *name, GLfloat *params);
extern PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC glGetProgramNamedParameterfvNV;
typedef void (APIENTRYP PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC) (GLuint id, GLsizei len, const GLubyte *name, GLdouble *params);
extern PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC glGetProgramNamedParameterdvNV;

// GL_NV_half_float
typedef void (APIENTRYP PFNGLVERTEX2HNVPROC) (GLhalfNV x, GLhalfNV y);
extern PFNGLVERTEX2HNVPROC glVertex2hNV;
typedef void (APIENTRYP PFNGLVERTEX2HVNVPROC) (const GLhalfNV *v);
extern PFNGLVERTEX2HVNVPROC glVertex2hvNV;
typedef void (APIENTRYP PFNGLVERTEX3HNVPROC) (GLhalfNV x, GLhalfNV y, GLhalfNV z);
extern PFNGLVERTEX3HNVPROC glVertex3hNV;
typedef void (APIENTRYP PFNGLVERTEX3HVNVPROC) (const GLhalfNV *v);
extern PFNGLVERTEX3HVNVPROC glVertex3hvNV;
typedef void (APIENTRYP PFNGLVERTEX4HNVPROC) (GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w);
extern PFNGLVERTEX4HNVPROC glVertex4hNV;
typedef void (APIENTRYP PFNGLVERTEX4HVNVPROC) (const GLhalfNV *v);
extern PFNGLVERTEX4HVNVPROC glVertex4hvNV;
typedef void (APIENTRYP PFNGLNORMAL3HNVPROC) (GLhalfNV nx, GLhalfNV ny, GLhalfNV nz);
extern PFNGLNORMAL3HNVPROC glNormal3hNV;
typedef void (APIENTRYP PFNGLNORMAL3HVNVPROC) (const GLhalfNV *v);
extern PFNGLNORMAL3HVNVPROC glNormal3hvNV;
typedef void (APIENTRYP PFNGLCOLOR3HNVPROC) (GLhalfNV red, GLhalfNV green, GLhalfNV blue);
extern PFNGLCOLOR3HNVPROC glColor3hNV;
typedef void (APIENTRYP PFNGLCOLOR3HVNVPROC) (const GLhalfNV *v);
extern PFNGLCOLOR3HVNVPROC glColor3hvNV;
typedef void (APIENTRYP PFNGLCOLOR4HNVPROC) (GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha);
extern PFNGLCOLOR4HNVPROC glColor4hNV;
typedef void (APIENTRYP PFNGLCOLOR4HVNVPROC) (const GLhalfNV *v);
extern PFNGLCOLOR4HVNVPROC glColor4hvNV;
typedef void (APIENTRYP PFNGLTEXCOORD1HNVPROC) (GLhalfNV s);
extern PFNGLTEXCOORD1HNVPROC glTexCoord1hNV;
typedef void (APIENTRYP PFNGLTEXCOORD1HVNVPROC) (const GLhalfNV *v);
extern PFNGLTEXCOORD1HVNVPROC glTexCoord1hvNV;
typedef void (APIENTRYP PFNGLTEXCOORD2HNVPROC) (GLhalfNV s, GLhalfNV t);
extern PFNGLTEXCOORD2HNVPROC glTexCoord2hNV;
typedef void (APIENTRYP PFNGLTEXCOORD2HVNVPROC) (const GLhalfNV *v);
extern PFNGLTEXCOORD2HVNVPROC glTexCoord2hvNV;
typedef void (APIENTRYP PFNGLTEXCOORD3HNVPROC) (GLhalfNV s, GLhalfNV t, GLhalfNV r);
extern PFNGLTEXCOORD3HNVPROC glTexCoord3hNV;
typedef void (APIENTRYP PFNGLTEXCOORD3HVNVPROC) (const GLhalfNV *v);
extern PFNGLTEXCOORD3HVNVPROC glTexCoord3hvNV;
typedef void (APIENTRYP PFNGLTEXCOORD4HNVPROC) (GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q);
extern PFNGLTEXCOORD4HNVPROC glTexCoord4hNV;
typedef void (APIENTRYP PFNGLTEXCOORD4HVNVPROC) (const GLhalfNV *v);
extern PFNGLTEXCOORD4HVNVPROC glTexCoord4hvNV;
typedef void (APIENTRYP PFNGLMULTITEXCOORD1HNVPROC) (GLenum target, GLhalfNV s);
extern PFNGLMULTITEXCOORD1HNVPROC glMultiTexCoord1hNV;
typedef void (APIENTRYP PFNGLMULTITEXCOORD1HVNVPROC) (GLenum target, const GLhalfNV *v);
extern PFNGLMULTITEXCOORD1HVNVPROC glMultiTexCoord1hvNV;
typedef void (APIENTRYP PFNGLMULTITEXCOORD2HNVPROC) (GLenum target, GLhalfNV s, GLhalfNV t);
extern PFNGLMULTITEXCOORD2HNVPROC glMultiTexCoord2hNV;
typedef void (APIENTRYP PFNGLMULTITEXCOORD2HVNVPROC) (GLenum target, const GLhalfNV *v);
extern PFNGLMULTITEXCOORD2HVNVPROC glMultiTexCoord2hvNV;
typedef void (APIENTRYP PFNGLMULTITEXCOORD3HNVPROC) (GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r);
extern PFNGLMULTITEXCOORD3HNVPROC glMultiTexCoord3hNV;
typedef void (APIENTRYP PFNGLMULTITEXCOORD3HVNVPROC) (GLenum target, const GLhalfNV *v);
extern PFNGLMULTITEXCOORD3HVNVPROC glMultiTexCoord3hvNV;
typedef void (APIENTRYP PFNGLMULTITEXCOORD4HNVPROC) (GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q);
extern PFNGLMULTITEXCOORD4HNVPROC glMultiTexCoord4hNV;
typedef void (APIENTRYP PFNGLMULTITEXCOORD4HVNVPROC) (GLenum target, const GLhalfNV *v);
extern PFNGLMULTITEXCOORD4HVNVPROC glMultiTexCoord4hvNV;
typedef void (APIENTRYP PFNGLFOGCOORDHNVPROC) (GLhalfNV fog);
extern PFNGLFOGCOORDHNVPROC glFogCoordhNV;
typedef void (APIENTRYP PFNGLFOGCOORDHVNVPROC) (const GLhalfNV *fog);
extern PFNGLFOGCOORDHVNVPROC glFogCoordhvNV;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3HNVPROC) (GLhalfNV red, GLhalfNV green, GLhalfNV blue);
extern PFNGLSECONDARYCOLOR3HNVPROC glSecondaryColor3hNV;
typedef void (APIENTRYP PFNGLSECONDARYCOLOR3HVNVPROC) (const GLhalfNV *v);
extern PFNGLSECONDARYCOLOR3HVNVPROC glSecondaryColor3hvNV;
typedef void (APIENTRYP PFNGLVERTEXWEIGHTHNVPROC) (GLhalfNV weight);
extern PFNGLVERTEXWEIGHTHNVPROC glVertexWeighthNV;
typedef void (APIENTRYP PFNGLVERTEXWEIGHTHVNVPROC) (const GLhalfNV *weight);
extern PFNGLVERTEXWEIGHTHVNVPROC glVertexWeighthvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB1HNVPROC) (GLuint index, GLhalfNV x);
extern PFNGLVERTEXATTRIB1HNVPROC glVertexAttrib1hNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB1HVNVPROC) (GLuint index, const GLhalfNV *v);
extern PFNGLVERTEXATTRIB1HVNVPROC glVertexAttrib1hvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB2HNVPROC) (GLuint index, GLhalfNV x, GLhalfNV y);
extern PFNGLVERTEXATTRIB2HNVPROC glVertexAttrib2hNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB2HVNVPROC) (GLuint index, const GLhalfNV *v);
extern PFNGLVERTEXATTRIB2HVNVPROC glVertexAttrib2hvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB3HNVPROC) (GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z);
extern PFNGLVERTEXATTRIB3HNVPROC glVertexAttrib3hNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB3HVNVPROC) (GLuint index, const GLhalfNV *v);
extern PFNGLVERTEXATTRIB3HVNVPROC glVertexAttrib3hvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4HNVPROC) (GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w);
extern PFNGLVERTEXATTRIB4HNVPROC glVertexAttrib4hNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIB4HVNVPROC) (GLuint index, const GLhalfNV *v);
extern PFNGLVERTEXATTRIB4HVNVPROC glVertexAttrib4hvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS1HVNVPROC) (GLuint index, GLsizei n, const GLhalfNV *v);
extern PFNGLVERTEXATTRIBS1HVNVPROC glVertexAttribs1hvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS2HVNVPROC) (GLuint index, GLsizei n, const GLhalfNV *v);
extern PFNGLVERTEXATTRIBS2HVNVPROC glVertexAttribs2hvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS3HVNVPROC) (GLuint index, GLsizei n, const GLhalfNV *v);
extern PFNGLVERTEXATTRIBS3HVNVPROC glVertexAttribs3hvNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBS4HVNVPROC) (GLuint index, GLsizei n, const GLhalfNV *v);
extern PFNGLVERTEXATTRIBS4HVNVPROC glVertexAttribs4hvNV;

// GL_NV_pixel_data_range
typedef void (APIENTRYP PFNGLPIXELDATARANGENVPROC) (GLenum target, GLsizei length, GLvoid *pointer);
extern PFNGLPIXELDATARANGENVPROC glPixelDataRangeNV;
typedef void (APIENTRYP PFNGLFLUSHPIXELDATARANGENVPROC) (GLenum target);
extern PFNGLFLUSHPIXELDATARANGENVPROC glFlushPixelDataRangeNV;

// GL_NV_primitive_restart
typedef void (APIENTRYP PFNGLPRIMITIVERESTARTNVPROC) (void);
extern PFNGLPRIMITIVERESTARTNVPROC glPrimitiveRestartNV;
typedef void (APIENTRYP PFNGLPRIMITIVERESTARTINDEXNVPROC) (GLuint index);
extern PFNGLPRIMITIVERESTARTINDEXNVPROC glPrimitiveRestartIndexNV;

// GL_NV_texture_expand_normal

// GL_NV_vertex_program2

// GL_ATI_map_object_buffer
typedef GLvoid* (APIENTRYP PFNGLMAPOBJECTBUFFERATIPROC) (GLuint buffer);
extern PFNGLMAPOBJECTBUFFERATIPROC glMapObjectBufferATI;
typedef void (APIENTRYP PFNGLUNMAPOBJECTBUFFERATIPROC) (GLuint buffer);
extern PFNGLUNMAPOBJECTBUFFERATIPROC glUnmapObjectBufferATI;

// GL_ATI_separate_stencil
typedef void (APIENTRYP PFNGLSTENCILOPSEPARATEATIPROC) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
extern PFNGLSTENCILOPSEPARATEATIPROC glStencilOpSeparateATI;
typedef void (APIENTRYP PFNGLSTENCILFUNCSEPARATEATIPROC) (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
extern PFNGLSTENCILFUNCSEPARATEATIPROC glStencilFuncSeparateATI;

// GL_ATI_vertex_attrib_array_object
typedef void (APIENTRYP PFNGLVERTEXATTRIBARRAYOBJECTATIPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset);
extern PFNGLVERTEXATTRIBARRAYOBJECTATIPROC glVertexAttribArrayObjectATI;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC) (GLuint index, GLenum pname, GLfloat *params);
extern PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC glGetVertexAttribArrayObjectfvATI;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC) (GLuint index, GLenum pname, GLint *params);
extern PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC glGetVertexAttribArrayObjectivATI;

// GL_OES_read_format

// GL_EXT_depth_bounds_test
typedef void (APIENTRYP PFNGLDEPTHBOUNDSEXTPROC) (GLclampd zmin, GLclampd zmax);
extern PFNGLDEPTHBOUNDSEXTPROC glDepthBoundsEXT;

// GL_EXT_texture_mirror_clamp

// GL_EXT_blend_equation_separate
typedef void (APIENTRYP PFNGLBLENDEQUATIONSEPARATEEXTPROC) (GLenum modeRGB, GLenum modeAlpha);
extern PFNGLBLENDEQUATIONSEPARATEEXTPROC glBlendEquationSeparateEXT;

// GL_MESA_pack_invert

// GL_MESA_ycbcr_texture

// GL_EXT_pixel_buffer_object

// GL_NV_fragment_program_option

// GL_NV_fragment_program2

// GL_NV_vertex_program2_option

// GL_NV_vertex_program3

// GL_EXT_framebuffer_object
typedef GLboolean (APIENTRYP PFNGLISRENDERBUFFEREXTPROC) (GLuint renderbuffer);
extern PFNGLISRENDERBUFFEREXTPROC glIsRenderbufferEXT;
typedef void (APIENTRYP PFNGLBINDRENDERBUFFEREXTPROC) (GLenum target, GLuint renderbuffer);
extern PFNGLBINDRENDERBUFFEREXTPROC glBindRenderbufferEXT;
typedef void (APIENTRYP PFNGLDELETERENDERBUFFERSEXTPROC) (GLsizei n, const GLuint *renderbuffers);
extern PFNGLDELETERENDERBUFFERSEXTPROC glDeleteRenderbuffersEXT;
typedef void (APIENTRYP PFNGLGENRENDERBUFFERSEXTPROC) (GLsizei n, GLuint *renderbuffers);
extern PFNGLGENRENDERBUFFERSEXTPROC glGenRenderbuffersEXT;
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEEXTPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
extern PFNGLRENDERBUFFERSTORAGEEXTPROC glRenderbufferStorageEXT;
typedef void (APIENTRYP PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
extern PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC glGetRenderbufferParameterivEXT;
typedef GLboolean (APIENTRYP PFNGLISFRAMEBUFFEREXTPROC) (GLuint framebuffer);
extern PFNGLISFRAMEBUFFEREXTPROC glIsFramebufferEXT;
typedef void (APIENTRYP PFNGLBINDFRAMEBUFFEREXTPROC) (GLenum target, GLuint framebuffer);
extern PFNGLBINDFRAMEBUFFEREXTPROC glBindFramebufferEXT;
typedef void (APIENTRYP PFNGLDELETEFRAMEBUFFERSEXTPROC) (GLsizei n, const GLuint *framebuffers);
extern PFNGLDELETEFRAMEBUFFERSEXTPROC glDeleteFramebuffersEXT;
typedef void (APIENTRYP PFNGLGENFRAMEBUFFERSEXTPROC) (GLsizei n, GLuint *framebuffers);
extern PFNGLGENFRAMEBUFFERSEXTPROC glGenFramebuffersEXT;
typedef GLenum (APIENTRYP PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC) (GLenum target);
extern PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC glCheckFramebufferStatusEXT;
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE1DEXTPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern PFNGLFRAMEBUFFERTEXTURE1DEXTPROC glFramebufferTexture1DEXT;
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DEXTPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern PFNGLFRAMEBUFFERTEXTURE2DEXTPROC glFramebufferTexture2DEXT;
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE3DEXTPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
extern PFNGLFRAMEBUFFERTEXTURE3DEXTPROC glFramebufferTexture3DEXT;
typedef void (APIENTRYP PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
extern PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC glFramebufferRenderbufferEXT;
typedef void (APIENTRYP PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) (GLenum target, GLenum attachment, GLenum pname, GLint *params);
extern PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glGetFramebufferAttachmentParameterivEXT;
typedef void (APIENTRYP PFNGLGENERATEMIPMAPEXTPROC) (GLenum target);
extern PFNGLGENERATEMIPMAPEXTPROC glGenerateMipmapEXT;

// GL_GREMEDY_string_marker
typedef void (APIENTRYP PFNGLSTRINGMARKERGREMEDYPROC) (GLsizei len, const GLvoid *string);
extern PFNGLSTRINGMARKERGREMEDYPROC glStringMarkerGREMEDY;

// GL_EXT_packed_depth_stencil

// GL_EXT_stencil_clear_tag
typedef void (APIENTRYP PFNGLSTENCILCLEARTAGEXTPROC) (GLsizei stencilTagBits, GLuint stencilClearTag);
extern PFNGLSTENCILCLEARTAGEXTPROC glStencilClearTagEXT;

// GL_EXT_texture_sRGB

// GL_EXT_framebuffer_blit
typedef void (APIENTRYP PFNGLBLITFRAMEBUFFEREXTPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
extern PFNGLBLITFRAMEBUFFEREXTPROC glBlitFramebufferEXT;

// GL_EXT_framebuffer_multisample
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glRenderbufferStorageMultisampleEXT;

// GL_MESAX_texture_stack

// GL_EXT_timer_query
typedef void (APIENTRYP PFNGLGETQUERYOBJECTI64VEXTPROC) (GLuint id, GLenum pname, GLint64EXT *params);
extern PFNGLGETQUERYOBJECTI64VEXTPROC glGetQueryObjecti64vEXT;
typedef void (APIENTRYP PFNGLGETQUERYOBJECTUI64VEXTPROC) (GLuint id, GLenum pname, GLuint64EXT *params);
extern PFNGLGETQUERYOBJECTUI64VEXTPROC glGetQueryObjectui64vEXT;

// GL_EXT_gpu_program_parameters
typedef void (APIENTRYP PFNGLPROGRAMENVPARAMETERS4FVEXTPROC) (GLenum target, GLuint index, GLsizei count, const GLfloat *params);
extern PFNGLPROGRAMENVPARAMETERS4FVEXTPROC glProgramEnvParameters4fvEXT;
typedef void (APIENTRYP PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC) (GLenum target, GLuint index, GLsizei count, const GLfloat *params);
extern PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC glProgramLocalParameters4fvEXT;

// GL_APPLE_flush_buffer_range
typedef void (APIENTRYP PFNGLBUFFERPARAMETERIAPPLEPROC) (GLenum target, GLenum pname, GLint param);
extern PFNGLBUFFERPARAMETERIAPPLEPROC glBufferParameteriAPPLE;
typedef void (APIENTRYP PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC) (GLenum target, GLintptr offset, GLsizeiptr size);
extern PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC glFlushMappedBufferRangeAPPLE;

// GL_NV_gpu_program4
typedef void (APIENTRYP PFNGLPROGRAMLOCALPARAMETERI4INVPROC) (GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
extern PFNGLPROGRAMLOCALPARAMETERI4INVPROC glProgramLocalParameterI4iNV;
typedef void (APIENTRYP PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC) (GLenum target, GLuint index, const GLint *params);
extern PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC glProgramLocalParameterI4ivNV;
typedef void (APIENTRYP PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC) (GLenum target, GLuint index, GLsizei count, const GLint *params);
extern PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC glProgramLocalParametersI4ivNV;
typedef void (APIENTRYP PFNGLPROGRAMLOCALPARAMETERI4UINVPROC) (GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
extern PFNGLPROGRAMLOCALPARAMETERI4UINVPROC glProgramLocalParameterI4uiNV;
typedef void (APIENTRYP PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC) (GLenum target, GLuint index, const GLuint *params);
extern PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC glProgramLocalParameterI4uivNV;
typedef void (APIENTRYP PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC) (GLenum target, GLuint index, GLsizei count, const GLuint *params);
extern PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC glProgramLocalParametersI4uivNV;
typedef void (APIENTRYP PFNGLPROGRAMENVPARAMETERI4INVPROC) (GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
extern PFNGLPROGRAMENVPARAMETERI4INVPROC glProgramEnvParameterI4iNV;
typedef void (APIENTRYP PFNGLPROGRAMENVPARAMETERI4IVNVPROC) (GLenum target, GLuint index, const GLint *params);
extern PFNGLPROGRAMENVPARAMETERI4IVNVPROC glProgramEnvParameterI4ivNV;
typedef void (APIENTRYP PFNGLPROGRAMENVPARAMETERSI4IVNVPROC) (GLenum target, GLuint index, GLsizei count, const GLint *params);
extern PFNGLPROGRAMENVPARAMETERSI4IVNVPROC glProgramEnvParametersI4ivNV;
typedef void (APIENTRYP PFNGLPROGRAMENVPARAMETERI4UINVPROC) (GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
extern PFNGLPROGRAMENVPARAMETERI4UINVPROC glProgramEnvParameterI4uiNV;
typedef void (APIENTRYP PFNGLPROGRAMENVPARAMETERI4UIVNVPROC) (GLenum target, GLuint index, const GLuint *params);
extern PFNGLPROGRAMENVPARAMETERI4UIVNVPROC glProgramEnvParameterI4uivNV;
typedef void (APIENTRYP PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC) (GLenum target, GLuint index, GLsizei count, const GLuint *params);
extern PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC glProgramEnvParametersI4uivNV;
typedef void (APIENTRYP PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC) (GLenum target, GLuint index, GLint *params);
extern PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC glGetProgramLocalParameterIivNV;
typedef void (APIENTRYP PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC) (GLenum target, GLuint index, GLuint *params);
extern PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC glGetProgramLocalParameterIuivNV;
typedef void (APIENTRYP PFNGLGETPROGRAMENVPARAMETERIIVNVPROC) (GLenum target, GLuint index, GLint *params);
extern PFNGLGETPROGRAMENVPARAMETERIIVNVPROC glGetProgramEnvParameterIivNV;
typedef void (APIENTRYP PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC) (GLenum target, GLuint index, GLuint *params);
extern PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC glGetProgramEnvParameterIuivNV;

// GL_NV_geometry_program4
typedef void (APIENTRYP PFNGLPROGRAMVERTEXLIMITNVPROC) (GLenum target, GLint limit);
extern PFNGLPROGRAMVERTEXLIMITNVPROC glProgramVertexLimitNV;
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTUREEXTPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);
extern PFNGLFRAMEBUFFERTEXTUREEXTPROC glFramebufferTextureEXT;
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
extern PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC glFramebufferTextureLayerEXT;
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
extern PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC glFramebufferTextureFaceEXT;

// GL_EXT_geometry_shader4
typedef void (APIENTRYP PFNGLPROGRAMPARAMETERIEXTPROC) (GLuint program, GLenum pname, GLint value);
extern PFNGLPROGRAMPARAMETERIEXTPROC glProgramParameteriEXT;

// GL_NV_vertex_program4
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1IEXTPROC) (GLuint index, GLint x);
extern PFNGLVERTEXATTRIBI1IEXTPROC glVertexAttribI1iEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2IEXTPROC) (GLuint index, GLint x, GLint y);
extern PFNGLVERTEXATTRIBI2IEXTPROC glVertexAttribI2iEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3IEXTPROC) (GLuint index, GLint x, GLint y, GLint z);
extern PFNGLVERTEXATTRIBI3IEXTPROC glVertexAttribI3iEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4IEXTPROC) (GLuint index, GLint x, GLint y, GLint z, GLint w);
extern PFNGLVERTEXATTRIBI4IEXTPROC glVertexAttribI4iEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1UIEXTPROC) (GLuint index, GLuint x);
extern PFNGLVERTEXATTRIBI1UIEXTPROC glVertexAttribI1uiEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2UIEXTPROC) (GLuint index, GLuint x, GLuint y);
extern PFNGLVERTEXATTRIBI2UIEXTPROC glVertexAttribI2uiEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3UIEXTPROC) (GLuint index, GLuint x, GLuint y, GLuint z);
extern PFNGLVERTEXATTRIBI3UIEXTPROC glVertexAttribI3uiEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UIEXTPROC) (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
extern PFNGLVERTEXATTRIBI4UIEXTPROC glVertexAttribI4uiEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1IVEXTPROC) (GLuint index, const GLint *v);
extern PFNGLVERTEXATTRIBI1IVEXTPROC glVertexAttribI1ivEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2IVEXTPROC) (GLuint index, const GLint *v);
extern PFNGLVERTEXATTRIBI2IVEXTPROC glVertexAttribI2ivEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3IVEXTPROC) (GLuint index, const GLint *v);
extern PFNGLVERTEXATTRIBI3IVEXTPROC glVertexAttribI3ivEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4IVEXTPROC) (GLuint index, const GLint *v);
extern PFNGLVERTEXATTRIBI4IVEXTPROC glVertexAttribI4ivEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1UIVEXTPROC) (GLuint index, const GLuint *v);
extern PFNGLVERTEXATTRIBI1UIVEXTPROC glVertexAttribI1uivEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2UIVEXTPROC) (GLuint index, const GLuint *v);
extern PFNGLVERTEXATTRIBI2UIVEXTPROC glVertexAttribI2uivEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3UIVEXTPROC) (GLuint index, const GLuint *v);
extern PFNGLVERTEXATTRIBI3UIVEXTPROC glVertexAttribI3uivEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UIVEXTPROC) (GLuint index, const GLuint *v);
extern PFNGLVERTEXATTRIBI4UIVEXTPROC glVertexAttribI4uivEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4BVEXTPROC) (GLuint index, const GLbyte *v);
extern PFNGLVERTEXATTRIBI4BVEXTPROC glVertexAttribI4bvEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4SVEXTPROC) (GLuint index, const GLshort *v);
extern PFNGLVERTEXATTRIBI4SVEXTPROC glVertexAttribI4svEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UBVEXTPROC) (GLuint index, const GLubyte *v);
extern PFNGLVERTEXATTRIBI4UBVEXTPROC glVertexAttribI4ubvEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4USVEXTPROC) (GLuint index, const GLushort *v);
extern PFNGLVERTEXATTRIBI4USVEXTPROC glVertexAttribI4usvEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBIPOINTEREXTPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern PFNGLVERTEXATTRIBIPOINTEREXTPROC glVertexAttribIPointerEXT;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIIVEXTPROC) (GLuint index, GLenum pname, GLint *params);
extern PFNGLGETVERTEXATTRIBIIVEXTPROC glGetVertexAttribIivEXT;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIUIVEXTPROC) (GLuint index, GLenum pname, GLuint *params);
extern PFNGLGETVERTEXATTRIBIUIVEXTPROC glGetVertexAttribIuivEXT;

// GL_EXT_gpu_shader4
typedef void (APIENTRYP PFNGLGETUNIFORMUIVEXTPROC) (GLuint program, GLint location, GLuint *params);
extern PFNGLGETUNIFORMUIVEXTPROC glGetUniformuivEXT;
typedef void (APIENTRYP PFNGLBINDFRAGDATALOCATIONEXTPROC) (GLuint program, GLuint color, const GLchar *name);
extern PFNGLBINDFRAGDATALOCATIONEXTPROC glBindFragDataLocationEXT;
typedef GLint (APIENTRYP PFNGLGETFRAGDATALOCATIONEXTPROC) (GLuint program, const GLchar *name);
extern PFNGLGETFRAGDATALOCATIONEXTPROC glGetFragDataLocationEXT;
typedef void (APIENTRYP PFNGLUNIFORM1UIEXTPROC) (GLint location, GLuint v0);
extern PFNGLUNIFORM1UIEXTPROC glUniform1uiEXT;
typedef void (APIENTRYP PFNGLUNIFORM2UIEXTPROC) (GLint location, GLuint v0, GLuint v1);
extern PFNGLUNIFORM2UIEXTPROC glUniform2uiEXT;
typedef void (APIENTRYP PFNGLUNIFORM3UIEXTPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2);
extern PFNGLUNIFORM3UIEXTPROC glUniform3uiEXT;
typedef void (APIENTRYP PFNGLUNIFORM4UIEXTPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
extern PFNGLUNIFORM4UIEXTPROC glUniform4uiEXT;
typedef void (APIENTRYP PFNGLUNIFORM1UIVEXTPROC) (GLint location, GLsizei count, const GLuint *value);
extern PFNGLUNIFORM1UIVEXTPROC glUniform1uivEXT;
typedef void (APIENTRYP PFNGLUNIFORM2UIVEXTPROC) (GLint location, GLsizei count, const GLuint *value);
extern PFNGLUNIFORM2UIVEXTPROC glUniform2uivEXT;
typedef void (APIENTRYP PFNGLUNIFORM3UIVEXTPROC) (GLint location, GLsizei count, const GLuint *value);
extern PFNGLUNIFORM3UIVEXTPROC glUniform3uivEXT;
typedef void (APIENTRYP PFNGLUNIFORM4UIVEXTPROC) (GLint location, GLsizei count, const GLuint *value);
extern PFNGLUNIFORM4UIVEXTPROC glUniform4uivEXT;

// GL_EXT_draw_instanced
typedef void (APIENTRYP PFNGLDRAWARRAYSINSTANCEDEXTPROC) (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
extern PFNGLDRAWARRAYSINSTANCEDEXTPROC glDrawArraysInstancedEXT;
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDEXTPROC) (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount);
extern PFNGLDRAWELEMENTSINSTANCEDEXTPROC glDrawElementsInstancedEXT;

// GL_EXT_packed_float

// GL_EXT_texture_array

// GL_EXT_texture_buffer_object
typedef void (APIENTRYP PFNGLTEXBUFFEREXTPROC) (GLenum target, GLenum internalformat, GLuint buffer);
extern PFNGLTEXBUFFEREXTPROC glTexBufferEXT;

// GL_EXT_texture_compression_latc

// GL_EXT_texture_compression_rgtc

// GL_EXT_texture_shared_exponent

// GL_NV_depth_buffer_float
typedef void (APIENTRYP PFNGLDEPTHRANGEDNVPROC) (GLdouble zNear, GLdouble zFar);
extern PFNGLDEPTHRANGEDNVPROC glDepthRangedNV;
typedef void (APIENTRYP PFNGLCLEARDEPTHDNVPROC) (GLdouble depth);
extern PFNGLCLEARDEPTHDNVPROC glClearDepthdNV;
typedef void (APIENTRYP PFNGLDEPTHBOUNDSDNVPROC) (GLdouble zmin, GLdouble zmax);
extern PFNGLDEPTHBOUNDSDNVPROC glDepthBoundsdNV;

// GL_NV_fragment_program4

// GL_NV_framebuffer_multisample_coverage
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC) (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC glRenderbufferStorageMultisampleCoverageNV;

// GL_EXT_framebuffer_sRGB

// GL_NV_geometry_shader4

// GL_NV_parameter_buffer_object
typedef void (APIENTRYP PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC) (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat *params);
extern PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC glProgramBufferParametersfvNV;
typedef void (APIENTRYP PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC) (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint *params);
extern PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC glProgramBufferParametersIivNV;
typedef void (APIENTRYP PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC) (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint *params);
extern PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC glProgramBufferParametersIuivNV;

// GL_EXT_draw_buffers2
typedef void (APIENTRYP PFNGLCOLORMASKINDEXEDEXTPROC) (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
extern PFNGLCOLORMASKINDEXEDEXTPROC glColorMaskIndexedEXT;
typedef void (APIENTRYP PFNGLGETBOOLEANINDEXEDVEXTPROC) (GLenum target, GLuint index, GLboolean *data);
extern PFNGLGETBOOLEANINDEXEDVEXTPROC glGetBooleanIndexedvEXT;
typedef void (APIENTRYP PFNGLGETINTEGERINDEXEDVEXTPROC) (GLenum target, GLuint index, GLint *data);
extern PFNGLGETINTEGERINDEXEDVEXTPROC glGetIntegerIndexedvEXT;
typedef void (APIENTRYP PFNGLENABLEINDEXEDEXTPROC) (GLenum target, GLuint index);
extern PFNGLENABLEINDEXEDEXTPROC glEnableIndexedEXT;
typedef void (APIENTRYP PFNGLDISABLEINDEXEDEXTPROC) (GLenum target, GLuint index);
extern PFNGLDISABLEINDEXEDEXTPROC glDisableIndexedEXT;
typedef GLboolean (APIENTRYP PFNGLISENABLEDINDEXEDEXTPROC) (GLenum target, GLuint index);
extern PFNGLISENABLEDINDEXEDEXTPROC glIsEnabledIndexedEXT;

// GL_NV_transform_feedback
typedef void (APIENTRYP PFNGLBEGINTRANSFORMFEEDBACKNVPROC) (GLenum primitiveMode);
extern PFNGLBEGINTRANSFORMFEEDBACKNVPROC glBeginTransformFeedbackNV;
typedef void (APIENTRYP PFNGLENDTRANSFORMFEEDBACKNVPROC) (void);
extern PFNGLENDTRANSFORMFEEDBACKNVPROC glEndTransformFeedbackNV;
typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC) (GLuint count, const GLint *attribs, GLenum bufferMode);
extern PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC glTransformFeedbackAttribsNV;
typedef void (APIENTRYP PFNGLBINDBUFFERRANGENVPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
extern PFNGLBINDBUFFERRANGENVPROC glBindBufferRangeNV;
typedef void (APIENTRYP PFNGLBINDBUFFEROFFSETNVPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset);
extern PFNGLBINDBUFFEROFFSETNVPROC glBindBufferOffsetNV;
typedef void (APIENTRYP PFNGLBINDBUFFERBASENVPROC) (GLenum target, GLuint index, GLuint buffer);
extern PFNGLBINDBUFFERBASENVPROC glBindBufferBaseNV;
typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC) (GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode);
extern PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC glTransformFeedbackVaryingsNV;
typedef void (APIENTRYP PFNGLACTIVEVARYINGNVPROC) (GLuint program, const GLchar *name);
extern PFNGLACTIVEVARYINGNVPROC glActiveVaryingNV;
typedef GLint (APIENTRYP PFNGLGETVARYINGLOCATIONNVPROC) (GLuint program, const GLchar *name);
extern PFNGLGETVARYINGLOCATIONNVPROC glGetVaryingLocationNV;
typedef void (APIENTRYP PFNGLGETACTIVEVARYINGNVPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
extern PFNGLGETACTIVEVARYINGNVPROC glGetActiveVaryingNV;
typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC) (GLuint program, GLuint index, GLint *location);
extern PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC glGetTransformFeedbackVaryingNV;
typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC) (GLsizei count, const GLint *attribs, GLsizei nbuffers, const GLint *bufstreams, GLenum bufferMode);
extern PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC glTransformFeedbackStreamAttribsNV;

// GL_EXT_bindable_uniform
typedef void (APIENTRYP PFNGLUNIFORMBUFFEREXTPROC) (GLuint program, GLint location, GLuint buffer);
extern PFNGLUNIFORMBUFFEREXTPROC glUniformBufferEXT;
typedef GLint (APIENTRYP PFNGLGETUNIFORMBUFFERSIZEEXTPROC) (GLuint program, GLint location);
extern PFNGLGETUNIFORMBUFFERSIZEEXTPROC glGetUniformBufferSizeEXT;
typedef GLintptr (APIENTRYP PFNGLGETUNIFORMOFFSETEXTPROC) (GLuint program, GLint location);
extern PFNGLGETUNIFORMOFFSETEXTPROC glGetUniformOffsetEXT;

// GL_EXT_texture_integer
typedef void (APIENTRYP PFNGLTEXPARAMETERIIVEXTPROC) (GLenum target, GLenum pname, const GLint *params);
extern PFNGLTEXPARAMETERIIVEXTPROC glTexParameterIivEXT;
typedef void (APIENTRYP PFNGLTEXPARAMETERIUIVEXTPROC) (GLenum target, GLenum pname, const GLuint *params);
extern PFNGLTEXPARAMETERIUIVEXTPROC glTexParameterIuivEXT;
typedef void (APIENTRYP PFNGLGETTEXPARAMETERIIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
extern PFNGLGETTEXPARAMETERIIVEXTPROC glGetTexParameterIivEXT;
typedef void (APIENTRYP PFNGLGETTEXPARAMETERIUIVEXTPROC) (GLenum target, GLenum pname, GLuint *params);
extern PFNGLGETTEXPARAMETERIUIVEXTPROC glGetTexParameterIuivEXT;
typedef void (APIENTRYP PFNGLCLEARCOLORIIEXTPROC) (GLint red, GLint green, GLint blue, GLint alpha);
extern PFNGLCLEARCOLORIIEXTPROC glClearColorIiEXT;
typedef void (APIENTRYP PFNGLCLEARCOLORIUIEXTPROC) (GLuint red, GLuint green, GLuint blue, GLuint alpha);
extern PFNGLCLEARCOLORIUIEXTPROC glClearColorIuiEXT;

// GL_GREMEDY_frame_terminator
typedef void (APIENTRYP PFNGLFRAMETERMINATORGREMEDYPROC) (void);
extern PFNGLFRAMETERMINATORGREMEDYPROC glFrameTerminatorGREMEDY;

// GL_NV_conditional_render
typedef void (APIENTRYP PFNGLBEGINCONDITIONALRENDERNVPROC) (GLuint id, GLenum mode);
extern PFNGLBEGINCONDITIONALRENDERNVPROC glBeginConditionalRenderNV;
typedef void (APIENTRYP PFNGLENDCONDITIONALRENDERNVPROC) (void);
extern PFNGLENDCONDITIONALRENDERNVPROC glEndConditionalRenderNV;

// GL_NV_present_video
typedef void (APIENTRYP PFNGLPRESENTFRAMEKEYEDNVPROC) (GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1);
extern PFNGLPRESENTFRAMEKEYEDNVPROC glPresentFrameKeyedNV;
typedef void (APIENTRYP PFNGLPRESENTFRAMEDUALFILLNVPROC) (GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3);
extern PFNGLPRESENTFRAMEDUALFILLNVPROC glPresentFrameDualFillNV;
typedef void (APIENTRYP PFNGLGETVIDEOIVNVPROC) (GLuint video_slot, GLenum pname, GLint *params);
extern PFNGLGETVIDEOIVNVPROC glGetVideoivNV;
typedef void (APIENTRYP PFNGLGETVIDEOUIVNVPROC) (GLuint video_slot, GLenum pname, GLuint *params);
extern PFNGLGETVIDEOUIVNVPROC glGetVideouivNV;
typedef void (APIENTRYP PFNGLGETVIDEOI64VNVPROC) (GLuint video_slot, GLenum pname, GLint64EXT *params);
extern PFNGLGETVIDEOI64VNVPROC glGetVideoi64vNV;
typedef void (APIENTRYP PFNGLGETVIDEOUI64VNVPROC) (GLuint video_slot, GLenum pname, GLuint64EXT *params);
extern PFNGLGETVIDEOUI64VNVPROC glGetVideoui64vNV;

// GL_EXT_transform_feedback
typedef void (APIENTRYP PFNGLBEGINTRANSFORMFEEDBACKEXTPROC) (GLenum primitiveMode);
extern PFNGLBEGINTRANSFORMFEEDBACKEXTPROC glBeginTransformFeedbackEXT;
typedef void (APIENTRYP PFNGLENDTRANSFORMFEEDBACKEXTPROC) (void);
extern PFNGLENDTRANSFORMFEEDBACKEXTPROC glEndTransformFeedbackEXT;
typedef void (APIENTRYP PFNGLBINDBUFFERRANGEEXTPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
extern PFNGLBINDBUFFERRANGEEXTPROC glBindBufferRangeEXT;
typedef void (APIENTRYP PFNGLBINDBUFFEROFFSETEXTPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset);
extern PFNGLBINDBUFFEROFFSETEXTPROC glBindBufferOffsetEXT;
typedef void (APIENTRYP PFNGLBINDBUFFERBASEEXTPROC) (GLenum target, GLuint index, GLuint buffer);
extern PFNGLBINDBUFFERBASEEXTPROC glBindBufferBaseEXT;
typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC) (GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode);
extern PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC glTransformFeedbackVaryingsEXT;
typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
extern PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC glGetTransformFeedbackVaryingEXT;

// GL_EXT_direct_state_access
typedef void (APIENTRYP PFNGLCLIENTATTRIBDEFAULTEXTPROC) (GLbitfield mask);
extern PFNGLCLIENTATTRIBDEFAULTEXTPROC glClientAttribDefaultEXT;
typedef void (APIENTRYP PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC) (GLbitfield mask);
extern PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC glPushClientAttribDefaultEXT;
typedef void (APIENTRYP PFNGLMATRIXLOADFEXTPROC) (GLenum mode, const GLfloat *m);
extern PFNGLMATRIXLOADFEXTPROC glMatrixLoadfEXT;
typedef void (APIENTRYP PFNGLMATRIXLOADDEXTPROC) (GLenum mode, const GLdouble *m);
extern PFNGLMATRIXLOADDEXTPROC glMatrixLoaddEXT;
typedef void (APIENTRYP PFNGLMATRIXMULTFEXTPROC) (GLenum mode, const GLfloat *m);
extern PFNGLMATRIXMULTFEXTPROC glMatrixMultfEXT;
typedef void (APIENTRYP PFNGLMATRIXMULTDEXTPROC) (GLenum mode, const GLdouble *m);
extern PFNGLMATRIXMULTDEXTPROC glMatrixMultdEXT;
typedef void (APIENTRYP PFNGLMATRIXLOADIDENTITYEXTPROC) (GLenum mode);
extern PFNGLMATRIXLOADIDENTITYEXTPROC glMatrixLoadIdentityEXT;
typedef void (APIENTRYP PFNGLMATRIXROTATEFEXTPROC) (GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLMATRIXROTATEFEXTPROC glMatrixRotatefEXT;
typedef void (APIENTRYP PFNGLMATRIXROTATEDEXTPROC) (GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
extern PFNGLMATRIXROTATEDEXTPROC glMatrixRotatedEXT;
typedef void (APIENTRYP PFNGLMATRIXSCALEFEXTPROC) (GLenum mode, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLMATRIXSCALEFEXTPROC glMatrixScalefEXT;
typedef void (APIENTRYP PFNGLMATRIXSCALEDEXTPROC) (GLenum mode, GLdouble x, GLdouble y, GLdouble z);
extern PFNGLMATRIXSCALEDEXTPROC glMatrixScaledEXT;
typedef void (APIENTRYP PFNGLMATRIXTRANSLATEFEXTPROC) (GLenum mode, GLfloat x, GLfloat y, GLfloat z);
extern PFNGLMATRIXTRANSLATEFEXTPROC glMatrixTranslatefEXT;
typedef void (APIENTRYP PFNGLMATRIXTRANSLATEDEXTPROC) (GLenum mode, GLdouble x, GLdouble y, GLdouble z);
extern PFNGLMATRIXTRANSLATEDEXTPROC glMatrixTranslatedEXT;
typedef void (APIENTRYP PFNGLMATRIXFRUSTUMEXTPROC) (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
extern PFNGLMATRIXFRUSTUMEXTPROC glMatrixFrustumEXT;
typedef void (APIENTRYP PFNGLMATRIXORTHOEXTPROC) (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
extern PFNGLMATRIXORTHOEXTPROC glMatrixOrthoEXT;
typedef void (APIENTRYP PFNGLMATRIXPOPEXTPROC) (GLenum mode);
extern PFNGLMATRIXPOPEXTPROC glMatrixPopEXT;
typedef void (APIENTRYP PFNGLMATRIXPUSHEXTPROC) (GLenum mode);
extern PFNGLMATRIXPUSHEXTPROC glMatrixPushEXT;
typedef void (APIENTRYP PFNGLMATRIXLOADTRANSPOSEFEXTPROC) (GLenum mode, const GLfloat *m);
extern PFNGLMATRIXLOADTRANSPOSEFEXTPROC glMatrixLoadTransposefEXT;
typedef void (APIENTRYP PFNGLMATRIXLOADTRANSPOSEDEXTPROC) (GLenum mode, const GLdouble *m);
extern PFNGLMATRIXLOADTRANSPOSEDEXTPROC glMatrixLoadTransposedEXT;
typedef void (APIENTRYP PFNGLMATRIXMULTTRANSPOSEFEXTPROC) (GLenum mode, const GLfloat *m);
extern PFNGLMATRIXMULTTRANSPOSEFEXTPROC glMatrixMultTransposefEXT;
typedef void (APIENTRYP PFNGLMATRIXMULTTRANSPOSEDEXTPROC) (GLenum mode, const GLdouble *m);
extern PFNGLMATRIXMULTTRANSPOSEDEXTPROC glMatrixMultTransposedEXT;
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERFEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLfloat param);
extern PFNGLTEXTUREPARAMETERFEXTPROC glTextureParameterfEXT;
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERFVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLfloat *params);
extern PFNGLTEXTUREPARAMETERFVEXTPROC glTextureParameterfvEXT;
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLint param);
extern PFNGLTEXTUREPARAMETERIEXTPROC glTextureParameteriEXT;
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLint *params);
extern PFNGLTEXTUREPARAMETERIVEXTPROC glTextureParameterivEXT;
typedef void (APIENTRYP PFNGLTEXTUREIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLTEXTUREIMAGE1DEXTPROC glTextureImage1DEXT;
typedef void (APIENTRYP PFNGLTEXTUREIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLTEXTUREIMAGE2DEXTPROC glTextureImage2DEXT;
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLTEXTURESUBIMAGE1DEXTPROC glTextureSubImage1DEXT;
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLTEXTURESUBIMAGE2DEXTPROC glTextureSubImage2DEXT;
typedef void (APIENTRYP PFNGLCOPYTEXTUREIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
extern PFNGLCOPYTEXTUREIMAGE1DEXTPROC glCopyTextureImage1DEXT;
typedef void (APIENTRYP PFNGLCOPYTEXTUREIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
extern PFNGLCOPYTEXTUREIMAGE2DEXTPROC glCopyTextureImage2DEXT;
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
extern PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC glCopyTextureSubImage1DEXT;
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC glCopyTextureSubImage2DEXT;
typedef void (APIENTRYP PFNGLGETTEXTUREIMAGEEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
extern PFNGLGETTEXTUREIMAGEEXTPROC glGetTextureImageEXT;
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERFVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLfloat *params);
extern PFNGLGETTEXTUREPARAMETERFVEXTPROC glGetTextureParameterfvEXT;
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLint *params);
extern PFNGLGETTEXTUREPARAMETERIVEXTPROC glGetTextureParameterivEXT;
typedef void (APIENTRYP PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params);
extern PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC glGetTextureLevelParameterfvEXT;
typedef void (APIENTRYP PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params);
extern PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC glGetTextureLevelParameterivEXT;
typedef void (APIENTRYP PFNGLTEXTUREIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLTEXTUREIMAGE3DEXTPROC glTextureImage3DEXT;
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLTEXTURESUBIMAGE3DEXTPROC glTextureSubImage3DEXT;
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC glCopyTextureSubImage3DEXT;
typedef void (APIENTRYP PFNGLMULTITEXPARAMETERFEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat param);
extern PFNGLMULTITEXPARAMETERFEXTPROC glMultiTexParameterfEXT;
typedef void (APIENTRYP PFNGLMULTITEXPARAMETERFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
extern PFNGLMULTITEXPARAMETERFVEXTPROC glMultiTexParameterfvEXT;
typedef void (APIENTRYP PFNGLMULTITEXPARAMETERIEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint param);
extern PFNGLMULTITEXPARAMETERIEXTPROC glMultiTexParameteriEXT;
typedef void (APIENTRYP PFNGLMULTITEXPARAMETERIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
extern PFNGLMULTITEXPARAMETERIVEXTPROC glMultiTexParameterivEXT;
typedef void (APIENTRYP PFNGLMULTITEXIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLMULTITEXIMAGE1DEXTPROC glMultiTexImage1DEXT;
typedef void (APIENTRYP PFNGLMULTITEXIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLMULTITEXIMAGE2DEXTPROC glMultiTexImage2DEXT;
typedef void (APIENTRYP PFNGLMULTITEXSUBIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLMULTITEXSUBIMAGE1DEXTPROC glMultiTexSubImage1DEXT;
typedef void (APIENTRYP PFNGLMULTITEXSUBIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLMULTITEXSUBIMAGE2DEXTPROC glMultiTexSubImage2DEXT;
typedef void (APIENTRYP PFNGLCOPYMULTITEXIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
extern PFNGLCOPYMULTITEXIMAGE1DEXTPROC glCopyMultiTexImage1DEXT;
typedef void (APIENTRYP PFNGLCOPYMULTITEXIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
extern PFNGLCOPYMULTITEXIMAGE2DEXTPROC glCopyMultiTexImage2DEXT;
typedef void (APIENTRYP PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
extern PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC glCopyMultiTexSubImage1DEXT;
typedef void (APIENTRYP PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC glCopyMultiTexSubImage2DEXT;
typedef void (APIENTRYP PFNGLGETMULTITEXIMAGEEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
extern PFNGLGETMULTITEXIMAGEEXTPROC glGetMultiTexImageEXT;
typedef void (APIENTRYP PFNGLGETMULTITEXPARAMETERFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
extern PFNGLGETMULTITEXPARAMETERFVEXTPROC glGetMultiTexParameterfvEXT;
typedef void (APIENTRYP PFNGLGETMULTITEXPARAMETERIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint *params);
extern PFNGLGETMULTITEXPARAMETERIVEXTPROC glGetMultiTexParameterivEXT;
typedef void (APIENTRYP PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params);
extern PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC glGetMultiTexLevelParameterfvEXT;
typedef void (APIENTRYP PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params);
extern PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC glGetMultiTexLevelParameterivEXT;
typedef void (APIENTRYP PFNGLMULTITEXIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLMULTITEXIMAGE3DEXTPROC glMultiTexImage3DEXT;
typedef void (APIENTRYP PFNGLMULTITEXSUBIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
extern PFNGLMULTITEXSUBIMAGE3DEXTPROC glMultiTexSubImage3DEXT;
typedef void (APIENTRYP PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC glCopyMultiTexSubImage3DEXT;
typedef void (APIENTRYP PFNGLBINDMULTITEXTUREEXTPROC) (GLenum texunit, GLenum target, GLuint texture);
extern PFNGLBINDMULTITEXTUREEXTPROC glBindMultiTextureEXT;
typedef void (APIENTRYP PFNGLENABLECLIENTSTATEINDEXEDEXTPROC) (GLenum array, GLuint index);
extern PFNGLENABLECLIENTSTATEINDEXEDEXTPROC glEnableClientStateIndexedEXT;
typedef void (APIENTRYP PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC) (GLenum array, GLuint index);
extern PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC glDisableClientStateIndexedEXT;
typedef void (APIENTRYP PFNGLMULTITEXCOORDPOINTEREXTPROC) (GLenum texunit, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern PFNGLMULTITEXCOORDPOINTEREXTPROC glMultiTexCoordPointerEXT;
typedef void (APIENTRYP PFNGLMULTITEXENVFEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat param);
extern PFNGLMULTITEXENVFEXTPROC glMultiTexEnvfEXT;
typedef void (APIENTRYP PFNGLMULTITEXENVFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
extern PFNGLMULTITEXENVFVEXTPROC glMultiTexEnvfvEXT;
typedef void (APIENTRYP PFNGLMULTITEXENVIEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint param);
extern PFNGLMULTITEXENVIEXTPROC glMultiTexEnviEXT;
typedef void (APIENTRYP PFNGLMULTITEXENVIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
extern PFNGLMULTITEXENVIVEXTPROC glMultiTexEnvivEXT;
typedef void (APIENTRYP PFNGLMULTITEXGENDEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLdouble param);
extern PFNGLMULTITEXGENDEXTPROC glMultiTexGendEXT;
typedef void (APIENTRYP PFNGLMULTITEXGENDVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params);
extern PFNGLMULTITEXGENDVEXTPROC glMultiTexGendvEXT;
typedef void (APIENTRYP PFNGLMULTITEXGENFEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLfloat param);
extern PFNGLMULTITEXGENFEXTPROC glMultiTexGenfEXT;
typedef void (APIENTRYP PFNGLMULTITEXGENFVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params);
extern PFNGLMULTITEXGENFVEXTPROC glMultiTexGenfvEXT;
typedef void (APIENTRYP PFNGLMULTITEXGENIEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLint param);
extern PFNGLMULTITEXGENIEXTPROC glMultiTexGeniEXT;
typedef void (APIENTRYP PFNGLMULTITEXGENIVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, const GLint *params);
extern PFNGLMULTITEXGENIVEXTPROC glMultiTexGenivEXT;
typedef void (APIENTRYP PFNGLGETMULTITEXENVFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
extern PFNGLGETMULTITEXENVFVEXTPROC glGetMultiTexEnvfvEXT;
typedef void (APIENTRYP PFNGLGETMULTITEXENVIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint *params);
extern PFNGLGETMULTITEXENVIVEXTPROC glGetMultiTexEnvivEXT;
typedef void (APIENTRYP PFNGLGETMULTITEXGENDVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLdouble *params);
extern PFNGLGETMULTITEXGENDVEXTPROC glGetMultiTexGendvEXT;
typedef void (APIENTRYP PFNGLGETMULTITEXGENFVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLfloat *params);
extern PFNGLGETMULTITEXGENFVEXTPROC glGetMultiTexGenfvEXT;
typedef void (APIENTRYP PFNGLGETMULTITEXGENIVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLint *params);
extern PFNGLGETMULTITEXGENIVEXTPROC glGetMultiTexGenivEXT;
typedef void (APIENTRYP PFNGLGETFLOATINDEXEDVEXTPROC) (GLenum target, GLuint index, GLfloat *data);
extern PFNGLGETFLOATINDEXEDVEXTPROC glGetFloatIndexedvEXT;
typedef void (APIENTRYP PFNGLGETDOUBLEINDEXEDVEXTPROC) (GLenum target, GLuint index, GLdouble *data);
extern PFNGLGETDOUBLEINDEXEDVEXTPROC glGetDoubleIndexedvEXT;
typedef void (APIENTRYP PFNGLGETPOINTERINDEXEDVEXTPROC) (GLenum target, GLuint index, GLvoid* *data);
extern PFNGLGETPOINTERINDEXEDVEXTPROC glGetPointerIndexedvEXT;
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *bits);
extern PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC glCompressedTextureImage3DEXT;
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *bits);
extern PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC glCompressedTextureImage2DEXT;
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *bits);
extern PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC glCompressedTextureImage1DEXT;
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *bits);
extern PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC glCompressedTextureSubImage3DEXT;
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *bits);
extern PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC glCompressedTextureSubImage2DEXT;
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *bits);
extern PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC glCompressedTextureSubImage1DEXT;
typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC) (GLuint texture, GLenum target, GLint lod, GLvoid *img);
extern PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC glGetCompressedTextureImageEXT;
typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *bits);
extern PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC glCompressedMultiTexImage3DEXT;
typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *bits);
extern PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC glCompressedMultiTexImage2DEXT;
typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *bits);
extern PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC glCompressedMultiTexImage1DEXT;
typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *bits);
extern PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC glCompressedMultiTexSubImage3DEXT;
typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *bits);
extern PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC glCompressedMultiTexSubImage2DEXT;
typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *bits);
extern PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC glCompressedMultiTexSubImage1DEXT;
typedef void (APIENTRYP PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC) (GLenum texunit, GLenum target, GLint lod, GLvoid *img);
extern PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC glGetCompressedMultiTexImageEXT;
typedef void (APIENTRYP PFNGLNAMEDPROGRAMSTRINGEXTPROC) (GLuint program, GLenum target, GLenum format, GLsizei len, const GLvoid *string);
extern PFNGLNAMEDPROGRAMSTRINGEXTPROC glNamedProgramStringEXT;
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC) (GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC glNamedProgramLocalParameter4dEXT;
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLdouble *params);
extern PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC glNamedProgramLocalParameter4dvEXT;
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC) (GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC glNamedProgramLocalParameter4fEXT;
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLfloat *params);
extern PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC glNamedProgramLocalParameter4fvEXT;
typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC) (GLuint program, GLenum target, GLuint index, GLdouble *params);
extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC glGetNamedProgramLocalParameterdvEXT;
typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC) (GLuint program, GLenum target, GLuint index, GLfloat *params);
extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC glGetNamedProgramLocalParameterfvEXT;
typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMIVEXTPROC) (GLuint program, GLenum target, GLenum pname, GLint *params);
extern PFNGLGETNAMEDPROGRAMIVEXTPROC glGetNamedProgramivEXT;
typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMSTRINGEXTPROC) (GLuint program, GLenum target, GLenum pname, GLvoid *string);
extern PFNGLGETNAMEDPROGRAMSTRINGEXTPROC glGetNamedProgramStringEXT;
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params);
extern PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC glNamedProgramLocalParameters4fvEXT;
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC) (GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC glNamedProgramLocalParameterI4iEXT;
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLint *params);
extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC glNamedProgramLocalParameterI4ivEXT;
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params);
extern PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC glNamedProgramLocalParametersI4ivEXT;
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC) (GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC glNamedProgramLocalParameterI4uiEXT;
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLuint *params);
extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC glNamedProgramLocalParameterI4uivEXT;
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params);
extern PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC glNamedProgramLocalParametersI4uivEXT;
typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC) (GLuint program, GLenum target, GLuint index, GLint *params);
extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC glGetNamedProgramLocalParameterIivEXT;
typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC) (GLuint program, GLenum target, GLuint index, GLuint *params);
extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC glGetNamedProgramLocalParameterIuivEXT;
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLint *params);
extern PFNGLTEXTUREPARAMETERIIVEXTPROC glTextureParameterIivEXT;
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIUIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLuint *params);
extern PFNGLTEXTUREPARAMETERIUIVEXTPROC glTextureParameterIuivEXT;
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLint *params);
extern PFNGLGETTEXTUREPARAMETERIIVEXTPROC glGetTextureParameterIivEXT;
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIUIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLuint *params);
extern PFNGLGETTEXTUREPARAMETERIUIVEXTPROC glGetTextureParameterIuivEXT;
typedef void (APIENTRYP PFNGLMULTITEXPARAMETERIIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
extern PFNGLMULTITEXPARAMETERIIVEXTPROC glMultiTexParameterIivEXT;
typedef void (APIENTRYP PFNGLMULTITEXPARAMETERIUIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLuint *params);
extern PFNGLMULTITEXPARAMETERIUIVEXTPROC glMultiTexParameterIuivEXT;
typedef void (APIENTRYP PFNGLGETMULTITEXPARAMETERIIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint *params);
extern PFNGLGETMULTITEXPARAMETERIIVEXTPROC glGetMultiTexParameterIivEXT;
typedef void (APIENTRYP PFNGLGETMULTITEXPARAMETERIUIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLuint *params);
extern PFNGLGETMULTITEXPARAMETERIUIVEXTPROC glGetMultiTexParameterIuivEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FEXTPROC) (GLuint program, GLint location, GLfloat v0);
extern PFNGLPROGRAMUNIFORM1FEXTPROC glProgramUniform1fEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1);
extern PFNGLPROGRAMUNIFORM2FEXTPROC glProgramUniform2fEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
extern PFNGLPROGRAMUNIFORM3FEXTPROC glProgramUniform3fEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
extern PFNGLPROGRAMUNIFORM4FEXTPROC glProgramUniform4fEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IEXTPROC) (GLuint program, GLint location, GLint v0);
extern PFNGLPROGRAMUNIFORM1IEXTPROC glProgramUniform1iEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1);
extern PFNGLPROGRAMUNIFORM2IEXTPROC glProgramUniform2iEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
extern PFNGLPROGRAMUNIFORM3IEXTPROC glProgramUniform3iEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
extern PFNGLPROGRAMUNIFORM4IEXTPROC glProgramUniform4iEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern PFNGLPROGRAMUNIFORM1FVEXTPROC glProgramUniform1fvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern PFNGLPROGRAMUNIFORM2FVEXTPROC glProgramUniform2fvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern PFNGLPROGRAMUNIFORM3FVEXTPROC glProgramUniform3fvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern PFNGLPROGRAMUNIFORM4FVEXTPROC glProgramUniform4fvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
extern PFNGLPROGRAMUNIFORM1IVEXTPROC glProgramUniform1ivEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
extern PFNGLPROGRAMUNIFORM2IVEXTPROC glProgramUniform2ivEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
extern PFNGLPROGRAMUNIFORM3IVEXTPROC glProgramUniform3ivEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
extern PFNGLPROGRAMUNIFORM4IVEXTPROC glProgramUniform4ivEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC glProgramUniformMatrix2fvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC glProgramUniformMatrix3fvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC glProgramUniformMatrix4fvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC glProgramUniformMatrix2x3fvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC glProgramUniformMatrix3x2fvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC glProgramUniformMatrix2x4fvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC glProgramUniformMatrix4x2fvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC glProgramUniformMatrix3x4fvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC glProgramUniformMatrix4x3fvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIEXTPROC) (GLuint program, GLint location, GLuint v0);
extern PFNGLPROGRAMUNIFORM1UIEXTPROC glProgramUniform1uiEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1);
extern PFNGLPROGRAMUNIFORM2UIEXTPROC glProgramUniform2uiEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
extern PFNGLPROGRAMUNIFORM3UIEXTPROC glProgramUniform3uiEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
extern PFNGLPROGRAMUNIFORM4UIEXTPROC glProgramUniform4uiEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern PFNGLPROGRAMUNIFORM1UIVEXTPROC glProgramUniform1uivEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern PFNGLPROGRAMUNIFORM2UIVEXTPROC glProgramUniform2uivEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern PFNGLPROGRAMUNIFORM3UIVEXTPROC glProgramUniform3uivEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern PFNGLPROGRAMUNIFORM4UIVEXTPROC glProgramUniform4uivEXT;
typedef void (APIENTRYP PFNGLNAMEDBUFFERDATAEXTPROC) (GLuint buffer, GLsizeiptr size, const GLvoid *data, GLenum usage);
extern PFNGLNAMEDBUFFERDATAEXTPROC glNamedBufferDataEXT;
typedef void (APIENTRYP PFNGLNAMEDBUFFERSUBDATAEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, const GLvoid *data);
extern PFNGLNAMEDBUFFERSUBDATAEXTPROC glNamedBufferSubDataEXT;
typedef GLvoid* (APIENTRYP PFNGLMAPNAMEDBUFFEREXTPROC) (GLuint buffer, GLenum access);
extern PFNGLMAPNAMEDBUFFEREXTPROC glMapNamedBufferEXT;
typedef GLboolean (APIENTRYP PFNGLUNMAPNAMEDBUFFEREXTPROC) (GLuint buffer);
extern PFNGLUNMAPNAMEDBUFFEREXTPROC glUnmapNamedBufferEXT;
typedef GLvoid* (APIENTRYP PFNGLMAPNAMEDBUFFERRANGEEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
extern PFNGLMAPNAMEDBUFFERRANGEEXTPROC glMapNamedBufferRangeEXT;
typedef void (APIENTRYP PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length);
extern PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC glFlushMappedNamedBufferRangeEXT;
typedef void (APIENTRYP PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC) (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
extern PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC glNamedCopyBufferSubDataEXT;
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC) (GLuint buffer, GLenum pname, GLint *params);
extern PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC glGetNamedBufferParameterivEXT;
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPOINTERVEXTPROC) (GLuint buffer, GLenum pname, GLvoid* *params);
extern PFNGLGETNAMEDBUFFERPOINTERVEXTPROC glGetNamedBufferPointervEXT;
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERSUBDATAEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, GLvoid *data);
extern PFNGLGETNAMEDBUFFERSUBDATAEXTPROC glGetNamedBufferSubDataEXT;
typedef void (APIENTRYP PFNGLTEXTUREBUFFEREXTPROC) (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer);
extern PFNGLTEXTUREBUFFEREXTPROC glTextureBufferEXT;
typedef void (APIENTRYP PFNGLMULTITEXBUFFEREXTPROC) (GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer);
extern PFNGLMULTITEXBUFFEREXTPROC glMultiTexBufferEXT;
typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC) (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
extern PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC glNamedRenderbufferStorageEXT;
typedef void (APIENTRYP PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC) (GLuint renderbuffer, GLenum pname, GLint *params);
extern PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC glGetNamedRenderbufferParameterivEXT;
typedef GLenum (APIENTRYP PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC) (GLuint framebuffer, GLenum target);
extern PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC glCheckNamedFramebufferStatusEXT;
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC glNamedFramebufferTexture1DEXT;
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC glNamedFramebufferTexture2DEXT;
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
extern PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC glNamedFramebufferTexture3DEXT;
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC) (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
extern PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC glNamedFramebufferRenderbufferEXT;
typedef void (APIENTRYP PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
extern PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glGetNamedFramebufferAttachmentParameterivEXT;
typedef void (APIENTRYP PFNGLGENERATETEXTUREMIPMAPEXTPROC) (GLuint texture, GLenum target);
extern PFNGLGENERATETEXTUREMIPMAPEXTPROC glGenerateTextureMipmapEXT;
typedef void (APIENTRYP PFNGLGENERATEMULTITEXMIPMAPEXTPROC) (GLenum texunit, GLenum target);
extern PFNGLGENERATEMULTITEXMIPMAPEXTPROC glGenerateMultiTexMipmapEXT;
typedef void (APIENTRYP PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC) (GLuint framebuffer, GLenum mode);
extern PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC glFramebufferDrawBufferEXT;
typedef void (APIENTRYP PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC) (GLuint framebuffer, GLsizei n, const GLenum *bufs);
extern PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC glFramebufferDrawBuffersEXT;
typedef void (APIENTRYP PFNGLFRAMEBUFFERREADBUFFEREXTPROC) (GLuint framebuffer, GLenum mode);
extern PFNGLFRAMEBUFFERREADBUFFEREXTPROC glFramebufferReadBufferEXT;
typedef void (APIENTRYP PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC) (GLuint framebuffer, GLenum pname, GLint *params);
extern PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC glGetFramebufferParameterivEXT;
typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
extern PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glNamedRenderbufferStorageMultisampleEXT;
typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC) (GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
extern PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC glNamedRenderbufferStorageMultisampleCoverageEXT;
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
extern PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC glNamedFramebufferTextureEXT;
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
extern PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC glNamedFramebufferTextureLayerEXT;
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face);
extern PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC glNamedFramebufferTextureFaceEXT;
typedef void (APIENTRYP PFNGLTEXTURERENDERBUFFEREXTPROC) (GLuint texture, GLenum target, GLuint renderbuffer);
extern PFNGLTEXTURERENDERBUFFEREXTPROC glTextureRenderbufferEXT;
typedef void (APIENTRYP PFNGLMULTITEXRENDERBUFFEREXTPROC) (GLenum texunit, GLenum target, GLuint renderbuffer);
extern PFNGLMULTITEXRENDERBUFFEREXTPROC glMultiTexRenderbufferEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DEXTPROC) (GLuint program, GLint location, GLdouble x);
extern PFNGLPROGRAMUNIFORM1DEXTPROC glProgramUniform1dEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DEXTPROC) (GLuint program, GLint location, GLdouble x, GLdouble y);
extern PFNGLPROGRAMUNIFORM2DEXTPROC glProgramUniform2dEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DEXTPROC) (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z);
extern PFNGLPROGRAMUNIFORM3DEXTPROC glProgramUniform3dEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DEXTPROC) (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern PFNGLPROGRAMUNIFORM4DEXTPROC glProgramUniform4dEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern PFNGLPROGRAMUNIFORM1DVEXTPROC glProgramUniform1dvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern PFNGLPROGRAMUNIFORM2DVEXTPROC glProgramUniform2dvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern PFNGLPROGRAMUNIFORM3DVEXTPROC glProgramUniform3dvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern PFNGLPROGRAMUNIFORM4DVEXTPROC glProgramUniform4dvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC glProgramUniformMatrix2dvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC glProgramUniformMatrix3dvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC glProgramUniformMatrix4dvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC glProgramUniformMatrix2x3dvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC glProgramUniformMatrix2x4dvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC glProgramUniformMatrix3x2dvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC glProgramUniformMatrix3x4dvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC glProgramUniformMatrix4x2dvEXT;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC glProgramUniformMatrix4x3dvEXT;

// GL_EXT_vertex_array_bgra

// GL_EXT_texture_swizzle

// GL_NV_explicit_multisample
typedef void (APIENTRYP PFNGLGETMULTISAMPLEFVNVPROC) (GLenum pname, GLuint index, GLfloat *val);
extern PFNGLGETMULTISAMPLEFVNVPROC glGetMultisamplefvNV;
typedef void (APIENTRYP PFNGLSAMPLEMASKINDEXEDNVPROC) (GLuint index, GLbitfield mask);
extern PFNGLSAMPLEMASKINDEXEDNVPROC glSampleMaskIndexedNV;
typedef void (APIENTRYP PFNGLTEXRENDERBUFFERNVPROC) (GLenum target, GLuint renderbuffer);
extern PFNGLTEXRENDERBUFFERNVPROC glTexRenderbufferNV;

// GL_NV_transform_feedback2
typedef void (APIENTRYP PFNGLBINDTRANSFORMFEEDBACKNVPROC) (GLenum target, GLuint id);
extern PFNGLBINDTRANSFORMFEEDBACKNVPROC glBindTransformFeedbackNV;
typedef void (APIENTRYP PFNGLDELETETRANSFORMFEEDBACKSNVPROC) (GLsizei n, const GLuint *ids);
extern PFNGLDELETETRANSFORMFEEDBACKSNVPROC glDeleteTransformFeedbacksNV;
typedef void (APIENTRYP PFNGLGENTRANSFORMFEEDBACKSNVPROC) (GLsizei n, GLuint *ids);
extern PFNGLGENTRANSFORMFEEDBACKSNVPROC glGenTransformFeedbacksNV;
typedef GLboolean (APIENTRYP PFNGLISTRANSFORMFEEDBACKNVPROC) (GLuint id);
extern PFNGLISTRANSFORMFEEDBACKNVPROC glIsTransformFeedbackNV;
typedef void (APIENTRYP PFNGLPAUSETRANSFORMFEEDBACKNVPROC) (void);
extern PFNGLPAUSETRANSFORMFEEDBACKNVPROC glPauseTransformFeedbackNV;
typedef void (APIENTRYP PFNGLRESUMETRANSFORMFEEDBACKNVPROC) (void);
extern PFNGLRESUMETRANSFORMFEEDBACKNVPROC glResumeTransformFeedbackNV;
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKNVPROC) (GLenum mode, GLuint id);
extern PFNGLDRAWTRANSFORMFEEDBACKNVPROC glDrawTransformFeedbackNV;

// GL_ATI_meminfo

// GL_AMD_performance_monitor
typedef void (APIENTRYP PFNGLGETPERFMONITORGROUPSAMDPROC) (GLint *numGroups, GLsizei groupsSize, GLuint *groups);
extern PFNGLGETPERFMONITORGROUPSAMDPROC glGetPerfMonitorGroupsAMD;
typedef void (APIENTRYP PFNGLGETPERFMONITORCOUNTERSAMDPROC) (GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters);
extern PFNGLGETPERFMONITORCOUNTERSAMDPROC glGetPerfMonitorCountersAMD;
typedef void (APIENTRYP PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) (GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString);
extern PFNGLGETPERFMONITORGROUPSTRINGAMDPROC glGetPerfMonitorGroupStringAMD;
typedef void (APIENTRYP PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) (GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
extern PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC glGetPerfMonitorCounterStringAMD;
typedef void (APIENTRYP PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) (GLuint group, GLuint counter, GLenum pname, GLvoid *data);
extern PFNGLGETPERFMONITORCOUNTERINFOAMDPROC glGetPerfMonitorCounterInfoAMD;
typedef void (APIENTRYP PFNGLGENPERFMONITORSAMDPROC) (GLsizei n, GLuint *monitors);
extern PFNGLGENPERFMONITORSAMDPROC glGenPerfMonitorsAMD;
typedef void (APIENTRYP PFNGLDELETEPERFMONITORSAMDPROC) (GLsizei n, GLuint *monitors);
extern PFNGLDELETEPERFMONITORSAMDPROC glDeletePerfMonitorsAMD;
typedef void (APIENTRYP PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList);
extern PFNGLSELECTPERFMONITORCOUNTERSAMDPROC glSelectPerfMonitorCountersAMD;
typedef void (APIENTRYP PFNGLBEGINPERFMONITORAMDPROC) (GLuint monitor);
extern PFNGLBEGINPERFMONITORAMDPROC glBeginPerfMonitorAMD;
typedef void (APIENTRYP PFNGLENDPERFMONITORAMDPROC) (GLuint monitor);
extern PFNGLENDPERFMONITORAMDPROC glEndPerfMonitorAMD;
typedef void (APIENTRYP PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
extern PFNGLGETPERFMONITORCOUNTERDATAAMDPROC glGetPerfMonitorCounterDataAMD;

// GL_AMD_texture_texture4

// GL_AMD_vertex_shader_tesselator
typedef void (APIENTRYP PFNGLTESSELLATIONFACTORAMDPROC) (GLfloat factor);
extern PFNGLTESSELLATIONFACTORAMDPROC glTessellationFactorAMD;
typedef void (APIENTRYP PFNGLTESSELLATIONMODEAMDPROC) (GLenum mode);
extern PFNGLTESSELLATIONMODEAMDPROC glTessellationModeAMD;

// GL_EXT_provoking_vertex
typedef void (APIENTRYP PFNGLPROVOKINGVERTEXEXTPROC) (GLenum mode);
extern PFNGLPROVOKINGVERTEXEXTPROC glProvokingVertexEXT;

// GL_EXT_texture_snorm

// GL_AMD_draw_buffers_blend
typedef void (APIENTRYP PFNGLBLENDFUNCINDEXEDAMDPROC) (GLuint buf, GLenum src, GLenum dst);
extern PFNGLBLENDFUNCINDEXEDAMDPROC glBlendFuncIndexedAMD;
typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
extern PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC glBlendFuncSeparateIndexedAMD;
typedef void (APIENTRYP PFNGLBLENDEQUATIONINDEXEDAMDPROC) (GLuint buf, GLenum mode);
extern PFNGLBLENDEQUATIONINDEXEDAMDPROC glBlendEquationIndexedAMD;
typedef void (APIENTRYP PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
extern PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC glBlendEquationSeparateIndexedAMD;

// GL_APPLE_texture_range
typedef void (APIENTRYP PFNGLTEXTURERANGEAPPLEPROC) (GLenum target, GLsizei length, const GLvoid *pointer);
extern PFNGLTEXTURERANGEAPPLEPROC glTextureRangeAPPLE;
typedef void (APIENTRYP PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC) (GLenum target, GLenum pname, GLvoid* *params);
extern PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC glGetTexParameterPointervAPPLE;

// GL_APPLE_float_pixels

// GL_APPLE_vertex_program_evaluators
typedef void (APIENTRYP PFNGLENABLEVERTEXATTRIBAPPLEPROC) (GLuint index, GLenum pname);
extern PFNGLENABLEVERTEXATTRIBAPPLEPROC glEnableVertexAttribAPPLE;
typedef void (APIENTRYP PFNGLDISABLEVERTEXATTRIBAPPLEPROC) (GLuint index, GLenum pname);
extern PFNGLDISABLEVERTEXATTRIBAPPLEPROC glDisableVertexAttribAPPLE;
typedef GLboolean (APIENTRYP PFNGLISVERTEXATTRIBENABLEDAPPLEPROC) (GLuint index, GLenum pname);
extern PFNGLISVERTEXATTRIBENABLEDAPPLEPROC glIsVertexAttribEnabledAPPLE;
typedef void (APIENTRYP PFNGLMAPVERTEXATTRIB1DAPPLEPROC) (GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
extern PFNGLMAPVERTEXATTRIB1DAPPLEPROC glMapVertexAttrib1dAPPLE;
typedef void (APIENTRYP PFNGLMAPVERTEXATTRIB1FAPPLEPROC) (GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
extern PFNGLMAPVERTEXATTRIB1FAPPLEPROC glMapVertexAttrib1fAPPLE;
typedef void (APIENTRYP PFNGLMAPVERTEXATTRIB2DAPPLEPROC) (GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
extern PFNGLMAPVERTEXATTRIB2DAPPLEPROC glMapVertexAttrib2dAPPLE;
typedef void (APIENTRYP PFNGLMAPVERTEXATTRIB2FAPPLEPROC) (GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);
extern PFNGLMAPVERTEXATTRIB2FAPPLEPROC glMapVertexAttrib2fAPPLE;

// GL_APPLE_aux_depth_stencil

// GL_APPLE_object_purgeable
typedef GLenum (APIENTRYP PFNGLOBJECTPURGEABLEAPPLEPROC) (GLenum objectType, GLuint name, GLenum option);
extern PFNGLOBJECTPURGEABLEAPPLEPROC glObjectPurgeableAPPLE;
typedef GLenum (APIENTRYP PFNGLOBJECTUNPURGEABLEAPPLEPROC) (GLenum objectType, GLuint name, GLenum option);
extern PFNGLOBJECTUNPURGEABLEAPPLEPROC glObjectUnpurgeableAPPLE;
typedef void (APIENTRYP PFNGLGETOBJECTPARAMETERIVAPPLEPROC) (GLenum objectType, GLuint name, GLenum pname, GLint *params);
extern PFNGLGETOBJECTPARAMETERIVAPPLEPROC glGetObjectParameterivAPPLE;

// GL_APPLE_row_bytes

// GL_APPLE_rgb_422

// GL_NV_video_capture
typedef void (APIENTRYP PFNGLBEGINVIDEOCAPTURENVPROC) (GLuint video_capture_slot);
extern PFNGLBEGINVIDEOCAPTURENVPROC glBeginVideoCaptureNV;
typedef void (APIENTRYP PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC) (GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset);
extern PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC glBindVideoCaptureStreamBufferNV;
typedef void (APIENTRYP PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC) (GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture);
extern PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC glBindVideoCaptureStreamTextureNV;
typedef void (APIENTRYP PFNGLENDVIDEOCAPTURENVPROC) (GLuint video_capture_slot);
extern PFNGLENDVIDEOCAPTURENVPROC glEndVideoCaptureNV;
typedef void (APIENTRYP PFNGLGETVIDEOCAPTUREIVNVPROC) (GLuint video_capture_slot, GLenum pname, GLint *params);
extern PFNGLGETVIDEOCAPTUREIVNVPROC glGetVideoCaptureivNV;
typedef void (APIENTRYP PFNGLGETVIDEOCAPTURESTREAMIVNVPROC) (GLuint video_capture_slot, GLuint stream, GLenum pname, GLint *params);
extern PFNGLGETVIDEOCAPTURESTREAMIVNVPROC glGetVideoCaptureStreamivNV;
typedef void (APIENTRYP PFNGLGETVIDEOCAPTURESTREAMFVNVPROC) (GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat *params);
extern PFNGLGETVIDEOCAPTURESTREAMFVNVPROC glGetVideoCaptureStreamfvNV;
typedef void (APIENTRYP PFNGLGETVIDEOCAPTURESTREAMDVNVPROC) (GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble *params);
extern PFNGLGETVIDEOCAPTURESTREAMDVNVPROC glGetVideoCaptureStreamdvNV;
typedef GLenum (APIENTRYP PFNGLVIDEOCAPTURENVPROC) (GLuint video_capture_slot, GLuint *sequence_num, GLuint64EXT *capture_time);
extern PFNGLVIDEOCAPTURENVPROC glVideoCaptureNV;
typedef void (APIENTRYP PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC) (GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint *params);
extern PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC glVideoCaptureStreamParameterivNV;
typedef void (APIENTRYP PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC) (GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat *params);
extern PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC glVideoCaptureStreamParameterfvNV;
typedef void (APIENTRYP PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC) (GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble *params);
extern PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC glVideoCaptureStreamParameterdvNV;

// GL_NV_copy_image
typedef void (APIENTRYP PFNGLCOPYIMAGESUBDATANVPROC) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
extern PFNGLCOPYIMAGESUBDATANVPROC glCopyImageSubDataNV;

// GL_EXT_separate_shader_objects
typedef void (APIENTRYP PFNGLUSESHADERPROGRAMEXTPROC) (GLenum type, GLuint program);
extern PFNGLUSESHADERPROGRAMEXTPROC glUseShaderProgramEXT;
typedef void (APIENTRYP PFNGLACTIVEPROGRAMEXTPROC) (GLuint program);
extern PFNGLACTIVEPROGRAMEXTPROC glActiveProgramEXT;
typedef GLuint (APIENTRYP PFNGLCREATESHADERPROGRAMEXTPROC) (GLenum type, const GLchar *string);
extern PFNGLCREATESHADERPROGRAMEXTPROC glCreateShaderProgramEXT;

// GL_NV_parameter_buffer_object2

// GL_NV_shader_buffer_load
typedef void (APIENTRYP PFNGLMAKEBUFFERRESIDENTNVPROC) (GLenum target, GLenum access);
extern PFNGLMAKEBUFFERRESIDENTNVPROC glMakeBufferResidentNV;
typedef void (APIENTRYP PFNGLMAKEBUFFERNONRESIDENTNVPROC) (GLenum target);
extern PFNGLMAKEBUFFERNONRESIDENTNVPROC glMakeBufferNonResidentNV;
typedef GLboolean (APIENTRYP PFNGLISBUFFERRESIDENTNVPROC) (GLenum target);
extern PFNGLISBUFFERRESIDENTNVPROC glIsBufferResidentNV;
typedef void (APIENTRYP PFNGLMAKENAMEDBUFFERRESIDENTNVPROC) (GLuint buffer, GLenum access);
extern PFNGLMAKENAMEDBUFFERRESIDENTNVPROC glMakeNamedBufferResidentNV;
typedef void (APIENTRYP PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC) (GLuint buffer);
extern PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC glMakeNamedBufferNonResidentNV;
typedef GLboolean (APIENTRYP PFNGLISNAMEDBUFFERRESIDENTNVPROC) (GLuint buffer);
extern PFNGLISNAMEDBUFFERRESIDENTNVPROC glIsNamedBufferResidentNV;
typedef void (APIENTRYP PFNGLGETBUFFERPARAMETERUI64VNVPROC) (GLenum target, GLenum pname, GLuint64EXT *params);
extern PFNGLGETBUFFERPARAMETERUI64VNVPROC glGetBufferParameterui64vNV;
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC) (GLuint buffer, GLenum pname, GLuint64EXT *params);
extern PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC glGetNamedBufferParameterui64vNV;
typedef void (APIENTRYP PFNGLGETINTEGERUI64VNVPROC) (GLenum value, GLuint64EXT *result);
extern PFNGLGETINTEGERUI64VNVPROC glGetIntegerui64vNV;
typedef void (APIENTRYP PFNGLUNIFORMUI64NVPROC) (GLint location, GLuint64EXT value);
extern PFNGLUNIFORMUI64NVPROC glUniformui64NV;
typedef void (APIENTRYP PFNGLUNIFORMUI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
extern PFNGLUNIFORMUI64VNVPROC glUniformui64vNV;
typedef void (APIENTRYP PFNGLGETUNIFORMUI64VNVPROC) (GLuint program, GLint location, GLuint64EXT *params);
extern PFNGLGETUNIFORMUI64VNVPROC glGetUniformui64vNV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMUI64NVPROC) (GLuint program, GLint location, GLuint64EXT value);
extern PFNGLPROGRAMUNIFORMUI64NVPROC glProgramUniformui64NV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMUI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
extern PFNGLPROGRAMUNIFORMUI64VNVPROC glProgramUniformui64vNV;

// GL_NV_vertex_buffer_unified_memory
typedef void (APIENTRYP PFNGLBUFFERADDRESSRANGENVPROC) (GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length);
extern PFNGLBUFFERADDRESSRANGENVPROC glBufferAddressRangeNV;
typedef void (APIENTRYP PFNGLVERTEXFORMATNVPROC) (GLint size, GLenum type, GLsizei stride);
extern PFNGLVERTEXFORMATNVPROC glVertexFormatNV;
typedef void (APIENTRYP PFNGLNORMALFORMATNVPROC) (GLenum type, GLsizei stride);
extern PFNGLNORMALFORMATNVPROC glNormalFormatNV;
typedef void (APIENTRYP PFNGLCOLORFORMATNVPROC) (GLint size, GLenum type, GLsizei stride);
extern PFNGLCOLORFORMATNVPROC glColorFormatNV;
typedef void (APIENTRYP PFNGLINDEXFORMATNVPROC) (GLenum type, GLsizei stride);
extern PFNGLINDEXFORMATNVPROC glIndexFormatNV;
typedef void (APIENTRYP PFNGLTEXCOORDFORMATNVPROC) (GLint size, GLenum type, GLsizei stride);
extern PFNGLTEXCOORDFORMATNVPROC glTexCoordFormatNV;
typedef void (APIENTRYP PFNGLEDGEFLAGFORMATNVPROC) (GLsizei stride);
extern PFNGLEDGEFLAGFORMATNVPROC glEdgeFlagFormatNV;
typedef void (APIENTRYP PFNGLSECONDARYCOLORFORMATNVPROC) (GLint size, GLenum type, GLsizei stride);
extern PFNGLSECONDARYCOLORFORMATNVPROC glSecondaryColorFormatNV;
typedef void (APIENTRYP PFNGLFOGCOORDFORMATNVPROC) (GLenum type, GLsizei stride);
extern PFNGLFOGCOORDFORMATNVPROC glFogCoordFormatNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBFORMATNVPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride);
extern PFNGLVERTEXATTRIBFORMATNVPROC glVertexAttribFormatNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBIFORMATNVPROC) (GLuint index, GLint size, GLenum type, GLsizei stride);
extern PFNGLVERTEXATTRIBIFORMATNVPROC glVertexAttribIFormatNV;
typedef void (APIENTRYP PFNGLGETINTEGERUI64I_VNVPROC) (GLenum value, GLuint index, GLuint64EXT *result);
extern PFNGLGETINTEGERUI64I_VNVPROC glGetIntegerui64i_vNV;

// GL_NV_texture_barrier
typedef void (APIENTRYP PFNGLTEXTUREBARRIERNVPROC) (void);
extern PFNGLTEXTUREBARRIERNVPROC glTextureBarrierNV;

// GL_AMD_shader_stencil_export

// GL_AMD_seamless_cubemap_per_texture

// GL_AMD_conservative_depth

// GL_EXT_shader_image_load_store
typedef void (APIENTRYP PFNGLBINDIMAGETEXTUREEXTPROC) (GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format);
extern PFNGLBINDIMAGETEXTUREEXTPROC glBindImageTextureEXT;
typedef void (APIENTRYP PFNGLMEMORYBARRIEREXTPROC) (GLbitfield barriers);
extern PFNGLMEMORYBARRIEREXTPROC glMemoryBarrierEXT;

// GL_EXT_vertex_attrib_64bit
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1DEXTPROC) (GLuint index, GLdouble x);
extern PFNGLVERTEXATTRIBL1DEXTPROC glVertexAttribL1dEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2DEXTPROC) (GLuint index, GLdouble x, GLdouble y);
extern PFNGLVERTEXATTRIBL2DEXTPROC glVertexAttribL2dEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3DEXTPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
extern PFNGLVERTEXATTRIBL3DEXTPROC glVertexAttribL3dEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4DEXTPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern PFNGLVERTEXATTRIBL4DEXTPROC glVertexAttribL4dEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1DVEXTPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIBL1DVEXTPROC glVertexAttribL1dvEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2DVEXTPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIBL2DVEXTPROC glVertexAttribL2dvEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3DVEXTPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIBL3DVEXTPROC glVertexAttribL3dvEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4DVEXTPROC) (GLuint index, const GLdouble *v);
extern PFNGLVERTEXATTRIBL4DVEXTPROC glVertexAttribL4dvEXT;
typedef void (APIENTRYP PFNGLVERTEXATTRIBLPOINTEREXTPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern PFNGLVERTEXATTRIBLPOINTEREXTPROC glVertexAttribLPointerEXT;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLDVEXTPROC) (GLuint index, GLenum pname, GLdouble *params);
extern PFNGLGETVERTEXATTRIBLDVEXTPROC glGetVertexAttribLdvEXT;
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
extern PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC glVertexArrayVertexAttribLOffsetEXT;

// GL_NV_gpu_program5
typedef void (APIENTRYP PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC) (GLenum target, GLsizei count, const GLuint *params);
extern PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC glProgramSubroutineParametersuivNV;
typedef void (APIENTRYP PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC) (GLenum target, GLuint index, GLuint *param);
extern PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC glGetProgramSubroutineParameteruivNV;

// GL_NV_gpu_shader5
typedef void (APIENTRYP PFNGLUNIFORM1I64NVPROC) (GLint location, GLint64EXT x);
extern PFNGLUNIFORM1I64NVPROC glUniform1i64NV;
typedef void (APIENTRYP PFNGLUNIFORM2I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y);
extern PFNGLUNIFORM2I64NVPROC glUniform2i64NV;
typedef void (APIENTRYP PFNGLUNIFORM3I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
extern PFNGLUNIFORM3I64NVPROC glUniform3i64NV;
typedef void (APIENTRYP PFNGLUNIFORM4I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
extern PFNGLUNIFORM4I64NVPROC glUniform4i64NV;
typedef void (APIENTRYP PFNGLUNIFORM1I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
extern PFNGLUNIFORM1I64VNVPROC glUniform1i64vNV;
typedef void (APIENTRYP PFNGLUNIFORM2I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
extern PFNGLUNIFORM2I64VNVPROC glUniform2i64vNV;
typedef void (APIENTRYP PFNGLUNIFORM3I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
extern PFNGLUNIFORM3I64VNVPROC glUniform3i64vNV;
typedef void (APIENTRYP PFNGLUNIFORM4I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
extern PFNGLUNIFORM4I64VNVPROC glUniform4i64vNV;
typedef void (APIENTRYP PFNGLUNIFORM1UI64NVPROC) (GLint location, GLuint64EXT x);
extern PFNGLUNIFORM1UI64NVPROC glUniform1ui64NV;
typedef void (APIENTRYP PFNGLUNIFORM2UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y);
extern PFNGLUNIFORM2UI64NVPROC glUniform2ui64NV;
typedef void (APIENTRYP PFNGLUNIFORM3UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
extern PFNGLUNIFORM3UI64NVPROC glUniform3ui64NV;
typedef void (APIENTRYP PFNGLUNIFORM4UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
extern PFNGLUNIFORM4UI64NVPROC glUniform4ui64NV;
typedef void (APIENTRYP PFNGLUNIFORM1UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
extern PFNGLUNIFORM1UI64VNVPROC glUniform1ui64vNV;
typedef void (APIENTRYP PFNGLUNIFORM2UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
extern PFNGLUNIFORM2UI64VNVPROC glUniform2ui64vNV;
typedef void (APIENTRYP PFNGLUNIFORM3UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
extern PFNGLUNIFORM3UI64VNVPROC glUniform3ui64vNV;
typedef void (APIENTRYP PFNGLUNIFORM4UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
extern PFNGLUNIFORM4UI64VNVPROC glUniform4ui64vNV;
typedef void (APIENTRYP PFNGLGETUNIFORMI64VNVPROC) (GLuint program, GLint location, GLint64EXT *params);
extern PFNGLGETUNIFORMI64VNVPROC glGetUniformi64vNV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1I64NVPROC) (GLuint program, GLint location, GLint64EXT x);
extern PFNGLPROGRAMUNIFORM1I64NVPROC glProgramUniform1i64NV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
extern PFNGLPROGRAMUNIFORM2I64NVPROC glProgramUniform2i64NV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
extern PFNGLPROGRAMUNIFORM3I64NVPROC glProgramUniform3i64NV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
extern PFNGLPROGRAMUNIFORM4I64NVPROC glProgramUniform4i64NV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
extern PFNGLPROGRAMUNIFORM1I64VNVPROC glProgramUniform1i64vNV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
extern PFNGLPROGRAMUNIFORM2I64VNVPROC glProgramUniform2i64vNV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
extern PFNGLPROGRAMUNIFORM3I64VNVPROC glProgramUniform3i64vNV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
extern PFNGLPROGRAMUNIFORM4I64VNVPROC glProgramUniform4i64vNV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x);
extern PFNGLPROGRAMUNIFORM1UI64NVPROC glProgramUniform1ui64NV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
extern PFNGLPROGRAMUNIFORM2UI64NVPROC glProgramUniform2ui64NV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
extern PFNGLPROGRAMUNIFORM3UI64NVPROC glProgramUniform3ui64NV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
extern PFNGLPROGRAMUNIFORM4UI64NVPROC glProgramUniform4ui64NV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
extern PFNGLPROGRAMUNIFORM1UI64VNVPROC glProgramUniform1ui64vNV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
extern PFNGLPROGRAMUNIFORM2UI64VNVPROC glProgramUniform2ui64vNV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
extern PFNGLPROGRAMUNIFORM3UI64VNVPROC glProgramUniform3ui64vNV;
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
extern PFNGLPROGRAMUNIFORM4UI64VNVPROC glProgramUniform4ui64vNV;

// GL_NV_shader_buffer_store

// GL_NV_tessellation_program5

// GL_NV_vertex_attrib_integer_64bit
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1I64NVPROC) (GLuint index, GLint64EXT x);
extern PFNGLVERTEXATTRIBL1I64NVPROC glVertexAttribL1i64NV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2I64NVPROC) (GLuint index, GLint64EXT x, GLint64EXT y);
extern PFNGLVERTEXATTRIBL2I64NVPROC glVertexAttribL2i64NV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3I64NVPROC) (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z);
extern PFNGLVERTEXATTRIBL3I64NVPROC glVertexAttribL3i64NV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4I64NVPROC) (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
extern PFNGLVERTEXATTRIBL4I64NVPROC glVertexAttribL4i64NV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1I64VNVPROC) (GLuint index, const GLint64EXT *v);
extern PFNGLVERTEXATTRIBL1I64VNVPROC glVertexAttribL1i64vNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2I64VNVPROC) (GLuint index, const GLint64EXT *v);
extern PFNGLVERTEXATTRIBL2I64VNVPROC glVertexAttribL2i64vNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3I64VNVPROC) (GLuint index, const GLint64EXT *v);
extern PFNGLVERTEXATTRIBL3I64VNVPROC glVertexAttribL3i64vNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4I64VNVPROC) (GLuint index, const GLint64EXT *v);
extern PFNGLVERTEXATTRIBL4I64VNVPROC glVertexAttribL4i64vNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1UI64NVPROC) (GLuint index, GLuint64EXT x);
extern PFNGLVERTEXATTRIBL1UI64NVPROC glVertexAttribL1ui64NV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2UI64NVPROC) (GLuint index, GLuint64EXT x, GLuint64EXT y);
extern PFNGLVERTEXATTRIBL2UI64NVPROC glVertexAttribL2ui64NV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3UI64NVPROC) (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
extern PFNGLVERTEXATTRIBL3UI64NVPROC glVertexAttribL3ui64NV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4UI64NVPROC) (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
extern PFNGLVERTEXATTRIBL4UI64NVPROC glVertexAttribL4ui64NV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
extern PFNGLVERTEXATTRIBL1UI64VNVPROC glVertexAttribL1ui64vNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
extern PFNGLVERTEXATTRIBL2UI64VNVPROC glVertexAttribL2ui64vNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
extern PFNGLVERTEXATTRIBL3UI64VNVPROC glVertexAttribL3ui64vNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
extern PFNGLVERTEXATTRIBL4UI64VNVPROC glVertexAttribL4ui64vNV;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLI64VNVPROC) (GLuint index, GLenum pname, GLint64EXT *params);
extern PFNGLGETVERTEXATTRIBLI64VNVPROC glGetVertexAttribLi64vNV;
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLUI64VNVPROC) (GLuint index, GLenum pname, GLuint64EXT *params);
extern PFNGLGETVERTEXATTRIBLUI64VNVPROC glGetVertexAttribLui64vNV;
typedef void (APIENTRYP PFNGLVERTEXATTRIBLFORMATNVPROC) (GLuint index, GLint size, GLenum type, GLsizei stride);
extern PFNGLVERTEXATTRIBLFORMATNVPROC glVertexAttribLFormatNV;

// GL_NV_multisample_coverage

// GL_AMD_name_gen_delete
typedef void (APIENTRYP PFNGLGENNAMESAMDPROC) (GLenum identifier, GLuint num, GLuint *names);
extern PFNGLGENNAMESAMDPROC glGenNamesAMD;
typedef void (APIENTRYP PFNGLDELETENAMESAMDPROC) (GLenum identifier, GLuint num, const GLuint *names);
extern PFNGLDELETENAMESAMDPROC glDeleteNamesAMD;
typedef GLboolean (APIENTRYP PFNGLISNAMEAMDPROC) (GLenum identifier, GLuint name);
extern PFNGLISNAMEAMDPROC glIsNameAMD;

// GL_AMD_debug_output
typedef void (APIENTRYP PFNGLDEBUGMESSAGEENABLEAMDPROC) (GLenum category, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
extern PFNGLDEBUGMESSAGEENABLEAMDPROC glDebugMessageEnableAMD;
typedef void (APIENTRYP PFNGLDEBUGMESSAGEINSERTAMDPROC) (GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar *buf);
extern PFNGLDEBUGMESSAGEINSERTAMDPROC glDebugMessageInsertAMD;
typedef void (APIENTRYP PFNGLDEBUGMESSAGECALLBACKAMDPROC) (GLDEBUGPROCAMD callback, GLvoid *userParam);
extern PFNGLDEBUGMESSAGECALLBACKAMDPROC glDebugMessageCallbackAMD;
typedef GLuint (APIENTRYP PFNGLGETDEBUGMESSAGELOGAMDPROC) (GLuint count, GLsizei bufsize, GLenum *categories, GLuint *severities, GLuint *ids, GLsizei *lengths, GLchar *message);
extern PFNGLGETDEBUGMESSAGELOGAMDPROC glGetDebugMessageLogAMD;

// GL_NV_vdpau_interop
typedef void (APIENTRYP PFNGLVDPAUINITNVPROC) (const GLvoid *vdpDevice, const GLvoid *getProcAddress);
extern PFNGLVDPAUINITNVPROC glVDPAUInitNV;
typedef void (APIENTRYP PFNGLVDPAUFININVPROC) (void);
extern PFNGLVDPAUFININVPROC glVDPAUFiniNV;
typedef GLvdpauSurfaceNV (APIENTRYP PFNGLVDPAUREGISTERVIDEOSURFACENVPROC) (GLvoid *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames);
extern PFNGLVDPAUREGISTERVIDEOSURFACENVPROC glVDPAURegisterVideoSurfaceNV;
typedef GLvdpauSurfaceNV (APIENTRYP PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC) (GLvoid *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames);
extern PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC glVDPAURegisterOutputSurfaceNV;
typedef void (APIENTRYP PFNGLVDPAUISSURFACENVPROC) (GLvdpauSurfaceNV surface);
extern PFNGLVDPAUISSURFACENVPROC glVDPAUIsSurfaceNV;
typedef void (APIENTRYP PFNGLVDPAUUNREGISTERSURFACENVPROC) (GLvdpauSurfaceNV surface);
extern PFNGLVDPAUUNREGISTERSURFACENVPROC glVDPAUUnregisterSurfaceNV;
typedef void (APIENTRYP PFNGLVDPAUGETSURFACEIVNVPROC) (GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
extern PFNGLVDPAUGETSURFACEIVNVPROC glVDPAUGetSurfaceivNV;
typedef void (APIENTRYP PFNGLVDPAUSURFACEACCESSNVPROC) (GLvdpauSurfaceNV surface, GLenum access);
extern PFNGLVDPAUSURFACEACCESSNVPROC glVDPAUSurfaceAccessNV;
typedef void (APIENTRYP PFNGLVDPAUMAPSURFACESNVPROC) (GLsizei numSurfaces, const GLvdpauSurfaceNV *surfaces);
extern PFNGLVDPAUMAPSURFACESNVPROC glVDPAUMapSurfacesNV;
typedef void (APIENTRYP PFNGLVDPAUUNMAPSURFACESNVPROC) (GLsizei numSurface, const GLvdpauSurfaceNV *surfaces);
extern PFNGLVDPAUUNMAPSURFACESNVPROC glVDPAUUnmapSurfacesNV;

// GL_AMD_transform_feedback3_lines_triangles

// GL_AMD_depth_clamp_separate

// GL_EXT_texture_sRGB_decode

// GL_NV_texture_multisample
typedef void (APIENTRYP PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC) (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
extern PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC glTexImage2DMultisampleCoverageNV;
typedef void (APIENTRYP PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC) (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
extern PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC glTexImage3DMultisampleCoverageNV;
typedef void (APIENTRYP PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC) (GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
extern PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC glTextureImage2DMultisampleNV;
typedef void (APIENTRYP PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC) (GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
extern PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC glTextureImage3DMultisampleNV;
typedef void (APIENTRYP PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC) (GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
extern PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC glTextureImage2DMultisampleCoverageNV;
typedef void (APIENTRYP PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC) (GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
extern PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC glTextureImage3DMultisampleCoverageNV;

// GL_AMD_blend_minmax_factor

// GL_AMD_sample_positions
typedef void (APIENTRYP PFNGLSETMULTISAMPLEFVAMDPROC) (GLenum pname, GLuint index, const GLfloat *val);
extern PFNGLSETMULTISAMPLEFVAMDPROC glSetMultisamplefvAMD;

// GL_EXT_x11_sync_object
typedef GLsync (APIENTRYP PFNGLIMPORTSYNCEXTPROC) (GLenum external_sync_type, GLintptr external_sync, GLbitfield flags);
extern PFNGLIMPORTSYNCEXTPROC glImportSyncEXT;

// GL_AMD_multi_draw_indirect
typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC) (GLenum mode, const GLvoid *indirect, GLsizei primcount, GLsizei stride);
extern PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC glMultiDrawArraysIndirectAMD;
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC) (GLenum mode, GLenum type, const GLvoid *indirect, GLsizei primcount, GLsizei stride);
extern PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC glMultiDrawElementsIndirectAMD;

// GL_EXT_framebuffer_multisample_blit_scaled

// GL_SGIX_texture_select

// GL_INGR_blend_func_separate
typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEINGRPROC) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
extern PFNGLBLENDFUNCSEPARATEINGRPROC glBlendFuncSeparateINGR;

// GL_SGIX_subsample

// GL_SGIX_depth_pass_instrument

// GL_SGIX_igloo_interface
typedef void (APIENTRYP PFNGLIGLOOINTERFACESGIXPROC) (GLenum pname, const GLvoid *params);
extern PFNGLIGLOOINTERFACESGIXPROC glIglooInterfaceSGIX;

// WGL_ARB_buffer_region
typedef HANDLE (WINAPI * PFNWGLCREATEBUFFERREGIONARBPROC) (HDC hDC, int iLayerPlane, UINT uType);
extern PFNWGLCREATEBUFFERREGIONARBPROC wglCreateBufferRegionARB;
typedef VOID (WINAPI * PFNWGLDELETEBUFFERREGIONARBPROC) (HANDLE hRegion);
extern PFNWGLDELETEBUFFERREGIONARBPROC wglDeleteBufferRegionARB;
typedef BOOL (WINAPI * PFNWGLSAVEBUFFERREGIONARBPROC) (HANDLE hRegion, int x, int y, int width, int height);
extern PFNWGLSAVEBUFFERREGIONARBPROC wglSaveBufferRegionARB;
typedef BOOL (WINAPI * PFNWGLRESTOREBUFFERREGIONARBPROC) (HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc);
extern PFNWGLRESTOREBUFFERREGIONARBPROC wglRestoreBufferRegionARB;

// WGL_ARB_multisample

// WGL_ARB_extensions_string
typedef const char * (WINAPI * PFNWGLGETEXTENSIONSSTRINGARBPROC) (HDC hdc);
extern PFNWGLGETEXTENSIONSSTRINGARBPROC wglGetExtensionsStringARB;

// WGL_ARB_pixel_format
typedef BOOL (WINAPI * PFNWGLGETPIXELFORMATATTRIBIVARBPROC) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int *piAttributes, int *piValues);
extern PFNWGLGETPIXELFORMATATTRIBIVARBPROC wglGetPixelFormatAttribivARB;
typedef BOOL (WINAPI * PFNWGLGETPIXELFORMATATTRIBFVARBPROC) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int *piAttributes, FLOAT *pfValues);
extern PFNWGLGETPIXELFORMATATTRIBFVARBPROC wglGetPixelFormatAttribfvARB;
typedef BOOL (WINAPI * PFNWGLCHOOSEPIXELFORMATARBPROC) (HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats);
extern PFNWGLCHOOSEPIXELFORMATARBPROC wglChoosePixelFormatARB;

// WGL_ARB_make_current_read
typedef BOOL (WINAPI * PFNWGLMAKECONTEXTCURRENTARBPROC) (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
extern PFNWGLMAKECONTEXTCURRENTARBPROC wglMakeContextCurrentARB;
typedef HDC (WINAPI * PFNWGLGETCURRENTREADDCARBPROC) (void);
extern PFNWGLGETCURRENTREADDCARBPROC wglGetCurrentReadDCARB;

// WGL_ARB_pbuffer
typedef HPBUFFERARB (WINAPI * PFNWGLCREATEPBUFFERARBPROC) (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int *piAttribList);
extern PFNWGLCREATEPBUFFERARBPROC wglCreatePbufferARB;
typedef HDC (WINAPI * PFNWGLGETPBUFFERDCARBPROC) (HPBUFFERARB hPbuffer);
extern PFNWGLGETPBUFFERDCARBPROC wglGetPbufferDCARB;
typedef int (WINAPI * PFNWGLRELEASEPBUFFERDCARBPROC) (HPBUFFERARB hPbuffer, HDC hDC);
extern PFNWGLRELEASEPBUFFERDCARBPROC wglReleasePbufferDCARB;
typedef BOOL (WINAPI * PFNWGLDESTROYPBUFFERARBPROC) (HPBUFFERARB hPbuffer);
extern PFNWGLDESTROYPBUFFERARBPROC wglDestroyPbufferARB;
typedef BOOL (WINAPI * PFNWGLQUERYPBUFFERARBPROC) (HPBUFFERARB hPbuffer, int iAttribute, int *piValue);
extern PFNWGLQUERYPBUFFERARBPROC wglQueryPbufferARB;

// WGL_ARB_render_texture
typedef BOOL (WINAPI * PFNWGLBINDTEXIMAGEARBPROC) (HPBUFFERARB hPbuffer, int iBuffer);
extern PFNWGLBINDTEXIMAGEARBPROC wglBindTexImageARB;
typedef BOOL (WINAPI * PFNWGLRELEASETEXIMAGEARBPROC) (HPBUFFERARB hPbuffer, int iBuffer);
extern PFNWGLRELEASETEXIMAGEARBPROC wglReleaseTexImageARB;
typedef BOOL (WINAPI * PFNWGLSETPBUFFERATTRIBARBPROC) (HPBUFFERARB hPbuffer, const int *piAttribList);
extern PFNWGLSETPBUFFERATTRIBARBPROC wglSetPbufferAttribARB;

// WGL_ARB_pixel_format_float

// WGL_ARB_framebuffer_sRGB

// WGL_ARB_create_context
typedef HGLRC (WINAPI * PFNWGLCREATECONTEXTATTRIBSARBPROC) (HDC hDC, HGLRC hShareContext, const int *attribList);
extern PFNWGLCREATECONTEXTATTRIBSARBPROC wglCreateContextAttribsARB;

// WGL_ARB_create_context_profile

// WGL_ARB_create_context_robustness

// WGL_EXT_make_current_read
typedef BOOL (WINAPI * PFNWGLMAKECONTEXTCURRENTEXTPROC) (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
extern PFNWGLMAKECONTEXTCURRENTEXTPROC wglMakeContextCurrentEXT;
typedef HDC (WINAPI * PFNWGLGETCURRENTREADDCEXTPROC) (void);
extern PFNWGLGETCURRENTREADDCEXTPROC wglGetCurrentReadDCEXT;

// WGL_EXT_pixel_format
typedef BOOL (WINAPI * PFNWGLGETPIXELFORMATATTRIBIVEXTPROC) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, int *piValues);
extern PFNWGLGETPIXELFORMATATTRIBIVEXTPROC wglGetPixelFormatAttribivEXT;
typedef BOOL (WINAPI * PFNWGLGETPIXELFORMATATTRIBFVEXTPROC) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, FLOAT *pfValues);
extern PFNWGLGETPIXELFORMATATTRIBFVEXTPROC wglGetPixelFormatAttribfvEXT;
typedef BOOL (WINAPI * PFNWGLCHOOSEPIXELFORMATEXTPROC) (HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats);
extern PFNWGLCHOOSEPIXELFORMATEXTPROC wglChoosePixelFormatEXT;

// WGL_EXT_pbuffer
typedef HPBUFFEREXT (WINAPI * PFNWGLCREATEPBUFFEREXTPROC) (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int *piAttribList);
extern PFNWGLCREATEPBUFFEREXTPROC wglCreatePbufferEXT;
typedef HDC (WINAPI * PFNWGLGETPBUFFERDCEXTPROC) (HPBUFFEREXT hPbuffer);
extern PFNWGLGETPBUFFERDCEXTPROC wglGetPbufferDCEXT;
typedef int (WINAPI * PFNWGLRELEASEPBUFFERDCEXTPROC) (HPBUFFEREXT hPbuffer, HDC hDC);
extern PFNWGLRELEASEPBUFFERDCEXTPROC wglReleasePbufferDCEXT;
typedef BOOL (WINAPI * PFNWGLDESTROYPBUFFEREXTPROC) (HPBUFFEREXT hPbuffer);
extern PFNWGLDESTROYPBUFFEREXTPROC wglDestroyPbufferEXT;
typedef BOOL (WINAPI * PFNWGLQUERYPBUFFEREXTPROC) (HPBUFFEREXT hPbuffer, int iAttribute, int *piValue);
extern PFNWGLQUERYPBUFFEREXTPROC wglQueryPbufferEXT;

// WGL_EXT_depth_float

// WGL_3DFX_multisample

// WGL_EXT_multisample

// WGL_I3D_digital_video_control
typedef BOOL (WINAPI * PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC) (HDC hDC, int iAttribute, int *piValue);
extern PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC wglGetDigitalVideoParametersI3D;
typedef BOOL (WINAPI * PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC) (HDC hDC, int iAttribute, const int *piValue);
extern PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC wglSetDigitalVideoParametersI3D;

// WGL_I3D_gamma
typedef BOOL (WINAPI * PFNWGLGETGAMMATABLEPARAMETERSI3DPROC) (HDC hDC, int iAttribute, int *piValue);
extern PFNWGLGETGAMMATABLEPARAMETERSI3DPROC wglGetGammaTableParametersI3D;
typedef BOOL (WINAPI * PFNWGLSETGAMMATABLEPARAMETERSI3DPROC) (HDC hDC, int iAttribute, const int *piValue);
extern PFNWGLSETGAMMATABLEPARAMETERSI3DPROC wglSetGammaTableParametersI3D;
typedef BOOL (WINAPI * PFNWGLGETGAMMATABLEI3DPROC) (HDC hDC, int iEntries, USHORT *puRed, USHORT *puGreen, USHORT *puBlue);
extern PFNWGLGETGAMMATABLEI3DPROC wglGetGammaTableI3D;
typedef BOOL (WINAPI * PFNWGLSETGAMMATABLEI3DPROC) (HDC hDC, int iEntries, const USHORT *puRed, const USHORT *puGreen, const USHORT *puBlue);
extern PFNWGLSETGAMMATABLEI3DPROC wglSetGammaTableI3D;

// WGL_I3D_genlock
typedef BOOL (WINAPI * PFNWGLENABLEGENLOCKI3DPROC) (HDC hDC);
extern PFNWGLENABLEGENLOCKI3DPROC wglEnableGenlockI3D;
typedef BOOL (WINAPI * PFNWGLDISABLEGENLOCKI3DPROC) (HDC hDC);
extern PFNWGLDISABLEGENLOCKI3DPROC wglDisableGenlockI3D;
typedef BOOL (WINAPI * PFNWGLISENABLEDGENLOCKI3DPROC) (HDC hDC, BOOL *pFlag);
extern PFNWGLISENABLEDGENLOCKI3DPROC wglIsEnabledGenlockI3D;
typedef BOOL (WINAPI * PFNWGLGENLOCKSOURCEI3DPROC) (HDC hDC, UINT uSource);
extern PFNWGLGENLOCKSOURCEI3DPROC wglGenlockSourceI3D;
typedef BOOL (WINAPI * PFNWGLGETGENLOCKSOURCEI3DPROC) (HDC hDC, UINT *uSource);
extern PFNWGLGETGENLOCKSOURCEI3DPROC wglGetGenlockSourceI3D;
typedef BOOL (WINAPI * PFNWGLGENLOCKSOURCEEDGEI3DPROC) (HDC hDC, UINT uEdge);
extern PFNWGLGENLOCKSOURCEEDGEI3DPROC wglGenlockSourceEdgeI3D;
typedef BOOL (WINAPI * PFNWGLGETGENLOCKSOURCEEDGEI3DPROC) (HDC hDC, UINT *uEdge);
extern PFNWGLGETGENLOCKSOURCEEDGEI3DPROC wglGetGenlockSourceEdgeI3D;
typedef BOOL (WINAPI * PFNWGLGENLOCKSAMPLERATEI3DPROC) (HDC hDC, UINT uRate);
extern PFNWGLGENLOCKSAMPLERATEI3DPROC wglGenlockSampleRateI3D;
typedef BOOL (WINAPI * PFNWGLGETGENLOCKSAMPLERATEI3DPROC) (HDC hDC, UINT *uRate);
extern PFNWGLGETGENLOCKSAMPLERATEI3DPROC wglGetGenlockSampleRateI3D;
typedef BOOL (WINAPI * PFNWGLGENLOCKSOURCEDELAYI3DPROC) (HDC hDC, UINT uDelay);
extern PFNWGLGENLOCKSOURCEDELAYI3DPROC wglGenlockSourceDelayI3D;
typedef BOOL (WINAPI * PFNWGLGETGENLOCKSOURCEDELAYI3DPROC) (HDC hDC, UINT *uDelay);
extern PFNWGLGETGENLOCKSOURCEDELAYI3DPROC wglGetGenlockSourceDelayI3D;
typedef BOOL (WINAPI * PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC) (HDC hDC, UINT *uMaxLineDelay, UINT *uMaxPixelDelay);
extern PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC wglQueryGenlockMaxSourceDelayI3D;

// WGL_I3D_image_buffer
typedef LPVOID (WINAPI * PFNWGLCREATEIMAGEBUFFERI3DPROC) (HDC hDC, DWORD dwSize, UINT uFlags);
extern PFNWGLCREATEIMAGEBUFFERI3DPROC wglCreateImageBufferI3D;
typedef BOOL (WINAPI * PFNWGLDESTROYIMAGEBUFFERI3DPROC) (HDC hDC, LPVOID pAddress);
extern PFNWGLDESTROYIMAGEBUFFERI3DPROC wglDestroyImageBufferI3D;
typedef BOOL (WINAPI * PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC) (HDC hDC, const HANDLE *pEvent, const LPVOID *pAddress, const DWORD *pSize, UINT count);
extern PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC wglAssociateImageBufferEventsI3D;
typedef BOOL (WINAPI * PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC) (HDC hDC, const LPVOID *pAddress, UINT count);
extern PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC wglReleaseImageBufferEventsI3D;

// WGL_I3D_swap_frame_lock
typedef BOOL (WINAPI * PFNWGLENABLEFRAMELOCKI3DPROC) (void);
extern PFNWGLENABLEFRAMELOCKI3DPROC wglEnableFrameLockI3D;
typedef BOOL (WINAPI * PFNWGLDISABLEFRAMELOCKI3DPROC) (void);
extern PFNWGLDISABLEFRAMELOCKI3DPROC wglDisableFrameLockI3D;
typedef BOOL (WINAPI * PFNWGLISENABLEDFRAMELOCKI3DPROC) (BOOL *pFlag);
extern PFNWGLISENABLEDFRAMELOCKI3DPROC wglIsEnabledFrameLockI3D;
typedef BOOL (WINAPI * PFNWGLQUERYFRAMELOCKMASTERI3DPROC) (BOOL *pFlag);
extern PFNWGLQUERYFRAMELOCKMASTERI3DPROC wglQueryFrameLockMasterI3D;

// WGL_NV_render_depth_texture

// WGL_NV_render_texture_rectangle

// WGL_ATI_pixel_format_float

// WGL_NV_float_buffer

// WGL_3DL_stereo_control
typedef BOOL (WINAPI * PFNWGLSETSTEREOEMITTERSTATE3DLPROC) (HDC hDC, UINT uState);
extern PFNWGLSETSTEREOEMITTERSTATE3DLPROC wglSetStereoEmitterState3DL;

// WGL_EXT_pixel_format_packed_float

// WGL_EXT_framebuffer_sRGB

// WGL_NV_present_video
typedef int (WINAPI * PFNWGLENUMERATEVIDEODEVICESNVPROC) (HDC hDC, HVIDEOOUTPUTDEVICENV *phDeviceList);
extern PFNWGLENUMERATEVIDEODEVICESNVPROC wglEnumerateVideoDevicesNV;
typedef BOOL (WINAPI * PFNWGLBINDVIDEODEVICENVPROC) (HDC hDC, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int *piAttribList);
extern PFNWGLBINDVIDEODEVICENVPROC wglBindVideoDeviceNV;
typedef BOOL (WINAPI * PFNWGLQUERYCURRENTCONTEXTNVPROC) (int iAttribute, int *piValue);
extern PFNWGLQUERYCURRENTCONTEXTNVPROC wglQueryCurrentContextNV;

// WGL_NV_video_out

// WGL_NV_swap_group
typedef BOOL (WINAPI * PFNWGLJOINSWAPGROUPNVPROC) (HDC hDC, GLuint group);
extern PFNWGLJOINSWAPGROUPNVPROC wglJoinSwapGroupNV;
typedef BOOL (WINAPI * PFNWGLBINDSWAPBARRIERNVPROC) (GLuint group, GLuint barrier);
extern PFNWGLBINDSWAPBARRIERNVPROC wglBindSwapBarrierNV;
typedef BOOL (WINAPI * PFNWGLQUERYSWAPGROUPNVPROC) (HDC hDC, GLuint *group, GLuint *barrier);
extern PFNWGLQUERYSWAPGROUPNVPROC wglQuerySwapGroupNV;
typedef BOOL (WINAPI * PFNWGLQUERYMAXSWAPGROUPSNVPROC) (HDC hDC, GLuint *maxGroups, GLuint *maxBarriers);
extern PFNWGLQUERYMAXSWAPGROUPSNVPROC wglQueryMaxSwapGroupsNV;
typedef BOOL (WINAPI * PFNWGLQUERYFRAMECOUNTNVPROC) (HDC hDC, GLuint *count);
extern PFNWGLQUERYFRAMECOUNTNVPROC wglQueryFrameCountNV;
typedef BOOL (WINAPI * PFNWGLRESETFRAMECOUNTNVPROC) (HDC hDC);
extern PFNWGLRESETFRAMECOUNTNVPROC wglResetFrameCountNV;

// WGL_NV_gpu_affinity
typedef BOOL (WINAPI * PFNWGLENUMGPUSNVPROC) (UINT iGpuIndex, HGPUNV *phGpu);
extern PFNWGLENUMGPUSNVPROC wglEnumGpusNV;
typedef BOOL (WINAPI * PFNWGLENUMGPUDEVICESNVPROC) (HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice);
extern PFNWGLENUMGPUDEVICESNVPROC wglEnumGpuDevicesNV;
typedef HDC (WINAPI * PFNWGLCREATEAFFINITYDCNVPROC) (const HGPUNV *phGpuList);
extern PFNWGLCREATEAFFINITYDCNVPROC wglCreateAffinityDCNV;
typedef BOOL (WINAPI * PFNWGLENUMGPUSFROMAFFINITYDCNVPROC) (HDC hAffinityDC, UINT iGpuIndex, HGPUNV *hGpu);
extern PFNWGLENUMGPUSFROMAFFINITYDCNVPROC wglEnumGpusFromAffinityDCNV;
typedef BOOL (WINAPI * PFNWGLDELETEDCNVPROC) (HDC hdc);
extern PFNWGLDELETEDCNVPROC wglDeleteDCNV;

// WGL_AMD_gpu_association
typedef UINT (WINAPI * PFNWGLGETGPUIDSAMDPROC) (UINT maxCount, UINT *ids);
extern PFNWGLGETGPUIDSAMDPROC wglGetGPUIDsAMD;
typedef INT (WINAPI * PFNWGLGETGPUINFOAMDPROC) (UINT id, int property, GLenum dataType, UINT size, void *data);
extern PFNWGLGETGPUINFOAMDPROC wglGetGPUInfoAMD;
typedef UINT (WINAPI * PFNWGLGETCONTEXTGPUIDAMDPROC) (HGLRC hglrc);
extern PFNWGLGETCONTEXTGPUIDAMDPROC wglGetContextGPUIDAMD;
typedef HGLRC (WINAPI * PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC) (UINT id);
extern PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC wglCreateAssociatedContextAMD;
typedef HGLRC (WINAPI * PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) (UINT id, HGLRC hShareContext, const int *attribList);
extern PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC wglCreateAssociatedContextAttribsAMD;
typedef BOOL (WINAPI * PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC) (HGLRC hglrc);
extern PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC wglDeleteAssociatedContextAMD;
typedef BOOL (WINAPI * PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) (HGLRC hglrc);
extern PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC wglMakeAssociatedContextCurrentAMD;
typedef HGLRC (WINAPI * PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC) (void);
extern PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC wglGetCurrentAssociatedContextAMD;
typedef VOID (WINAPI * PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC) (HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
extern PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC wglBlitContextFramebufferAMD;

// WGL_NV_video_capture
typedef BOOL (WINAPI * PFNWGLBINDVIDEOCAPTUREDEVICENVPROC) (UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice);
extern PFNWGLBINDVIDEOCAPTUREDEVICENVPROC wglBindVideoCaptureDeviceNV;
typedef UINT (WINAPI * PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC) (HDC hDc, HVIDEOINPUTDEVICENV *phDeviceList);
extern PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC wglEnumerateVideoCaptureDevicesNV;
typedef BOOL (WINAPI * PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC) (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
extern PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC wglLockVideoCaptureDeviceNV;
typedef BOOL (WINAPI * PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC) (HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int *piValue);
extern PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC wglQueryVideoCaptureDeviceNV;
typedef BOOL (WINAPI * PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC) (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
extern PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC wglReleaseVideoCaptureDeviceNV;

// WGL_NV_copy_image
typedef BOOL (WINAPI * PFNWGLCOPYIMAGESUBDATANVPROC) (HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
extern PFNWGLCOPYIMAGESUBDATANVPROC wglCopyImageSubDataNV;

// WGL_NV_multisample_coverage

// WGL_EXT_create_context_es2_profile

// WGL_NV_DX_interop
typedef BOOL (WINAPI * PFNWGLDXSETRESOURCESHAREHANDLENVPROC) (void *dxObject, HANDLE shareHandle);
extern PFNWGLDXSETRESOURCESHAREHANDLENVPROC wglDXSetResourceShareHandleNV;
typedef HANDLE (WINAPI * PFNWGLDXOPENDEVICENVPROC) (void *dxDevice);
extern PFNWGLDXOPENDEVICENVPROC wglDXOpenDeviceNV;
typedef BOOL (WINAPI * PFNWGLDXCLOSEDEVICENVPROC) (HANDLE hDevice);
extern PFNWGLDXCLOSEDEVICENVPROC wglDXCloseDeviceNV;
typedef HANDLE (WINAPI * PFNWGLDXREGISTEROBJECTNVPROC) (HANDLE hDevice, void *dxObject, GLuint name, GLenum type, GLenum access);
extern PFNWGLDXREGISTEROBJECTNVPROC wglDXRegisterObjectNV;
typedef BOOL (WINAPI * PFNWGLDXUNREGISTEROBJECTNVPROC) (HANDLE hDevice, HANDLE hObject);
extern PFNWGLDXUNREGISTEROBJECTNVPROC wglDXUnregisterObjectNV;
typedef BOOL (WINAPI * PFNWGLDXOBJECTACCESSNVPROC) (HANDLE hObject, GLenum access);
extern PFNWGLDXOBJECTACCESSNVPROC wglDXObjectAccessNV;
typedef BOOL (WINAPI * PFNWGLDXLOCKOBJECTSNVPROC) (HANDLE hDevice, GLint count, HANDLE *hObjects);
extern PFNWGLDXLOCKOBJECTSNVPROC wglDXLockObjectsNV;
typedef BOOL (WINAPI * PFNWGLDXUNLOCKOBJECTSNVPROC) (HANDLE hDevice, GLint count, HANDLE *hObjects);
extern PFNWGLDXUNLOCKOBJECTSNVPROC wglDXUnlockObjectsNV;

// WGL_NV_video_output
typedef BOOL (WINAPI * PFNWGLGETVIDEODEVICENVPROC) (HDC hDC, int numDevices, HPVIDEODEV *hVideoDevice);
extern PFNWGLGETVIDEODEVICENVPROC wglGetVideoDeviceNV;
typedef BOOL (WINAPI * PFNWGLRELEASEVIDEODEVICENVPROC) (HPVIDEODEV hVideoDevice);
extern PFNWGLRELEASEVIDEODEVICENVPROC wglReleaseVideoDeviceNV;
typedef BOOL (WINAPI * PFNWGLBINDVIDEOIMAGENVPROC) (HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer);
extern PFNWGLBINDVIDEOIMAGENVPROC wglBindVideoImageNV;
typedef BOOL (WINAPI * PFNWGLRELEASEVIDEOIMAGENVPROC) (HPBUFFERARB hPbuffer, int iVideoBuffer);
extern PFNWGLRELEASEVIDEOIMAGENVPROC wglReleaseVideoImageNV;
typedef BOOL (WINAPI * PFNWGLSENDPBUFFERTOVIDEONVPROC) (HPBUFFERARB hPbuffer, int iBufferType, unsigned long *pulCounterPbuffer, BOOL bBlock);
extern PFNWGLSENDPBUFFERTOVIDEONVPROC wglSendPbufferToVideoNV;
typedef BOOL (WINAPI * PFNWGLGETVIDEOINFONVPROC) (HPVIDEODEV hpVideoDevice, unsigned long *pulCounterOutputPbuffer, unsigned long *pulCounterOutputVideo);
extern PFNWGLGETVIDEOINFONVPROC wglGetVideoInfoNV;

// WGL_EXT_display_color_table
typedef GLboolean (WINAPI * PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC) (GLushort id);
extern PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC wglCreateDisplayColorTableEXT;
typedef GLboolean (WINAPI * PFNWGLLOADDISPLAYCOLORTABLEEXTPROC) (const GLushort *table, GLuint length);
extern PFNWGLLOADDISPLAYCOLORTABLEEXTPROC wglLoadDisplayColorTableEXT;
typedef GLboolean (WINAPI * PFNWGLBINDDISPLAYCOLORTABLEEXTPROC) (GLushort id);
extern PFNWGLBINDDISPLAYCOLORTABLEEXTPROC wglBindDisplayColorTableEXT;
typedef VOID (WINAPI * PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC) (GLushort id);
extern PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC wglDestroyDisplayColorTableEXT;

// WGL_EXT_extensions_string
typedef const char * (WINAPI * PFNWGLGETEXTENSIONSSTRINGEXTPROC) (void);
extern PFNWGLGETEXTENSIONSSTRINGEXTPROC wglGetExtensionsStringEXT;

// WGL_EXT_swap_control
typedef BOOL (WINAPI * PFNWGLSWAPINTERVALEXTPROC) (int interval);
extern PFNWGLSWAPINTERVALEXTPROC wglSwapIntervalEXT;
typedef int (WINAPI * PFNWGLGETSWAPINTERVALEXTPROC) (void);
extern PFNWGLGETSWAPINTERVALEXTPROC wglGetSwapIntervalEXT;

// WGL_NV_vertex_array_range
typedef void* (WINAPI * PFNWGLALLOCATEMEMORYNVPROC) (GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
extern PFNWGLALLOCATEMEMORYNVPROC wglAllocateMemoryNV;
typedef void (WINAPI * PFNWGLFREEMEMORYNVPROC) (void *pointer);
extern PFNWGLFREEMEMORYNVPROC wglFreeMemoryNV;

// WGL_OML_sync_control
typedef BOOL (WINAPI * PFNWGLGETSYNCVALUESOMLPROC) (HDC hdc, INT64 *ust, INT64 *msc, INT64 *sbc);
extern PFNWGLGETSYNCVALUESOMLPROC wglGetSyncValuesOML;
typedef BOOL (WINAPI * PFNWGLGETMSCRATEOMLPROC) (HDC hdc, INT32 *numerator, INT32 *denominator);
extern PFNWGLGETMSCRATEOMLPROC wglGetMscRateOML;
typedef INT64 (WINAPI * PFNWGLSWAPBUFFERSMSCOMLPROC) (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder);
extern PFNWGLSWAPBUFFERSMSCOMLPROC wglSwapBuffersMscOML;
typedef INT64 (WINAPI * PFNWGLSWAPLAYERBUFFERSMSCOMLPROC) (HDC hdc, int fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder);
extern PFNWGLSWAPLAYERBUFFERSMSCOMLPROC wglSwapLayerBuffersMscOML;
typedef BOOL (WINAPI * PFNWGLWAITFORMSCOMLPROC) (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64 *ust, INT64 *msc, INT64 *sbc);
extern PFNWGLWAITFORMSCOMLPROC wglWaitForMscOML;
typedef BOOL (WINAPI * PFNWGLWAITFORSBCOMLPROC) (HDC hdc, INT64 target_sbc, INT64 *ust, INT64 *msc, INT64 *sbc);
extern PFNWGLWAITFORSBCOMLPROC wglWaitForSbcOML;

// WGL_I3D_swap_frame_usage
typedef BOOL (WINAPI * PFNWGLGETFRAMEUSAGEI3DPROC) (float *pUsage);
extern PFNWGLGETFRAMEUSAGEI3DPROC wglGetFrameUsageI3D;
typedef BOOL (WINAPI * PFNWGLBEGINFRAMETRACKINGI3DPROC) (void);
extern PFNWGLBEGINFRAMETRACKINGI3DPROC wglBeginFrameTrackingI3D;
typedef BOOL (WINAPI * PFNWGLENDFRAMETRACKINGI3DPROC) (void);
extern PFNWGLENDFRAMETRACKINGI3DPROC wglEndFrameTrackingI3D;
typedef BOOL (WINAPI * PFNWGLQUERYFRAMETRACKINGI3DPROC) (DWORD *pFrameCount, DWORD *pMissedFrames, float *pLastMissedUsage);
extern PFNWGLQUERYFRAMETRACKINGI3DPROC wglQueryFrameTrackingI3D;

#endif

