#ifdef TRAPSTART
__TRAPSTART = DIAG_START_TRAP,
#undef TRAPSTART
#endif

DIAG(trap_ubsan_arith_overflow, CLASS_TRAP, (unsigned)diag::Severity::Fatal, "%select{unsigned|signed}0 integer %select{addition|subtraction|multiplication}1 overflow in %2", 0, SFINAE_Suppress, false, false, true, false, 34)
