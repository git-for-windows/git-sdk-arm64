#ifdef CROSSTUSTART
__CROSSTUSTART = DIAG_START_CROSSTU,
#undef CROSSTUSTART
#endif

DIAG(err_ctu_error_opening, CLASS_ERROR, (unsigned)diag::Severity::Error, "error opening '%0': required by the CrossTU functionality", 0, SFINAE_SubstitutionFailure, false, true, true, false, 0, 30019, 0)
DIAG(err_ctu_import_failure, CLASS_ERROR, (unsigned)diag::Severity::Error, "import of an external symbol for CTU failed: %0", 0, SFINAE_SubstitutionFailure, false, true, true, false, 0, 30041, 0)
DIAG(err_extdefmap_parsing, CLASS_ERROR, (unsigned)diag::Severity::Error, "error parsing index file: '%0' line: %1 '<USR-Length>:<USR> <File-Path>' format expected", 0, SFINAE_SubstitutionFailure, false, true, true, false, 0, 49254, 0)
DIAG(err_invlist_parsing, CLASS_ERROR, (unsigned)diag::Severity::Error, "error parsing invocation list file: '%0' line: %1 '<source-file>: [<compiler>, <arg1>, ...]' YAML mapping format expected", 0, SFINAE_SubstitutionFailure, false, true, true, false, 0, 63903, 0)
DIAG(err_multiple_def_index, CLASS_ERROR, (unsigned)diag::Severity::Error, "multiple definitions are found for the same key in index", 0, SFINAE_SubstitutionFailure, false, true, true, false, 0, 73197, 0)
DIAG(remark_ctu_import_threshold_reached, CLASS_REMARK, (unsigned)diag::Severity::Ignored, "reached a the CTU-import threshold before trying to import definition", 222, SFINAE_Suppress, false, false, true, false, 0, 181553, 0)
DIAG(warn_ctu_import_failure, CLASS_WARNING, (unsigned)diag::Severity::Warning, "import of an external symbol for CTU failed: %0", 221, SFINAE_Suppress, false, false, true, false, 0, 193298, 0)
DIAG(warn_ctu_incompat_lang, CLASS_WARNING, (unsigned)diag::Severity::Warning, "imported AST from '%0' had been generated for a different language, current: %1, imported: %2", 221, SFINAE_Suppress, false, false, true, false, 0, 193322, 0)
DIAG(warn_ctu_incompat_triple, CLASS_WARNING, (unsigned)diag::Severity::Warning, "imported AST from '%0' had been generated for a different target, current: %1, imported: %2", 221, SFINAE_Suppress, false, false, true, false, 0, 193345, 0)
DIAG(warn_invlist_missing_file, CLASS_WARNING, (unsigned)diag::Severity::Warning, "invocation for '%0' is missing in the invocation list", 221, SFINAE_Suppress, false, false, true, false, 0, 215536, 0)
DIAG(warn_multiple_entries_invlist, CLASS_WARNING, (unsigned)diag::Severity::Warning, "multiple invocations for '%0' are found in the invocation list", 221, SFINAE_Suppress, false, false, true, false, 0, 219177, 0)
