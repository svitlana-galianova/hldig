//
// defaults.cc
//
// default values for the ht programs
//
//
//
#if RELEASE
static char RCSid[] = "$Id: defaults.cc,v 1.43.2.14 2000/02/15 20:50:15 grdetil Exp $";
#endif

#include "Configuration.h"

ConfigDefaults	defaults[] =
{
    //
    // These variables are set to whatever the system was configured for.
    //
    {"common_dir",			COMMON_DIR},
    {"config_dir",			CONFIG_DIR},
    {"database_dir",			DATABASE_DIR},
    {"bin_dir",				BIN_DIR},
    {"image_url_prefix",		IMAGE_URL_PREFIX},
    {"pdf_parser",                      PDF_PARSER " -toPostScript"},
    {"version",				VERSION},

    //
    // General defaults
    //
    {"add_anchors_to_excerpt",		"true"},
    {"allow_in_form",			""},
    {"allow_numbers",			"false"},
    {"allow_virtual_hosts",		"true"},
    {"authorization",			""}, 
    {"backlink_factor",                 "1000"},
    {"bad_extensions",			".wav .gz .z .sit .au .zip .tar .hqx .exe .com .gif .jpg .jpeg .aiff .class .map .ram .tgz .bin .rpm .mpg .mov .avi"},
    {"bad_querystr",                    ""},
    {"bad_word_list",			"${common_dir}/bad_words"},
    {"case_sensitive",                  "true"},
    {"common_url_parts",                "http:// http://www. ftp:// ftp://ftp. /pub/ .html .htm .gif .jpg .jpeg /index.html /index.htm .com/ .com mailto:"},
    {"create_image_list",		"false"},
    {"create_url_list",			"false"},
    {"compression_level",               "0"},
    {"date_factor",                     "0"},
    {"date_format",                     ""},
    {"database_base",			"${database_dir}/db"},
    {"description_factor",              "150"},
    {"doc_db",				"${database_base}.docdb"},
    {"doc_index",			"${database_base}.docs.index"},
    {"doc_list",			"${database_base}.docs"},
    {"end_ellipses",			"<b><tt> ...</tt></b>"},
    {"end_highlight",			"</strong>"},
    {"endings_affix_file",		"${common_dir}/english.aff"},
    {"endings_dictionary",		"${common_dir}/english.0"},
    {"endings_root2word_db",		"${common_dir}/root2word.db"},
    {"endings_word2root_db",		"${common_dir}/word2root.db"},
    {"excerpt_length",			"300"},
    {"excerpt_show_top",		"false"},
    {"exclude_urls",			"/cgi-bin/ .cgi"},
    {"external_parsers",		""},
    {"extra_word_characters",		""},
    {"heading_factor_1",		"5"},
    {"heading_factor_2",		"4"},
    {"heading_factor_3",		"3"},
    {"heading_factor_4",		"1"},
    {"heading_factor_5",		"1"},
    {"heading_factor_6",		"0"},
    {"htnotify_sender",			"webmaster@www"},
    {"http_proxy",			""},
    {"http_proxy_exclude",		""},
    {"image_list",			"${database_base}.images"},
    {"iso_8601",                        "false"},
    {"keywords_factor",			"100"},
    {"keywords_meta_tag_names",		"keywords htdig-keywords"},
    {"limit_urls_to",			"${start_url}"},
    {"limit_normalized",                ""},
    {"locale",				"C"},
    {"local_default_doc",               "index.html"},
    {"local_urls",			""},
    {"local_urls_only",			"false"},
    {"local_user_urls",			""},
    {"logging",                         "false"},
    {"maintainer",			"bogus@unconfigured.htdig.user"},
    {"match_method",			"and"},
    {"matches_per_page",		"10"},
    {"max_description_length",		"60"},
    {"max_descriptions",                "5"},
    {"max_doc_size",			"100000"},
    {"max_head_length",			"512"},
    {"max_hop_count",			"999999"},
    {"max_keywords",			"-1"},
    {"max_meta_description_length",     "512"},
    {"max_prefix_matches",		"1000"},
    {"max_stars",			"4"},
    {"maximum_pages",			"10"},
    {"maximum_word_length",		"12"},
    {"metaphone_db",			"${database_base}.metaphone.db"},
    {"meta_description_factor",		"50"},
    {"method_names",			"and All or Any boolean Boolean"},
    {"minimum_word_length",		"3"},
    {"minimum_prefix_length",		"1"},
    {"modification_time_is_now",        "false"},
    {"next_page_text",			"[next]"},
    {"no_excerpt_text",			"<em>(None of the search words were found in the top of this document.)</em>"},
    {"no_excerpt_show_top",             "false"},
    {"noindex_start",                   "<!--htdig_noindex-->"},
    {"noindex_end",                     "<!--/htdig_noindex-->"},
    {"no_next_page_text",		"[next]"},
    {"no_page_list_header",		""},
    {"no_page_number_text",		""},
    {"no_prev_page_text",		"[prev]"},
    {"no_title_text",                   "filename"},
    {"nothing_found_file",		"${common_dir}/nomatch.html"},
    {"nph",				"false"},
    {"page_list_header",		"<hr noshade size=2>Pages:<br>"},
    {"page_number_separator",		"\" \""},
    {"page_number_text",		""},
    {"prefix_match_character",		"*"},
    {"prev_page_text",			"[prev]"},
    {"remove_bad_urls",			"true"},
    {"remove_default_doc",              "index.html"},
    {"robotstxt_name",			"htdig"},
    {"script_name",                     ""},
    {"search_algorithm",		"exact:1"},
    {"search_results_footer",		"${common_dir}/footer.html"},
    {"search_results_header",		"${common_dir}/header.html"},
    {"search_results_wrapper",		""},
    {"server_aliases",                  ""},
    {"server_wait_time",                "0"},
    {"server_max_docs",                 "-1"},
    {"sort",				"score"},
    {"sort_names",			"score Score time Time title Title revscore 'Reverse Score' revtime 'Reverse Time' revtitle 'Reverse Title'"},
    {"soundex_db",			"${database_base}.soundex.db"},
    {"star_blank",			"${image_url_prefix}/star_blank.gif"},
    {"star_image",			"${image_url_prefix}/star.gif"},
    {"star_patterns",			""},
    {"start_ellipses",			"<b><tt>... </tt></b>"},
    {"start_highlight",			"<strong>"},
    {"start_url",			"http://www.htdig.org/"},
    {"substring_max_words",		"25"},
    {"synonym_db",			"${common_dir}/synonyms.db"},
    {"synonym_dictionary",		"${common_dir}/synonyms"},
    {"syntax_error_file",		"${common_dir}/syntax.html"},
    {"template_map",			"Long builtin-long builtin-long Short builtin-short builtin-short"},
    {"template_name",			"builtin-long"},
    {"template_patterns",		""},
    {"text_factor",			"1"},
    {"timeout",				"30"},
    {"title_factor",			"100"},
    {"translate_amp",                   "false"},
    {"translate_lt_gt",                 "false"},
    {"translate_quot",                  "false"},
    {"url_list",			"${database_base}.urls"},
    {"url_part_aliases",                ""},
    {"url_log",				"${database_base}.log"},
    {"uncoded_db_compatible",		"true"},
    {"use_star_image",			"true"},
    {"use_meta_description",            "false"},
    {"user_agent",			"htdig"},
    {"valid_extensions",		""},
    {"valid_punctuation",		".-_/!#$%^&'"},
    {"word_db",				"${database_base}.words.db"},
    {"word_list",			"${database_base}.wordlist"},
    {0,					0},
};

Configuration	config;

