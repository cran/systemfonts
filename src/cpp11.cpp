// Generated by cpp11: do not edit by hand


#include "cpp11/declarations.hpp"

// dev_metrics.h
cpp11::doubles dev_string_widths_c(cpp11::strings string, cpp11::strings family, cpp11::integers face, cpp11::doubles size, cpp11::doubles cex, cpp11::integers unit);
extern "C" SEXP _systemfonts_dev_string_widths_c(SEXP string, SEXP family, SEXP face, SEXP size, SEXP cex, SEXP unit) {
  BEGIN_CPP11
    return cpp11::as_sexp(dev_string_widths_c(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(string)), cpp11::unmove(cpp11::as_cpp<cpp11::strings>(family)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(face)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(size)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(cex)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(unit))));
  END_CPP11
}
// dev_metrics.h
cpp11::data_frame dev_string_metrics_c(cpp11::strings string, cpp11::strings family, cpp11::integers face, cpp11::doubles size, cpp11::doubles cex, cpp11::integers unit);
extern "C" SEXP _systemfonts_dev_string_metrics_c(SEXP string, SEXP family, SEXP face, SEXP size, SEXP cex, SEXP unit) {
  BEGIN_CPP11
    return cpp11::as_sexp(dev_string_metrics_c(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(string)), cpp11::unmove(cpp11::as_cpp<cpp11::strings>(family)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(face)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(size)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(cex)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(unit))));
  END_CPP11
}
// emoji.h
void load_emoji_codes_c(cpp11::integers all, cpp11::integers default_text, cpp11::integers base_mod);
extern "C" SEXP _systemfonts_load_emoji_codes_c(SEXP all, SEXP default_text, SEXP base_mod) {
  BEGIN_CPP11
    load_emoji_codes_c(cpp11::unmove(cpp11::as_cpp<cpp11::integers>(all)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(default_text)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(base_mod)));
    return R_NilValue;
  END_CPP11
}
// emoji.h
cpp11::list emoji_split_c(cpp11::strings string, cpp11::strings path, cpp11::integers index);
extern "C" SEXP _systemfonts_emoji_split_c(SEXP string, SEXP path, SEXP index) {
  BEGIN_CPP11
    return cpp11::as_sexp(emoji_split_c(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(string)), cpp11::unmove(cpp11::as_cpp<cpp11::strings>(path)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(index))));
  END_CPP11
}
// font_matching.h
cpp11::list match_font_c(cpp11::strings family, cpp11::logicals italic, cpp11::logicals bold);
extern "C" SEXP _systemfonts_match_font_c(SEXP family, SEXP italic, SEXP bold) {
  BEGIN_CPP11
    return cpp11::as_sexp(match_font_c(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(family)), cpp11::unmove(cpp11::as_cpp<cpp11::logicals>(italic)), cpp11::unmove(cpp11::as_cpp<cpp11::logicals>(bold))));
  END_CPP11
}
// font_matching.h
cpp11::writable::data_frame system_fonts_c();
extern "C" SEXP _systemfonts_system_fonts_c() {
  BEGIN_CPP11
    return cpp11::as_sexp(system_fonts_c());
  END_CPP11
}
// font_matching.h
void reset_font_cache_c();
extern "C" SEXP _systemfonts_reset_font_cache_c() {
  BEGIN_CPP11
    reset_font_cache_c();
    return R_NilValue;
  END_CPP11
}
// font_metrics.h
cpp11::writable::data_frame get_font_info_c(cpp11::strings path, cpp11::integers index, cpp11::doubles size, cpp11::doubles res);
extern "C" SEXP _systemfonts_get_font_info_c(SEXP path, SEXP index, SEXP size, SEXP res) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_font_info_c(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(path)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(index)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(size)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(res))));
  END_CPP11
}
// font_metrics.h
cpp11::writable::data_frame get_glyph_info_c(cpp11::strings glyphs, cpp11::strings path, cpp11::integers index, cpp11::doubles size, cpp11::doubles res);
extern "C" SEXP _systemfonts_get_glyph_info_c(SEXP glyphs, SEXP path, SEXP index, SEXP size, SEXP res) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_glyph_info_c(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(glyphs)), cpp11::unmove(cpp11::as_cpp<cpp11::strings>(path)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(index)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(size)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(res))));
  END_CPP11
}
// font_registry.h
void register_font_c(cpp11::strings family, cpp11::strings paths, cpp11::integers indices, cpp11::strings features, cpp11::integers settings);
extern "C" SEXP _systemfonts_register_font_c(SEXP family, SEXP paths, SEXP indices, SEXP features, SEXP settings) {
  BEGIN_CPP11
    register_font_c(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(family)), cpp11::unmove(cpp11::as_cpp<cpp11::strings>(paths)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(indices)), cpp11::unmove(cpp11::as_cpp<cpp11::strings>(features)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(settings)));
    return R_NilValue;
  END_CPP11
}
// font_registry.h
void clear_registry_c();
extern "C" SEXP _systemfonts_clear_registry_c() {
  BEGIN_CPP11
    clear_registry_c();
    return R_NilValue;
  END_CPP11
}
// font_registry.h
cpp11::writable::data_frame registry_fonts_c();
extern "C" SEXP _systemfonts_registry_fonts_c() {
  BEGIN_CPP11
    return cpp11::as_sexp(registry_fonts_c());
  END_CPP11
}
// string_metrics.h
cpp11::list get_string_shape_c(cpp11::strings string, cpp11::integers id, cpp11::strings path, cpp11::integers index, cpp11::doubles size, cpp11::doubles res, cpp11::doubles lineheight, cpp11::integers align, cpp11::doubles hjust, cpp11::doubles vjust, cpp11::doubles width, cpp11::doubles tracking, cpp11::doubles indent, cpp11::doubles hanging, cpp11::doubles space_before, cpp11::doubles space_after);
extern "C" SEXP _systemfonts_get_string_shape_c(SEXP string, SEXP id, SEXP path, SEXP index, SEXP size, SEXP res, SEXP lineheight, SEXP align, SEXP hjust, SEXP vjust, SEXP width, SEXP tracking, SEXP indent, SEXP hanging, SEXP space_before, SEXP space_after) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_string_shape_c(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(string)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(id)), cpp11::unmove(cpp11::as_cpp<cpp11::strings>(path)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(index)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(size)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(res)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(lineheight)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(align)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(hjust)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(vjust)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(width)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(tracking)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(indent)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(hanging)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(space_before)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(space_after))));
  END_CPP11
}
// string_metrics.h
cpp11::doubles get_line_width_c(cpp11::strings string, cpp11::strings path, cpp11::integers index, cpp11::doubles size, cpp11::doubles res, cpp11::logicals include_bearing);
extern "C" SEXP _systemfonts_get_line_width_c(SEXP string, SEXP path, SEXP index, SEXP size, SEXP res, SEXP include_bearing) {
  BEGIN_CPP11
    return cpp11::as_sexp(get_line_width_c(cpp11::unmove(cpp11::as_cpp<cpp11::strings>(string)), cpp11::unmove(cpp11::as_cpp<cpp11::strings>(path)), cpp11::unmove(cpp11::as_cpp<cpp11::integers>(index)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(size)), cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(res)), cpp11::unmove(cpp11::as_cpp<cpp11::logicals>(include_bearing))));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _systemfonts_clear_registry_c();
extern SEXP _systemfonts_dev_string_metrics_c(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _systemfonts_dev_string_widths_c(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _systemfonts_emoji_split_c(SEXP, SEXP, SEXP);
extern SEXP _systemfonts_get_font_info_c(SEXP, SEXP, SEXP, SEXP);
extern SEXP _systemfonts_get_glyph_info_c(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _systemfonts_get_line_width_c(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _systemfonts_get_string_shape_c(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _systemfonts_load_emoji_codes_c(SEXP, SEXP, SEXP);
extern SEXP _systemfonts_match_font_c(SEXP, SEXP, SEXP);
extern SEXP _systemfonts_register_font_c(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _systemfonts_registry_fonts_c();
extern SEXP _systemfonts_reset_font_cache_c();
extern SEXP _systemfonts_system_fonts_c();

static const R_CallMethodDef CallEntries[] = {
    {"_systemfonts_clear_registry_c",     (DL_FUNC) &_systemfonts_clear_registry_c,      0},
    {"_systemfonts_dev_string_metrics_c", (DL_FUNC) &_systemfonts_dev_string_metrics_c,  6},
    {"_systemfonts_dev_string_widths_c",  (DL_FUNC) &_systemfonts_dev_string_widths_c,   6},
    {"_systemfonts_emoji_split_c",        (DL_FUNC) &_systemfonts_emoji_split_c,         3},
    {"_systemfonts_get_font_info_c",      (DL_FUNC) &_systemfonts_get_font_info_c,       4},
    {"_systemfonts_get_glyph_info_c",     (DL_FUNC) &_systemfonts_get_glyph_info_c,      5},
    {"_systemfonts_get_line_width_c",     (DL_FUNC) &_systemfonts_get_line_width_c,      6},
    {"_systemfonts_get_string_shape_c",   (DL_FUNC) &_systemfonts_get_string_shape_c,   16},
    {"_systemfonts_load_emoji_codes_c",   (DL_FUNC) &_systemfonts_load_emoji_codes_c,    3},
    {"_systemfonts_match_font_c",         (DL_FUNC) &_systemfonts_match_font_c,          3},
    {"_systemfonts_register_font_c",      (DL_FUNC) &_systemfonts_register_font_c,       5},
    {"_systemfonts_registry_fonts_c",     (DL_FUNC) &_systemfonts_registry_fonts_c,      0},
    {"_systemfonts_reset_font_cache_c",   (DL_FUNC) &_systemfonts_reset_font_cache_c,    0},
    {"_systemfonts_system_fonts_c",       (DL_FUNC) &_systemfonts_system_fonts_c,        0},
    {NULL, NULL, 0}
};
}

void export_cache_store(DllInfo* dll);
void init_caches(DllInfo* dll);
void export_font_matching(DllInfo* dll);
void export_font_metrics(DllInfo* dll);
void export_string_metrics(DllInfo* dll);

extern "C" void R_init_systemfonts(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  export_cache_store(dll);
  init_caches(dll);
  export_font_matching(dll);
  export_font_metrics(dll);
  export_string_metrics(dll);
}