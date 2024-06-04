#include <proto/cairo.h>

uint32 _impl_Obtain(struct CairoIFace *Self)
{
    uint32 res;
    __asm__ __volatile__(
            "1:	lwarx	%0,0,%1\n"
            "addic	%0,%0,1\n"
            "stwcx.	%0,0,%1\n"
            "bne-	1b"
            : "=&r"(res)
            : "r"(&Self->Data.RefCount)
            : "cc", "memory");

    return res;
}

uint32 _impl_Release(struct CairoIFace *Self)
{
    uint32 res;
    __asm__ __volatile__(
            "1:	lwarx	%0,0,%1\n"
            "addic	%0,%0,-1\n"
            "stwcx.	%0,0,%1\n"
            "bne-	1b"
            : "=&r"(res)
            : "r"(&Self->Data.RefCount)
            : "cc", "memory");

    return res;
}


cairo_surface_t * _impl_cairo_tee_surface_create(struct CairoIFace *Self, cairo_surface_t * primary) {
	return cairo_tee_surface_create(primary);
}

void _impl_cairo_tee_surface_add(struct CairoIFace *Self, cairo_surface_t * abstract_surface, cairo_surface_t * target) {
	cairo_tee_surface_add(abstract_surface,target);
}

void _impl_cairo_tee_surface_remove(struct CairoIFace *Self, cairo_surface_t * abstract_surface, cairo_surface_t * target) {
	cairo_tee_surface_remove(abstract_surface,target);
}

cairo_surface_t * _impl_cairo_tee_surface_index(struct CairoIFace *Self, cairo_surface_t * abstract_surface, unsigned int index) {
	return cairo_tee_surface_index(abstract_surface,index);
}

cairo_font_face_t * _impl_cairo_ft_font_face_create_for_ft_face(struct CairoIFace *Self, FT_Face face, int load_flags) {
	return cairo_ft_font_face_create_for_ft_face(face,load_flags);
}

void _impl_cairo_ft_font_face_set_synthesize(struct CairoIFace *Self, cairo_font_face_t * font_face, unsigned int synth_flags) {
	cairo_ft_font_face_set_synthesize(font_face,synth_flags);
}

void _impl_cairo_ft_font_face_unset_synthesize(struct CairoIFace *Self, cairo_font_face_t * font_face, unsigned int synth_flags) {
	cairo_ft_font_face_unset_synthesize(font_face,synth_flags);
}

unsigned int _impl_cairo_ft_font_face_get_synthesize(struct CairoIFace *Self, cairo_font_face_t * font_face) {
	return cairo_ft_font_face_get_synthesize(font_face);
}

FT_Face _impl_cairo_ft_scaled_font_lock_face(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font) {
	return cairo_ft_scaled_font_lock_face(scaled_font);
}

void _impl_cairo_ft_scaled_font_unlock_face(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font) {
	cairo_ft_scaled_font_unlock_face(scaled_font);
}

cairo_font_face_t * _impl_cairo_ft_font_face_create_for_pattern(struct CairoIFace *Self, FcPattern * pattern) {
	return cairo_ft_font_face_create_for_pattern(pattern);
}

void _impl_cairo_ft_font_options_substitute(struct CairoIFace *Self, const cairo_font_options_t * options, FcPattern * pattern) {
	cairo_ft_font_options_substitute(options,pattern);
}

cairo_device_t * _impl_cairo_script_create(struct CairoIFace *Self, const char * filename) {
	return cairo_script_create(filename);
}

cairo_device_t * _impl_cairo_script_create_for_stream(struct CairoIFace *Self, cairo_write_func_t write_func, void * closure) {
	return cairo_script_create_for_stream(write_func,closure);
}

void _impl_cairo_script_write_comment(struct CairoIFace *Self, cairo_device_t * script, const char * comment, int len) {
	cairo_script_write_comment(script,comment,len);
}

void _impl_cairo_script_set_mode(struct CairoIFace *Self, cairo_device_t * script, cairo_script_mode_t mode) {
	cairo_script_set_mode(script,mode);
}

cairo_script_mode_t _impl_cairo_script_get_mode(struct CairoIFace *Self, cairo_device_t * script) {
	return cairo_script_get_mode(script);
}

cairo_surface_t * _impl_cairo_script_surface_create(struct CairoIFace *Self, cairo_device_t * script, cairo_content_t content, double width, double height) {
	return cairo_script_surface_create(script,content,width,height);
}

cairo_surface_t * _impl_cairo_script_surface_create_for_target(struct CairoIFace *Self, cairo_device_t * script, cairo_surface_t * target) {
	return cairo_script_surface_create_for_target(script,target);
}

cairo_status_t _impl_cairo_script_from_recording_surface(struct CairoIFace *Self, cairo_device_t * script, cairo_surface_t * recording_surface) {
	return cairo_script_from_recording_surface(script,recording_surface);
}

cairo_surface_t * _impl_cairo_amigaos_surface_create(struct CairoIFace *Self, struct BitMap * bitmap) {
	return cairo_amigaos_surface_create(bitmap);
}

cairo_surface_t * _impl_cairo_amigaos_surface_create_from_rastport(struct CairoIFace *Self, struct RastPort * rastport, int xoff, int yoff, int width, int height) {
	return cairo_amigaos_surface_create_from_rastport(rastport,xoff,yoff,width,height);
}

cairo_font_face_t * _impl_cairo_amigaos_font_face_create(struct CairoIFace *Self, const char * filename) {
	return cairo_amigaos_font_face_create(filename);
}

cairo_surface_t * _impl_cairo_svg_surface_create(struct CairoIFace *Self, const char * filename, double width_in_points, double height_in_points) {
	return cairo_svg_surface_create(filename,width_in_points,height_in_points);
}

cairo_surface_t * _impl_cairo_svg_surface_create_for_stream(struct CairoIFace *Self, cairo_write_func_t write_func, void * closure, double width_in_points, double height_in_points) {
	return cairo_svg_surface_create_for_stream(write_func,closure,width_in_points,height_in_points);
}

void _impl_cairo_svg_surface_restrict_to_version(struct CairoIFace *Self, cairo_surface_t * surface, cairo_svg_version_t version) {
	cairo_svg_surface_restrict_to_version(surface,version);
}

void _impl_cairo_svg_get_versions(struct CairoIFace *Self, cairo_svg_version_t const * *versions, int * num_versions) {
	cairo_svg_get_versions(versions,num_versions);
}

const char * _impl_cairo_svg_version_to_string(struct CairoIFace *Self, cairo_svg_version_t version) {
	return cairo_svg_version_to_string(version);
}

void _impl_cairo_svg_surface_set_document_unit(struct CairoIFace *Self, cairo_surface_t * surface, cairo_svg_unit_t unit) {
	cairo_svg_surface_set_document_unit(surface,unit);
}

cairo_surface_t * _impl_cairo_pdf_surface_create(struct CairoIFace *Self, const char * filename, double width_in_points, double height_in_points) {
	return cairo_pdf_surface_create(filename,width_in_points,height_in_points);
}

cairo_surface_t * _impl_cairo_pdf_surface_create_for_stream(struct CairoIFace *Self, cairo_write_func_t write_func, void * closure, double width_in_points, double height_in_points) {
	return cairo_pdf_surface_create_for_stream(write_func,closure,width_in_points,height_in_points);
}

void _impl_cairo_pdf_surface_restrict_to_version(struct CairoIFace *Self, cairo_surface_t * surface, cairo_pdf_version_t version) {
	cairo_pdf_surface_restrict_to_version(surface,version);
}

void _impl_cairo_pdf_get_versions(struct CairoIFace *Self, cairo_pdf_version_t const * *versions, int * num_versions) {
	cairo_pdf_get_versions(versions,num_versions);
}

const char * _impl_cairo_pdf_version_to_string(struct CairoIFace *Self, cairo_pdf_version_t version) {
	return cairo_pdf_version_to_string(version);
}

void _impl_cairo_pdf_surface_set_size(struct CairoIFace *Self, cairo_surface_t * surface, double width_in_points, double height_in_points) {
	cairo_pdf_surface_set_size(surface,width_in_points,height_in_points);
}

int _impl_cairo_pdf_surface_add_outline(struct CairoIFace *Self, cairo_surface_t * surface, int parent_id, const char * utf8, const char * link_attribs, cairo_pdf_outline_flags_t flags) {
	return cairo_pdf_surface_add_outline(surface,parent_id,utf8,link_attribs,flags);
}

void _impl_cairo_pdf_surface_set_metadata(struct CairoIFace *Self, cairo_surface_t * surface, cairo_pdf_metadata_t metadata, const char * utf8) {
	cairo_pdf_surface_set_metadata(surface,metadata,utf8);
}

void _impl_cairo_pdf_surface_set_custom_metadata(struct CairoIFace *Self, cairo_surface_t * surface, const char * name, const char * value) {
	cairo_pdf_surface_set_custom_metadata(surface,name,value);
}

void _impl_cairo_pdf_surface_set_page_label(struct CairoIFace *Self, cairo_surface_t * surface, const char * utf8) {
	cairo_pdf_surface_set_page_label(surface,utf8);
}

void _impl_cairo_pdf_surface_set_thumbnail_size(struct CairoIFace *Self, cairo_surface_t * surface, int width, int height) {
	cairo_pdf_surface_set_thumbnail_size(surface,width,height);
}

const char* _impl_cairo_version_string(struct CairoIFace *Self) {
	return cairo_version_string();
}

void _impl_cairo_pattern_set_dither(struct CairoIFace *Self, cairo_pattern_t * pattern, cairo_dither_t dither) {
	cairo_pattern_set_dither(pattern,dither);
}

cairo_dither_t _impl_cairo_pattern_get_dither(struct CairoIFace *Self, cairo_pattern_t * pattern) {
	return cairo_pattern_get_dither(pattern);
}

cairo_t * _impl_cairo_create(struct CairoIFace *Self, cairo_surface_t * target) {
	return cairo_create(target);
}

cairo_t * _impl_cairo_reference(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_reference(cr);
}

void _impl_cairo_destroy(struct CairoIFace *Self, cairo_t * cr) {
	cairo_destroy(cr);
}

unsigned int _impl_cairo_get_reference_count(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_reference_count(cr);
}

void * _impl_cairo_get_user_data(struct CairoIFace *Self, cairo_t * cr, const cairo_user_data_key_t * key) {
	return cairo_get_user_data(cr,key);
}

cairo_status_t _impl_cairo_set_user_data(struct CairoIFace *Self, cairo_t * cr, const cairo_user_data_key_t * key, void * user_data, cairo_destroy_func_t destroy) {
	return cairo_set_user_data(cr,key,user_data,destroy);
}

void _impl_cairo_save(struct CairoIFace *Self, cairo_t * cr) {
	cairo_save(cr);
}

void _impl_cairo_restore(struct CairoIFace *Self, cairo_t * cr) {
	cairo_restore(cr);
}

void _impl_cairo_push_group(struct CairoIFace *Self, cairo_t * cr) {
	cairo_push_group(cr);
}

void _impl_cairo_push_group_with_content(struct CairoIFace *Self, cairo_t * cr, cairo_content_t content) {
	cairo_push_group_with_content(cr,content);
}

cairo_pattern_t * _impl_cairo_pop_group(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_pop_group(cr);
}

void _impl_cairo_pop_group_to_source(struct CairoIFace *Self, cairo_t * cr) {
	cairo_pop_group_to_source(cr);
}

void _impl_cairo_set_operator(struct CairoIFace *Self, cairo_t * cr, cairo_operator_t op) {
	cairo_set_operator(cr,op);
}

void _impl_cairo_set_source(struct CairoIFace *Self, cairo_t * cr, cairo_pattern_t * source) {
	cairo_set_source(cr,source);
}

void _impl_cairo_set_source_rgb(struct CairoIFace *Self, cairo_t * cr, double red, double green, double blue) {
	cairo_set_source_rgb(cr,red,green,blue);
}

void _impl_cairo_set_source_rgba(struct CairoIFace *Self, cairo_t * cr, double red, double green, double blue, double alpha) {
	cairo_set_source_rgba(cr,red,green,blue,alpha);
}

void _impl_cairo_set_source_surface(struct CairoIFace *Self, cairo_t * cr, cairo_surface_t * surface, double x, double y) {
	cairo_set_source_surface(cr,surface,x,y);
}

void _impl_cairo_set_tolerance(struct CairoIFace *Self, cairo_t * cr, double tolerance) {
	cairo_set_tolerance(cr,tolerance);
}

void _impl_cairo_set_antialias(struct CairoIFace *Self, cairo_t * cr, cairo_antialias_t antialias) {
	cairo_set_antialias(cr,antialias);
}

void _impl_cairo_set_fill_rule(struct CairoIFace *Self, cairo_t * cr, cairo_fill_rule_t fill_rule) {
	cairo_set_fill_rule(cr,fill_rule);
}

void _impl_cairo_set_line_width(struct CairoIFace *Self, cairo_t * cr, double width) {
	cairo_set_line_width(cr,width);
}

void _impl_cairo_set_hairline(struct CairoIFace *Self, cairo_t * cr, cairo_bool_t set_hairline) {
	cairo_set_hairline(cr,set_hairline);
}

void _impl_cairo_set_line_cap(struct CairoIFace *Self, cairo_t * cr, cairo_line_cap_t line_cap) {
	cairo_set_line_cap(cr,line_cap);
}

void _impl_cairo_set_line_join(struct CairoIFace *Self, cairo_t * cr, cairo_line_join_t line_join) {
	cairo_set_line_join(cr,line_join);
}

void _impl_cairo_set_dash(struct CairoIFace *Self, cairo_t * cr, const double * dashes, int num_dashes, double offset) {
	cairo_set_dash(cr,dashes,num_dashes,offset);
}

void _impl_cairo_set_miter_limit(struct CairoIFace *Self, cairo_t * cr, double limit) {
	cairo_set_miter_limit(cr,limit);
}

void _impl_cairo_translate(struct CairoIFace *Self, cairo_t * cr, double tx, double ty) {
	cairo_translate(cr,tx,ty);
}

void _impl_cairo_scale(struct CairoIFace *Self, cairo_t * cr, double sx, double sy) {
	cairo_scale(cr,sx,sy);
}

void _impl_cairo_rotate(struct CairoIFace *Self, cairo_t * cr, double angle) {
	cairo_rotate(cr,angle);
}

void _impl_cairo_transform(struct CairoIFace *Self, cairo_t * cr, const cairo_matrix_t * matrix) {
	cairo_transform(cr,matrix);
}

void _impl_cairo_set_matrix(struct CairoIFace *Self, cairo_t * cr, const cairo_matrix_t * matrix) {
	cairo_set_matrix(cr,matrix);
}

void _impl_cairo_identity_matrix(struct CairoIFace *Self, cairo_t * cr) {
	cairo_identity_matrix(cr);
}

void _impl_cairo_user_to_device(struct CairoIFace *Self, cairo_t * cr, double * x, double * y) {
	cairo_user_to_device(cr,x,y);
}

void _impl_cairo_user_to_device_distance(struct CairoIFace *Self, cairo_t * cr, double * dx, double * dy) {
	cairo_user_to_device_distance(cr,dx,dy);
}

void _impl_cairo_device_to_user(struct CairoIFace *Self, cairo_t * cr, double * x, double * y) {
	cairo_device_to_user(cr,x,y);
}

void _impl_cairo_device_to_user_distance(struct CairoIFace *Self, cairo_t * cr, double * dx, double * dy) {
	cairo_device_to_user_distance(cr,dx,dy);
}

void _impl_cairo_new_path(struct CairoIFace *Self, cairo_t * cr) {
	cairo_new_path(cr);
}

void _impl_cairo_move_to(struct CairoIFace *Self, cairo_t * cr, double x, double y) {
	cairo_move_to(cr,x,y);
}

void _impl_cairo_new_sub_path(struct CairoIFace *Self, cairo_t * cr) {
	cairo_new_sub_path(cr);
}

void _impl_cairo_line_to(struct CairoIFace *Self, cairo_t * cr, double x, double y) {
	cairo_line_to(cr,x,y);
}

void _impl_cairo_curve_to(struct CairoIFace *Self, cairo_t * cr, double x1, double y1, double x2, double y2, double x3, double y3) {
	cairo_curve_to(cr,x1,y1,x2,y2,x3,y3);
}

void _impl_cairo_arc(struct CairoIFace *Self, cairo_t * cr, double xc, double yc, double radius, double angle1, double angle2) {
	cairo_arc(cr,xc,yc,radius,angle1,angle2);
}

void _impl_cairo_arc_negative(struct CairoIFace *Self, cairo_t * cr, double xc, double yc, double radius, double angle1, double angle2) {
	cairo_arc_negative(cr,xc,yc,radius,angle1,angle2);
}

void _impl_cairo_rel_move_to(struct CairoIFace *Self, cairo_t * cr, double dx, double dy) {
	cairo_rel_move_to(cr,dx,dy);
}

void _impl_cairo_rel_line_to(struct CairoIFace *Self, cairo_t * cr, double dx, double dy) {
	cairo_rel_line_to(cr,dx,dy);
}

void _impl_cairo_rel_curve_to(struct CairoIFace *Self, cairo_t * cr, double dx1, double dy1, double dx2, double dy2, double dx3, double dy3) {
	cairo_rel_curve_to(cr,dx1,dy1,dx2,dy2,dx3,dy3);
}

void _impl_cairo_rectangle(struct CairoIFace *Self, cairo_t * cr, double x, double y, double width, double height) {
	cairo_rectangle(cr,x,y,width,height);
}

void _impl_cairo_stroke_to_path(struct CairoIFace *Self, cairo_t * cr) {
#if 0	
	cairo_stroke_to_path(cr);
#endif	
}

void _impl_cairo_close_path(struct CairoIFace *Self, cairo_t * cr) {
	cairo_close_path(cr);
}

void _impl_cairo_path_extents(struct CairoIFace *Self, cairo_t * cr, double * x1, double * y1, double * x2, double * y2) {
	cairo_path_extents(cr,x1,y1,x2,y2);
}

void _impl_cairo_paint(struct CairoIFace *Self, cairo_t * cr) {
	cairo_paint(cr);
}

void _impl_cairo_paint_with_alpha(struct CairoIFace *Self, cairo_t * cr, double alpha) {
	cairo_paint_with_alpha(cr,alpha);
}

void _impl_cairo_mask(struct CairoIFace *Self, cairo_t * cr, cairo_pattern_t * pattern) {
	cairo_mask(cr,pattern);
}

void _impl_cairo_mask_surface(struct CairoIFace *Self, cairo_t * cr, cairo_surface_t * surface, double surface_x, double surface_y) {
	cairo_mask_surface(cr,surface,surface_x,surface_y);
}

void _impl_cairo_stroke(struct CairoIFace *Self, cairo_t * cr) {
	cairo_stroke(cr);
}

void _impl_cairo_stroke_preserve(struct CairoIFace *Self, cairo_t * cr) {
	cairo_stroke_preserve(cr);
}

void _impl_cairo_fill(struct CairoIFace *Self, cairo_t * cr) {
	cairo_fill(cr);
}

void _impl_cairo_fill_preserve(struct CairoIFace *Self, cairo_t * cr) {
	cairo_fill_preserve(cr);
}

void _impl_cairo_copy_page(struct CairoIFace *Self, cairo_t * cr) {
	cairo_copy_page(cr);
}

void _impl_cairo_show_page(struct CairoIFace *Self, cairo_t * cr) {
	cairo_show_page(cr);
}

cairo_bool_t _impl_cairo_in_stroke(struct CairoIFace *Self, cairo_t * cr, double x, double y) {
	return cairo_in_stroke(cr,x,y);
}

cairo_bool_t _impl_cairo_in_fill(struct CairoIFace *Self, cairo_t * cr, double x, double y) {
	return cairo_in_fill(cr,x,y);
}

cairo_bool_t _impl_cairo_in_clip(struct CairoIFace *Self, cairo_t * cr, double x, double y) {
	return cairo_in_clip(cr,x,y);
}

void _impl_cairo_stroke_extents(struct CairoIFace *Self, cairo_t * cr, double * x1, double * y1, double * x2, double * y2) {
	cairo_stroke_extents(cr,x1,y1,x2,y2);
}

void _impl_cairo_fill_extents(struct CairoIFace *Self, cairo_t * cr, double * x1, double * y1, double * x2, double * y2) {
	cairo_fill_extents(cr,x1,y1,x2,y2);
}

void _impl_cairo_reset_clip(struct CairoIFace *Self, cairo_t * cr) {
	cairo_reset_clip(cr);
}

void _impl_cairo_clip(struct CairoIFace *Self, cairo_t * cr) {
	cairo_clip(cr);
}

void _impl_cairo_clip_preserve(struct CairoIFace *Self, cairo_t * cr) {
	cairo_clip_preserve(cr);
}

void _impl_cairo_clip_extents(struct CairoIFace *Self, cairo_t * cr, double * x1, double * y1, double * x2, double * y2) {
	cairo_clip_extents(cr,x1,y1,x2,y2);
}

cairo_rectangle_list_t * _impl_cairo_copy_clip_rectangle_list(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_copy_clip_rectangle_list(cr);
}

void _impl_cairo_rectangle_list_destroy(struct CairoIFace *Self, cairo_rectangle_list_t * rectangle_list) {
	cairo_rectangle_list_destroy(rectangle_list);
}

void _impl_cairo_tag_begin(struct CairoIFace *Self, cairo_t * cr, const char * tag_name, const char * attributes) {
	cairo_tag_begin(cr,tag_name,attributes);
}

void _impl_cairo_tag_end(struct CairoIFace *Self, cairo_t * cr, const char * tag_name) {
	cairo_tag_end(cr,tag_name);
}

cairo_glyph_t * _impl_cairo_glyph_allocate(struct CairoIFace *Self, int num_glyphs) {
	return cairo_glyph_allocate(num_glyphs);
}

void _impl_cairo_glyph_free(struct CairoIFace *Self, cairo_glyph_t * glyphs) {
	cairo_glyph_free(glyphs);
}

cairo_text_cluster_t * _impl_cairo_text_cluster_allocate(struct CairoIFace *Self, int num_clusters) {
	return cairo_text_cluster_allocate(num_clusters);
}

void _impl_cairo_text_cluster_free(struct CairoIFace *Self, cairo_text_cluster_t * clusters) {
	cairo_text_cluster_free(clusters);
}

cairo_font_options_t * _impl_cairo_font_options_create(struct CairoIFace *Self) {
	return cairo_font_options_create();
}

cairo_font_options_t * _impl_cairo_font_options_copy(struct CairoIFace *Self, const cairo_font_options_t * original) {
	return cairo_font_options_copy(original);
}

void _impl_cairo_font_options_destroy(struct CairoIFace *Self, cairo_font_options_t * options) {
	cairo_font_options_destroy(options);
}

cairo_status_t _impl_cairo_font_options_status(struct CairoIFace *Self, cairo_font_options_t * options) {
	return cairo_font_options_status(options);
}

void _impl_cairo_font_options_merge(struct CairoIFace *Self, cairo_font_options_t * options, const cairo_font_options_t * other) {
	cairo_font_options_merge(options,other);
}

cairo_bool_t _impl_cairo_font_options_equal(struct CairoIFace *Self, const cairo_font_options_t * options, const cairo_font_options_t * other) {
	return cairo_font_options_equal(options,other);
}

unsigned long _impl_cairo_font_options_hash(struct CairoIFace *Self, const cairo_font_options_t * options) {
	return cairo_font_options_hash(options);
}

void _impl_cairo_font_options_set_antialias(struct CairoIFace *Self, cairo_font_options_t * options, cairo_antialias_t antialias) {
	cairo_font_options_set_antialias(options,antialias);
}

cairo_antialias_t _impl_cairo_font_options_get_antialias(struct CairoIFace *Self, const cairo_font_options_t * options) {
	return cairo_font_options_get_antialias(options);
}

void _impl_cairo_font_options_set_subpixel_order(struct CairoIFace *Self, cairo_font_options_t * options, cairo_subpixel_order_t subpixel_order) {
	cairo_font_options_set_subpixel_order(options,subpixel_order);
}

cairo_subpixel_order_t _impl_cairo_font_options_get_subpixel_order(struct CairoIFace *Self, const cairo_font_options_t * options) {
	return cairo_font_options_get_subpixel_order(options);
}

void _impl_cairo_font_options_set_hint_style(struct CairoIFace *Self, cairo_font_options_t * options, cairo_hint_style_t hint_style) {
	cairo_font_options_set_hint_style(options,hint_style);
}

cairo_hint_style_t _impl_cairo_font_options_get_hint_style(struct CairoIFace *Self, const cairo_font_options_t * options) {
	return cairo_font_options_get_hint_style(options);
}

void _impl_cairo_font_options_set_hint_metrics(struct CairoIFace *Self, cairo_font_options_t * options, cairo_hint_metrics_t hint_metrics) {
	cairo_font_options_set_hint_metrics(options,hint_metrics);
}

cairo_hint_metrics_t _impl_cairo_font_options_get_hint_metrics(struct CairoIFace *Self, const cairo_font_options_t * options) {
	return cairo_font_options_get_hint_metrics(options);
}

const char * _impl_cairo_font_options_get_variations(struct CairoIFace *Self, cairo_font_options_t * options) {
	return cairo_font_options_get_variations(options);
}

void _impl_cairo_font_options_set_variations(struct CairoIFace *Self, cairo_font_options_t * options, const char * variations) {
	cairo_font_options_set_variations(options,variations);
}

void _impl_cairo_font_options_set_color_mode(struct CairoIFace *Self, cairo_font_options_t * options, cairo_color_mode_t color_mode) {
	cairo_font_options_set_color_mode(options,color_mode);
}

cairo_color_mode_t _impl_cairo_font_options_get_color_mode(struct CairoIFace *Self, const cairo_font_options_t * options) {
	return cairo_font_options_get_color_mode(options);
}

unsigned int _impl_cairo_font_options_get_color_palette(struct CairoIFace *Self, const cairo_font_options_t * options) {
	return cairo_font_options_get_color_palette(options);
}

void _impl_cairo_font_options_set_color_palette(struct CairoIFace *Self, cairo_font_options_t * options, unsigned int palette_index) {
	cairo_font_options_set_color_palette(options,palette_index);
}

void _impl_cairo_font_options_set_custom_palette_color(struct CairoIFace *Self, cairo_font_options_t * options, unsigned int index, double red, double green, double blue, double alpha) {
	cairo_font_options_set_custom_palette_color(options,index,red,green,blue,alpha);
}

cairo_status_t _impl_cairo_font_options_get_custom_palette_color(struct CairoIFace *Self, cairo_font_options_t * options, unsigned int index, double * red, double * green, double * blue, double * alpha) {
	return cairo_font_options_get_custom_palette_color(options,index,red,green,blue,alpha);
}

void _impl_cairo_select_font_face(struct CairoIFace *Self, cairo_t * cr, const char * family, cairo_font_slant_t slant, cairo_font_weight_t weight) {
	cairo_select_font_face(cr,family,slant,weight);
}

void _impl_cairo_set_font_size(struct CairoIFace *Self, cairo_t * cr, double size) {
	cairo_set_font_size(cr,size);
}

void _impl_cairo_set_font_matrix(struct CairoIFace *Self, cairo_t * cr, const cairo_matrix_t * matrix) {
	cairo_set_font_matrix(cr,matrix);
}

void _impl_cairo_get_font_matrix(struct CairoIFace *Self, cairo_t * cr, cairo_matrix_t * matrix) {
	cairo_get_font_matrix(cr,matrix);
}

void _impl_cairo_set_font_options(struct CairoIFace *Self, cairo_t * cr, const cairo_font_options_t * options) {
	cairo_set_font_options(cr,options);
}

void _impl_cairo_get_font_options(struct CairoIFace *Self, cairo_t * cr, cairo_font_options_t * options) {
	cairo_get_font_options(cr,options);
}

void _impl_cairo_set_font_face(struct CairoIFace *Self, cairo_t * cr, cairo_font_face_t * font_face) {
	cairo_set_font_face(cr,font_face);
}

cairo_font_face_t * _impl_cairo_get_font_face(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_font_face(cr);
}

void _impl_cairo_set_scaled_font(struct CairoIFace *Self, cairo_t * cr, const cairo_scaled_font_t * scaled_font) {
	cairo_set_scaled_font(cr,scaled_font);
}

cairo_scaled_font_t * _impl_cairo_get_scaled_font(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_scaled_font(cr);
}

void _impl_cairo_show_text(struct CairoIFace *Self, cairo_t * cr, const char * utf8) {
	cairo_show_text(cr,utf8);
}

void _impl_cairo_show_glyphs(struct CairoIFace *Self, cairo_t * cr, const cairo_glyph_t * glyphs, int num_glyphs) {
	cairo_show_glyphs(cr,glyphs,num_glyphs);
}

void _impl_cairo_show_text_glyphs(struct CairoIFace *Self, cairo_t * cr, const char * utf8, int utf8_len, const cairo_glyph_t * glyphs, int num_glyphs, const cairo_text_cluster_t * clusters, int num_clusters, cairo_text_cluster_flags_t cluster_flags) {
	cairo_show_text_glyphs(cr,utf8,utf8_len,glyphs,num_glyphs,clusters,num_clusters,cluster_flags);
}

void _impl_cairo_text_path(struct CairoIFace *Self, cairo_t * cr, const char * utf8) {
	return (cr,utf8);
}

void _impl_cairo_glyph_path(struct CairoIFace *Self, cairo_t * cr, const cairo_glyph_t * glyphs, int num_glyphs) {
	cairo_glyph_path(cr,glyphs,num_glyphs);
}

void _impl_cairo_text_extents(struct CairoIFace *Self, cairo_t * cr, const char * utf8, cairo_text_extents_t * extents) {
	cairo_text_extents(cr,utf8,extents);
}

void _impl_cairo_glyph_extents(struct CairoIFace *Self, cairo_t * cr, const cairo_glyph_t * glyphs, int num_glyphs, cairo_text_extents_t * extents) {
	cairo_glyph_extents(cr,glyphs,num_glyphs,extents);
}

void _impl_cairo_font_extents(struct CairoIFace *Self, cairo_t * cr, cairo_font_extents_t * extents) {
	cairo_font_extents(cr,extents);
}

cairo_font_face_t * _impl_cairo_font_face_reference(struct CairoIFace *Self, cairo_font_face_t * font_face) {
	return cairo_font_face_reference(font_face);
}

void _impl_cairo_font_face_destroy(struct CairoIFace *Self, cairo_font_face_t * font_face) {
	cairo_font_face_destroy(font_face);
}

unsigned int _impl_cairo_font_face_get_reference_count(struct CairoIFace *Self, cairo_font_face_t * font_face) {
	return cairo_font_face_get_reference_count(font_face);
}

cairo_status_t _impl_cairo_font_face_status(struct CairoIFace *Self, cairo_font_face_t * font_face) {
	return cairo_font_face_status(font_face);
}

cairo_font_type_t _impl_cairo_font_face_get_type(struct CairoIFace *Self, cairo_font_face_t * font_face) {
	return cairo_font_face_get_type(font_face);
}

void * _impl_cairo_font_face_get_user_data(struct CairoIFace *Self, cairo_font_face_t * font_face, const cairo_user_data_key_t * key) {
	return cairo_font_face_get_user_data(font_face,key);
}

cairo_status_t _impl_cairo_font_face_set_user_data(struct CairoIFace *Self, cairo_font_face_t * font_face, const cairo_user_data_key_t * key, void * user_data, cairo_destroy_func_t destroy) {
	return cairo_font_face_set_user_data(font_face,key,user_data,destroy);
}

cairo_scaled_font_t * _impl_cairo_scaled_font_create(struct CairoIFace *Self, cairo_font_face_t * font_face, const cairo_matrix_t * font_matrix, const cairo_matrix_t * ctm, const cairo_font_options_t * options) {
	return cairo_scaled_font_create(font_face,font_matrix,ctm,options);
}

cairo_scaled_font_t * _impl_cairo_scaled_font_reference(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font) {
	return cairo_scaled_font_reference(scaled_font);
}

void _impl_cairo_scaled_font_destroy(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font) {
	cairo_scaled_font_destroy(scaled_font);
}

unsigned int _impl_cairo_scaled_font_get_reference_count(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font) {
	return cairo_scaled_font_get_reference_count(scaled_font);
}

cairo_status_t _impl_cairo_scaled_font_status(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font) {
	return cairo_scaled_font_status(scaled_font);
}

cairo_font_type_t _impl_cairo_scaled_font_get_type(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font) {
	return cairo_scaled_font_get_type(scaled_font);
}

void * _impl_cairo_scaled_font_get_user_data(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font, const cairo_user_data_key_t * key) {
	return cairo_scaled_font_get_user_data(scaled_font,key);
}

cairo_status_t _impl_cairo_scaled_font_set_user_data(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font, const cairo_user_data_key_t * key, void * user_data, cairo_destroy_func_t destroy) {
	return cairo_scaled_font_set_user_data(scaled_font,key,user_data,destroy);
}

void _impl_cairo_scaled_font_extents(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font, cairo_font_extents_t * extents) {
	cairo_scaled_font_extents(scaled_font,extents);
}

void _impl_cairo_scaled_font_text_extents(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font, const char * utf8, cairo_text_extents_t * extents) {
	cairo_scaled_font_text_extents(scaled_font,utf8,extents);
}

void _impl_cairo_scaled_font_glyph_extents(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font, const cairo_glyph_t * glyphs, int num_glyphs, cairo_text_extents_t * extents) {
	cairo_scaled_font_glyph_extents(scaled_font,glyphs,num_glyphs,extents);
}

cairo_status_t _impl_cairo_scaled_font_text_to_glyphs(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font, double x, double y, const char * utf8, int utf8_len, cairo_glyph_t * *glyphs, int * num_glyphs, cairo_text_cluster_t * *clusters, int * num_clusters, cairo_text_cluster_flags_t * cluster_flags) {
	return cairo_scaled_font_text_to_glyphs(scaled_font,x,y,utf8,utf8_len,glyphs,num_glyphs,clusters,num_clusters,cluster_flags);
}

cairo_font_face_t * _impl_cairo_scaled_font_get_font_face(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font) {
	return cairo_scaled_font_get_font_face(scaled_font);
}

void _impl_cairo_scaled_font_get_font_matrix(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font, cairo_matrix_t * font_matrix) {
	cairo_scaled_font_get_font_matrix(scaled_font,font_matrix);
}

void _impl_cairo_scaled_font_get_ctm(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font, cairo_matrix_t * ctm) {
	cairo_scaled_font_get_ctm(scaled_font,ctm);
}

void _impl_cairo_scaled_font_get_scale_matrix(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font, cairo_matrix_t * scale_matrix) {
	cairo_scaled_font_get_scale_matrix(scaled_font,scale_matrix);
}

void _impl_cairo_scaled_font_get_font_options(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font, cairo_font_options_t * options) {
	cairo_scaled_font_get_font_options(scaled_font,options);
}

cairo_font_face_t * _impl_cairo_toy_font_face_create(struct CairoIFace *Self, const char * family, cairo_font_slant_t slant, cairo_font_weight_t weight) {
	return cairo_toy_font_face_create(family,slant,weight);
}

const char * _impl_cairo_toy_font_face_get_family(struct CairoIFace *Self, cairo_font_face_t * font_face) {
	return cairo_toy_font_face_get_family(font_face);
}

cairo_font_slant_t _impl_cairo_toy_font_face_get_slant(struct CairoIFace *Self, cairo_font_face_t * font_face) {
	return cairo_toy_font_face_get_slant(font_face);
}

cairo_font_weight_t _impl_cairo_toy_font_face_get_weight(struct CairoIFace *Self, cairo_font_face_t * font_face) {
	return cairo_toy_font_face_get_weight(font_face);
}

cairo_font_face_t * _impl_cairo_user_font_face_create(struct CairoIFace *Self) {
	return cairo_user_font_face_create();
}

void _impl_cairo_user_font_face_set_init_func(struct CairoIFace *Self, cairo_font_face_t * font_face, cairo_user_scaled_font_init_func_t init_func) {
	cairo_user_font_face_set_init_func(font_face,init_func);
}

void _impl_cairo_user_font_face_set_render_glyph_func(struct CairoIFace *Self, cairo_font_face_t * font_face, cairo_user_scaled_font_render_glyph_func_t render_glyph_func) {
	cairo_user_font_face_set_render_glyph_func(font_face,render_glyph_func);
}

void _impl_cairo_user_font_face_set_render_color_glyph_func(struct CairoIFace *Self, cairo_font_face_t * font_face, cairo_user_scaled_font_render_glyph_func_t render_glyph_func) {
	cairo_user_font_face_set_render_color_glyph_func(font_face,render_glyph_func);
}

void _impl_cairo_user_font_face_set_text_to_glyphs_func(struct CairoIFace *Self, cairo_font_face_t * font_face, cairo_user_scaled_font_text_to_glyphs_func_t text_to_glyphs_func) {
	cairo_user_font_face_set_text_to_glyphs_func(font_face,text_to_glyphs_func);
}

void _impl_cairo_user_font_face_set_unicode_to_glyph_func(struct CairoIFace *Self, cairo_font_face_t * font_face, cairo_user_scaled_font_unicode_to_glyph_func_t unicode_to_glyph_func) {
	cairo_user_font_face_set_unicode_to_glyph_func(font_face,unicode_to_glyph_func);
}

cairo_user_scaled_font_init_func_t _impl_cairo_user_font_face_get_init_func(struct CairoIFace *Self, cairo_font_face_t * font_face) {
	return cairo_user_font_face_get_init_func(font_face);
}

cairo_user_scaled_font_render_glyph_func_t _impl_cairo_user_font_face_get_render_glyph_func(struct CairoIFace *Self, cairo_font_face_t * font_face) {
	return cairo_user_font_face_get_render_glyph_func(font_face);
}

cairo_user_scaled_font_render_glyph_func_t _impl_cairo_user_font_face_get_render_color_glyph_func(struct CairoIFace *Self, cairo_font_face_t * font_face) {
	return cairo_user_font_face_get_render_color_glyph_func(font_face);
}

cairo_user_scaled_font_text_to_glyphs_func_t _impl_cairo_user_font_face_get_text_to_glyphs_func(struct CairoIFace *Self, cairo_font_face_t * font_face) {
	return cairo_user_font_face_get_text_to_glyphs_func(font_face);
}

cairo_user_scaled_font_unicode_to_glyph_func_t _impl_cairo_user_font_face_get_unicode_to_glyph_func(struct CairoIFace *Self, cairo_font_face_t * font_face) {
	return cairo_user_font_face_get_unicode_to_glyph_func(font_face);
}

cairo_pattern_t * _impl_cairo_user_scaled_font_get_foreground_marker(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font) {
	return cairo_user_scaled_font_get_foreground_marker(scaled_font);
}

cairo_pattern_t * _impl_cairo_user_scaled_font_get_foreground_source(struct CairoIFace *Self, cairo_scaled_font_t * scaled_font) {
	return cairo_user_scaled_font_get_foreground_source(scaled_font);
}

cairo_operator_t _impl_cairo_get_operator(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_operator(cr);
}

cairo_pattern_t * _impl_cairo_get_source(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_source(cr);
}

double _impl_cairo_get_tolerance(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_tolerance(cr);
}

cairo_antialias_t _impl_cairo_get_antialias(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_antialias(cr);
}

cairo_bool_t _impl_cairo_has_current_point(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_has_current_point(cr);
}

void _impl_cairo_get_current_point(struct CairoIFace *Self, cairo_t * cr, double * x, double * y) {
	cairo_get_current_point(cr,x,y);
}

cairo_fill_rule_t _impl_cairo_get_fill_rule(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_fill_rule(cr);
}

double _impl_cairo_get_line_width(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_line_width(cr);
}

cairo_bool_t _impl_cairo_get_hairline(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_hairline(cr);
}

cairo_line_cap_t _impl_cairo_get_line_cap(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_line_cap(cr);
}

cairo_line_join_t _impl_cairo_get_line_join(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_line_join(cr);
}

double _impl_cairo_get_miter_limit(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_miter_limit(cr);
}

int _impl_cairo_get_dash_count(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_dash_count(cr);
}

void _impl_cairo_get_dash(struct CairoIFace *Self, cairo_t * cr, double * dashes, double * offset) {
	cairo_get_dash(cr,dashes,offset);
}

void _impl_cairo_get_matrix(struct CairoIFace *Self, cairo_t * cr, cairo_matrix_t * matrix) {
	cairo_get_matrix(cr,matrix);
}

cairo_surface_t * _impl_cairo_get_target(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_target(cr);
}

cairo_surface_t * _impl_cairo_get_group_target(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_get_group_target(cr);
}

cairo_path_t * _impl_cairo_copy_path(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_copy_path(cr);
}

cairo_path_t * _impl_cairo_copy_path_flat(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_copy_path_flat(cr);
}

void _impl_cairo_append_path(struct CairoIFace *Self, cairo_t * cr, const cairo_path_t * path) {
	cairo_append_path(cr,path);
}

void _impl_cairo_path_destroy(struct CairoIFace *Self, cairo_path_t * path) {
	cairo_path_destroy(path);
}

cairo_status_t _impl_cairo_status(struct CairoIFace *Self, cairo_t * cr) {
	return cairo_status(cr);
}

const char * _impl_cairo_status_to_string(struct CairoIFace *Self, cairo_status_t status) {
	return cairo_status_to_string(status);
}

cairo_device_t * _impl_cairo_device_reference(struct CairoIFace *Self, cairo_device_t * device) {
	return cairo_device_reference(device);
}

cairo_device_type_t _impl_cairo_device_get_type(struct CairoIFace *Self, cairo_device_t * device) {
	return cairo_device_get_type(device);
}

cairo_status_t _impl_cairo_device_status(struct CairoIFace *Self, cairo_device_t * device) {
	return cairo_device_status(device);
}

cairo_status_t _impl_cairo_device_acquire(struct CairoIFace *Self, cairo_device_t * device) {
	return cairo_device_acquire(device);
}

void _impl_cairo_device_release(struct CairoIFace *Self, cairo_device_t * device) {
	cairo_device_release(device);
}

void _impl_cairo_device_flush(struct CairoIFace *Self, cairo_device_t * device) {
	cairo_device_flush(device);
}

void _impl_cairo_device_finish(struct CairoIFace *Self, cairo_device_t * device) {
	cairo_device_finish(device);
}

void _impl_cairo_device_destroy(struct CairoIFace *Self, cairo_device_t * device) {
	cairo_device_destroy(device);
}

unsigned int _impl_cairo_device_get_reference_count(struct CairoIFace *Self, cairo_device_t * device) {
	return cairo_device_get_reference_count(device);
}

void * _impl_cairo_device_get_user_data(struct CairoIFace *Self, cairo_device_t * device, const cairo_user_data_key_t * key) {
	return cairo_device_get_user_data(device,key);
}

cairo_status_t _impl_cairo_device_set_user_data(struct CairoIFace *Self, cairo_device_t * device, const cairo_user_data_key_t * key, void * user_data, cairo_destroy_func_t destroy) {
	return cairo_device_set_user_data(device,key,user_data,destroy);
}

cairo_surface_t * _impl_cairo_surface_create_similar(struct CairoIFace *Self, cairo_surface_t * other, cairo_content_t content, int width, int height) {
	return cairo_surface_create_similar(other,content,width,height);
}

cairo_surface_t * _impl_cairo_surface_create_similar_image(struct CairoIFace *Self, cairo_surface_t * other, cairo_format_t format, int width, int height) {
	return cairo_surface_create_similar_image(other,format,width,height);
}

cairo_surface_t * _impl_cairo_surface_map_to_image(struct CairoIFace *Self, cairo_surface_t * surface, const cairo_rectangle_int_t * extents) {
	return cairo_surface_map_to_image(surface,extents);
}

void _impl_cairo_surface_unmap_image(struct CairoIFace *Self, cairo_surface_t * surface, cairo_surface_t * image) {
	cairo_surface_unmap_image(surface,image);
}

cairo_surface_t * _impl_cairo_surface_create_for_rectangle(struct CairoIFace *Self, cairo_surface_t * target, double x, double y, double width, double height) {
	return cairo_surface_create_for_rectangle(target,x,y,width,height);
}

cairo_surface_t * _impl_cairo_surface_create_observer(struct CairoIFace *Self, cairo_surface_t * target, cairo_surface_observer_mode_t mode) {
	return cairo_surface_create_observer(target,mode);
}

cairo_status_t _impl_cairo_surface_observer_add_paint_callback(struct CairoIFace *Self, cairo_surface_t * abstract_surface, cairo_surface_observer_callback_t func, void * data) {
	return cairo_surface_observer_add_paint_callback(abstract_surface,func,data);
}

cairo_status_t _impl_cairo_surface_observer_add_mask_callback(struct CairoIFace *Self, cairo_surface_t * abstract_surface, cairo_surface_observer_callback_t func, void * data) {
	return cairo_surface_observer_add_mask_callback(abstract_surface,func,data);
}

cairo_status_t _impl_cairo_surface_observer_add_fill_callback(struct CairoIFace *Self, cairo_surface_t * abstract_surface, cairo_surface_observer_callback_t func, void * data) {
	return cairo_surface_observer_add_fill_callback(abstract_surface,func,data);
}

cairo_status_t _impl_cairo_surface_observer_add_stroke_callback(struct CairoIFace *Self, cairo_surface_t * abstract_surface, cairo_surface_observer_callback_t func, void * data) {
	return cairo_surface_observer_add_stroke_callback(abstract_surface,func,data);
}

cairo_status_t _impl_cairo_surface_observer_add_glyphs_callback(struct CairoIFace *Self, cairo_surface_t * abstract_surface, cairo_surface_observer_callback_t func, void * data) {
	return cairo_surface_observer_add_glyphs_callback(abstract_surface,func,data);
}

cairo_status_t _impl_cairo_surface_observer_add_flush_callback(struct CairoIFace *Self, cairo_surface_t * abstract_surface, cairo_surface_observer_callback_t func, void * data) {
	return cairo_surface_observer_add_flush_callback(abstract_surface,func,data);
}

cairo_status_t _impl_cairo_surface_observer_add_finish_callback(struct CairoIFace *Self, cairo_surface_t * abstract_surface, cairo_surface_observer_callback_t func, void * data) {
	return cairo_surface_observer_add_finish_callback(abstract_surface,func,data);
}

cairo_status_t _impl_cairo_surface_observer_print(struct CairoIFace *Self, cairo_surface_t * abstract_surface, cairo_write_func_t write_func, void * closure) {
	return cairo_surface_observer_print(abstract_surface,write_func,closure);
}

double _impl_cairo_surface_observer_elapsed(struct CairoIFace *Self, cairo_surface_t * abstract_surface) {
	return cairo_surface_observer_elapsed(abstract_surface);
}

cairo_status_t _impl_cairo_device_observer_print(struct CairoIFace *Self, cairo_device_t * abstract_device, cairo_write_func_t write_func, void * closure) {
	return cairo_device_observer_print(abstract_device,write_func,closure);
}

double _impl_cairo_device_observer_elapsed(struct CairoIFace *Self, cairo_device_t * abstract_device) {
	return cairo_device_observer_elapsed(abstract_device);
}

double _impl_cairo_device_observer_paint_elapsed(struct CairoIFace *Self, cairo_device_t * abstract_device) {
	return cairo_device_observer_paint_elapsed(abstract_device);
}

double _impl_cairo_device_observer_mask_elapsed(struct CairoIFace *Self, cairo_device_t * abstract_device) {
	return cairo_device_observer_mask_elapsed(abstract_device);
}

double _impl_cairo_device_observer_fill_elapsed(struct CairoIFace *Self, cairo_device_t * abstract_device) {
	return cairo_device_observer_fill_elapsed(abstract_device);
}

double _impl_cairo_device_observer_stroke_elapsed(struct CairoIFace *Self, cairo_device_t * abstract_device) {
	return cairo_device_observer_stroke_elapsed(abstract_device);
}

double _impl_cairo_device_observer_glyphs_elapsed(struct CairoIFace *Self, cairo_device_t * abstract_device) {
	return cairo_device_observer_glyphs_elapsed(abstract_device);
}

cairo_surface_t * _impl_cairo_surface_reference(struct CairoIFace *Self, cairo_surface_t * surface) {
	return cairo_surface_reference(surface);
}

void _impl_cairo_surface_finish(struct CairoIFace *Self, cairo_surface_t * surface) {
	cairo_surface_finish(surface);
}

void _impl_cairo_surface_destroy(struct CairoIFace *Self, cairo_surface_t * surface) {
	cairo_surface_destroy(surface);
}

cairo_device_t * _impl_cairo_surface_get_device(struct CairoIFace *Self, cairo_surface_t * surface) {
	return cairo_surface_get_device(surface);
}

unsigned int _impl_cairo_surface_get_reference_count(struct CairoIFace *Self, cairo_surface_t * surface) {
	return cairo_surface_get_reference_count(surface);
}

cairo_status_t _impl_cairo_surface_status(struct CairoIFace *Self, cairo_surface_t * surface) {
	return cairo_surface_status(surface);
}

cairo_surface_type_t _impl_cairo_surface_get_type(struct CairoIFace *Self, cairo_surface_t * surface) {
	return cairo_surface_get_type(surface);
}

cairo_content_t _impl_cairo_surface_get_content(struct CairoIFace *Self, cairo_surface_t * surface) {
	return cairo_surface_get_content(surface);
}

cairo_status_t _impl_cairo_surface_write_to_png(struct CairoIFace *Self, cairo_surface_t * surface, const char * filename) {
	return cairo_surface_write_to_png(surface,filename);
}

cairo_status_t _impl_cairo_surface_write_to_png_stream(struct CairoIFace *Self, cairo_surface_t * surface, cairo_write_func_t write_func, void * closure) {
	return cairo_surface_write_to_png_stream(surface,write_func,closure);
}

void * _impl_cairo_surface_get_user_data(struct CairoIFace *Self, cairo_surface_t * surface, const cairo_user_data_key_t * key) {
	return cairo_surface_get_user_data(surface,key);
}

cairo_status_t _impl_cairo_surface_set_user_data(struct CairoIFace *Self, cairo_surface_t * surface, const cairo_user_data_key_t * key, void * user_data, cairo_destroy_func_t destroy) {
	return cairo_surface_set_user_data(surface,key,user_data,destroy);
}

void _impl_cairo_surface_get_mime_data(struct CairoIFace *Self, cairo_surface_t * surface, const char * mime_type, const unsigned char * *data, unsigned long * length) {
	cairo_surface_get_mime_data(surface,mime_type,data,length);
}

cairo_status_t _impl_cairo_surface_set_mime_data(struct CairoIFace *Self, cairo_surface_t * surface, const char * mime_type, const unsigned char * data, unsigned long length, cairo_destroy_func_t destroy, void * closure) {
	return cairo_surface_set_mime_data(surface,mime_type,data,length,destroy,closure);
}

cairo_bool_t _impl_cairo_surface_supports_mime_type(struct CairoIFace *Self, cairo_surface_t * surface, const char * mime_type) {
	return cairo_surface_supports_mime_type(surface,mime_type);
}

void _impl_cairo_surface_get_font_options(struct CairoIFace *Self, cairo_surface_t * surface, cairo_font_options_t * options) {
	cairo_surface_get_font_options(surface,options);
}

void _impl_cairo_surface_flush(struct CairoIFace *Self, cairo_surface_t * surface) {
	cairo_surface_flush(surface);
}

void _impl_cairo_surface_mark_dirty(struct CairoIFace *Self, cairo_surface_t * surface) {
	cairo_surface_mark_dirty(surface);
}

void _impl_cairo_surface_mark_dirty_rectangle(struct CairoIFace *Self, cairo_surface_t * surface, int x, int y, int width, int height) {
	cairo_surface_mark_dirty_rectangle(surface,x,y,width,height);
}

void _impl_cairo_surface_set_device_scale(struct CairoIFace *Self, cairo_surface_t * surface, double x_scale, double y_scale) {
	cairo_surface_set_device_scale(surface,x_scale,y_scale);
}

void _impl_cairo_surface_get_device_scale(struct CairoIFace *Self, cairo_surface_t * surface, double * x_scale, double * y_scale) {
	cairo_surface_get_device_scale(surface,x_scale,y_scale);
}

void _impl_cairo_surface_set_device_offset(struct CairoIFace *Self, cairo_surface_t * surface, double x_offset, double y_offset) {
	cairo_surface_set_device_offset(surface,x_offset,y_offset);
}

void _impl_cairo_surface_get_device_offset(struct CairoIFace *Self, cairo_surface_t * surface, double * x_offset, double * y_offset) {
	cairo_surface_get_device_offset(surface,x_offset,y_offset);
}

void _impl_cairo_surface_set_fallback_resolution(struct CairoIFace *Self, cairo_surface_t * surface, double x_pixels_per_inch, double y_pixels_per_inch) {
	cairo_surface_set_fallback_resolution(surface,x_pixels_per_inch,y_pixels_per_inch);
}

void _impl_cairo_surface_get_fallback_resolution(struct CairoIFace *Self, cairo_surface_t * surface, double * x_pixels_per_inch, double * y_pixels_per_inch) {
	cairo_surface_get_fallback_resolution(surface,x_pixels_per_inch,y_pixels_per_inch);
}

void _impl_cairo_surface_copy_page(struct CairoIFace *Self, cairo_surface_t * surface) {
	cairo_surface_copy_page(surface);
}

void _impl_cairo_surface_show_page(struct CairoIFace *Self, cairo_surface_t * surface) {
	cairo_surface_show_page(surface);
}

cairo_bool_t _impl_cairo_surface_has_show_text_glyphs(struct CairoIFace *Self, cairo_surface_t * surface) {
	return cairo_surface_has_show_text_glyphs(surface);
}

cairo_surface_t * _impl_cairo_image_surface_create(struct CairoIFace *Self, cairo_format_t format, int width, int height) {
	return cairo_image_surface_create(format,width,height);
}

int _impl_cairo_format_stride_for_width(struct CairoIFace *Self, cairo_format_t format, int width) {
	return cairo_format_stride_for_width(format,width);
}

cairo_surface_t * _impl_cairo_image_surface_create_for_data(struct CairoIFace *Self, unsigned char * data, cairo_format_t format, int width, int height, int stride) {
	return cairo_image_surface_create_for_data(data,format,width,height,stride);
}

unsigned char * _impl_cairo_image_surface_get_data(struct CairoIFace *Self, cairo_surface_t * surface) {
	return cairo_image_surface_get_data(surface);
}

cairo_format_t _impl_cairo_image_surface_get_format(struct CairoIFace *Self, cairo_surface_t * surface) {
	return cairo_image_surface_get_format(surface);
}

int _impl_cairo_image_surface_get_width(struct CairoIFace *Self, cairo_surface_t * surface) {
	return cairo_image_surface_get_width(surface);
}

int _impl_cairo_image_surface_get_height(struct CairoIFace *Self, cairo_surface_t * surface) {
	return cairo_image_surface_get_height(surface);
}

int _impl_cairo_image_surface_get_stride(struct CairoIFace *Self, cairo_surface_t * surface) {
	return cairo_image_surface_get_stride(surface);
}

cairo_surface_t * _impl_cairo_image_surface_create_from_png(struct CairoIFace *Self, const char * filename) {
	return cairo_image_surface_create_from_png(filename);
}

cairo_surface_t * _impl_cairo_image_surface_create_from_png_stream(struct CairoIFace *Self, cairo_read_func_t read_func, void * closure) {
	return cairo_image_surface_create_from_png_stream(read_func,closure);
}

cairo_surface_t * _impl_cairo_recording_surface_create(struct CairoIFace *Self, cairo_content_t content, const cairo_rectangle_t * extents) {
	return cairo_recording_surface_create(content,extents);
}

void _impl_cairo_recording_surface_ink_extents(struct CairoIFace *Self, cairo_surface_t * surface, double * x0, double * y0, double * width, double * height) {
	cairo_recording_surface_ink_extents(surface,x0,y0,width,height);
}

cairo_bool_t _impl_cairo_recording_surface_get_extents(struct CairoIFace *Self, cairo_surface_t * surface, cairo_rectangle_t * extents) {
	return cairo_recording_surface_get_extents(surface,extents);
}

cairo_pattern_t * _impl_cairo_pattern_create_raster_source(struct CairoIFace *Self, void * user_data, cairo_content_t content, int width, int height) {
	return cairo_pattern_create_raster_source(user_data,content,width,height);
}

void _impl_cairo_raster_source_pattern_set_callback_data(struct CairoIFace *Self, cairo_pattern_t * pattern, void * data) {
	cairo_raster_source_pattern_set_callback_data(pattern,data);
}

void * _impl_cairo_raster_source_pattern_get_callback_data(struct CairoIFace *Self, cairo_pattern_t * pattern) {
	return cairo_raster_source_pattern_get_callback_data(pattern);
}

void _impl_cairo_raster_source_pattern_set_acquire(struct CairoIFace *Self, cairo_pattern_t * pattern, cairo_raster_source_acquire_func_t acquire, cairo_raster_source_release_func_t release) {
	cairo_raster_source_pattern_set_acquire(pattern,acquire,release);
}

void _impl_cairo_raster_source_pattern_get_acquire(struct CairoIFace *Self, cairo_pattern_t * pattern, cairo_raster_source_acquire_func_t * acquire, cairo_raster_source_release_func_t * release) {
	cairo_raster_source_pattern_get_acquire(pattern,acquire,release);
}

void _impl_cairo_raster_source_pattern_set_snapshot(struct CairoIFace *Self, cairo_pattern_t * pattern, cairo_raster_source_snapshot_func_t snapshot) {
	cairo_raster_source_pattern_set_snapshot(pattern,snapshot);
}

cairo_raster_source_snapshot_func_t _impl_cairo_raster_source_pattern_get_snapshot(struct CairoIFace *Self, cairo_pattern_t * pattern) {
	return cairo_raster_source_pattern_get_snapshot(pattern);
}

void _impl_cairo_raster_source_pattern_set_copy(struct CairoIFace *Self, cairo_pattern_t * pattern, cairo_raster_source_copy_func_t copy) {
	cairo_raster_source_pattern_set_copy(pattern,copy);
}

cairo_raster_source_copy_func_t _impl_cairo_raster_source_pattern_get_copy(struct CairoIFace *Self, cairo_pattern_t * pattern) {
	return cairo_raster_source_pattern_get_copy(pattern);
}

void _impl_cairo_raster_source_pattern_set_finish(struct CairoIFace *Self, cairo_pattern_t * pattern, cairo_raster_source_finish_func_t finish) {
	cairo_raster_source_pattern_set_finish(pattern,finish);
}

cairo_raster_source_finish_func_t _impl_cairo_raster_source_pattern_get_finish(struct CairoIFace *Self, cairo_pattern_t * pattern) {
	return cairo_raster_source_pattern_get_finish(pattern);
}

cairo_pattern_t * _impl_cairo_pattern_create_rgb(struct CairoIFace *Self, double red, double green, double blue) {
	return cairo_pattern_create_rgb(red,green,blue);
}

cairo_pattern_t * _impl_cairo_pattern_create_rgba(struct CairoIFace *Self, double red, double green, double blue, double alpha) {
	return cairo_pattern_create_rgba(red,green,blue,alpha);
}

cairo_pattern_t * _impl_cairo_pattern_create_for_surface(struct CairoIFace *Self, cairo_surface_t * surface) {
	return cairo_pattern_create_for_surface(surface);
}

cairo_pattern_t * _impl_cairo_pattern_create_linear(struct CairoIFace *Self, double x0, double y0, double x1, double y1) {
	return cairo_pattern_create_linear(x0,y0,x1,y1);
}

cairo_pattern_t * _impl_cairo_pattern_create_radial(struct CairoIFace *Self, double cx0, double cy0, double radius0, double cx1, double cy1, double radius1) {
	return cairo_pattern_create_radial(cx0,cy0,radius0,cx1,cy1,radius1);
}

cairo_pattern_t * _impl_cairo_pattern_create_mesh(struct CairoIFace *Self) {
	return cairo_pattern_create_mesh();
}

cairo_pattern_t * _impl_cairo_pattern_reference(struct CairoIFace *Self, cairo_pattern_t * pattern) {
	return cairo_pattern_reference(pattern);
}

void _impl_cairo_pattern_destroy(struct CairoIFace *Self, cairo_pattern_t * pattern) {
	cairo_pattern_destroy(pattern);
}

unsigned int _impl_cairo_pattern_get_reference_count(struct CairoIFace *Self, cairo_pattern_t * pattern) {
	return cairo_pattern_get_reference_count(pattern);
}

cairo_status_t _impl_cairo_pattern_status(struct CairoIFace *Self, cairo_pattern_t * pattern) {
	return cairo_pattern_status(pattern);
}

void * _impl_cairo_pattern_get_user_data(struct CairoIFace *Self, cairo_pattern_t * pattern, const cairo_user_data_key_t * key) {
	return cairo_pattern_get_user_data(pattern,key);
}

cairo_status_t _impl_cairo_pattern_set_user_data(struct CairoIFace *Self, cairo_pattern_t * pattern, const cairo_user_data_key_t * key, void * user_data, cairo_destroy_func_t destroy) {
	return cairo_pattern_set_user_data(pattern,key,user_data,destroy);
}

cairo_pattern_type_t _impl_cairo_pattern_get_type(struct CairoIFace *Self, cairo_pattern_t * pattern) {
	return cairo_pattern_get_type(pattern);
}

void _impl_cairo_pattern_add_color_stop_rgb(struct CairoIFace *Self, cairo_pattern_t * pattern, double offset, double red, double green, double blue) {
	cairo_pattern_add_color_stop_rgb(pattern,offset,red,green,blue);
}

void _impl_cairo_pattern_add_color_stop_rgba(struct CairoIFace *Self, cairo_pattern_t * pattern, double offset, double red, double green, double blue, double alpha) {
	cairo_pattern_add_color_stop_rgba(pattern,offset,red,green,blue,alpha);
}

void _impl_cairo_mesh_pattern_begin_patch(struct CairoIFace *Self, cairo_pattern_t * pattern) {
	cairo_mesh_pattern_begin_patch(pattern);
}

void _impl_cairo_mesh_pattern_end_patch(struct CairoIFace *Self, cairo_pattern_t * pattern) {
	cairo_mesh_pattern_end_patch(pattern);
}

void _impl_cairo_mesh_pattern_curve_to(struct CairoIFace *Self, cairo_pattern_t * pattern, double x1, double y1, double x2, double y2, double x3, double y3) {
	cairo_mesh_pattern_curve_to(pattern,x1,y1,x2,y2,x3,y3);
}

void _impl_cairo_mesh_pattern_line_to(struct CairoIFace *Self, cairo_pattern_t * pattern, double x, double y) {
	cairo_mesh_pattern_line_to(pattern,x,y);
}

void _impl_cairo_mesh_pattern_move_to(struct CairoIFace *Self, cairo_pattern_t * pattern, double x, double y) {
	cairo_mesh_pattern_move_to(pattern,x,y);
}

void _impl_cairo_mesh_pattern_set_control_point(struct CairoIFace *Self, cairo_pattern_t * pattern, unsigned int point_num, double x, double y) {
	cairo_mesh_pattern_set_control_point(pattern,point_num,x,y);
}

void _impl_cairo_mesh_pattern_set_corner_color_rgb(struct CairoIFace *Self, cairo_pattern_t * pattern, unsigned int corner_num, double red, double green, double blue) {
	cairo_mesh_pattern_set_corner_color_rgb(pattern,corner_num,red,green,blue);
}

void _impl_cairo_mesh_pattern_set_corner_color_rgba(struct CairoIFace *Self, cairo_pattern_t * pattern, unsigned int corner_num, double red, double green, double blue, double alpha) {
	cairo_mesh_pattern_set_corner_color_rgba(pattern,corner_num,red,green,blue,alpha);
}

void _impl_cairo_pattern_set_matrix(struct CairoIFace *Self, cairo_pattern_t * pattern, const cairo_matrix_t * matrix) {
	cairo_pattern_set_matrix(pattern,matrix);
}

void _impl_cairo_pattern_get_matrix(struct CairoIFace *Self, cairo_pattern_t * pattern, cairo_matrix_t * matrix) {
	cairo_pattern_get_matrix(pattern,matrix);
}

void _impl_cairo_pattern_set_extend(struct CairoIFace *Self, cairo_pattern_t * pattern, cairo_extend_t extend) {
	cairo_pattern_set_extend(pattern,extend);
}

cairo_extend_t _impl_cairo_pattern_get_extend(struct CairoIFace *Self, cairo_pattern_t * pattern) {
	return cairo_pattern_get_extend(pattern);
}

void _impl_cairo_pattern_set_filter(struct CairoIFace *Self, cairo_pattern_t * pattern, cairo_filter_t filter) {
	cairo_pattern_set_filter(pattern,filter);
}

cairo_filter_t _impl_cairo_pattern_get_filter(struct CairoIFace *Self, cairo_pattern_t * pattern) {
	return cairo_pattern_get_filter(pattern);
}

cairo_status_t _impl_cairo_pattern_get_rgba(struct CairoIFace *Self, cairo_pattern_t * pattern, double * red, double * green, double * blue, double * alpha) {
	return cairo_pattern_get_rgba(pattern,red,green,blue,alpha);
}

cairo_status_t _impl_cairo_pattern_get_surface(struct CairoIFace *Self, cairo_pattern_t * pattern, cairo_surface_t * *surface) {
	return cairo_pattern_get_surface(pattern,surface);
}

cairo_status_t _impl_cairo_pattern_get_color_stop_rgba(struct CairoIFace *Self, cairo_pattern_t * pattern, int index, double * offset, double * red, double * green, double * blue, double * alpha) {
	return cairo_pattern_get_color_stop_rgba(pattern,index,offset,red,green,blue,alpha);
}

cairo_status_t _impl_cairo_pattern_get_color_stop_count(struct CairoIFace *Self, cairo_pattern_t * pattern, int * count) {
	return cairo_pattern_get_color_stop_count(pattern,count);
}

cairo_status_t _impl_cairo_pattern_get_linear_points(struct CairoIFace *Self, cairo_pattern_t * pattern, double * x0, double * y0, double * x1, double * y1) {
	return cairo_pattern_get_linear_points(pattern,x0,y0,x1,y1);
}

cairo_status_t _impl_cairo_pattern_get_radial_circles(struct CairoIFace *Self, cairo_pattern_t * pattern, double * x0, double * y0, double * r0, double * x1, double * y1, double * r1) {
	return cairo_pattern_get_radial_circles(pattern,x0,y0,r0,x1,y1,r1);
}

cairo_status_t _impl_cairo_mesh_pattern_get_patch_count(struct CairoIFace *Self, cairo_pattern_t * pattern, unsigned int * count) {
	return cairo_mesh_pattern_get_patch_count(pattern,count);
}

cairo_path_t * _impl_cairo_mesh_pattern_get_path(struct CairoIFace *Self, cairo_pattern_t * pattern, unsigned int patch_num) {
	return cairo_mesh_pattern_get_path(pattern,patch_num);
}

cairo_status_t _impl_cairo_mesh_pattern_get_corner_color_rgba(struct CairoIFace *Self, cairo_pattern_t * pattern, unsigned int patch_num, unsigned int corner_num, double * red, double * green, double * blue, double * alpha) {
	return cairo_mesh_pattern_get_corner_color_rgba(pattern,patch_num,corner_num,red,green,blue,alpha);
}

cairo_status_t _impl_cairo_mesh_pattern_get_control_point(struct CairoIFace *Self, cairo_pattern_t * pattern, unsigned int patch_num, unsigned int point_num, double * x, double * y) {
	return cairo_mesh_pattern_get_control_point(pattern,patch_num,point_num,x,y);
}

void _impl_cairo_matrix_init(struct CairoIFace *Self, cairo_matrix_t * matrix, double xx, double yx, double xy, double yy, double x0, double y0) {
	cairo_matrix_init(matrix,xx,yx,xy,yy,x0,y0);
}

void _impl_cairo_matrix_init_identity(struct CairoIFace *Self, cairo_matrix_t * matrix) {
	cairo_matrix_init_identity(matrix);
}

void _impl_cairo_matrix_init_translate(struct CairoIFace *Self, cairo_matrix_t * matrix, double tx, double ty) {
	cairo_matrix_init_translate(matrix,tx,ty);
}

void _impl_cairo_matrix_init_scale(struct CairoIFace *Self, cairo_matrix_t * matrix, double sx, double sy) {
	cairo_matrix_init_scale(matrix,sx,sy);
}

void _impl_cairo_matrix_init_rotate(struct CairoIFace *Self, cairo_matrix_t * matrix, double radians) {
	cairo_matrix_init_rotate(matrix,radians);
}

void _impl_cairo_matrix_translate(struct CairoIFace *Self, cairo_matrix_t * matrix, double tx, double ty) {
	cairo_matrix_translate(matrix,tx,ty);
}

void _impl_cairo_matrix_scale(struct CairoIFace *Self, cairo_matrix_t * matrix, double sx, double sy) {
	cairo_matrix_scale(matrix,sx,sy);
}

void _impl_cairo_matrix_rotate(struct CairoIFace *Self, cairo_matrix_t * matrix, double radians) {
	cairo_matrix_rotate(matrix,radians);
}

cairo_status_t _impl_cairo_matrix_invert(struct CairoIFace *Self, cairo_matrix_t * matrix) {
	return cairo_matrix_invert(matrix);
}

void _impl_cairo_matrix_multiply(struct CairoIFace *Self, cairo_matrix_t * result, const cairo_matrix_t * a, const cairo_matrix_t * b) {
	cairo_matrix_multiply(result,a,b);
}

void _impl_cairo_matrix_transform_distance(struct CairoIFace *Self, const cairo_matrix_t * matrix, double * dx, double * dy) {
	cairo_matrix_transform_distance(matrix,dx,dy);
}

void _impl_cairo_matrix_transform_point(struct CairoIFace *Self, const cairo_matrix_t * matrix, double * x, double * y) {
	cairo_matrix_transform_point(matrix,x,y);
}

cairo_region_t * _impl_cairo_region_create(struct CairoIFace *Self) {
	return cairo_region_create();
}

cairo_region_t * _impl_cairo_region_create_rectangle(struct CairoIFace *Self, const cairo_rectangle_int_t * rectangle) {
	return cairo_region_create_rectangle(rectangle);
}

cairo_region_t * _impl_cairo_region_create_rectangles(struct CairoIFace *Self, const cairo_rectangle_int_t * rects, int count) {
	return cairo_region_create_rectangles(rects,count);
}

cairo_region_t * _impl_cairo_region_copy(struct CairoIFace *Self, const cairo_region_t * original) {
	return cairo_region_copy(original);
}

cairo_region_t * _impl_cairo_region_reference(struct CairoIFace *Self, cairo_region_t * region) {
	return cairo_region_reference(region);
}

void _impl_cairo_region_destroy(struct CairoIFace *Self, cairo_region_t * region) {
	cairo_region_destroy(region);
}

cairo_bool_t _impl_cairo_region_equal(struct CairoIFace *Self, const cairo_region_t * a, const cairo_region_t * b) {
	return cairo_region_equal(a,b);
}

cairo_status_t _impl_cairo_region_status(struct CairoIFace *Self, const cairo_region_t * region) {
	return cairo_region_status(region);
}

void _impl_cairo_region_get_extents(struct CairoIFace *Self, const cairo_region_t * region, cairo_rectangle_int_t * extents) {
	cairo_region_get_extents(region,extents);
}

int _impl_cairo_region_num_rectangles(struct CairoIFace *Self, const cairo_region_t * region) {
	return cairo_region_num_rectangles(region);
}

void _impl_cairo_region_get_rectangle(struct CairoIFace *Self, const cairo_region_t * region, int nth, cairo_rectangle_int_t * rectangle) {
	cairo_region_get_rectangle(region,nth,rectangle);
}

cairo_bool_t _impl_cairo_region_is_empty(struct CairoIFace *Self, const cairo_region_t * region) {
	return cairo_region_is_empty(region);
}

cairo_region_overlap_t _impl_cairo_region_contains_rectangle(struct CairoIFace *Self, const cairo_region_t * region, const cairo_rectangle_int_t * rectangle) {
	return cairo_region_contains_rectangle(region,rectangle);
}

cairo_bool_t _impl_cairo_region_contains_point(struct CairoIFace *Self, const cairo_region_t * region, int x, int y) {
	return cairo_region_contains_point(region,x,y);
}

void _impl_cairo_region_translate(struct CairoIFace *Self, cairo_region_t * region, int dx, int dy) {
	cairo_region_translate(region,dx,dy);
}

cairo_status_t _impl_cairo_region_subtract(struct CairoIFace *Self, cairo_region_t * dst, const cairo_region_t * other) {
	return cairo_region_subtract(dst,other);
}

cairo_status_t _impl_cairo_region_subtract_rectangle(struct CairoIFace *Self, cairo_region_t * dst, const cairo_rectangle_int_t * rectangle) {
	return cairo_region_subtract_rectangle(dst,rectangle);
}

cairo_status_t _impl_cairo_region_intersect(struct CairoIFace *Self, cairo_region_t * dst, const cairo_region_t * other) {
	return cairo_region_intersect(dst,other);
}

cairo_status_t _impl_cairo_region_intersect_rectangle(struct CairoIFace *Self, cairo_region_t * dst, const cairo_rectangle_int_t * rectangle) {
	return cairo_region_intersect_rectangle(dst,rectangle);
}

cairo_status_t _impl_cairo_region_union(struct CairoIFace *Self, cairo_region_t * dst, const cairo_region_t * other) {
	return cairo_region_union(dst,other);
}

cairo_status_t _impl_cairo_region_union_rectangle(struct CairoIFace *Self, cairo_region_t * dst, const cairo_rectangle_int_t * rectangle) {
	return cairo_region_union_rectangle(dst,rectangle);
}

cairo_status_t _impl_cairo_region_xor(struct CairoIFace *Self, cairo_region_t * dst, const cairo_region_t * other) {
	return cairo_region_xor(dst,other);
}

cairo_status_t _impl_cairo_region_xor_rectangle(struct CairoIFace *Self, cairo_region_t * dst, const cairo_rectangle_int_t * rectangle) {
	return cairo_region_xor_rectangle(dst,rectangle);
}

void _impl_cairo_debug_reset_static_data(struct CairoIFace *Self) {
	cairo_debug_reset_static_data();
}

cairo_surface_t * _impl_cairo_ps_surface_create(struct CairoIFace *Self, const char * filename, double width_in_points, double height_in_points) {
	return cairo_ps_surface_create(filename,width_in_points,height_in_points);
}

cairo_surface_t * _impl_cairo_ps_surface_create_for_stream(struct CairoIFace *Self, cairo_write_func_t write_func, void * closure, double width_in_points, double height_in_points) {
	return cairo_ps_surface_create_for_stream(write_func,closure,width_in_points,height_in_points);
}

void _impl_cairo_ps_surface_restrict_to_level(struct CairoIFace *Self, cairo_surface_t * surface, cairo_ps_level_t level) {
	cairo_ps_surface_restrict_to_level(surface,level);
}

void _impl_cairo_ps_get_levels(struct CairoIFace *Self, cairo_ps_level_t const * *levels, int * num_levels) {
	cairo_ps_get_levels(levels,num_levels);
}

const char * _impl_cairo_ps_level_to_string(struct CairoIFace *Self, cairo_ps_level_t level) {
	return cairo_ps_level_to_string(level);
}

void _impl_cairo_ps_surface_set_eps(struct CairoIFace *Self, cairo_surface_t * surface, cairo_bool_t eps) {
	cairo_ps_surface_set_eps(surface,eps);
}

cairo_bool_t _impl_cairo_ps_surface_get_eps(struct CairoIFace *Self, cairo_surface_t * surface) {
	return cairo_ps_surface_get_eps(surface);
}

void _impl_cairo_ps_surface_set_size(struct CairoIFace *Self, cairo_surface_t * surface, double width_in_points, double height_in_points) {
	cairo_ps_surface_set_size(surface,width_in_points,height_in_points);
}

void _impl_cairo_ps_surface_dsc_comment(struct CairoIFace *Self, cairo_surface_t * surface, const char * comment) {
	cairo_ps_surface_dsc_comment(surface,comment);
}

void _impl_cairo_ps_surface_dsc_begin_setup(struct CairoIFace *Self, cairo_surface_t * surface) {
	cairo_ps_surface_dsc_begin_setup(surface);
}

void _impl_cairo_ps_surface_dsc_begin_page_setup(struct CairoIFace *Self, cairo_surface_t * surface) {
	cairo_ps_surface_dsc_begin_page_setup(surface);
}

cairo_svg_unit_t _impl_cairo_svg_surface_get_document_unit(struct CairoIFace *, cairo_surface_t * surface) {
	cairo_svg_surface_get_document_unit(surface);
}