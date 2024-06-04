cairo_surface_t * cairo_tee_surface_create(cairo_surface_t * primary) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_tee_surface_create(primary);
}

void cairo_tee_surface_add(cairo_surface_t * abstract_surface, cairo_surface_t * target) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_tee_surface_add(abstract_surface,target);
}

void cairo_tee_surface_remove(cairo_surface_t * abstract_surface, cairo_surface_t * target) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_tee_surface_remove(abstract_surface,target);
}

cairo_surface_t * cairo_tee_surface_index(cairo_surface_t * abstract_surface, unsigned int index) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_tee_surface_index(abstract_surface,index);
}

cairo_font_face_t * cairo_ft_font_face_create_for_ft_face(FT_Face face, int load_flags) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_ft_font_face_create_for_ft_face(face,load_flags);
}

void cairo_ft_font_face_set_synthesize(cairo_font_face_t * font_face, unsigned int synth_flags) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_ft_font_face_set_synthesize(font_face,synth_flags);
}

void cairo_ft_font_face_unset_synthesize(cairo_font_face_t * font_face, unsigned int synth_flags) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_ft_font_face_unset_synthesize(font_face,synth_flags);
}

unsigned int cairo_ft_font_face_get_synthesize(cairo_font_face_t * font_face) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_ft_font_face_get_synthesize(font_face);
}

FT_Face cairo_ft_scaled_font_lock_face(cairo_scaled_font_t * scaled_font) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_ft_scaled_font_lock_face(scaled_font);
}

void cairo_ft_scaled_font_unlock_face(cairo_scaled_font_t * scaled_font) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_ft_scaled_font_unlock_face(scaled_font);
}

cairo_font_face_t * cairo_ft_font_face_create_for_pattern(FcPattern * pattern) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_ft_font_face_create_for_pattern(pattern);
}

void cairo_ft_font_options_substitute(const cairo_font_options_t * options, FcPattern * pattern) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_ft_font_options_substitute(options,pattern);
}

cairo_device_t * cairo_script_create(const char * filename) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_script_create(filename);
}

cairo_device_t * cairo_script_create_for_stream(cairo_write_func_t write_func, void * closure) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_script_create_for_stream(write_func,closure);
}

void cairo_script_write_comment(cairo_device_t * script, const char * comment, int len) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_script_write_comment(script,comment,len);
}

void cairo_script_set_mode(cairo_device_t * script, cairo_script_mode_t mode) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_script_set_mode(script,mode);
}

cairo_script_mode_t cairo_script_get_mode(cairo_device_t * script) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_script_get_mode(script);
}

cairo_surface_t * cairo_script_surface_create(cairo_device_t * script, cairo_content_t content, double width, double height) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_script_surface_create(script,content,width,height);
}

cairo_surface_t * cairo_script_surface_create_for_target(cairo_device_t * script, cairo_surface_t * target) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_script_surface_create_for_target(script,target);
}

cairo_status_t cairo_script_from_recording_surface(cairo_device_t * script, cairo_surface_t * recording_surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_script_from_recording_surface(script,recording_surface);
}

cairo_surface_t * cairo_amigaos_surface_create(struct BitMap * bitmap) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_amigaos_surface_create(bitmap);
}

cairo_surface_t * cairo_amigaos_surface_create_from_rastport(struct RastPort * rastport, int xoff, int yoff, int width, int height) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_amigaos_surface_create_from_rastport(rastport,xoff,yoff,width,height);
}

cairo_font_face_t * cairo_amigaos_font_face_create(const char * filename) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_amigaos_font_face_create(filename);
}

cairo_surface_t * cairo_svg_surface_create(const char * filename, double width_in_points, double height_in_points) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_svg_surface_create(filename,width_in_points,height_in_points);
}

cairo_surface_t * cairo_svg_surface_create_for_stream(cairo_write_func_t write_func, void * closure, double width_in_points, double height_in_points) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_svg_surface_create_for_stream(write_func,closure,width_in_points,height_in_points);
}

void cairo_svg_surface_restrict_to_version(cairo_surface_t * surface, cairo_svg_version_t version) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_svg_surface_restrict_to_version(surface,version);
}

void cairo_svg_get_versions(cairo_svg_version_t const * *versions, int * num_versions) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_svg_get_versions(versions,num_versions);
}

const char * cairo_svg_version_to_string(cairo_svg_version_t version) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_svg_version_to_string(version);
}

void cairo_svg_surface_set_document_unit(cairo_surface_t * surface, cairo_svg_unit_t unit) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_svg_surface_set_document_unit(surface,unit);
}

cairo_svg_unit_t cairo_svg_surface_get_document_unit(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_svg_surface_get_document_unit(surface);
}

cairo_surface_t * cairo_pdf_surface_create(const char * filename, double width_in_points, double height_in_points) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pdf_surface_create(filename,width_in_points,height_in_points);
}

cairo_surface_t * cairo_pdf_surface_create_for_stream(cairo_write_func_t write_func, void * closure, double width_in_points, double height_in_points) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pdf_surface_create_for_stream(write_func,closure,width_in_points,height_in_points);
}

void cairo_pdf_surface_restrict_to_version(cairo_surface_t * surface, cairo_pdf_version_t version) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pdf_surface_restrict_to_version(surface,version);
}

void cairo_pdf_get_versions(cairo_pdf_version_t const * *versions, int * num_versions) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pdf_get_versions(versions,num_versions);
}

const char * cairo_pdf_version_to_string(cairo_pdf_version_t version) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pdf_version_to_string(version);
}

void cairo_pdf_surface_set_size(cairo_surface_t * surface, double width_in_points, double height_in_points) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pdf_surface_set_size(surface,width_in_points,height_in_points);
}

int cairo_pdf_surface_add_outline(cairo_surface_t * surface, int parent_id, const char * utf8, const char * link_attribs, cairo_pdf_outline_flags_t flags) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pdf_surface_add_outline(surface,parent_id,utf8,link_attribs,flags);
}

void cairo_pdf_surface_set_metadata(cairo_surface_t * surface, cairo_pdf_metadata_t metadata, const char * utf8) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pdf_surface_set_metadata(surface,metadata,utf8);
}

void cairo_pdf_surface_set_custom_metadata(cairo_surface_t * surface, const char * name, const char * value) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pdf_surface_set_custom_metadata(surface,name,value);
}

void cairo_pdf_surface_set_page_label(cairo_surface_t * surface, const char * utf8) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pdf_surface_set_page_label(surface,utf8);
}

void cairo_pdf_surface_set_thumbnail_size(cairo_surface_t * surface, int width, int height) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pdf_surface_set_thumbnail_size(surface,width,height);
}

const char* cairo_version_string(struct CairoIFace *Self) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_version_string();
}

void cairo_pattern_set_dither(cairo_pattern_t * pattern, cairo_dither_t dither) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pattern_set_dither(pattern,dither);
}

cairo_dither_t cairo_pattern_get_dither(cairo_pattern_t * pattern) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_get_dither(pattern);
}

cairo_t * cairo_create(cairo_surface_t * target) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_create(target);
}

cairo_t * cairo_reference(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_reference(cr);
}

void cairo_destroy(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_destroy(cr);
}

unsigned int cairo_get_reference_count(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_reference_count(cr);
}

void * cairo_get_user_data(cairo_t * cr, const cairo_user_data_key_t * key) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_user_data(cr,key);
}

cairo_status_t cairo_set_user_data(cairo_t * cr, const cairo_user_data_key_t * key, void * user_data, cairo_destroy_func_t destroy) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_set_user_data(cr,key,user_data,destroy);
}

void cairo_save(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_save(cr);
}

void cairo_restore(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_restore(cr);
}

void cairo_push_group(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_push_group(cr);
}

void cairo_push_group_with_content(cairo_t * cr, cairo_content_t content) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_push_group_with_content(cr,content);
}

cairo_pattern_t * cairo_pop_group(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pop_group(cr);
}

void cairo_pop_group_to_source(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pop_group_to_source(cr);
}

void cairo_set_operator(cairo_t * cr, cairo_operator_t op) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_operator(cr,op);
}

void cairo_set_source(cairo_t * cr, cairo_pattern_t * source) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_source(cr,source);
}

void cairo_set_source_rgb(cairo_t * cr, double red, double green, double blue) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_source_rgb(cr,red,green,blue);
}

void cairo_set_source_rgba(cairo_t * cr, double red, double green, double blue, double alpha) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_source_rgba(cr,red,green,blue,alpha);
}

void cairo_set_source_surface(cairo_t * cr, cairo_surface_t * surface, double x, double y) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_source_surface(cr,surface,x,y);
}

void cairo_set_tolerance(cairo_t * cr, double tolerance) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_tolerance(cr,tolerance);
}

void cairo_set_antialias(cairo_t * cr, cairo_antialias_t antialias) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_antialias(cr,antialias);
}

void cairo_set_fill_rule(cairo_t * cr, cairo_fill_rule_t fill_rule) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_fill_rule(cr,fill_rule);
}

void cairo_set_line_width(cairo_t * cr, double width) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_line_width(cr,width);
}

void cairo_set_hairline(cairo_t * cr, cairo_bool_t set_hairline) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_hairline(cr,set_hairline);
}

void cairo_set_line_cap(cairo_t * cr, cairo_line_cap_t line_cap) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_line_cap(cr,line_cap);
}

void cairo_set_line_join(cairo_t * cr, cairo_line_join_t line_join) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_line_join(cr,line_join);
}

void cairo_set_dash(cairo_t * cr, const double * dashes, int num_dashes, double offset) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_dash(cr,dashes,num_dashes,offset);
}

void cairo_set_miter_limit(cairo_t * cr, double limit) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_miter_limit(cr,limit);
}

void cairo_translate(cairo_t * cr, double tx, double ty) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_translate(cr,tx,ty);
}

void cairo_scale(cairo_t * cr, double sx, double sy) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_scale(cr,sx,sy);
}

void cairo_rotate(cairo_t * cr, double angle) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_rotate(cr,angle);
}

void cairo_transform(cairo_t * cr, const cairo_matrix_t * matrix) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_transform(cr,matrix);
}

void cairo_set_matrix(cairo_t * cr, const cairo_matrix_t * matrix) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_matrix(cr,matrix);
}

void cairo_identity_matrix(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_identity_matrix(cr);
}

void cairo_user_to_device(cairo_t * cr, double * x, double * y) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_user_to_device(cr,x,y);
}

void cairo_user_to_device_distance(cairo_t * cr, double * dx, double * dy) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_user_to_device_distance(cr,dx,dy);
}

void cairo_device_to_user(cairo_t * cr, double * x, double * y) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_device_to_user(cr,x,y);
}

void cairo_device_to_user_distance(cairo_t * cr, double * dx, double * dy) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_device_to_user_distance(cr,dx,dy);
}

void cairo_new_path(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_new_path(cr);
}

void cairo_move_to(cairo_t * cr, double x, double y) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_move_to(cr,x,y);
}

void cairo_new_sub_path(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_new_sub_path(cr);
}

void cairo_line_to(cairo_t * cr, double x, double y) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_line_to(cr,x,y);
}

void cairo_curve_to(cairo_t * cr, double x1, double y1, double x2, double y2, double x3, double y3) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_curve_to(cr,x1,y1,x2,y2,x3,y3);
}

void cairo_arc(cairo_t * cr, double xc, double yc, double radius, double angle1, double angle2) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_arc(cr,xc,yc,radius,angle1,angle2);
}

void cairo_arc_negative(cairo_t * cr, double xc, double yc, double radius, double angle1, double angle2) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_arc_negative(cr,xc,yc,radius,angle1,angle2);
}

void cairo_rel_move_to(cairo_t * cr, double dx, double dy) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_rel_move_to(cr,dx,dy);
}

void cairo_rel_line_to(cairo_t * cr, double dx, double dy) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_rel_line_to(cr,dx,dy);
}

void cairo_rel_curve_to(cairo_t * cr, double dx1, double dy1, double dx2, double dy2, double dx3, double dy3) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_rel_curve_to(cr,dx1,dy1,dx2,dy2,dx3,dy3);
}

void cairo_rectangle(cairo_t * cr, double x, double y, double width, double height) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_rectangle(cr,x,y,width,height);
}

void cairo_stroke_to_path(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_stroke_to_path(cr);
}

void cairo_close_path(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_close_path(cr);
}

void cairo_path_extents(cairo_t * cr, double * x1, double * y1, double * x2, double * y2) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_path_extents(cr,x1,y1,x2,y2);
}

void cairo_paint(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_paint(cr);
}

void cairo_paint_with_alpha(cairo_t * cr, double alpha) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_paint_with_alpha(cr,alpha);
}

void cairo_mask(cairo_t * cr, cairo_pattern_t * pattern) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_mask(cr,pattern);
}

void cairo_mask_surface(cairo_t * cr, cairo_surface_t * surface, double surface_x, double surface_y) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_mask_surface(cr,surface,surface_x,surface_y);
}

void cairo_stroke(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_stroke(cr);
}

void cairo_stroke_preserve(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_stroke_preserve(cr);
}

void cairo_fill(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_fill(cr);
}

void cairo_fill_preserve(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_fill_preserve(cr);
}

void cairo_copy_page(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_copy_page(cr);
}

void cairo_show_page(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_show_page(cr);
}

cairo_bool_t cairo_in_stroke(cairo_t * cr, double x, double y) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_in_stroke(cr,x,y);
}

cairo_bool_t cairo_in_fill(cairo_t * cr, double x, double y) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_in_fill(cr,x,y);
}

cairo_bool_t cairo_in_clip(cairo_t * cr, double x, double y) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_in_clip(cr,x,y);
}

void cairo_stroke_extents(cairo_t * cr, double * x1, double * y1, double * x2, double * y2) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_stroke_extents(cr,x1,y1,x2,y2);
}

void cairo_fill_extents(cairo_t * cr, double * x1, double * y1, double * x2, double * y2) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_fill_extents(cr,x1,y1,x2,y2);
}

void cairo_reset_clip(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_reset_clip(cr);
}

void cairo_clip(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_clip(cr);
}

void cairo_clip_preserve(cairo_t * cr) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_clip_preserve(cr);
}

void cairo_clip_extents(cairo_t * cr, double * x1, double * y1, double * x2, double * y2) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_clip_extents(cr,x1,y1,x2,y2);
}

cairo_rectangle_list_t * cairo_copy_clip_rectangle_list(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_copy_clip_rectangle_list(cr);
}

void cairo_rectangle_list_destroy(cairo_rectangle_list_t * rectangle_list) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_rectangle_list_destroy(rectangle_list);
}

void cairo_tag_begin(cairo_t * cr, const char * tag_name, const char * attributes) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_tag_begin(cr,tag_name,attributes);
}

void cairo_tag_end(cairo_t * cr, const char * tag_name) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_tag_end(cr,tag_name);
}

cairo_glyph_t * cairo_glyph_allocate(int num_glyphs) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_glyph_allocate(num_glyphs);
}

void cairo_glyph_free(cairo_glyph_t * glyphs) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_glyph_free(glyphs);
}

cairo_text_cluster_t * cairo_text_cluster_allocate(int num_clusters) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_text_cluster_allocate(num_clusters);
}

void cairo_text_cluster_free(cairo_text_cluster_t * clusters) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_text_cluster_free(clusters);
}

cairo_font_options_t * cairo_font_options_create(struct CairoIFace *Self) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_options_create();
}

cairo_font_options_t * cairo_font_options_copy(const cairo_font_options_t * original) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_options_copy(original);
}

void cairo_font_options_destroy(cairo_font_options_t * options) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_font_options_destroy(options);
}

cairo_status_t cairo_font_options_status(cairo_font_options_t * options) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_options_status(options);
}

void cairo_font_options_merge(cairo_font_options_t * options, const cairo_font_options_t * other) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_font_options_merge(options,other);
}

cairo_bool_t cairo_font_options_equal(const cairo_font_options_t * options, const cairo_font_options_t * other) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_options_equal(options,other);
}

unsigned long cairo_font_options_hash(const cairo_font_options_t * options) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_options_hash(options);
}

void cairo_font_options_set_antialias(cairo_font_options_t * options, cairo_antialias_t antialias) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_font_options_set_antialias(options,antialias);
}

cairo_antialias_t cairo_font_options_get_antialias(const cairo_font_options_t * options) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_options_get_antialias(options);
}

void cairo_font_options_set_subpixel_order(cairo_font_options_t * options, cairo_subpixel_order_t subpixel_order) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_font_options_set_subpixel_order(options,subpixel_order);
}

cairo_subpixel_order_t cairo_font_options_get_subpixel_order(const cairo_font_options_t * options) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_options_get_subpixel_order(options);
}

void cairo_font_options_set_hint_style(cairo_font_options_t * options, cairo_hint_style_t hint_style) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_font_options_set_hint_style(options,hint_style);
}

cairo_hint_style_t cairo_font_options_get_hint_style(const cairo_font_options_t * options) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_options_get_hint_style(options);
}

void cairo_font_options_set_hint_metrics(cairo_font_options_t * options, cairo_hint_metrics_t hint_metrics) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_font_options_set_hint_metrics(options,hint_metrics);
}

cairo_hint_metrics_t cairo_font_options_get_hint_metrics(const cairo_font_options_t * options) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_options_get_hint_metrics(options);
}

const char * cairo_font_options_get_variations(cairo_font_options_t * options) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_options_get_variations(options);
}

void cairo_font_options_set_variations(cairo_font_options_t * options, const char * variations) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_font_options_set_variations(options,variations);
}

void cairo_font_options_set_color_mode(cairo_font_options_t * options, cairo_color_mode_t color_mode) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_font_options_set_color_mode(options,color_mode);
}

cairo_color_mode_t cairo_font_options_get_color_mode(const cairo_font_options_t * options) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_options_get_color_mode(options);
}

unsigned int cairo_font_options_get_color_palette(const cairo_font_options_t * options) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_options_get_color_palette(options);
}

void cairo_font_options_set_color_palette(cairo_font_options_t * options, unsigned int palette_index) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_font_options_set_color_palette(options,palette_index);
}

void cairo_font_options_set_custom_palette_color(cairo_font_options_t * options, unsigned int index, double red, double green, double blue, double alpha) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_font_options_set_custom_palette_color(options,index,red,green,blue,alpha);
}

cairo_status_t cairo_font_options_get_custom_palette_color(cairo_font_options_t * options, unsigned int index, double * red, double * green, double * blue, double * alpha) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_options_get_custom_palette_color(options,index,red,green,blue,alpha);
}

void cairo_select_font_face(cairo_t * cr, const char * family, cairo_font_slant_t slant, cairo_font_weight_t weight) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_select_font_face(cr,family,slant,weight);
}

void cairo_set_font_size(cairo_t * cr, double size) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_font_size(cr,size);
}

void cairo_set_font_matrix(cairo_t * cr, const cairo_matrix_t * matrix) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_font_matrix(cr,matrix);
}

void cairo_get_font_matrix(cairo_t * cr, cairo_matrix_t * matrix) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_get_font_matrix(cr,matrix);
}

void cairo_set_font_options(cairo_t * cr, const cairo_font_options_t * options) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_font_options(cr,options);
}

void cairo_get_font_options(cairo_t * cr, cairo_font_options_t * options) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_get_font_options(cr,options);
}

void cairo_set_font_face(cairo_t * cr, cairo_font_face_t * font_face) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_font_face(cr,font_face);
}

cairo_font_face_t * cairo_get_font_face(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_font_face(cr);
}

void cairo_set_scaled_font(cairo_t * cr, const cairo_scaled_font_t * scaled_font) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_set_scaled_font(cr,scaled_font);
}

cairo_scaled_font_t * cairo_get_scaled_font(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_scaled_font(cr);
}

void cairo_show_text(cairo_t * cr, const char * utf8) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_show_text(cr,utf8);
}

void cairo_show_glyphs(cairo_t * cr, const cairo_glyph_t * glyphs, int num_glyphs) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_show_glyphs(cr,glyphs,num_glyphs);
}

void cairo_show_text_glyphs(cairo_t * cr, const char * utf8, int utf8_len, const cairo_glyph_t * glyphs, int num_glyphs, const cairo_text_cluster_t * clusters, int num_clusters, cairo_text_cluster_flags_t cluster_flags) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_show_text_glyphs(cr,utf8,utf8_len,glyphs,num_glyphs,clusters,num_clusters,cluster_flags);
}

void cairo_text_path (cairo_t * cr, const char * utf8) {
	extern struct CairoIFace *ICairo;

	return ICairo->(cr,utf8);
}

void cairo_glyph_path(cairo_t * cr, const cairo_glyph_t * glyphs, int num_glyphs) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_glyph_path(cr,glyphs,num_glyphs);
}

void cairo_text_extents(cairo_t * cr, const char * utf8, cairo_text_extents_t * extents) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_text_extents(cr,utf8,extents);
}

void cairo_glyph_extents(cairo_t * cr, const cairo_glyph_t * glyphs, int num_glyphs, cairo_text_extents_t * extents) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_glyph_extents(cr,glyphs,num_glyphs,extents);
}

void cairo_font_extents(cairo_t * cr, cairo_font_extents_t * extents) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_font_extents(cr,extents);
}

cairo_font_face_t * cairo_font_face_reference(cairo_font_face_t * font_face) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_face_reference(font_face);
}

void cairo_font_face_destroy(cairo_font_face_t * font_face) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_font_face_destroy(font_face);
}

unsigned int cairo_font_face_get_reference_count(cairo_font_face_t * font_face) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_face_get_reference_count(font_face);
}

cairo_status_t cairo_font_face_status(cairo_font_face_t * font_face) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_face_status(font_face);
}

cairo_font_type_t cairo_font_face_get_type(cairo_font_face_t * font_face) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_face_get_type(font_face);
}

void * cairo_font_face_get_user_data(cairo_font_face_t * font_face, const cairo_user_data_key_t * key) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_face_get_user_data(font_face,key);
}

cairo_status_t cairo_font_face_set_user_data(cairo_font_face_t * font_face, const cairo_user_data_key_t * key, void * user_data, cairo_destroy_func_t destroy) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_font_face_set_user_data(font_face,key,user_data,destroy);
}

cairo_scaled_font_t * cairo_scaled_font_create(cairo_font_face_t * font_face, const cairo_matrix_t * font_matrix, const cairo_matrix_t * ctm, const cairo_font_options_t * options) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_scaled_font_create(font_face,font_matrix,ctm,options);
}

cairo_scaled_font_t * cairo_scaled_font_reference(cairo_scaled_font_t * scaled_font) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_scaled_font_reference(scaled_font);
}

void cairo_scaled_font_destroy(cairo_scaled_font_t * scaled_font) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_scaled_font_destroy(scaled_font);
}

unsigned int cairo_scaled_font_get_reference_count(cairo_scaled_font_t * scaled_font) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_scaled_font_get_reference_count(scaled_font);
}

cairo_status_t cairo_scaled_font_status(cairo_scaled_font_t * scaled_font) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_scaled_font_status(scaled_font);
}

cairo_font_type_t cairo_scaled_font_get_type(cairo_scaled_font_t * scaled_font) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_scaled_font_get_type(scaled_font);
}

void * cairo_scaled_font_get_user_data(cairo_scaled_font_t * scaled_font, const cairo_user_data_key_t * key) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_scaled_font_get_user_data(scaled_font,key);
}

cairo_status_t cairo_scaled_font_set_user_data(cairo_scaled_font_t * scaled_font, const cairo_user_data_key_t * key, void * user_data, cairo_destroy_func_t destroy) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_scaled_font_set_user_data(scaled_font,key,user_data,destroy);
}

void cairo_scaled_font_extents(cairo_scaled_font_t * scaled_font, cairo_font_extents_t * extents) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_scaled_font_extents(scaled_font,extents);
}

void cairo_scaled_font_text_extents(cairo_scaled_font_t * scaled_font, const char * utf8, cairo_text_extents_t * extents) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_scaled_font_text_extents(scaled_font,utf8,extents);
}

void cairo_scaled_font_glyph_extents(cairo_scaled_font_t * scaled_font, const cairo_glyph_t * glyphs, int num_glyphs, cairo_text_extents_t * extents) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_scaled_font_glyph_extents(scaled_font,glyphs,num_glyphs,extents);
}

cairo_status_t cairo_scaled_font_text_to_glyphs(cairo_scaled_font_t * scaled_font, double x, double y, const char * utf8, int utf8_len, cairo_glyph_t * *glyphs, int * num_glyphs, cairo_text_cluster_t * *clusters, int * num_clusters, cairo_text_cluster_flags_t * cluster_flags) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_scaled_font_text_to_glyphs(scaled_font,x,y,utf8,utf8_len,glyphs,num_glyphs,clusters,num_clusters,cluster_flags);
}

cairo_font_face_t * cairo_scaled_font_get_font_face(cairo_scaled_font_t * scaled_font) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_scaled_font_get_font_face(scaled_font);
}

void cairo_scaled_font_get_font_matrix(cairo_scaled_font_t * scaled_font, cairo_matrix_t * font_matrix) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_scaled_font_get_font_matrix(scaled_font,font_matrix);
}

void cairo_scaled_font_get_ctm(cairo_scaled_font_t * scaled_font, cairo_matrix_t * ctm) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_scaled_font_get_ctm(scaled_font,ctm);
}

void cairo_scaled_font_get_scale_matrix(cairo_scaled_font_t * scaled_font, cairo_matrix_t * scale_matrix) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_scaled_font_get_scale_matrix(scaled_font,scale_matrix);
}

void cairo_scaled_font_get_font_options(cairo_scaled_font_t * scaled_font, cairo_font_options_t * options) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_scaled_font_get_font_options(scaled_font,options);
}

cairo_font_face_t * cairo_toy_font_face_create(const char * family, cairo_font_slant_t slant, cairo_font_weight_t weight) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_toy_font_face_create(family,slant,weight);
}

const char * cairo_toy_font_face_get_family(cairo_font_face_t * font_face) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_toy_font_face_get_family(font_face);
}

cairo_font_slant_t cairo_toy_font_face_get_slant(cairo_font_face_t * font_face) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_toy_font_face_get_slant(font_face);
}

cairo_font_weight_t cairo_toy_font_face_get_weight(cairo_font_face_t * font_face) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_toy_font_face_get_weight(font_face);
}

cairo_font_face_t * cairo_user_font_face_create(struct CairoIFace *Self) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_user_font_face_create();
}

void cairo_user_font_face_set_init_func(cairo_font_face_t * font_face, cairo_user_scaled_font_init_func_t init_func) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_user_font_face_set_init_func(font_face,init_func);
}

void cairo_user_font_face_set_render_glyph_func(cairo_font_face_t * font_face, cairo_user_scaled_font_render_glyph_func_t render_glyph_func) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_user_font_face_set_render_glyph_func(font_face,render_glyph_func);
}

void cairo_user_font_face_set_render_color_glyph_func(cairo_font_face_t * font_face, cairo_user_scaled_font_render_glyph_func_t render_glyph_func) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_user_font_face_set_render_color_glyph_func(font_face,render_glyph_func);
}

void cairo_user_font_face_set_text_to_glyphs_func(cairo_font_face_t * font_face, cairo_user_scaled_font_text_to_glyphs_func_t text_to_glyphs_func) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_user_font_face_set_text_to_glyphs_func(font_face,text_to_glyphs_func);
}

void cairo_user_font_face_set_unicode_to_glyph_func(cairo_font_face_t * font_face, cairo_user_scaled_font_unicode_to_glyph_func_t unicode_to_glyph_func) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_user_font_face_set_unicode_to_glyph_func(font_face,unicode_to_glyph_func);
}

cairo_user_scaled_font_init_func_t cairo_user_font_face_get_init_func(cairo_font_face_t * font_face) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_user_font_face_get_init_func(font_face);
}

cairo_user_scaled_font_render_glyph_func_t cairo_user_font_face_get_render_glyph_func(cairo_font_face_t * font_face) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_user_font_face_get_render_glyph_func(font_face);
}

cairo_user_scaled_font_render_glyph_func_t cairo_user_font_face_get_render_color_glyph_func(cairo_font_face_t * font_face) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_user_font_face_get_render_color_glyph_func(font_face);
}

cairo_user_scaled_font_text_to_glyphs_func_t cairo_user_font_face_get_text_to_glyphs_func(cairo_font_face_t * font_face) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_user_font_face_get_text_to_glyphs_func(font_face);
}

cairo_user_scaled_font_unicode_to_glyph_func_t cairo_user_font_face_get_unicode_to_glyph_func(cairo_font_face_t * font_face) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_user_font_face_get_unicode_to_glyph_func(font_face);
}

cairo_pattern_t * cairo_user_scaled_font_get_foreground_marker(cairo_scaled_font_t * scaled_font) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_user_scaled_font_get_foreground_marker(scaled_font);
}

cairo_pattern_t * cairo_user_scaled_font_get_foreground_source(cairo_scaled_font_t * scaled_font) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_user_scaled_font_get_foreground_source(scaled_font);
}

cairo_operator_t cairo_get_operator(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_operator(cr);
}

cairo_pattern_t * cairo_get_source(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_source(cr);
}

double cairo_get_tolerance(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_tolerance(cr);
}

cairo_antialias_t cairo_get_antialias(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_antialias(cr);
}

cairo_bool_t cairo_has_current_point(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_has_current_point(cr);
}

void cairo_get_current_point(cairo_t * cr, double * x, double * y) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_get_current_point(cr,x,y);
}

cairo_fill_rule_t cairo_get_fill_rule(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_fill_rule(cr);
}

double cairo_get_line_width(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_line_width(cr);
}

cairo_bool_t cairo_get_hairline(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_hairline(cr);
}

cairo_line_cap_t cairo_get_line_cap(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_line_cap(cr);
}

cairo_line_join_t cairo_get_line_join(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_line_join(cr);
}

double cairo_get_miter_limit(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_miter_limit(cr);
}

int cairo_get_dash_count(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_dash_count(cr);
}

void cairo_get_dash(cairo_t * cr, double * dashes, double * offset) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_get_dash(cr,dashes,offset);
}

void cairo_get_matrix(cairo_t * cr, cairo_matrix_t * matrix) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_get_matrix(cr,matrix);
}

cairo_surface_t * cairo_get_target(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_target(cr);
}

cairo_surface_t * cairo_get_group_target(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_get_group_target(cr);
}

cairo_path_t * cairo_copy_path(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_copy_path(cr);
}

cairo_path_t * cairo_copy_path_flat(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_copy_path_flat(cr);
}

void cairo_append_path(cairo_t * cr, const cairo_path_t * path) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_append_path(cr,path);
}

void cairo_path_destroy(cairo_path_t * path) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_path_destroy(path);
}

cairo_status_t cairo_status(cairo_t * cr) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_status(cr);
}

const char * cairo_status_to_string(cairo_status_t status) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_status_to_string(status);
}

cairo_device_t * cairo_device_reference(cairo_device_t * device) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_device_reference(device);
}

cairo_device_type_t cairo_device_get_type(cairo_device_t * device) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_device_get_type(device);
}

cairo_status_t cairo_device_status(cairo_device_t * device) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_device_status(device);
}

cairo_status_t cairo_device_acquire(cairo_device_t * device) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_device_acquire(device);
}

void cairo_device_release(cairo_device_t * device) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_device_release(device);
}

void cairo_device_flush(cairo_device_t * device) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_device_flush(device);
}

void cairo_device_finish(cairo_device_t * device) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_device_finish(device);
}

void cairo_device_destroy(cairo_device_t * device) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_device_destroy(device);
}

unsigned int cairo_device_get_reference_count(cairo_device_t * device) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_device_get_reference_count(device);
}

void * cairo_device_get_user_data(cairo_device_t * device, const cairo_user_data_key_t * key) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_device_get_user_data(device,key);
}

cairo_status_t cairo_device_set_user_data(cairo_device_t * device, const cairo_user_data_key_t * key, void * user_data, cairo_destroy_func_t destroy) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_device_set_user_data(device,key,user_data,destroy);
}

cairo_surface_t * cairo_surface_create_similar(cairo_surface_t * other, cairo_content_t content, int width, int height) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_create_similar(other,content,width,height);
}

cairo_surface_t * cairo_surface_create_similar_image(cairo_surface_t * other, cairo_format_t format, int width, int height) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_create_similar_image(other,format,width,height);
}

cairo_surface_t * cairo_surface_map_to_image(cairo_surface_t * surface, const cairo_rectangle_int_t * extents) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_map_to_image(surface,extents);
}

void cairo_surface_unmap_image(cairo_surface_t * surface, cairo_surface_t * image) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_unmap_image(surface,image);
}

cairo_surface_t * cairo_surface_create_for_rectangle(cairo_surface_t * target, double x, double y, double width, double height) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_create_for_rectangle(target,x,y,width,height);
}

cairo_surface_t * cairo_surface_create_observer(cairo_surface_t * target, cairo_surface_observer_mode_t mode) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_create_observer(target,mode);
}

cairo_status_t cairo_surface_observer_add_paint_callback(cairo_surface_t * abstract_surface, cairo_surface_observer_callback_t func, void * data) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_observer_add_paint_callback(abstract_surface,func,data);
}

cairo_status_t cairo_surface_observer_add_mask_callback(cairo_surface_t * abstract_surface, cairo_surface_observer_callback_t func, void * data) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_observer_add_mask_callback(abstract_surface,func,data);
}

cairo_status_t cairo_surface_observer_add_fill_callback(cairo_surface_t * abstract_surface, cairo_surface_observer_callback_t func, void * data) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_observer_add_fill_callback(abstract_surface,func,data);
}

cairo_status_t cairo_surface_observer_add_stroke_callback(cairo_surface_t * abstract_surface, cairo_surface_observer_callback_t func, void * data) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_observer_add_stroke_callback(abstract_surface,func,data);
}

cairo_status_t cairo_surface_observer_add_glyphs_callback(cairo_surface_t * abstract_surface, cairo_surface_observer_callback_t func, void * data) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_observer_add_glyphs_callback(abstract_surface,func,data);
}

cairo_status_t cairo_surface_observer_add_flush_callback(cairo_surface_t * abstract_surface, cairo_surface_observer_callback_t func, void * data) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_observer_add_flush_callback(abstract_surface,func,data);
}

cairo_status_t cairo_surface_observer_add_finish_callback(cairo_surface_t * abstract_surface, cairo_surface_observer_callback_t func, void * data) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_observer_add_finish_callback(abstract_surface,func,data);
}

cairo_status_t cairo_surface_observer_print(cairo_surface_t * abstract_surface, cairo_write_func_t write_func, void * closure) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_observer_print(abstract_surface,write_func,closure);
}

double cairo_surface_observer_elapsed(cairo_surface_t * abstract_surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_observer_elapsed(abstract_surface);
}

cairo_status_t cairo_device_observer_print(cairo_device_t * abstract_device, cairo_write_func_t write_func, void * closure) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_device_observer_print(abstract_device,write_func,closure);
}

double cairo_device_observer_elapsed(cairo_device_t * abstract_device) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_device_observer_elapsed(abstract_device);
}

double cairo_device_observer_paint_elapsed(cairo_device_t * abstract_device) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_device_observer_paint_elapsed(abstract_device);
}

double cairo_device_observer_mask_elapsed(cairo_device_t * abstract_device) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_device_observer_mask_elapsed(abstract_device);
}

double cairo_device_observer_fill_elapsed(cairo_device_t * abstract_device) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_device_observer_fill_elapsed(abstract_device);
}

double cairo_device_observer_stroke_elapsed(cairo_device_t * abstract_device) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_device_observer_stroke_elapsed(abstract_device);
}

double cairo_device_observer_glyphs_elapsed(cairo_device_t * abstract_device) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_device_observer_glyphs_elapsed(abstract_device);
}

cairo_surface_t * cairo_surface_reference(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_reference(surface);
}

void cairo_surface_finish(cairo_surface_t * surface) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_finish(surface);
}

void cairo_surface_destroy(cairo_surface_t * surface) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_destroy(surface);
}

cairo_device_t * cairo_surface_get_device(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_get_device(surface);
}

unsigned int cairo_surface_get_reference_count(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_get_reference_count(surface);
}

cairo_status_t cairo_surface_status(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_status(surface);
}

cairo_surface_type_t cairo_surface_get_type(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_get_type(surface);
}

cairo_content_t cairo_surface_get_content(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_get_content(surface);
}

cairo_status_t cairo_surface_write_to_png(cairo_surface_t * surface, const char * filename) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_write_to_png(surface,filename);
}

cairo_status_t cairo_surface_write_to_png_stream(cairo_surface_t * surface, cairo_write_func_t write_func, void * closure) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_write_to_png_stream(surface,write_func,closure);
}

void * cairo_surface_get_user_data(cairo_surface_t * surface, const cairo_user_data_key_t * key) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_get_user_data(surface,key);
}

cairo_status_t cairo_surface_set_user_data(cairo_surface_t * surface, const cairo_user_data_key_t * key, void * user_data, cairo_destroy_func_t destroy) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_set_user_data(surface,key,user_data,destroy);
}

void cairo_surface_get_mime_data(cairo_surface_t * surface, const char * mime_type, const unsigned char * *data, unsigned long * length) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_get_mime_data(surface,mime_type,data,length);
}

cairo_status_t cairo_surface_set_mime_data(cairo_surface_t * surface, const char * mime_type, const unsigned char * data, unsigned long length, cairo_destroy_func_t destroy, void * closure) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_set_mime_data(surface,mime_type,data,length,destroy,closure);
}

cairo_bool_t cairo_surface_supports_mime_type(cairo_surface_t * surface, const char * mime_type) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_supports_mime_type(surface,mime_type);
}

void cairo_surface_get_font_options(cairo_surface_t * surface, cairo_font_options_t * options) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_get_font_options(surface,options);
}

void cairo_surface_flush(cairo_surface_t * surface) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_flush(surface);
}

void cairo_surface_mark_dirty(cairo_surface_t * surface) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_mark_dirty(surface);
}

void cairo_surface_mark_dirty_rectangle(cairo_surface_t * surface, int x, int y, int width, int height) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_mark_dirty_rectangle(surface,x,y,width,height);
}

void cairo_surface_set_device_scale(cairo_surface_t * surface, double x_scale, double y_scale) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_set_device_scale(surface,x_scale,y_scale);
}

void cairo_surface_get_device_scale(cairo_surface_t * surface, double * x_scale, double * y_scale) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_get_device_scale(surface,x_scale,y_scale);
}

void cairo_surface_set_device_offset(cairo_surface_t * surface, double x_offset, double y_offset) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_set_device_offset(surface,x_offset,y_offset);
}

void cairo_surface_get_device_offset(cairo_surface_t * surface, double * x_offset, double * y_offset) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_get_device_offset(surface,x_offset,y_offset);
}

void cairo_surface_set_fallback_resolution(cairo_surface_t * surface, double x_pixels_per_inch, double y_pixels_per_inch) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_set_fallback_resolution(surface,x_pixels_per_inch,y_pixels_per_inch);
}

void cairo_surface_get_fallback_resolution(cairo_surface_t * surface, double * x_pixels_per_inch, double * y_pixels_per_inch) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_get_fallback_resolution(surface,x_pixels_per_inch,y_pixels_per_inch);
}

void cairo_surface_copy_page(cairo_surface_t * surface) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_copy_page(surface);
}

void cairo_surface_show_page(cairo_surface_t * surface) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_surface_show_page(surface);
}

cairo_bool_t cairo_surface_has_show_text_glyphs(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_surface_has_show_text_glyphs(surface);
}

cairo_surface_t * cairo_image_surface_create(cairo_format_t format, int width, int height) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_image_surface_create(format,width,height);
}

int cairo_format_stride_for_width(cairo_format_t format, int width) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_format_stride_for_width(format,width);
}

cairo_surface_t * cairo_image_surface_create_for_data(unsigned char * data, cairo_format_t format, int width, int height, int stride) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_image_surface_create_for_data(data,format,width,height,stride);
}

unsigned char * cairo_image_surface_get_data(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_image_surface_get_data(surface);
}

cairo_format_t cairo_image_surface_get_format(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_image_surface_get_format(surface);
}

int cairo_image_surface_get_width(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_image_surface_get_width(surface);
}

int cairo_image_surface_get_height(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_image_surface_get_height(surface);
}

int cairo_image_surface_get_stride(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_image_surface_get_stride(surface);
}

cairo_surface_t * cairo_image_surface_create_from_png(const char * filename) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_image_surface_create_from_png(filename);
}

cairo_surface_t * cairo_image_surface_create_from_png_stream(cairo_read_func_t read_func, void * closure) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_image_surface_create_from_png_stream(read_func,closure);
}

cairo_surface_t * cairo_recording_surface_create(cairo_content_t content, const cairo_rectangle_t * extents) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_recording_surface_create(content,extents);
}

void cairo_recording_surface_ink_extents(cairo_surface_t * surface, double * x0, double * y0, double * width, double * height) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_recording_surface_ink_extents(surface,x0,y0,width,height);
}

cairo_bool_t cairo_recording_surface_get_extents(cairo_surface_t * surface, cairo_rectangle_t * extents) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_recording_surface_get_extents(surface,extents);
}

cairo_pattern_t * cairo_pattern_create_raster_source(void * user_data, cairo_content_t content, int width, int height) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_create_raster_source(user_data,content,width,height);
}

void cairo_raster_source_pattern_set_callback_data(cairo_pattern_t * pattern, void * data) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_raster_source_pattern_set_callback_data(pattern,data);
}

void * cairo_raster_source_pattern_get_callback_data(cairo_pattern_t * pattern) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_raster_source_pattern_get_callback_data(pattern);
}

void cairo_raster_source_pattern_set_acquire(cairo_pattern_t * pattern, cairo_raster_source_acquire_func_t acquire, cairo_raster_source_release_func_t release) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_raster_source_pattern_set_acquire(pattern,acquire,release);
}

void cairo_raster_source_pattern_get_acquire(cairo_pattern_t * pattern, cairo_raster_source_acquire_func_t * acquire, cairo_raster_source_release_func_t * release) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_raster_source_pattern_get_acquire(pattern,acquire,release);
}

void cairo_raster_source_pattern_set_snapshot(cairo_pattern_t * pattern, cairo_raster_source_snapshot_func_t snapshot) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_raster_source_pattern_set_snapshot(pattern,snapshot);
}

cairo_raster_source_snapshot_func_t cairo_raster_source_pattern_get_snapshot(cairo_pattern_t * pattern) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_raster_source_pattern_get_snapshot(pattern);
}

void cairo_raster_source_pattern_set_copy(cairo_pattern_t * pattern, cairo_raster_source_copy_func_t copy) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_raster_source_pattern_set_copy(pattern,copy);
}

cairo_raster_source_copy_func_t cairo_raster_source_pattern_get_copy(cairo_pattern_t * pattern) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_raster_source_pattern_get_copy(pattern);
}

void cairo_raster_source_pattern_set_finish(cairo_pattern_t * pattern, cairo_raster_source_finish_func_t finish) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_raster_source_pattern_set_finish(pattern,finish);
}

cairo_raster_source_finish_func_t cairo_raster_source_pattern_get_finish(cairo_pattern_t * pattern) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_raster_source_pattern_get_finish(pattern);
}

cairo_pattern_t * cairo_pattern_create_rgb(double red, double green, double blue) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_create_rgb(red,green,blue);
}

cairo_pattern_t * cairo_pattern_create_rgba(double red, double green, double blue, double alpha) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_create_rgba(red,green,blue,alpha);
}

cairo_pattern_t * cairo_pattern_create_for_surface(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_create_for_surface(surface);
}

cairo_pattern_t * cairo_pattern_create_linear(double x0, double y0, double x1, double y1) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_create_linear(x0,y0,x1,y1);
}

cairo_pattern_t * cairo_pattern_create_radial(double cx0, double cy0, double radius0, double cx1, double cy1, double radius1) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_create_radial(cx0,cy0,radius0,cx1,cy1,radius1);
}

cairo_pattern_t * cairo_pattern_create_mesh(struct CairoIFace *Self) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_create_mesh();
}

cairo_pattern_t * cairo_pattern_reference(cairo_pattern_t * pattern) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_reference(pattern);
}

void cairo_pattern_destroy(cairo_pattern_t * pattern) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pattern_destroy(pattern);
}

unsigned int cairo_pattern_get_reference_count(cairo_pattern_t * pattern) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_get_reference_count(pattern);
}

cairo_status_t cairo_pattern_status(cairo_pattern_t * pattern) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_status(pattern);
}

void * cairo_pattern_get_user_data(cairo_pattern_t * pattern, const cairo_user_data_key_t * key) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_get_user_data(pattern,key);
}

cairo_status_t cairo_pattern_set_user_data(cairo_pattern_t * pattern, const cairo_user_data_key_t * key, void * user_data, cairo_destroy_func_t destroy) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_set_user_data(pattern,key,user_data,destroy);
}

cairo_pattern_type_t cairo_pattern_get_type(cairo_pattern_t * pattern) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_get_type(pattern);
}

void cairo_pattern_add_color_stop_rgb(cairo_pattern_t * pattern, double offset, double red, double green, double blue) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pattern_add_color_stop_rgb(pattern,offset,red,green,blue);
}

void cairo_pattern_add_color_stop_rgba(cairo_pattern_t * pattern, double offset, double red, double green, double blue, double alpha) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pattern_add_color_stop_rgba(pattern,offset,red,green,blue,alpha);
}

void cairo_mesh_pattern_begin_patch(cairo_pattern_t * pattern) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_mesh_pattern_begin_patch(pattern);
}

void cairo_mesh_pattern_end_patch(cairo_pattern_t * pattern) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_mesh_pattern_end_patch(pattern);
}

void cairo_mesh_pattern_curve_to(cairo_pattern_t * pattern, double x1, double y1, double x2, double y2, double x3, double y3) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_mesh_pattern_curve_to(pattern,x1,y1,x2,y2,x3,y3);
}

void cairo_mesh_pattern_line_to(cairo_pattern_t * pattern, double x, double y) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_mesh_pattern_line_to(pattern,x,y);
}

void cairo_mesh_pattern_move_to(cairo_pattern_t * pattern, double x, double y) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_mesh_pattern_move_to(pattern,x,y);
}

void cairo_mesh_pattern_set_control_point(cairo_pattern_t * pattern, unsigned int point_num, double x, double y) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_mesh_pattern_set_control_point(pattern,point_num,x,y);
}

void cairo_mesh_pattern_set_corner_color_rgb(cairo_pattern_t * pattern, unsigned int corner_num, double red, double green, double blue) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_mesh_pattern_set_corner_color_rgb(pattern,corner_num,red,green,blue);
}

void cairo_mesh_pattern_set_corner_color_rgba(cairo_pattern_t * pattern, unsigned int corner_num, double red, double green, double blue, double alpha) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_mesh_pattern_set_corner_color_rgba(pattern,corner_num,red,green,blue,alpha);
}

void cairo_pattern_set_matrix(cairo_pattern_t * pattern, const cairo_matrix_t * matrix) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pattern_set_matrix(pattern,matrix);
}

void cairo_pattern_get_matrix(cairo_pattern_t * pattern, cairo_matrix_t * matrix) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pattern_get_matrix(pattern,matrix);
}

void cairo_pattern_set_extend(cairo_pattern_t * pattern, cairo_extend_t extend) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pattern_set_extend(pattern,extend);
}

cairo_extend_t cairo_pattern_get_extend(cairo_pattern_t * pattern) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_get_extend(pattern);
}

void cairo_pattern_set_filter(cairo_pattern_t * pattern, cairo_filter_t filter) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_pattern_set_filter(pattern,filter);
}

cairo_filter_t cairo_pattern_get_filter(cairo_pattern_t * pattern) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_get_filter(pattern);
}

cairo_status_t cairo_pattern_get_rgba(cairo_pattern_t * pattern, double * red, double * green, double * blue, double * alpha) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_get_rgba(pattern,red,green,blue,alpha);
}

cairo_status_t cairo_pattern_get_surface(cairo_pattern_t * pattern, cairo_surface_t * *surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_get_surface(pattern,surface);
}

cairo_status_t cairo_pattern_get_color_stop_rgba(cairo_pattern_t * pattern, int index, double * offset, double * red, double * green, double * blue, double * alpha) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_get_color_stop_rgba(pattern,index,offset,red,green,blue,alpha);
}

cairo_status_t cairo_pattern_get_color_stop_count(cairo_pattern_t * pattern, int * count) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_get_color_stop_count(pattern,count);
}

cairo_status_t cairo_pattern_get_linear_points(cairo_pattern_t * pattern, double * x0, double * y0, double * x1, double * y1) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_get_linear_points(pattern,x0,y0,x1,y1);
}

cairo_status_t cairo_pattern_get_radial_circles(cairo_pattern_t * pattern, double * x0, double * y0, double * r0, double * x1, double * y1, double * r1) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_pattern_get_radial_circles(pattern,x0,y0,r0,x1,y1,r1);
}

cairo_status_t cairo_mesh_pattern_get_patch_count(cairo_pattern_t * pattern, unsigned int * count) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_mesh_pattern_get_patch_count(pattern,count);
}

cairo_path_t * cairo_mesh_pattern_get_path(cairo_pattern_t * pattern, unsigned int patch_num) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_mesh_pattern_get_path(pattern,patch_num);
}

cairo_status_t cairo_mesh_pattern_get_corner_color_rgba(cairo_pattern_t * pattern, unsigned int patch_num, unsigned int corner_num, double * red, double * green, double * blue, double * alpha) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_mesh_pattern_get_corner_color_rgba(pattern,patch_num,corner_num,red,green,blue,alpha);
}

cairo_status_t cairo_mesh_pattern_get_control_point(cairo_pattern_t * pattern, unsigned int patch_num, unsigned int point_num, double * x, double * y) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_mesh_pattern_get_control_point(pattern,patch_num,point_num,x,y);
}

void cairo_matrix_init(cairo_matrix_t * matrix, double xx, double yx, double xy, double yy, double x0, double y0) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_matrix_init(matrix,xx,yx,xy,yy,x0,y0);
}

void cairo_matrix_init_identity(cairo_matrix_t * matrix) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_matrix_init_identity(matrix);
}

void cairo_matrix_init_translate(cairo_matrix_t * matrix, double tx, double ty) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_matrix_init_translate(matrix,tx,ty);
}

void cairo_matrix_init_scale(cairo_matrix_t * matrix, double sx, double sy) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_matrix_init_scale(matrix,sx,sy);
}

void cairo_matrix_init_rotate(cairo_matrix_t * matrix, double radians) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_matrix_init_rotate(matrix,radians);
}

void cairo_matrix_translate(cairo_matrix_t * matrix, double tx, double ty) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_matrix_translate(matrix,tx,ty);
}

void cairo_matrix_scale(cairo_matrix_t * matrix, double sx, double sy) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_matrix_scale(matrix,sx,sy);
}

void cairo_matrix_rotate(cairo_matrix_t * matrix, double radians) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_matrix_rotate(matrix,radians);
}

cairo_status_t cairo_matrix_invert(cairo_matrix_t * matrix) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_matrix_invert(matrix);
}

void cairo_matrix_multiply(cairo_matrix_t * result, const cairo_matrix_t * a, const cairo_matrix_t * b) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_matrix_multiply(result,a,b);
}

void cairo_matrix_transform_distance(const cairo_matrix_t * matrix, double * dx, double * dy) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_matrix_transform_distance(matrix,dx,dy);
}

void cairo_matrix_transform_point(const cairo_matrix_t * matrix, double * x, double * y) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_matrix_transform_point(matrix,x,y);
}

cairo_region_t * cairo_region_create(struct CairoIFace *Self) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_create();
}

cairo_region_t * cairo_region_create_rectangle(const cairo_rectangle_int_t * rectangle) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_create_rectangle(rectangle);
}

cairo_region_t * cairo_region_create_rectangles(const cairo_rectangle_int_t * rects, int count) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_create_rectangles(rects,count);
}

cairo_region_t * cairo_region_copy(const cairo_region_t * original) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_copy(original);
}

cairo_region_t * cairo_region_reference(cairo_region_t * region) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_reference(region);
}

void cairo_region_destroy(cairo_region_t * region) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_region_destroy(region);
}

cairo_bool_t cairo_region_equal(const cairo_region_t * a, const cairo_region_t * b) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_equal(a,b);
}

cairo_status_t cairo_region_status(const cairo_region_t * region) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_status(region);
}

void cairo_region_get_extents(const cairo_region_t * region, cairo_rectangle_int_t * extents) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_region_get_extents(region,extents);
}

int cairo_region_num_rectangles(const cairo_region_t * region) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_num_rectangles(region);
}

void cairo_region_get_rectangle(const cairo_region_t * region, int nth, cairo_rectangle_int_t * rectangle) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_region_get_rectangle(region,nth,rectangle);
}

cairo_bool_t cairo_region_is_empty(const cairo_region_t * region) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_is_empty(region);
}

cairo_region_overlap_t cairo_region_contains_rectangle(const cairo_region_t * region, const cairo_rectangle_int_t * rectangle) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_contains_rectangle(region,rectangle);
}

cairo_bool_t cairo_region_contains_point(const cairo_region_t * region, int x, int y) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_contains_point(region,x,y);
}

void cairo_region_translate(cairo_region_t * region, int dx, int dy) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_region_translate(region,dx,dy);
}

cairo_status_t cairo_region_subtract(cairo_region_t * dst, const cairo_region_t * other) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_subtract(dst,other);
}

cairo_status_t cairo_region_subtract_rectangle(cairo_region_t * dst, const cairo_rectangle_int_t * rectangle) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_subtract_rectangle(dst,rectangle);
}

cairo_status_t cairo_region_intersect(cairo_region_t * dst, const cairo_region_t * other) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_intersect(dst,other);
}

cairo_status_t cairo_region_intersect_rectangle(cairo_region_t * dst, const cairo_rectangle_int_t * rectangle) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_intersect_rectangle(dst,rectangle);
}

cairo_status_t cairo_region_union(cairo_region_t * dst, const cairo_region_t * other) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_union(dst,other);
}

cairo_status_t cairo_region_union_rectangle(cairo_region_t * dst, const cairo_rectangle_int_t * rectangle) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_union_rectangle(dst,rectangle);
}

cairo_status_t cairo_region_xor(cairo_region_t * dst, const cairo_region_t * other) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_xor(dst,other);
}

cairo_status_t cairo_region_xor_rectangle(cairo_region_t * dst, const cairo_rectangle_int_t * rectangle) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_region_xor_rectangle(dst,rectangle);
}

void cairo_debug_reset_static_data(struct CairoIFace *Self) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_debug_reset_static_data();
}

cairo_surface_t * cairo_ps_surface_create(const char * filename, double width_in_points, double height_in_points) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_ps_surface_create(filename,width_in_points,height_in_points);
}

cairo_surface_t * cairo_ps_surface_create_for_stream(cairo_write_func_t write_func, void * closure, double width_in_points, double height_in_points) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_ps_surface_create_for_stream(write_func,closure,width_in_points,height_in_points);
}

void cairo_ps_surface_restrict_to_level(cairo_surface_t * surface, cairo_ps_level_t level) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_ps_surface_restrict_to_level(surface,level);
}

void cairo_ps_get_levels(cairo_ps_level_t const * *levels, int * num_levels) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_ps_get_levels(levels,num_levels);
}

const char * cairo_ps_level_to_string(cairo_ps_level_t level) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_ps_level_to_string(level);
}

void cairo_ps_surface_set_eps(cairo_surface_t * surface, cairo_bool_t eps) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_ps_surface_set_eps(surface,eps);
}

cairo_bool_t cairo_ps_surface_get_eps(cairo_surface_t * surface) {
	extern struct CairoIFace *ICairo;

	return ICairo->cairo_ps_surface_get_eps(surface);
}

void cairo_ps_surface_set_size(cairo_surface_t * surface, double width_in_points, double height_in_points) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_ps_surface_set_size(surface,width_in_points,height_in_points);
}

void cairo_ps_surface_dsc_comment(cairo_surface_t * surface, const char * comment) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_ps_surface_dsc_comment(surface,comment);
}

void cairo_ps_surface_dsc_begin_setup(cairo_surface_t * surface) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_ps_surface_dsc_begin_setup(surface);
}

void cairo_ps_surface_dsc_begin_page_setup(cairo_surface_t * surface) {
	extern struct CairoIFace *IFontconfig;

	ICairo->cairo_ps_surface_dsc_begin_page_setup(surface);
}
