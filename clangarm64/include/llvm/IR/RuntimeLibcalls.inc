/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Runtime LibCalls Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: RuntimeLibcalls.td                                                   *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_RUNTIME_LIBCALL_ENUM
namespace llvm {
namespace RTLIB {
enum Libcall : unsigned short {
  ACOS_F32 = 0,
  ACOS_F64 = 1,
  ACOS_F80 = 2,
  ACOS_F128 = 3,
  ACOS_PPCF128 = 4,
  ADD_F32 = 5,
  ADD_F64 = 6,
  ADD_F80 = 7,
  ADD_F128 = 8,
  ADD_PPCF128 = 9,
  AEABI_MEMCLR = 10,
  AEABI_MEMCLR4 = 11,
  AEABI_MEMCLR8 = 12,
  AEABI_MEMCPY4 = 13,
  AEABI_MEMCPY8 = 14,
  AEABI_MEMMOVE4 = 15,
  AEABI_MEMMOVE8 = 16,
  AEABI_MEMSET4 = 17,
  AEABI_MEMSET8 = 18,
  ASIN_F32 = 19,
  ASIN_F64 = 20,
  ASIN_F80 = 21,
  ASIN_F128 = 22,
  ASIN_PPCF128 = 23,
  ATAN2_F32 = 24,
  ATAN2_F64 = 25,
  ATAN2_F80 = 26,
  ATAN2_F128 = 27,
  ATAN2_PPCF128 = 28,
  ATAN_F32 = 29,
  ATAN_F64 = 30,
  ATAN_F80 = 31,
  ATAN_F128 = 32,
  ATAN_PPCF128 = 33,
  ATOMIC_COMPARE_EXCHANGE = 34,
  ATOMIC_COMPARE_EXCHANGE_1 = 35,
  ATOMIC_COMPARE_EXCHANGE_2 = 36,
  ATOMIC_COMPARE_EXCHANGE_4 = 37,
  ATOMIC_COMPARE_EXCHANGE_8 = 38,
  ATOMIC_COMPARE_EXCHANGE_16 = 39,
  ATOMIC_EXCHANGE = 40,
  ATOMIC_EXCHANGE_1 = 41,
  ATOMIC_EXCHANGE_2 = 42,
  ATOMIC_EXCHANGE_4 = 43,
  ATOMIC_EXCHANGE_8 = 44,
  ATOMIC_EXCHANGE_16 = 45,
  ATOMIC_FETCH_ADD_1 = 46,
  ATOMIC_FETCH_ADD_2 = 47,
  ATOMIC_FETCH_ADD_4 = 48,
  ATOMIC_FETCH_ADD_8 = 49,
  ATOMIC_FETCH_ADD_16 = 50,
  ATOMIC_FETCH_AND_1 = 51,
  ATOMIC_FETCH_AND_2 = 52,
  ATOMIC_FETCH_AND_4 = 53,
  ATOMIC_FETCH_AND_8 = 54,
  ATOMIC_FETCH_AND_16 = 55,
  ATOMIC_FETCH_NAND_1 = 56,
  ATOMIC_FETCH_NAND_2 = 57,
  ATOMIC_FETCH_NAND_4 = 58,
  ATOMIC_FETCH_NAND_8 = 59,
  ATOMIC_FETCH_NAND_16 = 60,
  ATOMIC_FETCH_OR_1 = 61,
  ATOMIC_FETCH_OR_2 = 62,
  ATOMIC_FETCH_OR_4 = 63,
  ATOMIC_FETCH_OR_8 = 64,
  ATOMIC_FETCH_OR_16 = 65,
  ATOMIC_FETCH_SUB_1 = 66,
  ATOMIC_FETCH_SUB_2 = 67,
  ATOMIC_FETCH_SUB_4 = 68,
  ATOMIC_FETCH_SUB_8 = 69,
  ATOMIC_FETCH_SUB_16 = 70,
  ATOMIC_FETCH_XOR_1 = 71,
  ATOMIC_FETCH_XOR_2 = 72,
  ATOMIC_FETCH_XOR_4 = 73,
  ATOMIC_FETCH_XOR_8 = 74,
  ATOMIC_FETCH_XOR_16 = 75,
  ATOMIC_LOAD = 76,
  ATOMIC_LOAD_1 = 77,
  ATOMIC_LOAD_2 = 78,
  ATOMIC_LOAD_4 = 79,
  ATOMIC_LOAD_8 = 80,
  ATOMIC_LOAD_16 = 81,
  ATOMIC_STORE = 82,
  ATOMIC_STORE_1 = 83,
  ATOMIC_STORE_2 = 84,
  ATOMIC_STORE_4 = 85,
  ATOMIC_STORE_8 = 86,
  ATOMIC_STORE_16 = 87,
  BZERO = 88,
  CALLOC = 89,
  CBRT_F32 = 90,
  CBRT_F64 = 91,
  CBRT_F80 = 92,
  CBRT_F128 = 93,
  CBRT_PPCF128 = 94,
  CEIL_F32 = 95,
  CEIL_F64 = 96,
  CEIL_F80 = 97,
  CEIL_F128 = 98,
  CEIL_PPCF128 = 99,
  CLEAR_CACHE = 100,
  CONVERT_F128_PPCF128 = 101,
  CONVERT_PPCF128_F128 = 102,
  COPYSIGN_F32 = 103,
  COPYSIGN_F64 = 104,
  COPYSIGN_F80 = 105,
  COPYSIGN_F128 = 106,
  COPYSIGN_PPCF128 = 107,
  COSH_F32 = 108,
  COSH_F64 = 109,
  COSH_F80 = 110,
  COSH_F128 = 111,
  COSH_PPCF128 = 112,
  COS_F32 = 113,
  COS_F64 = 114,
  COS_F80 = 115,
  COS_F128 = 116,
  COS_PPCF128 = 117,
  CTLZ_I32 = 118,
  CTLZ_I64 = 119,
  CTLZ_I128 = 120,
  CTPOP_I32 = 121,
  CTPOP_I64 = 122,
  CTPOP_I128 = 123,
  CXA_END_CLEANUP = 124,
  DEOPTIMIZE = 125,
  DIV_F32 = 126,
  DIV_F64 = 127,
  DIV_F80 = 128,
  DIV_F128 = 129,
  DIV_PPCF128 = 130,
  EXP2_F32 = 131,
  EXP2_F64 = 132,
  EXP2_F80 = 133,
  EXP2_F128 = 134,
  EXP2_FINITE_F32 = 135,
  EXP2_FINITE_F64 = 136,
  EXP2_FINITE_F80 = 137,
  EXP2_FINITE_F128 = 138,
  EXP2_FINITE_PPCF128 = 139,
  EXP2_PPCF128 = 140,
  EXP10_F32 = 141,
  EXP10_F64 = 142,
  EXP10_F80 = 143,
  EXP10_F128 = 144,
  EXP10_FINITE_F32 = 145,
  EXP10_FINITE_F64 = 146,
  EXP10_FINITE_F80 = 147,
  EXP10_FINITE_F128 = 148,
  EXP10_FINITE_PPCF128 = 149,
  EXP10_PPCF128 = 150,
  EXP_F32 = 151,
  EXP_F64 = 152,
  EXP_F80 = 153,
  EXP_F128 = 154,
  EXP_FINITE_F32 = 155,
  EXP_FINITE_F64 = 156,
  EXP_FINITE_F80 = 157,
  EXP_FINITE_F128 = 158,
  EXP_FINITE_PPCF128 = 159,
  EXP_PPCF128 = 160,
  FAST_ADD_F32 = 161,
  FAST_ADD_F64 = 162,
  FAST_ADD_F80 = 163,
  FAST_ADD_F128 = 164,
  FAST_ADD_PPCF128 = 165,
  FAST_DIV_F32 = 166,
  FAST_DIV_F64 = 167,
  FAST_DIV_F80 = 168,
  FAST_DIV_F128 = 169,
  FAST_DIV_PPCF128 = 170,
  FAST_MUL_F32 = 171,
  FAST_MUL_F64 = 172,
  FAST_MUL_F80 = 173,
  FAST_MUL_F128 = 174,
  FAST_MUL_PPCF128 = 175,
  FAST_SQRT_F32 = 176,
  FAST_SQRT_F64 = 177,
  FAST_SQRT_F80 = 178,
  FAST_SQRT_F128 = 179,
  FAST_SQRT_PPCF128 = 180,
  FAST_SUB_F32 = 181,
  FAST_SUB_F64 = 182,
  FAST_SUB_F80 = 183,
  FAST_SUB_F128 = 184,
  FAST_SUB_PPCF128 = 185,
  FEGETENV = 186,
  FEGETMODE = 187,
  FESETENV = 188,
  FESETMODE = 189,
  FLOOR_F32 = 190,
  FLOOR_F64 = 191,
  FLOOR_F80 = 192,
  FLOOR_F128 = 193,
  FLOOR_PPCF128 = 194,
  FMAXIMUM_F32 = 195,
  FMAXIMUM_F64 = 196,
  FMAXIMUM_F80 = 197,
  FMAXIMUM_F128 = 198,
  FMAXIMUM_NUM_F32 = 199,
  FMAXIMUM_NUM_F64 = 200,
  FMAXIMUM_NUM_F80 = 201,
  FMAXIMUM_NUM_F128 = 202,
  FMAXIMUM_NUM_PPCF128 = 203,
  FMAXIMUM_PPCF128 = 204,
  FMAX_F32 = 205,
  FMAX_F64 = 206,
  FMAX_F80 = 207,
  FMAX_F128 = 208,
  FMAX_PPCF128 = 209,
  FMA_F32 = 210,
  FMA_F64 = 211,
  FMA_F80 = 212,
  FMA_F128 = 213,
  FMA_PPCF128 = 214,
  FMINIMUM_F32 = 215,
  FMINIMUM_F64 = 216,
  FMINIMUM_F80 = 217,
  FMINIMUM_F128 = 218,
  FMINIMUM_NUM_F32 = 219,
  FMINIMUM_NUM_F64 = 220,
  FMINIMUM_NUM_F80 = 221,
  FMINIMUM_NUM_F128 = 222,
  FMINIMUM_NUM_PPCF128 = 223,
  FMINIMUM_PPCF128 = 224,
  FMIN_F32 = 225,
  FMIN_F64 = 226,
  FMIN_F80 = 227,
  FMIN_F128 = 228,
  FMIN_PPCF128 = 229,
  FPEXT_BF16_F32 = 230,
  FPEXT_F16_F32 = 231,
  FPEXT_F16_F64 = 232,
  FPEXT_F16_F80 = 233,
  FPEXT_F16_F128 = 234,
  FPEXT_F32_F64 = 235,
  FPEXT_F32_F128 = 236,
  FPEXT_F32_PPCF128 = 237,
  FPEXT_F64_F128 = 238,
  FPEXT_F64_PPCF128 = 239,
  FPEXT_F80_F128 = 240,
  FPROUND_F32_BF16 = 241,
  FPROUND_F32_F16 = 242,
  FPROUND_F64_BF16 = 243,
  FPROUND_F64_F16 = 244,
  FPROUND_F64_F32 = 245,
  FPROUND_F80_BF16 = 246,
  FPROUND_F80_F16 = 247,
  FPROUND_F80_F32 = 248,
  FPROUND_F80_F64 = 249,
  FPROUND_F128_BF16 = 250,
  FPROUND_F128_F16 = 251,
  FPROUND_F128_F32 = 252,
  FPROUND_F128_F64 = 253,
  FPROUND_F128_F80 = 254,
  FPROUND_PPCF128_F16 = 255,
  FPROUND_PPCF128_F32 = 256,
  FPROUND_PPCF128_F64 = 257,
  FPTOSINT_F16_I32 = 258,
  FPTOSINT_F16_I64 = 259,
  FPTOSINT_F16_I128 = 260,
  FPTOSINT_F32_I32 = 261,
  FPTOSINT_F32_I64 = 262,
  FPTOSINT_F32_I128 = 263,
  FPTOSINT_F64_I32 = 264,
  FPTOSINT_F64_I64 = 265,
  FPTOSINT_F64_I128 = 266,
  FPTOSINT_F80_I32 = 267,
  FPTOSINT_F80_I64 = 268,
  FPTOSINT_F80_I128 = 269,
  FPTOSINT_F128_I32 = 270,
  FPTOSINT_F128_I64 = 271,
  FPTOSINT_F128_I128 = 272,
  FPTOSINT_PPCF128_I32 = 273,
  FPTOSINT_PPCF128_I64 = 274,
  FPTOSINT_PPCF128_I128 = 275,
  FPTOUINT_F16_I32 = 276,
  FPTOUINT_F16_I64 = 277,
  FPTOUINT_F16_I128 = 278,
  FPTOUINT_F32_I32 = 279,
  FPTOUINT_F32_I64 = 280,
  FPTOUINT_F32_I128 = 281,
  FPTOUINT_F64_I32 = 282,
  FPTOUINT_F64_I64 = 283,
  FPTOUINT_F64_I128 = 284,
  FPTOUINT_F80_I32 = 285,
  FPTOUINT_F80_I64 = 286,
  FPTOUINT_F80_I128 = 287,
  FPTOUINT_F128_I32 = 288,
  FPTOUINT_F128_I64 = 289,
  FPTOUINT_F128_I128 = 290,
  FPTOUINT_PPCF128_I32 = 291,
  FPTOUINT_PPCF128_I64 = 292,
  FPTOUINT_PPCF128_I128 = 293,
  FREXP_F32 = 294,
  FREXP_F64 = 295,
  FREXP_F80 = 296,
  FREXP_F128 = 297,
  FREXP_PPCF128 = 298,
  HEXAGON_MEMCPY_LIKELY_ALIGNED_MIN32BYTES_MULT8BYTES = 299,
  LDEXP_F32 = 300,
  LDEXP_F64 = 301,
  LDEXP_F80 = 302,
  LDEXP_F128 = 303,
  LDEXP_PPCF128 = 304,
  LLRINT_F32 = 305,
  LLRINT_F64 = 306,
  LLRINT_F80 = 307,
  LLRINT_F128 = 308,
  LLRINT_PPCF128 = 309,
  LLROUND_F32 = 310,
  LLROUND_F64 = 311,
  LLROUND_F80 = 312,
  LLROUND_F128 = 313,
  LLROUND_PPCF128 = 314,
  LOG2_F32 = 315,
  LOG2_F64 = 316,
  LOG2_F80 = 317,
  LOG2_F128 = 318,
  LOG2_FINITE_F32 = 319,
  LOG2_FINITE_F64 = 320,
  LOG2_FINITE_F80 = 321,
  LOG2_FINITE_F128 = 322,
  LOG2_FINITE_PPCF128 = 323,
  LOG2_PPCF128 = 324,
  LOG10_F32 = 325,
  LOG10_F64 = 326,
  LOG10_F80 = 327,
  LOG10_F128 = 328,
  LOG10_FINITE_F32 = 329,
  LOG10_FINITE_F64 = 330,
  LOG10_FINITE_F80 = 331,
  LOG10_FINITE_F128 = 332,
  LOG10_FINITE_PPCF128 = 333,
  LOG10_PPCF128 = 334,
  LOG_F32 = 335,
  LOG_F64 = 336,
  LOG_F80 = 337,
  LOG_F128 = 338,
  LOG_FINITE_F32 = 339,
  LOG_FINITE_F64 = 340,
  LOG_FINITE_F80 = 341,
  LOG_FINITE_F128 = 342,
  LOG_FINITE_PPCF128 = 343,
  LOG_PPCF128 = 344,
  LRINT_F32 = 345,
  LRINT_F64 = 346,
  LRINT_F80 = 347,
  LRINT_F128 = 348,
  LRINT_PPCF128 = 349,
  LROUND_F32 = 350,
  LROUND_F64 = 351,
  LROUND_F80 = 352,
  LROUND_F128 = 353,
  LROUND_PPCF128 = 354,
  MEMCPY = 355,
  MEMCPY_ALIGN_4 = 356,
  MEMCPY_ELEMENT_UNORDERED_ATOMIC_1 = 357,
  MEMCPY_ELEMENT_UNORDERED_ATOMIC_2 = 358,
  MEMCPY_ELEMENT_UNORDERED_ATOMIC_4 = 359,
  MEMCPY_ELEMENT_UNORDERED_ATOMIC_8 = 360,
  MEMCPY_ELEMENT_UNORDERED_ATOMIC_16 = 361,
  MEMMOVE = 362,
  MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1 = 363,
  MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2 = 364,
  MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4 = 365,
  MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8 = 366,
  MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16 = 367,
  MEMSET = 368,
  MEMSET_ELEMENT_UNORDERED_ATOMIC_1 = 369,
  MEMSET_ELEMENT_UNORDERED_ATOMIC_2 = 370,
  MEMSET_ELEMENT_UNORDERED_ATOMIC_4 = 371,
  MEMSET_ELEMENT_UNORDERED_ATOMIC_8 = 372,
  MEMSET_ELEMENT_UNORDERED_ATOMIC_16 = 373,
  MIPS16_RET_DC = 374,
  MIPS16_RET_DF = 375,
  MIPS16_RET_SC = 376,
  MIPS16_RET_SF = 377,
  MODF_F32 = 378,
  MODF_F64 = 379,
  MODF_F80 = 380,
  MODF_F128 = 381,
  MODF_PPCF128 = 382,
  MULO_I32 = 383,
  MULO_I64 = 384,
  MULO_I128 = 385,
  MUL_F32 = 386,
  MUL_F64 = 387,
  MUL_F80 = 388,
  MUL_F128 = 389,
  MUL_I8 = 390,
  MUL_I16 = 391,
  MUL_I32 = 392,
  MUL_I64 = 393,
  MUL_I128 = 394,
  MUL_PPCF128 = 395,
  NEARBYINT_F32 = 396,
  NEARBYINT_F64 = 397,
  NEARBYINT_F80 = 398,
  NEARBYINT_F128 = 399,
  NEARBYINT_PPCF128 = 400,
  NEG_I32 = 401,
  NEG_I64 = 402,
  OBJC_AUTORELEASE = 403,
  OBJC_AUTORELEASEPOOLPOP = 404,
  OBJC_AUTORELEASEPOOLPUSH = 405,
  OBJC_AUTORELEASERETURNVALUE = 406,
  OBJC_CLAIMAUTORELEASEDRETURNVALUE = 407,
  OBJC_COPYWEAK = 408,
  OBJC_DESTROYWEAK = 409,
  OBJC_INITWEAK = 410,
  OBJC_LOADWEAK = 411,
  OBJC_LOADWEAKRETAINED = 412,
  OBJC_MOVEWEAK = 413,
  OBJC_RELEASE = 414,
  OBJC_RETAIN = 415,
  OBJC_RETAINAUTORELEASE = 416,
  OBJC_RETAINAUTORELEASEDRETURNVALUE = 417,
  OBJC_RETAINAUTORELEASERETURNVALUE = 418,
  OBJC_RETAINBLOCK = 419,
  OBJC_RETAINEDOBJECT = 420,
  OBJC_RETAIN_AUTORELEASE = 421,
  OBJC_STORESTRONG = 422,
  OBJC_STOREWEAK = 423,
  OBJC_SYNC_ENTER = 424,
  OBJC_SYNC_EXIT = 425,
  OBJC_UNRETAINEDOBJECT = 426,
  OBJC_UNRETAINEDPOINTER = 427,
  OBJC_UNSAFECLAIMAUTORELEASEDRETURNVALUE = 428,
  OEQ_F32 = 429,
  OEQ_F64 = 430,
  OEQ_F128 = 431,
  OEQ_PPCF128 = 432,
  OGE_F32 = 433,
  OGE_F64 = 434,
  OGE_F128 = 435,
  OGE_PPCF128 = 436,
  OGT_F32 = 437,
  OGT_F64 = 438,
  OGT_F128 = 439,
  OGT_PPCF128 = 440,
  OLE_F32 = 441,
  OLE_F64 = 442,
  OLE_F128 = 443,
  OLE_PPCF128 = 444,
  OLT_F32 = 445,
  OLT_F64 = 446,
  OLT_F128 = 447,
  OLT_PPCF128 = 448,
  OUTLINE_ATOMIC_CAS1_ACQ = 449,
  OUTLINE_ATOMIC_CAS1_ACQ_REL = 450,
  OUTLINE_ATOMIC_CAS1_REL = 451,
  OUTLINE_ATOMIC_CAS1_RELAX = 452,
  OUTLINE_ATOMIC_CAS2_ACQ = 453,
  OUTLINE_ATOMIC_CAS2_ACQ_REL = 454,
  OUTLINE_ATOMIC_CAS2_REL = 455,
  OUTLINE_ATOMIC_CAS2_RELAX = 456,
  OUTLINE_ATOMIC_CAS4_ACQ = 457,
  OUTLINE_ATOMIC_CAS4_ACQ_REL = 458,
  OUTLINE_ATOMIC_CAS4_REL = 459,
  OUTLINE_ATOMIC_CAS4_RELAX = 460,
  OUTLINE_ATOMIC_CAS8_ACQ = 461,
  OUTLINE_ATOMIC_CAS8_ACQ_REL = 462,
  OUTLINE_ATOMIC_CAS8_REL = 463,
  OUTLINE_ATOMIC_CAS8_RELAX = 464,
  OUTLINE_ATOMIC_CAS16_ACQ = 465,
  OUTLINE_ATOMIC_CAS16_ACQ_REL = 466,
  OUTLINE_ATOMIC_CAS16_REL = 467,
  OUTLINE_ATOMIC_CAS16_RELAX = 468,
  OUTLINE_ATOMIC_LDADD1_ACQ = 469,
  OUTLINE_ATOMIC_LDADD1_ACQ_REL = 470,
  OUTLINE_ATOMIC_LDADD1_REL = 471,
  OUTLINE_ATOMIC_LDADD1_RELAX = 472,
  OUTLINE_ATOMIC_LDADD2_ACQ = 473,
  OUTLINE_ATOMIC_LDADD2_ACQ_REL = 474,
  OUTLINE_ATOMIC_LDADD2_REL = 475,
  OUTLINE_ATOMIC_LDADD2_RELAX = 476,
  OUTLINE_ATOMIC_LDADD4_ACQ = 477,
  OUTLINE_ATOMIC_LDADD4_ACQ_REL = 478,
  OUTLINE_ATOMIC_LDADD4_REL = 479,
  OUTLINE_ATOMIC_LDADD4_RELAX = 480,
  OUTLINE_ATOMIC_LDADD8_ACQ = 481,
  OUTLINE_ATOMIC_LDADD8_ACQ_REL = 482,
  OUTLINE_ATOMIC_LDADD8_REL = 483,
  OUTLINE_ATOMIC_LDADD8_RELAX = 484,
  OUTLINE_ATOMIC_LDADD16_ACQ = 485,
  OUTLINE_ATOMIC_LDADD16_ACQ_REL = 486,
  OUTLINE_ATOMIC_LDADD16_REL = 487,
  OUTLINE_ATOMIC_LDADD16_RELAX = 488,
  OUTLINE_ATOMIC_LDCLR1_ACQ = 489,
  OUTLINE_ATOMIC_LDCLR1_ACQ_REL = 490,
  OUTLINE_ATOMIC_LDCLR1_REL = 491,
  OUTLINE_ATOMIC_LDCLR1_RELAX = 492,
  OUTLINE_ATOMIC_LDCLR2_ACQ = 493,
  OUTLINE_ATOMIC_LDCLR2_ACQ_REL = 494,
  OUTLINE_ATOMIC_LDCLR2_REL = 495,
  OUTLINE_ATOMIC_LDCLR2_RELAX = 496,
  OUTLINE_ATOMIC_LDCLR4_ACQ = 497,
  OUTLINE_ATOMIC_LDCLR4_ACQ_REL = 498,
  OUTLINE_ATOMIC_LDCLR4_REL = 499,
  OUTLINE_ATOMIC_LDCLR4_RELAX = 500,
  OUTLINE_ATOMIC_LDCLR8_ACQ = 501,
  OUTLINE_ATOMIC_LDCLR8_ACQ_REL = 502,
  OUTLINE_ATOMIC_LDCLR8_REL = 503,
  OUTLINE_ATOMIC_LDCLR8_RELAX = 504,
  OUTLINE_ATOMIC_LDCLR16_ACQ = 505,
  OUTLINE_ATOMIC_LDCLR16_ACQ_REL = 506,
  OUTLINE_ATOMIC_LDCLR16_REL = 507,
  OUTLINE_ATOMIC_LDCLR16_RELAX = 508,
  OUTLINE_ATOMIC_LDEOR1_ACQ = 509,
  OUTLINE_ATOMIC_LDEOR1_ACQ_REL = 510,
  OUTLINE_ATOMIC_LDEOR1_REL = 511,
  OUTLINE_ATOMIC_LDEOR1_RELAX = 512,
  OUTLINE_ATOMIC_LDEOR2_ACQ = 513,
  OUTLINE_ATOMIC_LDEOR2_ACQ_REL = 514,
  OUTLINE_ATOMIC_LDEOR2_REL = 515,
  OUTLINE_ATOMIC_LDEOR2_RELAX = 516,
  OUTLINE_ATOMIC_LDEOR4_ACQ = 517,
  OUTLINE_ATOMIC_LDEOR4_ACQ_REL = 518,
  OUTLINE_ATOMIC_LDEOR4_REL = 519,
  OUTLINE_ATOMIC_LDEOR4_RELAX = 520,
  OUTLINE_ATOMIC_LDEOR8_ACQ = 521,
  OUTLINE_ATOMIC_LDEOR8_ACQ_REL = 522,
  OUTLINE_ATOMIC_LDEOR8_REL = 523,
  OUTLINE_ATOMIC_LDEOR8_RELAX = 524,
  OUTLINE_ATOMIC_LDEOR16_ACQ = 525,
  OUTLINE_ATOMIC_LDEOR16_ACQ_REL = 526,
  OUTLINE_ATOMIC_LDEOR16_REL = 527,
  OUTLINE_ATOMIC_LDEOR16_RELAX = 528,
  OUTLINE_ATOMIC_LDSET1_ACQ = 529,
  OUTLINE_ATOMIC_LDSET1_ACQ_REL = 530,
  OUTLINE_ATOMIC_LDSET1_REL = 531,
  OUTLINE_ATOMIC_LDSET1_RELAX = 532,
  OUTLINE_ATOMIC_LDSET2_ACQ = 533,
  OUTLINE_ATOMIC_LDSET2_ACQ_REL = 534,
  OUTLINE_ATOMIC_LDSET2_REL = 535,
  OUTLINE_ATOMIC_LDSET2_RELAX = 536,
  OUTLINE_ATOMIC_LDSET4_ACQ = 537,
  OUTLINE_ATOMIC_LDSET4_ACQ_REL = 538,
  OUTLINE_ATOMIC_LDSET4_REL = 539,
  OUTLINE_ATOMIC_LDSET4_RELAX = 540,
  OUTLINE_ATOMIC_LDSET8_ACQ = 541,
  OUTLINE_ATOMIC_LDSET8_ACQ_REL = 542,
  OUTLINE_ATOMIC_LDSET8_REL = 543,
  OUTLINE_ATOMIC_LDSET8_RELAX = 544,
  OUTLINE_ATOMIC_LDSET16_ACQ = 545,
  OUTLINE_ATOMIC_LDSET16_ACQ_REL = 546,
  OUTLINE_ATOMIC_LDSET16_REL = 547,
  OUTLINE_ATOMIC_LDSET16_RELAX = 548,
  OUTLINE_ATOMIC_SWP1_ACQ = 549,
  OUTLINE_ATOMIC_SWP1_ACQ_REL = 550,
  OUTLINE_ATOMIC_SWP1_REL = 551,
  OUTLINE_ATOMIC_SWP1_RELAX = 552,
  OUTLINE_ATOMIC_SWP2_ACQ = 553,
  OUTLINE_ATOMIC_SWP2_ACQ_REL = 554,
  OUTLINE_ATOMIC_SWP2_REL = 555,
  OUTLINE_ATOMIC_SWP2_RELAX = 556,
  OUTLINE_ATOMIC_SWP4_ACQ = 557,
  OUTLINE_ATOMIC_SWP4_ACQ_REL = 558,
  OUTLINE_ATOMIC_SWP4_REL = 559,
  OUTLINE_ATOMIC_SWP4_RELAX = 560,
  OUTLINE_ATOMIC_SWP8_ACQ = 561,
  OUTLINE_ATOMIC_SWP8_ACQ_REL = 562,
  OUTLINE_ATOMIC_SWP8_REL = 563,
  OUTLINE_ATOMIC_SWP8_RELAX = 564,
  OUTLINE_ATOMIC_SWP16_ACQ = 565,
  OUTLINE_ATOMIC_SWP16_ACQ_REL = 566,
  OUTLINE_ATOMIC_SWP16_REL = 567,
  OUTLINE_ATOMIC_SWP16_RELAX = 568,
  POWI_F32 = 569,
  POWI_F64 = 570,
  POWI_F80 = 571,
  POWI_F128 = 572,
  POWI_PPCF128 = 573,
  POW_F32 = 574,
  POW_F64 = 575,
  POW_F80 = 576,
  POW_F128 = 577,
  POW_FINITE_F32 = 578,
  POW_FINITE_F64 = 579,
  POW_FINITE_F80 = 580,
  POW_FINITE_F128 = 581,
  POW_FINITE_PPCF128 = 582,
  POW_PPCF128 = 583,
  REM_F32 = 584,
  REM_F64 = 585,
  REM_F80 = 586,
  REM_F128 = 587,
  REM_PPCF128 = 588,
  RETURN_ADDRESS = 589,
  RINT_F32 = 590,
  RINT_F64 = 591,
  RINT_F80 = 592,
  RINT_F128 = 593,
  RINT_PPCF128 = 594,
  RISCV_FLUSH_ICACHE = 595,
  ROUNDEVEN_F32 = 596,
  ROUNDEVEN_F64 = 597,
  ROUNDEVEN_F80 = 598,
  ROUNDEVEN_F128 = 599,
  ROUNDEVEN_PPCF128 = 600,
  ROUND_F32 = 601,
  ROUND_F64 = 602,
  ROUND_F80 = 603,
  ROUND_F128 = 604,
  ROUND_PPCF128 = 605,
  SAFESTACK_POINTER_ADDRESS = 606,
  SC_MEMCPY = 607,
  SC_MEMMOVE = 608,
  SC_MEMSET = 609,
  SDIVREM_I8 = 610,
  SDIVREM_I16 = 611,
  SDIVREM_I32 = 612,
  SDIVREM_I64 = 613,
  SDIVREM_I128 = 614,
  SDIV_I8 = 615,
  SDIV_I16 = 616,
  SDIV_I32 = 617,
  SDIV_I64 = 618,
  SDIV_I128 = 619,
  SHL_I16 = 620,
  SHL_I32 = 621,
  SHL_I64 = 622,
  SHL_I128 = 623,
  SINCOSPI_F32 = 624,
  SINCOSPI_F64 = 625,
  SINCOSPI_F80 = 626,
  SINCOSPI_F128 = 627,
  SINCOSPI_PPCF128 = 628,
  SINCOS_F32 = 629,
  SINCOS_F64 = 630,
  SINCOS_F80 = 631,
  SINCOS_F128 = 632,
  SINCOS_PPCF128 = 633,
  SINCOS_STRET_F32 = 634,
  SINCOS_STRET_F64 = 635,
  SINH_F32 = 636,
  SINH_F64 = 637,
  SINH_F80 = 638,
  SINH_F128 = 639,
  SINH_PPCF128 = 640,
  SINTTOFP_I32_F16 = 641,
  SINTTOFP_I32_F32 = 642,
  SINTTOFP_I32_F64 = 643,
  SINTTOFP_I32_F80 = 644,
  SINTTOFP_I32_F128 = 645,
  SINTTOFP_I32_PPCF128 = 646,
  SINTTOFP_I64_BF16 = 647,
  SINTTOFP_I64_F16 = 648,
  SINTTOFP_I64_F32 = 649,
  SINTTOFP_I64_F64 = 650,
  SINTTOFP_I64_F80 = 651,
  SINTTOFP_I64_F128 = 652,
  SINTTOFP_I64_PPCF128 = 653,
  SINTTOFP_I128_F16 = 654,
  SINTTOFP_I128_F32 = 655,
  SINTTOFP_I128_F64 = 656,
  SINTTOFP_I128_F80 = 657,
  SINTTOFP_I128_F128 = 658,
  SINTTOFP_I128_PPCF128 = 659,
  SIN_F32 = 660,
  SIN_F64 = 661,
  SIN_F80 = 662,
  SIN_F128 = 663,
  SIN_PPCF128 = 664,
  SQRT_F32 = 665,
  SQRT_F64 = 666,
  SQRT_F80 = 667,
  SQRT_F128 = 668,
  SQRT_PPCF128 = 669,
  SRA_I16 = 670,
  SRA_I32 = 671,
  SRA_I64 = 672,
  SRA_I128 = 673,
  SREM_I8 = 674,
  SREM_I16 = 675,
  SREM_I32 = 676,
  SREM_I64 = 677,
  SREM_I128 = 678,
  SRL_I16 = 679,
  SRL_I32 = 680,
  SRL_I64 = 681,
  SRL_I128 = 682,
  STACKPROTECTOR_CHECK_FAIL = 683,
  STACK_SMASH_HANDLER = 684,
  SUB_F32 = 685,
  SUB_F64 = 686,
  SUB_F80 = 687,
  SUB_F128 = 688,
  SUB_PPCF128 = 689,
  SYNC_FETCH_AND_ADD_1 = 690,
  SYNC_FETCH_AND_ADD_2 = 691,
  SYNC_FETCH_AND_ADD_4 = 692,
  SYNC_FETCH_AND_ADD_8 = 693,
  SYNC_FETCH_AND_ADD_16 = 694,
  SYNC_FETCH_AND_AND_1 = 695,
  SYNC_FETCH_AND_AND_2 = 696,
  SYNC_FETCH_AND_AND_4 = 697,
  SYNC_FETCH_AND_AND_8 = 698,
  SYNC_FETCH_AND_AND_16 = 699,
  SYNC_FETCH_AND_MAX_1 = 700,
  SYNC_FETCH_AND_MAX_2 = 701,
  SYNC_FETCH_AND_MAX_4 = 702,
  SYNC_FETCH_AND_MAX_8 = 703,
  SYNC_FETCH_AND_MAX_16 = 704,
  SYNC_FETCH_AND_MIN_1 = 705,
  SYNC_FETCH_AND_MIN_2 = 706,
  SYNC_FETCH_AND_MIN_4 = 707,
  SYNC_FETCH_AND_MIN_8 = 708,
  SYNC_FETCH_AND_MIN_16 = 709,
  SYNC_FETCH_AND_NAND_1 = 710,
  SYNC_FETCH_AND_NAND_2 = 711,
  SYNC_FETCH_AND_NAND_4 = 712,
  SYNC_FETCH_AND_NAND_8 = 713,
  SYNC_FETCH_AND_NAND_16 = 714,
  SYNC_FETCH_AND_OR_1 = 715,
  SYNC_FETCH_AND_OR_2 = 716,
  SYNC_FETCH_AND_OR_4 = 717,
  SYNC_FETCH_AND_OR_8 = 718,
  SYNC_FETCH_AND_OR_16 = 719,
  SYNC_FETCH_AND_SUB_1 = 720,
  SYNC_FETCH_AND_SUB_2 = 721,
  SYNC_FETCH_AND_SUB_4 = 722,
  SYNC_FETCH_AND_SUB_8 = 723,
  SYNC_FETCH_AND_SUB_16 = 724,
  SYNC_FETCH_AND_UMAX_1 = 725,
  SYNC_FETCH_AND_UMAX_2 = 726,
  SYNC_FETCH_AND_UMAX_4 = 727,
  SYNC_FETCH_AND_UMAX_8 = 728,
  SYNC_FETCH_AND_UMAX_16 = 729,
  SYNC_FETCH_AND_UMIN_1 = 730,
  SYNC_FETCH_AND_UMIN_2 = 731,
  SYNC_FETCH_AND_UMIN_4 = 732,
  SYNC_FETCH_AND_UMIN_8 = 733,
  SYNC_FETCH_AND_UMIN_16 = 734,
  SYNC_FETCH_AND_XOR_1 = 735,
  SYNC_FETCH_AND_XOR_2 = 736,
  SYNC_FETCH_AND_XOR_4 = 737,
  SYNC_FETCH_AND_XOR_8 = 738,
  SYNC_FETCH_AND_XOR_16 = 739,
  SYNC_LOCK_TEST_AND_SET_1 = 740,
  SYNC_LOCK_TEST_AND_SET_2 = 741,
  SYNC_LOCK_TEST_AND_SET_4 = 742,
  SYNC_LOCK_TEST_AND_SET_8 = 743,
  SYNC_LOCK_TEST_AND_SET_16 = 744,
  SYNC_VAL_COMPARE_AND_SWAP_1 = 745,
  SYNC_VAL_COMPARE_AND_SWAP_2 = 746,
  SYNC_VAL_COMPARE_AND_SWAP_4 = 747,
  SYNC_VAL_COMPARE_AND_SWAP_8 = 748,
  SYNC_VAL_COMPARE_AND_SWAP_16 = 749,
  TANH_F32 = 750,
  TANH_F64 = 751,
  TANH_F80 = 752,
  TANH_F128 = 753,
  TANH_PPCF128 = 754,
  TAN_F32 = 755,
  TAN_F64 = 756,
  TAN_F80 = 757,
  TAN_F128 = 758,
  TAN_PPCF128 = 759,
  TRUNC_F32 = 760,
  TRUNC_F64 = 761,
  TRUNC_F80 = 762,
  TRUNC_F128 = 763,
  TRUNC_PPCF128 = 764,
  UDIVREM_I8 = 765,
  UDIVREM_I16 = 766,
  UDIVREM_I32 = 767,
  UDIVREM_I64 = 768,
  UDIVREM_I128 = 769,
  UDIV_I8 = 770,
  UDIV_I16 = 771,
  UDIV_I32 = 772,
  UDIV_I64 = 773,
  UDIV_I128 = 774,
  UINTTOFP_I32_F16 = 775,
  UINTTOFP_I32_F32 = 776,
  UINTTOFP_I32_F64 = 777,
  UINTTOFP_I32_F80 = 778,
  UINTTOFP_I32_F128 = 779,
  UINTTOFP_I32_PPCF128 = 780,
  UINTTOFP_I64_BF16 = 781,
  UINTTOFP_I64_F16 = 782,
  UINTTOFP_I64_F32 = 783,
  UINTTOFP_I64_F64 = 784,
  UINTTOFP_I64_F80 = 785,
  UINTTOFP_I64_F128 = 786,
  UINTTOFP_I64_PPCF128 = 787,
  UINTTOFP_I128_F16 = 788,
  UINTTOFP_I128_F32 = 789,
  UINTTOFP_I128_F64 = 790,
  UINTTOFP_I128_F80 = 791,
  UINTTOFP_I128_F128 = 792,
  UINTTOFP_I128_PPCF128 = 793,
  UNE_F32 = 794,
  UNE_F64 = 795,
  UNE_F128 = 796,
  UNE_PPCF128 = 797,
  UNWIND_CALL_PERSONALITY = 798,
  UNWIND_REGISTER = 799,
  UNWIND_RESUME = 800,
  UNWIND_UNREGISTER = 801,
  UO_F32 = 802,
  UO_F64 = 803,
  UO_F128 = 804,
  UO_PPCF128 = 805,
  UREM_I8 = 806,
  UREM_I16 = 807,
  UREM_I32 = 808,
  UREM_I64 = 809,
  UREM_I128 = 810,
  UNKNOWN_LIBCALL = 811
};

enum LibcallImpl : unsigned short {
  Unsupported = 0,
  _Q_add = 1, // _Q_add
  _Q_div = 2, // _Q_div
  _Q_dtoq = 3, // _Q_dtoq
  _Q_itoq = 4, // _Q_itoq
  _Q_lltoq = 5, // _Q_lltoq
  _Q_mul = 6, // _Q_mul
  _Q_qtod = 7, // _Q_qtod
  _Q_qtoi = 8, // _Q_qtoi
  _Q_qtoll = 9, // _Q_qtoll
  _Q_qtos = 10, // _Q_qtos
  _Q_qtou = 11, // _Q_qtou
  _Q_qtoull = 12, // _Q_qtoull
  _Q_sqrt = 13, // _Q_sqrt
  _Q_stoq = 14, // _Q_stoq
  _Q_sub = 15, // _Q_sub
  _Q_ulltoq = 16, // _Q_ulltoq
  _Q_utoq = 17, // _Q_utoq
  _Qp_add = 18, // _Qp_add
  _Qp_div = 19, // _Qp_div
  _Qp_dtoq = 20, // _Qp_dtoq
  _Qp_itoq = 21, // _Qp_itoq
  _Qp_mul = 22, // _Qp_mul
  _Qp_qtod = 23, // _Qp_qtod
  _Qp_qtoi = 24, // _Qp_qtoi
  _Qp_qtos = 25, // _Qp_qtos
  _Qp_qtoui = 26, // _Qp_qtoui
  _Qp_qtoux = 27, // _Qp_qtoux
  _Qp_qtox = 28, // _Qp_qtox
  _Qp_sqrt = 29, // _Qp_sqrt
  _Qp_stoq = 30, // _Qp_stoq
  _Qp_sub = 31, // _Qp_sub
  _Qp_uitoq = 32, // _Qp_uitoq
  _Qp_uxtoq = 33, // _Qp_uxtoq
  _Qp_xtoq = 34, // _Qp_xtoq
  _Unwind_CallPersonality = 35, // _Unwind_CallPersonality
  _Unwind_Resume = 36, // _Unwind_Resume
  _Unwind_SjLj_Register = 37, // _Unwind_SjLj_Register
  _Unwind_SjLj_Resume = 38, // _Unwind_SjLj_Resume
  _Unwind_SjLj_Unregister = 39, // _Unwind_SjLj_Unregister
  ___bzero = 40, // ___bzero
  ___bzero64 = 41, // ___bzero64
  ___memmove = 42, // ___memmove
  ___memmove64 = 43, // ___memmove64
  ___memset = 44, // ___memset
  ___memset64 = 45, // ___memset64
  __aarch64_cas1_acq = 46, // __aarch64_cas1_acq
  __aarch64_cas1_acq_rel = 47, // __aarch64_cas1_acq_rel
  __aarch64_cas1_rel = 48, // __aarch64_cas1_rel
  __aarch64_cas1_relax = 49, // __aarch64_cas1_relax
  __aarch64_cas2_acq = 50, // __aarch64_cas2_acq
  __aarch64_cas2_acq_rel = 51, // __aarch64_cas2_acq_rel
  __aarch64_cas2_rel = 52, // __aarch64_cas2_rel
  __aarch64_cas2_relax = 53, // __aarch64_cas2_relax
  __aarch64_cas4_acq = 54, // __aarch64_cas4_acq
  __aarch64_cas4_acq_rel = 55, // __aarch64_cas4_acq_rel
  __aarch64_cas4_rel = 56, // __aarch64_cas4_rel
  __aarch64_cas4_relax = 57, // __aarch64_cas4_relax
  __aarch64_cas8_acq = 58, // __aarch64_cas8_acq
  __aarch64_cas8_acq_rel = 59, // __aarch64_cas8_acq_rel
  __aarch64_cas8_rel = 60, // __aarch64_cas8_rel
  __aarch64_cas8_relax = 61, // __aarch64_cas8_relax
  __aarch64_cas16_acq = 62, // __aarch64_cas16_acq
  __aarch64_cas16_acq_rel = 63, // __aarch64_cas16_acq_rel
  __aarch64_cas16_rel = 64, // __aarch64_cas16_rel
  __aarch64_cas16_relax = 65, // __aarch64_cas16_relax
  __aarch64_ldadd1_acq = 66, // __aarch64_ldadd1_acq
  __aarch64_ldadd1_acq_rel = 67, // __aarch64_ldadd1_acq_rel
  __aarch64_ldadd1_rel = 68, // __aarch64_ldadd1_rel
  __aarch64_ldadd1_relax = 69, // __aarch64_ldadd1_relax
  __aarch64_ldadd2_acq = 70, // __aarch64_ldadd2_acq
  __aarch64_ldadd2_acq_rel = 71, // __aarch64_ldadd2_acq_rel
  __aarch64_ldadd2_rel = 72, // __aarch64_ldadd2_rel
  __aarch64_ldadd2_relax = 73, // __aarch64_ldadd2_relax
  __aarch64_ldadd4_acq = 74, // __aarch64_ldadd4_acq
  __aarch64_ldadd4_acq_rel = 75, // __aarch64_ldadd4_acq_rel
  __aarch64_ldadd4_rel = 76, // __aarch64_ldadd4_rel
  __aarch64_ldadd4_relax = 77, // __aarch64_ldadd4_relax
  __aarch64_ldadd8_acq = 78, // __aarch64_ldadd8_acq
  __aarch64_ldadd8_acq_rel = 79, // __aarch64_ldadd8_acq_rel
  __aarch64_ldadd8_rel = 80, // __aarch64_ldadd8_rel
  __aarch64_ldadd8_relax = 81, // __aarch64_ldadd8_relax
  __aarch64_ldclr1_acq = 82, // __aarch64_ldclr1_acq
  __aarch64_ldclr1_acq_rel = 83, // __aarch64_ldclr1_acq_rel
  __aarch64_ldclr1_rel = 84, // __aarch64_ldclr1_rel
  __aarch64_ldclr1_relax = 85, // __aarch64_ldclr1_relax
  __aarch64_ldclr2_acq = 86, // __aarch64_ldclr2_acq
  __aarch64_ldclr2_acq_rel = 87, // __aarch64_ldclr2_acq_rel
  __aarch64_ldclr2_rel = 88, // __aarch64_ldclr2_rel
  __aarch64_ldclr2_relax = 89, // __aarch64_ldclr2_relax
  __aarch64_ldclr4_acq = 90, // __aarch64_ldclr4_acq
  __aarch64_ldclr4_acq_rel = 91, // __aarch64_ldclr4_acq_rel
  __aarch64_ldclr4_rel = 92, // __aarch64_ldclr4_rel
  __aarch64_ldclr4_relax = 93, // __aarch64_ldclr4_relax
  __aarch64_ldclr8_acq = 94, // __aarch64_ldclr8_acq
  __aarch64_ldclr8_acq_rel = 95, // __aarch64_ldclr8_acq_rel
  __aarch64_ldclr8_rel = 96, // __aarch64_ldclr8_rel
  __aarch64_ldclr8_relax = 97, // __aarch64_ldclr8_relax
  __aarch64_ldeor1_acq = 98, // __aarch64_ldeor1_acq
  __aarch64_ldeor1_acq_rel = 99, // __aarch64_ldeor1_acq_rel
  __aarch64_ldeor1_rel = 100, // __aarch64_ldeor1_rel
  __aarch64_ldeor1_relax = 101, // __aarch64_ldeor1_relax
  __aarch64_ldeor2_acq = 102, // __aarch64_ldeor2_acq
  __aarch64_ldeor2_acq_rel = 103, // __aarch64_ldeor2_acq_rel
  __aarch64_ldeor2_rel = 104, // __aarch64_ldeor2_rel
  __aarch64_ldeor2_relax = 105, // __aarch64_ldeor2_relax
  __aarch64_ldeor4_acq = 106, // __aarch64_ldeor4_acq
  __aarch64_ldeor4_acq_rel = 107, // __aarch64_ldeor4_acq_rel
  __aarch64_ldeor4_rel = 108, // __aarch64_ldeor4_rel
  __aarch64_ldeor4_relax = 109, // __aarch64_ldeor4_relax
  __aarch64_ldeor8_acq = 110, // __aarch64_ldeor8_acq
  __aarch64_ldeor8_acq_rel = 111, // __aarch64_ldeor8_acq_rel
  __aarch64_ldeor8_rel = 112, // __aarch64_ldeor8_rel
  __aarch64_ldeor8_relax = 113, // __aarch64_ldeor8_relax
  __aarch64_ldset1_acq = 114, // __aarch64_ldset1_acq
  __aarch64_ldset1_acq_rel = 115, // __aarch64_ldset1_acq_rel
  __aarch64_ldset1_rel = 116, // __aarch64_ldset1_rel
  __aarch64_ldset1_relax = 117, // __aarch64_ldset1_relax
  __aarch64_ldset2_acq = 118, // __aarch64_ldset2_acq
  __aarch64_ldset2_acq_rel = 119, // __aarch64_ldset2_acq_rel
  __aarch64_ldset2_rel = 120, // __aarch64_ldset2_rel
  __aarch64_ldset2_relax = 121, // __aarch64_ldset2_relax
  __aarch64_ldset4_acq = 122, // __aarch64_ldset4_acq
  __aarch64_ldset4_acq_rel = 123, // __aarch64_ldset4_acq_rel
  __aarch64_ldset4_rel = 124, // __aarch64_ldset4_rel
  __aarch64_ldset4_relax = 125, // __aarch64_ldset4_relax
  __aarch64_ldset8_acq = 126, // __aarch64_ldset8_acq
  __aarch64_ldset8_acq_rel = 127, // __aarch64_ldset8_acq_rel
  __aarch64_ldset8_rel = 128, // __aarch64_ldset8_rel
  __aarch64_ldset8_relax = 129, // __aarch64_ldset8_relax
  __aarch64_swp1_acq = 130, // __aarch64_swp1_acq
  __aarch64_swp1_acq_rel = 131, // __aarch64_swp1_acq_rel
  __aarch64_swp1_rel = 132, // __aarch64_swp1_rel
  __aarch64_swp1_relax = 133, // __aarch64_swp1_relax
  __aarch64_swp2_acq = 134, // __aarch64_swp2_acq
  __aarch64_swp2_acq_rel = 135, // __aarch64_swp2_acq_rel
  __aarch64_swp2_rel = 136, // __aarch64_swp2_rel
  __aarch64_swp2_relax = 137, // __aarch64_swp2_relax
  __aarch64_swp4_acq = 138, // __aarch64_swp4_acq
  __aarch64_swp4_acq_rel = 139, // __aarch64_swp4_acq_rel
  __aarch64_swp4_rel = 140, // __aarch64_swp4_rel
  __aarch64_swp4_relax = 141, // __aarch64_swp4_relax
  __aarch64_swp8_acq = 142, // __aarch64_swp8_acq
  __aarch64_swp8_acq_rel = 143, // __aarch64_swp8_acq_rel
  __aarch64_swp8_rel = 144, // __aarch64_swp8_rel
  __aarch64_swp8_relax = 145, // __aarch64_swp8_relax
  __adddf3 = 146, // __adddf3
  __adddf3vfp = 147, // __adddf3vfp
  __addkf3 = 148, // __addkf3
  __addsf3 = 149, // __addsf3
  __addsf3vfp = 150, // __addsf3vfp
  __addtf3 = 151, // __addtf3
  __addxf3 = 152, // __addxf3
  __aeabi_d2f = 153, // __aeabi_d2f
  __aeabi_d2h = 154, // __aeabi_d2h
  __aeabi_d2iz = 155, // __aeabi_d2iz
  __aeabi_d2lz = 156, // __aeabi_d2lz
  __aeabi_d2uiz = 157, // __aeabi_d2uiz
  __aeabi_d2ulz = 158, // __aeabi_d2ulz
  __aeabi_dadd = 159, // __aeabi_dadd
  __aeabi_dcmpeq__oeq = 160, // __aeabi_dcmpeq
  __aeabi_dcmpeq__une = 161, // __aeabi_dcmpeq
  __aeabi_dcmpge = 162, // __aeabi_dcmpge
  __aeabi_dcmpgt = 163, // __aeabi_dcmpgt
  __aeabi_dcmple = 164, // __aeabi_dcmple
  __aeabi_dcmplt = 165, // __aeabi_dcmplt
  __aeabi_dcmpun = 166, // __aeabi_dcmpun
  __aeabi_ddiv = 167, // __aeabi_ddiv
  __aeabi_dmul = 168, // __aeabi_dmul
  __aeabi_dsub = 169, // __aeabi_dsub
  __aeabi_f2d = 170, // __aeabi_f2d
  __aeabi_f2h = 171, // __aeabi_f2h
  __aeabi_f2iz = 172, // __aeabi_f2iz
  __aeabi_f2lz = 173, // __aeabi_f2lz
  __aeabi_f2uiz = 174, // __aeabi_f2uiz
  __aeabi_f2ulz = 175, // __aeabi_f2ulz
  __aeabi_fadd = 176, // __aeabi_fadd
  __aeabi_fcmpeq__oeq = 177, // __aeabi_fcmpeq
  __aeabi_fcmpeq__une = 178, // __aeabi_fcmpeq
  __aeabi_fcmpge = 179, // __aeabi_fcmpge
  __aeabi_fcmpgt = 180, // __aeabi_fcmpgt
  __aeabi_fcmple = 181, // __aeabi_fcmple
  __aeabi_fcmplt = 182, // __aeabi_fcmplt
  __aeabi_fcmpun = 183, // __aeabi_fcmpun
  __aeabi_fdiv = 184, // __aeabi_fdiv
  __aeabi_fmul = 185, // __aeabi_fmul
  __aeabi_fsub = 186, // __aeabi_fsub
  __aeabi_h2f = 187, // __aeabi_h2f
  __aeabi_i2d = 188, // __aeabi_i2d
  __aeabi_i2f = 189, // __aeabi_i2f
  __aeabi_idiv__i8 = 190, // __aeabi_idiv
  __aeabi_idiv__i16 = 191, // __aeabi_idiv
  __aeabi_idiv__i32 = 192, // __aeabi_idiv
  __aeabi_idivmod = 193, // __aeabi_idivmod
  __aeabi_l2d = 194, // __aeabi_l2d
  __aeabi_l2f = 195, // __aeabi_l2f
  __aeabi_lasr = 196, // __aeabi_lasr
  __aeabi_ldivmod = 197, // __aeabi_ldivmod
  __aeabi_llsl = 198, // __aeabi_llsl
  __aeabi_llsr = 199, // __aeabi_llsr
  __aeabi_lmul = 200, // __aeabi_lmul
  __aeabi_memclr = 201, // __aeabi_memclr
  __aeabi_memclr4 = 202, // __aeabi_memclr4
  __aeabi_memclr8 = 203, // __aeabi_memclr8
  __aeabi_memcpy = 204, // __aeabi_memcpy
  __aeabi_memcpy4 = 205, // __aeabi_memcpy4
  __aeabi_memcpy8 = 206, // __aeabi_memcpy8
  __aeabi_memmove = 207, // __aeabi_memmove
  __aeabi_memmove4 = 208, // __aeabi_memmove4
  __aeabi_memmove8 = 209, // __aeabi_memmove8
  __aeabi_memset = 210, // __aeabi_memset
  __aeabi_memset4 = 211, // __aeabi_memset4
  __aeabi_memset8 = 212, // __aeabi_memset8
  __aeabi_ui2d = 213, // __aeabi_ui2d
  __aeabi_ui2f = 214, // __aeabi_ui2f
  __aeabi_uidiv__i8 = 215, // __aeabi_uidiv
  __aeabi_uidiv__i16 = 216, // __aeabi_uidiv
  __aeabi_uidiv__i32 = 217, // __aeabi_uidiv
  __aeabi_uidivmod = 218, // __aeabi_uidivmod
  __aeabi_ul2d = 219, // __aeabi_ul2d
  __aeabi_ul2f = 220, // __aeabi_ul2f
  __aeabi_uldivmod = 221, // __aeabi_uldivmod
  __arm_sc_memcpy = 222, // __arm_sc_memcpy
  __arm_sc_memmove = 223, // __arm_sc_memmove
  __arm_sc_memset = 224, // __arm_sc_memset
  __ashldi3 = 225, // __ashldi3
  __ashlhi3 = 226, // __ashlhi3
  __ashlsi3 = 227, // __ashlsi3
  __ashlti3 = 228, // __ashlti3
  __ashrdi3 = 229, // __ashrdi3
  __ashrhi3 = 230, // __ashrhi3
  __ashrsi3 = 231, // __ashrsi3
  __ashrti3 = 232, // __ashrti3
  __atomic_compare_exchange = 233, // __atomic_compare_exchange
  __atomic_compare_exchange_1 = 234, // __atomic_compare_exchange_1
  __atomic_compare_exchange_2 = 235, // __atomic_compare_exchange_2
  __atomic_compare_exchange_4 = 236, // __atomic_compare_exchange_4
  __atomic_compare_exchange_8 = 237, // __atomic_compare_exchange_8
  __atomic_compare_exchange_16 = 238, // __atomic_compare_exchange_16
  __atomic_exchange = 239, // __atomic_exchange
  __atomic_exchange_1 = 240, // __atomic_exchange_1
  __atomic_exchange_2 = 241, // __atomic_exchange_2
  __atomic_exchange_4 = 242, // __atomic_exchange_4
  __atomic_exchange_8 = 243, // __atomic_exchange_8
  __atomic_exchange_16 = 244, // __atomic_exchange_16
  __atomic_fetch_add_1 = 245, // __atomic_fetch_add_1
  __atomic_fetch_add_2 = 246, // __atomic_fetch_add_2
  __atomic_fetch_add_4 = 247, // __atomic_fetch_add_4
  __atomic_fetch_add_8 = 248, // __atomic_fetch_add_8
  __atomic_fetch_add_16 = 249, // __atomic_fetch_add_16
  __atomic_fetch_and_1 = 250, // __atomic_fetch_and_1
  __atomic_fetch_and_2 = 251, // __atomic_fetch_and_2
  __atomic_fetch_and_4 = 252, // __atomic_fetch_and_4
  __atomic_fetch_and_8 = 253, // __atomic_fetch_and_8
  __atomic_fetch_and_16 = 254, // __atomic_fetch_and_16
  __atomic_fetch_nand_1 = 255, // __atomic_fetch_nand_1
  __atomic_fetch_nand_2 = 256, // __atomic_fetch_nand_2
  __atomic_fetch_nand_4 = 257, // __atomic_fetch_nand_4
  __atomic_fetch_nand_8 = 258, // __atomic_fetch_nand_8
  __atomic_fetch_nand_16 = 259, // __atomic_fetch_nand_16
  __atomic_fetch_or_1 = 260, // __atomic_fetch_or_1
  __atomic_fetch_or_2 = 261, // __atomic_fetch_or_2
  __atomic_fetch_or_4 = 262, // __atomic_fetch_or_4
  __atomic_fetch_or_8 = 263, // __atomic_fetch_or_8
  __atomic_fetch_or_16 = 264, // __atomic_fetch_or_16
  __atomic_fetch_sub_1 = 265, // __atomic_fetch_sub_1
  __atomic_fetch_sub_2 = 266, // __atomic_fetch_sub_2
  __atomic_fetch_sub_4 = 267, // __atomic_fetch_sub_4
  __atomic_fetch_sub_8 = 268, // __atomic_fetch_sub_8
  __atomic_fetch_sub_16 = 269, // __atomic_fetch_sub_16
  __atomic_fetch_xor_1 = 270, // __atomic_fetch_xor_1
  __atomic_fetch_xor_2 = 271, // __atomic_fetch_xor_2
  __atomic_fetch_xor_4 = 272, // __atomic_fetch_xor_4
  __atomic_fetch_xor_8 = 273, // __atomic_fetch_xor_8
  __atomic_fetch_xor_16 = 274, // __atomic_fetch_xor_16
  __atomic_load = 275, // __atomic_load
  __atomic_load_1 = 276, // __atomic_load_1
  __atomic_load_2 = 277, // __atomic_load_2
  __atomic_load_4 = 278, // __atomic_load_4
  __atomic_load_8 = 279, // __atomic_load_8
  __atomic_load_16 = 280, // __atomic_load_16
  __atomic_store = 281, // __atomic_store
  __atomic_store_1 = 282, // __atomic_store_1
  __atomic_store_2 = 283, // __atomic_store_2
  __atomic_store_4 = 284, // __atomic_store_4
  __atomic_store_8 = 285, // __atomic_store_8
  __atomic_store_16 = 286, // __atomic_store_16
  __bzero = 287, // __bzero
  __clear_cache = 288, // __clear_cache
  __clzdi2 = 289, // __clzdi2
  __clzsi2 = 290, // __clzsi2
  __clzti2 = 291, // __clzti2
  __cxa_end_cleanup = 292, // __cxa_end_cleanup
  __divdf3 = 293, // __divdf3
  __divdf3vfp = 294, // __divdf3vfp
  __divdi3 = 295, // __divdi3
  __divhi3 = 296, // __divhi3
  __divkf3 = 297, // __divkf3
  __divmodhi4 = 298, // __divmodhi4
  __divmodqi4 = 299, // __divmodqi4
  __divmodsi4 = 300, // __divmodsi4
  __divqi3 = 301, // __divqi3
  __divsf3 = 302, // __divsf3
  __divsf3vfp = 303, // __divsf3vfp
  __divsi3 = 304, // __divsi3
  __divtf3 = 305, // __divtf3
  __divti3 = 306, // __divti3
  __divxf3 = 307, // __divxf3
  __dtoi64 = 308, // __dtoi64
  __dtou64 = 309, // __dtou64
  __eqdf2 = 310, // __eqdf2
  __eqdf2vfp = 311, // __eqdf2vfp
  __eqkf2 = 312, // __eqkf2
  __eqsf2 = 313, // __eqsf2
  __eqsf2vfp = 314, // __eqsf2vfp
  __eqtf2 = 315, // __eqtf2
  __exp2_finite = 316, // __exp2_finite
  __exp2f128_finite = 317, // __exp2f128_finite
  __exp2f_finite = 318, // __exp2f_finite
  __exp2l_finite_f80 = 319, // __exp2l_finite
  __exp2l_finite_f128 = 320, // __exp2l_finite
  __exp2l_finite_ppcf128 = 321, // __exp2l_finite
  __exp10 = 322, // __exp10
  __exp10f = 323, // __exp10f
  __exp10f128_finite = 324, // __exp10f128_finite
  __exp_finite = 325, // __exp_finite
  __expf128_finite = 326, // __expf128_finite
  __expf_finite = 327, // __expf_finite
  __expl_finite_f80 = 328, // __expl_finite
  __expl_finite_f128 = 329, // __expl_finite
  __expl_finite_ppcf128 = 330, // __expl_finite
  __extendbfsf2 = 331, // __extendbfsf2
  __extenddfkf2 = 332, // __extenddfkf2
  __extenddftf2 = 333, // __extenddftf2
  __extendhfdf2 = 334, // __extendhfdf2
  __extendhfsf2 = 335, // __extendhfsf2
  __extendhftf2 = 336, // __extendhftf2
  __extendhfxf2 = 337, // __extendhfxf2
  __extendkftf2 = 338, // __extendkftf2
  __extendsfdf2 = 339, // __extendsfdf2
  __extendsfdf2vfp = 340, // __extendsfdf2vfp
  __extendsfkf2 = 341, // __extendsfkf2
  __extendsftf2 = 342, // __extendsftf2
  __extendxftf2 = 343, // __extendxftf2
  __fixdfdi = 344, // __fixdfdi
  __fixdfsi = 345, // __fixdfsi
  __fixdfsivfp = 346, // __fixdfsivfp
  __fixdfti = 347, // __fixdfti
  __fixhfdi = 348, // __fixhfdi
  __fixhfsi = 349, // __fixhfsi
  __fixhfti = 350, // __fixhfti
  __fixkfdi = 351, // __fixkfdi
  __fixkfsi = 352, // __fixkfsi
  __fixkfti = 353, // __fixkfti
  __fixsfdi = 354, // __fixsfdi
  __fixsfsi = 355, // __fixsfsi
  __fixsfsivfp = 356, // __fixsfsivfp
  __fixsfti = 357, // __fixsfti
  __fixtfdi_f128 = 358, // __fixtfdi
  __fixtfdi_ppcf128 = 359, // __fixtfdi
  __fixtfsi = 360, // __fixtfsi
  __fixtfti_f128 = 361, // __fixtfti
  __fixtfti_ppcf128 = 362, // __fixtfti
  __fixunsdfdi = 363, // __fixunsdfdi
  __fixunsdfsi = 364, // __fixunsdfsi
  __fixunsdfsivfp = 365, // __fixunsdfsivfp
  __fixunsdfti = 366, // __fixunsdfti
  __fixunshfdi = 367, // __fixunshfdi
  __fixunshfsi = 368, // __fixunshfsi
  __fixunshfti = 369, // __fixunshfti
  __fixunskfdi = 370, // __fixunskfdi
  __fixunskfsi = 371, // __fixunskfsi
  __fixunskfti = 372, // __fixunskfti
  __fixunssfdi = 373, // __fixunssfdi
  __fixunssfsi = 374, // __fixunssfsi
  __fixunssfsivfp = 375, // __fixunssfsivfp
  __fixunssfti = 376, // __fixunssfti
  __fixunstfdi_f128 = 377, // __fixunstfdi
  __fixunstfdi_ppcf128 = 378, // __fixunstfdi
  __fixunstfsi_f128 = 379, // __fixunstfsi
  __fixunstfsi_ppcf128 = 380, // __fixunstfsi
  __fixunstfti_f128 = 381, // __fixunstfti
  __fixunstfti_ppcf128 = 382, // __fixunstfti
  __fixunsxfdi = 383, // __fixunsxfdi
  __fixunsxfsi = 384, // __fixunsxfsi
  __fixunsxfti = 385, // __fixunsxfti
  __fixxfdi = 386, // __fixxfdi
  __fixxfsi = 387, // __fixxfsi
  __fixxfti = 388, // __fixxfti
  __floatdibf = 389, // __floatdibf
  __floatdidf = 390, // __floatdidf
  __floatdihf = 391, // __floatdihf
  __floatdikf = 392, // __floatdikf
  __floatdisf = 393, // __floatdisf
  __floatditf_f128 = 394, // __floatditf
  __floatditf_ppcf128 = 395, // __floatditf
  __floatdixf = 396, // __floatdixf
  __floatsidf = 397, // __floatsidf
  __floatsidfvfp = 398, // __floatsidfvfp
  __floatsihf = 399, // __floatsihf
  __floatsikf = 400, // __floatsikf
  __floatsisf = 401, // __floatsisf
  __floatsisfvfp = 402, // __floatsisfvfp
  __floatsitf = 403, // __floatsitf
  __floatsixf = 404, // __floatsixf
  __floattidf = 405, // __floattidf
  __floattihf = 406, // __floattihf
  __floattikf = 407, // __floattikf
  __floattisf = 408, // __floattisf
  __floattitf_f128 = 409, // __floattitf
  __floattitf_ppcf128 = 410, // __floattitf
  __floattixf = 411, // __floattixf
  __floatundibf = 412, // __floatundibf
  __floatundidf = 413, // __floatundidf
  __floatundihf = 414, // __floatundihf
  __floatundikf = 415, // __floatundikf
  __floatundisf = 416, // __floatundisf
  __floatunditf_f128 = 417, // __floatunditf
  __floatunditf_ppcf128 = 418, // __floatunditf
  __floatundixf = 419, // __floatundixf
  __floatunsidf = 420, // __floatunsidf
  __floatunsihf = 421, // __floatunsihf
  __floatunsikf = 422, // __floatunsikf
  __floatunsisf = 423, // __floatunsisf
  __floatunsitf = 424, // __floatunsitf
  __floatunsixf = 425, // __floatunsixf
  __floatunssidfvfp = 426, // __floatunssidfvfp
  __floatunssisfvfp = 427, // __floatunssisfvfp
  __floatuntidf = 428, // __floatuntidf
  __floatuntihf = 429, // __floatuntihf
  __floatuntikf = 430, // __floatuntikf
  __floatuntisf = 431, // __floatuntisf
  __floatuntitf_f128 = 432, // __floatuntitf
  __floatuntitf_ppcf128 = 433, // __floatuntitf
  __floatuntixf = 434, // __floatuntixf
  __gcc_dtoq = 435, // __gcc_dtoq
  __gcc_itoq = 436, // __gcc_itoq
  __gcc_qadd = 437, // __gcc_qadd
  __gcc_qdiv = 438, // __gcc_qdiv
  __gcc_qeq = 439, // __gcc_qeq
  __gcc_qge = 440, // __gcc_qge
  __gcc_qgt = 441, // __gcc_qgt
  __gcc_qle = 442, // __gcc_qle
  __gcc_qlt = 443, // __gcc_qlt
  __gcc_qmul = 444, // __gcc_qmul
  __gcc_qne = 445, // __gcc_qne
  __gcc_qsub = 446, // __gcc_qsub
  __gcc_qtod = 447, // __gcc_qtod
  __gcc_qtos = 448, // __gcc_qtos
  __gcc_qtou = 449, // __gcc_qtou
  __gcc_qunord = 450, // __gcc_qunord
  __gcc_stoq = 451, // __gcc_stoq
  __gcc_utoq = 452, // __gcc_utoq
  __gedf2 = 453, // __gedf2
  __gedf2vfp = 454, // __gedf2vfp
  __gekf2 = 455, // __gekf2
  __gesf2 = 456, // __gesf2
  __gesf2vfp = 457, // __gesf2vfp
  __getf2 = 458, // __getf2
  __gnu_f2h_ieee = 459, // __gnu_f2h_ieee
  __gnu_h2f_ieee = 460, // __gnu_h2f_ieee
  __gtdf2 = 461, // __gtdf2
  __gtdf2vfp = 462, // __gtdf2vfp
  __gtkf2 = 463, // __gtkf2
  __gtsf2 = 464, // __gtsf2
  __gtsf2vfp = 465, // __gtsf2vfp
  __gttf2 = 466, // __gttf2
  __hexagon_adddf3 = 467, // __hexagon_adddf3
  __hexagon_divdf3 = 468, // __hexagon_divdf3
  __hexagon_divdi3 = 469, // __hexagon_divdi3
  __hexagon_divsf3 = 470, // __hexagon_divsf3
  __hexagon_divsi3 = 471, // __hexagon_divsi3
  __hexagon_fast2_sqrtdf2 = 472, // __hexagon_fast2_sqrtdf2
  __hexagon_fast2_sqrtf = 473, // __hexagon_fast2_sqrtf
  __hexagon_fast_adddf3 = 474, // __hexagon_fast_adddf3
  __hexagon_fast_divdf3 = 475, // __hexagon_fast_divdf3
  __hexagon_fast_divsf3 = 476, // __hexagon_fast_divsf3
  __hexagon_fast_muldf3 = 477, // __hexagon_fast_muldf3
  __hexagon_fast_subdf3 = 478, // __hexagon_fast_subdf3
  __hexagon_memcpy_likely_aligned_min32bytes_mult8bytes = 479, // __hexagon_memcpy_likely_aligned_min32bytes_mult8bytes
  __hexagon_moddi3 = 480, // __hexagon_moddi3
  __hexagon_modsi3 = 481, // __hexagon_modsi3
  __hexagon_muldf3 = 482, // __hexagon_muldf3
  __hexagon_sqrtf = 483, // __hexagon_sqrtf
  __hexagon_subdf3 = 484, // __hexagon_subdf3
  __hexagon_udivdi3 = 485, // __hexagon_udivdi3
  __hexagon_udivsi3 = 486, // __hexagon_udivsi3
  __hexagon_umoddi3 = 487, // __hexagon_umoddi3
  __hexagon_umodsi3 = 488, // __hexagon_umodsi3
  __i64tod = 489, // __i64tod
  __i64tos = 490, // __i64tos
  __ledf2 = 491, // __ledf2
  __ledf2vfp = 492, // __ledf2vfp
  __lekf2 = 493, // __lekf2
  __lesf2 = 494, // __lesf2
  __lesf2vfp = 495, // __lesf2vfp
  __letf2 = 496, // __letf2
  __llvm_deoptimize = 497, // __llvm_deoptimize
  __llvm_memcpy_element_unordered_atomic_1 = 498, // __llvm_memcpy_element_unordered_atomic_1
  __llvm_memcpy_element_unordered_atomic_2 = 499, // __llvm_memcpy_element_unordered_atomic_2
  __llvm_memcpy_element_unordered_atomic_4 = 500, // __llvm_memcpy_element_unordered_atomic_4
  __llvm_memcpy_element_unordered_atomic_8 = 501, // __llvm_memcpy_element_unordered_atomic_8
  __llvm_memcpy_element_unordered_atomic_16 = 502, // __llvm_memcpy_element_unordered_atomic_16
  __llvm_memmove_element_unordered_atomic_1 = 503, // __llvm_memmove_element_unordered_atomic_1
  __llvm_memmove_element_unordered_atomic_2 = 504, // __llvm_memmove_element_unordered_atomic_2
  __llvm_memmove_element_unordered_atomic_4 = 505, // __llvm_memmove_element_unordered_atomic_4
  __llvm_memmove_element_unordered_atomic_8 = 506, // __llvm_memmove_element_unordered_atomic_8
  __llvm_memmove_element_unordered_atomic_16 = 507, // __llvm_memmove_element_unordered_atomic_16
  __llvm_memset_element_unordered_atomic_1 = 508, // __llvm_memset_element_unordered_atomic_1
  __llvm_memset_element_unordered_atomic_2 = 509, // __llvm_memset_element_unordered_atomic_2
  __llvm_memset_element_unordered_atomic_4 = 510, // __llvm_memset_element_unordered_atomic_4
  __llvm_memset_element_unordered_atomic_8 = 511, // __llvm_memset_element_unordered_atomic_8
  __llvm_memset_element_unordered_atomic_16 = 512, // __llvm_memset_element_unordered_atomic_16
  __log2_finite = 513, // __log2_finite
  __log2f128_finite = 514, // __log2f128_finite
  __log2f_finite = 515, // __log2f_finite
  __log2l_finite_f80 = 516, // __log2l_finite
  __log2l_finite_f128 = 517, // __log2l_finite
  __log2l_finite_ppcf128 = 518, // __log2l_finite
  __log10_finite = 519, // __log10_finite
  __log10f128_finite = 520, // __log10f128_finite
  __log10f_finite = 521, // __log10f_finite
  __log10l_finite_f80 = 522, // __log10l_finite
  __log10l_finite_f128 = 523, // __log10l_finite
  __log10l_finite_ppcf128 = 524, // __log10l_finite
  __log_finite = 525, // __log_finite
  __logf128_finite = 526, // __logf128_finite
  __logf_finite = 527, // __logf_finite
  __logl_finite_f80 = 528, // __logl_finite
  __logl_finite_f128 = 529, // __logl_finite
  __logl_finite_ppcf128 = 530, // __logl_finite
  __lshrdi3 = 531, // __lshrdi3
  __lshrhi3 = 532, // __lshrhi3
  __lshrsi3 = 533, // __lshrsi3
  __lshrti3 = 534, // __lshrti3
  __ltdf2 = 535, // __ltdf2
  __ltdf2vfp = 536, // __ltdf2vfp
  __ltkf2 = 537, // __ltkf2
  __ltsf2 = 538, // __ltsf2
  __ltsf2vfp = 539, // __ltsf2vfp
  __lttf2 = 540, // __lttf2
  __memcpy_4 = 541, // __memcpy_4
  __mips16_adddf3 = 542, // __mips16_adddf3
  __mips16_addsf3 = 543, // __mips16_addsf3
  __mips16_divdf3 = 544, // __mips16_divdf3
  __mips16_divsf3 = 545, // __mips16_divsf3
  __mips16_eqdf2 = 546, // __mips16_eqdf2
  __mips16_eqsf2 = 547, // __mips16_eqsf2
  __mips16_extendsfdf2 = 548, // __mips16_extendsfdf2
  __mips16_fix_truncdfsi = 549, // __mips16_fix_truncdfsi
  __mips16_fix_truncsfsi = 550, // __mips16_fix_truncsfsi
  __mips16_floatsidf = 551, // __mips16_floatsidf
  __mips16_floatsisf = 552, // __mips16_floatsisf
  __mips16_floatunsidf = 553, // __mips16_floatunsidf
  __mips16_floatunsisf = 554, // __mips16_floatunsisf
  __mips16_gedf2 = 555, // __mips16_gedf2
  __mips16_gesf2 = 556, // __mips16_gesf2
  __mips16_gtdf2 = 557, // __mips16_gtdf2
  __mips16_gtsf2 = 558, // __mips16_gtsf2
  __mips16_ledf2 = 559, // __mips16_ledf2
  __mips16_lesf2 = 560, // __mips16_lesf2
  __mips16_ltdf2 = 561, // __mips16_ltdf2
  __mips16_ltsf2 = 562, // __mips16_ltsf2
  __mips16_muldf3 = 563, // __mips16_muldf3
  __mips16_mulsf3 = 564, // __mips16_mulsf3
  __mips16_nedf2 = 565, // __mips16_nedf2
  __mips16_nesf2 = 566, // __mips16_nesf2
  __mips16_ret_dc = 567, // __mips16_ret_dc
  __mips16_ret_df = 568, // __mips16_ret_df
  __mips16_ret_sc = 569, // __mips16_ret_sc
  __mips16_ret_sf = 570, // __mips16_ret_sf
  __mips16_subdf3 = 571, // __mips16_subdf3
  __mips16_subsf3 = 572, // __mips16_subsf3
  __mips16_truncdfsf2 = 573, // __mips16_truncdfsf2
  __mips16_unorddf2 = 574, // __mips16_unorddf2
  __mips16_unordsf2 = 575, // __mips16_unordsf2
  __moddi3 = 576, // __moddi3
  __modhi3 = 577, // __modhi3
  __modqi3 = 578, // __modqi3
  __modsi3 = 579, // __modsi3
  __modti3 = 580, // __modti3
  __mspabi_addd = 581, // __mspabi_addd
  __mspabi_addf = 582, // __mspabi_addf
  __mspabi_cmpd__oeq = 583, // __mspabi_cmpd
  __mspabi_cmpd__oge = 584, // __mspabi_cmpd
  __mspabi_cmpd__ogt = 585, // __mspabi_cmpd
  __mspabi_cmpd__ole = 586, // __mspabi_cmpd
  __mspabi_cmpd__olt = 587, // __mspabi_cmpd
  __mspabi_cmpd__une = 588, // __mspabi_cmpd
  __mspabi_cmpf__oeq = 589, // __mspabi_cmpf
  __mspabi_cmpf__oge = 590, // __mspabi_cmpf
  __mspabi_cmpf__ogt = 591, // __mspabi_cmpf
  __mspabi_cmpf__ole = 592, // __mspabi_cmpf
  __mspabi_cmpf__olt = 593, // __mspabi_cmpf
  __mspabi_cmpf__une = 594, // __mspabi_cmpf
  __mspabi_cvtdf = 595, // __mspabi_cvtdf
  __mspabi_cvtfd = 596, // __mspabi_cvtfd
  __mspabi_divd = 597, // __mspabi_divd
  __mspabi_divf = 598, // __mspabi_divf
  __mspabi_divi = 599, // __mspabi_divi
  __mspabi_divli = 600, // __mspabi_divli
  __mspabi_divlli = 601, // __mspabi_divlli
  __mspabi_divu = 602, // __mspabi_divu
  __mspabi_divul = 603, // __mspabi_divul
  __mspabi_divull = 604, // __mspabi_divull
  __mspabi_fixdli = 605, // __mspabi_fixdli
  __mspabi_fixdlli = 606, // __mspabi_fixdlli
  __mspabi_fixdul = 607, // __mspabi_fixdul
  __mspabi_fixdull = 608, // __mspabi_fixdull
  __mspabi_fixfli = 609, // __mspabi_fixfli
  __mspabi_fixflli = 610, // __mspabi_fixflli
  __mspabi_fixful = 611, // __mspabi_fixful
  __mspabi_fixfull = 612, // __mspabi_fixfull
  __mspabi_fltlid = 613, // __mspabi_fltlid
  __mspabi_fltlif = 614, // __mspabi_fltlif
  __mspabi_fltllid = 615, // __mspabi_fltllid
  __mspabi_fltllif = 616, // __mspabi_fltllif
  __mspabi_fltuld = 617, // __mspabi_fltuld
  __mspabi_fltulf = 618, // __mspabi_fltulf
  __mspabi_fltulld = 619, // __mspabi_fltulld
  __mspabi_fltullf = 620, // __mspabi_fltullf
  __mspabi_mpyd = 621, // __mspabi_mpyd
  __mspabi_mpyf = 622, // __mspabi_mpyf
  __mspabi_mpyi = 623, // __mspabi_mpyi
  __mspabi_mpyi_f5hw = 624, // __mspabi_mpyi_f5hw
  __mspabi_mpyi_hw = 625, // __mspabi_mpyi_hw
  __mspabi_mpyl = 626, // __mspabi_mpyl
  __mspabi_mpyl_f5hw = 627, // __mspabi_mpyl_f5hw
  __mspabi_mpyl_hw = 628, // __mspabi_mpyl_hw
  __mspabi_mpyl_hw32 = 629, // __mspabi_mpyl_hw32
  __mspabi_mpyll = 630, // __mspabi_mpyll
  __mspabi_mpyll_f5hw = 631, // __mspabi_mpyll_f5hw
  __mspabi_mpyll_hw = 632, // __mspabi_mpyll_hw
  __mspabi_mpyll_hw32 = 633, // __mspabi_mpyll_hw32
  __mspabi_remi = 634, // __mspabi_remi
  __mspabi_remli = 635, // __mspabi_remli
  __mspabi_remlli = 636, // __mspabi_remlli
  __mspabi_remu = 637, // __mspabi_remu
  __mspabi_remul = 638, // __mspabi_remul
  __mspabi_remull = 639, // __mspabi_remull
  __mspabi_slll = 640, // __mspabi_slll
  __mspabi_sral = 641, // __mspabi_sral
  __mspabi_srll = 642, // __mspabi_srll
  __mspabi_subd = 643, // __mspabi_subd
  __mspabi_subf = 644, // __mspabi_subf
  __muldf3 = 645, // __muldf3
  __muldf3vfp = 646, // __muldf3vfp
  __muldi3 = 647, // __muldi3
  __mulhi3 = 648, // __mulhi3
  __mulkf3 = 649, // __mulkf3
  __mulodi4 = 650, // __mulodi4
  __mulosi4 = 651, // __mulosi4
  __muloti4 = 652, // __muloti4
  __mulqi3 = 653, // __mulqi3
  __mulsf3 = 654, // __mulsf3
  __mulsf3vfp = 655, // __mulsf3vfp
  __mulsi3 = 656, // __mulsi3
  __multf3 = 657, // __multf3
  __multi3 = 658, // __multi3
  __mulxf3 = 659, // __mulxf3
  __nedf2 = 660, // __nedf2
  __nedf2vfp = 661, // __nedf2vfp
  __negdi2 = 662, // __negdi2
  __negsi2 = 663, // __negsi2
  __nekf2 = 664, // __nekf2
  __nesf2 = 665, // __nesf2
  __nesf2vfp = 666, // __nesf2vfp
  __netf2 = 667, // __netf2
  __popcountdi2 = 668, // __popcountdi2
  __popcountsi2 = 669, // __popcountsi2
  __popcountti2 = 670, // __popcountti2
  __pow_finite = 671, // __pow_finite
  __powf128_finite = 672, // __powf128_finite
  __powf_finite = 673, // __powf_finite
  __powidf2 = 674, // __powidf2
  __powikf2 = 675, // __powikf2
  __powisf2 = 676, // __powisf2
  __powitf2_f128 = 677, // __powitf2
  __powitf2_ppc128 = 678, // __powitf2
  __powixf2 = 679, // __powixf2
  __powl_finite_f80 = 680, // __powl_finite
  __powl_finite_f128 = 681, // __powl_finite
  __powl_finite_ppcf128 = 682, // __powl_finite
  __riscv_flush_icache = 683, // __riscv_flush_icache
  __rt_sdiv = 684, // __rt_sdiv
  __rt_sdiv64 = 685, // __rt_sdiv64
  __rt_udiv = 686, // __rt_udiv
  __rt_udiv64 = 687, // __rt_udiv64
  __safestack_pointer_address = 688, // __safestack_pointer_address
  __sincos_stret = 689, // __sincos_stret
  __sincosf_stret = 690, // __sincosf_stret
  __stack_chk_fail = 691, // __stack_chk_fail
  __stack_smash_handler = 692, // __stack_smash_handler
  __stoi64 = 693, // __stoi64
  __stou64 = 694, // __stou64
  __subdf3 = 695, // __subdf3
  __subdf3vfp = 696, // __subdf3vfp
  __subkf3 = 697, // __subkf3
  __subsf3 = 698, // __subsf3
  __subsf3vfp = 699, // __subsf3vfp
  __subtf3 = 700, // __subtf3
  __subxf3 = 701, // __subxf3
  __sync_fetch_and_add_1 = 702, // __sync_fetch_and_add_1
  __sync_fetch_and_add_2 = 703, // __sync_fetch_and_add_2
  __sync_fetch_and_add_4 = 704, // __sync_fetch_and_add_4
  __sync_fetch_and_add_8 = 705, // __sync_fetch_and_add_8
  __sync_fetch_and_add_16 = 706, // __sync_fetch_and_add_16
  __sync_fetch_and_and_1 = 707, // __sync_fetch_and_and_1
  __sync_fetch_and_and_2 = 708, // __sync_fetch_and_and_2
  __sync_fetch_and_and_4 = 709, // __sync_fetch_and_and_4
  __sync_fetch_and_and_8 = 710, // __sync_fetch_and_and_8
  __sync_fetch_and_and_16 = 711, // __sync_fetch_and_and_16
  __sync_fetch_and_max_1 = 712, // __sync_fetch_and_max_1
  __sync_fetch_and_max_2 = 713, // __sync_fetch_and_max_2
  __sync_fetch_and_max_4 = 714, // __sync_fetch_and_max_4
  __sync_fetch_and_max_8 = 715, // __sync_fetch_and_max_8
  __sync_fetch_and_max_16 = 716, // __sync_fetch_and_max_16
  __sync_fetch_and_min_1 = 717, // __sync_fetch_and_min_1
  __sync_fetch_and_min_2 = 718, // __sync_fetch_and_min_2
  __sync_fetch_and_min_4 = 719, // __sync_fetch_and_min_4
  __sync_fetch_and_min_8 = 720, // __sync_fetch_and_min_8
  __sync_fetch_and_min_16 = 721, // __sync_fetch_and_min_16
  __sync_fetch_and_nand_1 = 722, // __sync_fetch_and_nand_1
  __sync_fetch_and_nand_2 = 723, // __sync_fetch_and_nand_2
  __sync_fetch_and_nand_4 = 724, // __sync_fetch_and_nand_4
  __sync_fetch_and_nand_8 = 725, // __sync_fetch_and_nand_8
  __sync_fetch_and_nand_16 = 726, // __sync_fetch_and_nand_16
  __sync_fetch_and_or_1 = 727, // __sync_fetch_and_or_1
  __sync_fetch_and_or_2 = 728, // __sync_fetch_and_or_2
  __sync_fetch_and_or_4 = 729, // __sync_fetch_and_or_4
  __sync_fetch_and_or_8 = 730, // __sync_fetch_and_or_8
  __sync_fetch_and_or_16 = 731, // __sync_fetch_and_or_16
  __sync_fetch_and_sub_1 = 732, // __sync_fetch_and_sub_1
  __sync_fetch_and_sub_2 = 733, // __sync_fetch_and_sub_2
  __sync_fetch_and_sub_4 = 734, // __sync_fetch_and_sub_4
  __sync_fetch_and_sub_8 = 735, // __sync_fetch_and_sub_8
  __sync_fetch_and_sub_16 = 736, // __sync_fetch_and_sub_16
  __sync_fetch_and_umax_1 = 737, // __sync_fetch_and_umax_1
  __sync_fetch_and_umax_2 = 738, // __sync_fetch_and_umax_2
  __sync_fetch_and_umax_4 = 739, // __sync_fetch_and_umax_4
  __sync_fetch_and_umax_8 = 740, // __sync_fetch_and_umax_8
  __sync_fetch_and_umax_16 = 741, // __sync_fetch_and_umax_16
  __sync_fetch_and_umin_1 = 742, // __sync_fetch_and_umin_1
  __sync_fetch_and_umin_2 = 743, // __sync_fetch_and_umin_2
  __sync_fetch_and_umin_4 = 744, // __sync_fetch_and_umin_4
  __sync_fetch_and_umin_8 = 745, // __sync_fetch_and_umin_8
  __sync_fetch_and_umin_16 = 746, // __sync_fetch_and_umin_16
  __sync_fetch_and_xor_1 = 747, // __sync_fetch_and_xor_1
  __sync_fetch_and_xor_2 = 748, // __sync_fetch_and_xor_2
  __sync_fetch_and_xor_4 = 749, // __sync_fetch_and_xor_4
  __sync_fetch_and_xor_8 = 750, // __sync_fetch_and_xor_8
  __sync_fetch_and_xor_16 = 751, // __sync_fetch_and_xor_16
  __sync_lock_test_and_set_1 = 752, // __sync_lock_test_and_set_1
  __sync_lock_test_and_set_2 = 753, // __sync_lock_test_and_set_2
  __sync_lock_test_and_set_4 = 754, // __sync_lock_test_and_set_4
  __sync_lock_test_and_set_8 = 755, // __sync_lock_test_and_set_8
  __sync_lock_test_and_set_16 = 756, // __sync_lock_test_and_set_16
  __sync_val_compare_and_swap_1 = 757, // __sync_val_compare_and_swap_1
  __sync_val_compare_and_swap_2 = 758, // __sync_val_compare_and_swap_2
  __sync_val_compare_and_swap_4 = 759, // __sync_val_compare_and_swap_4
  __sync_val_compare_and_swap_8 = 760, // __sync_val_compare_and_swap_8
  __sync_val_compare_and_swap_16 = 761, // __sync_val_compare_and_swap_16
  __truncdfbf2 = 762, // __truncdfbf2
  __truncdfhf2 = 763, // __truncdfhf2
  __truncdfsf2 = 764, // __truncdfsf2
  __truncdfsf2vfp = 765, // __truncdfsf2vfp
  __trunckfdf2 = 766, // __trunckfdf2
  __trunckfhf2 = 767, // __trunckfhf2
  __trunckfsf2 = 768, // __trunckfsf2
  __truncsfbf2 = 769, // __truncsfbf2
  __truncsfhf2 = 770, // __truncsfhf2
  __trunctfbf2 = 771, // __trunctfbf2
  __trunctfdf2 = 772, // __trunctfdf2
  __trunctfhf2_f128 = 773, // __trunctfhf2
  __trunctfhf2_ppcf128 = 774, // __trunctfhf2
  __trunctfkf2 = 775, // __trunctfkf2
  __trunctfsf2 = 776, // __trunctfsf2
  __trunctfxf2 = 777, // __trunctfxf2
  __truncxfbf2 = 778, // __truncxfbf2
  __truncxfdf2 = 779, // __truncxfdf2
  __truncxfhf2 = 780, // __truncxfhf2
  __truncxfsf2 = 781, // __truncxfsf2
  __u64tod = 782, // __u64tod
  __u64tos = 783, // __u64tos
  __udivdi3 = 784, // __udivdi3
  __udivhi3 = 785, // __udivhi3
  __udivmodhi4 = 786, // __udivmodhi4
  __udivmodqi4 = 787, // __udivmodqi4
  __udivmodsi4 = 788, // __udivmodsi4
  __udivqi3 = 789, // __udivqi3
  __udivsi3 = 790, // __udivsi3
  __udivti3 = 791, // __udivti3
  __umoddi3 = 792, // __umoddi3
  __umodhi3 = 793, // __umodhi3
  __umodqi3 = 794, // __umodqi3
  __umodsi3 = 795, // __umodsi3
  __umodti3 = 796, // __umodti3
  __unorddf2 = 797, // __unorddf2
  __unorddf2vfp = 798, // __unorddf2vfp
  __unordkf2 = 799, // __unordkf2
  __unordsf2 = 800, // __unordsf2
  __unordsf2vfp = 801, // __unordsf2vfp
  __unordtf2 = 802, // __unordtf2
  _alldiv = 803, // _alldiv
  _allmul = 804, // _allmul
  _allrem = 805, // _allrem
  _aulldiv = 806, // _aulldiv
  _aullrem = 807, // _aullrem
  acos = 808, // acos
  acos_f80 = 809, // acosl
  acos_f128 = 810, // acosl
  acos_ppcf128 = 811, // acosl
  acosf = 812, // acosf
  acosf128 = 813, // acosf128
  arm64ec__Unwind_Resume = 814, // #_Unwind_Resume
  arm64ec___aarch64_cas1_acq = 815, // #__aarch64_cas1_acq
  arm64ec___aarch64_cas1_acq_rel = 816, // #__aarch64_cas1_acq_rel
  arm64ec___aarch64_cas1_rel = 817, // #__aarch64_cas1_rel
  arm64ec___aarch64_cas1_relax = 818, // #__aarch64_cas1_relax
  arm64ec___aarch64_cas2_acq = 819, // #__aarch64_cas2_acq
  arm64ec___aarch64_cas2_acq_rel = 820, // #__aarch64_cas2_acq_rel
  arm64ec___aarch64_cas2_rel = 821, // #__aarch64_cas2_rel
  arm64ec___aarch64_cas2_relax = 822, // #__aarch64_cas2_relax
  arm64ec___aarch64_cas4_acq = 823, // #__aarch64_cas4_acq
  arm64ec___aarch64_cas4_acq_rel = 824, // #__aarch64_cas4_acq_rel
  arm64ec___aarch64_cas4_rel = 825, // #__aarch64_cas4_rel
  arm64ec___aarch64_cas4_relax = 826, // #__aarch64_cas4_relax
  arm64ec___aarch64_cas8_acq = 827, // #__aarch64_cas8_acq
  arm64ec___aarch64_cas8_acq_rel = 828, // #__aarch64_cas8_acq_rel
  arm64ec___aarch64_cas8_rel = 829, // #__aarch64_cas8_rel
  arm64ec___aarch64_cas8_relax = 830, // #__aarch64_cas8_relax
  arm64ec___aarch64_cas16_acq = 831, // #__aarch64_cas16_acq
  arm64ec___aarch64_cas16_acq_rel = 832, // #__aarch64_cas16_acq_rel
  arm64ec___aarch64_cas16_rel = 833, // #__aarch64_cas16_rel
  arm64ec___aarch64_cas16_relax = 834, // #__aarch64_cas16_relax
  arm64ec___aarch64_ldadd1_acq = 835, // #__aarch64_ldadd1_acq
  arm64ec___aarch64_ldadd1_acq_rel = 836, // #__aarch64_ldadd1_acq_rel
  arm64ec___aarch64_ldadd1_rel = 837, // #__aarch64_ldadd1_rel
  arm64ec___aarch64_ldadd1_relax = 838, // #__aarch64_ldadd1_relax
  arm64ec___aarch64_ldadd2_acq = 839, // #__aarch64_ldadd2_acq
  arm64ec___aarch64_ldadd2_acq_rel = 840, // #__aarch64_ldadd2_acq_rel
  arm64ec___aarch64_ldadd2_rel = 841, // #__aarch64_ldadd2_rel
  arm64ec___aarch64_ldadd2_relax = 842, // #__aarch64_ldadd2_relax
  arm64ec___aarch64_ldadd4_acq = 843, // #__aarch64_ldadd4_acq
  arm64ec___aarch64_ldadd4_acq_rel = 844, // #__aarch64_ldadd4_acq_rel
  arm64ec___aarch64_ldadd4_rel = 845, // #__aarch64_ldadd4_rel
  arm64ec___aarch64_ldadd4_relax = 846, // #__aarch64_ldadd4_relax
  arm64ec___aarch64_ldadd8_acq = 847, // #__aarch64_ldadd8_acq
  arm64ec___aarch64_ldadd8_acq_rel = 848, // #__aarch64_ldadd8_acq_rel
  arm64ec___aarch64_ldadd8_rel = 849, // #__aarch64_ldadd8_rel
  arm64ec___aarch64_ldadd8_relax = 850, // #__aarch64_ldadd8_relax
  arm64ec___aarch64_ldclr1_acq = 851, // #__aarch64_ldclr1_acq
  arm64ec___aarch64_ldclr1_acq_rel = 852, // #__aarch64_ldclr1_acq_rel
  arm64ec___aarch64_ldclr1_rel = 853, // #__aarch64_ldclr1_rel
  arm64ec___aarch64_ldclr1_relax = 854, // #__aarch64_ldclr1_relax
  arm64ec___aarch64_ldclr2_acq = 855, // #__aarch64_ldclr2_acq
  arm64ec___aarch64_ldclr2_acq_rel = 856, // #__aarch64_ldclr2_acq_rel
  arm64ec___aarch64_ldclr2_rel = 857, // #__aarch64_ldclr2_rel
  arm64ec___aarch64_ldclr2_relax = 858, // #__aarch64_ldclr2_relax
  arm64ec___aarch64_ldclr4_acq = 859, // #__aarch64_ldclr4_acq
  arm64ec___aarch64_ldclr4_acq_rel = 860, // #__aarch64_ldclr4_acq_rel
  arm64ec___aarch64_ldclr4_rel = 861, // #__aarch64_ldclr4_rel
  arm64ec___aarch64_ldclr4_relax = 862, // #__aarch64_ldclr4_relax
  arm64ec___aarch64_ldclr8_acq = 863, // #__aarch64_ldclr8_acq
  arm64ec___aarch64_ldclr8_acq_rel = 864, // #__aarch64_ldclr8_acq_rel
  arm64ec___aarch64_ldclr8_rel = 865, // #__aarch64_ldclr8_rel
  arm64ec___aarch64_ldclr8_relax = 866, // #__aarch64_ldclr8_relax
  arm64ec___aarch64_ldeor1_acq = 867, // #__aarch64_ldeor1_acq
  arm64ec___aarch64_ldeor1_acq_rel = 868, // #__aarch64_ldeor1_acq_rel
  arm64ec___aarch64_ldeor1_rel = 869, // #__aarch64_ldeor1_rel
  arm64ec___aarch64_ldeor1_relax = 870, // #__aarch64_ldeor1_relax
  arm64ec___aarch64_ldeor2_acq = 871, // #__aarch64_ldeor2_acq
  arm64ec___aarch64_ldeor2_acq_rel = 872, // #__aarch64_ldeor2_acq_rel
  arm64ec___aarch64_ldeor2_rel = 873, // #__aarch64_ldeor2_rel
  arm64ec___aarch64_ldeor2_relax = 874, // #__aarch64_ldeor2_relax
  arm64ec___aarch64_ldeor4_acq = 875, // #__aarch64_ldeor4_acq
  arm64ec___aarch64_ldeor4_acq_rel = 876, // #__aarch64_ldeor4_acq_rel
  arm64ec___aarch64_ldeor4_rel = 877, // #__aarch64_ldeor4_rel
  arm64ec___aarch64_ldeor4_relax = 878, // #__aarch64_ldeor4_relax
  arm64ec___aarch64_ldeor8_acq = 879, // #__aarch64_ldeor8_acq
  arm64ec___aarch64_ldeor8_acq_rel = 880, // #__aarch64_ldeor8_acq_rel
  arm64ec___aarch64_ldeor8_rel = 881, // #__aarch64_ldeor8_rel
  arm64ec___aarch64_ldeor8_relax = 882, // #__aarch64_ldeor8_relax
  arm64ec___aarch64_ldset1_acq = 883, // #__aarch64_ldset1_acq
  arm64ec___aarch64_ldset1_acq_rel = 884, // #__aarch64_ldset1_acq_rel
  arm64ec___aarch64_ldset1_rel = 885, // #__aarch64_ldset1_rel
  arm64ec___aarch64_ldset1_relax = 886, // #__aarch64_ldset1_relax
  arm64ec___aarch64_ldset2_acq = 887, // #__aarch64_ldset2_acq
  arm64ec___aarch64_ldset2_acq_rel = 888, // #__aarch64_ldset2_acq_rel
  arm64ec___aarch64_ldset2_rel = 889, // #__aarch64_ldset2_rel
  arm64ec___aarch64_ldset2_relax = 890, // #__aarch64_ldset2_relax
  arm64ec___aarch64_ldset4_acq = 891, // #__aarch64_ldset4_acq
  arm64ec___aarch64_ldset4_acq_rel = 892, // #__aarch64_ldset4_acq_rel
  arm64ec___aarch64_ldset4_rel = 893, // #__aarch64_ldset4_rel
  arm64ec___aarch64_ldset4_relax = 894, // #__aarch64_ldset4_relax
  arm64ec___aarch64_ldset8_acq = 895, // #__aarch64_ldset8_acq
  arm64ec___aarch64_ldset8_acq_rel = 896, // #__aarch64_ldset8_acq_rel
  arm64ec___aarch64_ldset8_rel = 897, // #__aarch64_ldset8_rel
  arm64ec___aarch64_ldset8_relax = 898, // #__aarch64_ldset8_relax
  arm64ec___aarch64_swp1_acq = 899, // #__aarch64_swp1_acq
  arm64ec___aarch64_swp1_acq_rel = 900, // #__aarch64_swp1_acq_rel
  arm64ec___aarch64_swp1_rel = 901, // #__aarch64_swp1_rel
  arm64ec___aarch64_swp1_relax = 902, // #__aarch64_swp1_relax
  arm64ec___aarch64_swp2_acq = 903, // #__aarch64_swp2_acq
  arm64ec___aarch64_swp2_acq_rel = 904, // #__aarch64_swp2_acq_rel
  arm64ec___aarch64_swp2_rel = 905, // #__aarch64_swp2_rel
  arm64ec___aarch64_swp2_relax = 906, // #__aarch64_swp2_relax
  arm64ec___aarch64_swp4_acq = 907, // #__aarch64_swp4_acq
  arm64ec___aarch64_swp4_acq_rel = 908, // #__aarch64_swp4_acq_rel
  arm64ec___aarch64_swp4_rel = 909, // #__aarch64_swp4_rel
  arm64ec___aarch64_swp4_relax = 910, // #__aarch64_swp4_relax
  arm64ec___aarch64_swp8_acq = 911, // #__aarch64_swp8_acq
  arm64ec___aarch64_swp8_acq_rel = 912, // #__aarch64_swp8_acq_rel
  arm64ec___aarch64_swp8_rel = 913, // #__aarch64_swp8_rel
  arm64ec___aarch64_swp8_relax = 914, // #__aarch64_swp8_relax
  arm64ec___adddf3 = 915, // #__adddf3
  arm64ec___addsf3 = 916, // #__addsf3
  arm64ec___addtf3 = 917, // #__addtf3
  arm64ec___arm_sc_memcpy = 918, // #__arm_sc_memcpy
  arm64ec___arm_sc_memmove = 919, // #__arm_sc_memmove
  arm64ec___arm_sc_memset = 920, // #__arm_sc_memset
  arm64ec___ashldi3 = 921, // #__ashldi3
  arm64ec___ashlhi3 = 922, // #__ashlhi3
  arm64ec___ashlsi3 = 923, // #__ashlsi3
  arm64ec___ashlti3 = 924, // #__ashlti3
  arm64ec___ashrdi3 = 925, // #__ashrdi3
  arm64ec___ashrhi3 = 926, // #__ashrhi3
  arm64ec___ashrsi3 = 927, // #__ashrsi3
  arm64ec___ashrti3 = 928, // #__ashrti3
  arm64ec___atomic_compare_exchange = 929, // #__atomic_compare_exchange
  arm64ec___atomic_compare_exchange_1 = 930, // #__atomic_compare_exchange_1
  arm64ec___atomic_compare_exchange_2 = 931, // #__atomic_compare_exchange_2
  arm64ec___atomic_compare_exchange_4 = 932, // #__atomic_compare_exchange_4
  arm64ec___atomic_compare_exchange_8 = 933, // #__atomic_compare_exchange_8
  arm64ec___atomic_compare_exchange_16 = 934, // #__atomic_compare_exchange_16
  arm64ec___atomic_exchange = 935, // #__atomic_exchange
  arm64ec___atomic_exchange_1 = 936, // #__atomic_exchange_1
  arm64ec___atomic_exchange_2 = 937, // #__atomic_exchange_2
  arm64ec___atomic_exchange_4 = 938, // #__atomic_exchange_4
  arm64ec___atomic_exchange_8 = 939, // #__atomic_exchange_8
  arm64ec___atomic_exchange_16 = 940, // #__atomic_exchange_16
  arm64ec___atomic_fetch_add_1 = 941, // #__atomic_fetch_add_1
  arm64ec___atomic_fetch_add_2 = 942, // #__atomic_fetch_add_2
  arm64ec___atomic_fetch_add_4 = 943, // #__atomic_fetch_add_4
  arm64ec___atomic_fetch_add_8 = 944, // #__atomic_fetch_add_8
  arm64ec___atomic_fetch_add_16 = 945, // #__atomic_fetch_add_16
  arm64ec___atomic_fetch_and_1 = 946, // #__atomic_fetch_and_1
  arm64ec___atomic_fetch_and_2 = 947, // #__atomic_fetch_and_2
  arm64ec___atomic_fetch_and_4 = 948, // #__atomic_fetch_and_4
  arm64ec___atomic_fetch_and_8 = 949, // #__atomic_fetch_and_8
  arm64ec___atomic_fetch_and_16 = 950, // #__atomic_fetch_and_16
  arm64ec___atomic_fetch_nand_1 = 951, // #__atomic_fetch_nand_1
  arm64ec___atomic_fetch_nand_2 = 952, // #__atomic_fetch_nand_2
  arm64ec___atomic_fetch_nand_4 = 953, // #__atomic_fetch_nand_4
  arm64ec___atomic_fetch_nand_8 = 954, // #__atomic_fetch_nand_8
  arm64ec___atomic_fetch_nand_16 = 955, // #__atomic_fetch_nand_16
  arm64ec___atomic_fetch_or_1 = 956, // #__atomic_fetch_or_1
  arm64ec___atomic_fetch_or_2 = 957, // #__atomic_fetch_or_2
  arm64ec___atomic_fetch_or_4 = 958, // #__atomic_fetch_or_4
  arm64ec___atomic_fetch_or_8 = 959, // #__atomic_fetch_or_8
  arm64ec___atomic_fetch_or_16 = 960, // #__atomic_fetch_or_16
  arm64ec___atomic_fetch_sub_1 = 961, // #__atomic_fetch_sub_1
  arm64ec___atomic_fetch_sub_2 = 962, // #__atomic_fetch_sub_2
  arm64ec___atomic_fetch_sub_4 = 963, // #__atomic_fetch_sub_4
  arm64ec___atomic_fetch_sub_8 = 964, // #__atomic_fetch_sub_8
  arm64ec___atomic_fetch_sub_16 = 965, // #__atomic_fetch_sub_16
  arm64ec___atomic_fetch_xor_1 = 966, // #__atomic_fetch_xor_1
  arm64ec___atomic_fetch_xor_2 = 967, // #__atomic_fetch_xor_2
  arm64ec___atomic_fetch_xor_4 = 968, // #__atomic_fetch_xor_4
  arm64ec___atomic_fetch_xor_8 = 969, // #__atomic_fetch_xor_8
  arm64ec___atomic_fetch_xor_16 = 970, // #__atomic_fetch_xor_16
  arm64ec___atomic_load = 971, // #__atomic_load
  arm64ec___atomic_load_1 = 972, // #__atomic_load_1
  arm64ec___atomic_load_2 = 973, // #__atomic_load_2
  arm64ec___atomic_load_4 = 974, // #__atomic_load_4
  arm64ec___atomic_load_8 = 975, // #__atomic_load_8
  arm64ec___atomic_load_16 = 976, // #__atomic_load_16
  arm64ec___atomic_store = 977, // #__atomic_store
  arm64ec___atomic_store_1 = 978, // #__atomic_store_1
  arm64ec___atomic_store_2 = 979, // #__atomic_store_2
  arm64ec___atomic_store_4 = 980, // #__atomic_store_4
  arm64ec___atomic_store_8 = 981, // #__atomic_store_8
  arm64ec___atomic_store_16 = 982, // #__atomic_store_16
  arm64ec___clear_cache = 983, // #__clear_cache
  arm64ec___clzdi2 = 984, // #__clzdi2
  arm64ec___clzsi2 = 985, // #__clzsi2
  arm64ec___clzti2 = 986, // #__clzti2
  arm64ec___cxa_end_cleanup = 987, // #__cxa_end_cleanup
  arm64ec___divdf3 = 988, // #__divdf3
  arm64ec___divdi3 = 989, // #__divdi3
  arm64ec___divhi3 = 990, // #__divhi3
  arm64ec___divqi3 = 991, // #__divqi3
  arm64ec___divsf3 = 992, // #__divsf3
  arm64ec___divsi3 = 993, // #__divsi3
  arm64ec___divtf3 = 994, // #__divtf3
  arm64ec___divti3 = 995, // #__divti3
  arm64ec___eqdf2 = 996, // #__eqdf2
  arm64ec___eqsf2 = 997, // #__eqsf2
  arm64ec___eqtf2 = 998, // #__eqtf2
  arm64ec___exp2_finite = 999, // #__exp2_finite
  arm64ec___exp2f_finite = 1000, // #__exp2f_finite
  arm64ec___exp2l_finite_f128 = 1001, // #__exp2l_finite
  arm64ec___exp_finite = 1002, // #__exp_finite
  arm64ec___expf_finite = 1003, // #__expf_finite
  arm64ec___expl_finite_f128 = 1004, // #__expl_finite
  arm64ec___extendbfsf2 = 1005, // #__extendbfsf2
  arm64ec___extenddftf2 = 1006, // #__extenddftf2
  arm64ec___extendhfdf2 = 1007, // #__extendhfdf2
  arm64ec___extendhfsf2 = 1008, // #__extendhfsf2
  arm64ec___extendhftf2 = 1009, // #__extendhftf2
  arm64ec___extendsfdf2 = 1010, // #__extendsfdf2
  arm64ec___extendsftf2 = 1011, // #__extendsftf2
  arm64ec___fixdfdi = 1012, // #__fixdfdi
  arm64ec___fixdfsi = 1013, // #__fixdfsi
  arm64ec___fixdfti = 1014, // #__fixdfti
  arm64ec___fixhfdi = 1015, // #__fixhfdi
  arm64ec___fixhfsi = 1016, // #__fixhfsi
  arm64ec___fixhfti = 1017, // #__fixhfti
  arm64ec___fixsfdi = 1018, // #__fixsfdi
  arm64ec___fixsfsi = 1019, // #__fixsfsi
  arm64ec___fixsfti = 1020, // #__fixsfti
  arm64ec___fixtfdi_f128 = 1021, // #__fixtfdi
  arm64ec___fixtfsi = 1022, // #__fixtfsi
  arm64ec___fixtfti_f128 = 1023, // #__fixtfti
  arm64ec___fixunsdfdi = 1024, // #__fixunsdfdi
  arm64ec___fixunsdfsi = 1025, // #__fixunsdfsi
  arm64ec___fixunsdfti = 1026, // #__fixunsdfti
  arm64ec___fixunshfdi = 1027, // #__fixunshfdi
  arm64ec___fixunshfsi = 1028, // #__fixunshfsi
  arm64ec___fixunshfti = 1029, // #__fixunshfti
  arm64ec___fixunssfdi = 1030, // #__fixunssfdi
  arm64ec___fixunssfsi = 1031, // #__fixunssfsi
  arm64ec___fixunssfti = 1032, // #__fixunssfti
  arm64ec___fixunstfdi_f128 = 1033, // #__fixunstfdi
  arm64ec___fixunstfsi_f128 = 1034, // #__fixunstfsi
  arm64ec___fixunstfti_f128 = 1035, // #__fixunstfti
  arm64ec___floatdibf = 1036, // #__floatdibf
  arm64ec___floatdidf = 1037, // #__floatdidf
  arm64ec___floatdihf = 1038, // #__floatdihf
  arm64ec___floatdisf = 1039, // #__floatdisf
  arm64ec___floatditf_f128 = 1040, // #__floatditf
  arm64ec___floatsidf = 1041, // #__floatsidf
  arm64ec___floatsihf = 1042, // #__floatsihf
  arm64ec___floatsisf = 1043, // #__floatsisf
  arm64ec___floatsitf = 1044, // #__floatsitf
  arm64ec___floattidf = 1045, // #__floattidf
  arm64ec___floattihf = 1046, // #__floattihf
  arm64ec___floattisf = 1047, // #__floattisf
  arm64ec___floattitf_f128 = 1048, // #__floattitf
  arm64ec___floatundibf = 1049, // #__floatundibf
  arm64ec___floatundidf = 1050, // #__floatundidf
  arm64ec___floatundihf = 1051, // #__floatundihf
  arm64ec___floatundisf = 1052, // #__floatundisf
  arm64ec___floatunditf_f128 = 1053, // #__floatunditf
  arm64ec___floatunsidf = 1054, // #__floatunsidf
  arm64ec___floatunsihf = 1055, // #__floatunsihf
  arm64ec___floatunsisf = 1056, // #__floatunsisf
  arm64ec___floatunsitf = 1057, // #__floatunsitf
  arm64ec___floatuntidf = 1058, // #__floatuntidf
  arm64ec___floatuntihf = 1059, // #__floatuntihf
  arm64ec___floatuntisf = 1060, // #__floatuntisf
  arm64ec___floatuntitf_f128 = 1061, // #__floatuntitf
  arm64ec___gedf2 = 1062, // #__gedf2
  arm64ec___gesf2 = 1063, // #__gesf2
  arm64ec___getf2 = 1064, // #__getf2
  arm64ec___gtdf2 = 1065, // #__gtdf2
  arm64ec___gtsf2 = 1066, // #__gtsf2
  arm64ec___gttf2 = 1067, // #__gttf2
  arm64ec___ledf2 = 1068, // #__ledf2
  arm64ec___lesf2 = 1069, // #__lesf2
  arm64ec___letf2 = 1070, // #__letf2
  arm64ec___llvm_deoptimize = 1071, // #__llvm_deoptimize
  arm64ec___llvm_memcpy_element_unordered_atomic_1 = 1072, // #__llvm_memcpy_element_unordered_atomic_1
  arm64ec___llvm_memcpy_element_unordered_atomic_2 = 1073, // #__llvm_memcpy_element_unordered_atomic_2
  arm64ec___llvm_memcpy_element_unordered_atomic_4 = 1074, // #__llvm_memcpy_element_unordered_atomic_4
  arm64ec___llvm_memcpy_element_unordered_atomic_8 = 1075, // #__llvm_memcpy_element_unordered_atomic_8
  arm64ec___llvm_memcpy_element_unordered_atomic_16 = 1076, // #__llvm_memcpy_element_unordered_atomic_16
  arm64ec___llvm_memmove_element_unordered_atomic_1 = 1077, // #__llvm_memmove_element_unordered_atomic_1
  arm64ec___llvm_memmove_element_unordered_atomic_2 = 1078, // #__llvm_memmove_element_unordered_atomic_2
  arm64ec___llvm_memmove_element_unordered_atomic_4 = 1079, // #__llvm_memmove_element_unordered_atomic_4
  arm64ec___llvm_memmove_element_unordered_atomic_8 = 1080, // #__llvm_memmove_element_unordered_atomic_8
  arm64ec___llvm_memmove_element_unordered_atomic_16 = 1081, // #__llvm_memmove_element_unordered_atomic_16
  arm64ec___llvm_memset_element_unordered_atomic_1 = 1082, // #__llvm_memset_element_unordered_atomic_1
  arm64ec___llvm_memset_element_unordered_atomic_2 = 1083, // #__llvm_memset_element_unordered_atomic_2
  arm64ec___llvm_memset_element_unordered_atomic_4 = 1084, // #__llvm_memset_element_unordered_atomic_4
  arm64ec___llvm_memset_element_unordered_atomic_8 = 1085, // #__llvm_memset_element_unordered_atomic_8
  arm64ec___llvm_memset_element_unordered_atomic_16 = 1086, // #__llvm_memset_element_unordered_atomic_16
  arm64ec___log2_finite = 1087, // #__log2_finite
  arm64ec___log2f_finite = 1088, // #__log2f_finite
  arm64ec___log2l_finite_f128 = 1089, // #__log2l_finite
  arm64ec___log10_finite = 1090, // #__log10_finite
  arm64ec___log10f_finite = 1091, // #__log10f_finite
  arm64ec___log10l_finite_f128 = 1092, // #__log10l_finite
  arm64ec___log_finite = 1093, // #__log_finite
  arm64ec___logf_finite = 1094, // #__logf_finite
  arm64ec___logl_finite_f128 = 1095, // #__logl_finite
  arm64ec___lshrdi3 = 1096, // #__lshrdi3
  arm64ec___lshrhi3 = 1097, // #__lshrhi3
  arm64ec___lshrsi3 = 1098, // #__lshrsi3
  arm64ec___lshrti3 = 1099, // #__lshrti3
  arm64ec___ltdf2 = 1100, // #__ltdf2
  arm64ec___ltsf2 = 1101, // #__ltsf2
  arm64ec___lttf2 = 1102, // #__lttf2
  arm64ec___moddi3 = 1103, // #__moddi3
  arm64ec___modhi3 = 1104, // #__modhi3
  arm64ec___modqi3 = 1105, // #__modqi3
  arm64ec___modsi3 = 1106, // #__modsi3
  arm64ec___modti3 = 1107, // #__modti3
  arm64ec___muldf3 = 1108, // #__muldf3
  arm64ec___muldi3 = 1109, // #__muldi3
  arm64ec___mulhi3 = 1110, // #__mulhi3
  arm64ec___mulosi4 = 1111, // #__mulosi4
  arm64ec___mulqi3 = 1112, // #__mulqi3
  arm64ec___mulsf3 = 1113, // #__mulsf3
  arm64ec___mulsi3 = 1114, // #__mulsi3
  arm64ec___multf3 = 1115, // #__multf3
  arm64ec___multi3 = 1116, // #__multi3
  arm64ec___nedf2 = 1117, // #__nedf2
  arm64ec___negdi2 = 1118, // #__negdi2
  arm64ec___negsi2 = 1119, // #__negsi2
  arm64ec___nesf2 = 1120, // #__nesf2
  arm64ec___netf2 = 1121, // #__netf2
  arm64ec___popcountdi2 = 1122, // #__popcountdi2
  arm64ec___popcountsi2 = 1123, // #__popcountsi2
  arm64ec___popcountti2 = 1124, // #__popcountti2
  arm64ec___pow_finite = 1125, // #__pow_finite
  arm64ec___powf_finite = 1126, // #__powf_finite
  arm64ec___powitf2_f128 = 1127, // #__powitf2
  arm64ec___powl_finite_f128 = 1128, // #__powl_finite
  arm64ec___safestack_pointer_address = 1129, // #__safestack_pointer_address
  arm64ec___stack_chk_fail = 1130, // #__stack_chk_fail
  arm64ec___subdf3 = 1131, // #__subdf3
  arm64ec___subsf3 = 1132, // #__subsf3
  arm64ec___subtf3 = 1133, // #__subtf3
  arm64ec___sync_fetch_and_add_1 = 1134, // #__sync_fetch_and_add_1
  arm64ec___sync_fetch_and_add_2 = 1135, // #__sync_fetch_and_add_2
  arm64ec___sync_fetch_and_add_4 = 1136, // #__sync_fetch_and_add_4
  arm64ec___sync_fetch_and_add_8 = 1137, // #__sync_fetch_and_add_8
  arm64ec___sync_fetch_and_add_16 = 1138, // #__sync_fetch_and_add_16
  arm64ec___sync_fetch_and_and_1 = 1139, // #__sync_fetch_and_and_1
  arm64ec___sync_fetch_and_and_2 = 1140, // #__sync_fetch_and_and_2
  arm64ec___sync_fetch_and_and_4 = 1141, // #__sync_fetch_and_and_4
  arm64ec___sync_fetch_and_and_8 = 1142, // #__sync_fetch_and_and_8
  arm64ec___sync_fetch_and_and_16 = 1143, // #__sync_fetch_and_and_16
  arm64ec___sync_fetch_and_max_1 = 1144, // #__sync_fetch_and_max_1
  arm64ec___sync_fetch_and_max_2 = 1145, // #__sync_fetch_and_max_2
  arm64ec___sync_fetch_and_max_4 = 1146, // #__sync_fetch_and_max_4
  arm64ec___sync_fetch_and_max_8 = 1147, // #__sync_fetch_and_max_8
  arm64ec___sync_fetch_and_max_16 = 1148, // #__sync_fetch_and_max_16
  arm64ec___sync_fetch_and_min_1 = 1149, // #__sync_fetch_and_min_1
  arm64ec___sync_fetch_and_min_2 = 1150, // #__sync_fetch_and_min_2
  arm64ec___sync_fetch_and_min_4 = 1151, // #__sync_fetch_and_min_4
  arm64ec___sync_fetch_and_min_8 = 1152, // #__sync_fetch_and_min_8
  arm64ec___sync_fetch_and_min_16 = 1153, // #__sync_fetch_and_min_16
  arm64ec___sync_fetch_and_nand_1 = 1154, // #__sync_fetch_and_nand_1
  arm64ec___sync_fetch_and_nand_2 = 1155, // #__sync_fetch_and_nand_2
  arm64ec___sync_fetch_and_nand_4 = 1156, // #__sync_fetch_and_nand_4
  arm64ec___sync_fetch_and_nand_8 = 1157, // #__sync_fetch_and_nand_8
  arm64ec___sync_fetch_and_nand_16 = 1158, // #__sync_fetch_and_nand_16
  arm64ec___sync_fetch_and_or_1 = 1159, // #__sync_fetch_and_or_1
  arm64ec___sync_fetch_and_or_2 = 1160, // #__sync_fetch_and_or_2
  arm64ec___sync_fetch_and_or_4 = 1161, // #__sync_fetch_and_or_4
  arm64ec___sync_fetch_and_or_8 = 1162, // #__sync_fetch_and_or_8
  arm64ec___sync_fetch_and_or_16 = 1163, // #__sync_fetch_and_or_16
  arm64ec___sync_fetch_and_sub_1 = 1164, // #__sync_fetch_and_sub_1
  arm64ec___sync_fetch_and_sub_2 = 1165, // #__sync_fetch_and_sub_2
  arm64ec___sync_fetch_and_sub_4 = 1166, // #__sync_fetch_and_sub_4
  arm64ec___sync_fetch_and_sub_8 = 1167, // #__sync_fetch_and_sub_8
  arm64ec___sync_fetch_and_sub_16 = 1168, // #__sync_fetch_and_sub_16
  arm64ec___sync_fetch_and_umax_1 = 1169, // #__sync_fetch_and_umax_1
  arm64ec___sync_fetch_and_umax_2 = 1170, // #__sync_fetch_and_umax_2
  arm64ec___sync_fetch_and_umax_4 = 1171, // #__sync_fetch_and_umax_4
  arm64ec___sync_fetch_and_umax_8 = 1172, // #__sync_fetch_and_umax_8
  arm64ec___sync_fetch_and_umax_16 = 1173, // #__sync_fetch_and_umax_16
  arm64ec___sync_fetch_and_umin_1 = 1174, // #__sync_fetch_and_umin_1
  arm64ec___sync_fetch_and_umin_2 = 1175, // #__sync_fetch_and_umin_2
  arm64ec___sync_fetch_and_umin_4 = 1176, // #__sync_fetch_and_umin_4
  arm64ec___sync_fetch_and_umin_8 = 1177, // #__sync_fetch_and_umin_8
  arm64ec___sync_fetch_and_umin_16 = 1178, // #__sync_fetch_and_umin_16
  arm64ec___sync_fetch_and_xor_1 = 1179, // #__sync_fetch_and_xor_1
  arm64ec___sync_fetch_and_xor_2 = 1180, // #__sync_fetch_and_xor_2
  arm64ec___sync_fetch_and_xor_4 = 1181, // #__sync_fetch_and_xor_4
  arm64ec___sync_fetch_and_xor_8 = 1182, // #__sync_fetch_and_xor_8
  arm64ec___sync_fetch_and_xor_16 = 1183, // #__sync_fetch_and_xor_16
  arm64ec___sync_lock_test_and_set_1 = 1184, // #__sync_lock_test_and_set_1
  arm64ec___sync_lock_test_and_set_2 = 1185, // #__sync_lock_test_and_set_2
  arm64ec___sync_lock_test_and_set_4 = 1186, // #__sync_lock_test_and_set_4
  arm64ec___sync_lock_test_and_set_8 = 1187, // #__sync_lock_test_and_set_8
  arm64ec___sync_lock_test_and_set_16 = 1188, // #__sync_lock_test_and_set_16
  arm64ec___sync_val_compare_and_swap_1 = 1189, // #__sync_val_compare_and_swap_1
  arm64ec___sync_val_compare_and_swap_2 = 1190, // #__sync_val_compare_and_swap_2
  arm64ec___sync_val_compare_and_swap_4 = 1191, // #__sync_val_compare_and_swap_4
  arm64ec___sync_val_compare_and_swap_8 = 1192, // #__sync_val_compare_and_swap_8
  arm64ec___sync_val_compare_and_swap_16 = 1193, // #__sync_val_compare_and_swap_16
  arm64ec___truncdfbf2 = 1194, // #__truncdfbf2
  arm64ec___truncdfhf2 = 1195, // #__truncdfhf2
  arm64ec___truncdfsf2 = 1196, // #__truncdfsf2
  arm64ec___truncsfbf2 = 1197, // #__truncsfbf2
  arm64ec___truncsfhf2 = 1198, // #__truncsfhf2
  arm64ec___trunctfbf2 = 1199, // #__trunctfbf2
  arm64ec___trunctfdf2 = 1200, // #__trunctfdf2
  arm64ec___trunctfhf2_f128 = 1201, // #__trunctfhf2
  arm64ec___trunctfsf2 = 1202, // #__trunctfsf2
  arm64ec___udivdi3 = 1203, // #__udivdi3
  arm64ec___udivhi3 = 1204, // #__udivhi3
  arm64ec___udivqi3 = 1205, // #__udivqi3
  arm64ec___udivsi3 = 1206, // #__udivsi3
  arm64ec___udivti3 = 1207, // #__udivti3
  arm64ec___umoddi3 = 1208, // #__umoddi3
  arm64ec___umodhi3 = 1209, // #__umodhi3
  arm64ec___umodqi3 = 1210, // #__umodqi3
  arm64ec___umodsi3 = 1211, // #__umodsi3
  arm64ec___umodti3 = 1212, // #__umodti3
  arm64ec___unorddf2 = 1213, // #__unorddf2
  arm64ec___unordsf2 = 1214, // #__unordsf2
  arm64ec___unordtf2 = 1215, // #__unordtf2
  arm64ec_acos = 1216, // #acos
  arm64ec_acos_f128 = 1217, // #acosl
  arm64ec_acosf = 1218, // #acosf
  arm64ec_asin = 1219, // #asin
  arm64ec_asin_f128 = 1220, // #asinl
  arm64ec_asinf = 1221, // #asinf
  arm64ec_atan = 1222, // #atan
  arm64ec_atan2 = 1223, // #atan2
  arm64ec_atan2_f128 = 1224, // #atan2l
  arm64ec_atan2f = 1225, // #atan2f
  arm64ec_atan_f128 = 1226, // #atanl
  arm64ec_atanf = 1227, // #atanf
  arm64ec_calloc = 1228, // #calloc
  arm64ec_cbrt = 1229, // #cbrt
  arm64ec_cbrt_f128 = 1230, // #cbrtl
  arm64ec_cbrtf = 1231, // #cbrtf
  arm64ec_ceil = 1232, // #ceil
  arm64ec_ceil_f128 = 1233, // #ceill
  arm64ec_ceilf = 1234, // #ceilf
  arm64ec_copysign = 1235, // #copysign
  arm64ec_copysign_f128 = 1236, // #copysignl
  arm64ec_copysignf = 1237, // #copysignf
  arm64ec_cos = 1238, // #cos
  arm64ec_cos_f128 = 1239, // #cosl
  arm64ec_cosf = 1240, // #cosf
  arm64ec_cosh = 1241, // #cosh
  arm64ec_cosh_f128 = 1242, // #coshl
  arm64ec_coshf = 1243, // #coshf
  arm64ec_exp = 1244, // #exp
  arm64ec_exp2 = 1245, // #exp2
  arm64ec_exp2_f128 = 1246, // #exp2l
  arm64ec_exp2f = 1247, // #exp2f
  arm64ec_exp10 = 1248, // #exp10
  arm64ec_exp10f = 1249, // #exp10f
  arm64ec_exp10l_f128 = 1250, // #exp10l
  arm64ec_exp_f128 = 1251, // #expl
  arm64ec_expf = 1252, // #expf
  arm64ec_fegetenv = 1253, // #fegetenv
  arm64ec_fegetmode = 1254, // #fegetmode
  arm64ec_fesetenv = 1255, // #fesetenv
  arm64ec_fesetmode = 1256, // #fesetmode
  arm64ec_floor = 1257, // #floor
  arm64ec_floor_f128 = 1258, // #floorl
  arm64ec_floorf = 1259, // #floorf
  arm64ec_fma = 1260, // #fma
  arm64ec_fma_f128 = 1261, // #fmal
  arm64ec_fmaf = 1262, // #fmaf
  arm64ec_fmax = 1263, // #fmax
  arm64ec_fmax_f128 = 1264, // #fmaxl
  arm64ec_fmaxf = 1265, // #fmaxf
  arm64ec_fmaximum = 1266, // #fmaximum
  arm64ec_fmaximum_f128 = 1267, // #fmaximuml
  arm64ec_fmaximum_num = 1268, // #fmaximum_num
  arm64ec_fmaximum_num_f128 = 1269, // #fmaximum_numl
  arm64ec_fmaximum_numf = 1270, // #fmaximum_numf
  arm64ec_fmaximumf = 1271, // #fmaximumf
  arm64ec_fmin = 1272, // #fmin
  arm64ec_fmin_f128 = 1273, // #fminl
  arm64ec_fminf = 1274, // #fminf
  arm64ec_fminimum = 1275, // #fminimum
  arm64ec_fminimum_f128 = 1276, // #fminimuml
  arm64ec_fminimum_num = 1277, // #fminimum_num
  arm64ec_fminimum_num_f128 = 1278, // #fminimum_numl
  arm64ec_fminimum_numf = 1279, // #fminimum_numf
  arm64ec_fminimumf = 1280, // #fminimumf
  arm64ec_fmod = 1281, // #fmod
  arm64ec_fmodf = 1282, // #fmodf
  arm64ec_fmodl_f128 = 1283, // #fmodl
  arm64ec_frexp = 1284, // #frexp
  arm64ec_ldexp = 1285, // #ldexp
  arm64ec_llrint = 1286, // #llrint
  arm64ec_llrint_f128 = 1287, // #llrintl
  arm64ec_llrintf = 1288, // #llrintf
  arm64ec_llround = 1289, // #llround
  arm64ec_llround_f128 = 1290, // #llroundl
  arm64ec_llroundf = 1291, // #llroundf
  arm64ec_log = 1292, // #log
  arm64ec_log2 = 1293, // #log2
  arm64ec_log2_f128 = 1294, // #log2l
  arm64ec_log2f = 1295, // #log2f
  arm64ec_log10 = 1296, // #log10
  arm64ec_log10_f128 = 1297, // #log10l
  arm64ec_log10f = 1298, // #log10f
  arm64ec_log_f128 = 1299, // #logl
  arm64ec_logf = 1300, // #logf
  arm64ec_lrint = 1301, // #lrint
  arm64ec_lrint_f128 = 1302, // #lrintl
  arm64ec_lrintf = 1303, // #lrintf
  arm64ec_lround = 1304, // #lround
  arm64ec_lround_f128 = 1305, // #lroundl
  arm64ec_lroundf = 1306, // #lroundf
  arm64ec_memcpy = 1307, // #memcpy
  arm64ec_memmove = 1308, // #memmove
  arm64ec_memset = 1309, // #memset
  arm64ec_modf = 1310, // #modf
  arm64ec_modf_f128 = 1311, // #modfl
  arm64ec_modff = 1312, // #modff
  arm64ec_nearbyint = 1313, // #nearbyint
  arm64ec_nearbyint_f128 = 1314, // #nearbyintl
  arm64ec_nearbyintf = 1315, // #nearbyintf
  arm64ec_pow = 1316, // #pow
  arm64ec_pow_f128 = 1317, // #powl
  arm64ec_powf = 1318, // #powf
  arm64ec_rint = 1319, // #rint
  arm64ec_rint_f128 = 1320, // #rintl
  arm64ec_rintf = 1321, // #rintf
  arm64ec_round = 1322, // #round
  arm64ec_round_f128 = 1323, // #roundl
  arm64ec_roundeven = 1324, // #roundeven
  arm64ec_roundeven_f128 = 1325, // #roundevenl
  arm64ec_roundevenf = 1326, // #roundevenf
  arm64ec_roundf = 1327, // #roundf
  arm64ec_sin = 1328, // #sin
  arm64ec_sin_f128 = 1329, // #sinl
  arm64ec_sincospi = 1330, // #sincospi
  arm64ec_sincospi_f128 = 1331, // #sincospil
  arm64ec_sincospif = 1332, // #sincospif
  arm64ec_sinf = 1333, // #sinf
  arm64ec_sinh = 1334, // #sinh
  arm64ec_sinh_f128 = 1335, // #sinhl
  arm64ec_sinhf = 1336, // #sinhf
  arm64ec_sqrt = 1337, // #sqrt
  arm64ec_sqrt_f128 = 1338, // #sqrtl
  arm64ec_sqrtf = 1339, // #sqrtf
  arm64ec_tan = 1340, // #tan
  arm64ec_tan_f128 = 1341, // #tanl
  arm64ec_tanf = 1342, // #tanf
  arm64ec_tanh = 1343, // #tanh
  arm64ec_tanh_f128 = 1344, // #tanhl
  arm64ec_tanhf = 1345, // #tanhf
  arm64ec_trunc = 1346, // #trunc
  arm64ec_trunc_f128 = 1347, // #truncl
  arm64ec_truncf = 1348, // #truncf
  asin = 1349, // asin
  asin_f80 = 1350, // asinl
  asin_f128 = 1351, // asinl
  asin_ppcf128 = 1352, // asinl
  asinf = 1353, // asinf
  asinf128 = 1354, // asinf128
  atan = 1355, // atan
  atan2 = 1356, // atan2
  atan2_f80 = 1357, // atan2l
  atan2_f128 = 1358, // atan2l
  atan2_ppcf128 = 1359, // atan2l
  atan2f = 1360, // atan2f
  atan2f128 = 1361, // atan2f128
  atan_f80 = 1362, // atanl
  atan_f128 = 1363, // atanl
  atan_ppcf128 = 1364, // atanl
  atanf = 1365, // atanf
  atanf128 = 1366, // atanf128
  avr_cos = 1367, // cos
  avr_sin = 1368, // sin
  bzero = 1369, // bzero
  calloc = 1370, // calloc
  cbrt = 1371, // cbrt
  cbrt_f80 = 1372, // cbrtl
  cbrt_f128 = 1373, // cbrtl
  cbrt_ppcf128 = 1374, // cbrtl
  cbrtf = 1375, // cbrtf
  cbrtf128 = 1376, // cbrtf128
  ceil = 1377, // ceil
  ceil_f80 = 1378, // ceill
  ceil_f128 = 1379, // ceill
  ceil_ppcf128 = 1380, // ceill
  ceilf = 1381, // ceilf
  ceilf128 = 1382, // ceilf128
  copysign = 1383, // copysign
  copysign_f80 = 1384, // copysignl
  copysign_f128 = 1385, // copysignl
  copysign_ppcf128 = 1386, // copysignl
  copysignf = 1387, // copysignf
  copysignf128 = 1388, // copysignf128
  cos = 1389, // cos
  cos_f80 = 1390, // cosl
  cos_f128 = 1391, // cosl
  cos_ppcf128 = 1392, // cosl
  cosf = 1393, // cosf
  cosf128 = 1394, // cosf128
  cosh = 1395, // cosh
  cosh_f80 = 1396, // coshl
  cosh_f128 = 1397, // coshl
  cosh_ppcf128 = 1398, // coshl
  coshf = 1399, // coshf
  coshf128 = 1400, // coshf128
  emscripten_return_address = 1401, // emscripten_return_address
  exp = 1402, // exp
  exp2 = 1403, // exp2
  exp2_f80 = 1404, // exp2l
  exp2_f128 = 1405, // exp2l
  exp2_ppcf128 = 1406, // exp2l
  exp2f = 1407, // exp2f
  exp2f128 = 1408, // exp2f128
  exp10 = 1409, // exp10
  exp10f = 1410, // exp10f
  exp10f128 = 1411, // exp10f128
  exp10l_f80 = 1412, // exp10l
  exp10l_f128 = 1413, // exp10l
  exp10l_ppcf128 = 1414, // exp10l
  exp_f80 = 1415, // expl
  exp_f128 = 1416, // expl
  exp_ppcf128 = 1417, // expl
  expf = 1418, // expf
  expf128 = 1419, // expf128
  fegetenv = 1420, // fegetenv
  fegetmode = 1421, // fegetmode
  fesetenv = 1422, // fesetenv
  fesetmode = 1423, // fesetmode
  floor = 1424, // floor
  floor_f80 = 1425, // floorl
  floor_f128 = 1426, // floorl
  floor_ppcf128 = 1427, // floorl
  floorf = 1428, // floorf
  floorf128 = 1429, // floorf128
  fma = 1430, // fma
  fma_f80 = 1431, // fmal
  fma_f128 = 1432, // fmal
  fma_ppcf128 = 1433, // fmal
  fmaf = 1434, // fmaf
  fmaf128 = 1435, // fmaf128
  fmax = 1436, // fmax
  fmax_f80 = 1437, // fmaxl
  fmax_f128 = 1438, // fmaxl
  fmax_ppcf128 = 1439, // fmaxl
  fmaxf = 1440, // fmaxf
  fmaxf128 = 1441, // fmaxf128
  fmaximum = 1442, // fmaximum
  fmaximum_f80 = 1443, // fmaximuml
  fmaximum_f128 = 1444, // fmaximuml
  fmaximum_num = 1445, // fmaximum_num
  fmaximum_num_f80 = 1446, // fmaximum_numl
  fmaximum_num_f128 = 1447, // fmaximum_numl
  fmaximum_num_ppcf128 = 1448, // fmaximum_numl
  fmaximum_numf = 1449, // fmaximum_numf
  fmaximum_numf128 = 1450, // fmaximum_numf128
  fmaximum_ppcf128 = 1451, // fmaximuml
  fmaximumf = 1452, // fmaximumf
  fmaximumf128 = 1453, // fmaximumf128
  fmin = 1454, // fmin
  fmin_f80 = 1455, // fminl
  fmin_f128 = 1456, // fminl
  fmin_ppcf128 = 1457, // fminl
  fminf = 1458, // fminf
  fminf128 = 1459, // fminf128
  fminimum = 1460, // fminimum
  fminimum_f80 = 1461, // fminimuml
  fminimum_f128 = 1462, // fminimuml
  fminimum_num = 1463, // fminimum_num
  fminimum_num_f80 = 1464, // fminimum_numl
  fminimum_num_f128 = 1465, // fminimum_numl
  fminimum_num_ppcf128 = 1466, // fminimum_numl
  fminimum_numf = 1467, // fminimum_numf
  fminimum_numf128 = 1468, // fminimum_numf128
  fminimum_ppcf128 = 1469, // fminimuml
  fminimumf = 1470, // fminimumf
  fminimumf128 = 1471, // fminimumf128
  fmod = 1472, // fmod
  fmodf = 1473, // fmodf
  fmodf128 = 1474, // fmodf128
  fmodl_f80 = 1475, // fmodl
  fmodl_f128 = 1476, // fmodl
  fmodl_ppc128 = 1477, // fmodl
  frexp = 1478, // frexp
  frexp_f80 = 1479, // frexpl
  frexp_f128 = 1480, // frexpl
  frexp_ppcf128 = 1481, // frexpl
  frexpf = 1482, // frexpf
  frexpf128 = 1483, // frexpf128
  ldexp = 1484, // ldexp
  ldexp_f80 = 1485, // ldexpl
  ldexp_f128 = 1486, // ldexpl
  ldexp_ppcf128 = 1487, // ldexpl
  ldexpf = 1488, // ldexpf
  ldexpf128 = 1489, // ldexpf128
  llrint = 1490, // llrint
  llrint_f80 = 1491, // llrintl
  llrint_f128 = 1492, // llrintl
  llrint_ppcf128 = 1493, // llrintl
  llrintf = 1494, // llrintf
  llrintf128 = 1495, // llrintf128
  llround = 1496, // llround
  llround_f80 = 1497, // llroundl
  llround_f128 = 1498, // llroundl
  llround_ppcf128 = 1499, // llroundl
  llroundf = 1500, // llroundf
  llroundf128 = 1501, // llroundf128
  log = 1502, // log
  log2 = 1503, // log2
  log2_f80 = 1504, // log2l
  log2_f128 = 1505, // log2l
  log2_ppcf128 = 1506, // log2l
  log2f = 1507, // log2f
  log2f128 = 1508, // log2f128
  log10 = 1509, // log10
  log10_f80 = 1510, // log10l
  log10_f128 = 1511, // log10l
  log10_ppcf128 = 1512, // log10l
  log10f = 1513, // log10f
  log10f128 = 1514, // log10f128
  log_f80 = 1515, // logl
  log_f128 = 1516, // logl
  log_ppcf128 = 1517, // logl
  logf = 1518, // logf
  logf128 = 1519, // logf128
  lrint = 1520, // lrint
  lrint_f80 = 1521, // lrintl
  lrint_f128 = 1522, // lrintl
  lrint_ppcf128 = 1523, // lrintl
  lrintf = 1524, // lrintf
  lrintf128 = 1525, // lrintf128
  lround = 1526, // lround
  lround_f80 = 1527, // lroundl
  lround_f128 = 1528, // lroundl
  lround_ppcf128 = 1529, // lroundl
  lroundf = 1530, // lroundf
  lroundf128 = 1531, // lroundf128
  memcpy = 1532, // memcpy
  memmove = 1533, // memmove
  memset = 1534, // memset
  modf = 1535, // modf
  modf_f80 = 1536, // modfl
  modf_f128 = 1537, // modfl
  modf_ppcf128 = 1538, // modfl
  modff = 1539, // modff
  modff128 = 1540, // modff128
  nearbyint = 1541, // nearbyint
  nearbyint_f80 = 1542, // nearbyintl
  nearbyint_f128 = 1543, // nearbyintl
  nearbyint_ppcf128 = 1544, // nearbyintl
  nearbyintf = 1545, // nearbyintf
  nearbyintf128 = 1546, // nearbyintf128
  objc_autorelease = 1547, // objc_autorelease
  objc_autoreleasePoolPop = 1548, // objc_autoreleasePoolPop
  objc_autoreleasePoolPush = 1549, // objc_autoreleasePoolPush
  objc_autoreleaseReturnValue = 1550, // objc_autoreleaseReturnValue
  objc_claimAutoreleasedReturnValue = 1551, // objc_claimAutoreleasedReturnValue
  objc_copyWeak = 1552, // objc_copyWeak
  objc_destroyWeak = 1553, // objc_destroyWeak
  objc_initWeak = 1554, // objc_initWeak
  objc_loadWeak = 1555, // objc_loadWeak
  objc_loadWeakRetained = 1556, // objc_loadWeakRetained
  objc_moveWeak = 1557, // objc_moveWeak
  objc_release = 1558, // objc_release
  objc_retain = 1559, // objc_retain
  objc_retainAutorelease = 1560, // objc_retainAutorelease
  objc_retainAutoreleaseReturnValue = 1561, // objc_retainAutoreleaseReturnValue
  objc_retainAutoreleasedReturnValue = 1562, // objc_retainAutoreleasedReturnValue
  objc_retainBlock = 1563, // objc_retainBlock
  objc_retain_autorelease = 1564, // objc_retain_autorelease
  objc_retainedObject = 1565, // objc_retainedObject
  objc_storeStrong = 1566, // objc_storeStrong
  objc_storeWeak = 1567, // objc_storeWeak
  objc_sync_enter = 1568, // objc_sync_enter
  objc_sync_exit = 1569, // objc_sync_exit
  objc_unretainedObject = 1570, // objc_unretainedObject
  objc_unretainedPointer = 1571, // objc_unretainedPointer
  objc_unsafeClaimAutoreleasedReturnValue = 1572, // objc_unsafeClaimAutoreleasedReturnValue
  pow = 1573, // pow
  pow_f80 = 1574, // powl
  pow_f128 = 1575, // powl
  pow_ppcf128 = 1576, // powl
  powf = 1577, // powf
  powf128 = 1578, // powf128
  rint = 1579, // rint
  rint_f80 = 1580, // rintl
  rint_f128 = 1581, // rintl
  rint_ppcf128 = 1582, // rintl
  rintf = 1583, // rintf
  rintf128 = 1584, // rintf128
  round = 1585, // round
  round_f80 = 1586, // roundl
  round_f128 = 1587, // roundl
  round_ppcf128 = 1588, // roundl
  roundeven = 1589, // roundeven
  roundeven_f80 = 1590, // roundevenl
  roundeven_f128 = 1591, // roundevenl
  roundeven_ppcf128 = 1592, // roundevenl
  roundevenf = 1593, // roundevenf
  roundevenf128 = 1594, // roundevenf128
  roundf = 1595, // roundf
  roundf128 = 1596, // roundf128
  sin = 1597, // sin
  sin_f80 = 1598, // sinl
  sin_f128 = 1599, // sinl
  sin_ppcf128 = 1600, // sinl
  sincos = 1601, // sincos
  sincos_f80 = 1602, // sincosl
  sincos_f128 = 1603, // sincosl
  sincos_ppcf128 = 1604, // sincosl
  sincosf = 1605, // sincosf
  sincosf128 = 1606, // sincosf128
  sincospi = 1607, // sincospi
  sincospi_f80 = 1608, // sincospil
  sincospi_f128 = 1609, // sincospil
  sincospi_ppcf128 = 1610, // sincospil
  sincospif = 1611, // sincospif
  sinf = 1612, // sinf
  sinf128 = 1613, // sinf128
  sinh = 1614, // sinh
  sinh_f80 = 1615, // sinhl
  sinh_f128 = 1616, // sinhl
  sinh_ppcf128 = 1617, // sinhl
  sinhf = 1618, // sinhf
  sinhf128 = 1619, // sinhf128
  sparc_div = 1620, // .div
  sparc_rem = 1621, // .rem
  sparc_udiv = 1622, // .udiv
  sparc_umul = 1623, // .umul
  sparc_urem = 1624, // .urem
  sqrt = 1625, // sqrt
  sqrt_f80 = 1626, // sqrtl
  sqrt_f128 = 1627, // sqrtl
  sqrt_ppcf128 = 1628, // sqrtl
  sqrtf = 1629, // sqrtf
  sqrtf128 = 1630, // sqrtf128
  tan = 1631, // tan
  tan_f80 = 1632, // tanl
  tan_f128 = 1633, // tanl
  tan_ppcf128 = 1634, // tanl
  tanf = 1635, // tanf
  tanf128 = 1636, // tanf128
  tanh = 1637, // tanh
  tanh_f80 = 1638, // tanhl
  tanh_f128 = 1639, // tanhl
  tanh_ppcf128 = 1640, // tanhl
  tanhf = 1641, // tanhf
  tanhf128 = 1642, // tanhf128
  trunc = 1643, // trunc
  trunc_f80 = 1644, // truncl
  trunc_f128 = 1645, // truncl
  trunc_ppcf128 = 1646, // truncl
  truncf = 1647, // truncf
  truncf128 = 1648, // truncf128
  zos___DCPY_B = 1649, // @@DCPY@B
  zos___EXP2_B = 1650, // @@EXP2@B
  zos___FCBT_B = 1651, // @@FCBT@B
  zos___FCEL_B = 1652, // @@FCEL@B
  zos___FCOS_B = 1653, // @@FCOS@B
  zos___FCPY_B = 1654, // @@FCPY@B
  zos___FEXP_B = 1655, // @@FEXP@B
  zos___FFLR_B = 1656, // @@FFLR@B
  zos___FFMD_B = 1657, // @@FFMD@B
  zos___FFXP_B = 1658, // @@FFXP@B
  zos___FLG1_B = 1659, // @@FLG1@B
  zos___FLG2_B = 1660, // @@FLG2@B
  zos___FLOG_B = 1661, // @@FLOG@B
  zos___FLXP_B = 1662, // @@FLXP@B
  zos___FMAFB = 1663, // @@FMAFB
  zos___FMALB = 1664, // @@FMALB
  zos___FMAXFB = 1665, // @@FMAXFB
  zos___FMAXLB = 1666, // @@FMAXLB
  zos___FMAX_B = 1667, // @@FMAX@B
  zos___FMA_B = 1668, // @@FMA@B
  zos___FMINFB = 1669, // @@FMINFB
  zos___FMINLB = 1670, // @@FMINLB
  zos___FMIN_B = 1671, // @@FMIN@B
  zos___FPOW_B = 1672, // @@FPOW@B
  zos___FRND_B = 1673, // @@FRND@B
  zos___FSIN_B = 1674, // @@FSIN@B
  zos___FSQT_B = 1675, // @@FSQT@B
  zos___FTRC_B = 1676, // @@FTRC@B
  zos___FXP2_B = 1677, // @@FXP2@B
  zos___LCBT_B = 1678, // @@LCBT@B
  zos___LCEL_B = 1679, // @@LCEL@B
  zos___LCOS_B = 1680, // @@LCOS@B
  zos___LCPY_B = 1681, // @@LCPY@B
  zos___LEXP_B = 1682, // @@LEXP@B
  zos___LFLR_B = 1683, // @@LFLR@B
  zos___LFMD_B = 1684, // @@LFMD@B
  zos___LFXP_B = 1685, // @@LFXP@B
  zos___LLG1_B = 1686, // @@LLG1@B
  zos___LLG2_B = 1687, // @@LLG2@B
  zos___LLOG_B = 1688, // @@LLOG@B
  zos___LLRDFB = 1689, // @@LLRDFB
  zos___LLRDLB = 1690, // @@LLRDLB
  zos___LLRD_B = 1691, // @@LLRD@B
  zos___LLRTFB = 1692, // @@LLRTFB
  zos___LLRTLB = 1693, // @@LLRTLB
  zos___LLRT_B = 1694, // @@LLRT@B
  zos___LLXP_B = 1695, // @@LLXP@B
  zos___LOG2_B = 1696, // @@LOG2@B
  zos___LPOW_B = 1697, // @@LPOW@B
  zos___LRND_B = 1698, // @@LRND@B
  zos___LRNTFB = 1699, // @@LRNTFB
  zos___LRNTLB = 1700, // @@LRNTLB
  zos___LRNT_B = 1701, // @@LRNT@B
  zos___LSIN_B = 1702, // @@LSIN@B
  zos___LSQT_B = 1703, // @@LSQT@B
  zos___LTRC_B = 1704, // @@LTRC@B
  zos___LXP2_B = 1705, // @@LXP2@B
  zos___NBYIFB = 1706, // @@NBYIFB
  zos___NBYILB = 1707, // @@NBYILB
  zos___NBYI_B = 1708, // @@NBYI@B
  zos___RINTFB = 1709, // @@RINTFB
  zos___RINTLB = 1710, // @@RINTLB
  zos___ROND_B = 1711, // @@ROND@B
  zos___ROUNFB = 1712, // @@ROUNFB
  zos___ROUNLB = 1713, // @@ROUNLB
  zos___ROUN_B = 1714, // @@ROUN@B
  zos___SCEL_B = 1715, // @@SCEL@B
  zos___SCOS_B = 1716, // @@SCOS@B
  zos___SCRT_B = 1717, // @@SCRT@B
  zos___SFLR_B = 1718, // @@SFLR@B
  zos___SFXP_B = 1719, // @@SFXP@B
  zos___SLXP_B = 1720, // @@SLXP@B
  zos___SRNT_B = 1721, // @@SRNT@B
  zos___SSIN_B = 1722, // @@SSIN@B
  zos___TRNC_B = 1723, // @@TRNC@B
  zos___WEXP_B = 1724, // @@WEXP@B
  zos___WFMD_B = 1725, // @@WFMD@B
  zos___WLG1_B = 1726, // @@WLG1@B
  zos___WLOG_B = 1727, // @@WLOG@B
  zos___WPOW_B = 1728, // @@WPOW@B
  zos___WSQT_B = 1729, // @@WSQT@B
  NumLibcallImpls = 1730
};
} // End namespace RTLIB
} // End namespace llvm
#endif

#ifdef GET_INIT_RUNTIME_LIBCALL_NAMES
const RTLIB::LibcallImpl llvm::RTLIB::RuntimeLibcallsInfo::DefaultLibcallImpls[RTLIB::UNKNOWN_LIBCALL + 1] = {
  RTLIB::acosf, // RTLIB::ACOS_F32
  RTLIB::acos, // RTLIB::ACOS_F64
  RTLIB::acos_f80, // RTLIB::ACOS_F80
  RTLIB::acos_f128, // RTLIB::ACOS_F128
  RTLIB::acos_ppcf128, // RTLIB::ACOS_PPCF128
  RTLIB::__addsf3, // RTLIB::ADD_F32
  RTLIB::__adddf3, // RTLIB::ADD_F64
  RTLIB::__addxf3, // RTLIB::ADD_F80
  RTLIB::__addtf3, // RTLIB::ADD_F128
  RTLIB::__gcc_qadd, // RTLIB::ADD_PPCF128
  RTLIB::Unsupported, // RTLIB::AEABI_MEMCLR
  RTLIB::Unsupported, // RTLIB::AEABI_MEMCLR4
  RTLIB::Unsupported, // RTLIB::AEABI_MEMCLR8
  RTLIB::Unsupported, // RTLIB::AEABI_MEMCPY4
  RTLIB::Unsupported, // RTLIB::AEABI_MEMCPY8
  RTLIB::Unsupported, // RTLIB::AEABI_MEMMOVE4
  RTLIB::Unsupported, // RTLIB::AEABI_MEMMOVE8
  RTLIB::Unsupported, // RTLIB::AEABI_MEMSET4
  RTLIB::Unsupported, // RTLIB::AEABI_MEMSET8
  RTLIB::asinf, // RTLIB::ASIN_F32
  RTLIB::asin, // RTLIB::ASIN_F64
  RTLIB::asin_f80, // RTLIB::ASIN_F80
  RTLIB::asin_f128, // RTLIB::ASIN_F128
  RTLIB::asin_ppcf128, // RTLIB::ASIN_PPCF128
  RTLIB::atan2f, // RTLIB::ATAN2_F32
  RTLIB::atan2, // RTLIB::ATAN2_F64
  RTLIB::atan2_f80, // RTLIB::ATAN2_F80
  RTLIB::atan2_f128, // RTLIB::ATAN2_F128
  RTLIB::atan2_ppcf128, // RTLIB::ATAN2_PPCF128
  RTLIB::atanf, // RTLIB::ATAN_F32
  RTLIB::atan, // RTLIB::ATAN_F64
  RTLIB::atan_f80, // RTLIB::ATAN_F80
  RTLIB::atan_f128, // RTLIB::ATAN_F128
  RTLIB::atan_ppcf128, // RTLIB::ATAN_PPCF128
  RTLIB::__atomic_compare_exchange, // RTLIB::ATOMIC_COMPARE_EXCHANGE
  RTLIB::__atomic_compare_exchange_1, // RTLIB::ATOMIC_COMPARE_EXCHANGE_1
  RTLIB::__atomic_compare_exchange_2, // RTLIB::ATOMIC_COMPARE_EXCHANGE_2
  RTLIB::__atomic_compare_exchange_4, // RTLIB::ATOMIC_COMPARE_EXCHANGE_4
  RTLIB::__atomic_compare_exchange_8, // RTLIB::ATOMIC_COMPARE_EXCHANGE_8
  RTLIB::__atomic_compare_exchange_16, // RTLIB::ATOMIC_COMPARE_EXCHANGE_16
  RTLIB::__atomic_exchange, // RTLIB::ATOMIC_EXCHANGE
  RTLIB::__atomic_exchange_1, // RTLIB::ATOMIC_EXCHANGE_1
  RTLIB::__atomic_exchange_2, // RTLIB::ATOMIC_EXCHANGE_2
  RTLIB::__atomic_exchange_4, // RTLIB::ATOMIC_EXCHANGE_4
  RTLIB::__atomic_exchange_8, // RTLIB::ATOMIC_EXCHANGE_8
  RTLIB::__atomic_exchange_16, // RTLIB::ATOMIC_EXCHANGE_16
  RTLIB::__atomic_fetch_add_1, // RTLIB::ATOMIC_FETCH_ADD_1
  RTLIB::__atomic_fetch_add_2, // RTLIB::ATOMIC_FETCH_ADD_2
  RTLIB::__atomic_fetch_add_4, // RTLIB::ATOMIC_FETCH_ADD_4
  RTLIB::__atomic_fetch_add_8, // RTLIB::ATOMIC_FETCH_ADD_8
  RTLIB::__atomic_fetch_add_16, // RTLIB::ATOMIC_FETCH_ADD_16
  RTLIB::__atomic_fetch_and_1, // RTLIB::ATOMIC_FETCH_AND_1
  RTLIB::__atomic_fetch_and_2, // RTLIB::ATOMIC_FETCH_AND_2
  RTLIB::__atomic_fetch_and_4, // RTLIB::ATOMIC_FETCH_AND_4
  RTLIB::__atomic_fetch_and_8, // RTLIB::ATOMIC_FETCH_AND_8
  RTLIB::__atomic_fetch_and_16, // RTLIB::ATOMIC_FETCH_AND_16
  RTLIB::__atomic_fetch_nand_1, // RTLIB::ATOMIC_FETCH_NAND_1
  RTLIB::__atomic_fetch_nand_2, // RTLIB::ATOMIC_FETCH_NAND_2
  RTLIB::__atomic_fetch_nand_4, // RTLIB::ATOMIC_FETCH_NAND_4
  RTLIB::__atomic_fetch_nand_8, // RTLIB::ATOMIC_FETCH_NAND_8
  RTLIB::__atomic_fetch_nand_16, // RTLIB::ATOMIC_FETCH_NAND_16
  RTLIB::__atomic_fetch_or_1, // RTLIB::ATOMIC_FETCH_OR_1
  RTLIB::__atomic_fetch_or_2, // RTLIB::ATOMIC_FETCH_OR_2
  RTLIB::__atomic_fetch_or_4, // RTLIB::ATOMIC_FETCH_OR_4
  RTLIB::__atomic_fetch_or_8, // RTLIB::ATOMIC_FETCH_OR_8
  RTLIB::__atomic_fetch_or_16, // RTLIB::ATOMIC_FETCH_OR_16
  RTLIB::__atomic_fetch_sub_1, // RTLIB::ATOMIC_FETCH_SUB_1
  RTLIB::__atomic_fetch_sub_2, // RTLIB::ATOMIC_FETCH_SUB_2
  RTLIB::__atomic_fetch_sub_4, // RTLIB::ATOMIC_FETCH_SUB_4
  RTLIB::__atomic_fetch_sub_8, // RTLIB::ATOMIC_FETCH_SUB_8
  RTLIB::__atomic_fetch_sub_16, // RTLIB::ATOMIC_FETCH_SUB_16
  RTLIB::__atomic_fetch_xor_1, // RTLIB::ATOMIC_FETCH_XOR_1
  RTLIB::__atomic_fetch_xor_2, // RTLIB::ATOMIC_FETCH_XOR_2
  RTLIB::__atomic_fetch_xor_4, // RTLIB::ATOMIC_FETCH_XOR_4
  RTLIB::__atomic_fetch_xor_8, // RTLIB::ATOMIC_FETCH_XOR_8
  RTLIB::__atomic_fetch_xor_16, // RTLIB::ATOMIC_FETCH_XOR_16
  RTLIB::__atomic_load, // RTLIB::ATOMIC_LOAD
  RTLIB::__atomic_load_1, // RTLIB::ATOMIC_LOAD_1
  RTLIB::__atomic_load_2, // RTLIB::ATOMIC_LOAD_2
  RTLIB::__atomic_load_4, // RTLIB::ATOMIC_LOAD_4
  RTLIB::__atomic_load_8, // RTLIB::ATOMIC_LOAD_8
  RTLIB::__atomic_load_16, // RTLIB::ATOMIC_LOAD_16
  RTLIB::__atomic_store, // RTLIB::ATOMIC_STORE
  RTLIB::__atomic_store_1, // RTLIB::ATOMIC_STORE_1
  RTLIB::__atomic_store_2, // RTLIB::ATOMIC_STORE_2
  RTLIB::__atomic_store_4, // RTLIB::ATOMIC_STORE_4
  RTLIB::__atomic_store_8, // RTLIB::ATOMIC_STORE_8
  RTLIB::__atomic_store_16, // RTLIB::ATOMIC_STORE_16
  RTLIB::Unsupported, // RTLIB::BZERO
  RTLIB::calloc, // RTLIB::CALLOC
  RTLIB::cbrtf, // RTLIB::CBRT_F32
  RTLIB::cbrt, // RTLIB::CBRT_F64
  RTLIB::cbrt_f80, // RTLIB::CBRT_F80
  RTLIB::cbrt_f128, // RTLIB::CBRT_F128
  RTLIB::cbrt_ppcf128, // RTLIB::CBRT_PPCF128
  RTLIB::ceilf, // RTLIB::CEIL_F32
  RTLIB::ceil, // RTLIB::CEIL_F64
  RTLIB::ceil_f80, // RTLIB::CEIL_F80
  RTLIB::ceil_f128, // RTLIB::CEIL_F128
  RTLIB::ceil_ppcf128, // RTLIB::CEIL_PPCF128
  RTLIB::__clear_cache, // RTLIB::CLEAR_CACHE
  RTLIB::__extendkftf2, // RTLIB::CONVERT_F128_PPCF128
  RTLIB::__trunctfkf2, // RTLIB::CONVERT_PPCF128_F128
  RTLIB::copysignf, // RTLIB::COPYSIGN_F32
  RTLIB::copysign, // RTLIB::COPYSIGN_F64
  RTLIB::copysign_f80, // RTLIB::COPYSIGN_F80
  RTLIB::copysign_f128, // RTLIB::COPYSIGN_F128
  RTLIB::copysign_ppcf128, // RTLIB::COPYSIGN_PPCF128
  RTLIB::coshf, // RTLIB::COSH_F32
  RTLIB::cosh, // RTLIB::COSH_F64
  RTLIB::cosh_f80, // RTLIB::COSH_F80
  RTLIB::cosh_f128, // RTLIB::COSH_F128
  RTLIB::cosh_ppcf128, // RTLIB::COSH_PPCF128
  RTLIB::cosf, // RTLIB::COS_F32
  RTLIB::cos, // RTLIB::COS_F64
  RTLIB::cos_f80, // RTLIB::COS_F80
  RTLIB::cos_f128, // RTLIB::COS_F128
  RTLIB::cos_ppcf128, // RTLIB::COS_PPCF128
  RTLIB::__clzsi2, // RTLIB::CTLZ_I32
  RTLIB::__clzdi2, // RTLIB::CTLZ_I64
  RTLIB::__clzti2, // RTLIB::CTLZ_I128
  RTLIB::__popcountsi2, // RTLIB::CTPOP_I32
  RTLIB::__popcountdi2, // RTLIB::CTPOP_I64
  RTLIB::__popcountti2, // RTLIB::CTPOP_I128
  RTLIB::__cxa_end_cleanup, // RTLIB::CXA_END_CLEANUP
  RTLIB::__llvm_deoptimize, // RTLIB::DEOPTIMIZE
  RTLIB::__divsf3, // RTLIB::DIV_F32
  RTLIB::__divdf3, // RTLIB::DIV_F64
  RTLIB::__divxf3, // RTLIB::DIV_F80
  RTLIB::__divtf3, // RTLIB::DIV_F128
  RTLIB::__gcc_qdiv, // RTLIB::DIV_PPCF128
  RTLIB::exp2f, // RTLIB::EXP2_F32
  RTLIB::exp2, // RTLIB::EXP2_F64
  RTLIB::exp2_f80, // RTLIB::EXP2_F80
  RTLIB::exp2_f128, // RTLIB::EXP2_F128
  RTLIB::__exp2f_finite, // RTLIB::EXP2_FINITE_F32
  RTLIB::__exp2_finite, // RTLIB::EXP2_FINITE_F64
  RTLIB::__exp2l_finite_f80, // RTLIB::EXP2_FINITE_F80
  RTLIB::__exp2l_finite_f128, // RTLIB::EXP2_FINITE_F128
  RTLIB::__exp2l_finite_ppcf128, // RTLIB::EXP2_FINITE_PPCF128
  RTLIB::exp2_ppcf128, // RTLIB::EXP2_PPCF128
  RTLIB::exp10f, // RTLIB::EXP10_F32
  RTLIB::exp10, // RTLIB::EXP10_F64
  RTLIB::exp10l_f80, // RTLIB::EXP10_F80
  RTLIB::exp10l_f128, // RTLIB::EXP10_F128
  RTLIB::Unsupported, // RTLIB::EXP10_FINITE_F32
  RTLIB::Unsupported, // RTLIB::EXP10_FINITE_F64
  RTLIB::Unsupported, // RTLIB::EXP10_FINITE_F80
  RTLIB::Unsupported, // RTLIB::EXP10_FINITE_F128
  RTLIB::Unsupported, // RTLIB::EXP10_FINITE_PPCF128
  RTLIB::exp10l_ppcf128, // RTLIB::EXP10_PPCF128
  RTLIB::expf, // RTLIB::EXP_F32
  RTLIB::exp, // RTLIB::EXP_F64
  RTLIB::exp_f80, // RTLIB::EXP_F80
  RTLIB::exp_f128, // RTLIB::EXP_F128
  RTLIB::__expf_finite, // RTLIB::EXP_FINITE_F32
  RTLIB::__exp_finite, // RTLIB::EXP_FINITE_F64
  RTLIB::__expl_finite_f80, // RTLIB::EXP_FINITE_F80
  RTLIB::__expl_finite_f128, // RTLIB::EXP_FINITE_F128
  RTLIB::__expl_finite_ppcf128, // RTLIB::EXP_FINITE_PPCF128
  RTLIB::exp_ppcf128, // RTLIB::EXP_PPCF128
  RTLIB::Unsupported, // RTLIB::FAST_ADD_F32
  RTLIB::Unsupported, // RTLIB::FAST_ADD_F64
  RTLIB::Unsupported, // RTLIB::FAST_ADD_F80
  RTLIB::Unsupported, // RTLIB::FAST_ADD_F128
  RTLIB::Unsupported, // RTLIB::FAST_ADD_PPCF128
  RTLIB::Unsupported, // RTLIB::FAST_DIV_F32
  RTLIB::Unsupported, // RTLIB::FAST_DIV_F64
  RTLIB::Unsupported, // RTLIB::FAST_DIV_F80
  RTLIB::Unsupported, // RTLIB::FAST_DIV_F128
  RTLIB::Unsupported, // RTLIB::FAST_DIV_PPCF128
  RTLIB::Unsupported, // RTLIB::FAST_MUL_F32
  RTLIB::Unsupported, // RTLIB::FAST_MUL_F64
  RTLIB::Unsupported, // RTLIB::FAST_MUL_F80
  RTLIB::Unsupported, // RTLIB::FAST_MUL_F128
  RTLIB::Unsupported, // RTLIB::FAST_MUL_PPCF128
  RTLIB::Unsupported, // RTLIB::FAST_SQRT_F32
  RTLIB::Unsupported, // RTLIB::FAST_SQRT_F64
  RTLIB::Unsupported, // RTLIB::FAST_SQRT_F80
  RTLIB::Unsupported, // RTLIB::FAST_SQRT_F128
  RTLIB::Unsupported, // RTLIB::FAST_SQRT_PPCF128
  RTLIB::Unsupported, // RTLIB::FAST_SUB_F32
  RTLIB::Unsupported, // RTLIB::FAST_SUB_F64
  RTLIB::Unsupported, // RTLIB::FAST_SUB_F80
  RTLIB::Unsupported, // RTLIB::FAST_SUB_F128
  RTLIB::Unsupported, // RTLIB::FAST_SUB_PPCF128
  RTLIB::fegetenv, // RTLIB::FEGETENV
  RTLIB::fegetmode, // RTLIB::FEGETMODE
  RTLIB::fesetenv, // RTLIB::FESETENV
  RTLIB::fesetmode, // RTLIB::FESETMODE
  RTLIB::floorf, // RTLIB::FLOOR_F32
  RTLIB::floor, // RTLIB::FLOOR_F64
  RTLIB::floor_f80, // RTLIB::FLOOR_F80
  RTLIB::floor_f128, // RTLIB::FLOOR_F128
  RTLIB::floor_ppcf128, // RTLIB::FLOOR_PPCF128
  RTLIB::fmaximumf, // RTLIB::FMAXIMUM_F32
  RTLIB::fmaximum, // RTLIB::FMAXIMUM_F64
  RTLIB::fmaximum_f80, // RTLIB::FMAXIMUM_F80
  RTLIB::fmaximum_f128, // RTLIB::FMAXIMUM_F128
  RTLIB::fmaximum_numf, // RTLIB::FMAXIMUM_NUM_F32
  RTLIB::fmaximum_num, // RTLIB::FMAXIMUM_NUM_F64
  RTLIB::fmaximum_num_f80, // RTLIB::FMAXIMUM_NUM_F80
  RTLIB::fmaximum_num_f128, // RTLIB::FMAXIMUM_NUM_F128
  RTLIB::fmaximum_num_ppcf128, // RTLIB::FMAXIMUM_NUM_PPCF128
  RTLIB::fmaximum_ppcf128, // RTLIB::FMAXIMUM_PPCF128
  RTLIB::fmaxf, // RTLIB::FMAX_F32
  RTLIB::fmax, // RTLIB::FMAX_F64
  RTLIB::fmax_f80, // RTLIB::FMAX_F80
  RTLIB::fmax_f128, // RTLIB::FMAX_F128
  RTLIB::fmax_ppcf128, // RTLIB::FMAX_PPCF128
  RTLIB::fmaf, // RTLIB::FMA_F32
  RTLIB::fma, // RTLIB::FMA_F64
  RTLIB::fma_f80, // RTLIB::FMA_F80
  RTLIB::fma_f128, // RTLIB::FMA_F128
  RTLIB::fma_ppcf128, // RTLIB::FMA_PPCF128
  RTLIB::fminimumf, // RTLIB::FMINIMUM_F32
  RTLIB::fminimum, // RTLIB::FMINIMUM_F64
  RTLIB::fminimum_f80, // RTLIB::FMINIMUM_F80
  RTLIB::fminimum_f128, // RTLIB::FMINIMUM_F128
  RTLIB::fminimum_numf, // RTLIB::FMINIMUM_NUM_F32
  RTLIB::fminimum_num, // RTLIB::FMINIMUM_NUM_F64
  RTLIB::fminimum_num_f80, // RTLIB::FMINIMUM_NUM_F80
  RTLIB::fminimum_num_f128, // RTLIB::FMINIMUM_NUM_F128
  RTLIB::fminimum_num_ppcf128, // RTLIB::FMINIMUM_NUM_PPCF128
  RTLIB::fminimum_ppcf128, // RTLIB::FMINIMUM_PPCF128
  RTLIB::fminf, // RTLIB::FMIN_F32
  RTLIB::fmin, // RTLIB::FMIN_F64
  RTLIB::fmin_f80, // RTLIB::FMIN_F80
  RTLIB::fmin_f128, // RTLIB::FMIN_F128
  RTLIB::fmin_ppcf128, // RTLIB::FMIN_PPCF128
  RTLIB::__extendbfsf2, // RTLIB::FPEXT_BF16_F32
  RTLIB::__extendhfsf2, // RTLIB::FPEXT_F16_F32
  RTLIB::__extendhfdf2, // RTLIB::FPEXT_F16_F64
  RTLIB::__extendhfxf2, // RTLIB::FPEXT_F16_F80
  RTLIB::__extendhftf2, // RTLIB::FPEXT_F16_F128
  RTLIB::__extendsfdf2, // RTLIB::FPEXT_F32_F64
  RTLIB::__extendsftf2, // RTLIB::FPEXT_F32_F128
  RTLIB::__gcc_stoq, // RTLIB::FPEXT_F32_PPCF128
  RTLIB::__extenddftf2, // RTLIB::FPEXT_F64_F128
  RTLIB::__gcc_dtoq, // RTLIB::FPEXT_F64_PPCF128
  RTLIB::__extendxftf2, // RTLIB::FPEXT_F80_F128
  RTLIB::__truncsfbf2, // RTLIB::FPROUND_F32_BF16
  RTLIB::__truncsfhf2, // RTLIB::FPROUND_F32_F16
  RTLIB::__truncdfbf2, // RTLIB::FPROUND_F64_BF16
  RTLIB::__truncdfhf2, // RTLIB::FPROUND_F64_F16
  RTLIB::__truncdfsf2, // RTLIB::FPROUND_F64_F32
  RTLIB::__truncxfbf2, // RTLIB::FPROUND_F80_BF16
  RTLIB::__truncxfhf2, // RTLIB::FPROUND_F80_F16
  RTLIB::__truncxfsf2, // RTLIB::FPROUND_F80_F32
  RTLIB::__truncxfdf2, // RTLIB::FPROUND_F80_F64
  RTLIB::__trunctfbf2, // RTLIB::FPROUND_F128_BF16
  RTLIB::__trunctfhf2_f128, // RTLIB::FPROUND_F128_F16
  RTLIB::__trunctfsf2, // RTLIB::FPROUND_F128_F32
  RTLIB::__trunctfdf2, // RTLIB::FPROUND_F128_F64
  RTLIB::__trunctfxf2, // RTLIB::FPROUND_F128_F80
  RTLIB::__trunctfhf2_ppcf128, // RTLIB::FPROUND_PPCF128_F16
  RTLIB::__gcc_qtos, // RTLIB::FPROUND_PPCF128_F32
  RTLIB::__gcc_qtod, // RTLIB::FPROUND_PPCF128_F64
  RTLIB::__fixhfsi, // RTLIB::FPTOSINT_F16_I32
  RTLIB::__fixhfdi, // RTLIB::FPTOSINT_F16_I64
  RTLIB::__fixhfti, // RTLIB::FPTOSINT_F16_I128
  RTLIB::__fixsfsi, // RTLIB::FPTOSINT_F32_I32
  RTLIB::__fixsfdi, // RTLIB::FPTOSINT_F32_I64
  RTLIB::__fixsfti, // RTLIB::FPTOSINT_F32_I128
  RTLIB::__fixdfsi, // RTLIB::FPTOSINT_F64_I32
  RTLIB::__fixdfdi, // RTLIB::FPTOSINT_F64_I64
  RTLIB::__fixdfti, // RTLIB::FPTOSINT_F64_I128
  RTLIB::__fixxfsi, // RTLIB::FPTOSINT_F80_I32
  RTLIB::__fixxfdi, // RTLIB::FPTOSINT_F80_I64
  RTLIB::__fixxfti, // RTLIB::FPTOSINT_F80_I128
  RTLIB::__fixtfsi, // RTLIB::FPTOSINT_F128_I32
  RTLIB::__fixtfdi_f128, // RTLIB::FPTOSINT_F128_I64
  RTLIB::__fixtfti_f128, // RTLIB::FPTOSINT_F128_I128
  RTLIB::__gcc_qtou, // RTLIB::FPTOSINT_PPCF128_I32
  RTLIB::__fixtfdi_ppcf128, // RTLIB::FPTOSINT_PPCF128_I64
  RTLIB::__fixtfti_ppcf128, // RTLIB::FPTOSINT_PPCF128_I128
  RTLIB::__fixunshfsi, // RTLIB::FPTOUINT_F16_I32
  RTLIB::__fixunshfdi, // RTLIB::FPTOUINT_F16_I64
  RTLIB::__fixunshfti, // RTLIB::FPTOUINT_F16_I128
  RTLIB::__fixunssfsi, // RTLIB::FPTOUINT_F32_I32
  RTLIB::__fixunssfdi, // RTLIB::FPTOUINT_F32_I64
  RTLIB::__fixunssfti, // RTLIB::FPTOUINT_F32_I128
  RTLIB::__fixunsdfsi, // RTLIB::FPTOUINT_F64_I32
  RTLIB::__fixunsdfdi, // RTLIB::FPTOUINT_F64_I64
  RTLIB::__fixunsdfti, // RTLIB::FPTOUINT_F64_I128
  RTLIB::__fixunsxfsi, // RTLIB::FPTOUINT_F80_I32
  RTLIB::__fixunsxfdi, // RTLIB::FPTOUINT_F80_I64
  RTLIB::__fixunsxfti, // RTLIB::FPTOUINT_F80_I128
  RTLIB::__fixunstfsi_f128, // RTLIB::FPTOUINT_F128_I32
  RTLIB::__fixunstfdi_f128, // RTLIB::FPTOUINT_F128_I64
  RTLIB::__fixunstfti_f128, // RTLIB::FPTOUINT_F128_I128
  RTLIB::__fixunstfsi_ppcf128, // RTLIB::FPTOUINT_PPCF128_I32
  RTLIB::__fixunstfdi_ppcf128, // RTLIB::FPTOUINT_PPCF128_I64
  RTLIB::__fixunstfti_ppcf128, // RTLIB::FPTOUINT_PPCF128_I128
  RTLIB::frexpf, // RTLIB::FREXP_F32
  RTLIB::frexp, // RTLIB::FREXP_F64
  RTLIB::frexp_f80, // RTLIB::FREXP_F80
  RTLIB::frexp_f128, // RTLIB::FREXP_F128
  RTLIB::frexp_ppcf128, // RTLIB::FREXP_PPCF128
  RTLIB::Unsupported, // RTLIB::HEXAGON_MEMCPY_LIKELY_ALIGNED_MIN32BYTES_MULT8BYTES
  RTLIB::ldexpf, // RTLIB::LDEXP_F32
  RTLIB::ldexp, // RTLIB::LDEXP_F64
  RTLIB::ldexp_f80, // RTLIB::LDEXP_F80
  RTLIB::ldexp_f128, // RTLIB::LDEXP_F128
  RTLIB::ldexp_ppcf128, // RTLIB::LDEXP_PPCF128
  RTLIB::llrintf, // RTLIB::LLRINT_F32
  RTLIB::llrint, // RTLIB::LLRINT_F64
  RTLIB::llrint_f80, // RTLIB::LLRINT_F80
  RTLIB::llrint_f128, // RTLIB::LLRINT_F128
  RTLIB::llrint_ppcf128, // RTLIB::LLRINT_PPCF128
  RTLIB::llroundf, // RTLIB::LLROUND_F32
  RTLIB::llround, // RTLIB::LLROUND_F64
  RTLIB::llround_f80, // RTLIB::LLROUND_F80
  RTLIB::llround_f128, // RTLIB::LLROUND_F128
  RTLIB::llround_ppcf128, // RTLIB::LLROUND_PPCF128
  RTLIB::log2f, // RTLIB::LOG2_F32
  RTLIB::log2, // RTLIB::LOG2_F64
  RTLIB::log2_f80, // RTLIB::LOG2_F80
  RTLIB::log2_f128, // RTLIB::LOG2_F128
  RTLIB::__log2f_finite, // RTLIB::LOG2_FINITE_F32
  RTLIB::__log2_finite, // RTLIB::LOG2_FINITE_F64
  RTLIB::__log2l_finite_f80, // RTLIB::LOG2_FINITE_F80
  RTLIB::__log2l_finite_f128, // RTLIB::LOG2_FINITE_F128
  RTLIB::__log2l_finite_ppcf128, // RTLIB::LOG2_FINITE_PPCF128
  RTLIB::log2_ppcf128, // RTLIB::LOG2_PPCF128
  RTLIB::log10f, // RTLIB::LOG10_F32
  RTLIB::log10, // RTLIB::LOG10_F64
  RTLIB::log10_f80, // RTLIB::LOG10_F80
  RTLIB::log10_f128, // RTLIB::LOG10_F128
  RTLIB::__log10f_finite, // RTLIB::LOG10_FINITE_F32
  RTLIB::__log10_finite, // RTLIB::LOG10_FINITE_F64
  RTLIB::__log10l_finite_f80, // RTLIB::LOG10_FINITE_F80
  RTLIB::__log10l_finite_f128, // RTLIB::LOG10_FINITE_F128
  RTLIB::__log10l_finite_ppcf128, // RTLIB::LOG10_FINITE_PPCF128
  RTLIB::log10_ppcf128, // RTLIB::LOG10_PPCF128
  RTLIB::logf, // RTLIB::LOG_F32
  RTLIB::log, // RTLIB::LOG_F64
  RTLIB::log_f80, // RTLIB::LOG_F80
  RTLIB::log_f128, // RTLIB::LOG_F128
  RTLIB::__logf_finite, // RTLIB::LOG_FINITE_F32
  RTLIB::__log_finite, // RTLIB::LOG_FINITE_F64
  RTLIB::__logl_finite_f80, // RTLIB::LOG_FINITE_F80
  RTLIB::__logl_finite_f128, // RTLIB::LOG_FINITE_F128
  RTLIB::__logl_finite_ppcf128, // RTLIB::LOG_FINITE_PPCF128
  RTLIB::log_ppcf128, // RTLIB::LOG_PPCF128
  RTLIB::lrintf, // RTLIB::LRINT_F32
  RTLIB::lrint, // RTLIB::LRINT_F64
  RTLIB::lrint_f80, // RTLIB::LRINT_F80
  RTLIB::lrint_f128, // RTLIB::LRINT_F128
  RTLIB::lrint_ppcf128, // RTLIB::LRINT_PPCF128
  RTLIB::lroundf, // RTLIB::LROUND_F32
  RTLIB::lround, // RTLIB::LROUND_F64
  RTLIB::lround_f80, // RTLIB::LROUND_F80
  RTLIB::lround_f128, // RTLIB::LROUND_F128
  RTLIB::lround_ppcf128, // RTLIB::LROUND_PPCF128
  RTLIB::memcpy, // RTLIB::MEMCPY
  RTLIB::Unsupported, // RTLIB::MEMCPY_ALIGN_4
  RTLIB::__llvm_memcpy_element_unordered_atomic_1, // RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1
  RTLIB::__llvm_memcpy_element_unordered_atomic_2, // RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2
  RTLIB::__llvm_memcpy_element_unordered_atomic_4, // RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4
  RTLIB::__llvm_memcpy_element_unordered_atomic_8, // RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8
  RTLIB::__llvm_memcpy_element_unordered_atomic_16, // RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16
  RTLIB::memmove, // RTLIB::MEMMOVE
  RTLIB::__llvm_memmove_element_unordered_atomic_1, // RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1
  RTLIB::__llvm_memmove_element_unordered_atomic_2, // RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2
  RTLIB::__llvm_memmove_element_unordered_atomic_4, // RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4
  RTLIB::__llvm_memmove_element_unordered_atomic_8, // RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8
  RTLIB::__llvm_memmove_element_unordered_atomic_16, // RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16
  RTLIB::memset, // RTLIB::MEMSET
  RTLIB::__llvm_memset_element_unordered_atomic_1, // RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1
  RTLIB::__llvm_memset_element_unordered_atomic_2, // RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2
  RTLIB::__llvm_memset_element_unordered_atomic_4, // RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4
  RTLIB::__llvm_memset_element_unordered_atomic_8, // RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8
  RTLIB::__llvm_memset_element_unordered_atomic_16, // RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16
  RTLIB::Unsupported, // RTLIB::MIPS16_RET_DC
  RTLIB::Unsupported, // RTLIB::MIPS16_RET_DF
  RTLIB::Unsupported, // RTLIB::MIPS16_RET_SC
  RTLIB::Unsupported, // RTLIB::MIPS16_RET_SF
  RTLIB::modff, // RTLIB::MODF_F32
  RTLIB::modf, // RTLIB::MODF_F64
  RTLIB::modf_f80, // RTLIB::MODF_F80
  RTLIB::modf_f128, // RTLIB::MODF_F128
  RTLIB::modf_ppcf128, // RTLIB::MODF_PPCF128
  RTLIB::__mulosi4, // RTLIB::MULO_I32
  RTLIB::Unsupported, // RTLIB::MULO_I64
  RTLIB::Unsupported, // RTLIB::MULO_I128
  RTLIB::__mulsf3, // RTLIB::MUL_F32
  RTLIB::__muldf3, // RTLIB::MUL_F64
  RTLIB::__mulxf3, // RTLIB::MUL_F80
  RTLIB::__multf3, // RTLIB::MUL_F128
  RTLIB::__mulqi3, // RTLIB::MUL_I8
  RTLIB::__mulhi3, // RTLIB::MUL_I16
  RTLIB::__mulsi3, // RTLIB::MUL_I32
  RTLIB::__muldi3, // RTLIB::MUL_I64
  RTLIB::Unsupported, // RTLIB::MUL_I128
  RTLIB::__gcc_qmul, // RTLIB::MUL_PPCF128
  RTLIB::nearbyintf, // RTLIB::NEARBYINT_F32
  RTLIB::nearbyint, // RTLIB::NEARBYINT_F64
  RTLIB::nearbyint_f80, // RTLIB::NEARBYINT_F80
  RTLIB::nearbyint_f128, // RTLIB::NEARBYINT_F128
  RTLIB::nearbyint_ppcf128, // RTLIB::NEARBYINT_PPCF128
  RTLIB::__negsi2, // RTLIB::NEG_I32
  RTLIB::__negdi2, // RTLIB::NEG_I64
  RTLIB::Unsupported, // RTLIB::OBJC_AUTORELEASE
  RTLIB::Unsupported, // RTLIB::OBJC_AUTORELEASEPOOLPOP
  RTLIB::Unsupported, // RTLIB::OBJC_AUTORELEASEPOOLPUSH
  RTLIB::Unsupported, // RTLIB::OBJC_AUTORELEASERETURNVALUE
  RTLIB::Unsupported, // RTLIB::OBJC_CLAIMAUTORELEASEDRETURNVALUE
  RTLIB::Unsupported, // RTLIB::OBJC_COPYWEAK
  RTLIB::Unsupported, // RTLIB::OBJC_DESTROYWEAK
  RTLIB::Unsupported, // RTLIB::OBJC_INITWEAK
  RTLIB::Unsupported, // RTLIB::OBJC_LOADWEAK
  RTLIB::Unsupported, // RTLIB::OBJC_LOADWEAKRETAINED
  RTLIB::Unsupported, // RTLIB::OBJC_MOVEWEAK
  RTLIB::Unsupported, // RTLIB::OBJC_RELEASE
  RTLIB::Unsupported, // RTLIB::OBJC_RETAIN
  RTLIB::Unsupported, // RTLIB::OBJC_RETAINAUTORELEASE
  RTLIB::Unsupported, // RTLIB::OBJC_RETAINAUTORELEASEDRETURNVALUE
  RTLIB::Unsupported, // RTLIB::OBJC_RETAINAUTORELEASERETURNVALUE
  RTLIB::Unsupported, // RTLIB::OBJC_RETAINBLOCK
  RTLIB::Unsupported, // RTLIB::OBJC_RETAINEDOBJECT
  RTLIB::Unsupported, // RTLIB::OBJC_RETAIN_AUTORELEASE
  RTLIB::Unsupported, // RTLIB::OBJC_STORESTRONG
  RTLIB::Unsupported, // RTLIB::OBJC_STOREWEAK
  RTLIB::Unsupported, // RTLIB::OBJC_SYNC_ENTER
  RTLIB::Unsupported, // RTLIB::OBJC_SYNC_EXIT
  RTLIB::Unsupported, // RTLIB::OBJC_UNRETAINEDOBJECT
  RTLIB::Unsupported, // RTLIB::OBJC_UNRETAINEDPOINTER
  RTLIB::Unsupported, // RTLIB::OBJC_UNSAFECLAIMAUTORELEASEDRETURNVALUE
  RTLIB::__eqsf2, // RTLIB::OEQ_F32
  RTLIB::__eqdf2, // RTLIB::OEQ_F64
  RTLIB::__eqtf2, // RTLIB::OEQ_F128
  RTLIB::__gcc_qeq, // RTLIB::OEQ_PPCF128
  RTLIB::__gesf2, // RTLIB::OGE_F32
  RTLIB::__gedf2, // RTLIB::OGE_F64
  RTLIB::__getf2, // RTLIB::OGE_F128
  RTLIB::__gcc_qge, // RTLIB::OGE_PPCF128
  RTLIB::__gtsf2, // RTLIB::OGT_F32
  RTLIB::__gtdf2, // RTLIB::OGT_F64
  RTLIB::__gttf2, // RTLIB::OGT_F128
  RTLIB::__gcc_qgt, // RTLIB::OGT_PPCF128
  RTLIB::__lesf2, // RTLIB::OLE_F32
  RTLIB::__ledf2, // RTLIB::OLE_F64
  RTLIB::__letf2, // RTLIB::OLE_F128
  RTLIB::__gcc_qle, // RTLIB::OLE_PPCF128
  RTLIB::__ltsf2, // RTLIB::OLT_F32
  RTLIB::__ltdf2, // RTLIB::OLT_F64
  RTLIB::__lttf2, // RTLIB::OLT_F128
  RTLIB::__gcc_qlt, // RTLIB::OLT_PPCF128
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS1_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS1_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS1_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS1_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS2_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS2_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS2_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS2_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS4_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS4_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS4_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS4_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS8_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS8_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS8_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS8_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS16_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS16_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS16_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_CAS16_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD1_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD1_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD2_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD2_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD4_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD4_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD8_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD8_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD16_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD16_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD16_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDADD16_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR1_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR1_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR2_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR2_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR4_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR4_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR8_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR8_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR16_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR16_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR16_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDCLR16_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR1_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR1_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR2_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR2_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR4_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR4_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR8_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR8_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR16_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR16_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR16_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDEOR16_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET1_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET1_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET2_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET2_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET4_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET4_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET8_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET8_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET16_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET16_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET16_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_LDSET16_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP1_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP1_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP1_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP1_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP2_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP2_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP2_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP2_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP4_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP4_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP4_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP4_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP8_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP8_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP8_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP8_RELAX
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP16_ACQ
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP16_ACQ_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP16_REL
  RTLIB::Unsupported, // RTLIB::OUTLINE_ATOMIC_SWP16_RELAX
  RTLIB::__powisf2, // RTLIB::POWI_F32
  RTLIB::__powidf2, // RTLIB::POWI_F64
  RTLIB::__powixf2, // RTLIB::POWI_F80
  RTLIB::__powitf2_f128, // RTLIB::POWI_F128
  RTLIB::__powitf2_ppc128, // RTLIB::POWI_PPCF128
  RTLIB::powf, // RTLIB::POW_F32
  RTLIB::pow, // RTLIB::POW_F64
  RTLIB::pow_f80, // RTLIB::POW_F80
  RTLIB::pow_f128, // RTLIB::POW_F128
  RTLIB::__powf_finite, // RTLIB::POW_FINITE_F32
  RTLIB::__pow_finite, // RTLIB::POW_FINITE_F64
  RTLIB::__powl_finite_f80, // RTLIB::POW_FINITE_F80
  RTLIB::__powl_finite_f128, // RTLIB::POW_FINITE_F128
  RTLIB::__powl_finite_ppcf128, // RTLIB::POW_FINITE_PPCF128
  RTLIB::pow_ppcf128, // RTLIB::POW_PPCF128
  RTLIB::fmodf, // RTLIB::REM_F32
  RTLIB::fmod, // RTLIB::REM_F64
  RTLIB::fmodl_f80, // RTLIB::REM_F80
  RTLIB::fmodl_f128, // RTLIB::REM_F128
  RTLIB::fmodl_ppc128, // RTLIB::REM_PPCF128
  RTLIB::Unsupported, // RTLIB::RETURN_ADDRESS
  RTLIB::rintf, // RTLIB::RINT_F32
  RTLIB::rint, // RTLIB::RINT_F64
  RTLIB::rint_f80, // RTLIB::RINT_F80
  RTLIB::rint_f128, // RTLIB::RINT_F128
  RTLIB::rint_ppcf128, // RTLIB::RINT_PPCF128
  RTLIB::Unsupported, // RTLIB::RISCV_FLUSH_ICACHE
  RTLIB::roundevenf, // RTLIB::ROUNDEVEN_F32
  RTLIB::roundeven, // RTLIB::ROUNDEVEN_F64
  RTLIB::roundeven_f80, // RTLIB::ROUNDEVEN_F80
  RTLIB::roundeven_f128, // RTLIB::ROUNDEVEN_F128
  RTLIB::roundeven_ppcf128, // RTLIB::ROUNDEVEN_PPCF128
  RTLIB::roundf, // RTLIB::ROUND_F32
  RTLIB::round, // RTLIB::ROUND_F64
  RTLIB::round_f80, // RTLIB::ROUND_F80
  RTLIB::round_f128, // RTLIB::ROUND_F128
  RTLIB::round_ppcf128, // RTLIB::ROUND_PPCF128
  RTLIB::__safestack_pointer_address, // RTLIB::SAFESTACK_POINTER_ADDRESS
  RTLIB::Unsupported, // RTLIB::SC_MEMCPY
  RTLIB::Unsupported, // RTLIB::SC_MEMMOVE
  RTLIB::Unsupported, // RTLIB::SC_MEMSET
  RTLIB::Unsupported, // RTLIB::SDIVREM_I8
  RTLIB::Unsupported, // RTLIB::SDIVREM_I16
  RTLIB::Unsupported, // RTLIB::SDIVREM_I32
  RTLIB::Unsupported, // RTLIB::SDIVREM_I64
  RTLIB::Unsupported, // RTLIB::SDIVREM_I128
  RTLIB::__divqi3, // RTLIB::SDIV_I8
  RTLIB::__divhi3, // RTLIB::SDIV_I16
  RTLIB::__divsi3, // RTLIB::SDIV_I32
  RTLIB::__divdi3, // RTLIB::SDIV_I64
  RTLIB::__divti3, // RTLIB::SDIV_I128
  RTLIB::__ashlhi3, // RTLIB::SHL_I16
  RTLIB::__ashlsi3, // RTLIB::SHL_I32
  RTLIB::__ashldi3, // RTLIB::SHL_I64
  RTLIB::Unsupported, // RTLIB::SHL_I128
  RTLIB::sincospif, // RTLIB::SINCOSPI_F32
  RTLIB::sincospi, // RTLIB::SINCOSPI_F64
  RTLIB::sincospi_f80, // RTLIB::SINCOSPI_F80
  RTLIB::sincospi_f128, // RTLIB::SINCOSPI_F128
  RTLIB::sincospi_ppcf128, // RTLIB::SINCOSPI_PPCF128
  RTLIB::Unsupported, // RTLIB::SINCOS_F32
  RTLIB::Unsupported, // RTLIB::SINCOS_F64
  RTLIB::Unsupported, // RTLIB::SINCOS_F80
  RTLIB::Unsupported, // RTLIB::SINCOS_F128
  RTLIB::Unsupported, // RTLIB::SINCOS_PPCF128
  RTLIB::Unsupported, // RTLIB::SINCOS_STRET_F32
  RTLIB::Unsupported, // RTLIB::SINCOS_STRET_F64
  RTLIB::sinhf, // RTLIB::SINH_F32
  RTLIB::sinh, // RTLIB::SINH_F64
  RTLIB::sinh_f80, // RTLIB::SINH_F80
  RTLIB::sinh_f128, // RTLIB::SINH_F128
  RTLIB::sinh_ppcf128, // RTLIB::SINH_PPCF128
  RTLIB::__floatsihf, // RTLIB::SINTTOFP_I32_F16
  RTLIB::__floatsisf, // RTLIB::SINTTOFP_I32_F32
  RTLIB::__floatsidf, // RTLIB::SINTTOFP_I32_F64
  RTLIB::__floatsixf, // RTLIB::SINTTOFP_I32_F80
  RTLIB::__floatsitf, // RTLIB::SINTTOFP_I32_F128
  RTLIB::__gcc_itoq, // RTLIB::SINTTOFP_I32_PPCF128
  RTLIB::__floatdibf, // RTLIB::SINTTOFP_I64_BF16
  RTLIB::__floatdihf, // RTLIB::SINTTOFP_I64_F16
  RTLIB::__floatdisf, // RTLIB::SINTTOFP_I64_F32
  RTLIB::__floatdidf, // RTLIB::SINTTOFP_I64_F64
  RTLIB::__floatdixf, // RTLIB::SINTTOFP_I64_F80
  RTLIB::__floatditf_f128, // RTLIB::SINTTOFP_I64_F128
  RTLIB::__floatditf_ppcf128, // RTLIB::SINTTOFP_I64_PPCF128
  RTLIB::__floattihf, // RTLIB::SINTTOFP_I128_F16
  RTLIB::__floattisf, // RTLIB::SINTTOFP_I128_F32
  RTLIB::__floattidf, // RTLIB::SINTTOFP_I128_F64
  RTLIB::__floattixf, // RTLIB::SINTTOFP_I128_F80
  RTLIB::__floattitf_f128, // RTLIB::SINTTOFP_I128_F128
  RTLIB::__floattitf_ppcf128, // RTLIB::SINTTOFP_I128_PPCF128
  RTLIB::sinf, // RTLIB::SIN_F32
  RTLIB::sin, // RTLIB::SIN_F64
  RTLIB::sin_f80, // RTLIB::SIN_F80
  RTLIB::sin_f128, // RTLIB::SIN_F128
  RTLIB::sin_ppcf128, // RTLIB::SIN_PPCF128
  RTLIB::sqrtf, // RTLIB::SQRT_F32
  RTLIB::sqrt, // RTLIB::SQRT_F64
  RTLIB::sqrt_f80, // RTLIB::SQRT_F80
  RTLIB::sqrt_f128, // RTLIB::SQRT_F128
  RTLIB::sqrt_ppcf128, // RTLIB::SQRT_PPCF128
  RTLIB::__ashrhi3, // RTLIB::SRA_I16
  RTLIB::__ashrsi3, // RTLIB::SRA_I32
  RTLIB::__ashrdi3, // RTLIB::SRA_I64
  RTLIB::Unsupported, // RTLIB::SRA_I128
  RTLIB::__modqi3, // RTLIB::SREM_I8
  RTLIB::__modhi3, // RTLIB::SREM_I16
  RTLIB::__modsi3, // RTLIB::SREM_I32
  RTLIB::__moddi3, // RTLIB::SREM_I64
  RTLIB::__modti3, // RTLIB::SREM_I128
  RTLIB::__lshrhi3, // RTLIB::SRL_I16
  RTLIB::__lshrsi3, // RTLIB::SRL_I32
  RTLIB::__lshrdi3, // RTLIB::SRL_I64
  RTLIB::Unsupported, // RTLIB::SRL_I128
  RTLIB::__stack_chk_fail, // RTLIB::STACKPROTECTOR_CHECK_FAIL
  RTLIB::Unsupported, // RTLIB::STACK_SMASH_HANDLER
  RTLIB::__subsf3, // RTLIB::SUB_F32
  RTLIB::__subdf3, // RTLIB::SUB_F64
  RTLIB::__subxf3, // RTLIB::SUB_F80
  RTLIB::__subtf3, // RTLIB::SUB_F128
  RTLIB::__gcc_qsub, // RTLIB::SUB_PPCF128
  RTLIB::__sync_fetch_and_add_1, // RTLIB::SYNC_FETCH_AND_ADD_1
  RTLIB::__sync_fetch_and_add_2, // RTLIB::SYNC_FETCH_AND_ADD_2
  RTLIB::__sync_fetch_and_add_4, // RTLIB::SYNC_FETCH_AND_ADD_4
  RTLIB::__sync_fetch_and_add_8, // RTLIB::SYNC_FETCH_AND_ADD_8
  RTLIB::__sync_fetch_and_add_16, // RTLIB::SYNC_FETCH_AND_ADD_16
  RTLIB::__sync_fetch_and_and_1, // RTLIB::SYNC_FETCH_AND_AND_1
  RTLIB::__sync_fetch_and_and_2, // RTLIB::SYNC_FETCH_AND_AND_2
  RTLIB::__sync_fetch_and_and_4, // RTLIB::SYNC_FETCH_AND_AND_4
  RTLIB::__sync_fetch_and_and_8, // RTLIB::SYNC_FETCH_AND_AND_8
  RTLIB::__sync_fetch_and_and_16, // RTLIB::SYNC_FETCH_AND_AND_16
  RTLIB::__sync_fetch_and_max_1, // RTLIB::SYNC_FETCH_AND_MAX_1
  RTLIB::__sync_fetch_and_max_2, // RTLIB::SYNC_FETCH_AND_MAX_2
  RTLIB::__sync_fetch_and_max_4, // RTLIB::SYNC_FETCH_AND_MAX_4
  RTLIB::__sync_fetch_and_max_8, // RTLIB::SYNC_FETCH_AND_MAX_8
  RTLIB::__sync_fetch_and_max_16, // RTLIB::SYNC_FETCH_AND_MAX_16
  RTLIB::__sync_fetch_and_min_1, // RTLIB::SYNC_FETCH_AND_MIN_1
  RTLIB::__sync_fetch_and_min_2, // RTLIB::SYNC_FETCH_AND_MIN_2
  RTLIB::__sync_fetch_and_min_4, // RTLIB::SYNC_FETCH_AND_MIN_4
  RTLIB::__sync_fetch_and_min_8, // RTLIB::SYNC_FETCH_AND_MIN_8
  RTLIB::__sync_fetch_and_min_16, // RTLIB::SYNC_FETCH_AND_MIN_16
  RTLIB::__sync_fetch_and_nand_1, // RTLIB::SYNC_FETCH_AND_NAND_1
  RTLIB::__sync_fetch_and_nand_2, // RTLIB::SYNC_FETCH_AND_NAND_2
  RTLIB::__sync_fetch_and_nand_4, // RTLIB::SYNC_FETCH_AND_NAND_4
  RTLIB::__sync_fetch_and_nand_8, // RTLIB::SYNC_FETCH_AND_NAND_8
  RTLIB::__sync_fetch_and_nand_16, // RTLIB::SYNC_FETCH_AND_NAND_16
  RTLIB::__sync_fetch_and_or_1, // RTLIB::SYNC_FETCH_AND_OR_1
  RTLIB::__sync_fetch_and_or_2, // RTLIB::SYNC_FETCH_AND_OR_2
  RTLIB::__sync_fetch_and_or_4, // RTLIB::SYNC_FETCH_AND_OR_4
  RTLIB::__sync_fetch_and_or_8, // RTLIB::SYNC_FETCH_AND_OR_8
  RTLIB::__sync_fetch_and_or_16, // RTLIB::SYNC_FETCH_AND_OR_16
  RTLIB::__sync_fetch_and_sub_1, // RTLIB::SYNC_FETCH_AND_SUB_1
  RTLIB::__sync_fetch_and_sub_2, // RTLIB::SYNC_FETCH_AND_SUB_2
  RTLIB::__sync_fetch_and_sub_4, // RTLIB::SYNC_FETCH_AND_SUB_4
  RTLIB::__sync_fetch_and_sub_8, // RTLIB::SYNC_FETCH_AND_SUB_8
  RTLIB::__sync_fetch_and_sub_16, // RTLIB::SYNC_FETCH_AND_SUB_16
  RTLIB::__sync_fetch_and_umax_1, // RTLIB::SYNC_FETCH_AND_UMAX_1
  RTLIB::__sync_fetch_and_umax_2, // RTLIB::SYNC_FETCH_AND_UMAX_2
  RTLIB::__sync_fetch_and_umax_4, // RTLIB::SYNC_FETCH_AND_UMAX_4
  RTLIB::__sync_fetch_and_umax_8, // RTLIB::SYNC_FETCH_AND_UMAX_8
  RTLIB::__sync_fetch_and_umax_16, // RTLIB::SYNC_FETCH_AND_UMAX_16
  RTLIB::__sync_fetch_and_umin_1, // RTLIB::SYNC_FETCH_AND_UMIN_1
  RTLIB::__sync_fetch_and_umin_2, // RTLIB::SYNC_FETCH_AND_UMIN_2
  RTLIB::__sync_fetch_and_umin_4, // RTLIB::SYNC_FETCH_AND_UMIN_4
  RTLIB::__sync_fetch_and_umin_8, // RTLIB::SYNC_FETCH_AND_UMIN_8
  RTLIB::__sync_fetch_and_umin_16, // RTLIB::SYNC_FETCH_AND_UMIN_16
  RTLIB::__sync_fetch_and_xor_1, // RTLIB::SYNC_FETCH_AND_XOR_1
  RTLIB::__sync_fetch_and_xor_2, // RTLIB::SYNC_FETCH_AND_XOR_2
  RTLIB::__sync_fetch_and_xor_4, // RTLIB::SYNC_FETCH_AND_XOR_4
  RTLIB::__sync_fetch_and_xor_8, // RTLIB::SYNC_FETCH_AND_XOR_8
  RTLIB::__sync_fetch_and_xor_16, // RTLIB::SYNC_FETCH_AND_XOR_16
  RTLIB::__sync_lock_test_and_set_1, // RTLIB::SYNC_LOCK_TEST_AND_SET_1
  RTLIB::__sync_lock_test_and_set_2, // RTLIB::SYNC_LOCK_TEST_AND_SET_2
  RTLIB::__sync_lock_test_and_set_4, // RTLIB::SYNC_LOCK_TEST_AND_SET_4
  RTLIB::__sync_lock_test_and_set_8, // RTLIB::SYNC_LOCK_TEST_AND_SET_8
  RTLIB::__sync_lock_test_and_set_16, // RTLIB::SYNC_LOCK_TEST_AND_SET_16
  RTLIB::__sync_val_compare_and_swap_1, // RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1
  RTLIB::__sync_val_compare_and_swap_2, // RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2
  RTLIB::__sync_val_compare_and_swap_4, // RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4
  RTLIB::__sync_val_compare_and_swap_8, // RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8
  RTLIB::__sync_val_compare_and_swap_16, // RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16
  RTLIB::tanhf, // RTLIB::TANH_F32
  RTLIB::tanh, // RTLIB::TANH_F64
  RTLIB::tanh_f80, // RTLIB::TANH_F80
  RTLIB::tanh_f128, // RTLIB::TANH_F128
  RTLIB::tanh_ppcf128, // RTLIB::TANH_PPCF128
  RTLIB::tanf, // RTLIB::TAN_F32
  RTLIB::tan, // RTLIB::TAN_F64
  RTLIB::tan_f80, // RTLIB::TAN_F80
  RTLIB::tan_f128, // RTLIB::TAN_F128
  RTLIB::tan_ppcf128, // RTLIB::TAN_PPCF128
  RTLIB::truncf, // RTLIB::TRUNC_F32
  RTLIB::trunc, // RTLIB::TRUNC_F64
  RTLIB::trunc_f80, // RTLIB::TRUNC_F80
  RTLIB::trunc_f128, // RTLIB::TRUNC_F128
  RTLIB::trunc_ppcf128, // RTLIB::TRUNC_PPCF128
  RTLIB::Unsupported, // RTLIB::UDIVREM_I8
  RTLIB::Unsupported, // RTLIB::UDIVREM_I16
  RTLIB::Unsupported, // RTLIB::UDIVREM_I32
  RTLIB::Unsupported, // RTLIB::UDIVREM_I64
  RTLIB::Unsupported, // RTLIB::UDIVREM_I128
  RTLIB::__udivqi3, // RTLIB::UDIV_I8
  RTLIB::__udivhi3, // RTLIB::UDIV_I16
  RTLIB::__udivsi3, // RTLIB::UDIV_I32
  RTLIB::__udivdi3, // RTLIB::UDIV_I64
  RTLIB::__udivti3, // RTLIB::UDIV_I128
  RTLIB::__floatunsihf, // RTLIB::UINTTOFP_I32_F16
  RTLIB::__floatunsisf, // RTLIB::UINTTOFP_I32_F32
  RTLIB::__floatunsidf, // RTLIB::UINTTOFP_I32_F64
  RTLIB::__floatunsixf, // RTLIB::UINTTOFP_I32_F80
  RTLIB::__floatunsitf, // RTLIB::UINTTOFP_I32_F128
  RTLIB::__gcc_utoq, // RTLIB::UINTTOFP_I32_PPCF128
  RTLIB::__floatundibf, // RTLIB::UINTTOFP_I64_BF16
  RTLIB::__floatundihf, // RTLIB::UINTTOFP_I64_F16
  RTLIB::__floatundisf, // RTLIB::UINTTOFP_I64_F32
  RTLIB::__floatundidf, // RTLIB::UINTTOFP_I64_F64
  RTLIB::__floatundixf, // RTLIB::UINTTOFP_I64_F80
  RTLIB::__floatunditf_f128, // RTLIB::UINTTOFP_I64_F128
  RTLIB::__floatunditf_ppcf128, // RTLIB::UINTTOFP_I64_PPCF128
  RTLIB::__floatuntihf, // RTLIB::UINTTOFP_I128_F16
  RTLIB::__floatuntisf, // RTLIB::UINTTOFP_I128_F32
  RTLIB::__floatuntidf, // RTLIB::UINTTOFP_I128_F64
  RTLIB::__floatuntixf, // RTLIB::UINTTOFP_I128_F80
  RTLIB::__floatuntitf_f128, // RTLIB::UINTTOFP_I128_F128
  RTLIB::__floatuntitf_ppcf128, // RTLIB::UINTTOFP_I128_PPCF128
  RTLIB::__nesf2, // RTLIB::UNE_F32
  RTLIB::__nedf2, // RTLIB::UNE_F64
  RTLIB::__netf2, // RTLIB::UNE_F128
  RTLIB::__gcc_qne, // RTLIB::UNE_PPCF128
  RTLIB::Unsupported, // RTLIB::UNWIND_CALL_PERSONALITY
  RTLIB::Unsupported, // RTLIB::UNWIND_REGISTER
  RTLIB::_Unwind_Resume, // RTLIB::UNWIND_RESUME
  RTLIB::Unsupported, // RTLIB::UNWIND_UNREGISTER
  RTLIB::__unordsf2, // RTLIB::UO_F32
  RTLIB::__unorddf2, // RTLIB::UO_F64
  RTLIB::__unordtf2, // RTLIB::UO_F128
  RTLIB::__gcc_qunord, // RTLIB::UO_PPCF128
  RTLIB::__umodqi3, // RTLIB::UREM_I8
  RTLIB::__umodhi3, // RTLIB::UREM_I16
  RTLIB::__umodsi3, // RTLIB::UREM_I32
  RTLIB::__umoddi3, // RTLIB::UREM_I64
  RTLIB::__umodti3, // RTLIB::UREM_I128
  RTLIB::Unsupported
};

const char *const llvm::RTLIB::RuntimeLibcallsInfo::LibCallImplNames[RTLIB::NumLibcallImpls] = {
  nullptr, // RTLIB::Unsupported
  "_Q_add", // RTLIB::_Q_add
  "_Q_div", // RTLIB::_Q_div
  "_Q_dtoq", // RTLIB::_Q_dtoq
  "_Q_itoq", // RTLIB::_Q_itoq
  "_Q_lltoq", // RTLIB::_Q_lltoq
  "_Q_mul", // RTLIB::_Q_mul
  "_Q_qtod", // RTLIB::_Q_qtod
  "_Q_qtoi", // RTLIB::_Q_qtoi
  "_Q_qtoll", // RTLIB::_Q_qtoll
  "_Q_qtos", // RTLIB::_Q_qtos
  "_Q_qtou", // RTLIB::_Q_qtou
  "_Q_qtoull", // RTLIB::_Q_qtoull
  "_Q_sqrt", // RTLIB::_Q_sqrt
  "_Q_stoq", // RTLIB::_Q_stoq
  "_Q_sub", // RTLIB::_Q_sub
  "_Q_ulltoq", // RTLIB::_Q_ulltoq
  "_Q_utoq", // RTLIB::_Q_utoq
  "_Qp_add", // RTLIB::_Qp_add
  "_Qp_div", // RTLIB::_Qp_div
  "_Qp_dtoq", // RTLIB::_Qp_dtoq
  "_Qp_itoq", // RTLIB::_Qp_itoq
  "_Qp_mul", // RTLIB::_Qp_mul
  "_Qp_qtod", // RTLIB::_Qp_qtod
  "_Qp_qtoi", // RTLIB::_Qp_qtoi
  "_Qp_qtos", // RTLIB::_Qp_qtos
  "_Qp_qtoui", // RTLIB::_Qp_qtoui
  "_Qp_qtoux", // RTLIB::_Qp_qtoux
  "_Qp_qtox", // RTLIB::_Qp_qtox
  "_Qp_sqrt", // RTLIB::_Qp_sqrt
  "_Qp_stoq", // RTLIB::_Qp_stoq
  "_Qp_sub", // RTLIB::_Qp_sub
  "_Qp_uitoq", // RTLIB::_Qp_uitoq
  "_Qp_uxtoq", // RTLIB::_Qp_uxtoq
  "_Qp_xtoq", // RTLIB::_Qp_xtoq
  "_Unwind_CallPersonality", // RTLIB::_Unwind_CallPersonality
  "_Unwind_Resume", // RTLIB::_Unwind_Resume
  "_Unwind_SjLj_Register", // RTLIB::_Unwind_SjLj_Register
  "_Unwind_SjLj_Resume", // RTLIB::_Unwind_SjLj_Resume
  "_Unwind_SjLj_Unregister", // RTLIB::_Unwind_SjLj_Unregister
  "___bzero", // RTLIB::___bzero
  "___bzero64", // RTLIB::___bzero64
  "___memmove", // RTLIB::___memmove
  "___memmove64", // RTLIB::___memmove64
  "___memset", // RTLIB::___memset
  "___memset64", // RTLIB::___memset64
  "__aarch64_cas1_acq", // RTLIB::__aarch64_cas1_acq
  "__aarch64_cas1_acq_rel", // RTLIB::__aarch64_cas1_acq_rel
  "__aarch64_cas1_rel", // RTLIB::__aarch64_cas1_rel
  "__aarch64_cas1_relax", // RTLIB::__aarch64_cas1_relax
  "__aarch64_cas2_acq", // RTLIB::__aarch64_cas2_acq
  "__aarch64_cas2_acq_rel", // RTLIB::__aarch64_cas2_acq_rel
  "__aarch64_cas2_rel", // RTLIB::__aarch64_cas2_rel
  "__aarch64_cas2_relax", // RTLIB::__aarch64_cas2_relax
  "__aarch64_cas4_acq", // RTLIB::__aarch64_cas4_acq
  "__aarch64_cas4_acq_rel", // RTLIB::__aarch64_cas4_acq_rel
  "__aarch64_cas4_rel", // RTLIB::__aarch64_cas4_rel
  "__aarch64_cas4_relax", // RTLIB::__aarch64_cas4_relax
  "__aarch64_cas8_acq", // RTLIB::__aarch64_cas8_acq
  "__aarch64_cas8_acq_rel", // RTLIB::__aarch64_cas8_acq_rel
  "__aarch64_cas8_rel", // RTLIB::__aarch64_cas8_rel
  "__aarch64_cas8_relax", // RTLIB::__aarch64_cas8_relax
  "__aarch64_cas16_acq", // RTLIB::__aarch64_cas16_acq
  "__aarch64_cas16_acq_rel", // RTLIB::__aarch64_cas16_acq_rel
  "__aarch64_cas16_rel", // RTLIB::__aarch64_cas16_rel
  "__aarch64_cas16_relax", // RTLIB::__aarch64_cas16_relax
  "__aarch64_ldadd1_acq", // RTLIB::__aarch64_ldadd1_acq
  "__aarch64_ldadd1_acq_rel", // RTLIB::__aarch64_ldadd1_acq_rel
  "__aarch64_ldadd1_rel", // RTLIB::__aarch64_ldadd1_rel
  "__aarch64_ldadd1_relax", // RTLIB::__aarch64_ldadd1_relax
  "__aarch64_ldadd2_acq", // RTLIB::__aarch64_ldadd2_acq
  "__aarch64_ldadd2_acq_rel", // RTLIB::__aarch64_ldadd2_acq_rel
  "__aarch64_ldadd2_rel", // RTLIB::__aarch64_ldadd2_rel
  "__aarch64_ldadd2_relax", // RTLIB::__aarch64_ldadd2_relax
  "__aarch64_ldadd4_acq", // RTLIB::__aarch64_ldadd4_acq
  "__aarch64_ldadd4_acq_rel", // RTLIB::__aarch64_ldadd4_acq_rel
  "__aarch64_ldadd4_rel", // RTLIB::__aarch64_ldadd4_rel
  "__aarch64_ldadd4_relax", // RTLIB::__aarch64_ldadd4_relax
  "__aarch64_ldadd8_acq", // RTLIB::__aarch64_ldadd8_acq
  "__aarch64_ldadd8_acq_rel", // RTLIB::__aarch64_ldadd8_acq_rel
  "__aarch64_ldadd8_rel", // RTLIB::__aarch64_ldadd8_rel
  "__aarch64_ldadd8_relax", // RTLIB::__aarch64_ldadd8_relax
  "__aarch64_ldclr1_acq", // RTLIB::__aarch64_ldclr1_acq
  "__aarch64_ldclr1_acq_rel", // RTLIB::__aarch64_ldclr1_acq_rel
  "__aarch64_ldclr1_rel", // RTLIB::__aarch64_ldclr1_rel
  "__aarch64_ldclr1_relax", // RTLIB::__aarch64_ldclr1_relax
  "__aarch64_ldclr2_acq", // RTLIB::__aarch64_ldclr2_acq
  "__aarch64_ldclr2_acq_rel", // RTLIB::__aarch64_ldclr2_acq_rel
  "__aarch64_ldclr2_rel", // RTLIB::__aarch64_ldclr2_rel
  "__aarch64_ldclr2_relax", // RTLIB::__aarch64_ldclr2_relax
  "__aarch64_ldclr4_acq", // RTLIB::__aarch64_ldclr4_acq
  "__aarch64_ldclr4_acq_rel", // RTLIB::__aarch64_ldclr4_acq_rel
  "__aarch64_ldclr4_rel", // RTLIB::__aarch64_ldclr4_rel
  "__aarch64_ldclr4_relax", // RTLIB::__aarch64_ldclr4_relax
  "__aarch64_ldclr8_acq", // RTLIB::__aarch64_ldclr8_acq
  "__aarch64_ldclr8_acq_rel", // RTLIB::__aarch64_ldclr8_acq_rel
  "__aarch64_ldclr8_rel", // RTLIB::__aarch64_ldclr8_rel
  "__aarch64_ldclr8_relax", // RTLIB::__aarch64_ldclr8_relax
  "__aarch64_ldeor1_acq", // RTLIB::__aarch64_ldeor1_acq
  "__aarch64_ldeor1_acq_rel", // RTLIB::__aarch64_ldeor1_acq_rel
  "__aarch64_ldeor1_rel", // RTLIB::__aarch64_ldeor1_rel
  "__aarch64_ldeor1_relax", // RTLIB::__aarch64_ldeor1_relax
  "__aarch64_ldeor2_acq", // RTLIB::__aarch64_ldeor2_acq
  "__aarch64_ldeor2_acq_rel", // RTLIB::__aarch64_ldeor2_acq_rel
  "__aarch64_ldeor2_rel", // RTLIB::__aarch64_ldeor2_rel
  "__aarch64_ldeor2_relax", // RTLIB::__aarch64_ldeor2_relax
  "__aarch64_ldeor4_acq", // RTLIB::__aarch64_ldeor4_acq
  "__aarch64_ldeor4_acq_rel", // RTLIB::__aarch64_ldeor4_acq_rel
  "__aarch64_ldeor4_rel", // RTLIB::__aarch64_ldeor4_rel
  "__aarch64_ldeor4_relax", // RTLIB::__aarch64_ldeor4_relax
  "__aarch64_ldeor8_acq", // RTLIB::__aarch64_ldeor8_acq
  "__aarch64_ldeor8_acq_rel", // RTLIB::__aarch64_ldeor8_acq_rel
  "__aarch64_ldeor8_rel", // RTLIB::__aarch64_ldeor8_rel
  "__aarch64_ldeor8_relax", // RTLIB::__aarch64_ldeor8_relax
  "__aarch64_ldset1_acq", // RTLIB::__aarch64_ldset1_acq
  "__aarch64_ldset1_acq_rel", // RTLIB::__aarch64_ldset1_acq_rel
  "__aarch64_ldset1_rel", // RTLIB::__aarch64_ldset1_rel
  "__aarch64_ldset1_relax", // RTLIB::__aarch64_ldset1_relax
  "__aarch64_ldset2_acq", // RTLIB::__aarch64_ldset2_acq
  "__aarch64_ldset2_acq_rel", // RTLIB::__aarch64_ldset2_acq_rel
  "__aarch64_ldset2_rel", // RTLIB::__aarch64_ldset2_rel
  "__aarch64_ldset2_relax", // RTLIB::__aarch64_ldset2_relax
  "__aarch64_ldset4_acq", // RTLIB::__aarch64_ldset4_acq
  "__aarch64_ldset4_acq_rel", // RTLIB::__aarch64_ldset4_acq_rel
  "__aarch64_ldset4_rel", // RTLIB::__aarch64_ldset4_rel
  "__aarch64_ldset4_relax", // RTLIB::__aarch64_ldset4_relax
  "__aarch64_ldset8_acq", // RTLIB::__aarch64_ldset8_acq
  "__aarch64_ldset8_acq_rel", // RTLIB::__aarch64_ldset8_acq_rel
  "__aarch64_ldset8_rel", // RTLIB::__aarch64_ldset8_rel
  "__aarch64_ldset8_relax", // RTLIB::__aarch64_ldset8_relax
  "__aarch64_swp1_acq", // RTLIB::__aarch64_swp1_acq
  "__aarch64_swp1_acq_rel", // RTLIB::__aarch64_swp1_acq_rel
  "__aarch64_swp1_rel", // RTLIB::__aarch64_swp1_rel
  "__aarch64_swp1_relax", // RTLIB::__aarch64_swp1_relax
  "__aarch64_swp2_acq", // RTLIB::__aarch64_swp2_acq
  "__aarch64_swp2_acq_rel", // RTLIB::__aarch64_swp2_acq_rel
  "__aarch64_swp2_rel", // RTLIB::__aarch64_swp2_rel
  "__aarch64_swp2_relax", // RTLIB::__aarch64_swp2_relax
  "__aarch64_swp4_acq", // RTLIB::__aarch64_swp4_acq
  "__aarch64_swp4_acq_rel", // RTLIB::__aarch64_swp4_acq_rel
  "__aarch64_swp4_rel", // RTLIB::__aarch64_swp4_rel
  "__aarch64_swp4_relax", // RTLIB::__aarch64_swp4_relax
  "__aarch64_swp8_acq", // RTLIB::__aarch64_swp8_acq
  "__aarch64_swp8_acq_rel", // RTLIB::__aarch64_swp8_acq_rel
  "__aarch64_swp8_rel", // RTLIB::__aarch64_swp8_rel
  "__aarch64_swp8_relax", // RTLIB::__aarch64_swp8_relax
  "__adddf3", // RTLIB::__adddf3
  "__adddf3vfp", // RTLIB::__adddf3vfp
  "__addkf3", // RTLIB::__addkf3
  "__addsf3", // RTLIB::__addsf3
  "__addsf3vfp", // RTLIB::__addsf3vfp
  "__addtf3", // RTLIB::__addtf3
  "__addxf3", // RTLIB::__addxf3
  "__aeabi_d2f", // RTLIB::__aeabi_d2f
  "__aeabi_d2h", // RTLIB::__aeabi_d2h
  "__aeabi_d2iz", // RTLIB::__aeabi_d2iz
  "__aeabi_d2lz", // RTLIB::__aeabi_d2lz
  "__aeabi_d2uiz", // RTLIB::__aeabi_d2uiz
  "__aeabi_d2ulz", // RTLIB::__aeabi_d2ulz
  "__aeabi_dadd", // RTLIB::__aeabi_dadd
  "__aeabi_dcmpeq", // RTLIB::__aeabi_dcmpeq__oeq
  "__aeabi_dcmpeq", // RTLIB::__aeabi_dcmpeq__une
  "__aeabi_dcmpge", // RTLIB::__aeabi_dcmpge
  "__aeabi_dcmpgt", // RTLIB::__aeabi_dcmpgt
  "__aeabi_dcmple", // RTLIB::__aeabi_dcmple
  "__aeabi_dcmplt", // RTLIB::__aeabi_dcmplt
  "__aeabi_dcmpun", // RTLIB::__aeabi_dcmpun
  "__aeabi_ddiv", // RTLIB::__aeabi_ddiv
  "__aeabi_dmul", // RTLIB::__aeabi_dmul
  "__aeabi_dsub", // RTLIB::__aeabi_dsub
  "__aeabi_f2d", // RTLIB::__aeabi_f2d
  "__aeabi_f2h", // RTLIB::__aeabi_f2h
  "__aeabi_f2iz", // RTLIB::__aeabi_f2iz
  "__aeabi_f2lz", // RTLIB::__aeabi_f2lz
  "__aeabi_f2uiz", // RTLIB::__aeabi_f2uiz
  "__aeabi_f2ulz", // RTLIB::__aeabi_f2ulz
  "__aeabi_fadd", // RTLIB::__aeabi_fadd
  "__aeabi_fcmpeq", // RTLIB::__aeabi_fcmpeq__oeq
  "__aeabi_fcmpeq", // RTLIB::__aeabi_fcmpeq__une
  "__aeabi_fcmpge", // RTLIB::__aeabi_fcmpge
  "__aeabi_fcmpgt", // RTLIB::__aeabi_fcmpgt
  "__aeabi_fcmple", // RTLIB::__aeabi_fcmple
  "__aeabi_fcmplt", // RTLIB::__aeabi_fcmplt
  "__aeabi_fcmpun", // RTLIB::__aeabi_fcmpun
  "__aeabi_fdiv", // RTLIB::__aeabi_fdiv
  "__aeabi_fmul", // RTLIB::__aeabi_fmul
  "__aeabi_fsub", // RTLIB::__aeabi_fsub
  "__aeabi_h2f", // RTLIB::__aeabi_h2f
  "__aeabi_i2d", // RTLIB::__aeabi_i2d
  "__aeabi_i2f", // RTLIB::__aeabi_i2f
  "__aeabi_idiv", // RTLIB::__aeabi_idiv__i8
  "__aeabi_idiv", // RTLIB::__aeabi_idiv__i16
  "__aeabi_idiv", // RTLIB::__aeabi_idiv__i32
  "__aeabi_idivmod", // RTLIB::__aeabi_idivmod
  "__aeabi_l2d", // RTLIB::__aeabi_l2d
  "__aeabi_l2f", // RTLIB::__aeabi_l2f
  "__aeabi_lasr", // RTLIB::__aeabi_lasr
  "__aeabi_ldivmod", // RTLIB::__aeabi_ldivmod
  "__aeabi_llsl", // RTLIB::__aeabi_llsl
  "__aeabi_llsr", // RTLIB::__aeabi_llsr
  "__aeabi_lmul", // RTLIB::__aeabi_lmul
  "__aeabi_memclr", // RTLIB::__aeabi_memclr
  "__aeabi_memclr4", // RTLIB::__aeabi_memclr4
  "__aeabi_memclr8", // RTLIB::__aeabi_memclr8
  "__aeabi_memcpy", // RTLIB::__aeabi_memcpy
  "__aeabi_memcpy4", // RTLIB::__aeabi_memcpy4
  "__aeabi_memcpy8", // RTLIB::__aeabi_memcpy8
  "__aeabi_memmove", // RTLIB::__aeabi_memmove
  "__aeabi_memmove4", // RTLIB::__aeabi_memmove4
  "__aeabi_memmove8", // RTLIB::__aeabi_memmove8
  "__aeabi_memset", // RTLIB::__aeabi_memset
  "__aeabi_memset4", // RTLIB::__aeabi_memset4
  "__aeabi_memset8", // RTLIB::__aeabi_memset8
  "__aeabi_ui2d", // RTLIB::__aeabi_ui2d
  "__aeabi_ui2f", // RTLIB::__aeabi_ui2f
  "__aeabi_uidiv", // RTLIB::__aeabi_uidiv__i8
  "__aeabi_uidiv", // RTLIB::__aeabi_uidiv__i16
  "__aeabi_uidiv", // RTLIB::__aeabi_uidiv__i32
  "__aeabi_uidivmod", // RTLIB::__aeabi_uidivmod
  "__aeabi_ul2d", // RTLIB::__aeabi_ul2d
  "__aeabi_ul2f", // RTLIB::__aeabi_ul2f
  "__aeabi_uldivmod", // RTLIB::__aeabi_uldivmod
  "__arm_sc_memcpy", // RTLIB::__arm_sc_memcpy
  "__arm_sc_memmove", // RTLIB::__arm_sc_memmove
  "__arm_sc_memset", // RTLIB::__arm_sc_memset
  "__ashldi3", // RTLIB::__ashldi3
  "__ashlhi3", // RTLIB::__ashlhi3
  "__ashlsi3", // RTLIB::__ashlsi3
  "__ashlti3", // RTLIB::__ashlti3
  "__ashrdi3", // RTLIB::__ashrdi3
  "__ashrhi3", // RTLIB::__ashrhi3
  "__ashrsi3", // RTLIB::__ashrsi3
  "__ashrti3", // RTLIB::__ashrti3
  "__atomic_compare_exchange", // RTLIB::__atomic_compare_exchange
  "__atomic_compare_exchange_1", // RTLIB::__atomic_compare_exchange_1
  "__atomic_compare_exchange_2", // RTLIB::__atomic_compare_exchange_2
  "__atomic_compare_exchange_4", // RTLIB::__atomic_compare_exchange_4
  "__atomic_compare_exchange_8", // RTLIB::__atomic_compare_exchange_8
  "__atomic_compare_exchange_16", // RTLIB::__atomic_compare_exchange_16
  "__atomic_exchange", // RTLIB::__atomic_exchange
  "__atomic_exchange_1", // RTLIB::__atomic_exchange_1
  "__atomic_exchange_2", // RTLIB::__atomic_exchange_2
  "__atomic_exchange_4", // RTLIB::__atomic_exchange_4
  "__atomic_exchange_8", // RTLIB::__atomic_exchange_8
  "__atomic_exchange_16", // RTLIB::__atomic_exchange_16
  "__atomic_fetch_add_1", // RTLIB::__atomic_fetch_add_1
  "__atomic_fetch_add_2", // RTLIB::__atomic_fetch_add_2
  "__atomic_fetch_add_4", // RTLIB::__atomic_fetch_add_4
  "__atomic_fetch_add_8", // RTLIB::__atomic_fetch_add_8
  "__atomic_fetch_add_16", // RTLIB::__atomic_fetch_add_16
  "__atomic_fetch_and_1", // RTLIB::__atomic_fetch_and_1
  "__atomic_fetch_and_2", // RTLIB::__atomic_fetch_and_2
  "__atomic_fetch_and_4", // RTLIB::__atomic_fetch_and_4
  "__atomic_fetch_and_8", // RTLIB::__atomic_fetch_and_8
  "__atomic_fetch_and_16", // RTLIB::__atomic_fetch_and_16
  "__atomic_fetch_nand_1", // RTLIB::__atomic_fetch_nand_1
  "__atomic_fetch_nand_2", // RTLIB::__atomic_fetch_nand_2
  "__atomic_fetch_nand_4", // RTLIB::__atomic_fetch_nand_4
  "__atomic_fetch_nand_8", // RTLIB::__atomic_fetch_nand_8
  "__atomic_fetch_nand_16", // RTLIB::__atomic_fetch_nand_16
  "__atomic_fetch_or_1", // RTLIB::__atomic_fetch_or_1
  "__atomic_fetch_or_2", // RTLIB::__atomic_fetch_or_2
  "__atomic_fetch_or_4", // RTLIB::__atomic_fetch_or_4
  "__atomic_fetch_or_8", // RTLIB::__atomic_fetch_or_8
  "__atomic_fetch_or_16", // RTLIB::__atomic_fetch_or_16
  "__atomic_fetch_sub_1", // RTLIB::__atomic_fetch_sub_1
  "__atomic_fetch_sub_2", // RTLIB::__atomic_fetch_sub_2
  "__atomic_fetch_sub_4", // RTLIB::__atomic_fetch_sub_4
  "__atomic_fetch_sub_8", // RTLIB::__atomic_fetch_sub_8
  "__atomic_fetch_sub_16", // RTLIB::__atomic_fetch_sub_16
  "__atomic_fetch_xor_1", // RTLIB::__atomic_fetch_xor_1
  "__atomic_fetch_xor_2", // RTLIB::__atomic_fetch_xor_2
  "__atomic_fetch_xor_4", // RTLIB::__atomic_fetch_xor_4
  "__atomic_fetch_xor_8", // RTLIB::__atomic_fetch_xor_8
  "__atomic_fetch_xor_16", // RTLIB::__atomic_fetch_xor_16
  "__atomic_load", // RTLIB::__atomic_load
  "__atomic_load_1", // RTLIB::__atomic_load_1
  "__atomic_load_2", // RTLIB::__atomic_load_2
  "__atomic_load_4", // RTLIB::__atomic_load_4
  "__atomic_load_8", // RTLIB::__atomic_load_8
  "__atomic_load_16", // RTLIB::__atomic_load_16
  "__atomic_store", // RTLIB::__atomic_store
  "__atomic_store_1", // RTLIB::__atomic_store_1
  "__atomic_store_2", // RTLIB::__atomic_store_2
  "__atomic_store_4", // RTLIB::__atomic_store_4
  "__atomic_store_8", // RTLIB::__atomic_store_8
  "__atomic_store_16", // RTLIB::__atomic_store_16
  "__bzero", // RTLIB::__bzero
  "__clear_cache", // RTLIB::__clear_cache
  "__clzdi2", // RTLIB::__clzdi2
  "__clzsi2", // RTLIB::__clzsi2
  "__clzti2", // RTLIB::__clzti2
  "__cxa_end_cleanup", // RTLIB::__cxa_end_cleanup
  "__divdf3", // RTLIB::__divdf3
  "__divdf3vfp", // RTLIB::__divdf3vfp
  "__divdi3", // RTLIB::__divdi3
  "__divhi3", // RTLIB::__divhi3
  "__divkf3", // RTLIB::__divkf3
  "__divmodhi4", // RTLIB::__divmodhi4
  "__divmodqi4", // RTLIB::__divmodqi4
  "__divmodsi4", // RTLIB::__divmodsi4
  "__divqi3", // RTLIB::__divqi3
  "__divsf3", // RTLIB::__divsf3
  "__divsf3vfp", // RTLIB::__divsf3vfp
  "__divsi3", // RTLIB::__divsi3
  "__divtf3", // RTLIB::__divtf3
  "__divti3", // RTLIB::__divti3
  "__divxf3", // RTLIB::__divxf3
  "__dtoi64", // RTLIB::__dtoi64
  "__dtou64", // RTLIB::__dtou64
  "__eqdf2", // RTLIB::__eqdf2
  "__eqdf2vfp", // RTLIB::__eqdf2vfp
  "__eqkf2", // RTLIB::__eqkf2
  "__eqsf2", // RTLIB::__eqsf2
  "__eqsf2vfp", // RTLIB::__eqsf2vfp
  "__eqtf2", // RTLIB::__eqtf2
  "__exp2_finite", // RTLIB::__exp2_finite
  "__exp2f128_finite", // RTLIB::__exp2f128_finite
  "__exp2f_finite", // RTLIB::__exp2f_finite
  "__exp2l_finite", // RTLIB::__exp2l_finite_f80
  "__exp2l_finite", // RTLIB::__exp2l_finite_f128
  "__exp2l_finite", // RTLIB::__exp2l_finite_ppcf128
  "__exp10", // RTLIB::__exp10
  "__exp10f", // RTLIB::__exp10f
  "__exp10f128_finite", // RTLIB::__exp10f128_finite
  "__exp_finite", // RTLIB::__exp_finite
  "__expf128_finite", // RTLIB::__expf128_finite
  "__expf_finite", // RTLIB::__expf_finite
  "__expl_finite", // RTLIB::__expl_finite_f80
  "__expl_finite", // RTLIB::__expl_finite_f128
  "__expl_finite", // RTLIB::__expl_finite_ppcf128
  "__extendbfsf2", // RTLIB::__extendbfsf2
  "__extenddfkf2", // RTLIB::__extenddfkf2
  "__extenddftf2", // RTLIB::__extenddftf2
  "__extendhfdf2", // RTLIB::__extendhfdf2
  "__extendhfsf2", // RTLIB::__extendhfsf2
  "__extendhftf2", // RTLIB::__extendhftf2
  "__extendhfxf2", // RTLIB::__extendhfxf2
  "__extendkftf2", // RTLIB::__extendkftf2
  "__extendsfdf2", // RTLIB::__extendsfdf2
  "__extendsfdf2vfp", // RTLIB::__extendsfdf2vfp
  "__extendsfkf2", // RTLIB::__extendsfkf2
  "__extendsftf2", // RTLIB::__extendsftf2
  "__extendxftf2", // RTLIB::__extendxftf2
  "__fixdfdi", // RTLIB::__fixdfdi
  "__fixdfsi", // RTLIB::__fixdfsi
  "__fixdfsivfp", // RTLIB::__fixdfsivfp
  "__fixdfti", // RTLIB::__fixdfti
  "__fixhfdi", // RTLIB::__fixhfdi
  "__fixhfsi", // RTLIB::__fixhfsi
  "__fixhfti", // RTLIB::__fixhfti
  "__fixkfdi", // RTLIB::__fixkfdi
  "__fixkfsi", // RTLIB::__fixkfsi
  "__fixkfti", // RTLIB::__fixkfti
  "__fixsfdi", // RTLIB::__fixsfdi
  "__fixsfsi", // RTLIB::__fixsfsi
  "__fixsfsivfp", // RTLIB::__fixsfsivfp
  "__fixsfti", // RTLIB::__fixsfti
  "__fixtfdi", // RTLIB::__fixtfdi_f128
  "__fixtfdi", // RTLIB::__fixtfdi_ppcf128
  "__fixtfsi", // RTLIB::__fixtfsi
  "__fixtfti", // RTLIB::__fixtfti_f128
  "__fixtfti", // RTLIB::__fixtfti_ppcf128
  "__fixunsdfdi", // RTLIB::__fixunsdfdi
  "__fixunsdfsi", // RTLIB::__fixunsdfsi
  "__fixunsdfsivfp", // RTLIB::__fixunsdfsivfp
  "__fixunsdfti", // RTLIB::__fixunsdfti
  "__fixunshfdi", // RTLIB::__fixunshfdi
  "__fixunshfsi", // RTLIB::__fixunshfsi
  "__fixunshfti", // RTLIB::__fixunshfti
  "__fixunskfdi", // RTLIB::__fixunskfdi
  "__fixunskfsi", // RTLIB::__fixunskfsi
  "__fixunskfti", // RTLIB::__fixunskfti
  "__fixunssfdi", // RTLIB::__fixunssfdi
  "__fixunssfsi", // RTLIB::__fixunssfsi
  "__fixunssfsivfp", // RTLIB::__fixunssfsivfp
  "__fixunssfti", // RTLIB::__fixunssfti
  "__fixunstfdi", // RTLIB::__fixunstfdi_f128
  "__fixunstfdi", // RTLIB::__fixunstfdi_ppcf128
  "__fixunstfsi", // RTLIB::__fixunstfsi_f128
  "__fixunstfsi", // RTLIB::__fixunstfsi_ppcf128
  "__fixunstfti", // RTLIB::__fixunstfti_f128
  "__fixunstfti", // RTLIB::__fixunstfti_ppcf128
  "__fixunsxfdi", // RTLIB::__fixunsxfdi
  "__fixunsxfsi", // RTLIB::__fixunsxfsi
  "__fixunsxfti", // RTLIB::__fixunsxfti
  "__fixxfdi", // RTLIB::__fixxfdi
  "__fixxfsi", // RTLIB::__fixxfsi
  "__fixxfti", // RTLIB::__fixxfti
  "__floatdibf", // RTLIB::__floatdibf
  "__floatdidf", // RTLIB::__floatdidf
  "__floatdihf", // RTLIB::__floatdihf
  "__floatdikf", // RTLIB::__floatdikf
  "__floatdisf", // RTLIB::__floatdisf
  "__floatditf", // RTLIB::__floatditf_f128
  "__floatditf", // RTLIB::__floatditf_ppcf128
  "__floatdixf", // RTLIB::__floatdixf
  "__floatsidf", // RTLIB::__floatsidf
  "__floatsidfvfp", // RTLIB::__floatsidfvfp
  "__floatsihf", // RTLIB::__floatsihf
  "__floatsikf", // RTLIB::__floatsikf
  "__floatsisf", // RTLIB::__floatsisf
  "__floatsisfvfp", // RTLIB::__floatsisfvfp
  "__floatsitf", // RTLIB::__floatsitf
  "__floatsixf", // RTLIB::__floatsixf
  "__floattidf", // RTLIB::__floattidf
  "__floattihf", // RTLIB::__floattihf
  "__floattikf", // RTLIB::__floattikf
  "__floattisf", // RTLIB::__floattisf
  "__floattitf", // RTLIB::__floattitf_f128
  "__floattitf", // RTLIB::__floattitf_ppcf128
  "__floattixf", // RTLIB::__floattixf
  "__floatundibf", // RTLIB::__floatundibf
  "__floatundidf", // RTLIB::__floatundidf
  "__floatundihf", // RTLIB::__floatundihf
  "__floatundikf", // RTLIB::__floatundikf
  "__floatundisf", // RTLIB::__floatundisf
  "__floatunditf", // RTLIB::__floatunditf_f128
  "__floatunditf", // RTLIB::__floatunditf_ppcf128
  "__floatundixf", // RTLIB::__floatundixf
  "__floatunsidf", // RTLIB::__floatunsidf
  "__floatunsihf", // RTLIB::__floatunsihf
  "__floatunsikf", // RTLIB::__floatunsikf
  "__floatunsisf", // RTLIB::__floatunsisf
  "__floatunsitf", // RTLIB::__floatunsitf
  "__floatunsixf", // RTLIB::__floatunsixf
  "__floatunssidfvfp", // RTLIB::__floatunssidfvfp
  "__floatunssisfvfp", // RTLIB::__floatunssisfvfp
  "__floatuntidf", // RTLIB::__floatuntidf
  "__floatuntihf", // RTLIB::__floatuntihf
  "__floatuntikf", // RTLIB::__floatuntikf
  "__floatuntisf", // RTLIB::__floatuntisf
  "__floatuntitf", // RTLIB::__floatuntitf_f128
  "__floatuntitf", // RTLIB::__floatuntitf_ppcf128
  "__floatuntixf", // RTLIB::__floatuntixf
  "__gcc_dtoq", // RTLIB::__gcc_dtoq
  "__gcc_itoq", // RTLIB::__gcc_itoq
  "__gcc_qadd", // RTLIB::__gcc_qadd
  "__gcc_qdiv", // RTLIB::__gcc_qdiv
  "__gcc_qeq", // RTLIB::__gcc_qeq
  "__gcc_qge", // RTLIB::__gcc_qge
  "__gcc_qgt", // RTLIB::__gcc_qgt
  "__gcc_qle", // RTLIB::__gcc_qle
  "__gcc_qlt", // RTLIB::__gcc_qlt
  "__gcc_qmul", // RTLIB::__gcc_qmul
  "__gcc_qne", // RTLIB::__gcc_qne
  "__gcc_qsub", // RTLIB::__gcc_qsub
  "__gcc_qtod", // RTLIB::__gcc_qtod
  "__gcc_qtos", // RTLIB::__gcc_qtos
  "__gcc_qtou", // RTLIB::__gcc_qtou
  "__gcc_qunord", // RTLIB::__gcc_qunord
  "__gcc_stoq", // RTLIB::__gcc_stoq
  "__gcc_utoq", // RTLIB::__gcc_utoq
  "__gedf2", // RTLIB::__gedf2
  "__gedf2vfp", // RTLIB::__gedf2vfp
  "__gekf2", // RTLIB::__gekf2
  "__gesf2", // RTLIB::__gesf2
  "__gesf2vfp", // RTLIB::__gesf2vfp
  "__getf2", // RTLIB::__getf2
  "__gnu_f2h_ieee", // RTLIB::__gnu_f2h_ieee
  "__gnu_h2f_ieee", // RTLIB::__gnu_h2f_ieee
  "__gtdf2", // RTLIB::__gtdf2
  "__gtdf2vfp", // RTLIB::__gtdf2vfp
  "__gtkf2", // RTLIB::__gtkf2
  "__gtsf2", // RTLIB::__gtsf2
  "__gtsf2vfp", // RTLIB::__gtsf2vfp
  "__gttf2", // RTLIB::__gttf2
  "__hexagon_adddf3", // RTLIB::__hexagon_adddf3
  "__hexagon_divdf3", // RTLIB::__hexagon_divdf3
  "__hexagon_divdi3", // RTLIB::__hexagon_divdi3
  "__hexagon_divsf3", // RTLIB::__hexagon_divsf3
  "__hexagon_divsi3", // RTLIB::__hexagon_divsi3
  "__hexagon_fast2_sqrtdf2", // RTLIB::__hexagon_fast2_sqrtdf2
  "__hexagon_fast2_sqrtf", // RTLIB::__hexagon_fast2_sqrtf
  "__hexagon_fast_adddf3", // RTLIB::__hexagon_fast_adddf3
  "__hexagon_fast_divdf3", // RTLIB::__hexagon_fast_divdf3
  "__hexagon_fast_divsf3", // RTLIB::__hexagon_fast_divsf3
  "__hexagon_fast_muldf3", // RTLIB::__hexagon_fast_muldf3
  "__hexagon_fast_subdf3", // RTLIB::__hexagon_fast_subdf3
  "__hexagon_memcpy_likely_aligned_min32bytes_mult8bytes", // RTLIB::__hexagon_memcpy_likely_aligned_min32bytes_mult8bytes
  "__hexagon_moddi3", // RTLIB::__hexagon_moddi3
  "__hexagon_modsi3", // RTLIB::__hexagon_modsi3
  "__hexagon_muldf3", // RTLIB::__hexagon_muldf3
  "__hexagon_sqrtf", // RTLIB::__hexagon_sqrtf
  "__hexagon_subdf3", // RTLIB::__hexagon_subdf3
  "__hexagon_udivdi3", // RTLIB::__hexagon_udivdi3
  "__hexagon_udivsi3", // RTLIB::__hexagon_udivsi3
  "__hexagon_umoddi3", // RTLIB::__hexagon_umoddi3
  "__hexagon_umodsi3", // RTLIB::__hexagon_umodsi3
  "__i64tod", // RTLIB::__i64tod
  "__i64tos", // RTLIB::__i64tos
  "__ledf2", // RTLIB::__ledf2
  "__ledf2vfp", // RTLIB::__ledf2vfp
  "__lekf2", // RTLIB::__lekf2
  "__lesf2", // RTLIB::__lesf2
  "__lesf2vfp", // RTLIB::__lesf2vfp
  "__letf2", // RTLIB::__letf2
  "__llvm_deoptimize", // RTLIB::__llvm_deoptimize
  "__llvm_memcpy_element_unordered_atomic_1", // RTLIB::__llvm_memcpy_element_unordered_atomic_1
  "__llvm_memcpy_element_unordered_atomic_2", // RTLIB::__llvm_memcpy_element_unordered_atomic_2
  "__llvm_memcpy_element_unordered_atomic_4", // RTLIB::__llvm_memcpy_element_unordered_atomic_4
  "__llvm_memcpy_element_unordered_atomic_8", // RTLIB::__llvm_memcpy_element_unordered_atomic_8
  "__llvm_memcpy_element_unordered_atomic_16", // RTLIB::__llvm_memcpy_element_unordered_atomic_16
  "__llvm_memmove_element_unordered_atomic_1", // RTLIB::__llvm_memmove_element_unordered_atomic_1
  "__llvm_memmove_element_unordered_atomic_2", // RTLIB::__llvm_memmove_element_unordered_atomic_2
  "__llvm_memmove_element_unordered_atomic_4", // RTLIB::__llvm_memmove_element_unordered_atomic_4
  "__llvm_memmove_element_unordered_atomic_8", // RTLIB::__llvm_memmove_element_unordered_atomic_8
  "__llvm_memmove_element_unordered_atomic_16", // RTLIB::__llvm_memmove_element_unordered_atomic_16
  "__llvm_memset_element_unordered_atomic_1", // RTLIB::__llvm_memset_element_unordered_atomic_1
  "__llvm_memset_element_unordered_atomic_2", // RTLIB::__llvm_memset_element_unordered_atomic_2
  "__llvm_memset_element_unordered_atomic_4", // RTLIB::__llvm_memset_element_unordered_atomic_4
  "__llvm_memset_element_unordered_atomic_8", // RTLIB::__llvm_memset_element_unordered_atomic_8
  "__llvm_memset_element_unordered_atomic_16", // RTLIB::__llvm_memset_element_unordered_atomic_16
  "__log2_finite", // RTLIB::__log2_finite
  "__log2f128_finite", // RTLIB::__log2f128_finite
  "__log2f_finite", // RTLIB::__log2f_finite
  "__log2l_finite", // RTLIB::__log2l_finite_f80
  "__log2l_finite", // RTLIB::__log2l_finite_f128
  "__log2l_finite", // RTLIB::__log2l_finite_ppcf128
  "__log10_finite", // RTLIB::__log10_finite
  "__log10f128_finite", // RTLIB::__log10f128_finite
  "__log10f_finite", // RTLIB::__log10f_finite
  "__log10l_finite", // RTLIB::__log10l_finite_f80
  "__log10l_finite", // RTLIB::__log10l_finite_f128
  "__log10l_finite", // RTLIB::__log10l_finite_ppcf128
  "__log_finite", // RTLIB::__log_finite
  "__logf128_finite", // RTLIB::__logf128_finite
  "__logf_finite", // RTLIB::__logf_finite
  "__logl_finite", // RTLIB::__logl_finite_f80
  "__logl_finite", // RTLIB::__logl_finite_f128
  "__logl_finite", // RTLIB::__logl_finite_ppcf128
  "__lshrdi3", // RTLIB::__lshrdi3
  "__lshrhi3", // RTLIB::__lshrhi3
  "__lshrsi3", // RTLIB::__lshrsi3
  "__lshrti3", // RTLIB::__lshrti3
  "__ltdf2", // RTLIB::__ltdf2
  "__ltdf2vfp", // RTLIB::__ltdf2vfp
  "__ltkf2", // RTLIB::__ltkf2
  "__ltsf2", // RTLIB::__ltsf2
  "__ltsf2vfp", // RTLIB::__ltsf2vfp
  "__lttf2", // RTLIB::__lttf2
  "__memcpy_4", // RTLIB::__memcpy_4
  "__mips16_adddf3", // RTLIB::__mips16_adddf3
  "__mips16_addsf3", // RTLIB::__mips16_addsf3
  "__mips16_divdf3", // RTLIB::__mips16_divdf3
  "__mips16_divsf3", // RTLIB::__mips16_divsf3
  "__mips16_eqdf2", // RTLIB::__mips16_eqdf2
  "__mips16_eqsf2", // RTLIB::__mips16_eqsf2
  "__mips16_extendsfdf2", // RTLIB::__mips16_extendsfdf2
  "__mips16_fix_truncdfsi", // RTLIB::__mips16_fix_truncdfsi
  "__mips16_fix_truncsfsi", // RTLIB::__mips16_fix_truncsfsi
  "__mips16_floatsidf", // RTLIB::__mips16_floatsidf
  "__mips16_floatsisf", // RTLIB::__mips16_floatsisf
  "__mips16_floatunsidf", // RTLIB::__mips16_floatunsidf
  "__mips16_floatunsisf", // RTLIB::__mips16_floatunsisf
  "__mips16_gedf2", // RTLIB::__mips16_gedf2
  "__mips16_gesf2", // RTLIB::__mips16_gesf2
  "__mips16_gtdf2", // RTLIB::__mips16_gtdf2
  "__mips16_gtsf2", // RTLIB::__mips16_gtsf2
  "__mips16_ledf2", // RTLIB::__mips16_ledf2
  "__mips16_lesf2", // RTLIB::__mips16_lesf2
  "__mips16_ltdf2", // RTLIB::__mips16_ltdf2
  "__mips16_ltsf2", // RTLIB::__mips16_ltsf2
  "__mips16_muldf3", // RTLIB::__mips16_muldf3
  "__mips16_mulsf3", // RTLIB::__mips16_mulsf3
  "__mips16_nedf2", // RTLIB::__mips16_nedf2
  "__mips16_nesf2", // RTLIB::__mips16_nesf2
  "__mips16_ret_dc", // RTLIB::__mips16_ret_dc
  "__mips16_ret_df", // RTLIB::__mips16_ret_df
  "__mips16_ret_sc", // RTLIB::__mips16_ret_sc
  "__mips16_ret_sf", // RTLIB::__mips16_ret_sf
  "__mips16_subdf3", // RTLIB::__mips16_subdf3
  "__mips16_subsf3", // RTLIB::__mips16_subsf3
  "__mips16_truncdfsf2", // RTLIB::__mips16_truncdfsf2
  "__mips16_unorddf2", // RTLIB::__mips16_unorddf2
  "__mips16_unordsf2", // RTLIB::__mips16_unordsf2
  "__moddi3", // RTLIB::__moddi3
  "__modhi3", // RTLIB::__modhi3
  "__modqi3", // RTLIB::__modqi3
  "__modsi3", // RTLIB::__modsi3
  "__modti3", // RTLIB::__modti3
  "__mspabi_addd", // RTLIB::__mspabi_addd
  "__mspabi_addf", // RTLIB::__mspabi_addf
  "__mspabi_cmpd", // RTLIB::__mspabi_cmpd__oeq
  "__mspabi_cmpd", // RTLIB::__mspabi_cmpd__oge
  "__mspabi_cmpd", // RTLIB::__mspabi_cmpd__ogt
  "__mspabi_cmpd", // RTLIB::__mspabi_cmpd__ole
  "__mspabi_cmpd", // RTLIB::__mspabi_cmpd__olt
  "__mspabi_cmpd", // RTLIB::__mspabi_cmpd__une
  "__mspabi_cmpf", // RTLIB::__mspabi_cmpf__oeq
  "__mspabi_cmpf", // RTLIB::__mspabi_cmpf__oge
  "__mspabi_cmpf", // RTLIB::__mspabi_cmpf__ogt
  "__mspabi_cmpf", // RTLIB::__mspabi_cmpf__ole
  "__mspabi_cmpf", // RTLIB::__mspabi_cmpf__olt
  "__mspabi_cmpf", // RTLIB::__mspabi_cmpf__une
  "__mspabi_cvtdf", // RTLIB::__mspabi_cvtdf
  "__mspabi_cvtfd", // RTLIB::__mspabi_cvtfd
  "__mspabi_divd", // RTLIB::__mspabi_divd
  "__mspabi_divf", // RTLIB::__mspabi_divf
  "__mspabi_divi", // RTLIB::__mspabi_divi
  "__mspabi_divli", // RTLIB::__mspabi_divli
  "__mspabi_divlli", // RTLIB::__mspabi_divlli
  "__mspabi_divu", // RTLIB::__mspabi_divu
  "__mspabi_divul", // RTLIB::__mspabi_divul
  "__mspabi_divull", // RTLIB::__mspabi_divull
  "__mspabi_fixdli", // RTLIB::__mspabi_fixdli
  "__mspabi_fixdlli", // RTLIB::__mspabi_fixdlli
  "__mspabi_fixdul", // RTLIB::__mspabi_fixdul
  "__mspabi_fixdull", // RTLIB::__mspabi_fixdull
  "__mspabi_fixfli", // RTLIB::__mspabi_fixfli
  "__mspabi_fixflli", // RTLIB::__mspabi_fixflli
  "__mspabi_fixful", // RTLIB::__mspabi_fixful
  "__mspabi_fixfull", // RTLIB::__mspabi_fixfull
  "__mspabi_fltlid", // RTLIB::__mspabi_fltlid
  "__mspabi_fltlif", // RTLIB::__mspabi_fltlif
  "__mspabi_fltllid", // RTLIB::__mspabi_fltllid
  "__mspabi_fltllif", // RTLIB::__mspabi_fltllif
  "__mspabi_fltuld", // RTLIB::__mspabi_fltuld
  "__mspabi_fltulf", // RTLIB::__mspabi_fltulf
  "__mspabi_fltulld", // RTLIB::__mspabi_fltulld
  "__mspabi_fltullf", // RTLIB::__mspabi_fltullf
  "__mspabi_mpyd", // RTLIB::__mspabi_mpyd
  "__mspabi_mpyf", // RTLIB::__mspabi_mpyf
  "__mspabi_mpyi", // RTLIB::__mspabi_mpyi
  "__mspabi_mpyi_f5hw", // RTLIB::__mspabi_mpyi_f5hw
  "__mspabi_mpyi_hw", // RTLIB::__mspabi_mpyi_hw
  "__mspabi_mpyl", // RTLIB::__mspabi_mpyl
  "__mspabi_mpyl_f5hw", // RTLIB::__mspabi_mpyl_f5hw
  "__mspabi_mpyl_hw", // RTLIB::__mspabi_mpyl_hw
  "__mspabi_mpyl_hw32", // RTLIB::__mspabi_mpyl_hw32
  "__mspabi_mpyll", // RTLIB::__mspabi_mpyll
  "__mspabi_mpyll_f5hw", // RTLIB::__mspabi_mpyll_f5hw
  "__mspabi_mpyll_hw", // RTLIB::__mspabi_mpyll_hw
  "__mspabi_mpyll_hw32", // RTLIB::__mspabi_mpyll_hw32
  "__mspabi_remi", // RTLIB::__mspabi_remi
  "__mspabi_remli", // RTLIB::__mspabi_remli
  "__mspabi_remlli", // RTLIB::__mspabi_remlli
  "__mspabi_remu", // RTLIB::__mspabi_remu
  "__mspabi_remul", // RTLIB::__mspabi_remul
  "__mspabi_remull", // RTLIB::__mspabi_remull
  "__mspabi_slll", // RTLIB::__mspabi_slll
  "__mspabi_sral", // RTLIB::__mspabi_sral
  "__mspabi_srll", // RTLIB::__mspabi_srll
  "__mspabi_subd", // RTLIB::__mspabi_subd
  "__mspabi_subf", // RTLIB::__mspabi_subf
  "__muldf3", // RTLIB::__muldf3
  "__muldf3vfp", // RTLIB::__muldf3vfp
  "__muldi3", // RTLIB::__muldi3
  "__mulhi3", // RTLIB::__mulhi3
  "__mulkf3", // RTLIB::__mulkf3
  "__mulodi4", // RTLIB::__mulodi4
  "__mulosi4", // RTLIB::__mulosi4
  "__muloti4", // RTLIB::__muloti4
  "__mulqi3", // RTLIB::__mulqi3
  "__mulsf3", // RTLIB::__mulsf3
  "__mulsf3vfp", // RTLIB::__mulsf3vfp
  "__mulsi3", // RTLIB::__mulsi3
  "__multf3", // RTLIB::__multf3
  "__multi3", // RTLIB::__multi3
  "__mulxf3", // RTLIB::__mulxf3
  "__nedf2", // RTLIB::__nedf2
  "__nedf2vfp", // RTLIB::__nedf2vfp
  "__negdi2", // RTLIB::__negdi2
  "__negsi2", // RTLIB::__negsi2
  "__nekf2", // RTLIB::__nekf2
  "__nesf2", // RTLIB::__nesf2
  "__nesf2vfp", // RTLIB::__nesf2vfp
  "__netf2", // RTLIB::__netf2
  "__popcountdi2", // RTLIB::__popcountdi2
  "__popcountsi2", // RTLIB::__popcountsi2
  "__popcountti2", // RTLIB::__popcountti2
  "__pow_finite", // RTLIB::__pow_finite
  "__powf128_finite", // RTLIB::__powf128_finite
  "__powf_finite", // RTLIB::__powf_finite
  "__powidf2", // RTLIB::__powidf2
  "__powikf2", // RTLIB::__powikf2
  "__powisf2", // RTLIB::__powisf2
  "__powitf2", // RTLIB::__powitf2_f128
  "__powitf2", // RTLIB::__powitf2_ppc128
  "__powixf2", // RTLIB::__powixf2
  "__powl_finite", // RTLIB::__powl_finite_f80
  "__powl_finite", // RTLIB::__powl_finite_f128
  "__powl_finite", // RTLIB::__powl_finite_ppcf128
  "__riscv_flush_icache", // RTLIB::__riscv_flush_icache
  "__rt_sdiv", // RTLIB::__rt_sdiv
  "__rt_sdiv64", // RTLIB::__rt_sdiv64
  "__rt_udiv", // RTLIB::__rt_udiv
  "__rt_udiv64", // RTLIB::__rt_udiv64
  "__safestack_pointer_address", // RTLIB::__safestack_pointer_address
  "__sincos_stret", // RTLIB::__sincos_stret
  "__sincosf_stret", // RTLIB::__sincosf_stret
  "__stack_chk_fail", // RTLIB::__stack_chk_fail
  "__stack_smash_handler", // RTLIB::__stack_smash_handler
  "__stoi64", // RTLIB::__stoi64
  "__stou64", // RTLIB::__stou64
  "__subdf3", // RTLIB::__subdf3
  "__subdf3vfp", // RTLIB::__subdf3vfp
  "__subkf3", // RTLIB::__subkf3
  "__subsf3", // RTLIB::__subsf3
  "__subsf3vfp", // RTLIB::__subsf3vfp
  "__subtf3", // RTLIB::__subtf3
  "__subxf3", // RTLIB::__subxf3
  "__sync_fetch_and_add_1", // RTLIB::__sync_fetch_and_add_1
  "__sync_fetch_and_add_2", // RTLIB::__sync_fetch_and_add_2
  "__sync_fetch_and_add_4", // RTLIB::__sync_fetch_and_add_4
  "__sync_fetch_and_add_8", // RTLIB::__sync_fetch_and_add_8
  "__sync_fetch_and_add_16", // RTLIB::__sync_fetch_and_add_16
  "__sync_fetch_and_and_1", // RTLIB::__sync_fetch_and_and_1
  "__sync_fetch_and_and_2", // RTLIB::__sync_fetch_and_and_2
  "__sync_fetch_and_and_4", // RTLIB::__sync_fetch_and_and_4
  "__sync_fetch_and_and_8", // RTLIB::__sync_fetch_and_and_8
  "__sync_fetch_and_and_16", // RTLIB::__sync_fetch_and_and_16
  "__sync_fetch_and_max_1", // RTLIB::__sync_fetch_and_max_1
  "__sync_fetch_and_max_2", // RTLIB::__sync_fetch_and_max_2
  "__sync_fetch_and_max_4", // RTLIB::__sync_fetch_and_max_4
  "__sync_fetch_and_max_8", // RTLIB::__sync_fetch_and_max_8
  "__sync_fetch_and_max_16", // RTLIB::__sync_fetch_and_max_16
  "__sync_fetch_and_min_1", // RTLIB::__sync_fetch_and_min_1
  "__sync_fetch_and_min_2", // RTLIB::__sync_fetch_and_min_2
  "__sync_fetch_and_min_4", // RTLIB::__sync_fetch_and_min_4
  "__sync_fetch_and_min_8", // RTLIB::__sync_fetch_and_min_8
  "__sync_fetch_and_min_16", // RTLIB::__sync_fetch_and_min_16
  "__sync_fetch_and_nand_1", // RTLIB::__sync_fetch_and_nand_1
  "__sync_fetch_and_nand_2", // RTLIB::__sync_fetch_and_nand_2
  "__sync_fetch_and_nand_4", // RTLIB::__sync_fetch_and_nand_4
  "__sync_fetch_and_nand_8", // RTLIB::__sync_fetch_and_nand_8
  "__sync_fetch_and_nand_16", // RTLIB::__sync_fetch_and_nand_16
  "__sync_fetch_and_or_1", // RTLIB::__sync_fetch_and_or_1
  "__sync_fetch_and_or_2", // RTLIB::__sync_fetch_and_or_2
  "__sync_fetch_and_or_4", // RTLIB::__sync_fetch_and_or_4
  "__sync_fetch_and_or_8", // RTLIB::__sync_fetch_and_or_8
  "__sync_fetch_and_or_16", // RTLIB::__sync_fetch_and_or_16
  "__sync_fetch_and_sub_1", // RTLIB::__sync_fetch_and_sub_1
  "__sync_fetch_and_sub_2", // RTLIB::__sync_fetch_and_sub_2
  "__sync_fetch_and_sub_4", // RTLIB::__sync_fetch_and_sub_4
  "__sync_fetch_and_sub_8", // RTLIB::__sync_fetch_and_sub_8
  "__sync_fetch_and_sub_16", // RTLIB::__sync_fetch_and_sub_16
  "__sync_fetch_and_umax_1", // RTLIB::__sync_fetch_and_umax_1
  "__sync_fetch_and_umax_2", // RTLIB::__sync_fetch_and_umax_2
  "__sync_fetch_and_umax_4", // RTLIB::__sync_fetch_and_umax_4
  "__sync_fetch_and_umax_8", // RTLIB::__sync_fetch_and_umax_8
  "__sync_fetch_and_umax_16", // RTLIB::__sync_fetch_and_umax_16
  "__sync_fetch_and_umin_1", // RTLIB::__sync_fetch_and_umin_1
  "__sync_fetch_and_umin_2", // RTLIB::__sync_fetch_and_umin_2
  "__sync_fetch_and_umin_4", // RTLIB::__sync_fetch_and_umin_4
  "__sync_fetch_and_umin_8", // RTLIB::__sync_fetch_and_umin_8
  "__sync_fetch_and_umin_16", // RTLIB::__sync_fetch_and_umin_16
  "__sync_fetch_and_xor_1", // RTLIB::__sync_fetch_and_xor_1
  "__sync_fetch_and_xor_2", // RTLIB::__sync_fetch_and_xor_2
  "__sync_fetch_and_xor_4", // RTLIB::__sync_fetch_and_xor_4
  "__sync_fetch_and_xor_8", // RTLIB::__sync_fetch_and_xor_8
  "__sync_fetch_and_xor_16", // RTLIB::__sync_fetch_and_xor_16
  "__sync_lock_test_and_set_1", // RTLIB::__sync_lock_test_and_set_1
  "__sync_lock_test_and_set_2", // RTLIB::__sync_lock_test_and_set_2
  "__sync_lock_test_and_set_4", // RTLIB::__sync_lock_test_and_set_4
  "__sync_lock_test_and_set_8", // RTLIB::__sync_lock_test_and_set_8
  "__sync_lock_test_and_set_16", // RTLIB::__sync_lock_test_and_set_16
  "__sync_val_compare_and_swap_1", // RTLIB::__sync_val_compare_and_swap_1
  "__sync_val_compare_and_swap_2", // RTLIB::__sync_val_compare_and_swap_2
  "__sync_val_compare_and_swap_4", // RTLIB::__sync_val_compare_and_swap_4
  "__sync_val_compare_and_swap_8", // RTLIB::__sync_val_compare_and_swap_8
  "__sync_val_compare_and_swap_16", // RTLIB::__sync_val_compare_and_swap_16
  "__truncdfbf2", // RTLIB::__truncdfbf2
  "__truncdfhf2", // RTLIB::__truncdfhf2
  "__truncdfsf2", // RTLIB::__truncdfsf2
  "__truncdfsf2vfp", // RTLIB::__truncdfsf2vfp
  "__trunckfdf2", // RTLIB::__trunckfdf2
  "__trunckfhf2", // RTLIB::__trunckfhf2
  "__trunckfsf2", // RTLIB::__trunckfsf2
  "__truncsfbf2", // RTLIB::__truncsfbf2
  "__truncsfhf2", // RTLIB::__truncsfhf2
  "__trunctfbf2", // RTLIB::__trunctfbf2
  "__trunctfdf2", // RTLIB::__trunctfdf2
  "__trunctfhf2", // RTLIB::__trunctfhf2_f128
  "__trunctfhf2", // RTLIB::__trunctfhf2_ppcf128
  "__trunctfkf2", // RTLIB::__trunctfkf2
  "__trunctfsf2", // RTLIB::__trunctfsf2
  "__trunctfxf2", // RTLIB::__trunctfxf2
  "__truncxfbf2", // RTLIB::__truncxfbf2
  "__truncxfdf2", // RTLIB::__truncxfdf2
  "__truncxfhf2", // RTLIB::__truncxfhf2
  "__truncxfsf2", // RTLIB::__truncxfsf2
  "__u64tod", // RTLIB::__u64tod
  "__u64tos", // RTLIB::__u64tos
  "__udivdi3", // RTLIB::__udivdi3
  "__udivhi3", // RTLIB::__udivhi3
  "__udivmodhi4", // RTLIB::__udivmodhi4
  "__udivmodqi4", // RTLIB::__udivmodqi4
  "__udivmodsi4", // RTLIB::__udivmodsi4
  "__udivqi3", // RTLIB::__udivqi3
  "__udivsi3", // RTLIB::__udivsi3
  "__udivti3", // RTLIB::__udivti3
  "__umoddi3", // RTLIB::__umoddi3
  "__umodhi3", // RTLIB::__umodhi3
  "__umodqi3", // RTLIB::__umodqi3
  "__umodsi3", // RTLIB::__umodsi3
  "__umodti3", // RTLIB::__umodti3
  "__unorddf2", // RTLIB::__unorddf2
  "__unorddf2vfp", // RTLIB::__unorddf2vfp
  "__unordkf2", // RTLIB::__unordkf2
  "__unordsf2", // RTLIB::__unordsf2
  "__unordsf2vfp", // RTLIB::__unordsf2vfp
  "__unordtf2", // RTLIB::__unordtf2
  "_alldiv", // RTLIB::_alldiv
  "_allmul", // RTLIB::_allmul
  "_allrem", // RTLIB::_allrem
  "_aulldiv", // RTLIB::_aulldiv
  "_aullrem", // RTLIB::_aullrem
  "acos", // RTLIB::acos
  "acosl", // RTLIB::acos_f80
  "acosl", // RTLIB::acos_f128
  "acosl", // RTLIB::acos_ppcf128
  "acosf", // RTLIB::acosf
  "acosf128", // RTLIB::acosf128
  "#_Unwind_Resume", // RTLIB::arm64ec__Unwind_Resume
  "#__aarch64_cas1_acq", // RTLIB::arm64ec___aarch64_cas1_acq
  "#__aarch64_cas1_acq_rel", // RTLIB::arm64ec___aarch64_cas1_acq_rel
  "#__aarch64_cas1_rel", // RTLIB::arm64ec___aarch64_cas1_rel
  "#__aarch64_cas1_relax", // RTLIB::arm64ec___aarch64_cas1_relax
  "#__aarch64_cas2_acq", // RTLIB::arm64ec___aarch64_cas2_acq
  "#__aarch64_cas2_acq_rel", // RTLIB::arm64ec___aarch64_cas2_acq_rel
  "#__aarch64_cas2_rel", // RTLIB::arm64ec___aarch64_cas2_rel
  "#__aarch64_cas2_relax", // RTLIB::arm64ec___aarch64_cas2_relax
  "#__aarch64_cas4_acq", // RTLIB::arm64ec___aarch64_cas4_acq
  "#__aarch64_cas4_acq_rel", // RTLIB::arm64ec___aarch64_cas4_acq_rel
  "#__aarch64_cas4_rel", // RTLIB::arm64ec___aarch64_cas4_rel
  "#__aarch64_cas4_relax", // RTLIB::arm64ec___aarch64_cas4_relax
  "#__aarch64_cas8_acq", // RTLIB::arm64ec___aarch64_cas8_acq
  "#__aarch64_cas8_acq_rel", // RTLIB::arm64ec___aarch64_cas8_acq_rel
  "#__aarch64_cas8_rel", // RTLIB::arm64ec___aarch64_cas8_rel
  "#__aarch64_cas8_relax", // RTLIB::arm64ec___aarch64_cas8_relax
  "#__aarch64_cas16_acq", // RTLIB::arm64ec___aarch64_cas16_acq
  "#__aarch64_cas16_acq_rel", // RTLIB::arm64ec___aarch64_cas16_acq_rel
  "#__aarch64_cas16_rel", // RTLIB::arm64ec___aarch64_cas16_rel
  "#__aarch64_cas16_relax", // RTLIB::arm64ec___aarch64_cas16_relax
  "#__aarch64_ldadd1_acq", // RTLIB::arm64ec___aarch64_ldadd1_acq
  "#__aarch64_ldadd1_acq_rel", // RTLIB::arm64ec___aarch64_ldadd1_acq_rel
  "#__aarch64_ldadd1_rel", // RTLIB::arm64ec___aarch64_ldadd1_rel
  "#__aarch64_ldadd1_relax", // RTLIB::arm64ec___aarch64_ldadd1_relax
  "#__aarch64_ldadd2_acq", // RTLIB::arm64ec___aarch64_ldadd2_acq
  "#__aarch64_ldadd2_acq_rel", // RTLIB::arm64ec___aarch64_ldadd2_acq_rel
  "#__aarch64_ldadd2_rel", // RTLIB::arm64ec___aarch64_ldadd2_rel
  "#__aarch64_ldadd2_relax", // RTLIB::arm64ec___aarch64_ldadd2_relax
  "#__aarch64_ldadd4_acq", // RTLIB::arm64ec___aarch64_ldadd4_acq
  "#__aarch64_ldadd4_acq_rel", // RTLIB::arm64ec___aarch64_ldadd4_acq_rel
  "#__aarch64_ldadd4_rel", // RTLIB::arm64ec___aarch64_ldadd4_rel
  "#__aarch64_ldadd4_relax", // RTLIB::arm64ec___aarch64_ldadd4_relax
  "#__aarch64_ldadd8_acq", // RTLIB::arm64ec___aarch64_ldadd8_acq
  "#__aarch64_ldadd8_acq_rel", // RTLIB::arm64ec___aarch64_ldadd8_acq_rel
  "#__aarch64_ldadd8_rel", // RTLIB::arm64ec___aarch64_ldadd8_rel
  "#__aarch64_ldadd8_relax", // RTLIB::arm64ec___aarch64_ldadd8_relax
  "#__aarch64_ldclr1_acq", // RTLIB::arm64ec___aarch64_ldclr1_acq
  "#__aarch64_ldclr1_acq_rel", // RTLIB::arm64ec___aarch64_ldclr1_acq_rel
  "#__aarch64_ldclr1_rel", // RTLIB::arm64ec___aarch64_ldclr1_rel
  "#__aarch64_ldclr1_relax", // RTLIB::arm64ec___aarch64_ldclr1_relax
  "#__aarch64_ldclr2_acq", // RTLIB::arm64ec___aarch64_ldclr2_acq
  "#__aarch64_ldclr2_acq_rel", // RTLIB::arm64ec___aarch64_ldclr2_acq_rel
  "#__aarch64_ldclr2_rel", // RTLIB::arm64ec___aarch64_ldclr2_rel
  "#__aarch64_ldclr2_relax", // RTLIB::arm64ec___aarch64_ldclr2_relax
  "#__aarch64_ldclr4_acq", // RTLIB::arm64ec___aarch64_ldclr4_acq
  "#__aarch64_ldclr4_acq_rel", // RTLIB::arm64ec___aarch64_ldclr4_acq_rel
  "#__aarch64_ldclr4_rel", // RTLIB::arm64ec___aarch64_ldclr4_rel
  "#__aarch64_ldclr4_relax", // RTLIB::arm64ec___aarch64_ldclr4_relax
  "#__aarch64_ldclr8_acq", // RTLIB::arm64ec___aarch64_ldclr8_acq
  "#__aarch64_ldclr8_acq_rel", // RTLIB::arm64ec___aarch64_ldclr8_acq_rel
  "#__aarch64_ldclr8_rel", // RTLIB::arm64ec___aarch64_ldclr8_rel
  "#__aarch64_ldclr8_relax", // RTLIB::arm64ec___aarch64_ldclr8_relax
  "#__aarch64_ldeor1_acq", // RTLIB::arm64ec___aarch64_ldeor1_acq
  "#__aarch64_ldeor1_acq_rel", // RTLIB::arm64ec___aarch64_ldeor1_acq_rel
  "#__aarch64_ldeor1_rel", // RTLIB::arm64ec___aarch64_ldeor1_rel
  "#__aarch64_ldeor1_relax", // RTLIB::arm64ec___aarch64_ldeor1_relax
  "#__aarch64_ldeor2_acq", // RTLIB::arm64ec___aarch64_ldeor2_acq
  "#__aarch64_ldeor2_acq_rel", // RTLIB::arm64ec___aarch64_ldeor2_acq_rel
  "#__aarch64_ldeor2_rel", // RTLIB::arm64ec___aarch64_ldeor2_rel
  "#__aarch64_ldeor2_relax", // RTLIB::arm64ec___aarch64_ldeor2_relax
  "#__aarch64_ldeor4_acq", // RTLIB::arm64ec___aarch64_ldeor4_acq
  "#__aarch64_ldeor4_acq_rel", // RTLIB::arm64ec___aarch64_ldeor4_acq_rel
  "#__aarch64_ldeor4_rel", // RTLIB::arm64ec___aarch64_ldeor4_rel
  "#__aarch64_ldeor4_relax", // RTLIB::arm64ec___aarch64_ldeor4_relax
  "#__aarch64_ldeor8_acq", // RTLIB::arm64ec___aarch64_ldeor8_acq
  "#__aarch64_ldeor8_acq_rel", // RTLIB::arm64ec___aarch64_ldeor8_acq_rel
  "#__aarch64_ldeor8_rel", // RTLIB::arm64ec___aarch64_ldeor8_rel
  "#__aarch64_ldeor8_relax", // RTLIB::arm64ec___aarch64_ldeor8_relax
  "#__aarch64_ldset1_acq", // RTLIB::arm64ec___aarch64_ldset1_acq
  "#__aarch64_ldset1_acq_rel", // RTLIB::arm64ec___aarch64_ldset1_acq_rel
  "#__aarch64_ldset1_rel", // RTLIB::arm64ec___aarch64_ldset1_rel
  "#__aarch64_ldset1_relax", // RTLIB::arm64ec___aarch64_ldset1_relax
  "#__aarch64_ldset2_acq", // RTLIB::arm64ec___aarch64_ldset2_acq
  "#__aarch64_ldset2_acq_rel", // RTLIB::arm64ec___aarch64_ldset2_acq_rel
  "#__aarch64_ldset2_rel", // RTLIB::arm64ec___aarch64_ldset2_rel
  "#__aarch64_ldset2_relax", // RTLIB::arm64ec___aarch64_ldset2_relax
  "#__aarch64_ldset4_acq", // RTLIB::arm64ec___aarch64_ldset4_acq
  "#__aarch64_ldset4_acq_rel", // RTLIB::arm64ec___aarch64_ldset4_acq_rel
  "#__aarch64_ldset4_rel", // RTLIB::arm64ec___aarch64_ldset4_rel
  "#__aarch64_ldset4_relax", // RTLIB::arm64ec___aarch64_ldset4_relax
  "#__aarch64_ldset8_acq", // RTLIB::arm64ec___aarch64_ldset8_acq
  "#__aarch64_ldset8_acq_rel", // RTLIB::arm64ec___aarch64_ldset8_acq_rel
  "#__aarch64_ldset8_rel", // RTLIB::arm64ec___aarch64_ldset8_rel
  "#__aarch64_ldset8_relax", // RTLIB::arm64ec___aarch64_ldset8_relax
  "#__aarch64_swp1_acq", // RTLIB::arm64ec___aarch64_swp1_acq
  "#__aarch64_swp1_acq_rel", // RTLIB::arm64ec___aarch64_swp1_acq_rel
  "#__aarch64_swp1_rel", // RTLIB::arm64ec___aarch64_swp1_rel
  "#__aarch64_swp1_relax", // RTLIB::arm64ec___aarch64_swp1_relax
  "#__aarch64_swp2_acq", // RTLIB::arm64ec___aarch64_swp2_acq
  "#__aarch64_swp2_acq_rel", // RTLIB::arm64ec___aarch64_swp2_acq_rel
  "#__aarch64_swp2_rel", // RTLIB::arm64ec___aarch64_swp2_rel
  "#__aarch64_swp2_relax", // RTLIB::arm64ec___aarch64_swp2_relax
  "#__aarch64_swp4_acq", // RTLIB::arm64ec___aarch64_swp4_acq
  "#__aarch64_swp4_acq_rel", // RTLIB::arm64ec___aarch64_swp4_acq_rel
  "#__aarch64_swp4_rel", // RTLIB::arm64ec___aarch64_swp4_rel
  "#__aarch64_swp4_relax", // RTLIB::arm64ec___aarch64_swp4_relax
  "#__aarch64_swp8_acq", // RTLIB::arm64ec___aarch64_swp8_acq
  "#__aarch64_swp8_acq_rel", // RTLIB::arm64ec___aarch64_swp8_acq_rel
  "#__aarch64_swp8_rel", // RTLIB::arm64ec___aarch64_swp8_rel
  "#__aarch64_swp8_relax", // RTLIB::arm64ec___aarch64_swp8_relax
  "#__adddf3", // RTLIB::arm64ec___adddf3
  "#__addsf3", // RTLIB::arm64ec___addsf3
  "#__addtf3", // RTLIB::arm64ec___addtf3
  "#__arm_sc_memcpy", // RTLIB::arm64ec___arm_sc_memcpy
  "#__arm_sc_memmove", // RTLIB::arm64ec___arm_sc_memmove
  "#__arm_sc_memset", // RTLIB::arm64ec___arm_sc_memset
  "#__ashldi3", // RTLIB::arm64ec___ashldi3
  "#__ashlhi3", // RTLIB::arm64ec___ashlhi3
  "#__ashlsi3", // RTLIB::arm64ec___ashlsi3
  "#__ashlti3", // RTLIB::arm64ec___ashlti3
  "#__ashrdi3", // RTLIB::arm64ec___ashrdi3
  "#__ashrhi3", // RTLIB::arm64ec___ashrhi3
  "#__ashrsi3", // RTLIB::arm64ec___ashrsi3
  "#__ashrti3", // RTLIB::arm64ec___ashrti3
  "#__atomic_compare_exchange", // RTLIB::arm64ec___atomic_compare_exchange
  "#__atomic_compare_exchange_1", // RTLIB::arm64ec___atomic_compare_exchange_1
  "#__atomic_compare_exchange_2", // RTLIB::arm64ec___atomic_compare_exchange_2
  "#__atomic_compare_exchange_4", // RTLIB::arm64ec___atomic_compare_exchange_4
  "#__atomic_compare_exchange_8", // RTLIB::arm64ec___atomic_compare_exchange_8
  "#__atomic_compare_exchange_16", // RTLIB::arm64ec___atomic_compare_exchange_16
  "#__atomic_exchange", // RTLIB::arm64ec___atomic_exchange
  "#__atomic_exchange_1", // RTLIB::arm64ec___atomic_exchange_1
  "#__atomic_exchange_2", // RTLIB::arm64ec___atomic_exchange_2
  "#__atomic_exchange_4", // RTLIB::arm64ec___atomic_exchange_4
  "#__atomic_exchange_8", // RTLIB::arm64ec___atomic_exchange_8
  "#__atomic_exchange_16", // RTLIB::arm64ec___atomic_exchange_16
  "#__atomic_fetch_add_1", // RTLIB::arm64ec___atomic_fetch_add_1
  "#__atomic_fetch_add_2", // RTLIB::arm64ec___atomic_fetch_add_2
  "#__atomic_fetch_add_4", // RTLIB::arm64ec___atomic_fetch_add_4
  "#__atomic_fetch_add_8", // RTLIB::arm64ec___atomic_fetch_add_8
  "#__atomic_fetch_add_16", // RTLIB::arm64ec___atomic_fetch_add_16
  "#__atomic_fetch_and_1", // RTLIB::arm64ec___atomic_fetch_and_1
  "#__atomic_fetch_and_2", // RTLIB::arm64ec___atomic_fetch_and_2
  "#__atomic_fetch_and_4", // RTLIB::arm64ec___atomic_fetch_and_4
  "#__atomic_fetch_and_8", // RTLIB::arm64ec___atomic_fetch_and_8
  "#__atomic_fetch_and_16", // RTLIB::arm64ec___atomic_fetch_and_16
  "#__atomic_fetch_nand_1", // RTLIB::arm64ec___atomic_fetch_nand_1
  "#__atomic_fetch_nand_2", // RTLIB::arm64ec___atomic_fetch_nand_2
  "#__atomic_fetch_nand_4", // RTLIB::arm64ec___atomic_fetch_nand_4
  "#__atomic_fetch_nand_8", // RTLIB::arm64ec___atomic_fetch_nand_8
  "#__atomic_fetch_nand_16", // RTLIB::arm64ec___atomic_fetch_nand_16
  "#__atomic_fetch_or_1", // RTLIB::arm64ec___atomic_fetch_or_1
  "#__atomic_fetch_or_2", // RTLIB::arm64ec___atomic_fetch_or_2
  "#__atomic_fetch_or_4", // RTLIB::arm64ec___atomic_fetch_or_4
  "#__atomic_fetch_or_8", // RTLIB::arm64ec___atomic_fetch_or_8
  "#__atomic_fetch_or_16", // RTLIB::arm64ec___atomic_fetch_or_16
  "#__atomic_fetch_sub_1", // RTLIB::arm64ec___atomic_fetch_sub_1
  "#__atomic_fetch_sub_2", // RTLIB::arm64ec___atomic_fetch_sub_2
  "#__atomic_fetch_sub_4", // RTLIB::arm64ec___atomic_fetch_sub_4
  "#__atomic_fetch_sub_8", // RTLIB::arm64ec___atomic_fetch_sub_8
  "#__atomic_fetch_sub_16", // RTLIB::arm64ec___atomic_fetch_sub_16
  "#__atomic_fetch_xor_1", // RTLIB::arm64ec___atomic_fetch_xor_1
  "#__atomic_fetch_xor_2", // RTLIB::arm64ec___atomic_fetch_xor_2
  "#__atomic_fetch_xor_4", // RTLIB::arm64ec___atomic_fetch_xor_4
  "#__atomic_fetch_xor_8", // RTLIB::arm64ec___atomic_fetch_xor_8
  "#__atomic_fetch_xor_16", // RTLIB::arm64ec___atomic_fetch_xor_16
  "#__atomic_load", // RTLIB::arm64ec___atomic_load
  "#__atomic_load_1", // RTLIB::arm64ec___atomic_load_1
  "#__atomic_load_2", // RTLIB::arm64ec___atomic_load_2
  "#__atomic_load_4", // RTLIB::arm64ec___atomic_load_4
  "#__atomic_load_8", // RTLIB::arm64ec___atomic_load_8
  "#__atomic_load_16", // RTLIB::arm64ec___atomic_load_16
  "#__atomic_store", // RTLIB::arm64ec___atomic_store
  "#__atomic_store_1", // RTLIB::arm64ec___atomic_store_1
  "#__atomic_store_2", // RTLIB::arm64ec___atomic_store_2
  "#__atomic_store_4", // RTLIB::arm64ec___atomic_store_4
  "#__atomic_store_8", // RTLIB::arm64ec___atomic_store_8
  "#__atomic_store_16", // RTLIB::arm64ec___atomic_store_16
  "#__clear_cache", // RTLIB::arm64ec___clear_cache
  "#__clzdi2", // RTLIB::arm64ec___clzdi2
  "#__clzsi2", // RTLIB::arm64ec___clzsi2
  "#__clzti2", // RTLIB::arm64ec___clzti2
  "#__cxa_end_cleanup", // RTLIB::arm64ec___cxa_end_cleanup
  "#__divdf3", // RTLIB::arm64ec___divdf3
  "#__divdi3", // RTLIB::arm64ec___divdi3
  "#__divhi3", // RTLIB::arm64ec___divhi3
  "#__divqi3", // RTLIB::arm64ec___divqi3
  "#__divsf3", // RTLIB::arm64ec___divsf3
  "#__divsi3", // RTLIB::arm64ec___divsi3
  "#__divtf3", // RTLIB::arm64ec___divtf3
  "#__divti3", // RTLIB::arm64ec___divti3
  "#__eqdf2", // RTLIB::arm64ec___eqdf2
  "#__eqsf2", // RTLIB::arm64ec___eqsf2
  "#__eqtf2", // RTLIB::arm64ec___eqtf2
  "#__exp2_finite", // RTLIB::arm64ec___exp2_finite
  "#__exp2f_finite", // RTLIB::arm64ec___exp2f_finite
  "#__exp2l_finite", // RTLIB::arm64ec___exp2l_finite_f128
  "#__exp_finite", // RTLIB::arm64ec___exp_finite
  "#__expf_finite", // RTLIB::arm64ec___expf_finite
  "#__expl_finite", // RTLIB::arm64ec___expl_finite_f128
  "#__extendbfsf2", // RTLIB::arm64ec___extendbfsf2
  "#__extenddftf2", // RTLIB::arm64ec___extenddftf2
  "#__extendhfdf2", // RTLIB::arm64ec___extendhfdf2
  "#__extendhfsf2", // RTLIB::arm64ec___extendhfsf2
  "#__extendhftf2", // RTLIB::arm64ec___extendhftf2
  "#__extendsfdf2", // RTLIB::arm64ec___extendsfdf2
  "#__extendsftf2", // RTLIB::arm64ec___extendsftf2
  "#__fixdfdi", // RTLIB::arm64ec___fixdfdi
  "#__fixdfsi", // RTLIB::arm64ec___fixdfsi
  "#__fixdfti", // RTLIB::arm64ec___fixdfti
  "#__fixhfdi", // RTLIB::arm64ec___fixhfdi
  "#__fixhfsi", // RTLIB::arm64ec___fixhfsi
  "#__fixhfti", // RTLIB::arm64ec___fixhfti
  "#__fixsfdi", // RTLIB::arm64ec___fixsfdi
  "#__fixsfsi", // RTLIB::arm64ec___fixsfsi
  "#__fixsfti", // RTLIB::arm64ec___fixsfti
  "#__fixtfdi", // RTLIB::arm64ec___fixtfdi_f128
  "#__fixtfsi", // RTLIB::arm64ec___fixtfsi
  "#__fixtfti", // RTLIB::arm64ec___fixtfti_f128
  "#__fixunsdfdi", // RTLIB::arm64ec___fixunsdfdi
  "#__fixunsdfsi", // RTLIB::arm64ec___fixunsdfsi
  "#__fixunsdfti", // RTLIB::arm64ec___fixunsdfti
  "#__fixunshfdi", // RTLIB::arm64ec___fixunshfdi
  "#__fixunshfsi", // RTLIB::arm64ec___fixunshfsi
  "#__fixunshfti", // RTLIB::arm64ec___fixunshfti
  "#__fixunssfdi", // RTLIB::arm64ec___fixunssfdi
  "#__fixunssfsi", // RTLIB::arm64ec___fixunssfsi
  "#__fixunssfti", // RTLIB::arm64ec___fixunssfti
  "#__fixunstfdi", // RTLIB::arm64ec___fixunstfdi_f128
  "#__fixunstfsi", // RTLIB::arm64ec___fixunstfsi_f128
  "#__fixunstfti", // RTLIB::arm64ec___fixunstfti_f128
  "#__floatdibf", // RTLIB::arm64ec___floatdibf
  "#__floatdidf", // RTLIB::arm64ec___floatdidf
  "#__floatdihf", // RTLIB::arm64ec___floatdihf
  "#__floatdisf", // RTLIB::arm64ec___floatdisf
  "#__floatditf", // RTLIB::arm64ec___floatditf_f128
  "#__floatsidf", // RTLIB::arm64ec___floatsidf
  "#__floatsihf", // RTLIB::arm64ec___floatsihf
  "#__floatsisf", // RTLIB::arm64ec___floatsisf
  "#__floatsitf", // RTLIB::arm64ec___floatsitf
  "#__floattidf", // RTLIB::arm64ec___floattidf
  "#__floattihf", // RTLIB::arm64ec___floattihf
  "#__floattisf", // RTLIB::arm64ec___floattisf
  "#__floattitf", // RTLIB::arm64ec___floattitf_f128
  "#__floatundibf", // RTLIB::arm64ec___floatundibf
  "#__floatundidf", // RTLIB::arm64ec___floatundidf
  "#__floatundihf", // RTLIB::arm64ec___floatundihf
  "#__floatundisf", // RTLIB::arm64ec___floatundisf
  "#__floatunditf", // RTLIB::arm64ec___floatunditf_f128
  "#__floatunsidf", // RTLIB::arm64ec___floatunsidf
  "#__floatunsihf", // RTLIB::arm64ec___floatunsihf
  "#__floatunsisf", // RTLIB::arm64ec___floatunsisf
  "#__floatunsitf", // RTLIB::arm64ec___floatunsitf
  "#__floatuntidf", // RTLIB::arm64ec___floatuntidf
  "#__floatuntihf", // RTLIB::arm64ec___floatuntihf
  "#__floatuntisf", // RTLIB::arm64ec___floatuntisf
  "#__floatuntitf", // RTLIB::arm64ec___floatuntitf_f128
  "#__gedf2", // RTLIB::arm64ec___gedf2
  "#__gesf2", // RTLIB::arm64ec___gesf2
  "#__getf2", // RTLIB::arm64ec___getf2
  "#__gtdf2", // RTLIB::arm64ec___gtdf2
  "#__gtsf2", // RTLIB::arm64ec___gtsf2
  "#__gttf2", // RTLIB::arm64ec___gttf2
  "#__ledf2", // RTLIB::arm64ec___ledf2
  "#__lesf2", // RTLIB::arm64ec___lesf2
  "#__letf2", // RTLIB::arm64ec___letf2
  "#__llvm_deoptimize", // RTLIB::arm64ec___llvm_deoptimize
  "#__llvm_memcpy_element_unordered_atomic_1", // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_1
  "#__llvm_memcpy_element_unordered_atomic_2", // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_2
  "#__llvm_memcpy_element_unordered_atomic_4", // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_4
  "#__llvm_memcpy_element_unordered_atomic_8", // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_8
  "#__llvm_memcpy_element_unordered_atomic_16", // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_16
  "#__llvm_memmove_element_unordered_atomic_1", // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_1
  "#__llvm_memmove_element_unordered_atomic_2", // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_2
  "#__llvm_memmove_element_unordered_atomic_4", // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_4
  "#__llvm_memmove_element_unordered_atomic_8", // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_8
  "#__llvm_memmove_element_unordered_atomic_16", // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_16
  "#__llvm_memset_element_unordered_atomic_1", // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_1
  "#__llvm_memset_element_unordered_atomic_2", // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_2
  "#__llvm_memset_element_unordered_atomic_4", // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_4
  "#__llvm_memset_element_unordered_atomic_8", // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_8
  "#__llvm_memset_element_unordered_atomic_16", // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_16
  "#__log2_finite", // RTLIB::arm64ec___log2_finite
  "#__log2f_finite", // RTLIB::arm64ec___log2f_finite
  "#__log2l_finite", // RTLIB::arm64ec___log2l_finite_f128
  "#__log10_finite", // RTLIB::arm64ec___log10_finite
  "#__log10f_finite", // RTLIB::arm64ec___log10f_finite
  "#__log10l_finite", // RTLIB::arm64ec___log10l_finite_f128
  "#__log_finite", // RTLIB::arm64ec___log_finite
  "#__logf_finite", // RTLIB::arm64ec___logf_finite
  "#__logl_finite", // RTLIB::arm64ec___logl_finite_f128
  "#__lshrdi3", // RTLIB::arm64ec___lshrdi3
  "#__lshrhi3", // RTLIB::arm64ec___lshrhi3
  "#__lshrsi3", // RTLIB::arm64ec___lshrsi3
  "#__lshrti3", // RTLIB::arm64ec___lshrti3
  "#__ltdf2", // RTLIB::arm64ec___ltdf2
  "#__ltsf2", // RTLIB::arm64ec___ltsf2
  "#__lttf2", // RTLIB::arm64ec___lttf2
  "#__moddi3", // RTLIB::arm64ec___moddi3
  "#__modhi3", // RTLIB::arm64ec___modhi3
  "#__modqi3", // RTLIB::arm64ec___modqi3
  "#__modsi3", // RTLIB::arm64ec___modsi3
  "#__modti3", // RTLIB::arm64ec___modti3
  "#__muldf3", // RTLIB::arm64ec___muldf3
  "#__muldi3", // RTLIB::arm64ec___muldi3
  "#__mulhi3", // RTLIB::arm64ec___mulhi3
  "#__mulosi4", // RTLIB::arm64ec___mulosi4
  "#__mulqi3", // RTLIB::arm64ec___mulqi3
  "#__mulsf3", // RTLIB::arm64ec___mulsf3
  "#__mulsi3", // RTLIB::arm64ec___mulsi3
  "#__multf3", // RTLIB::arm64ec___multf3
  "#__multi3", // RTLIB::arm64ec___multi3
  "#__nedf2", // RTLIB::arm64ec___nedf2
  "#__negdi2", // RTLIB::arm64ec___negdi2
  "#__negsi2", // RTLIB::arm64ec___negsi2
  "#__nesf2", // RTLIB::arm64ec___nesf2
  "#__netf2", // RTLIB::arm64ec___netf2
  "#__popcountdi2", // RTLIB::arm64ec___popcountdi2
  "#__popcountsi2", // RTLIB::arm64ec___popcountsi2
  "#__popcountti2", // RTLIB::arm64ec___popcountti2
  "#__pow_finite", // RTLIB::arm64ec___pow_finite
  "#__powf_finite", // RTLIB::arm64ec___powf_finite
  "#__powitf2", // RTLIB::arm64ec___powitf2_f128
  "#__powl_finite", // RTLIB::arm64ec___powl_finite_f128
  "#__safestack_pointer_address", // RTLIB::arm64ec___safestack_pointer_address
  "#__stack_chk_fail", // RTLIB::arm64ec___stack_chk_fail
  "#__subdf3", // RTLIB::arm64ec___subdf3
  "#__subsf3", // RTLIB::arm64ec___subsf3
  "#__subtf3", // RTLIB::arm64ec___subtf3
  "#__sync_fetch_and_add_1", // RTLIB::arm64ec___sync_fetch_and_add_1
  "#__sync_fetch_and_add_2", // RTLIB::arm64ec___sync_fetch_and_add_2
  "#__sync_fetch_and_add_4", // RTLIB::arm64ec___sync_fetch_and_add_4
  "#__sync_fetch_and_add_8", // RTLIB::arm64ec___sync_fetch_and_add_8
  "#__sync_fetch_and_add_16", // RTLIB::arm64ec___sync_fetch_and_add_16
  "#__sync_fetch_and_and_1", // RTLIB::arm64ec___sync_fetch_and_and_1
  "#__sync_fetch_and_and_2", // RTLIB::arm64ec___sync_fetch_and_and_2
  "#__sync_fetch_and_and_4", // RTLIB::arm64ec___sync_fetch_and_and_4
  "#__sync_fetch_and_and_8", // RTLIB::arm64ec___sync_fetch_and_and_8
  "#__sync_fetch_and_and_16", // RTLIB::arm64ec___sync_fetch_and_and_16
  "#__sync_fetch_and_max_1", // RTLIB::arm64ec___sync_fetch_and_max_1
  "#__sync_fetch_and_max_2", // RTLIB::arm64ec___sync_fetch_and_max_2
  "#__sync_fetch_and_max_4", // RTLIB::arm64ec___sync_fetch_and_max_4
  "#__sync_fetch_and_max_8", // RTLIB::arm64ec___sync_fetch_and_max_8
  "#__sync_fetch_and_max_16", // RTLIB::arm64ec___sync_fetch_and_max_16
  "#__sync_fetch_and_min_1", // RTLIB::arm64ec___sync_fetch_and_min_1
  "#__sync_fetch_and_min_2", // RTLIB::arm64ec___sync_fetch_and_min_2
  "#__sync_fetch_and_min_4", // RTLIB::arm64ec___sync_fetch_and_min_4
  "#__sync_fetch_and_min_8", // RTLIB::arm64ec___sync_fetch_and_min_8
  "#__sync_fetch_and_min_16", // RTLIB::arm64ec___sync_fetch_and_min_16
  "#__sync_fetch_and_nand_1", // RTLIB::arm64ec___sync_fetch_and_nand_1
  "#__sync_fetch_and_nand_2", // RTLIB::arm64ec___sync_fetch_and_nand_2
  "#__sync_fetch_and_nand_4", // RTLIB::arm64ec___sync_fetch_and_nand_4
  "#__sync_fetch_and_nand_8", // RTLIB::arm64ec___sync_fetch_and_nand_8
  "#__sync_fetch_and_nand_16", // RTLIB::arm64ec___sync_fetch_and_nand_16
  "#__sync_fetch_and_or_1", // RTLIB::arm64ec___sync_fetch_and_or_1
  "#__sync_fetch_and_or_2", // RTLIB::arm64ec___sync_fetch_and_or_2
  "#__sync_fetch_and_or_4", // RTLIB::arm64ec___sync_fetch_and_or_4
  "#__sync_fetch_and_or_8", // RTLIB::arm64ec___sync_fetch_and_or_8
  "#__sync_fetch_and_or_16", // RTLIB::arm64ec___sync_fetch_and_or_16
  "#__sync_fetch_and_sub_1", // RTLIB::arm64ec___sync_fetch_and_sub_1
  "#__sync_fetch_and_sub_2", // RTLIB::arm64ec___sync_fetch_and_sub_2
  "#__sync_fetch_and_sub_4", // RTLIB::arm64ec___sync_fetch_and_sub_4
  "#__sync_fetch_and_sub_8", // RTLIB::arm64ec___sync_fetch_and_sub_8
  "#__sync_fetch_and_sub_16", // RTLIB::arm64ec___sync_fetch_and_sub_16
  "#__sync_fetch_and_umax_1", // RTLIB::arm64ec___sync_fetch_and_umax_1
  "#__sync_fetch_and_umax_2", // RTLIB::arm64ec___sync_fetch_and_umax_2
  "#__sync_fetch_and_umax_4", // RTLIB::arm64ec___sync_fetch_and_umax_4
  "#__sync_fetch_and_umax_8", // RTLIB::arm64ec___sync_fetch_and_umax_8
  "#__sync_fetch_and_umax_16", // RTLIB::arm64ec___sync_fetch_and_umax_16
  "#__sync_fetch_and_umin_1", // RTLIB::arm64ec___sync_fetch_and_umin_1
  "#__sync_fetch_and_umin_2", // RTLIB::arm64ec___sync_fetch_and_umin_2
  "#__sync_fetch_and_umin_4", // RTLIB::arm64ec___sync_fetch_and_umin_4
  "#__sync_fetch_and_umin_8", // RTLIB::arm64ec___sync_fetch_and_umin_8
  "#__sync_fetch_and_umin_16", // RTLIB::arm64ec___sync_fetch_and_umin_16
  "#__sync_fetch_and_xor_1", // RTLIB::arm64ec___sync_fetch_and_xor_1
  "#__sync_fetch_and_xor_2", // RTLIB::arm64ec___sync_fetch_and_xor_2
  "#__sync_fetch_and_xor_4", // RTLIB::arm64ec___sync_fetch_and_xor_4
  "#__sync_fetch_and_xor_8", // RTLIB::arm64ec___sync_fetch_and_xor_8
  "#__sync_fetch_and_xor_16", // RTLIB::arm64ec___sync_fetch_and_xor_16
  "#__sync_lock_test_and_set_1", // RTLIB::arm64ec___sync_lock_test_and_set_1
  "#__sync_lock_test_and_set_2", // RTLIB::arm64ec___sync_lock_test_and_set_2
  "#__sync_lock_test_and_set_4", // RTLIB::arm64ec___sync_lock_test_and_set_4
  "#__sync_lock_test_and_set_8", // RTLIB::arm64ec___sync_lock_test_and_set_8
  "#__sync_lock_test_and_set_16", // RTLIB::arm64ec___sync_lock_test_and_set_16
  "#__sync_val_compare_and_swap_1", // RTLIB::arm64ec___sync_val_compare_and_swap_1
  "#__sync_val_compare_and_swap_2", // RTLIB::arm64ec___sync_val_compare_and_swap_2
  "#__sync_val_compare_and_swap_4", // RTLIB::arm64ec___sync_val_compare_and_swap_4
  "#__sync_val_compare_and_swap_8", // RTLIB::arm64ec___sync_val_compare_and_swap_8
  "#__sync_val_compare_and_swap_16", // RTLIB::arm64ec___sync_val_compare_and_swap_16
  "#__truncdfbf2", // RTLIB::arm64ec___truncdfbf2
  "#__truncdfhf2", // RTLIB::arm64ec___truncdfhf2
  "#__truncdfsf2", // RTLIB::arm64ec___truncdfsf2
  "#__truncsfbf2", // RTLIB::arm64ec___truncsfbf2
  "#__truncsfhf2", // RTLIB::arm64ec___truncsfhf2
  "#__trunctfbf2", // RTLIB::arm64ec___trunctfbf2
  "#__trunctfdf2", // RTLIB::arm64ec___trunctfdf2
  "#__trunctfhf2", // RTLIB::arm64ec___trunctfhf2_f128
  "#__trunctfsf2", // RTLIB::arm64ec___trunctfsf2
  "#__udivdi3", // RTLIB::arm64ec___udivdi3
  "#__udivhi3", // RTLIB::arm64ec___udivhi3
  "#__udivqi3", // RTLIB::arm64ec___udivqi3
  "#__udivsi3", // RTLIB::arm64ec___udivsi3
  "#__udivti3", // RTLIB::arm64ec___udivti3
  "#__umoddi3", // RTLIB::arm64ec___umoddi3
  "#__umodhi3", // RTLIB::arm64ec___umodhi3
  "#__umodqi3", // RTLIB::arm64ec___umodqi3
  "#__umodsi3", // RTLIB::arm64ec___umodsi3
  "#__umodti3", // RTLIB::arm64ec___umodti3
  "#__unorddf2", // RTLIB::arm64ec___unorddf2
  "#__unordsf2", // RTLIB::arm64ec___unordsf2
  "#__unordtf2", // RTLIB::arm64ec___unordtf2
  "#acos", // RTLIB::arm64ec_acos
  "#acosl", // RTLIB::arm64ec_acos_f128
  "#acosf", // RTLIB::arm64ec_acosf
  "#asin", // RTLIB::arm64ec_asin
  "#asinl", // RTLIB::arm64ec_asin_f128
  "#asinf", // RTLIB::arm64ec_asinf
  "#atan", // RTLIB::arm64ec_atan
  "#atan2", // RTLIB::arm64ec_atan2
  "#atan2l", // RTLIB::arm64ec_atan2_f128
  "#atan2f", // RTLIB::arm64ec_atan2f
  "#atanl", // RTLIB::arm64ec_atan_f128
  "#atanf", // RTLIB::arm64ec_atanf
  "#calloc", // RTLIB::arm64ec_calloc
  "#cbrt", // RTLIB::arm64ec_cbrt
  "#cbrtl", // RTLIB::arm64ec_cbrt_f128
  "#cbrtf", // RTLIB::arm64ec_cbrtf
  "#ceil", // RTLIB::arm64ec_ceil
  "#ceill", // RTLIB::arm64ec_ceil_f128
  "#ceilf", // RTLIB::arm64ec_ceilf
  "#copysign", // RTLIB::arm64ec_copysign
  "#copysignl", // RTLIB::arm64ec_copysign_f128
  "#copysignf", // RTLIB::arm64ec_copysignf
  "#cos", // RTLIB::arm64ec_cos
  "#cosl", // RTLIB::arm64ec_cos_f128
  "#cosf", // RTLIB::arm64ec_cosf
  "#cosh", // RTLIB::arm64ec_cosh
  "#coshl", // RTLIB::arm64ec_cosh_f128
  "#coshf", // RTLIB::arm64ec_coshf
  "#exp", // RTLIB::arm64ec_exp
  "#exp2", // RTLIB::arm64ec_exp2
  "#exp2l", // RTLIB::arm64ec_exp2_f128
  "#exp2f", // RTLIB::arm64ec_exp2f
  "#exp10", // RTLIB::arm64ec_exp10
  "#exp10f", // RTLIB::arm64ec_exp10f
  "#exp10l", // RTLIB::arm64ec_exp10l_f128
  "#expl", // RTLIB::arm64ec_exp_f128
  "#expf", // RTLIB::arm64ec_expf
  "#fegetenv", // RTLIB::arm64ec_fegetenv
  "#fegetmode", // RTLIB::arm64ec_fegetmode
  "#fesetenv", // RTLIB::arm64ec_fesetenv
  "#fesetmode", // RTLIB::arm64ec_fesetmode
  "#floor", // RTLIB::arm64ec_floor
  "#floorl", // RTLIB::arm64ec_floor_f128
  "#floorf", // RTLIB::arm64ec_floorf
  "#fma", // RTLIB::arm64ec_fma
  "#fmal", // RTLIB::arm64ec_fma_f128
  "#fmaf", // RTLIB::arm64ec_fmaf
  "#fmax", // RTLIB::arm64ec_fmax
  "#fmaxl", // RTLIB::arm64ec_fmax_f128
  "#fmaxf", // RTLIB::arm64ec_fmaxf
  "#fmaximum", // RTLIB::arm64ec_fmaximum
  "#fmaximuml", // RTLIB::arm64ec_fmaximum_f128
  "#fmaximum_num", // RTLIB::arm64ec_fmaximum_num
  "#fmaximum_numl", // RTLIB::arm64ec_fmaximum_num_f128
  "#fmaximum_numf", // RTLIB::arm64ec_fmaximum_numf
  "#fmaximumf", // RTLIB::arm64ec_fmaximumf
  "#fmin", // RTLIB::arm64ec_fmin
  "#fminl", // RTLIB::arm64ec_fmin_f128
  "#fminf", // RTLIB::arm64ec_fminf
  "#fminimum", // RTLIB::arm64ec_fminimum
  "#fminimuml", // RTLIB::arm64ec_fminimum_f128
  "#fminimum_num", // RTLIB::arm64ec_fminimum_num
  "#fminimum_numl", // RTLIB::arm64ec_fminimum_num_f128
  "#fminimum_numf", // RTLIB::arm64ec_fminimum_numf
  "#fminimumf", // RTLIB::arm64ec_fminimumf
  "#fmod", // RTLIB::arm64ec_fmod
  "#fmodf", // RTLIB::arm64ec_fmodf
  "#fmodl", // RTLIB::arm64ec_fmodl_f128
  "#frexp", // RTLIB::arm64ec_frexp
  "#ldexp", // RTLIB::arm64ec_ldexp
  "#llrint", // RTLIB::arm64ec_llrint
  "#llrintl", // RTLIB::arm64ec_llrint_f128
  "#llrintf", // RTLIB::arm64ec_llrintf
  "#llround", // RTLIB::arm64ec_llround
  "#llroundl", // RTLIB::arm64ec_llround_f128
  "#llroundf", // RTLIB::arm64ec_llroundf
  "#log", // RTLIB::arm64ec_log
  "#log2", // RTLIB::arm64ec_log2
  "#log2l", // RTLIB::arm64ec_log2_f128
  "#log2f", // RTLIB::arm64ec_log2f
  "#log10", // RTLIB::arm64ec_log10
  "#log10l", // RTLIB::arm64ec_log10_f128
  "#log10f", // RTLIB::arm64ec_log10f
  "#logl", // RTLIB::arm64ec_log_f128
  "#logf", // RTLIB::arm64ec_logf
  "#lrint", // RTLIB::arm64ec_lrint
  "#lrintl", // RTLIB::arm64ec_lrint_f128
  "#lrintf", // RTLIB::arm64ec_lrintf
  "#lround", // RTLIB::arm64ec_lround
  "#lroundl", // RTLIB::arm64ec_lround_f128
  "#lroundf", // RTLIB::arm64ec_lroundf
  "#memcpy", // RTLIB::arm64ec_memcpy
  "#memmove", // RTLIB::arm64ec_memmove
  "#memset", // RTLIB::arm64ec_memset
  "#modf", // RTLIB::arm64ec_modf
  "#modfl", // RTLIB::arm64ec_modf_f128
  "#modff", // RTLIB::arm64ec_modff
  "#nearbyint", // RTLIB::arm64ec_nearbyint
  "#nearbyintl", // RTLIB::arm64ec_nearbyint_f128
  "#nearbyintf", // RTLIB::arm64ec_nearbyintf
  "#pow", // RTLIB::arm64ec_pow
  "#powl", // RTLIB::arm64ec_pow_f128
  "#powf", // RTLIB::arm64ec_powf
  "#rint", // RTLIB::arm64ec_rint
  "#rintl", // RTLIB::arm64ec_rint_f128
  "#rintf", // RTLIB::arm64ec_rintf
  "#round", // RTLIB::arm64ec_round
  "#roundl", // RTLIB::arm64ec_round_f128
  "#roundeven", // RTLIB::arm64ec_roundeven
  "#roundevenl", // RTLIB::arm64ec_roundeven_f128
  "#roundevenf", // RTLIB::arm64ec_roundevenf
  "#roundf", // RTLIB::arm64ec_roundf
  "#sin", // RTLIB::arm64ec_sin
  "#sinl", // RTLIB::arm64ec_sin_f128
  "#sincospi", // RTLIB::arm64ec_sincospi
  "#sincospil", // RTLIB::arm64ec_sincospi_f128
  "#sincospif", // RTLIB::arm64ec_sincospif
  "#sinf", // RTLIB::arm64ec_sinf
  "#sinh", // RTLIB::arm64ec_sinh
  "#sinhl", // RTLIB::arm64ec_sinh_f128
  "#sinhf", // RTLIB::arm64ec_sinhf
  "#sqrt", // RTLIB::arm64ec_sqrt
  "#sqrtl", // RTLIB::arm64ec_sqrt_f128
  "#sqrtf", // RTLIB::arm64ec_sqrtf
  "#tan", // RTLIB::arm64ec_tan
  "#tanl", // RTLIB::arm64ec_tan_f128
  "#tanf", // RTLIB::arm64ec_tanf
  "#tanh", // RTLIB::arm64ec_tanh
  "#tanhl", // RTLIB::arm64ec_tanh_f128
  "#tanhf", // RTLIB::arm64ec_tanhf
  "#trunc", // RTLIB::arm64ec_trunc
  "#truncl", // RTLIB::arm64ec_trunc_f128
  "#truncf", // RTLIB::arm64ec_truncf
  "asin", // RTLIB::asin
  "asinl", // RTLIB::asin_f80
  "asinl", // RTLIB::asin_f128
  "asinl", // RTLIB::asin_ppcf128
  "asinf", // RTLIB::asinf
  "asinf128", // RTLIB::asinf128
  "atan", // RTLIB::atan
  "atan2", // RTLIB::atan2
  "atan2l", // RTLIB::atan2_f80
  "atan2l", // RTLIB::atan2_f128
  "atan2l", // RTLIB::atan2_ppcf128
  "atan2f", // RTLIB::atan2f
  "atan2f128", // RTLIB::atan2f128
  "atanl", // RTLIB::atan_f80
  "atanl", // RTLIB::atan_f128
  "atanl", // RTLIB::atan_ppcf128
  "atanf", // RTLIB::atanf
  "atanf128", // RTLIB::atanf128
  "cos", // RTLIB::avr_cos
  "sin", // RTLIB::avr_sin
  "bzero", // RTLIB::bzero
  "calloc", // RTLIB::calloc
  "cbrt", // RTLIB::cbrt
  "cbrtl", // RTLIB::cbrt_f80
  "cbrtl", // RTLIB::cbrt_f128
  "cbrtl", // RTLIB::cbrt_ppcf128
  "cbrtf", // RTLIB::cbrtf
  "cbrtf128", // RTLIB::cbrtf128
  "ceil", // RTLIB::ceil
  "ceill", // RTLIB::ceil_f80
  "ceill", // RTLIB::ceil_f128
  "ceill", // RTLIB::ceil_ppcf128
  "ceilf", // RTLIB::ceilf
  "ceilf128", // RTLIB::ceilf128
  "copysign", // RTLIB::copysign
  "copysignl", // RTLIB::copysign_f80
  "copysignl", // RTLIB::copysign_f128
  "copysignl", // RTLIB::copysign_ppcf128
  "copysignf", // RTLIB::copysignf
  "copysignf128", // RTLIB::copysignf128
  "cos", // RTLIB::cos
  "cosl", // RTLIB::cos_f80
  "cosl", // RTLIB::cos_f128
  "cosl", // RTLIB::cos_ppcf128
  "cosf", // RTLIB::cosf
  "cosf128", // RTLIB::cosf128
  "cosh", // RTLIB::cosh
  "coshl", // RTLIB::cosh_f80
  "coshl", // RTLIB::cosh_f128
  "coshl", // RTLIB::cosh_ppcf128
  "coshf", // RTLIB::coshf
  "coshf128", // RTLIB::coshf128
  "emscripten_return_address", // RTLIB::emscripten_return_address
  "exp", // RTLIB::exp
  "exp2", // RTLIB::exp2
  "exp2l", // RTLIB::exp2_f80
  "exp2l", // RTLIB::exp2_f128
  "exp2l", // RTLIB::exp2_ppcf128
  "exp2f", // RTLIB::exp2f
  "exp2f128", // RTLIB::exp2f128
  "exp10", // RTLIB::exp10
  "exp10f", // RTLIB::exp10f
  "exp10f128", // RTLIB::exp10f128
  "exp10l", // RTLIB::exp10l_f80
  "exp10l", // RTLIB::exp10l_f128
  "exp10l", // RTLIB::exp10l_ppcf128
  "expl", // RTLIB::exp_f80
  "expl", // RTLIB::exp_f128
  "expl", // RTLIB::exp_ppcf128
  "expf", // RTLIB::expf
  "expf128", // RTLIB::expf128
  "fegetenv", // RTLIB::fegetenv
  "fegetmode", // RTLIB::fegetmode
  "fesetenv", // RTLIB::fesetenv
  "fesetmode", // RTLIB::fesetmode
  "floor", // RTLIB::floor
  "floorl", // RTLIB::floor_f80
  "floorl", // RTLIB::floor_f128
  "floorl", // RTLIB::floor_ppcf128
  "floorf", // RTLIB::floorf
  "floorf128", // RTLIB::floorf128
  "fma", // RTLIB::fma
  "fmal", // RTLIB::fma_f80
  "fmal", // RTLIB::fma_f128
  "fmal", // RTLIB::fma_ppcf128
  "fmaf", // RTLIB::fmaf
  "fmaf128", // RTLIB::fmaf128
  "fmax", // RTLIB::fmax
  "fmaxl", // RTLIB::fmax_f80
  "fmaxl", // RTLIB::fmax_f128
  "fmaxl", // RTLIB::fmax_ppcf128
  "fmaxf", // RTLIB::fmaxf
  "fmaxf128", // RTLIB::fmaxf128
  "fmaximum", // RTLIB::fmaximum
  "fmaximuml", // RTLIB::fmaximum_f80
  "fmaximuml", // RTLIB::fmaximum_f128
  "fmaximum_num", // RTLIB::fmaximum_num
  "fmaximum_numl", // RTLIB::fmaximum_num_f80
  "fmaximum_numl", // RTLIB::fmaximum_num_f128
  "fmaximum_numl", // RTLIB::fmaximum_num_ppcf128
  "fmaximum_numf", // RTLIB::fmaximum_numf
  "fmaximum_numf128", // RTLIB::fmaximum_numf128
  "fmaximuml", // RTLIB::fmaximum_ppcf128
  "fmaximumf", // RTLIB::fmaximumf
  "fmaximumf128", // RTLIB::fmaximumf128
  "fmin", // RTLIB::fmin
  "fminl", // RTLIB::fmin_f80
  "fminl", // RTLIB::fmin_f128
  "fminl", // RTLIB::fmin_ppcf128
  "fminf", // RTLIB::fminf
  "fminf128", // RTLIB::fminf128
  "fminimum", // RTLIB::fminimum
  "fminimuml", // RTLIB::fminimum_f80
  "fminimuml", // RTLIB::fminimum_f128
  "fminimum_num", // RTLIB::fminimum_num
  "fminimum_numl", // RTLIB::fminimum_num_f80
  "fminimum_numl", // RTLIB::fminimum_num_f128
  "fminimum_numl", // RTLIB::fminimum_num_ppcf128
  "fminimum_numf", // RTLIB::fminimum_numf
  "fminimum_numf128", // RTLIB::fminimum_numf128
  "fminimuml", // RTLIB::fminimum_ppcf128
  "fminimumf", // RTLIB::fminimumf
  "fminimumf128", // RTLIB::fminimumf128
  "fmod", // RTLIB::fmod
  "fmodf", // RTLIB::fmodf
  "fmodf128", // RTLIB::fmodf128
  "fmodl", // RTLIB::fmodl_f80
  "fmodl", // RTLIB::fmodl_f128
  "fmodl", // RTLIB::fmodl_ppc128
  "frexp", // RTLIB::frexp
  "frexpl", // RTLIB::frexp_f80
  "frexpl", // RTLIB::frexp_f128
  "frexpl", // RTLIB::frexp_ppcf128
  "frexpf", // RTLIB::frexpf
  "frexpf128", // RTLIB::frexpf128
  "ldexp", // RTLIB::ldexp
  "ldexpl", // RTLIB::ldexp_f80
  "ldexpl", // RTLIB::ldexp_f128
  "ldexpl", // RTLIB::ldexp_ppcf128
  "ldexpf", // RTLIB::ldexpf
  "ldexpf128", // RTLIB::ldexpf128
  "llrint", // RTLIB::llrint
  "llrintl", // RTLIB::llrint_f80
  "llrintl", // RTLIB::llrint_f128
  "llrintl", // RTLIB::llrint_ppcf128
  "llrintf", // RTLIB::llrintf
  "llrintf128", // RTLIB::llrintf128
  "llround", // RTLIB::llround
  "llroundl", // RTLIB::llround_f80
  "llroundl", // RTLIB::llround_f128
  "llroundl", // RTLIB::llround_ppcf128
  "llroundf", // RTLIB::llroundf
  "llroundf128", // RTLIB::llroundf128
  "log", // RTLIB::log
  "log2", // RTLIB::log2
  "log2l", // RTLIB::log2_f80
  "log2l", // RTLIB::log2_f128
  "log2l", // RTLIB::log2_ppcf128
  "log2f", // RTLIB::log2f
  "log2f128", // RTLIB::log2f128
  "log10", // RTLIB::log10
  "log10l", // RTLIB::log10_f80
  "log10l", // RTLIB::log10_f128
  "log10l", // RTLIB::log10_ppcf128
  "log10f", // RTLIB::log10f
  "log10f128", // RTLIB::log10f128
  "logl", // RTLIB::log_f80
  "logl", // RTLIB::log_f128
  "logl", // RTLIB::log_ppcf128
  "logf", // RTLIB::logf
  "logf128", // RTLIB::logf128
  "lrint", // RTLIB::lrint
  "lrintl", // RTLIB::lrint_f80
  "lrintl", // RTLIB::lrint_f128
  "lrintl", // RTLIB::lrint_ppcf128
  "lrintf", // RTLIB::lrintf
  "lrintf128", // RTLIB::lrintf128
  "lround", // RTLIB::lround
  "lroundl", // RTLIB::lround_f80
  "lroundl", // RTLIB::lround_f128
  "lroundl", // RTLIB::lround_ppcf128
  "lroundf", // RTLIB::lroundf
  "lroundf128", // RTLIB::lroundf128
  "memcpy", // RTLIB::memcpy
  "memmove", // RTLIB::memmove
  "memset", // RTLIB::memset
  "modf", // RTLIB::modf
  "modfl", // RTLIB::modf_f80
  "modfl", // RTLIB::modf_f128
  "modfl", // RTLIB::modf_ppcf128
  "modff", // RTLIB::modff
  "modff128", // RTLIB::modff128
  "nearbyint", // RTLIB::nearbyint
  "nearbyintl", // RTLIB::nearbyint_f80
  "nearbyintl", // RTLIB::nearbyint_f128
  "nearbyintl", // RTLIB::nearbyint_ppcf128
  "nearbyintf", // RTLIB::nearbyintf
  "nearbyintf128", // RTLIB::nearbyintf128
  "objc_autorelease", // RTLIB::objc_autorelease
  "objc_autoreleasePoolPop", // RTLIB::objc_autoreleasePoolPop
  "objc_autoreleasePoolPush", // RTLIB::objc_autoreleasePoolPush
  "objc_autoreleaseReturnValue", // RTLIB::objc_autoreleaseReturnValue
  "objc_claimAutoreleasedReturnValue", // RTLIB::objc_claimAutoreleasedReturnValue
  "objc_copyWeak", // RTLIB::objc_copyWeak
  "objc_destroyWeak", // RTLIB::objc_destroyWeak
  "objc_initWeak", // RTLIB::objc_initWeak
  "objc_loadWeak", // RTLIB::objc_loadWeak
  "objc_loadWeakRetained", // RTLIB::objc_loadWeakRetained
  "objc_moveWeak", // RTLIB::objc_moveWeak
  "objc_release", // RTLIB::objc_release
  "objc_retain", // RTLIB::objc_retain
  "objc_retainAutorelease", // RTLIB::objc_retainAutorelease
  "objc_retainAutoreleaseReturnValue", // RTLIB::objc_retainAutoreleaseReturnValue
  "objc_retainAutoreleasedReturnValue", // RTLIB::objc_retainAutoreleasedReturnValue
  "objc_retainBlock", // RTLIB::objc_retainBlock
  "objc_retain_autorelease", // RTLIB::objc_retain_autorelease
  "objc_retainedObject", // RTLIB::objc_retainedObject
  "objc_storeStrong", // RTLIB::objc_storeStrong
  "objc_storeWeak", // RTLIB::objc_storeWeak
  "objc_sync_enter", // RTLIB::objc_sync_enter
  "objc_sync_exit", // RTLIB::objc_sync_exit
  "objc_unretainedObject", // RTLIB::objc_unretainedObject
  "objc_unretainedPointer", // RTLIB::objc_unretainedPointer
  "objc_unsafeClaimAutoreleasedReturnValue", // RTLIB::objc_unsafeClaimAutoreleasedReturnValue
  "pow", // RTLIB::pow
  "powl", // RTLIB::pow_f80
  "powl", // RTLIB::pow_f128
  "powl", // RTLIB::pow_ppcf128
  "powf", // RTLIB::powf
  "powf128", // RTLIB::powf128
  "rint", // RTLIB::rint
  "rintl", // RTLIB::rint_f80
  "rintl", // RTLIB::rint_f128
  "rintl", // RTLIB::rint_ppcf128
  "rintf", // RTLIB::rintf
  "rintf128", // RTLIB::rintf128
  "round", // RTLIB::round
  "roundl", // RTLIB::round_f80
  "roundl", // RTLIB::round_f128
  "roundl", // RTLIB::round_ppcf128
  "roundeven", // RTLIB::roundeven
  "roundevenl", // RTLIB::roundeven_f80
  "roundevenl", // RTLIB::roundeven_f128
  "roundevenl", // RTLIB::roundeven_ppcf128
  "roundevenf", // RTLIB::roundevenf
  "roundevenf128", // RTLIB::roundevenf128
  "roundf", // RTLIB::roundf
  "roundf128", // RTLIB::roundf128
  "sin", // RTLIB::sin
  "sinl", // RTLIB::sin_f80
  "sinl", // RTLIB::sin_f128
  "sinl", // RTLIB::sin_ppcf128
  "sincos", // RTLIB::sincos
  "sincosl", // RTLIB::sincos_f80
  "sincosl", // RTLIB::sincos_f128
  "sincosl", // RTLIB::sincos_ppcf128
  "sincosf", // RTLIB::sincosf
  "sincosf128", // RTLIB::sincosf128
  "sincospi", // RTLIB::sincospi
  "sincospil", // RTLIB::sincospi_f80
  "sincospil", // RTLIB::sincospi_f128
  "sincospil", // RTLIB::sincospi_ppcf128
  "sincospif", // RTLIB::sincospif
  "sinf", // RTLIB::sinf
  "sinf128", // RTLIB::sinf128
  "sinh", // RTLIB::sinh
  "sinhl", // RTLIB::sinh_f80
  "sinhl", // RTLIB::sinh_f128
  "sinhl", // RTLIB::sinh_ppcf128
  "sinhf", // RTLIB::sinhf
  "sinhf128", // RTLIB::sinhf128
  ".div", // RTLIB::sparc_div
  ".rem", // RTLIB::sparc_rem
  ".udiv", // RTLIB::sparc_udiv
  ".umul", // RTLIB::sparc_umul
  ".urem", // RTLIB::sparc_urem
  "sqrt", // RTLIB::sqrt
  "sqrtl", // RTLIB::sqrt_f80
  "sqrtl", // RTLIB::sqrt_f128
  "sqrtl", // RTLIB::sqrt_ppcf128
  "sqrtf", // RTLIB::sqrtf
  "sqrtf128", // RTLIB::sqrtf128
  "tan", // RTLIB::tan
  "tanl", // RTLIB::tan_f80
  "tanl", // RTLIB::tan_f128
  "tanl", // RTLIB::tan_ppcf128
  "tanf", // RTLIB::tanf
  "tanf128", // RTLIB::tanf128
  "tanh", // RTLIB::tanh
  "tanhl", // RTLIB::tanh_f80
  "tanhl", // RTLIB::tanh_f128
  "tanhl", // RTLIB::tanh_ppcf128
  "tanhf", // RTLIB::tanhf
  "tanhf128", // RTLIB::tanhf128
  "trunc", // RTLIB::trunc
  "truncl", // RTLIB::trunc_f80
  "truncl", // RTLIB::trunc_f128
  "truncl", // RTLIB::trunc_ppcf128
  "truncf", // RTLIB::truncf
  "truncf128", // RTLIB::truncf128
  "@@DCPY@B", // RTLIB::zos___DCPY_B
  "@@EXP2@B", // RTLIB::zos___EXP2_B
  "@@FCBT@B", // RTLIB::zos___FCBT_B
  "@@FCEL@B", // RTLIB::zos___FCEL_B
  "@@FCOS@B", // RTLIB::zos___FCOS_B
  "@@FCPY@B", // RTLIB::zos___FCPY_B
  "@@FEXP@B", // RTLIB::zos___FEXP_B
  "@@FFLR@B", // RTLIB::zos___FFLR_B
  "@@FFMD@B", // RTLIB::zos___FFMD_B
  "@@FFXP@B", // RTLIB::zos___FFXP_B
  "@@FLG1@B", // RTLIB::zos___FLG1_B
  "@@FLG2@B", // RTLIB::zos___FLG2_B
  "@@FLOG@B", // RTLIB::zos___FLOG_B
  "@@FLXP@B", // RTLIB::zos___FLXP_B
  "@@FMAFB", // RTLIB::zos___FMAFB
  "@@FMALB", // RTLIB::zos___FMALB
  "@@FMAXFB", // RTLIB::zos___FMAXFB
  "@@FMAXLB", // RTLIB::zos___FMAXLB
  "@@FMAX@B", // RTLIB::zos___FMAX_B
  "@@FMA@B", // RTLIB::zos___FMA_B
  "@@FMINFB", // RTLIB::zos___FMINFB
  "@@FMINLB", // RTLIB::zos___FMINLB
  "@@FMIN@B", // RTLIB::zos___FMIN_B
  "@@FPOW@B", // RTLIB::zos___FPOW_B
  "@@FRND@B", // RTLIB::zos___FRND_B
  "@@FSIN@B", // RTLIB::zos___FSIN_B
  "@@FSQT@B", // RTLIB::zos___FSQT_B
  "@@FTRC@B", // RTLIB::zos___FTRC_B
  "@@FXP2@B", // RTLIB::zos___FXP2_B
  "@@LCBT@B", // RTLIB::zos___LCBT_B
  "@@LCEL@B", // RTLIB::zos___LCEL_B
  "@@LCOS@B", // RTLIB::zos___LCOS_B
  "@@LCPY@B", // RTLIB::zos___LCPY_B
  "@@LEXP@B", // RTLIB::zos___LEXP_B
  "@@LFLR@B", // RTLIB::zos___LFLR_B
  "@@LFMD@B", // RTLIB::zos___LFMD_B
  "@@LFXP@B", // RTLIB::zos___LFXP_B
  "@@LLG1@B", // RTLIB::zos___LLG1_B
  "@@LLG2@B", // RTLIB::zos___LLG2_B
  "@@LLOG@B", // RTLIB::zos___LLOG_B
  "@@LLRDFB", // RTLIB::zos___LLRDFB
  "@@LLRDLB", // RTLIB::zos___LLRDLB
  "@@LLRD@B", // RTLIB::zos___LLRD_B
  "@@LLRTFB", // RTLIB::zos___LLRTFB
  "@@LLRTLB", // RTLIB::zos___LLRTLB
  "@@LLRT@B", // RTLIB::zos___LLRT_B
  "@@LLXP@B", // RTLIB::zos___LLXP_B
  "@@LOG2@B", // RTLIB::zos___LOG2_B
  "@@LPOW@B", // RTLIB::zos___LPOW_B
  "@@LRND@B", // RTLIB::zos___LRND_B
  "@@LRNTFB", // RTLIB::zos___LRNTFB
  "@@LRNTLB", // RTLIB::zos___LRNTLB
  "@@LRNT@B", // RTLIB::zos___LRNT_B
  "@@LSIN@B", // RTLIB::zos___LSIN_B
  "@@LSQT@B", // RTLIB::zos___LSQT_B
  "@@LTRC@B", // RTLIB::zos___LTRC_B
  "@@LXP2@B", // RTLIB::zos___LXP2_B
  "@@NBYIFB", // RTLIB::zos___NBYIFB
  "@@NBYILB", // RTLIB::zos___NBYILB
  "@@NBYI@B", // RTLIB::zos___NBYI_B
  "@@RINTFB", // RTLIB::zos___RINTFB
  "@@RINTLB", // RTLIB::zos___RINTLB
  "@@ROND@B", // RTLIB::zos___ROND_B
  "@@ROUNFB", // RTLIB::zos___ROUNFB
  "@@ROUNLB", // RTLIB::zos___ROUNLB
  "@@ROUN@B", // RTLIB::zos___ROUN_B
  "@@SCEL@B", // RTLIB::zos___SCEL_B
  "@@SCOS@B", // RTLIB::zos___SCOS_B
  "@@SCRT@B", // RTLIB::zos___SCRT_B
  "@@SFLR@B", // RTLIB::zos___SFLR_B
  "@@SFXP@B", // RTLIB::zos___SFXP_B
  "@@SLXP@B", // RTLIB::zos___SLXP_B
  "@@SRNT@B", // RTLIB::zos___SRNT_B
  "@@SSIN@B", // RTLIB::zos___SSIN_B
  "@@TRNC@B", // RTLIB::zos___TRNC_B
  "@@WEXP@B", // RTLIB::zos___WEXP_B
  "@@WFMD@B", // RTLIB::zos___WFMD_B
  "@@WLG1@B", // RTLIB::zos___WLG1_B
  "@@WLOG@B", // RTLIB::zos___WLOG_B
  "@@WPOW@B", // RTLIB::zos___WPOW_B
  "@@WSQT@B", // RTLIB::zos___WSQT_B
};

const RTLIB::Libcall llvm::RTLIB::RuntimeLibcallsInfo::ImplToLibcall[RTLIB::NumLibcallImpls] = {
  RTLIB::UNKNOWN_LIBCALL, // RTLIB::Unsupported
  RTLIB::ADD_F128, // RTLIB::_Q_add
  RTLIB::DIV_F128, // RTLIB::_Q_div
  RTLIB::FPEXT_F64_F128, // RTLIB::_Q_dtoq
  RTLIB::SINTTOFP_I32_F128, // RTLIB::_Q_itoq
  RTLIB::SINTTOFP_I64_F128, // RTLIB::_Q_lltoq
  RTLIB::MUL_F128, // RTLIB::_Q_mul
  RTLIB::FPROUND_F128_F64, // RTLIB::_Q_qtod
  RTLIB::FPTOSINT_F128_I32, // RTLIB::_Q_qtoi
  RTLIB::FPTOSINT_F128_I64, // RTLIB::_Q_qtoll
  RTLIB::FPROUND_F128_F32, // RTLIB::_Q_qtos
  RTLIB::FPTOUINT_F128_I32, // RTLIB::_Q_qtou
  RTLIB::FPTOUINT_F128_I64, // RTLIB::_Q_qtoull
  RTLIB::SQRT_F128, // RTLIB::_Q_sqrt
  RTLIB::FPEXT_F32_F128, // RTLIB::_Q_stoq
  RTLIB::SUB_F128, // RTLIB::_Q_sub
  RTLIB::UINTTOFP_I64_F128, // RTLIB::_Q_ulltoq
  RTLIB::UINTTOFP_I32_F128, // RTLIB::_Q_utoq
  RTLIB::ADD_F128, // RTLIB::_Qp_add
  RTLIB::DIV_F128, // RTLIB::_Qp_div
  RTLIB::FPEXT_F64_F128, // RTLIB::_Qp_dtoq
  RTLIB::SINTTOFP_I32_F128, // RTLIB::_Qp_itoq
  RTLIB::MUL_F128, // RTLIB::_Qp_mul
  RTLIB::FPROUND_F128_F64, // RTLIB::_Qp_qtod
  RTLIB::FPTOSINT_F128_I32, // RTLIB::_Qp_qtoi
  RTLIB::FPROUND_F128_F32, // RTLIB::_Qp_qtos
  RTLIB::FPTOUINT_F128_I32, // RTLIB::_Qp_qtoui
  RTLIB::FPTOUINT_F128_I64, // RTLIB::_Qp_qtoux
  RTLIB::FPTOSINT_F128_I64, // RTLIB::_Qp_qtox
  RTLIB::SQRT_F128, // RTLIB::_Qp_sqrt
  RTLIB::FPEXT_F32_F128, // RTLIB::_Qp_stoq
  RTLIB::SUB_F128, // RTLIB::_Qp_sub
  RTLIB::UINTTOFP_I32_F128, // RTLIB::_Qp_uitoq
  RTLIB::UINTTOFP_I64_F128, // RTLIB::_Qp_uxtoq
  RTLIB::SINTTOFP_I64_F128, // RTLIB::_Qp_xtoq
  RTLIB::UNWIND_CALL_PERSONALITY, // RTLIB::_Unwind_CallPersonality
  RTLIB::UNWIND_RESUME, // RTLIB::_Unwind_Resume
  RTLIB::UNWIND_REGISTER, // RTLIB::_Unwind_SjLj_Register
  RTLIB::UNWIND_RESUME, // RTLIB::_Unwind_SjLj_Resume
  RTLIB::UNWIND_UNREGISTER, // RTLIB::_Unwind_SjLj_Unregister
  RTLIB::BZERO, // RTLIB::___bzero
  RTLIB::BZERO, // RTLIB::___bzero64
  RTLIB::MEMMOVE, // RTLIB::___memmove
  RTLIB::MEMCPY, // RTLIB::___memmove64
  RTLIB::MEMSET, // RTLIB::___memset
  RTLIB::MEMSET, // RTLIB::___memset64
  RTLIB::OUTLINE_ATOMIC_CAS1_ACQ, // RTLIB::__aarch64_cas1_acq
  RTLIB::OUTLINE_ATOMIC_CAS1_ACQ_REL, // RTLIB::__aarch64_cas1_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS1_REL, // RTLIB::__aarch64_cas1_rel
  RTLIB::OUTLINE_ATOMIC_CAS1_RELAX, // RTLIB::__aarch64_cas1_relax
  RTLIB::OUTLINE_ATOMIC_CAS2_ACQ, // RTLIB::__aarch64_cas2_acq
  RTLIB::OUTLINE_ATOMIC_CAS2_ACQ_REL, // RTLIB::__aarch64_cas2_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS2_REL, // RTLIB::__aarch64_cas2_rel
  RTLIB::OUTLINE_ATOMIC_CAS2_RELAX, // RTLIB::__aarch64_cas2_relax
  RTLIB::OUTLINE_ATOMIC_CAS4_ACQ, // RTLIB::__aarch64_cas4_acq
  RTLIB::OUTLINE_ATOMIC_CAS4_ACQ_REL, // RTLIB::__aarch64_cas4_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS4_REL, // RTLIB::__aarch64_cas4_rel
  RTLIB::OUTLINE_ATOMIC_CAS4_RELAX, // RTLIB::__aarch64_cas4_relax
  RTLIB::OUTLINE_ATOMIC_CAS8_ACQ, // RTLIB::__aarch64_cas8_acq
  RTLIB::OUTLINE_ATOMIC_CAS8_ACQ_REL, // RTLIB::__aarch64_cas8_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS8_REL, // RTLIB::__aarch64_cas8_rel
  RTLIB::OUTLINE_ATOMIC_CAS8_RELAX, // RTLIB::__aarch64_cas8_relax
  RTLIB::OUTLINE_ATOMIC_CAS16_ACQ, // RTLIB::__aarch64_cas16_acq
  RTLIB::OUTLINE_ATOMIC_CAS16_ACQ_REL, // RTLIB::__aarch64_cas16_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS16_REL, // RTLIB::__aarch64_cas16_rel
  RTLIB::OUTLINE_ATOMIC_CAS16_RELAX, // RTLIB::__aarch64_cas16_relax
  RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ, // RTLIB::__aarch64_ldadd1_acq
  RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ_REL, // RTLIB::__aarch64_ldadd1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD1_REL, // RTLIB::__aarch64_ldadd1_rel
  RTLIB::OUTLINE_ATOMIC_LDADD1_RELAX, // RTLIB::__aarch64_ldadd1_relax
  RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ, // RTLIB::__aarch64_ldadd2_acq
  RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ_REL, // RTLIB::__aarch64_ldadd2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD2_REL, // RTLIB::__aarch64_ldadd2_rel
  RTLIB::OUTLINE_ATOMIC_LDADD2_RELAX, // RTLIB::__aarch64_ldadd2_relax
  RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ, // RTLIB::__aarch64_ldadd4_acq
  RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ_REL, // RTLIB::__aarch64_ldadd4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD4_REL, // RTLIB::__aarch64_ldadd4_rel
  RTLIB::OUTLINE_ATOMIC_LDADD4_RELAX, // RTLIB::__aarch64_ldadd4_relax
  RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ, // RTLIB::__aarch64_ldadd8_acq
  RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ_REL, // RTLIB::__aarch64_ldadd8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD8_REL, // RTLIB::__aarch64_ldadd8_rel
  RTLIB::OUTLINE_ATOMIC_LDADD8_RELAX, // RTLIB::__aarch64_ldadd8_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ, // RTLIB::__aarch64_ldclr1_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ_REL, // RTLIB::__aarch64_ldclr1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR1_REL, // RTLIB::__aarch64_ldclr1_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR1_RELAX, // RTLIB::__aarch64_ldclr1_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ, // RTLIB::__aarch64_ldclr2_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ_REL, // RTLIB::__aarch64_ldclr2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR2_REL, // RTLIB::__aarch64_ldclr2_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR2_RELAX, // RTLIB::__aarch64_ldclr2_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ, // RTLIB::__aarch64_ldclr4_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ_REL, // RTLIB::__aarch64_ldclr4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR4_REL, // RTLIB::__aarch64_ldclr4_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR4_RELAX, // RTLIB::__aarch64_ldclr4_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ, // RTLIB::__aarch64_ldclr8_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ_REL, // RTLIB::__aarch64_ldclr8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR8_REL, // RTLIB::__aarch64_ldclr8_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR8_RELAX, // RTLIB::__aarch64_ldclr8_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ, // RTLIB::__aarch64_ldeor1_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ_REL, // RTLIB::__aarch64_ldeor1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR1_REL, // RTLIB::__aarch64_ldeor1_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR1_RELAX, // RTLIB::__aarch64_ldeor1_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ, // RTLIB::__aarch64_ldeor2_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ_REL, // RTLIB::__aarch64_ldeor2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR2_REL, // RTLIB::__aarch64_ldeor2_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR2_RELAX, // RTLIB::__aarch64_ldeor2_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ, // RTLIB::__aarch64_ldeor4_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ_REL, // RTLIB::__aarch64_ldeor4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR4_REL, // RTLIB::__aarch64_ldeor4_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR4_RELAX, // RTLIB::__aarch64_ldeor4_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ, // RTLIB::__aarch64_ldeor8_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ_REL, // RTLIB::__aarch64_ldeor8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR8_REL, // RTLIB::__aarch64_ldeor8_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR8_RELAX, // RTLIB::__aarch64_ldeor8_relax
  RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ, // RTLIB::__aarch64_ldset1_acq
  RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ_REL, // RTLIB::__aarch64_ldset1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET1_REL, // RTLIB::__aarch64_ldset1_rel
  RTLIB::OUTLINE_ATOMIC_LDSET1_RELAX, // RTLIB::__aarch64_ldset1_relax
  RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ, // RTLIB::__aarch64_ldset2_acq
  RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ_REL, // RTLIB::__aarch64_ldset2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET2_REL, // RTLIB::__aarch64_ldset2_rel
  RTLIB::OUTLINE_ATOMIC_LDSET2_RELAX, // RTLIB::__aarch64_ldset2_relax
  RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ, // RTLIB::__aarch64_ldset4_acq
  RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ_REL, // RTLIB::__aarch64_ldset4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET4_REL, // RTLIB::__aarch64_ldset4_rel
  RTLIB::OUTLINE_ATOMIC_LDSET4_RELAX, // RTLIB::__aarch64_ldset4_relax
  RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ, // RTLIB::__aarch64_ldset8_acq
  RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ_REL, // RTLIB::__aarch64_ldset8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET8_REL, // RTLIB::__aarch64_ldset8_rel
  RTLIB::OUTLINE_ATOMIC_LDSET8_RELAX, // RTLIB::__aarch64_ldset8_relax
  RTLIB::OUTLINE_ATOMIC_SWP1_ACQ, // RTLIB::__aarch64_swp1_acq
  RTLIB::OUTLINE_ATOMIC_SWP1_ACQ_REL, // RTLIB::__aarch64_swp1_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP1_REL, // RTLIB::__aarch64_swp1_rel
  RTLIB::OUTLINE_ATOMIC_SWP1_RELAX, // RTLIB::__aarch64_swp1_relax
  RTLIB::OUTLINE_ATOMIC_SWP2_ACQ, // RTLIB::__aarch64_swp2_acq
  RTLIB::OUTLINE_ATOMIC_SWP2_ACQ_REL, // RTLIB::__aarch64_swp2_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP2_REL, // RTLIB::__aarch64_swp2_rel
  RTLIB::OUTLINE_ATOMIC_SWP2_RELAX, // RTLIB::__aarch64_swp2_relax
  RTLIB::OUTLINE_ATOMIC_SWP4_ACQ, // RTLIB::__aarch64_swp4_acq
  RTLIB::OUTLINE_ATOMIC_SWP4_ACQ_REL, // RTLIB::__aarch64_swp4_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP4_REL, // RTLIB::__aarch64_swp4_rel
  RTLIB::OUTLINE_ATOMIC_SWP4_RELAX, // RTLIB::__aarch64_swp4_relax
  RTLIB::OUTLINE_ATOMIC_SWP8_ACQ, // RTLIB::__aarch64_swp8_acq
  RTLIB::OUTLINE_ATOMIC_SWP8_ACQ_REL, // RTLIB::__aarch64_swp8_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP8_REL, // RTLIB::__aarch64_swp8_rel
  RTLIB::OUTLINE_ATOMIC_SWP8_RELAX, // RTLIB::__aarch64_swp8_relax
  RTLIB::ADD_F64, // RTLIB::__adddf3
  RTLIB::ADD_F64, // RTLIB::__adddf3vfp
  RTLIB::ADD_F128, // RTLIB::__addkf3
  RTLIB::ADD_F32, // RTLIB::__addsf3
  RTLIB::ADD_F32, // RTLIB::__addsf3vfp
  RTLIB::ADD_F128, // RTLIB::__addtf3
  RTLIB::ADD_F80, // RTLIB::__addxf3
  RTLIB::FPROUND_F64_F32, // RTLIB::__aeabi_d2f
  RTLIB::FPROUND_F64_F16, // RTLIB::__aeabi_d2h
  RTLIB::FPTOSINT_F64_I32, // RTLIB::__aeabi_d2iz
  RTLIB::FPTOSINT_F64_I64, // RTLIB::__aeabi_d2lz
  RTLIB::FPTOUINT_F64_I32, // RTLIB::__aeabi_d2uiz
  RTLIB::FPTOUINT_F64_I64, // RTLIB::__aeabi_d2ulz
  RTLIB::ADD_F64, // RTLIB::__aeabi_dadd
  RTLIB::OEQ_F64, // RTLIB::__aeabi_dcmpeq__oeq
  RTLIB::UNE_F64, // RTLIB::__aeabi_dcmpeq__une
  RTLIB::OGE_F64, // RTLIB::__aeabi_dcmpge
  RTLIB::OGT_F64, // RTLIB::__aeabi_dcmpgt
  RTLIB::OLE_F64, // RTLIB::__aeabi_dcmple
  RTLIB::OLT_F64, // RTLIB::__aeabi_dcmplt
  RTLIB::UO_F64, // RTLIB::__aeabi_dcmpun
  RTLIB::DIV_F64, // RTLIB::__aeabi_ddiv
  RTLIB::MUL_F64, // RTLIB::__aeabi_dmul
  RTLIB::SUB_F64, // RTLIB::__aeabi_dsub
  RTLIB::FPEXT_F32_F64, // RTLIB::__aeabi_f2d
  RTLIB::FPROUND_F32_F16, // RTLIB::__aeabi_f2h
  RTLIB::FPTOSINT_F32_I32, // RTLIB::__aeabi_f2iz
  RTLIB::FPTOSINT_F32_I64, // RTLIB::__aeabi_f2lz
  RTLIB::FPTOUINT_F32_I32, // RTLIB::__aeabi_f2uiz
  RTLIB::FPTOUINT_F32_I64, // RTLIB::__aeabi_f2ulz
  RTLIB::ADD_F32, // RTLIB::__aeabi_fadd
  RTLIB::OEQ_F32, // RTLIB::__aeabi_fcmpeq__oeq
  RTLIB::UNE_F32, // RTLIB::__aeabi_fcmpeq__une
  RTLIB::OGE_F32, // RTLIB::__aeabi_fcmpge
  RTLIB::OGT_F32, // RTLIB::__aeabi_fcmpgt
  RTLIB::OLE_F32, // RTLIB::__aeabi_fcmple
  RTLIB::OLT_F32, // RTLIB::__aeabi_fcmplt
  RTLIB::UO_F32, // RTLIB::__aeabi_fcmpun
  RTLIB::DIV_F32, // RTLIB::__aeabi_fdiv
  RTLIB::MUL_F32, // RTLIB::__aeabi_fmul
  RTLIB::SUB_F32, // RTLIB::__aeabi_fsub
  RTLIB::FPEXT_F16_F32, // RTLIB::__aeabi_h2f
  RTLIB::SINTTOFP_I32_F64, // RTLIB::__aeabi_i2d
  RTLIB::SINTTOFP_I32_F32, // RTLIB::__aeabi_i2f
  RTLIB::SDIV_I8, // RTLIB::__aeabi_idiv__i8
  RTLIB::SDIV_I16, // RTLIB::__aeabi_idiv__i16
  RTLIB::SDIV_I32, // RTLIB::__aeabi_idiv__i32
  RTLIB::SDIVREM_I32, // RTLIB::__aeabi_idivmod
  RTLIB::SINTTOFP_I64_F64, // RTLIB::__aeabi_l2d
  RTLIB::SINTTOFP_I64_F32, // RTLIB::__aeabi_l2f
  RTLIB::SRA_I64, // RTLIB::__aeabi_lasr
  RTLIB::SDIVREM_I64, // RTLIB::__aeabi_ldivmod
  RTLIB::SHL_I64, // RTLIB::__aeabi_llsl
  RTLIB::SRL_I64, // RTLIB::__aeabi_llsr
  RTLIB::MUL_I64, // RTLIB::__aeabi_lmul
  RTLIB::AEABI_MEMCLR, // RTLIB::__aeabi_memclr
  RTLIB::AEABI_MEMCLR4, // RTLIB::__aeabi_memclr4
  RTLIB::AEABI_MEMCLR8, // RTLIB::__aeabi_memclr8
  RTLIB::MEMCPY, // RTLIB::__aeabi_memcpy
  RTLIB::AEABI_MEMCPY4, // RTLIB::__aeabi_memcpy4
  RTLIB::AEABI_MEMCPY8, // RTLIB::__aeabi_memcpy8
  RTLIB::MEMMOVE, // RTLIB::__aeabi_memmove
  RTLIB::AEABI_MEMMOVE4, // RTLIB::__aeabi_memmove4
  RTLIB::AEABI_MEMMOVE8, // RTLIB::__aeabi_memmove8
  RTLIB::MEMSET, // RTLIB::__aeabi_memset
  RTLIB::AEABI_MEMSET4, // RTLIB::__aeabi_memset4
  RTLIB::AEABI_MEMSET8, // RTLIB::__aeabi_memset8
  RTLIB::UINTTOFP_I32_F64, // RTLIB::__aeabi_ui2d
  RTLIB::UINTTOFP_I32_F32, // RTLIB::__aeabi_ui2f
  RTLIB::UDIV_I8, // RTLIB::__aeabi_uidiv__i8
  RTLIB::UDIV_I16, // RTLIB::__aeabi_uidiv__i16
  RTLIB::UDIV_I32, // RTLIB::__aeabi_uidiv__i32
  RTLIB::UDIVREM_I32, // RTLIB::__aeabi_uidivmod
  RTLIB::UINTTOFP_I64_F64, // RTLIB::__aeabi_ul2d
  RTLIB::UINTTOFP_I64_F32, // RTLIB::__aeabi_ul2f
  RTLIB::UDIVREM_I64, // RTLIB::__aeabi_uldivmod
  RTLIB::SC_MEMCPY, // RTLIB::__arm_sc_memcpy
  RTLIB::SC_MEMMOVE, // RTLIB::__arm_sc_memmove
  RTLIB::SC_MEMSET, // RTLIB::__arm_sc_memset
  RTLIB::SHL_I64, // RTLIB::__ashldi3
  RTLIB::SHL_I16, // RTLIB::__ashlhi3
  RTLIB::SHL_I32, // RTLIB::__ashlsi3
  RTLIB::SHL_I128, // RTLIB::__ashlti3
  RTLIB::SRA_I64, // RTLIB::__ashrdi3
  RTLIB::SRA_I16, // RTLIB::__ashrhi3
  RTLIB::SRA_I32, // RTLIB::__ashrsi3
  RTLIB::SRA_I128, // RTLIB::__ashrti3
  RTLIB::ATOMIC_COMPARE_EXCHANGE, // RTLIB::__atomic_compare_exchange
  RTLIB::ATOMIC_COMPARE_EXCHANGE_1, // RTLIB::__atomic_compare_exchange_1
  RTLIB::ATOMIC_COMPARE_EXCHANGE_2, // RTLIB::__atomic_compare_exchange_2
  RTLIB::ATOMIC_COMPARE_EXCHANGE_4, // RTLIB::__atomic_compare_exchange_4
  RTLIB::ATOMIC_COMPARE_EXCHANGE_8, // RTLIB::__atomic_compare_exchange_8
  RTLIB::ATOMIC_COMPARE_EXCHANGE_16, // RTLIB::__atomic_compare_exchange_16
  RTLIB::ATOMIC_EXCHANGE, // RTLIB::__atomic_exchange
  RTLIB::ATOMIC_EXCHANGE_1, // RTLIB::__atomic_exchange_1
  RTLIB::ATOMIC_EXCHANGE_2, // RTLIB::__atomic_exchange_2
  RTLIB::ATOMIC_EXCHANGE_4, // RTLIB::__atomic_exchange_4
  RTLIB::ATOMIC_EXCHANGE_8, // RTLIB::__atomic_exchange_8
  RTLIB::ATOMIC_EXCHANGE_16, // RTLIB::__atomic_exchange_16
  RTLIB::ATOMIC_FETCH_ADD_1, // RTLIB::__atomic_fetch_add_1
  RTLIB::ATOMIC_FETCH_ADD_2, // RTLIB::__atomic_fetch_add_2
  RTLIB::ATOMIC_FETCH_ADD_4, // RTLIB::__atomic_fetch_add_4
  RTLIB::ATOMIC_FETCH_ADD_8, // RTLIB::__atomic_fetch_add_8
  RTLIB::ATOMIC_FETCH_ADD_16, // RTLIB::__atomic_fetch_add_16
  RTLIB::ATOMIC_FETCH_AND_1, // RTLIB::__atomic_fetch_and_1
  RTLIB::ATOMIC_FETCH_AND_2, // RTLIB::__atomic_fetch_and_2
  RTLIB::ATOMIC_FETCH_AND_4, // RTLIB::__atomic_fetch_and_4
  RTLIB::ATOMIC_FETCH_AND_8, // RTLIB::__atomic_fetch_and_8
  RTLIB::ATOMIC_FETCH_AND_16, // RTLIB::__atomic_fetch_and_16
  RTLIB::ATOMIC_FETCH_NAND_1, // RTLIB::__atomic_fetch_nand_1
  RTLIB::ATOMIC_FETCH_NAND_2, // RTLIB::__atomic_fetch_nand_2
  RTLIB::ATOMIC_FETCH_NAND_4, // RTLIB::__atomic_fetch_nand_4
  RTLIB::ATOMIC_FETCH_NAND_8, // RTLIB::__atomic_fetch_nand_8
  RTLIB::ATOMIC_FETCH_NAND_16, // RTLIB::__atomic_fetch_nand_16
  RTLIB::ATOMIC_FETCH_OR_1, // RTLIB::__atomic_fetch_or_1
  RTLIB::ATOMIC_FETCH_OR_2, // RTLIB::__atomic_fetch_or_2
  RTLIB::ATOMIC_FETCH_OR_4, // RTLIB::__atomic_fetch_or_4
  RTLIB::ATOMIC_FETCH_OR_8, // RTLIB::__atomic_fetch_or_8
  RTLIB::ATOMIC_FETCH_OR_16, // RTLIB::__atomic_fetch_or_16
  RTLIB::ATOMIC_FETCH_SUB_1, // RTLIB::__atomic_fetch_sub_1
  RTLIB::ATOMIC_FETCH_SUB_2, // RTLIB::__atomic_fetch_sub_2
  RTLIB::ATOMIC_FETCH_SUB_4, // RTLIB::__atomic_fetch_sub_4
  RTLIB::ATOMIC_FETCH_SUB_8, // RTLIB::__atomic_fetch_sub_8
  RTLIB::ATOMIC_FETCH_SUB_16, // RTLIB::__atomic_fetch_sub_16
  RTLIB::ATOMIC_FETCH_XOR_1, // RTLIB::__atomic_fetch_xor_1
  RTLIB::ATOMIC_FETCH_XOR_2, // RTLIB::__atomic_fetch_xor_2
  RTLIB::ATOMIC_FETCH_XOR_4, // RTLIB::__atomic_fetch_xor_4
  RTLIB::ATOMIC_FETCH_XOR_8, // RTLIB::__atomic_fetch_xor_8
  RTLIB::ATOMIC_FETCH_XOR_16, // RTLIB::__atomic_fetch_xor_16
  RTLIB::ATOMIC_LOAD, // RTLIB::__atomic_load
  RTLIB::ATOMIC_LOAD_1, // RTLIB::__atomic_load_1
  RTLIB::ATOMIC_LOAD_2, // RTLIB::__atomic_load_2
  RTLIB::ATOMIC_LOAD_4, // RTLIB::__atomic_load_4
  RTLIB::ATOMIC_LOAD_8, // RTLIB::__atomic_load_8
  RTLIB::ATOMIC_LOAD_16, // RTLIB::__atomic_load_16
  RTLIB::ATOMIC_STORE, // RTLIB::__atomic_store
  RTLIB::ATOMIC_STORE_1, // RTLIB::__atomic_store_1
  RTLIB::ATOMIC_STORE_2, // RTLIB::__atomic_store_2
  RTLIB::ATOMIC_STORE_4, // RTLIB::__atomic_store_4
  RTLIB::ATOMIC_STORE_8, // RTLIB::__atomic_store_8
  RTLIB::ATOMIC_STORE_16, // RTLIB::__atomic_store_16
  RTLIB::BZERO, // RTLIB::__bzero
  RTLIB::CLEAR_CACHE, // RTLIB::__clear_cache
  RTLIB::CTLZ_I64, // RTLIB::__clzdi2
  RTLIB::CTLZ_I32, // RTLIB::__clzsi2
  RTLIB::CTLZ_I128, // RTLIB::__clzti2
  RTLIB::CXA_END_CLEANUP, // RTLIB::__cxa_end_cleanup
  RTLIB::DIV_F64, // RTLIB::__divdf3
  RTLIB::DIV_F64, // RTLIB::__divdf3vfp
  RTLIB::SDIV_I64, // RTLIB::__divdi3
  RTLIB::SDIV_I16, // RTLIB::__divhi3
  RTLIB::DIV_F128, // RTLIB::__divkf3
  RTLIB::SDIVREM_I16, // RTLIB::__divmodhi4
  RTLIB::SDIVREM_I8, // RTLIB::__divmodqi4
  RTLIB::SDIVREM_I32, // RTLIB::__divmodsi4
  RTLIB::SDIV_I8, // RTLIB::__divqi3
  RTLIB::DIV_F32, // RTLIB::__divsf3
  RTLIB::DIV_F32, // RTLIB::__divsf3vfp
  RTLIB::SDIV_I32, // RTLIB::__divsi3
  RTLIB::DIV_F128, // RTLIB::__divtf3
  RTLIB::SDIV_I128, // RTLIB::__divti3
  RTLIB::DIV_F80, // RTLIB::__divxf3
  RTLIB::FPTOSINT_F64_I64, // RTLIB::__dtoi64
  RTLIB::FPTOUINT_F64_I64, // RTLIB::__dtou64
  RTLIB::OEQ_F64, // RTLIB::__eqdf2
  RTLIB::OEQ_F64, // RTLIB::__eqdf2vfp
  RTLIB::OEQ_F128, // RTLIB::__eqkf2
  RTLIB::OEQ_F32, // RTLIB::__eqsf2
  RTLIB::OEQ_F32, // RTLIB::__eqsf2vfp
  RTLIB::OEQ_F128, // RTLIB::__eqtf2
  RTLIB::EXP2_FINITE_F64, // RTLIB::__exp2_finite
  RTLIB::EXP2_FINITE_F128, // RTLIB::__exp2f128_finite
  RTLIB::EXP2_FINITE_F32, // RTLIB::__exp2f_finite
  RTLIB::EXP2_FINITE_F80, // RTLIB::__exp2l_finite_f80
  RTLIB::EXP2_FINITE_F128, // RTLIB::__exp2l_finite_f128
  RTLIB::EXP2_FINITE_PPCF128, // RTLIB::__exp2l_finite_ppcf128
  RTLIB::EXP10_F64, // RTLIB::__exp10
  RTLIB::EXP10_F32, // RTLIB::__exp10f
  RTLIB::EXP10_FINITE_F128, // RTLIB::__exp10f128_finite
  RTLIB::EXP_FINITE_F64, // RTLIB::__exp_finite
  RTLIB::EXP_FINITE_F128, // RTLIB::__expf128_finite
  RTLIB::EXP_FINITE_F32, // RTLIB::__expf_finite
  RTLIB::EXP_FINITE_F80, // RTLIB::__expl_finite_f80
  RTLIB::EXP_FINITE_F128, // RTLIB::__expl_finite_f128
  RTLIB::EXP_FINITE_PPCF128, // RTLIB::__expl_finite_ppcf128
  RTLIB::FPEXT_BF16_F32, // RTLIB::__extendbfsf2
  RTLIB::FPEXT_F64_F128, // RTLIB::__extenddfkf2
  RTLIB::FPEXT_F64_F128, // RTLIB::__extenddftf2
  RTLIB::FPEXT_F16_F64, // RTLIB::__extendhfdf2
  RTLIB::FPEXT_F16_F32, // RTLIB::__extendhfsf2
  RTLIB::FPEXT_F16_F128, // RTLIB::__extendhftf2
  RTLIB::FPEXT_F16_F80, // RTLIB::__extendhfxf2
  RTLIB::CONVERT_F128_PPCF128, // RTLIB::__extendkftf2
  RTLIB::FPEXT_F32_F64, // RTLIB::__extendsfdf2
  RTLIB::FPEXT_F32_F64, // RTLIB::__extendsfdf2vfp
  RTLIB::FPEXT_F32_F128, // RTLIB::__extendsfkf2
  RTLIB::FPEXT_F32_F128, // RTLIB::__extendsftf2
  RTLIB::FPEXT_F80_F128, // RTLIB::__extendxftf2
  RTLIB::FPTOSINT_F64_I64, // RTLIB::__fixdfdi
  RTLIB::FPTOSINT_F64_I32, // RTLIB::__fixdfsi
  RTLIB::FPTOSINT_F64_I32, // RTLIB::__fixdfsivfp
  RTLIB::FPTOSINT_F64_I128, // RTLIB::__fixdfti
  RTLIB::FPTOSINT_F16_I64, // RTLIB::__fixhfdi
  RTLIB::FPTOSINT_F16_I32, // RTLIB::__fixhfsi
  RTLIB::FPTOSINT_F16_I128, // RTLIB::__fixhfti
  RTLIB::FPTOSINT_F128_I64, // RTLIB::__fixkfdi
  RTLIB::FPTOSINT_F128_I32, // RTLIB::__fixkfsi
  RTLIB::FPTOSINT_F128_I128, // RTLIB::__fixkfti
  RTLIB::FPTOSINT_F32_I64, // RTLIB::__fixsfdi
  RTLIB::FPTOSINT_F32_I32, // RTLIB::__fixsfsi
  RTLIB::FPTOSINT_F32_I32, // RTLIB::__fixsfsivfp
  RTLIB::FPTOSINT_F32_I128, // RTLIB::__fixsfti
  RTLIB::FPTOSINT_F128_I64, // RTLIB::__fixtfdi_f128
  RTLIB::FPTOSINT_PPCF128_I64, // RTLIB::__fixtfdi_ppcf128
  RTLIB::FPTOSINT_F128_I32, // RTLIB::__fixtfsi
  RTLIB::FPTOSINT_F128_I128, // RTLIB::__fixtfti_f128
  RTLIB::FPTOSINT_PPCF128_I128, // RTLIB::__fixtfti_ppcf128
  RTLIB::FPTOUINT_F64_I64, // RTLIB::__fixunsdfdi
  RTLIB::FPTOUINT_F64_I32, // RTLIB::__fixunsdfsi
  RTLIB::FPTOUINT_F64_I32, // RTLIB::__fixunsdfsivfp
  RTLIB::FPTOUINT_F64_I128, // RTLIB::__fixunsdfti
  RTLIB::FPTOUINT_F16_I64, // RTLIB::__fixunshfdi
  RTLIB::FPTOUINT_F16_I32, // RTLIB::__fixunshfsi
  RTLIB::FPTOUINT_F16_I128, // RTLIB::__fixunshfti
  RTLIB::FPTOUINT_F128_I64, // RTLIB::__fixunskfdi
  RTLIB::FPTOUINT_F128_I32, // RTLIB::__fixunskfsi
  RTLIB::FPTOUINT_F128_I128, // RTLIB::__fixunskfti
  RTLIB::FPTOUINT_F32_I64, // RTLIB::__fixunssfdi
  RTLIB::FPTOUINT_F32_I32, // RTLIB::__fixunssfsi
  RTLIB::FPTOUINT_F32_I32, // RTLIB::__fixunssfsivfp
  RTLIB::FPTOUINT_F32_I128, // RTLIB::__fixunssfti
  RTLIB::FPTOUINT_F128_I64, // RTLIB::__fixunstfdi_f128
  RTLIB::FPTOUINT_PPCF128_I64, // RTLIB::__fixunstfdi_ppcf128
  RTLIB::FPTOUINT_F128_I32, // RTLIB::__fixunstfsi_f128
  RTLIB::FPTOUINT_PPCF128_I32, // RTLIB::__fixunstfsi_ppcf128
  RTLIB::FPTOUINT_F128_I128, // RTLIB::__fixunstfti_f128
  RTLIB::FPTOUINT_PPCF128_I128, // RTLIB::__fixunstfti_ppcf128
  RTLIB::FPTOUINT_F80_I64, // RTLIB::__fixunsxfdi
  RTLIB::FPTOUINT_F80_I32, // RTLIB::__fixunsxfsi
  RTLIB::FPTOUINT_F80_I128, // RTLIB::__fixunsxfti
  RTLIB::FPTOSINT_F80_I64, // RTLIB::__fixxfdi
  RTLIB::FPTOSINT_F80_I32, // RTLIB::__fixxfsi
  RTLIB::FPTOSINT_F80_I128, // RTLIB::__fixxfti
  RTLIB::SINTTOFP_I64_BF16, // RTLIB::__floatdibf
  RTLIB::SINTTOFP_I64_F64, // RTLIB::__floatdidf
  RTLIB::SINTTOFP_I64_F16, // RTLIB::__floatdihf
  RTLIB::SINTTOFP_I64_F128, // RTLIB::__floatdikf
  RTLIB::SINTTOFP_I64_F32, // RTLIB::__floatdisf
  RTLIB::SINTTOFP_I64_F128, // RTLIB::__floatditf_f128
  RTLIB::SINTTOFP_I64_PPCF128, // RTLIB::__floatditf_ppcf128
  RTLIB::SINTTOFP_I64_F80, // RTLIB::__floatdixf
  RTLIB::SINTTOFP_I32_F64, // RTLIB::__floatsidf
  RTLIB::SINTTOFP_I32_F64, // RTLIB::__floatsidfvfp
  RTLIB::SINTTOFP_I32_F16, // RTLIB::__floatsihf
  RTLIB::SINTTOFP_I32_F128, // RTLIB::__floatsikf
  RTLIB::SINTTOFP_I32_F32, // RTLIB::__floatsisf
  RTLIB::SINTTOFP_I32_F32, // RTLIB::__floatsisfvfp
  RTLIB::SINTTOFP_I32_F128, // RTLIB::__floatsitf
  RTLIB::SINTTOFP_I32_F80, // RTLIB::__floatsixf
  RTLIB::SINTTOFP_I128_F64, // RTLIB::__floattidf
  RTLIB::SINTTOFP_I128_F16, // RTLIB::__floattihf
  RTLIB::SINTTOFP_I128_F128, // RTLIB::__floattikf
  RTLIB::SINTTOFP_I128_F32, // RTLIB::__floattisf
  RTLIB::SINTTOFP_I128_F128, // RTLIB::__floattitf_f128
  RTLIB::SINTTOFP_I128_PPCF128, // RTLIB::__floattitf_ppcf128
  RTLIB::SINTTOFP_I128_F80, // RTLIB::__floattixf
  RTLIB::UINTTOFP_I64_BF16, // RTLIB::__floatundibf
  RTLIB::UINTTOFP_I64_F64, // RTLIB::__floatundidf
  RTLIB::UINTTOFP_I64_F16, // RTLIB::__floatundihf
  RTLIB::UINTTOFP_I64_F128, // RTLIB::__floatundikf
  RTLIB::UINTTOFP_I64_F32, // RTLIB::__floatundisf
  RTLIB::UINTTOFP_I64_F128, // RTLIB::__floatunditf_f128
  RTLIB::UINTTOFP_I64_PPCF128, // RTLIB::__floatunditf_ppcf128
  RTLIB::UINTTOFP_I64_F80, // RTLIB::__floatundixf
  RTLIB::UINTTOFP_I32_F64, // RTLIB::__floatunsidf
  RTLIB::UINTTOFP_I32_F16, // RTLIB::__floatunsihf
  RTLIB::UINTTOFP_I32_F128, // RTLIB::__floatunsikf
  RTLIB::UINTTOFP_I32_F32, // RTLIB::__floatunsisf
  RTLIB::UINTTOFP_I32_F128, // RTLIB::__floatunsitf
  RTLIB::UINTTOFP_I32_F80, // RTLIB::__floatunsixf
  RTLIB::UINTTOFP_I32_F64, // RTLIB::__floatunssidfvfp
  RTLIB::UINTTOFP_I32_F32, // RTLIB::__floatunssisfvfp
  RTLIB::UINTTOFP_I128_F64, // RTLIB::__floatuntidf
  RTLIB::UINTTOFP_I128_F16, // RTLIB::__floatuntihf
  RTLIB::UINTTOFP_I128_F128, // RTLIB::__floatuntikf
  RTLIB::UINTTOFP_I128_F32, // RTLIB::__floatuntisf
  RTLIB::UINTTOFP_I128_F128, // RTLIB::__floatuntitf_f128
  RTLIB::UINTTOFP_I128_PPCF128, // RTLIB::__floatuntitf_ppcf128
  RTLIB::UINTTOFP_I128_F80, // RTLIB::__floatuntixf
  RTLIB::FPEXT_F64_PPCF128, // RTLIB::__gcc_dtoq
  RTLIB::SINTTOFP_I32_PPCF128, // RTLIB::__gcc_itoq
  RTLIB::ADD_PPCF128, // RTLIB::__gcc_qadd
  RTLIB::DIV_PPCF128, // RTLIB::__gcc_qdiv
  RTLIB::OEQ_PPCF128, // RTLIB::__gcc_qeq
  RTLIB::OGE_PPCF128, // RTLIB::__gcc_qge
  RTLIB::OGT_PPCF128, // RTLIB::__gcc_qgt
  RTLIB::OLE_PPCF128, // RTLIB::__gcc_qle
  RTLIB::OLT_PPCF128, // RTLIB::__gcc_qlt
  RTLIB::MUL_PPCF128, // RTLIB::__gcc_qmul
  RTLIB::UNE_PPCF128, // RTLIB::__gcc_qne
  RTLIB::SUB_PPCF128, // RTLIB::__gcc_qsub
  RTLIB::FPROUND_PPCF128_F64, // RTLIB::__gcc_qtod
  RTLIB::FPROUND_PPCF128_F32, // RTLIB::__gcc_qtos
  RTLIB::FPTOSINT_PPCF128_I32, // RTLIB::__gcc_qtou
  RTLIB::UO_PPCF128, // RTLIB::__gcc_qunord
  RTLIB::FPEXT_F32_PPCF128, // RTLIB::__gcc_stoq
  RTLIB::UINTTOFP_I32_PPCF128, // RTLIB::__gcc_utoq
  RTLIB::OGE_F64, // RTLIB::__gedf2
  RTLIB::OGE_F64, // RTLIB::__gedf2vfp
  RTLIB::OGE_F128, // RTLIB::__gekf2
  RTLIB::OGE_F32, // RTLIB::__gesf2
  RTLIB::OGE_F32, // RTLIB::__gesf2vfp
  RTLIB::OGE_F128, // RTLIB::__getf2
  RTLIB::FPROUND_F32_F16, // RTLIB::__gnu_f2h_ieee
  RTLIB::FPEXT_F16_F32, // RTLIB::__gnu_h2f_ieee
  RTLIB::OGT_F64, // RTLIB::__gtdf2
  RTLIB::OGT_F64, // RTLIB::__gtdf2vfp
  RTLIB::OGT_F128, // RTLIB::__gtkf2
  RTLIB::OGT_F32, // RTLIB::__gtsf2
  RTLIB::OGT_F32, // RTLIB::__gtsf2vfp
  RTLIB::OGT_F128, // RTLIB::__gttf2
  RTLIB::ADD_F64, // RTLIB::__hexagon_adddf3
  RTLIB::DIV_F64, // RTLIB::__hexagon_divdf3
  RTLIB::SDIV_I64, // RTLIB::__hexagon_divdi3
  RTLIB::DIV_F32, // RTLIB::__hexagon_divsf3
  RTLIB::SDIV_I32, // RTLIB::__hexagon_divsi3
  RTLIB::FAST_SQRT_F64, // RTLIB::__hexagon_fast2_sqrtdf2
  RTLIB::FAST_SQRT_F32, // RTLIB::__hexagon_fast2_sqrtf
  RTLIB::FAST_ADD_F64, // RTLIB::__hexagon_fast_adddf3
  RTLIB::FAST_DIV_F64, // RTLIB::__hexagon_fast_divdf3
  RTLIB::FAST_DIV_F32, // RTLIB::__hexagon_fast_divsf3
  RTLIB::FAST_MUL_F64, // RTLIB::__hexagon_fast_muldf3
  RTLIB::FAST_SUB_F64, // RTLIB::__hexagon_fast_subdf3
  RTLIB::HEXAGON_MEMCPY_LIKELY_ALIGNED_MIN32BYTES_MULT8BYTES, // RTLIB::__hexagon_memcpy_likely_aligned_min32bytes_mult8bytes
  RTLIB::SREM_I64, // RTLIB::__hexagon_moddi3
  RTLIB::SREM_I32, // RTLIB::__hexagon_modsi3
  RTLIB::MUL_F64, // RTLIB::__hexagon_muldf3
  RTLIB::SQRT_F32, // RTLIB::__hexagon_sqrtf
  RTLIB::SUB_F64, // RTLIB::__hexagon_subdf3
  RTLIB::UDIV_I64, // RTLIB::__hexagon_udivdi3
  RTLIB::UDIV_I32, // RTLIB::__hexagon_udivsi3
  RTLIB::UREM_I64, // RTLIB::__hexagon_umoddi3
  RTLIB::UREM_I32, // RTLIB::__hexagon_umodsi3
  RTLIB::SINTTOFP_I64_F64, // RTLIB::__i64tod
  RTLIB::SINTTOFP_I64_F32, // RTLIB::__i64tos
  RTLIB::OLE_F64, // RTLIB::__ledf2
  RTLIB::OLE_F64, // RTLIB::__ledf2vfp
  RTLIB::OLE_F128, // RTLIB::__lekf2
  RTLIB::OLE_F32, // RTLIB::__lesf2
  RTLIB::OLE_F32, // RTLIB::__lesf2vfp
  RTLIB::OLE_F128, // RTLIB::__letf2
  RTLIB::DEOPTIMIZE, // RTLIB::__llvm_deoptimize
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, // RTLIB::__llvm_memcpy_element_unordered_atomic_1
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, // RTLIB::__llvm_memcpy_element_unordered_atomic_2
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, // RTLIB::__llvm_memcpy_element_unordered_atomic_4
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, // RTLIB::__llvm_memcpy_element_unordered_atomic_8
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, // RTLIB::__llvm_memcpy_element_unordered_atomic_16
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, // RTLIB::__llvm_memmove_element_unordered_atomic_1
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, // RTLIB::__llvm_memmove_element_unordered_atomic_2
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, // RTLIB::__llvm_memmove_element_unordered_atomic_4
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, // RTLIB::__llvm_memmove_element_unordered_atomic_8
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, // RTLIB::__llvm_memmove_element_unordered_atomic_16
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, // RTLIB::__llvm_memset_element_unordered_atomic_1
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, // RTLIB::__llvm_memset_element_unordered_atomic_2
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, // RTLIB::__llvm_memset_element_unordered_atomic_4
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, // RTLIB::__llvm_memset_element_unordered_atomic_8
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, // RTLIB::__llvm_memset_element_unordered_atomic_16
  RTLIB::LOG2_FINITE_F64, // RTLIB::__log2_finite
  RTLIB::LOG2_FINITE_F128, // RTLIB::__log2f128_finite
  RTLIB::LOG2_FINITE_F32, // RTLIB::__log2f_finite
  RTLIB::LOG2_FINITE_F80, // RTLIB::__log2l_finite_f80
  RTLIB::LOG2_FINITE_F128, // RTLIB::__log2l_finite_f128
  RTLIB::LOG2_FINITE_PPCF128, // RTLIB::__log2l_finite_ppcf128
  RTLIB::LOG10_FINITE_F64, // RTLIB::__log10_finite
  RTLIB::LOG10_FINITE_F128, // RTLIB::__log10f128_finite
  RTLIB::LOG10_FINITE_F32, // RTLIB::__log10f_finite
  RTLIB::LOG10_FINITE_F80, // RTLIB::__log10l_finite_f80
  RTLIB::LOG10_FINITE_F128, // RTLIB::__log10l_finite_f128
  RTLIB::LOG10_FINITE_PPCF128, // RTLIB::__log10l_finite_ppcf128
  RTLIB::LOG_FINITE_F64, // RTLIB::__log_finite
  RTLIB::LOG_FINITE_F128, // RTLIB::__logf128_finite
  RTLIB::LOG_FINITE_F32, // RTLIB::__logf_finite
  RTLIB::LOG_FINITE_F80, // RTLIB::__logl_finite_f80
  RTLIB::LOG_FINITE_F128, // RTLIB::__logl_finite_f128
  RTLIB::LOG_FINITE_PPCF128, // RTLIB::__logl_finite_ppcf128
  RTLIB::SRL_I64, // RTLIB::__lshrdi3
  RTLIB::SRL_I16, // RTLIB::__lshrhi3
  RTLIB::SRL_I32, // RTLIB::__lshrsi3
  RTLIB::SRL_I128, // RTLIB::__lshrti3
  RTLIB::OLT_F64, // RTLIB::__ltdf2
  RTLIB::OLT_F64, // RTLIB::__ltdf2vfp
  RTLIB::OLT_F128, // RTLIB::__ltkf2
  RTLIB::OLT_F32, // RTLIB::__ltsf2
  RTLIB::OLT_F32, // RTLIB::__ltsf2vfp
  RTLIB::OLT_F128, // RTLIB::__lttf2
  RTLIB::MEMCPY_ALIGN_4, // RTLIB::__memcpy_4
  RTLIB::ADD_F64, // RTLIB::__mips16_adddf3
  RTLIB::ADD_F32, // RTLIB::__mips16_addsf3
  RTLIB::DIV_F64, // RTLIB::__mips16_divdf3
  RTLIB::DIV_F32, // RTLIB::__mips16_divsf3
  RTLIB::OEQ_F64, // RTLIB::__mips16_eqdf2
  RTLIB::OEQ_F32, // RTLIB::__mips16_eqsf2
  RTLIB::FPEXT_F32_F64, // RTLIB::__mips16_extendsfdf2
  RTLIB::FPTOSINT_F64_I32, // RTLIB::__mips16_fix_truncdfsi
  RTLIB::FPTOSINT_F32_I32, // RTLIB::__mips16_fix_truncsfsi
  RTLIB::SINTTOFP_I32_F64, // RTLIB::__mips16_floatsidf
  RTLIB::SINTTOFP_I32_F32, // RTLIB::__mips16_floatsisf
  RTLIB::UINTTOFP_I32_F64, // RTLIB::__mips16_floatunsidf
  RTLIB::UINTTOFP_I32_F32, // RTLIB::__mips16_floatunsisf
  RTLIB::OGE_F64, // RTLIB::__mips16_gedf2
  RTLIB::OGE_F32, // RTLIB::__mips16_gesf2
  RTLIB::OGT_F64, // RTLIB::__mips16_gtdf2
  RTLIB::OGT_F32, // RTLIB::__mips16_gtsf2
  RTLIB::OLE_F64, // RTLIB::__mips16_ledf2
  RTLIB::OLE_F32, // RTLIB::__mips16_lesf2
  RTLIB::OLT_F64, // RTLIB::__mips16_ltdf2
  RTLIB::OLT_F32, // RTLIB::__mips16_ltsf2
  RTLIB::MUL_F64, // RTLIB::__mips16_muldf3
  RTLIB::MUL_F32, // RTLIB::__mips16_mulsf3
  RTLIB::UNE_F64, // RTLIB::__mips16_nedf2
  RTLIB::UNE_F32, // RTLIB::__mips16_nesf2
  RTLIB::MIPS16_RET_DC, // RTLIB::__mips16_ret_dc
  RTLIB::MIPS16_RET_DF, // RTLIB::__mips16_ret_df
  RTLIB::MIPS16_RET_SC, // RTLIB::__mips16_ret_sc
  RTLIB::MIPS16_RET_SF, // RTLIB::__mips16_ret_sf
  RTLIB::SUB_F64, // RTLIB::__mips16_subdf3
  RTLIB::SUB_F32, // RTLIB::__mips16_subsf3
  RTLIB::FPROUND_F64_F32, // RTLIB::__mips16_truncdfsf2
  RTLIB::UO_F64, // RTLIB::__mips16_unorddf2
  RTLIB::UO_F32, // RTLIB::__mips16_unordsf2
  RTLIB::SREM_I64, // RTLIB::__moddi3
  RTLIB::SREM_I16, // RTLIB::__modhi3
  RTLIB::SREM_I8, // RTLIB::__modqi3
  RTLIB::SREM_I32, // RTLIB::__modsi3
  RTLIB::SREM_I128, // RTLIB::__modti3
  RTLIB::ADD_F64, // RTLIB::__mspabi_addd
  RTLIB::ADD_F32, // RTLIB::__mspabi_addf
  RTLIB::OEQ_F64, // RTLIB::__mspabi_cmpd__oeq
  RTLIB::OGE_F64, // RTLIB::__mspabi_cmpd__oge
  RTLIB::OGT_F64, // RTLIB::__mspabi_cmpd__ogt
  RTLIB::OLE_F64, // RTLIB::__mspabi_cmpd__ole
  RTLIB::OLT_F64, // RTLIB::__mspabi_cmpd__olt
  RTLIB::UNE_F64, // RTLIB::__mspabi_cmpd__une
  RTLIB::OEQ_F32, // RTLIB::__mspabi_cmpf__oeq
  RTLIB::OGE_F32, // RTLIB::__mspabi_cmpf__oge
  RTLIB::OGT_F32, // RTLIB::__mspabi_cmpf__ogt
  RTLIB::OLE_F32, // RTLIB::__mspabi_cmpf__ole
  RTLIB::OLT_F32, // RTLIB::__mspabi_cmpf__olt
  RTLIB::UNE_F32, // RTLIB::__mspabi_cmpf__une
  RTLIB::FPROUND_F64_F32, // RTLIB::__mspabi_cvtdf
  RTLIB::FPEXT_F32_F64, // RTLIB::__mspabi_cvtfd
  RTLIB::DIV_F64, // RTLIB::__mspabi_divd
  RTLIB::DIV_F32, // RTLIB::__mspabi_divf
  RTLIB::SDIV_I16, // RTLIB::__mspabi_divi
  RTLIB::SDIV_I32, // RTLIB::__mspabi_divli
  RTLIB::SDIV_I64, // RTLIB::__mspabi_divlli
  RTLIB::UDIV_I16, // RTLIB::__mspabi_divu
  RTLIB::UDIV_I32, // RTLIB::__mspabi_divul
  RTLIB::UDIV_I64, // RTLIB::__mspabi_divull
  RTLIB::FPTOSINT_F64_I32, // RTLIB::__mspabi_fixdli
  RTLIB::FPTOSINT_F64_I64, // RTLIB::__mspabi_fixdlli
  RTLIB::FPTOUINT_F64_I32, // RTLIB::__mspabi_fixdul
  RTLIB::FPTOUINT_F64_I64, // RTLIB::__mspabi_fixdull
  RTLIB::FPTOSINT_F32_I32, // RTLIB::__mspabi_fixfli
  RTLIB::FPTOSINT_F32_I64, // RTLIB::__mspabi_fixflli
  RTLIB::FPTOUINT_F32_I32, // RTLIB::__mspabi_fixful
  RTLIB::FPTOUINT_F32_I64, // RTLIB::__mspabi_fixfull
  RTLIB::SINTTOFP_I32_F64, // RTLIB::__mspabi_fltlid
  RTLIB::SINTTOFP_I32_F32, // RTLIB::__mspabi_fltlif
  RTLIB::SINTTOFP_I64_F64, // RTLIB::__mspabi_fltllid
  RTLIB::SINTTOFP_I64_F32, // RTLIB::__mspabi_fltllif
  RTLIB::UINTTOFP_I32_F64, // RTLIB::__mspabi_fltuld
  RTLIB::UINTTOFP_I32_F32, // RTLIB::__mspabi_fltulf
  RTLIB::UINTTOFP_I64_F64, // RTLIB::__mspabi_fltulld
  RTLIB::UINTTOFP_I64_F32, // RTLIB::__mspabi_fltullf
  RTLIB::MUL_F64, // RTLIB::__mspabi_mpyd
  RTLIB::MUL_F32, // RTLIB::__mspabi_mpyf
  RTLIB::MUL_I16, // RTLIB::__mspabi_mpyi
  RTLIB::MUL_I16, // RTLIB::__mspabi_mpyi_f5hw
  RTLIB::MUL_I16, // RTLIB::__mspabi_mpyi_hw
  RTLIB::MUL_I32, // RTLIB::__mspabi_mpyl
  RTLIB::MUL_I32, // RTLIB::__mspabi_mpyl_f5hw
  RTLIB::MUL_I32, // RTLIB::__mspabi_mpyl_hw
  RTLIB::MUL_I32, // RTLIB::__mspabi_mpyl_hw32
  RTLIB::MUL_I64, // RTLIB::__mspabi_mpyll
  RTLIB::MUL_I64, // RTLIB::__mspabi_mpyll_f5hw
  RTLIB::MUL_I64, // RTLIB::__mspabi_mpyll_hw
  RTLIB::MUL_I64, // RTLIB::__mspabi_mpyll_hw32
  RTLIB::SREM_I16, // RTLIB::__mspabi_remi
  RTLIB::SREM_I32, // RTLIB::__mspabi_remli
  RTLIB::SREM_I64, // RTLIB::__mspabi_remlli
  RTLIB::UREM_I16, // RTLIB::__mspabi_remu
  RTLIB::UREM_I32, // RTLIB::__mspabi_remul
  RTLIB::UREM_I64, // RTLIB::__mspabi_remull
  RTLIB::SHL_I32, // RTLIB::__mspabi_slll
  RTLIB::SRA_I32, // RTLIB::__mspabi_sral
  RTLIB::SRL_I32, // RTLIB::__mspabi_srll
  RTLIB::SUB_F64, // RTLIB::__mspabi_subd
  RTLIB::SUB_F32, // RTLIB::__mspabi_subf
  RTLIB::MUL_F64, // RTLIB::__muldf3
  RTLIB::MUL_F64, // RTLIB::__muldf3vfp
  RTLIB::MUL_I64, // RTLIB::__muldi3
  RTLIB::MUL_I16, // RTLIB::__mulhi3
  RTLIB::MUL_F128, // RTLIB::__mulkf3
  RTLIB::MULO_I64, // RTLIB::__mulodi4
  RTLIB::MULO_I32, // RTLIB::__mulosi4
  RTLIB::MULO_I128, // RTLIB::__muloti4
  RTLIB::MUL_I8, // RTLIB::__mulqi3
  RTLIB::MUL_F32, // RTLIB::__mulsf3
  RTLIB::MUL_F32, // RTLIB::__mulsf3vfp
  RTLIB::MUL_I32, // RTLIB::__mulsi3
  RTLIB::MUL_F128, // RTLIB::__multf3
  RTLIB::MUL_I128, // RTLIB::__multi3
  RTLIB::MUL_F80, // RTLIB::__mulxf3
  RTLIB::UNE_F64, // RTLIB::__nedf2
  RTLIB::UNE_F64, // RTLIB::__nedf2vfp
  RTLIB::NEG_I64, // RTLIB::__negdi2
  RTLIB::NEG_I32, // RTLIB::__negsi2
  RTLIB::UNE_F128, // RTLIB::__nekf2
  RTLIB::UNE_F32, // RTLIB::__nesf2
  RTLIB::UNE_F32, // RTLIB::__nesf2vfp
  RTLIB::UNE_F128, // RTLIB::__netf2
  RTLIB::CTPOP_I64, // RTLIB::__popcountdi2
  RTLIB::CTPOP_I32, // RTLIB::__popcountsi2
  RTLIB::CTPOP_I128, // RTLIB::__popcountti2
  RTLIB::POW_FINITE_F64, // RTLIB::__pow_finite
  RTLIB::POW_FINITE_F128, // RTLIB::__powf128_finite
  RTLIB::POW_FINITE_F32, // RTLIB::__powf_finite
  RTLIB::POWI_F64, // RTLIB::__powidf2
  RTLIB::POWI_F128, // RTLIB::__powikf2
  RTLIB::POWI_F32, // RTLIB::__powisf2
  RTLIB::POWI_F128, // RTLIB::__powitf2_f128
  RTLIB::POWI_PPCF128, // RTLIB::__powitf2_ppc128
  RTLIB::POWI_F80, // RTLIB::__powixf2
  RTLIB::POW_FINITE_F80, // RTLIB::__powl_finite_f80
  RTLIB::POW_FINITE_F128, // RTLIB::__powl_finite_f128
  RTLIB::POW_FINITE_PPCF128, // RTLIB::__powl_finite_ppcf128
  RTLIB::RISCV_FLUSH_ICACHE, // RTLIB::__riscv_flush_icache
  RTLIB::SDIVREM_I32, // RTLIB::__rt_sdiv
  RTLIB::SDIVREM_I64, // RTLIB::__rt_sdiv64
  RTLIB::UDIVREM_I32, // RTLIB::__rt_udiv
  RTLIB::UDIVREM_I64, // RTLIB::__rt_udiv64
  RTLIB::SAFESTACK_POINTER_ADDRESS, // RTLIB::__safestack_pointer_address
  RTLIB::SINCOS_STRET_F64, // RTLIB::__sincos_stret
  RTLIB::SINCOS_STRET_F32, // RTLIB::__sincosf_stret
  RTLIB::STACKPROTECTOR_CHECK_FAIL, // RTLIB::__stack_chk_fail
  RTLIB::STACK_SMASH_HANDLER, // RTLIB::__stack_smash_handler
  RTLIB::FPTOSINT_F32_I64, // RTLIB::__stoi64
  RTLIB::FPTOUINT_F32_I64, // RTLIB::__stou64
  RTLIB::SUB_F64, // RTLIB::__subdf3
  RTLIB::SUB_F64, // RTLIB::__subdf3vfp
  RTLIB::SUB_F128, // RTLIB::__subkf3
  RTLIB::SUB_F32, // RTLIB::__subsf3
  RTLIB::SUB_F32, // RTLIB::__subsf3vfp
  RTLIB::SUB_F128, // RTLIB::__subtf3
  RTLIB::SUB_F80, // RTLIB::__subxf3
  RTLIB::SYNC_FETCH_AND_ADD_1, // RTLIB::__sync_fetch_and_add_1
  RTLIB::SYNC_FETCH_AND_ADD_2, // RTLIB::__sync_fetch_and_add_2
  RTLIB::SYNC_FETCH_AND_ADD_4, // RTLIB::__sync_fetch_and_add_4
  RTLIB::SYNC_FETCH_AND_ADD_8, // RTLIB::__sync_fetch_and_add_8
  RTLIB::SYNC_FETCH_AND_ADD_16, // RTLIB::__sync_fetch_and_add_16
  RTLIB::SYNC_FETCH_AND_AND_1, // RTLIB::__sync_fetch_and_and_1
  RTLIB::SYNC_FETCH_AND_AND_2, // RTLIB::__sync_fetch_and_and_2
  RTLIB::SYNC_FETCH_AND_AND_4, // RTLIB::__sync_fetch_and_and_4
  RTLIB::SYNC_FETCH_AND_AND_8, // RTLIB::__sync_fetch_and_and_8
  RTLIB::SYNC_FETCH_AND_AND_16, // RTLIB::__sync_fetch_and_and_16
  RTLIB::SYNC_FETCH_AND_MAX_1, // RTLIB::__sync_fetch_and_max_1
  RTLIB::SYNC_FETCH_AND_MAX_2, // RTLIB::__sync_fetch_and_max_2
  RTLIB::SYNC_FETCH_AND_MAX_4, // RTLIB::__sync_fetch_and_max_4
  RTLIB::SYNC_FETCH_AND_MAX_8, // RTLIB::__sync_fetch_and_max_8
  RTLIB::SYNC_FETCH_AND_MAX_16, // RTLIB::__sync_fetch_and_max_16
  RTLIB::SYNC_FETCH_AND_MIN_1, // RTLIB::__sync_fetch_and_min_1
  RTLIB::SYNC_FETCH_AND_MIN_2, // RTLIB::__sync_fetch_and_min_2
  RTLIB::SYNC_FETCH_AND_MIN_4, // RTLIB::__sync_fetch_and_min_4
  RTLIB::SYNC_FETCH_AND_MIN_8, // RTLIB::__sync_fetch_and_min_8
  RTLIB::SYNC_FETCH_AND_MIN_16, // RTLIB::__sync_fetch_and_min_16
  RTLIB::SYNC_FETCH_AND_NAND_1, // RTLIB::__sync_fetch_and_nand_1
  RTLIB::SYNC_FETCH_AND_NAND_2, // RTLIB::__sync_fetch_and_nand_2
  RTLIB::SYNC_FETCH_AND_NAND_4, // RTLIB::__sync_fetch_and_nand_4
  RTLIB::SYNC_FETCH_AND_NAND_8, // RTLIB::__sync_fetch_and_nand_8
  RTLIB::SYNC_FETCH_AND_NAND_16, // RTLIB::__sync_fetch_and_nand_16
  RTLIB::SYNC_FETCH_AND_OR_1, // RTLIB::__sync_fetch_and_or_1
  RTLIB::SYNC_FETCH_AND_OR_2, // RTLIB::__sync_fetch_and_or_2
  RTLIB::SYNC_FETCH_AND_OR_4, // RTLIB::__sync_fetch_and_or_4
  RTLIB::SYNC_FETCH_AND_OR_8, // RTLIB::__sync_fetch_and_or_8
  RTLIB::SYNC_FETCH_AND_OR_16, // RTLIB::__sync_fetch_and_or_16
  RTLIB::SYNC_FETCH_AND_SUB_1, // RTLIB::__sync_fetch_and_sub_1
  RTLIB::SYNC_FETCH_AND_SUB_2, // RTLIB::__sync_fetch_and_sub_2
  RTLIB::SYNC_FETCH_AND_SUB_4, // RTLIB::__sync_fetch_and_sub_4
  RTLIB::SYNC_FETCH_AND_SUB_8, // RTLIB::__sync_fetch_and_sub_8
  RTLIB::SYNC_FETCH_AND_SUB_16, // RTLIB::__sync_fetch_and_sub_16
  RTLIB::SYNC_FETCH_AND_UMAX_1, // RTLIB::__sync_fetch_and_umax_1
  RTLIB::SYNC_FETCH_AND_UMAX_2, // RTLIB::__sync_fetch_and_umax_2
  RTLIB::SYNC_FETCH_AND_UMAX_4, // RTLIB::__sync_fetch_and_umax_4
  RTLIB::SYNC_FETCH_AND_UMAX_8, // RTLIB::__sync_fetch_and_umax_8
  RTLIB::SYNC_FETCH_AND_UMAX_16, // RTLIB::__sync_fetch_and_umax_16
  RTLIB::SYNC_FETCH_AND_UMIN_1, // RTLIB::__sync_fetch_and_umin_1
  RTLIB::SYNC_FETCH_AND_UMIN_2, // RTLIB::__sync_fetch_and_umin_2
  RTLIB::SYNC_FETCH_AND_UMIN_4, // RTLIB::__sync_fetch_and_umin_4
  RTLIB::SYNC_FETCH_AND_UMIN_8, // RTLIB::__sync_fetch_and_umin_8
  RTLIB::SYNC_FETCH_AND_UMIN_16, // RTLIB::__sync_fetch_and_umin_16
  RTLIB::SYNC_FETCH_AND_XOR_1, // RTLIB::__sync_fetch_and_xor_1
  RTLIB::SYNC_FETCH_AND_XOR_2, // RTLIB::__sync_fetch_and_xor_2
  RTLIB::SYNC_FETCH_AND_XOR_4, // RTLIB::__sync_fetch_and_xor_4
  RTLIB::SYNC_FETCH_AND_XOR_8, // RTLIB::__sync_fetch_and_xor_8
  RTLIB::SYNC_FETCH_AND_XOR_16, // RTLIB::__sync_fetch_and_xor_16
  RTLIB::SYNC_LOCK_TEST_AND_SET_1, // RTLIB::__sync_lock_test_and_set_1
  RTLIB::SYNC_LOCK_TEST_AND_SET_2, // RTLIB::__sync_lock_test_and_set_2
  RTLIB::SYNC_LOCK_TEST_AND_SET_4, // RTLIB::__sync_lock_test_and_set_4
  RTLIB::SYNC_LOCK_TEST_AND_SET_8, // RTLIB::__sync_lock_test_and_set_8
  RTLIB::SYNC_LOCK_TEST_AND_SET_16, // RTLIB::__sync_lock_test_and_set_16
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, // RTLIB::__sync_val_compare_and_swap_1
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, // RTLIB::__sync_val_compare_and_swap_2
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, // RTLIB::__sync_val_compare_and_swap_4
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, // RTLIB::__sync_val_compare_and_swap_8
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, // RTLIB::__sync_val_compare_and_swap_16
  RTLIB::FPROUND_F64_BF16, // RTLIB::__truncdfbf2
  RTLIB::FPROUND_F64_F16, // RTLIB::__truncdfhf2
  RTLIB::FPROUND_F64_F32, // RTLIB::__truncdfsf2
  RTLIB::FPROUND_F64_F32, // RTLIB::__truncdfsf2vfp
  RTLIB::FPROUND_F128_F64, // RTLIB::__trunckfdf2
  RTLIB::FPROUND_F128_F16, // RTLIB::__trunckfhf2
  RTLIB::FPROUND_F128_F32, // RTLIB::__trunckfsf2
  RTLIB::FPROUND_F32_BF16, // RTLIB::__truncsfbf2
  RTLIB::FPROUND_F32_F16, // RTLIB::__truncsfhf2
  RTLIB::FPROUND_F128_BF16, // RTLIB::__trunctfbf2
  RTLIB::FPROUND_F128_F64, // RTLIB::__trunctfdf2
  RTLIB::FPROUND_F128_F16, // RTLIB::__trunctfhf2_f128
  RTLIB::FPROUND_PPCF128_F16, // RTLIB::__trunctfhf2_ppcf128
  RTLIB::CONVERT_PPCF128_F128, // RTLIB::__trunctfkf2
  RTLIB::FPROUND_F128_F32, // RTLIB::__trunctfsf2
  RTLIB::FPROUND_F128_F80, // RTLIB::__trunctfxf2
  RTLIB::FPROUND_F80_BF16, // RTLIB::__truncxfbf2
  RTLIB::FPROUND_F80_F64, // RTLIB::__truncxfdf2
  RTLIB::FPROUND_F80_F16, // RTLIB::__truncxfhf2
  RTLIB::FPROUND_F80_F32, // RTLIB::__truncxfsf2
  RTLIB::UINTTOFP_I64_F64, // RTLIB::__u64tod
  RTLIB::UINTTOFP_I64_F32, // RTLIB::__u64tos
  RTLIB::UDIV_I64, // RTLIB::__udivdi3
  RTLIB::UDIV_I16, // RTLIB::__udivhi3
  RTLIB::UDIVREM_I16, // RTLIB::__udivmodhi4
  RTLIB::UDIVREM_I8, // RTLIB::__udivmodqi4
  RTLIB::UDIVREM_I32, // RTLIB::__udivmodsi4
  RTLIB::UDIV_I8, // RTLIB::__udivqi3
  RTLIB::UDIV_I32, // RTLIB::__udivsi3
  RTLIB::UDIV_I128, // RTLIB::__udivti3
  RTLIB::UREM_I64, // RTLIB::__umoddi3
  RTLIB::UREM_I16, // RTLIB::__umodhi3
  RTLIB::UREM_I8, // RTLIB::__umodqi3
  RTLIB::UREM_I32, // RTLIB::__umodsi3
  RTLIB::UREM_I128, // RTLIB::__umodti3
  RTLIB::UO_F64, // RTLIB::__unorddf2
  RTLIB::UO_F64, // RTLIB::__unorddf2vfp
  RTLIB::UO_F128, // RTLIB::__unordkf2
  RTLIB::UO_F32, // RTLIB::__unordsf2
  RTLIB::UO_F32, // RTLIB::__unordsf2vfp
  RTLIB::UO_F128, // RTLIB::__unordtf2
  RTLIB::SDIV_I64, // RTLIB::_alldiv
  RTLIB::MUL_I64, // RTLIB::_allmul
  RTLIB::SREM_I64, // RTLIB::_allrem
  RTLIB::UDIV_I64, // RTLIB::_aulldiv
  RTLIB::UREM_I64, // RTLIB::_aullrem
  RTLIB::ACOS_F64, // RTLIB::acos
  RTLIB::ACOS_F80, // RTLIB::acos_f80
  RTLIB::ACOS_F128, // RTLIB::acos_f128
  RTLIB::ACOS_PPCF128, // RTLIB::acos_ppcf128
  RTLIB::ACOS_F32, // RTLIB::acosf
  RTLIB::ACOS_F128, // RTLIB::acosf128
  RTLIB::UNWIND_RESUME, // RTLIB::arm64ec__Unwind_Resume
  RTLIB::OUTLINE_ATOMIC_CAS1_ACQ, // RTLIB::arm64ec___aarch64_cas1_acq
  RTLIB::OUTLINE_ATOMIC_CAS1_ACQ_REL, // RTLIB::arm64ec___aarch64_cas1_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS1_REL, // RTLIB::arm64ec___aarch64_cas1_rel
  RTLIB::OUTLINE_ATOMIC_CAS1_RELAX, // RTLIB::arm64ec___aarch64_cas1_relax
  RTLIB::OUTLINE_ATOMIC_CAS2_ACQ, // RTLIB::arm64ec___aarch64_cas2_acq
  RTLIB::OUTLINE_ATOMIC_CAS2_ACQ_REL, // RTLIB::arm64ec___aarch64_cas2_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS2_REL, // RTLIB::arm64ec___aarch64_cas2_rel
  RTLIB::OUTLINE_ATOMIC_CAS2_RELAX, // RTLIB::arm64ec___aarch64_cas2_relax
  RTLIB::OUTLINE_ATOMIC_CAS4_ACQ, // RTLIB::arm64ec___aarch64_cas4_acq
  RTLIB::OUTLINE_ATOMIC_CAS4_ACQ_REL, // RTLIB::arm64ec___aarch64_cas4_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS4_REL, // RTLIB::arm64ec___aarch64_cas4_rel
  RTLIB::OUTLINE_ATOMIC_CAS4_RELAX, // RTLIB::arm64ec___aarch64_cas4_relax
  RTLIB::OUTLINE_ATOMIC_CAS8_ACQ, // RTLIB::arm64ec___aarch64_cas8_acq
  RTLIB::OUTLINE_ATOMIC_CAS8_ACQ_REL, // RTLIB::arm64ec___aarch64_cas8_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS8_REL, // RTLIB::arm64ec___aarch64_cas8_rel
  RTLIB::OUTLINE_ATOMIC_CAS8_RELAX, // RTLIB::arm64ec___aarch64_cas8_relax
  RTLIB::OUTLINE_ATOMIC_CAS16_ACQ, // RTLIB::arm64ec___aarch64_cas16_acq
  RTLIB::OUTLINE_ATOMIC_CAS16_ACQ_REL, // RTLIB::arm64ec___aarch64_cas16_acq_rel
  RTLIB::OUTLINE_ATOMIC_CAS16_REL, // RTLIB::arm64ec___aarch64_cas16_rel
  RTLIB::OUTLINE_ATOMIC_CAS16_RELAX, // RTLIB::arm64ec___aarch64_cas16_relax
  RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ, // RTLIB::arm64ec___aarch64_ldadd1_acq
  RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ_REL, // RTLIB::arm64ec___aarch64_ldadd1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD1_REL, // RTLIB::arm64ec___aarch64_ldadd1_rel
  RTLIB::OUTLINE_ATOMIC_LDADD1_RELAX, // RTLIB::arm64ec___aarch64_ldadd1_relax
  RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ, // RTLIB::arm64ec___aarch64_ldadd2_acq
  RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ_REL, // RTLIB::arm64ec___aarch64_ldadd2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD2_REL, // RTLIB::arm64ec___aarch64_ldadd2_rel
  RTLIB::OUTLINE_ATOMIC_LDADD2_RELAX, // RTLIB::arm64ec___aarch64_ldadd2_relax
  RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ, // RTLIB::arm64ec___aarch64_ldadd4_acq
  RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ_REL, // RTLIB::arm64ec___aarch64_ldadd4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD4_REL, // RTLIB::arm64ec___aarch64_ldadd4_rel
  RTLIB::OUTLINE_ATOMIC_LDADD4_RELAX, // RTLIB::arm64ec___aarch64_ldadd4_relax
  RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ, // RTLIB::arm64ec___aarch64_ldadd8_acq
  RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ_REL, // RTLIB::arm64ec___aarch64_ldadd8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDADD8_REL, // RTLIB::arm64ec___aarch64_ldadd8_rel
  RTLIB::OUTLINE_ATOMIC_LDADD8_RELAX, // RTLIB::arm64ec___aarch64_ldadd8_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ, // RTLIB::arm64ec___aarch64_ldclr1_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ_REL, // RTLIB::arm64ec___aarch64_ldclr1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR1_REL, // RTLIB::arm64ec___aarch64_ldclr1_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR1_RELAX, // RTLIB::arm64ec___aarch64_ldclr1_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ, // RTLIB::arm64ec___aarch64_ldclr2_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ_REL, // RTLIB::arm64ec___aarch64_ldclr2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR2_REL, // RTLIB::arm64ec___aarch64_ldclr2_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR2_RELAX, // RTLIB::arm64ec___aarch64_ldclr2_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ, // RTLIB::arm64ec___aarch64_ldclr4_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ_REL, // RTLIB::arm64ec___aarch64_ldclr4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR4_REL, // RTLIB::arm64ec___aarch64_ldclr4_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR4_RELAX, // RTLIB::arm64ec___aarch64_ldclr4_relax
  RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ, // RTLIB::arm64ec___aarch64_ldclr8_acq
  RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ_REL, // RTLIB::arm64ec___aarch64_ldclr8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR8_REL, // RTLIB::arm64ec___aarch64_ldclr8_rel
  RTLIB::OUTLINE_ATOMIC_LDCLR8_RELAX, // RTLIB::arm64ec___aarch64_ldclr8_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ, // RTLIB::arm64ec___aarch64_ldeor1_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ_REL, // RTLIB::arm64ec___aarch64_ldeor1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR1_REL, // RTLIB::arm64ec___aarch64_ldeor1_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR1_RELAX, // RTLIB::arm64ec___aarch64_ldeor1_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ, // RTLIB::arm64ec___aarch64_ldeor2_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ_REL, // RTLIB::arm64ec___aarch64_ldeor2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR2_REL, // RTLIB::arm64ec___aarch64_ldeor2_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR2_RELAX, // RTLIB::arm64ec___aarch64_ldeor2_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ, // RTLIB::arm64ec___aarch64_ldeor4_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ_REL, // RTLIB::arm64ec___aarch64_ldeor4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR4_REL, // RTLIB::arm64ec___aarch64_ldeor4_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR4_RELAX, // RTLIB::arm64ec___aarch64_ldeor4_relax
  RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ, // RTLIB::arm64ec___aarch64_ldeor8_acq
  RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ_REL, // RTLIB::arm64ec___aarch64_ldeor8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR8_REL, // RTLIB::arm64ec___aarch64_ldeor8_rel
  RTLIB::OUTLINE_ATOMIC_LDEOR8_RELAX, // RTLIB::arm64ec___aarch64_ldeor8_relax
  RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ, // RTLIB::arm64ec___aarch64_ldset1_acq
  RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ_REL, // RTLIB::arm64ec___aarch64_ldset1_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET1_REL, // RTLIB::arm64ec___aarch64_ldset1_rel
  RTLIB::OUTLINE_ATOMIC_LDSET1_RELAX, // RTLIB::arm64ec___aarch64_ldset1_relax
  RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ, // RTLIB::arm64ec___aarch64_ldset2_acq
  RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ_REL, // RTLIB::arm64ec___aarch64_ldset2_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET2_REL, // RTLIB::arm64ec___aarch64_ldset2_rel
  RTLIB::OUTLINE_ATOMIC_LDSET2_RELAX, // RTLIB::arm64ec___aarch64_ldset2_relax
  RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ, // RTLIB::arm64ec___aarch64_ldset4_acq
  RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ_REL, // RTLIB::arm64ec___aarch64_ldset4_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET4_REL, // RTLIB::arm64ec___aarch64_ldset4_rel
  RTLIB::OUTLINE_ATOMIC_LDSET4_RELAX, // RTLIB::arm64ec___aarch64_ldset4_relax
  RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ, // RTLIB::arm64ec___aarch64_ldset8_acq
  RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ_REL, // RTLIB::arm64ec___aarch64_ldset8_acq_rel
  RTLIB::OUTLINE_ATOMIC_LDSET8_REL, // RTLIB::arm64ec___aarch64_ldset8_rel
  RTLIB::OUTLINE_ATOMIC_LDSET8_RELAX, // RTLIB::arm64ec___aarch64_ldset8_relax
  RTLIB::OUTLINE_ATOMIC_SWP1_ACQ, // RTLIB::arm64ec___aarch64_swp1_acq
  RTLIB::OUTLINE_ATOMIC_SWP1_ACQ_REL, // RTLIB::arm64ec___aarch64_swp1_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP1_REL, // RTLIB::arm64ec___aarch64_swp1_rel
  RTLIB::OUTLINE_ATOMIC_SWP1_RELAX, // RTLIB::arm64ec___aarch64_swp1_relax
  RTLIB::OUTLINE_ATOMIC_SWP2_ACQ, // RTLIB::arm64ec___aarch64_swp2_acq
  RTLIB::OUTLINE_ATOMIC_SWP2_ACQ_REL, // RTLIB::arm64ec___aarch64_swp2_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP2_REL, // RTLIB::arm64ec___aarch64_swp2_rel
  RTLIB::OUTLINE_ATOMIC_SWP2_RELAX, // RTLIB::arm64ec___aarch64_swp2_relax
  RTLIB::OUTLINE_ATOMIC_SWP4_ACQ, // RTLIB::arm64ec___aarch64_swp4_acq
  RTLIB::OUTLINE_ATOMIC_SWP4_ACQ_REL, // RTLIB::arm64ec___aarch64_swp4_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP4_REL, // RTLIB::arm64ec___aarch64_swp4_rel
  RTLIB::OUTLINE_ATOMIC_SWP4_RELAX, // RTLIB::arm64ec___aarch64_swp4_relax
  RTLIB::OUTLINE_ATOMIC_SWP8_ACQ, // RTLIB::arm64ec___aarch64_swp8_acq
  RTLIB::OUTLINE_ATOMIC_SWP8_ACQ_REL, // RTLIB::arm64ec___aarch64_swp8_acq_rel
  RTLIB::OUTLINE_ATOMIC_SWP8_REL, // RTLIB::arm64ec___aarch64_swp8_rel
  RTLIB::OUTLINE_ATOMIC_SWP8_RELAX, // RTLIB::arm64ec___aarch64_swp8_relax
  RTLIB::ADD_F64, // RTLIB::arm64ec___adddf3
  RTLIB::ADD_F32, // RTLIB::arm64ec___addsf3
  RTLIB::ADD_F128, // RTLIB::arm64ec___addtf3
  RTLIB::SC_MEMCPY, // RTLIB::arm64ec___arm_sc_memcpy
  RTLIB::SC_MEMMOVE, // RTLIB::arm64ec___arm_sc_memmove
  RTLIB::SC_MEMSET, // RTLIB::arm64ec___arm_sc_memset
  RTLIB::SHL_I64, // RTLIB::arm64ec___ashldi3
  RTLIB::SHL_I16, // RTLIB::arm64ec___ashlhi3
  RTLIB::SHL_I32, // RTLIB::arm64ec___ashlsi3
  RTLIB::SHL_I128, // RTLIB::arm64ec___ashlti3
  RTLIB::SRA_I64, // RTLIB::arm64ec___ashrdi3
  RTLIB::SRA_I16, // RTLIB::arm64ec___ashrhi3
  RTLIB::SRA_I32, // RTLIB::arm64ec___ashrsi3
  RTLIB::SRA_I128, // RTLIB::arm64ec___ashrti3
  RTLIB::ATOMIC_COMPARE_EXCHANGE, // RTLIB::arm64ec___atomic_compare_exchange
  RTLIB::ATOMIC_COMPARE_EXCHANGE_1, // RTLIB::arm64ec___atomic_compare_exchange_1
  RTLIB::ATOMIC_COMPARE_EXCHANGE_2, // RTLIB::arm64ec___atomic_compare_exchange_2
  RTLIB::ATOMIC_COMPARE_EXCHANGE_4, // RTLIB::arm64ec___atomic_compare_exchange_4
  RTLIB::ATOMIC_COMPARE_EXCHANGE_8, // RTLIB::arm64ec___atomic_compare_exchange_8
  RTLIB::ATOMIC_COMPARE_EXCHANGE_16, // RTLIB::arm64ec___atomic_compare_exchange_16
  RTLIB::ATOMIC_EXCHANGE, // RTLIB::arm64ec___atomic_exchange
  RTLIB::ATOMIC_EXCHANGE_1, // RTLIB::arm64ec___atomic_exchange_1
  RTLIB::ATOMIC_EXCHANGE_2, // RTLIB::arm64ec___atomic_exchange_2
  RTLIB::ATOMIC_EXCHANGE_4, // RTLIB::arm64ec___atomic_exchange_4
  RTLIB::ATOMIC_EXCHANGE_8, // RTLIB::arm64ec___atomic_exchange_8
  RTLIB::ATOMIC_EXCHANGE_16, // RTLIB::arm64ec___atomic_exchange_16
  RTLIB::ATOMIC_FETCH_ADD_1, // RTLIB::arm64ec___atomic_fetch_add_1
  RTLIB::ATOMIC_FETCH_ADD_2, // RTLIB::arm64ec___atomic_fetch_add_2
  RTLIB::ATOMIC_FETCH_ADD_4, // RTLIB::arm64ec___atomic_fetch_add_4
  RTLIB::ATOMIC_FETCH_ADD_8, // RTLIB::arm64ec___atomic_fetch_add_8
  RTLIB::ATOMIC_FETCH_ADD_16, // RTLIB::arm64ec___atomic_fetch_add_16
  RTLIB::ATOMIC_FETCH_AND_1, // RTLIB::arm64ec___atomic_fetch_and_1
  RTLIB::ATOMIC_FETCH_AND_2, // RTLIB::arm64ec___atomic_fetch_and_2
  RTLIB::ATOMIC_FETCH_AND_4, // RTLIB::arm64ec___atomic_fetch_and_4
  RTLIB::ATOMIC_FETCH_AND_8, // RTLIB::arm64ec___atomic_fetch_and_8
  RTLIB::ATOMIC_FETCH_AND_16, // RTLIB::arm64ec___atomic_fetch_and_16
  RTLIB::ATOMIC_FETCH_NAND_1, // RTLIB::arm64ec___atomic_fetch_nand_1
  RTLIB::ATOMIC_FETCH_NAND_2, // RTLIB::arm64ec___atomic_fetch_nand_2
  RTLIB::ATOMIC_FETCH_NAND_4, // RTLIB::arm64ec___atomic_fetch_nand_4
  RTLIB::ATOMIC_FETCH_NAND_8, // RTLIB::arm64ec___atomic_fetch_nand_8
  RTLIB::ATOMIC_FETCH_NAND_16, // RTLIB::arm64ec___atomic_fetch_nand_16
  RTLIB::ATOMIC_FETCH_OR_1, // RTLIB::arm64ec___atomic_fetch_or_1
  RTLIB::ATOMIC_FETCH_OR_2, // RTLIB::arm64ec___atomic_fetch_or_2
  RTLIB::ATOMIC_FETCH_OR_4, // RTLIB::arm64ec___atomic_fetch_or_4
  RTLIB::ATOMIC_FETCH_OR_8, // RTLIB::arm64ec___atomic_fetch_or_8
  RTLIB::ATOMIC_FETCH_OR_16, // RTLIB::arm64ec___atomic_fetch_or_16
  RTLIB::ATOMIC_FETCH_SUB_1, // RTLIB::arm64ec___atomic_fetch_sub_1
  RTLIB::ATOMIC_FETCH_SUB_2, // RTLIB::arm64ec___atomic_fetch_sub_2
  RTLIB::ATOMIC_FETCH_SUB_4, // RTLIB::arm64ec___atomic_fetch_sub_4
  RTLIB::ATOMIC_FETCH_SUB_8, // RTLIB::arm64ec___atomic_fetch_sub_8
  RTLIB::ATOMIC_FETCH_SUB_16, // RTLIB::arm64ec___atomic_fetch_sub_16
  RTLIB::ATOMIC_FETCH_XOR_1, // RTLIB::arm64ec___atomic_fetch_xor_1
  RTLIB::ATOMIC_FETCH_XOR_2, // RTLIB::arm64ec___atomic_fetch_xor_2
  RTLIB::ATOMIC_FETCH_XOR_4, // RTLIB::arm64ec___atomic_fetch_xor_4
  RTLIB::ATOMIC_FETCH_XOR_8, // RTLIB::arm64ec___atomic_fetch_xor_8
  RTLIB::ATOMIC_FETCH_XOR_16, // RTLIB::arm64ec___atomic_fetch_xor_16
  RTLIB::ATOMIC_LOAD, // RTLIB::arm64ec___atomic_load
  RTLIB::ATOMIC_LOAD_1, // RTLIB::arm64ec___atomic_load_1
  RTLIB::ATOMIC_LOAD_2, // RTLIB::arm64ec___atomic_load_2
  RTLIB::ATOMIC_LOAD_4, // RTLIB::arm64ec___atomic_load_4
  RTLIB::ATOMIC_LOAD_8, // RTLIB::arm64ec___atomic_load_8
  RTLIB::ATOMIC_LOAD_16, // RTLIB::arm64ec___atomic_load_16
  RTLIB::ATOMIC_STORE, // RTLIB::arm64ec___atomic_store
  RTLIB::ATOMIC_STORE_1, // RTLIB::arm64ec___atomic_store_1
  RTLIB::ATOMIC_STORE_2, // RTLIB::arm64ec___atomic_store_2
  RTLIB::ATOMIC_STORE_4, // RTLIB::arm64ec___atomic_store_4
  RTLIB::ATOMIC_STORE_8, // RTLIB::arm64ec___atomic_store_8
  RTLIB::ATOMIC_STORE_16, // RTLIB::arm64ec___atomic_store_16
  RTLIB::CLEAR_CACHE, // RTLIB::arm64ec___clear_cache
  RTLIB::CTLZ_I64, // RTLIB::arm64ec___clzdi2
  RTLIB::CTLZ_I32, // RTLIB::arm64ec___clzsi2
  RTLIB::CTLZ_I128, // RTLIB::arm64ec___clzti2
  RTLIB::CXA_END_CLEANUP, // RTLIB::arm64ec___cxa_end_cleanup
  RTLIB::DIV_F64, // RTLIB::arm64ec___divdf3
  RTLIB::SDIV_I64, // RTLIB::arm64ec___divdi3
  RTLIB::SDIV_I16, // RTLIB::arm64ec___divhi3
  RTLIB::SDIV_I8, // RTLIB::arm64ec___divqi3
  RTLIB::DIV_F32, // RTLIB::arm64ec___divsf3
  RTLIB::SDIV_I32, // RTLIB::arm64ec___divsi3
  RTLIB::DIV_F128, // RTLIB::arm64ec___divtf3
  RTLIB::SDIV_I128, // RTLIB::arm64ec___divti3
  RTLIB::OEQ_F64, // RTLIB::arm64ec___eqdf2
  RTLIB::OEQ_F32, // RTLIB::arm64ec___eqsf2
  RTLIB::OEQ_F128, // RTLIB::arm64ec___eqtf2
  RTLIB::EXP2_FINITE_F64, // RTLIB::arm64ec___exp2_finite
  RTLIB::EXP2_FINITE_F32, // RTLIB::arm64ec___exp2f_finite
  RTLIB::EXP2_FINITE_F128, // RTLIB::arm64ec___exp2l_finite_f128
  RTLIB::EXP_FINITE_F64, // RTLIB::arm64ec___exp_finite
  RTLIB::EXP_FINITE_F32, // RTLIB::arm64ec___expf_finite
  RTLIB::EXP_FINITE_F128, // RTLIB::arm64ec___expl_finite_f128
  RTLIB::FPEXT_BF16_F32, // RTLIB::arm64ec___extendbfsf2
  RTLIB::FPEXT_F64_F128, // RTLIB::arm64ec___extenddftf2
  RTLIB::FPEXT_F16_F64, // RTLIB::arm64ec___extendhfdf2
  RTLIB::FPEXT_F16_F32, // RTLIB::arm64ec___extendhfsf2
  RTLIB::FPEXT_F16_F128, // RTLIB::arm64ec___extendhftf2
  RTLIB::FPEXT_F32_F64, // RTLIB::arm64ec___extendsfdf2
  RTLIB::FPEXT_F32_F128, // RTLIB::arm64ec___extendsftf2
  RTLIB::FPTOSINT_F64_I64, // RTLIB::arm64ec___fixdfdi
  RTLIB::FPTOSINT_F64_I32, // RTLIB::arm64ec___fixdfsi
  RTLIB::FPTOSINT_F64_I128, // RTLIB::arm64ec___fixdfti
  RTLIB::FPTOSINT_F16_I64, // RTLIB::arm64ec___fixhfdi
  RTLIB::FPTOSINT_F16_I32, // RTLIB::arm64ec___fixhfsi
  RTLIB::FPTOSINT_F16_I128, // RTLIB::arm64ec___fixhfti
  RTLIB::FPTOSINT_F32_I64, // RTLIB::arm64ec___fixsfdi
  RTLIB::FPTOSINT_F32_I32, // RTLIB::arm64ec___fixsfsi
  RTLIB::FPTOSINT_F32_I128, // RTLIB::arm64ec___fixsfti
  RTLIB::FPTOSINT_F128_I64, // RTLIB::arm64ec___fixtfdi_f128
  RTLIB::FPTOSINT_F128_I32, // RTLIB::arm64ec___fixtfsi
  RTLIB::FPTOSINT_F128_I128, // RTLIB::arm64ec___fixtfti_f128
  RTLIB::FPTOUINT_F64_I64, // RTLIB::arm64ec___fixunsdfdi
  RTLIB::FPTOUINT_F64_I32, // RTLIB::arm64ec___fixunsdfsi
  RTLIB::FPTOUINT_F64_I128, // RTLIB::arm64ec___fixunsdfti
  RTLIB::FPTOUINT_F16_I64, // RTLIB::arm64ec___fixunshfdi
  RTLIB::FPTOUINT_F16_I32, // RTLIB::arm64ec___fixunshfsi
  RTLIB::FPTOUINT_F16_I128, // RTLIB::arm64ec___fixunshfti
  RTLIB::FPTOUINT_F32_I64, // RTLIB::arm64ec___fixunssfdi
  RTLIB::FPTOUINT_F32_I32, // RTLIB::arm64ec___fixunssfsi
  RTLIB::FPTOUINT_F32_I128, // RTLIB::arm64ec___fixunssfti
  RTLIB::FPTOUINT_F128_I64, // RTLIB::arm64ec___fixunstfdi_f128
  RTLIB::FPTOUINT_F128_I32, // RTLIB::arm64ec___fixunstfsi_f128
  RTLIB::FPTOUINT_F128_I128, // RTLIB::arm64ec___fixunstfti_f128
  RTLIB::SINTTOFP_I64_BF16, // RTLIB::arm64ec___floatdibf
  RTLIB::SINTTOFP_I64_F64, // RTLIB::arm64ec___floatdidf
  RTLIB::SINTTOFP_I64_F16, // RTLIB::arm64ec___floatdihf
  RTLIB::SINTTOFP_I64_F32, // RTLIB::arm64ec___floatdisf
  RTLIB::SINTTOFP_I64_F128, // RTLIB::arm64ec___floatditf_f128
  RTLIB::SINTTOFP_I32_F64, // RTLIB::arm64ec___floatsidf
  RTLIB::SINTTOFP_I32_F16, // RTLIB::arm64ec___floatsihf
  RTLIB::SINTTOFP_I32_F32, // RTLIB::arm64ec___floatsisf
  RTLIB::SINTTOFP_I32_F128, // RTLIB::arm64ec___floatsitf
  RTLIB::SINTTOFP_I128_F64, // RTLIB::arm64ec___floattidf
  RTLIB::SINTTOFP_I128_F16, // RTLIB::arm64ec___floattihf
  RTLIB::SINTTOFP_I128_F32, // RTLIB::arm64ec___floattisf
  RTLIB::SINTTOFP_I128_F128, // RTLIB::arm64ec___floattitf_f128
  RTLIB::UINTTOFP_I64_BF16, // RTLIB::arm64ec___floatundibf
  RTLIB::UINTTOFP_I64_F64, // RTLIB::arm64ec___floatundidf
  RTLIB::UINTTOFP_I64_F16, // RTLIB::arm64ec___floatundihf
  RTLIB::UINTTOFP_I64_F32, // RTLIB::arm64ec___floatundisf
  RTLIB::UINTTOFP_I64_F128, // RTLIB::arm64ec___floatunditf_f128
  RTLIB::UINTTOFP_I32_F64, // RTLIB::arm64ec___floatunsidf
  RTLIB::UINTTOFP_I32_F16, // RTLIB::arm64ec___floatunsihf
  RTLIB::UINTTOFP_I32_F32, // RTLIB::arm64ec___floatunsisf
  RTLIB::UINTTOFP_I32_F128, // RTLIB::arm64ec___floatunsitf
  RTLIB::UINTTOFP_I128_F64, // RTLIB::arm64ec___floatuntidf
  RTLIB::UINTTOFP_I128_F16, // RTLIB::arm64ec___floatuntihf
  RTLIB::UINTTOFP_I128_F32, // RTLIB::arm64ec___floatuntisf
  RTLIB::UINTTOFP_I128_F128, // RTLIB::arm64ec___floatuntitf_f128
  RTLIB::OGE_F64, // RTLIB::arm64ec___gedf2
  RTLIB::OGE_F32, // RTLIB::arm64ec___gesf2
  RTLIB::OGE_F128, // RTLIB::arm64ec___getf2
  RTLIB::OGT_F64, // RTLIB::arm64ec___gtdf2
  RTLIB::OGT_F32, // RTLIB::arm64ec___gtsf2
  RTLIB::OGT_F128, // RTLIB::arm64ec___gttf2
  RTLIB::OLE_F64, // RTLIB::arm64ec___ledf2
  RTLIB::OLE_F32, // RTLIB::arm64ec___lesf2
  RTLIB::OLE_F128, // RTLIB::arm64ec___letf2
  RTLIB::DEOPTIMIZE, // RTLIB::arm64ec___llvm_deoptimize
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_1
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_2
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_4
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_8
  RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, // RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_16
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_1
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_2
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_4
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_8
  RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, // RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_16
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_1
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_2
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_4
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_8
  RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, // RTLIB::arm64ec___llvm_memset_element_unordered_atomic_16
  RTLIB::LOG2_FINITE_F64, // RTLIB::arm64ec___log2_finite
  RTLIB::LOG2_FINITE_F32, // RTLIB::arm64ec___log2f_finite
  RTLIB::LOG2_FINITE_F128, // RTLIB::arm64ec___log2l_finite_f128
  RTLIB::LOG10_FINITE_F64, // RTLIB::arm64ec___log10_finite
  RTLIB::LOG10_FINITE_F32, // RTLIB::arm64ec___log10f_finite
  RTLIB::LOG10_FINITE_F128, // RTLIB::arm64ec___log10l_finite_f128
  RTLIB::LOG_FINITE_F64, // RTLIB::arm64ec___log_finite
  RTLIB::LOG_FINITE_F32, // RTLIB::arm64ec___logf_finite
  RTLIB::LOG_FINITE_F128, // RTLIB::arm64ec___logl_finite_f128
  RTLIB::SRL_I64, // RTLIB::arm64ec___lshrdi3
  RTLIB::SRL_I16, // RTLIB::arm64ec___lshrhi3
  RTLIB::SRL_I32, // RTLIB::arm64ec___lshrsi3
  RTLIB::SRL_I128, // RTLIB::arm64ec___lshrti3
  RTLIB::OLT_F64, // RTLIB::arm64ec___ltdf2
  RTLIB::OLT_F32, // RTLIB::arm64ec___ltsf2
  RTLIB::OLT_F128, // RTLIB::arm64ec___lttf2
  RTLIB::SREM_I64, // RTLIB::arm64ec___moddi3
  RTLIB::SREM_I16, // RTLIB::arm64ec___modhi3
  RTLIB::SREM_I8, // RTLIB::arm64ec___modqi3
  RTLIB::SREM_I32, // RTLIB::arm64ec___modsi3
  RTLIB::SREM_I128, // RTLIB::arm64ec___modti3
  RTLIB::MUL_F64, // RTLIB::arm64ec___muldf3
  RTLIB::MUL_I64, // RTLIB::arm64ec___muldi3
  RTLIB::MUL_I16, // RTLIB::arm64ec___mulhi3
  RTLIB::MULO_I32, // RTLIB::arm64ec___mulosi4
  RTLIB::MUL_I8, // RTLIB::arm64ec___mulqi3
  RTLIB::MUL_F32, // RTLIB::arm64ec___mulsf3
  RTLIB::MUL_I32, // RTLIB::arm64ec___mulsi3
  RTLIB::MUL_F128, // RTLIB::arm64ec___multf3
  RTLIB::MUL_I128, // RTLIB::arm64ec___multi3
  RTLIB::UNE_F64, // RTLIB::arm64ec___nedf2
  RTLIB::NEG_I64, // RTLIB::arm64ec___negdi2
  RTLIB::NEG_I32, // RTLIB::arm64ec___negsi2
  RTLIB::UNE_F32, // RTLIB::arm64ec___nesf2
  RTLIB::UNE_F128, // RTLIB::arm64ec___netf2
  RTLIB::CTPOP_I64, // RTLIB::arm64ec___popcountdi2
  RTLIB::CTPOP_I32, // RTLIB::arm64ec___popcountsi2
  RTLIB::CTPOP_I128, // RTLIB::arm64ec___popcountti2
  RTLIB::POW_FINITE_F64, // RTLIB::arm64ec___pow_finite
  RTLIB::POW_FINITE_F32, // RTLIB::arm64ec___powf_finite
  RTLIB::POWI_F128, // RTLIB::arm64ec___powitf2_f128
  RTLIB::POW_FINITE_F128, // RTLIB::arm64ec___powl_finite_f128
  RTLIB::SAFESTACK_POINTER_ADDRESS, // RTLIB::arm64ec___safestack_pointer_address
  RTLIB::STACKPROTECTOR_CHECK_FAIL, // RTLIB::arm64ec___stack_chk_fail
  RTLIB::SUB_F64, // RTLIB::arm64ec___subdf3
  RTLIB::SUB_F32, // RTLIB::arm64ec___subsf3
  RTLIB::SUB_F128, // RTLIB::arm64ec___subtf3
  RTLIB::SYNC_FETCH_AND_ADD_1, // RTLIB::arm64ec___sync_fetch_and_add_1
  RTLIB::SYNC_FETCH_AND_ADD_2, // RTLIB::arm64ec___sync_fetch_and_add_2
  RTLIB::SYNC_FETCH_AND_ADD_4, // RTLIB::arm64ec___sync_fetch_and_add_4
  RTLIB::SYNC_FETCH_AND_ADD_8, // RTLIB::arm64ec___sync_fetch_and_add_8
  RTLIB::SYNC_FETCH_AND_ADD_16, // RTLIB::arm64ec___sync_fetch_and_add_16
  RTLIB::SYNC_FETCH_AND_AND_1, // RTLIB::arm64ec___sync_fetch_and_and_1
  RTLIB::SYNC_FETCH_AND_AND_2, // RTLIB::arm64ec___sync_fetch_and_and_2
  RTLIB::SYNC_FETCH_AND_AND_4, // RTLIB::arm64ec___sync_fetch_and_and_4
  RTLIB::SYNC_FETCH_AND_AND_8, // RTLIB::arm64ec___sync_fetch_and_and_8
  RTLIB::SYNC_FETCH_AND_AND_16, // RTLIB::arm64ec___sync_fetch_and_and_16
  RTLIB::SYNC_FETCH_AND_MAX_1, // RTLIB::arm64ec___sync_fetch_and_max_1
  RTLIB::SYNC_FETCH_AND_MAX_2, // RTLIB::arm64ec___sync_fetch_and_max_2
  RTLIB::SYNC_FETCH_AND_MAX_4, // RTLIB::arm64ec___sync_fetch_and_max_4
  RTLIB::SYNC_FETCH_AND_MAX_8, // RTLIB::arm64ec___sync_fetch_and_max_8
  RTLIB::SYNC_FETCH_AND_MAX_16, // RTLIB::arm64ec___sync_fetch_and_max_16
  RTLIB::SYNC_FETCH_AND_MIN_1, // RTLIB::arm64ec___sync_fetch_and_min_1
  RTLIB::SYNC_FETCH_AND_MIN_2, // RTLIB::arm64ec___sync_fetch_and_min_2
  RTLIB::SYNC_FETCH_AND_MIN_4, // RTLIB::arm64ec___sync_fetch_and_min_4
  RTLIB::SYNC_FETCH_AND_MIN_8, // RTLIB::arm64ec___sync_fetch_and_min_8
  RTLIB::SYNC_FETCH_AND_MIN_16, // RTLIB::arm64ec___sync_fetch_and_min_16
  RTLIB::SYNC_FETCH_AND_NAND_1, // RTLIB::arm64ec___sync_fetch_and_nand_1
  RTLIB::SYNC_FETCH_AND_NAND_2, // RTLIB::arm64ec___sync_fetch_and_nand_2
  RTLIB::SYNC_FETCH_AND_NAND_4, // RTLIB::arm64ec___sync_fetch_and_nand_4
  RTLIB::SYNC_FETCH_AND_NAND_8, // RTLIB::arm64ec___sync_fetch_and_nand_8
  RTLIB::SYNC_FETCH_AND_NAND_16, // RTLIB::arm64ec___sync_fetch_and_nand_16
  RTLIB::SYNC_FETCH_AND_OR_1, // RTLIB::arm64ec___sync_fetch_and_or_1
  RTLIB::SYNC_FETCH_AND_OR_2, // RTLIB::arm64ec___sync_fetch_and_or_2
  RTLIB::SYNC_FETCH_AND_OR_4, // RTLIB::arm64ec___sync_fetch_and_or_4
  RTLIB::SYNC_FETCH_AND_OR_8, // RTLIB::arm64ec___sync_fetch_and_or_8
  RTLIB::SYNC_FETCH_AND_OR_16, // RTLIB::arm64ec___sync_fetch_and_or_16
  RTLIB::SYNC_FETCH_AND_SUB_1, // RTLIB::arm64ec___sync_fetch_and_sub_1
  RTLIB::SYNC_FETCH_AND_SUB_2, // RTLIB::arm64ec___sync_fetch_and_sub_2
  RTLIB::SYNC_FETCH_AND_SUB_4, // RTLIB::arm64ec___sync_fetch_and_sub_4
  RTLIB::SYNC_FETCH_AND_SUB_8, // RTLIB::arm64ec___sync_fetch_and_sub_8
  RTLIB::SYNC_FETCH_AND_SUB_16, // RTLIB::arm64ec___sync_fetch_and_sub_16
  RTLIB::SYNC_FETCH_AND_UMAX_1, // RTLIB::arm64ec___sync_fetch_and_umax_1
  RTLIB::SYNC_FETCH_AND_UMAX_2, // RTLIB::arm64ec___sync_fetch_and_umax_2
  RTLIB::SYNC_FETCH_AND_UMAX_4, // RTLIB::arm64ec___sync_fetch_and_umax_4
  RTLIB::SYNC_FETCH_AND_UMAX_8, // RTLIB::arm64ec___sync_fetch_and_umax_8
  RTLIB::SYNC_FETCH_AND_UMAX_16, // RTLIB::arm64ec___sync_fetch_and_umax_16
  RTLIB::SYNC_FETCH_AND_UMIN_1, // RTLIB::arm64ec___sync_fetch_and_umin_1
  RTLIB::SYNC_FETCH_AND_UMIN_2, // RTLIB::arm64ec___sync_fetch_and_umin_2
  RTLIB::SYNC_FETCH_AND_UMIN_4, // RTLIB::arm64ec___sync_fetch_and_umin_4
  RTLIB::SYNC_FETCH_AND_UMIN_8, // RTLIB::arm64ec___sync_fetch_and_umin_8
  RTLIB::SYNC_FETCH_AND_UMIN_16, // RTLIB::arm64ec___sync_fetch_and_umin_16
  RTLIB::SYNC_FETCH_AND_XOR_1, // RTLIB::arm64ec___sync_fetch_and_xor_1
  RTLIB::SYNC_FETCH_AND_XOR_2, // RTLIB::arm64ec___sync_fetch_and_xor_2
  RTLIB::SYNC_FETCH_AND_XOR_4, // RTLIB::arm64ec___sync_fetch_and_xor_4
  RTLIB::SYNC_FETCH_AND_XOR_8, // RTLIB::arm64ec___sync_fetch_and_xor_8
  RTLIB::SYNC_FETCH_AND_XOR_16, // RTLIB::arm64ec___sync_fetch_and_xor_16
  RTLIB::SYNC_LOCK_TEST_AND_SET_1, // RTLIB::arm64ec___sync_lock_test_and_set_1
  RTLIB::SYNC_LOCK_TEST_AND_SET_2, // RTLIB::arm64ec___sync_lock_test_and_set_2
  RTLIB::SYNC_LOCK_TEST_AND_SET_4, // RTLIB::arm64ec___sync_lock_test_and_set_4
  RTLIB::SYNC_LOCK_TEST_AND_SET_8, // RTLIB::arm64ec___sync_lock_test_and_set_8
  RTLIB::SYNC_LOCK_TEST_AND_SET_16, // RTLIB::arm64ec___sync_lock_test_and_set_16
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, // RTLIB::arm64ec___sync_val_compare_and_swap_1
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, // RTLIB::arm64ec___sync_val_compare_and_swap_2
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, // RTLIB::arm64ec___sync_val_compare_and_swap_4
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, // RTLIB::arm64ec___sync_val_compare_and_swap_8
  RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, // RTLIB::arm64ec___sync_val_compare_and_swap_16
  RTLIB::FPROUND_F64_BF16, // RTLIB::arm64ec___truncdfbf2
  RTLIB::FPROUND_F64_F16, // RTLIB::arm64ec___truncdfhf2
  RTLIB::FPROUND_F64_F32, // RTLIB::arm64ec___truncdfsf2
  RTLIB::FPROUND_F32_BF16, // RTLIB::arm64ec___truncsfbf2
  RTLIB::FPROUND_F32_F16, // RTLIB::arm64ec___truncsfhf2
  RTLIB::FPROUND_F128_BF16, // RTLIB::arm64ec___trunctfbf2
  RTLIB::FPROUND_F128_F64, // RTLIB::arm64ec___trunctfdf2
  RTLIB::FPROUND_F128_F16, // RTLIB::arm64ec___trunctfhf2_f128
  RTLIB::FPROUND_F128_F32, // RTLIB::arm64ec___trunctfsf2
  RTLIB::UDIV_I64, // RTLIB::arm64ec___udivdi3
  RTLIB::UDIV_I16, // RTLIB::arm64ec___udivhi3
  RTLIB::UDIV_I8, // RTLIB::arm64ec___udivqi3
  RTLIB::UDIV_I32, // RTLIB::arm64ec___udivsi3
  RTLIB::UDIV_I128, // RTLIB::arm64ec___udivti3
  RTLIB::UREM_I64, // RTLIB::arm64ec___umoddi3
  RTLIB::UREM_I16, // RTLIB::arm64ec___umodhi3
  RTLIB::UREM_I8, // RTLIB::arm64ec___umodqi3
  RTLIB::UREM_I32, // RTLIB::arm64ec___umodsi3
  RTLIB::UREM_I128, // RTLIB::arm64ec___umodti3
  RTLIB::UO_F64, // RTLIB::arm64ec___unorddf2
  RTLIB::UO_F32, // RTLIB::arm64ec___unordsf2
  RTLIB::UO_F128, // RTLIB::arm64ec___unordtf2
  RTLIB::ACOS_F64, // RTLIB::arm64ec_acos
  RTLIB::ACOS_F128, // RTLIB::arm64ec_acos_f128
  RTLIB::ACOS_F32, // RTLIB::arm64ec_acosf
  RTLIB::ASIN_F64, // RTLIB::arm64ec_asin
  RTLIB::ASIN_F128, // RTLIB::arm64ec_asin_f128
  RTLIB::ASIN_F32, // RTLIB::arm64ec_asinf
  RTLIB::ATAN_F64, // RTLIB::arm64ec_atan
  RTLIB::ATAN2_F64, // RTLIB::arm64ec_atan2
  RTLIB::ATAN2_F128, // RTLIB::arm64ec_atan2_f128
  RTLIB::ATAN2_F32, // RTLIB::arm64ec_atan2f
  RTLIB::ATAN_F128, // RTLIB::arm64ec_atan_f128
  RTLIB::ATAN_F32, // RTLIB::arm64ec_atanf
  RTLIB::CALLOC, // RTLIB::arm64ec_calloc
  RTLIB::CBRT_F64, // RTLIB::arm64ec_cbrt
  RTLIB::CBRT_F128, // RTLIB::arm64ec_cbrt_f128
  RTLIB::CBRT_F32, // RTLIB::arm64ec_cbrtf
  RTLIB::CEIL_F64, // RTLIB::arm64ec_ceil
  RTLIB::CEIL_F128, // RTLIB::arm64ec_ceil_f128
  RTLIB::CEIL_F32, // RTLIB::arm64ec_ceilf
  RTLIB::COPYSIGN_F64, // RTLIB::arm64ec_copysign
  RTLIB::COPYSIGN_F128, // RTLIB::arm64ec_copysign_f128
  RTLIB::COPYSIGN_F32, // RTLIB::arm64ec_copysignf
  RTLIB::COS_F64, // RTLIB::arm64ec_cos
  RTLIB::COS_F128, // RTLIB::arm64ec_cos_f128
  RTLIB::COS_F32, // RTLIB::arm64ec_cosf
  RTLIB::COSH_F64, // RTLIB::arm64ec_cosh
  RTLIB::COSH_F128, // RTLIB::arm64ec_cosh_f128
  RTLIB::COSH_F32, // RTLIB::arm64ec_coshf
  RTLIB::EXP_F64, // RTLIB::arm64ec_exp
  RTLIB::EXP2_F64, // RTLIB::arm64ec_exp2
  RTLIB::EXP2_F128, // RTLIB::arm64ec_exp2_f128
  RTLIB::EXP2_F32, // RTLIB::arm64ec_exp2f
  RTLIB::EXP10_F64, // RTLIB::arm64ec_exp10
  RTLIB::EXP10_F32, // RTLIB::arm64ec_exp10f
  RTLIB::EXP10_F128, // RTLIB::arm64ec_exp10l_f128
  RTLIB::EXP_F128, // RTLIB::arm64ec_exp_f128
  RTLIB::EXP_F32, // RTLIB::arm64ec_expf
  RTLIB::FEGETENV, // RTLIB::arm64ec_fegetenv
  RTLIB::FEGETMODE, // RTLIB::arm64ec_fegetmode
  RTLIB::FESETENV, // RTLIB::arm64ec_fesetenv
  RTLIB::FESETMODE, // RTLIB::arm64ec_fesetmode
  RTLIB::FLOOR_F64, // RTLIB::arm64ec_floor
  RTLIB::FLOOR_F128, // RTLIB::arm64ec_floor_f128
  RTLIB::FLOOR_F32, // RTLIB::arm64ec_floorf
  RTLIB::FMA_F64, // RTLIB::arm64ec_fma
  RTLIB::FMA_F128, // RTLIB::arm64ec_fma_f128
  RTLIB::FMA_F32, // RTLIB::arm64ec_fmaf
  RTLIB::FMAX_F64, // RTLIB::arm64ec_fmax
  RTLIB::FMAX_F128, // RTLIB::arm64ec_fmax_f128
  RTLIB::FMAX_F32, // RTLIB::arm64ec_fmaxf
  RTLIB::FMAXIMUM_F64, // RTLIB::arm64ec_fmaximum
  RTLIB::FMAXIMUM_F128, // RTLIB::arm64ec_fmaximum_f128
  RTLIB::FMAXIMUM_NUM_F64, // RTLIB::arm64ec_fmaximum_num
  RTLIB::FMAXIMUM_NUM_F128, // RTLIB::arm64ec_fmaximum_num_f128
  RTLIB::FMAXIMUM_NUM_F32, // RTLIB::arm64ec_fmaximum_numf
  RTLIB::FMAXIMUM_F32, // RTLIB::arm64ec_fmaximumf
  RTLIB::FMIN_F64, // RTLIB::arm64ec_fmin
  RTLIB::FMIN_F128, // RTLIB::arm64ec_fmin_f128
  RTLIB::FMIN_F32, // RTLIB::arm64ec_fminf
  RTLIB::FMINIMUM_F64, // RTLIB::arm64ec_fminimum
  RTLIB::FMINIMUM_F128, // RTLIB::arm64ec_fminimum_f128
  RTLIB::FMINIMUM_NUM_F64, // RTLIB::arm64ec_fminimum_num
  RTLIB::FMINIMUM_NUM_F128, // RTLIB::arm64ec_fminimum_num_f128
  RTLIB::FMINIMUM_NUM_F32, // RTLIB::arm64ec_fminimum_numf
  RTLIB::FMINIMUM_F32, // RTLIB::arm64ec_fminimumf
  RTLIB::REM_F64, // RTLIB::arm64ec_fmod
  RTLIB::REM_F32, // RTLIB::arm64ec_fmodf
  RTLIB::REM_F128, // RTLIB::arm64ec_fmodl_f128
  RTLIB::FREXP_F64, // RTLIB::arm64ec_frexp
  RTLIB::LDEXP_F64, // RTLIB::arm64ec_ldexp
  RTLIB::LLRINT_F64, // RTLIB::arm64ec_llrint
  RTLIB::LLRINT_F128, // RTLIB::arm64ec_llrint_f128
  RTLIB::LLRINT_F32, // RTLIB::arm64ec_llrintf
  RTLIB::LLROUND_F64, // RTLIB::arm64ec_llround
  RTLIB::LLROUND_F128, // RTLIB::arm64ec_llround_f128
  RTLIB::LLROUND_F32, // RTLIB::arm64ec_llroundf
  RTLIB::LOG_F64, // RTLIB::arm64ec_log
  RTLIB::LOG2_F64, // RTLIB::arm64ec_log2
  RTLIB::LOG2_F128, // RTLIB::arm64ec_log2_f128
  RTLIB::LOG2_F32, // RTLIB::arm64ec_log2f
  RTLIB::LOG10_F64, // RTLIB::arm64ec_log10
  RTLIB::LOG10_F128, // RTLIB::arm64ec_log10_f128
  RTLIB::LOG10_F32, // RTLIB::arm64ec_log10f
  RTLIB::LOG_F128, // RTLIB::arm64ec_log_f128
  RTLIB::LOG_F32, // RTLIB::arm64ec_logf
  RTLIB::LRINT_F64, // RTLIB::arm64ec_lrint
  RTLIB::LRINT_F128, // RTLIB::arm64ec_lrint_f128
  RTLIB::LRINT_F32, // RTLIB::arm64ec_lrintf
  RTLIB::LROUND_F64, // RTLIB::arm64ec_lround
  RTLIB::LROUND_F128, // RTLIB::arm64ec_lround_f128
  RTLIB::LROUND_F32, // RTLIB::arm64ec_lroundf
  RTLIB::MEMCPY, // RTLIB::arm64ec_memcpy
  RTLIB::MEMMOVE, // RTLIB::arm64ec_memmove
  RTLIB::MEMSET, // RTLIB::arm64ec_memset
  RTLIB::MODF_F64, // RTLIB::arm64ec_modf
  RTLIB::MODF_F128, // RTLIB::arm64ec_modf_f128
  RTLIB::MODF_F32, // RTLIB::arm64ec_modff
  RTLIB::NEARBYINT_F64, // RTLIB::arm64ec_nearbyint
  RTLIB::NEARBYINT_F128, // RTLIB::arm64ec_nearbyint_f128
  RTLIB::NEARBYINT_F32, // RTLIB::arm64ec_nearbyintf
  RTLIB::POW_F64, // RTLIB::arm64ec_pow
  RTLIB::POW_F128, // RTLIB::arm64ec_pow_f128
  RTLIB::POW_F32, // RTLIB::arm64ec_powf
  RTLIB::RINT_F64, // RTLIB::arm64ec_rint
  RTLIB::RINT_F128, // RTLIB::arm64ec_rint_f128
  RTLIB::RINT_F32, // RTLIB::arm64ec_rintf
  RTLIB::ROUND_F64, // RTLIB::arm64ec_round
  RTLIB::ROUND_F128, // RTLIB::arm64ec_round_f128
  RTLIB::ROUNDEVEN_F64, // RTLIB::arm64ec_roundeven
  RTLIB::ROUNDEVEN_F128, // RTLIB::arm64ec_roundeven_f128
  RTLIB::ROUNDEVEN_F32, // RTLIB::arm64ec_roundevenf
  RTLIB::ROUND_F32, // RTLIB::arm64ec_roundf
  RTLIB::SIN_F64, // RTLIB::arm64ec_sin
  RTLIB::SIN_F128, // RTLIB::arm64ec_sin_f128
  RTLIB::SINCOSPI_F64, // RTLIB::arm64ec_sincospi
  RTLIB::SINCOSPI_F128, // RTLIB::arm64ec_sincospi_f128
  RTLIB::SINCOSPI_F32, // RTLIB::arm64ec_sincospif
  RTLIB::SIN_F32, // RTLIB::arm64ec_sinf
  RTLIB::SINH_F64, // RTLIB::arm64ec_sinh
  RTLIB::SINH_F128, // RTLIB::arm64ec_sinh_f128
  RTLIB::SINH_F32, // RTLIB::arm64ec_sinhf
  RTLIB::SQRT_F64, // RTLIB::arm64ec_sqrt
  RTLIB::SQRT_F128, // RTLIB::arm64ec_sqrt_f128
  RTLIB::SQRT_F32, // RTLIB::arm64ec_sqrtf
  RTLIB::TAN_F64, // RTLIB::arm64ec_tan
  RTLIB::TAN_F128, // RTLIB::arm64ec_tan_f128
  RTLIB::TAN_F32, // RTLIB::arm64ec_tanf
  RTLIB::TANH_F64, // RTLIB::arm64ec_tanh
  RTLIB::TANH_F128, // RTLIB::arm64ec_tanh_f128
  RTLIB::TANH_F32, // RTLIB::arm64ec_tanhf
  RTLIB::TRUNC_F64, // RTLIB::arm64ec_trunc
  RTLIB::TRUNC_F128, // RTLIB::arm64ec_trunc_f128
  RTLIB::TRUNC_F32, // RTLIB::arm64ec_truncf
  RTLIB::ASIN_F64, // RTLIB::asin
  RTLIB::ASIN_F80, // RTLIB::asin_f80
  RTLIB::ASIN_F128, // RTLIB::asin_f128
  RTLIB::ASIN_PPCF128, // RTLIB::asin_ppcf128
  RTLIB::ASIN_F32, // RTLIB::asinf
  RTLIB::ASIN_F128, // RTLIB::asinf128
  RTLIB::ATAN_F64, // RTLIB::atan
  RTLIB::ATAN2_F64, // RTLIB::atan2
  RTLIB::ATAN2_F80, // RTLIB::atan2_f80
  RTLIB::ATAN2_F128, // RTLIB::atan2_f128
  RTLIB::ATAN2_PPCF128, // RTLIB::atan2_ppcf128
  RTLIB::ATAN2_F32, // RTLIB::atan2f
  RTLIB::ATAN2_F128, // RTLIB::atan2f128
  RTLIB::ATAN_F80, // RTLIB::atan_f80
  RTLIB::ATAN_F128, // RTLIB::atan_f128
  RTLIB::ATAN_PPCF128, // RTLIB::atan_ppcf128
  RTLIB::ATAN_F32, // RTLIB::atanf
  RTLIB::ATAN_F128, // RTLIB::atanf128
  RTLIB::COS_F32, // RTLIB::avr_cos
  RTLIB::SIN_F32, // RTLIB::avr_sin
  RTLIB::BZERO, // RTLIB::bzero
  RTLIB::CALLOC, // RTLIB::calloc
  RTLIB::CBRT_F64, // RTLIB::cbrt
  RTLIB::CBRT_F80, // RTLIB::cbrt_f80
  RTLIB::CBRT_F128, // RTLIB::cbrt_f128
  RTLIB::CBRT_PPCF128, // RTLIB::cbrt_ppcf128
  RTLIB::CBRT_F32, // RTLIB::cbrtf
  RTLIB::CBRT_F128, // RTLIB::cbrtf128
  RTLIB::CEIL_F64, // RTLIB::ceil
  RTLIB::CEIL_F80, // RTLIB::ceil_f80
  RTLIB::CEIL_F128, // RTLIB::ceil_f128
  RTLIB::CEIL_PPCF128, // RTLIB::ceil_ppcf128
  RTLIB::CEIL_F32, // RTLIB::ceilf
  RTLIB::CEIL_F128, // RTLIB::ceilf128
  RTLIB::COPYSIGN_F64, // RTLIB::copysign
  RTLIB::COPYSIGN_F80, // RTLIB::copysign_f80
  RTLIB::COPYSIGN_F128, // RTLIB::copysign_f128
  RTLIB::COPYSIGN_PPCF128, // RTLIB::copysign_ppcf128
  RTLIB::COPYSIGN_F32, // RTLIB::copysignf
  RTLIB::COPYSIGN_F128, // RTLIB::copysignf128
  RTLIB::COS_F64, // RTLIB::cos
  RTLIB::COS_F80, // RTLIB::cos_f80
  RTLIB::COS_F128, // RTLIB::cos_f128
  RTLIB::COS_PPCF128, // RTLIB::cos_ppcf128
  RTLIB::COS_F32, // RTLIB::cosf
  RTLIB::COS_F128, // RTLIB::cosf128
  RTLIB::COSH_F64, // RTLIB::cosh
  RTLIB::COSH_F80, // RTLIB::cosh_f80
  RTLIB::COSH_F128, // RTLIB::cosh_f128
  RTLIB::COSH_PPCF128, // RTLIB::cosh_ppcf128
  RTLIB::COSH_F32, // RTLIB::coshf
  RTLIB::COSH_F128, // RTLIB::coshf128
  RTLIB::RETURN_ADDRESS, // RTLIB::emscripten_return_address
  RTLIB::EXP_F64, // RTLIB::exp
  RTLIB::EXP2_F64, // RTLIB::exp2
  RTLIB::EXP2_F80, // RTLIB::exp2_f80
  RTLIB::EXP2_F128, // RTLIB::exp2_f128
  RTLIB::EXP2_PPCF128, // RTLIB::exp2_ppcf128
  RTLIB::EXP2_F32, // RTLIB::exp2f
  RTLIB::EXP2_F128, // RTLIB::exp2f128
  RTLIB::EXP10_F64, // RTLIB::exp10
  RTLIB::EXP10_F32, // RTLIB::exp10f
  RTLIB::EXP10_F128, // RTLIB::exp10f128
  RTLIB::EXP10_F80, // RTLIB::exp10l_f80
  RTLIB::EXP10_F128, // RTLIB::exp10l_f128
  RTLIB::EXP10_PPCF128, // RTLIB::exp10l_ppcf128
  RTLIB::EXP_F80, // RTLIB::exp_f80
  RTLIB::EXP_F128, // RTLIB::exp_f128
  RTLIB::EXP_PPCF128, // RTLIB::exp_ppcf128
  RTLIB::EXP_F32, // RTLIB::expf
  RTLIB::EXP_F128, // RTLIB::expf128
  RTLIB::FEGETENV, // RTLIB::fegetenv
  RTLIB::FEGETMODE, // RTLIB::fegetmode
  RTLIB::FESETENV, // RTLIB::fesetenv
  RTLIB::FESETMODE, // RTLIB::fesetmode
  RTLIB::FLOOR_F64, // RTLIB::floor
  RTLIB::FLOOR_F80, // RTLIB::floor_f80
  RTLIB::FLOOR_F128, // RTLIB::floor_f128
  RTLIB::FLOOR_PPCF128, // RTLIB::floor_ppcf128
  RTLIB::FLOOR_F32, // RTLIB::floorf
  RTLIB::FLOOR_F128, // RTLIB::floorf128
  RTLIB::FMA_F64, // RTLIB::fma
  RTLIB::FMA_F80, // RTLIB::fma_f80
  RTLIB::FMA_F128, // RTLIB::fma_f128
  RTLIB::FMA_PPCF128, // RTLIB::fma_ppcf128
  RTLIB::FMA_F32, // RTLIB::fmaf
  RTLIB::FMA_F128, // RTLIB::fmaf128
  RTLIB::FMAX_F64, // RTLIB::fmax
  RTLIB::FMAX_F80, // RTLIB::fmax_f80
  RTLIB::FMAX_F128, // RTLIB::fmax_f128
  RTLIB::FMAX_PPCF128, // RTLIB::fmax_ppcf128
  RTLIB::FMAX_F32, // RTLIB::fmaxf
  RTLIB::FMAX_F128, // RTLIB::fmaxf128
  RTLIB::FMAXIMUM_F64, // RTLIB::fmaximum
  RTLIB::FMAXIMUM_F80, // RTLIB::fmaximum_f80
  RTLIB::FMAXIMUM_F128, // RTLIB::fmaximum_f128
  RTLIB::FMAXIMUM_NUM_F64, // RTLIB::fmaximum_num
  RTLIB::FMAXIMUM_NUM_F80, // RTLIB::fmaximum_num_f80
  RTLIB::FMAXIMUM_NUM_F128, // RTLIB::fmaximum_num_f128
  RTLIB::FMAXIMUM_NUM_PPCF128, // RTLIB::fmaximum_num_ppcf128
  RTLIB::FMAXIMUM_NUM_F32, // RTLIB::fmaximum_numf
  RTLIB::FMAXIMUM_NUM_F128, // RTLIB::fmaximum_numf128
  RTLIB::FMAXIMUM_PPCF128, // RTLIB::fmaximum_ppcf128
  RTLIB::FMAXIMUM_F32, // RTLIB::fmaximumf
  RTLIB::FMAXIMUM_F128, // RTLIB::fmaximumf128
  RTLIB::FMIN_F64, // RTLIB::fmin
  RTLIB::FMIN_F80, // RTLIB::fmin_f80
  RTLIB::FMIN_F128, // RTLIB::fmin_f128
  RTLIB::FMIN_PPCF128, // RTLIB::fmin_ppcf128
  RTLIB::FMIN_F32, // RTLIB::fminf
  RTLIB::FMIN_F128, // RTLIB::fminf128
  RTLIB::FMINIMUM_F64, // RTLIB::fminimum
  RTLIB::FMINIMUM_F80, // RTLIB::fminimum_f80
  RTLIB::FMINIMUM_F128, // RTLIB::fminimum_f128
  RTLIB::FMINIMUM_NUM_F64, // RTLIB::fminimum_num
  RTLIB::FMINIMUM_NUM_F80, // RTLIB::fminimum_num_f80
  RTLIB::FMINIMUM_NUM_F128, // RTLIB::fminimum_num_f128
  RTLIB::FMINIMUM_NUM_PPCF128, // RTLIB::fminimum_num_ppcf128
  RTLIB::FMINIMUM_NUM_F32, // RTLIB::fminimum_numf
  RTLIB::FMINIMUM_NUM_F128, // RTLIB::fminimum_numf128
  RTLIB::FMINIMUM_PPCF128, // RTLIB::fminimum_ppcf128
  RTLIB::FMINIMUM_F32, // RTLIB::fminimumf
  RTLIB::FMINIMUM_F128, // RTLIB::fminimumf128
  RTLIB::REM_F64, // RTLIB::fmod
  RTLIB::REM_F32, // RTLIB::fmodf
  RTLIB::REM_F128, // RTLIB::fmodf128
  RTLIB::REM_F80, // RTLIB::fmodl_f80
  RTLIB::REM_F128, // RTLIB::fmodl_f128
  RTLIB::REM_PPCF128, // RTLIB::fmodl_ppc128
  RTLIB::FREXP_F64, // RTLIB::frexp
  RTLIB::FREXP_F80, // RTLIB::frexp_f80
  RTLIB::FREXP_F128, // RTLIB::frexp_f128
  RTLIB::FREXP_PPCF128, // RTLIB::frexp_ppcf128
  RTLIB::FREXP_F32, // RTLIB::frexpf
  RTLIB::FREXP_F128, // RTLIB::frexpf128
  RTLIB::LDEXP_F64, // RTLIB::ldexp
  RTLIB::LDEXP_F80, // RTLIB::ldexp_f80
  RTLIB::LDEXP_F128, // RTLIB::ldexp_f128
  RTLIB::LDEXP_PPCF128, // RTLIB::ldexp_ppcf128
  RTLIB::LDEXP_F32, // RTLIB::ldexpf
  RTLIB::LDEXP_F128, // RTLIB::ldexpf128
  RTLIB::LLRINT_F64, // RTLIB::llrint
  RTLIB::LLRINT_F80, // RTLIB::llrint_f80
  RTLIB::LLRINT_F128, // RTLIB::llrint_f128
  RTLIB::LLRINT_PPCF128, // RTLIB::llrint_ppcf128
  RTLIB::LLRINT_F32, // RTLIB::llrintf
  RTLIB::LLRINT_F128, // RTLIB::llrintf128
  RTLIB::LLROUND_F64, // RTLIB::llround
  RTLIB::LLROUND_F80, // RTLIB::llround_f80
  RTLIB::LLROUND_F128, // RTLIB::llround_f128
  RTLIB::LLROUND_PPCF128, // RTLIB::llround_ppcf128
  RTLIB::LLROUND_F32, // RTLIB::llroundf
  RTLIB::LLROUND_F128, // RTLIB::llroundf128
  RTLIB::LOG_F64, // RTLIB::log
  RTLIB::LOG2_F64, // RTLIB::log2
  RTLIB::LOG2_F80, // RTLIB::log2_f80
  RTLIB::LOG2_F128, // RTLIB::log2_f128
  RTLIB::LOG2_PPCF128, // RTLIB::log2_ppcf128
  RTLIB::LOG2_F32, // RTLIB::log2f
  RTLIB::LOG2_F128, // RTLIB::log2f128
  RTLIB::LOG10_F64, // RTLIB::log10
  RTLIB::LOG10_F80, // RTLIB::log10_f80
  RTLIB::LOG10_F128, // RTLIB::log10_f128
  RTLIB::LOG10_PPCF128, // RTLIB::log10_ppcf128
  RTLIB::LOG10_F32, // RTLIB::log10f
  RTLIB::LOG10_F128, // RTLIB::log10f128
  RTLIB::LOG_F80, // RTLIB::log_f80
  RTLIB::LOG_F128, // RTLIB::log_f128
  RTLIB::LOG_PPCF128, // RTLIB::log_ppcf128
  RTLIB::LOG_F32, // RTLIB::logf
  RTLIB::LOG_F128, // RTLIB::logf128
  RTLIB::LRINT_F64, // RTLIB::lrint
  RTLIB::LRINT_F80, // RTLIB::lrint_f80
  RTLIB::LRINT_F128, // RTLIB::lrint_f128
  RTLIB::LRINT_PPCF128, // RTLIB::lrint_ppcf128
  RTLIB::LRINT_F32, // RTLIB::lrintf
  RTLIB::LRINT_F128, // RTLIB::lrintf128
  RTLIB::LROUND_F64, // RTLIB::lround
  RTLIB::LROUND_F80, // RTLIB::lround_f80
  RTLIB::LROUND_F128, // RTLIB::lround_f128
  RTLIB::LROUND_PPCF128, // RTLIB::lround_ppcf128
  RTLIB::LROUND_F32, // RTLIB::lroundf
  RTLIB::LROUND_F128, // RTLIB::lroundf128
  RTLIB::MEMCPY, // RTLIB::memcpy
  RTLIB::MEMMOVE, // RTLIB::memmove
  RTLIB::MEMSET, // RTLIB::memset
  RTLIB::MODF_F64, // RTLIB::modf
  RTLIB::MODF_F80, // RTLIB::modf_f80
  RTLIB::MODF_F128, // RTLIB::modf_f128
  RTLIB::MODF_PPCF128, // RTLIB::modf_ppcf128
  RTLIB::MODF_F32, // RTLIB::modff
  RTLIB::MODF_F128, // RTLIB::modff128
  RTLIB::NEARBYINT_F64, // RTLIB::nearbyint
  RTLIB::NEARBYINT_F80, // RTLIB::nearbyint_f80
  RTLIB::NEARBYINT_F128, // RTLIB::nearbyint_f128
  RTLIB::NEARBYINT_PPCF128, // RTLIB::nearbyint_ppcf128
  RTLIB::NEARBYINT_F32, // RTLIB::nearbyintf
  RTLIB::NEARBYINT_F128, // RTLIB::nearbyintf128
  RTLIB::OBJC_AUTORELEASE, // RTLIB::objc_autorelease
  RTLIB::OBJC_AUTORELEASEPOOLPOP, // RTLIB::objc_autoreleasePoolPop
  RTLIB::OBJC_AUTORELEASEPOOLPUSH, // RTLIB::objc_autoreleasePoolPush
  RTLIB::OBJC_AUTORELEASERETURNVALUE, // RTLIB::objc_autoreleaseReturnValue
  RTLIB::OBJC_CLAIMAUTORELEASEDRETURNVALUE, // RTLIB::objc_claimAutoreleasedReturnValue
  RTLIB::OBJC_COPYWEAK, // RTLIB::objc_copyWeak
  RTLIB::OBJC_DESTROYWEAK, // RTLIB::objc_destroyWeak
  RTLIB::OBJC_INITWEAK, // RTLIB::objc_initWeak
  RTLIB::OBJC_LOADWEAK, // RTLIB::objc_loadWeak
  RTLIB::OBJC_LOADWEAKRETAINED, // RTLIB::objc_loadWeakRetained
  RTLIB::OBJC_MOVEWEAK, // RTLIB::objc_moveWeak
  RTLIB::OBJC_RELEASE, // RTLIB::objc_release
  RTLIB::OBJC_RETAIN, // RTLIB::objc_retain
  RTLIB::OBJC_RETAINAUTORELEASE, // RTLIB::objc_retainAutorelease
  RTLIB::OBJC_RETAINAUTORELEASERETURNVALUE, // RTLIB::objc_retainAutoreleaseReturnValue
  RTLIB::OBJC_RETAINAUTORELEASEDRETURNVALUE, // RTLIB::objc_retainAutoreleasedReturnValue
  RTLIB::OBJC_RETAINBLOCK, // RTLIB::objc_retainBlock
  RTLIB::OBJC_RETAIN_AUTORELEASE, // RTLIB::objc_retain_autorelease
  RTLIB::OBJC_RETAINEDOBJECT, // RTLIB::objc_retainedObject
  RTLIB::OBJC_STORESTRONG, // RTLIB::objc_storeStrong
  RTLIB::OBJC_STOREWEAK, // RTLIB::objc_storeWeak
  RTLIB::OBJC_SYNC_ENTER, // RTLIB::objc_sync_enter
  RTLIB::OBJC_SYNC_EXIT, // RTLIB::objc_sync_exit
  RTLIB::OBJC_UNRETAINEDOBJECT, // RTLIB::objc_unretainedObject
  RTLIB::OBJC_UNRETAINEDPOINTER, // RTLIB::objc_unretainedPointer
  RTLIB::OBJC_UNSAFECLAIMAUTORELEASEDRETURNVALUE, // RTLIB::objc_unsafeClaimAutoreleasedReturnValue
  RTLIB::POW_F64, // RTLIB::pow
  RTLIB::POW_F80, // RTLIB::pow_f80
  RTLIB::POW_F128, // RTLIB::pow_f128
  RTLIB::POW_PPCF128, // RTLIB::pow_ppcf128
  RTLIB::POW_F32, // RTLIB::powf
  RTLIB::POW_F128, // RTLIB::powf128
  RTLIB::RINT_F64, // RTLIB::rint
  RTLIB::RINT_F80, // RTLIB::rint_f80
  RTLIB::RINT_F128, // RTLIB::rint_f128
  RTLIB::RINT_PPCF128, // RTLIB::rint_ppcf128
  RTLIB::RINT_F32, // RTLIB::rintf
  RTLIB::RINT_F128, // RTLIB::rintf128
  RTLIB::ROUND_F64, // RTLIB::round
  RTLIB::ROUND_F80, // RTLIB::round_f80
  RTLIB::ROUND_F128, // RTLIB::round_f128
  RTLIB::ROUND_PPCF128, // RTLIB::round_ppcf128
  RTLIB::ROUNDEVEN_F64, // RTLIB::roundeven
  RTLIB::ROUNDEVEN_F80, // RTLIB::roundeven_f80
  RTLIB::ROUNDEVEN_F128, // RTLIB::roundeven_f128
  RTLIB::ROUNDEVEN_PPCF128, // RTLIB::roundeven_ppcf128
  RTLIB::ROUNDEVEN_F32, // RTLIB::roundevenf
  RTLIB::ROUNDEVEN_F128, // RTLIB::roundevenf128
  RTLIB::ROUND_F32, // RTLIB::roundf
  RTLIB::ROUND_F128, // RTLIB::roundf128
  RTLIB::SIN_F64, // RTLIB::sin
  RTLIB::SIN_F80, // RTLIB::sin_f80
  RTLIB::SIN_F128, // RTLIB::sin_f128
  RTLIB::SIN_PPCF128, // RTLIB::sin_ppcf128
  RTLIB::SINCOS_F64, // RTLIB::sincos
  RTLIB::SINCOS_F80, // RTLIB::sincos_f80
  RTLIB::SINCOS_F128, // RTLIB::sincos_f128
  RTLIB::SINCOS_PPCF128, // RTLIB::sincos_ppcf128
  RTLIB::SINCOS_F32, // RTLIB::sincosf
  RTLIB::SINCOS_F128, // RTLIB::sincosf128
  RTLIB::SINCOSPI_F64, // RTLIB::sincospi
  RTLIB::SINCOSPI_F80, // RTLIB::sincospi_f80
  RTLIB::SINCOSPI_F128, // RTLIB::sincospi_f128
  RTLIB::SINCOSPI_PPCF128, // RTLIB::sincospi_ppcf128
  RTLIB::SINCOSPI_F32, // RTLIB::sincospif
  RTLIB::SIN_F32, // RTLIB::sinf
  RTLIB::SIN_F128, // RTLIB::sinf128
  RTLIB::SINH_F64, // RTLIB::sinh
  RTLIB::SINH_F80, // RTLIB::sinh_f80
  RTLIB::SINH_F128, // RTLIB::sinh_f128
  RTLIB::SINH_PPCF128, // RTLIB::sinh_ppcf128
  RTLIB::SINH_F32, // RTLIB::sinhf
  RTLIB::SINH_F128, // RTLIB::sinhf128
  RTLIB::SDIV_I32, // RTLIB::sparc_div
  RTLIB::SREM_I32, // RTLIB::sparc_rem
  RTLIB::UDIV_I32, // RTLIB::sparc_udiv
  RTLIB::MUL_I32, // RTLIB::sparc_umul
  RTLIB::UREM_I32, // RTLIB::sparc_urem
  RTLIB::SQRT_F64, // RTLIB::sqrt
  RTLIB::SQRT_F80, // RTLIB::sqrt_f80
  RTLIB::SQRT_F128, // RTLIB::sqrt_f128
  RTLIB::SQRT_PPCF128, // RTLIB::sqrt_ppcf128
  RTLIB::SQRT_F32, // RTLIB::sqrtf
  RTLIB::SQRT_F128, // RTLIB::sqrtf128
  RTLIB::TAN_F64, // RTLIB::tan
  RTLIB::TAN_F80, // RTLIB::tan_f80
  RTLIB::TAN_F128, // RTLIB::tan_f128
  RTLIB::TAN_PPCF128, // RTLIB::tan_ppcf128
  RTLIB::TAN_F32, // RTLIB::tanf
  RTLIB::TAN_F128, // RTLIB::tanf128
  RTLIB::TANH_F64, // RTLIB::tanh
  RTLIB::TANH_F80, // RTLIB::tanh_f80
  RTLIB::TANH_F128, // RTLIB::tanh_f128
  RTLIB::TANH_PPCF128, // RTLIB::tanh_ppcf128
  RTLIB::TANH_F32, // RTLIB::tanhf
  RTLIB::TANH_F128, // RTLIB::tanhf128
  RTLIB::TRUNC_F64, // RTLIB::trunc
  RTLIB::TRUNC_F80, // RTLIB::trunc_f80
  RTLIB::TRUNC_F128, // RTLIB::trunc_f128
  RTLIB::TRUNC_PPCF128, // RTLIB::trunc_ppcf128
  RTLIB::TRUNC_F32, // RTLIB::truncf
  RTLIB::TRUNC_F128, // RTLIB::truncf128
  RTLIB::COPYSIGN_F64, // RTLIB::zos___DCPY_B
  RTLIB::EXP2_F64, // RTLIB::zos___EXP2_B
  RTLIB::CBRT_F32, // RTLIB::zos___FCBT_B
  RTLIB::CEIL_F32, // RTLIB::zos___FCEL_B
  RTLIB::COS_F32, // RTLIB::zos___FCOS_B
  RTLIB::COPYSIGN_F32, // RTLIB::zos___FCPY_B
  RTLIB::EXP_F32, // RTLIB::zos___FEXP_B
  RTLIB::FLOOR_F32, // RTLIB::zos___FFLR_B
  RTLIB::REM_F32, // RTLIB::zos___FFMD_B
  RTLIB::FREXP_F32, // RTLIB::zos___FFXP_B
  RTLIB::LOG10_F32, // RTLIB::zos___FLG1_B
  RTLIB::LOG2_F32, // RTLIB::zos___FLG2_B
  RTLIB::LOG_F32, // RTLIB::zos___FLOG_B
  RTLIB::LDEXP_F32, // RTLIB::zos___FLXP_B
  RTLIB::FMA_F32, // RTLIB::zos___FMAFB
  RTLIB::FMA_F128, // RTLIB::zos___FMALB
  RTLIB::FMAX_F32, // RTLIB::zos___FMAXFB
  RTLIB::FMAX_F128, // RTLIB::zos___FMAXLB
  RTLIB::FMAX_F64, // RTLIB::zos___FMAX_B
  RTLIB::FMA_F64, // RTLIB::zos___FMA_B
  RTLIB::FMIN_F32, // RTLIB::zos___FMINFB
  RTLIB::FMIN_F128, // RTLIB::zos___FMINLB
  RTLIB::FMIN_F64, // RTLIB::zos___FMIN_B
  RTLIB::POW_F32, // RTLIB::zos___FPOW_B
  RTLIB::LROUND_F32, // RTLIB::zos___FRND_B
  RTLIB::SIN_F32, // RTLIB::zos___FSIN_B
  RTLIB::SQRT_F32, // RTLIB::zos___FSQT_B
  RTLIB::TRUNC_F32, // RTLIB::zos___FTRC_B
  RTLIB::EXP2_F32, // RTLIB::zos___FXP2_B
  RTLIB::CBRT_F128, // RTLIB::zos___LCBT_B
  RTLIB::CEIL_F128, // RTLIB::zos___LCEL_B
  RTLIB::COS_F128, // RTLIB::zos___LCOS_B
  RTLIB::COPYSIGN_F128, // RTLIB::zos___LCPY_B
  RTLIB::EXP_F128, // RTLIB::zos___LEXP_B
  RTLIB::FLOOR_F128, // RTLIB::zos___LFLR_B
  RTLIB::REM_F128, // RTLIB::zos___LFMD_B
  RTLIB::FREXP_F128, // RTLIB::zos___LFXP_B
  RTLIB::LOG10_F128, // RTLIB::zos___LLG1_B
  RTLIB::LOG2_F128, // RTLIB::zos___LLG2_B
  RTLIB::LOG_F128, // RTLIB::zos___LLOG_B
  RTLIB::LLROUND_F32, // RTLIB::zos___LLRDFB
  RTLIB::LLROUND_F128, // RTLIB::zos___LLRDLB
  RTLIB::LLROUND_F64, // RTLIB::zos___LLRD_B
  RTLIB::LLRINT_F32, // RTLIB::zos___LLRTFB
  RTLIB::LLRINT_F128, // RTLIB::zos___LLRTLB
  RTLIB::LLRINT_F64, // RTLIB::zos___LLRT_B
  RTLIB::LDEXP_F128, // RTLIB::zos___LLXP_B
  RTLIB::LOG2_F64, // RTLIB::zos___LOG2_B
  RTLIB::POW_F128, // RTLIB::zos___LPOW_B
  RTLIB::LROUND_F128, // RTLIB::zos___LRND_B
  RTLIB::LRINT_F32, // RTLIB::zos___LRNTFB
  RTLIB::LRINT_F128, // RTLIB::zos___LRNTLB
  RTLIB::LRINT_F64, // RTLIB::zos___LRNT_B
  RTLIB::SIN_F128, // RTLIB::zos___LSIN_B
  RTLIB::SQRT_F128, // RTLIB::zos___LSQT_B
  RTLIB::TRUNC_F128, // RTLIB::zos___LTRC_B
  RTLIB::EXP2_F128, // RTLIB::zos___LXP2_B
  RTLIB::NEARBYINT_F32, // RTLIB::zos___NBYIFB
  RTLIB::NEARBYINT_F128, // RTLIB::zos___NBYILB
  RTLIB::NEARBYINT_F64, // RTLIB::zos___NBYI_B
  RTLIB::RINT_F32, // RTLIB::zos___RINTFB
  RTLIB::RINT_F128, // RTLIB::zos___RINTLB
  RTLIB::LROUND_F64, // RTLIB::zos___ROND_B
  RTLIB::ROUND_F32, // RTLIB::zos___ROUNFB
  RTLIB::ROUND_F128, // RTLIB::zos___ROUNLB
  RTLIB::ROUND_F64, // RTLIB::zos___ROUN_B
  RTLIB::CEIL_F64, // RTLIB::zos___SCEL_B
  RTLIB::COS_F64, // RTLIB::zos___SCOS_B
  RTLIB::CBRT_F64, // RTLIB::zos___SCRT_B
  RTLIB::FLOOR_F64, // RTLIB::zos___SFLR_B
  RTLIB::FREXP_F64, // RTLIB::zos___SFXP_B
  RTLIB::LDEXP_F64, // RTLIB::zos___SLXP_B
  RTLIB::RINT_F64, // RTLIB::zos___SRNT_B
  RTLIB::SIN_F64, // RTLIB::zos___SSIN_B
  RTLIB::TRUNC_F64, // RTLIB::zos___TRNC_B
  RTLIB::EXP_F64, // RTLIB::zos___WEXP_B
  RTLIB::REM_F64, // RTLIB::zos___WFMD_B
  RTLIB::LOG10_F64, // RTLIB::zos___WLG1_B
  RTLIB::LOG_F64, // RTLIB::zos___WLOG_B
  RTLIB::POW_F64, // RTLIB::zos___WPOW_B
  RTLIB::SQRT_F64, // RTLIB::zos___WSQT_B
};

#endif

#ifdef GET_SET_TARGET_RUNTIME_LIBCALL_SETS
void llvm::RTLIB::RuntimeLibcallsInfo::setTargetRuntimeLibcallSets(const llvm::Triple &TT, FloatABI::ABIType FloatABI) {
  struct LibcallImplPair {
    RTLIB::Libcall Func;
    RTLIB::LibcallImpl Impl;
  };

  if ((TT.isAArch64() && !TT.isWindowsArm64EC())) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::OUTLINE_ATOMIC_CAS1_ACQ, RTLIB::__aarch64_cas1_acq}, // __aarch64_cas1_acq
        {RTLIB::OUTLINE_ATOMIC_CAS1_ACQ_REL, RTLIB::__aarch64_cas1_acq_rel}, // __aarch64_cas1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS1_REL, RTLIB::__aarch64_cas1_rel}, // __aarch64_cas1_rel
        {RTLIB::OUTLINE_ATOMIC_CAS1_RELAX, RTLIB::__aarch64_cas1_relax}, // __aarch64_cas1_relax
        {RTLIB::OUTLINE_ATOMIC_CAS2_ACQ, RTLIB::__aarch64_cas2_acq}, // __aarch64_cas2_acq
        {RTLIB::OUTLINE_ATOMIC_CAS2_ACQ_REL, RTLIB::__aarch64_cas2_acq_rel}, // __aarch64_cas2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS2_REL, RTLIB::__aarch64_cas2_rel}, // __aarch64_cas2_rel
        {RTLIB::OUTLINE_ATOMIC_CAS2_RELAX, RTLIB::__aarch64_cas2_relax}, // __aarch64_cas2_relax
        {RTLIB::OUTLINE_ATOMIC_CAS4_ACQ, RTLIB::__aarch64_cas4_acq}, // __aarch64_cas4_acq
        {RTLIB::OUTLINE_ATOMIC_CAS4_ACQ_REL, RTLIB::__aarch64_cas4_acq_rel}, // __aarch64_cas4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS4_REL, RTLIB::__aarch64_cas4_rel}, // __aarch64_cas4_rel
        {RTLIB::OUTLINE_ATOMIC_CAS4_RELAX, RTLIB::__aarch64_cas4_relax}, // __aarch64_cas4_relax
        {RTLIB::OUTLINE_ATOMIC_CAS8_ACQ, RTLIB::__aarch64_cas8_acq}, // __aarch64_cas8_acq
        {RTLIB::OUTLINE_ATOMIC_CAS8_ACQ_REL, RTLIB::__aarch64_cas8_acq_rel}, // __aarch64_cas8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS8_REL, RTLIB::__aarch64_cas8_rel}, // __aarch64_cas8_rel
        {RTLIB::OUTLINE_ATOMIC_CAS8_RELAX, RTLIB::__aarch64_cas8_relax}, // __aarch64_cas8_relax
        {RTLIB::OUTLINE_ATOMIC_CAS16_ACQ, RTLIB::__aarch64_cas16_acq}, // __aarch64_cas16_acq
        {RTLIB::OUTLINE_ATOMIC_CAS16_ACQ_REL, RTLIB::__aarch64_cas16_acq_rel}, // __aarch64_cas16_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS16_REL, RTLIB::__aarch64_cas16_rel}, // __aarch64_cas16_rel
        {RTLIB::OUTLINE_ATOMIC_CAS16_RELAX, RTLIB::__aarch64_cas16_relax}, // __aarch64_cas16_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ, RTLIB::__aarch64_ldadd1_acq}, // __aarch64_ldadd1_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ_REL, RTLIB::__aarch64_ldadd1_acq_rel}, // __aarch64_ldadd1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD1_REL, RTLIB::__aarch64_ldadd1_rel}, // __aarch64_ldadd1_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD1_RELAX, RTLIB::__aarch64_ldadd1_relax}, // __aarch64_ldadd1_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ, RTLIB::__aarch64_ldadd2_acq}, // __aarch64_ldadd2_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ_REL, RTLIB::__aarch64_ldadd2_acq_rel}, // __aarch64_ldadd2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD2_REL, RTLIB::__aarch64_ldadd2_rel}, // __aarch64_ldadd2_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD2_RELAX, RTLIB::__aarch64_ldadd2_relax}, // __aarch64_ldadd2_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ, RTLIB::__aarch64_ldadd4_acq}, // __aarch64_ldadd4_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ_REL, RTLIB::__aarch64_ldadd4_acq_rel}, // __aarch64_ldadd4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD4_REL, RTLIB::__aarch64_ldadd4_rel}, // __aarch64_ldadd4_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD4_RELAX, RTLIB::__aarch64_ldadd4_relax}, // __aarch64_ldadd4_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ, RTLIB::__aarch64_ldadd8_acq}, // __aarch64_ldadd8_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ_REL, RTLIB::__aarch64_ldadd8_acq_rel}, // __aarch64_ldadd8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD8_REL, RTLIB::__aarch64_ldadd8_rel}, // __aarch64_ldadd8_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD8_RELAX, RTLIB::__aarch64_ldadd8_relax}, // __aarch64_ldadd8_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ, RTLIB::__aarch64_ldclr1_acq}, // __aarch64_ldclr1_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ_REL, RTLIB::__aarch64_ldclr1_acq_rel}, // __aarch64_ldclr1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_REL, RTLIB::__aarch64_ldclr1_rel}, // __aarch64_ldclr1_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_RELAX, RTLIB::__aarch64_ldclr1_relax}, // __aarch64_ldclr1_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ, RTLIB::__aarch64_ldclr2_acq}, // __aarch64_ldclr2_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ_REL, RTLIB::__aarch64_ldclr2_acq_rel}, // __aarch64_ldclr2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_REL, RTLIB::__aarch64_ldclr2_rel}, // __aarch64_ldclr2_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_RELAX, RTLIB::__aarch64_ldclr2_relax}, // __aarch64_ldclr2_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ, RTLIB::__aarch64_ldclr4_acq}, // __aarch64_ldclr4_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ_REL, RTLIB::__aarch64_ldclr4_acq_rel}, // __aarch64_ldclr4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_REL, RTLIB::__aarch64_ldclr4_rel}, // __aarch64_ldclr4_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_RELAX, RTLIB::__aarch64_ldclr4_relax}, // __aarch64_ldclr4_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ, RTLIB::__aarch64_ldclr8_acq}, // __aarch64_ldclr8_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ_REL, RTLIB::__aarch64_ldclr8_acq_rel}, // __aarch64_ldclr8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_REL, RTLIB::__aarch64_ldclr8_rel}, // __aarch64_ldclr8_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_RELAX, RTLIB::__aarch64_ldclr8_relax}, // __aarch64_ldclr8_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ, RTLIB::__aarch64_ldeor1_acq}, // __aarch64_ldeor1_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ_REL, RTLIB::__aarch64_ldeor1_acq_rel}, // __aarch64_ldeor1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_REL, RTLIB::__aarch64_ldeor1_rel}, // __aarch64_ldeor1_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_RELAX, RTLIB::__aarch64_ldeor1_relax}, // __aarch64_ldeor1_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ, RTLIB::__aarch64_ldeor2_acq}, // __aarch64_ldeor2_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ_REL, RTLIB::__aarch64_ldeor2_acq_rel}, // __aarch64_ldeor2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_REL, RTLIB::__aarch64_ldeor2_rel}, // __aarch64_ldeor2_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_RELAX, RTLIB::__aarch64_ldeor2_relax}, // __aarch64_ldeor2_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ, RTLIB::__aarch64_ldeor4_acq}, // __aarch64_ldeor4_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ_REL, RTLIB::__aarch64_ldeor4_acq_rel}, // __aarch64_ldeor4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_REL, RTLIB::__aarch64_ldeor4_rel}, // __aarch64_ldeor4_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_RELAX, RTLIB::__aarch64_ldeor4_relax}, // __aarch64_ldeor4_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ, RTLIB::__aarch64_ldeor8_acq}, // __aarch64_ldeor8_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ_REL, RTLIB::__aarch64_ldeor8_acq_rel}, // __aarch64_ldeor8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_REL, RTLIB::__aarch64_ldeor8_rel}, // __aarch64_ldeor8_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_RELAX, RTLIB::__aarch64_ldeor8_relax}, // __aarch64_ldeor8_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ, RTLIB::__aarch64_ldset1_acq}, // __aarch64_ldset1_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ_REL, RTLIB::__aarch64_ldset1_acq_rel}, // __aarch64_ldset1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET1_REL, RTLIB::__aarch64_ldset1_rel}, // __aarch64_ldset1_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET1_RELAX, RTLIB::__aarch64_ldset1_relax}, // __aarch64_ldset1_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ, RTLIB::__aarch64_ldset2_acq}, // __aarch64_ldset2_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ_REL, RTLIB::__aarch64_ldset2_acq_rel}, // __aarch64_ldset2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET2_REL, RTLIB::__aarch64_ldset2_rel}, // __aarch64_ldset2_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET2_RELAX, RTLIB::__aarch64_ldset2_relax}, // __aarch64_ldset2_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ, RTLIB::__aarch64_ldset4_acq}, // __aarch64_ldset4_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ_REL, RTLIB::__aarch64_ldset4_acq_rel}, // __aarch64_ldset4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET4_REL, RTLIB::__aarch64_ldset4_rel}, // __aarch64_ldset4_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET4_RELAX, RTLIB::__aarch64_ldset4_relax}, // __aarch64_ldset4_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ, RTLIB::__aarch64_ldset8_acq}, // __aarch64_ldset8_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ_REL, RTLIB::__aarch64_ldset8_acq_rel}, // __aarch64_ldset8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET8_REL, RTLIB::__aarch64_ldset8_rel}, // __aarch64_ldset8_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET8_RELAX, RTLIB::__aarch64_ldset8_relax}, // __aarch64_ldset8_relax
        {RTLIB::OUTLINE_ATOMIC_SWP1_ACQ, RTLIB::__aarch64_swp1_acq}, // __aarch64_swp1_acq
        {RTLIB::OUTLINE_ATOMIC_SWP1_ACQ_REL, RTLIB::__aarch64_swp1_acq_rel}, // __aarch64_swp1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP1_REL, RTLIB::__aarch64_swp1_rel}, // __aarch64_swp1_rel
        {RTLIB::OUTLINE_ATOMIC_SWP1_RELAX, RTLIB::__aarch64_swp1_relax}, // __aarch64_swp1_relax
        {RTLIB::OUTLINE_ATOMIC_SWP2_ACQ, RTLIB::__aarch64_swp2_acq}, // __aarch64_swp2_acq
        {RTLIB::OUTLINE_ATOMIC_SWP2_ACQ_REL, RTLIB::__aarch64_swp2_acq_rel}, // __aarch64_swp2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP2_REL, RTLIB::__aarch64_swp2_rel}, // __aarch64_swp2_rel
        {RTLIB::OUTLINE_ATOMIC_SWP2_RELAX, RTLIB::__aarch64_swp2_relax}, // __aarch64_swp2_relax
        {RTLIB::OUTLINE_ATOMIC_SWP4_ACQ, RTLIB::__aarch64_swp4_acq}, // __aarch64_swp4_acq
        {RTLIB::OUTLINE_ATOMIC_SWP4_ACQ_REL, RTLIB::__aarch64_swp4_acq_rel}, // __aarch64_swp4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP4_REL, RTLIB::__aarch64_swp4_rel}, // __aarch64_swp4_rel
        {RTLIB::OUTLINE_ATOMIC_SWP4_RELAX, RTLIB::__aarch64_swp4_relax}, // __aarch64_swp4_relax
        {RTLIB::OUTLINE_ATOMIC_SWP8_ACQ, RTLIB::__aarch64_swp8_acq}, // __aarch64_swp8_acq
        {RTLIB::OUTLINE_ATOMIC_SWP8_ACQ_REL, RTLIB::__aarch64_swp8_acq_rel}, // __aarch64_swp8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP8_REL, RTLIB::__aarch64_swp8_rel}, // __aarch64_swp8_rel
        {RTLIB::OUTLINE_ATOMIC_SWP8_RELAX, RTLIB::__aarch64_swp8_relax}, // __aarch64_swp8_relax
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SC_MEMCPY, RTLIB::__arm_sc_memcpy}, // __arm_sc_memcpy
        {RTLIB::SC_MEMMOVE, RTLIB::__arm_sc_memmove}, // __arm_sc_memmove
        {RTLIB::SC_MEMSET, RTLIB::__arm_sc_memset}, // __arm_sc_memset
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (darwinHasExp10(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasExp10[] = {
          {RTLIB::EXP10_F32, RTLIB::__exp10f}, // __exp10f
          {RTLIB::EXP10_F64, RTLIB::__exp10}, // __exp10
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasExp10) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (darwinHasSinCosStret(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasSinCosStret[] = {
          {RTLIB::SINCOS_STRET_F32, RTLIB::__sincosf_stret}, // __sincosf_stret
          {RTLIB::SINCOS_STRET_F64, RTLIB::__sincos_stret}, // __sincos_stret
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasSinCosStret) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (hasSinCos(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos[] = {
          {RTLIB::SINCOS_F32, RTLIB::sincosf}, // sincosf
          {RTLIB::SINCOS_F64, RTLIB::sincos}, // sincos
          {RTLIB::SINCOS_F128, RTLIB::sincos_f128}, // sincosl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isAArch64(64)) {
      static const LibcallImplPair LibraryCalls_isAArch64_ILP64[] = {
          {RTLIB::MUL_I128, RTLIB::__multi3}, // __multi3
          {RTLIB::SHL_I128, RTLIB::__ashlti3}, // __ashlti3
          {RTLIB::SRA_I128, RTLIB::__ashrti3}, // __ashrti3
          {RTLIB::SRL_I128, RTLIB::__lshrti3}, // __lshrti3
      };

      for (const auto [Func, Impl] : LibraryCalls_isAArch64_ILP64) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSMSVCRT()) {
      static const LibcallImplPair LibraryCalls_isNotOSMSVCRT[] = {
          {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
          {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSMSVCRT) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSWindows() || TT.isOSCygMing()) {
      static const LibcallImplPair LibraryCalls_isNotOSWindowsOrIsCygwinMinGW[] = {
          {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
          {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
          {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
          {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSWindowsOrIsCygwinMinGW) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isOSDarwin()) {
      static const LibcallImplPair LibraryCalls_isOSDarwin[] = {
          {RTLIB::BZERO, RTLIB::bzero}, // bzero
      };

      for (const auto [Func, Impl] : LibraryCalls_isOSDarwin) {
        setLibcallImpl(Func, Impl);
      }

    }

    return;
  }

  if (TT.isAMDGPU()) {
    return;
  }

  if (TT.isARM() || TT.isThumb()) {
    const CallingConv::ID DefaultCC = (!TT.isOSDarwin() && !TT.isiOS() && !TT.isWatchOS() && !TT.isDriverKit()) ?
        (FloatABI == FloatABI::Hard ? CallingConv::ARM_AAPCS_VFP
                                    : CallingConv::ARM_AAPCS) :
                                      CallingConv::C;
    for (CallingConv::ID &Entry : LibcallImplCallingConvs) {
      Entry = DefaultCC;
    }

    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (TT.isTargetAEABI() || TT.isAndroid() || TT.isTargetGNUAEABI() ||
    TT.isTargetMuslAEABI()) {
      static const LibcallImplPair LibraryCalls_anonymous_19[] = {
          {RTLIB::SDIVREM_I32, RTLIB::__aeabi_idivmod}, // __aeabi_idivmod
          {RTLIB::SDIVREM_I64, RTLIB::__aeabi_ldivmod}, // __aeabi_ldivmod
          {RTLIB::UDIVREM_I32, RTLIB::__aeabi_uidivmod}, // __aeabi_uidivmod
          {RTLIB::UDIVREM_I64, RTLIB::__aeabi_uldivmod}, // __aeabi_uldivmod
      };

      for (const auto [Func, Impl] : LibraryCalls_anonymous_19) {
        setLibcallImpl(Func, Impl);
        setLibcallImplCallingConv(Impl, CallingConv::ARM_AAPCS);
      }

    }

    if (TT.isOSBinFormatMachO() &&
                                                  (!TT.isiOS() || !TT.isOSVersionLT(5, 0))) {
      static const LibcallImplPair LibraryCalls_anonymous_20[] = {
          {RTLIB::SDIVREM_I32, RTLIB::__divmodsi4}, // __divmodsi4
          {RTLIB::UDIVREM_I32, RTLIB::__udivmodsi4}, // __udivmodsi4
      };

      for (const auto [Func, Impl] : LibraryCalls_anonymous_20) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (darwinHasExp10(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasExp10[] = {
          {RTLIB::EXP10_F32, RTLIB::__exp10f}, // __exp10f
          {RTLIB::EXP10_F64, RTLIB::__exp10}, // __exp10
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasExp10) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (darwinHasSinCosStret(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasSinCosStret[] = {
          {RTLIB::SINCOS_STRET_F32, RTLIB::__sincosf_stret}, // __sincosf_stret
          {RTLIB::SINCOS_STRET_F64, RTLIB::__sincos_stret}, // __sincos_stret
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasSinCosStret) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (hasSinCos(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos[] = {
          {RTLIB::SINCOS_F32, RTLIB::sincosf}, // sincosf
          {RTLIB::SINCOS_F64, RTLIB::sincos}, // sincos
          {RTLIB::SINCOS_F128, RTLIB::sincos_f128}, // sincosl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSMSVCRT()) {
      static const LibcallImplPair LibraryCalls_isNotOSMSVCRT[] = {
          {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
          {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSMSVCRT) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSWindows() || TT.isOSCygMing()) {
      static const LibcallImplPair LibraryCalls_isNotOSWindowsOrIsCygwinMinGW[] = {
          {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
          {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
          {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
          {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSWindowsOrIsCygwinMinGW) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isOSWindows()) {
      static const LibcallImplPair LibraryCalls_isOSWindows[] = {
          {RTLIB::SDIVREM_I32, RTLIB::__rt_sdiv}, // __rt_sdiv
          {RTLIB::SDIVREM_I64, RTLIB::__rt_sdiv64}, // __rt_sdiv64
          {RTLIB::UDIVREM_I32, RTLIB::__rt_udiv}, // __rt_udiv
          {RTLIB::UDIVREM_I64, RTLIB::__rt_udiv64}, // __rt_udiv64
      };

      for (const auto [Func, Impl] : LibraryCalls_isOSWindows) {
        setLibcallImpl(Func, Impl);
        setLibcallImplCallingConv(Impl, CallingConv::ARM_AAPCS);
      }

    }

    if (TT.isOSWindows()) {
      static const LibcallImplPair LibraryCalls_isOSWindows[] = {
          {RTLIB::FPTOSINT_F32_I64, RTLIB::__stoi64}, // __stoi64
          {RTLIB::FPTOSINT_F64_I64, RTLIB::__dtoi64}, // __dtoi64
          {RTLIB::FPTOUINT_F32_I64, RTLIB::__stou64}, // __stou64
          {RTLIB::FPTOUINT_F64_I64, RTLIB::__dtou64}, // __dtou64
          {RTLIB::SINTTOFP_I64_F32, RTLIB::__i64tos}, // __i64tos
          {RTLIB::SINTTOFP_I64_F64, RTLIB::__i64tod}, // __i64tod
          {RTLIB::UINTTOFP_I64_F32, RTLIB::__u64tos}, // __u64tos
          {RTLIB::UINTTOFP_I64_F64, RTLIB::__u64tod}, // __u64tod
      };

      for (const auto [Func, Impl] : LibraryCalls_isOSWindows) {
        setLibcallImpl(Func, Impl);
        setLibcallImplCallingConv(Impl, CallingConv::ARM_AAPCS_VFP);
      }

    }

    return;
  }

  if (TT.getArch() == Triple::avr) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::avr_cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIVREM_I32, RTLIB::__divmodsi4}, // __divmodsi4
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::avr_sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIVREM_I32, RTLIB::__udivmodsi4}, // __udivmodsi4
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    static const LibcallImplPair LibraryCalls_AlwaysAvailable[] = {
        {RTLIB::SDIVREM_I8, RTLIB::__divmodqi4}, // __divmodqi4
        {RTLIB::SDIVREM_I16, RTLIB::__divmodhi4}, // __divmodhi4
        {RTLIB::UDIVREM_I8, RTLIB::__udivmodqi4}, // __udivmodqi4
        {RTLIB::UDIVREM_I16, RTLIB::__udivmodhi4}, // __udivmodhi4
    };

    for (const auto [Func, Impl] : LibraryCalls_AlwaysAvailable) {
      setLibcallImpl(Func, Impl);
      setLibcallImplCallingConv(Impl, CallingConv::AVR_BUILTIN);
    }

    return;
  }

  if (TT.getArch() == Triple::hexagon) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__hexagon_adddf3}, // __hexagon_adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__hexagon_divsf3}, // __hexagon_divsf3
        {RTLIB::DIV_F64, RTLIB::__hexagon_divdf3}, // __hexagon_divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FAST_ADD_F64, RTLIB::__hexagon_fast_adddf3}, // __hexagon_fast_adddf3
        {RTLIB::FAST_DIV_F32, RTLIB::__hexagon_fast_divsf3}, // __hexagon_fast_divsf3
        {RTLIB::FAST_DIV_F64, RTLIB::__hexagon_fast_divdf3}, // __hexagon_fast_divdf3
        {RTLIB::FAST_MUL_F64, RTLIB::__hexagon_fast_muldf3}, // __hexagon_fast_muldf3
        {RTLIB::FAST_SQRT_F32, RTLIB::__hexagon_fast2_sqrtf}, // __hexagon_fast2_sqrtf
        {RTLIB::FAST_SQRT_F64, RTLIB::__hexagon_fast2_sqrtdf2}, // __hexagon_fast2_sqrtdf2
        {RTLIB::FAST_SUB_F64, RTLIB::__hexagon_fast_subdf3}, // __hexagon_fast_subdf3
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::HEXAGON_MEMCPY_LIKELY_ALIGNED_MIN32BYTES_MULT8BYTES, RTLIB::__hexagon_memcpy_likely_aligned_min32bytes_mult8bytes}, // __hexagon_memcpy_likely_aligned_min32bytes_mult8bytes
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__hexagon_muldf3}, // __hexagon_muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__hexagon_divsi3}, // __hexagon_divsi3
        {RTLIB::SDIV_I64, RTLIB::__hexagon_divdi3}, // __hexagon_divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::__hexagon_sqrtf}, // __hexagon_sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__hexagon_modsi3}, // __hexagon_modsi3
        {RTLIB::SREM_I64, RTLIB::__hexagon_moddi3}, // __hexagon_moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__hexagon_subdf3}, // __hexagon_subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__hexagon_udivsi3}, // __hexagon_udivsi3
        {RTLIB::UDIV_I64, RTLIB::__hexagon_udivdi3}, // __hexagon_udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__hexagon_umodsi3}, // __hexagon_umodsi3
        {RTLIB::UREM_I64, RTLIB::__hexagon_umoddi3}, // __hexagon_umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    return;
  }

  if (TT.getArch() == Triple::lanai) {
    const CallingConv::ID DefaultCC = CallingConv::Fast;
    for (CallingConv::ID &Entry : LibcallImplCallingConvs) {
      Entry = DefaultCC;
    }

    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    return;
  }

  if (TT.getArch() == Triple::msp430) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__mspabi_addf}, // __mspabi_addf
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__mspabi_divf}, // __mspabi_divf
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__mspabi_cvtfd}, // __mspabi_cvtfd
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__mspabi_cvtdf}, // __mspabi_cvtdf
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__mspabi_fixfli}, // __mspabi_fixfli
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__mspabi_fixflli}, // __mspabi_fixflli
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__mspabi_fixdli}, // __mspabi_fixdli
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__mspabi_fixdlli}, // __mspabi_fixdlli
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__mspabi_fixful}, // __mspabi_fixful
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__mspabi_fixfull}, // __mspabi_fixfull
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__mspabi_fixdul}, // __mspabi_fixdul
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__mspabi_fixdull}, // __mspabi_fixdull
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mspabi_mpyf}, // __mspabi_mpyf
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__mspabi_cmpf__oeq}, // __mspabi_cmpf
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__mspabi_cmpf__oge}, // __mspabi_cmpf
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__mspabi_cmpf__ogt}, // __mspabi_cmpf
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__mspabi_cmpf__ole}, // __mspabi_cmpf
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__mspabi_cmpf__olt}, // __mspabi_cmpf
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__mspabi_divi}, // __mspabi_divi
        {RTLIB::SDIV_I32, RTLIB::__mspabi_divli}, // __mspabi_divli
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__mspabi_slll}, // __mspabi_slll
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__mspabi_fltlif}, // __mspabi_fltlif
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__mspabi_fltlid}, // __mspabi_fltlid
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__mspabi_fltllif}, // __mspabi_fltllif
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__mspabi_fltllid}, // __mspabi_fltllid
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__mspabi_sral}, // __mspabi_sral
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__mspabi_remi}, // __mspabi_remi
        {RTLIB::SREM_I32, RTLIB::__mspabi_remli}, // __mspabi_remli
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__mspabi_srll}, // __mspabi_srll
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__mspabi_subf}, // __mspabi_subf
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__mspabi_divu}, // __mspabi_divu
        {RTLIB::UDIV_I32, RTLIB::__mspabi_divul}, // __mspabi_divul
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__mspabi_fltulf}, // __mspabi_fltulf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__mspabi_fltuld}, // __mspabi_fltuld
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__mspabi_fltullf}, // __mspabi_fltullf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__mspabi_fltulld}, // __mspabi_fltulld
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__mspabi_cmpf__une}, // __mspabi_cmpf
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__mspabi_remu}, // __mspabi_remu
        {RTLIB::UREM_I32, RTLIB::__mspabi_remul}, // __mspabi_remul
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    static const LibcallImplPair LibraryCalls_AlwaysAvailable[] = {
        {RTLIB::ADD_F64, RTLIB::__mspabi_addd}, // __mspabi_addd
        {RTLIB::DIV_F64, RTLIB::__mspabi_divd}, // __mspabi_divd
        {RTLIB::MUL_F64, RTLIB::__mspabi_mpyd}, // __mspabi_mpyd
        {RTLIB::OEQ_F64, RTLIB::__mspabi_cmpd__oeq}, // __mspabi_cmpd
        {RTLIB::OGE_F64, RTLIB::__mspabi_cmpd__oge}, // __mspabi_cmpd
        {RTLIB::OGT_F64, RTLIB::__mspabi_cmpd__ogt}, // __mspabi_cmpd
        {RTLIB::OLE_F64, RTLIB::__mspabi_cmpd__ole}, // __mspabi_cmpd
        {RTLIB::OLT_F64, RTLIB::__mspabi_cmpd__olt}, // __mspabi_cmpd
        {RTLIB::SDIV_I64, RTLIB::__mspabi_divlli}, // __mspabi_divlli
        {RTLIB::SREM_I64, RTLIB::__mspabi_remlli}, // __mspabi_remlli
        {RTLIB::SUB_F64, RTLIB::__mspabi_subd}, // __mspabi_subd
        {RTLIB::UDIV_I64, RTLIB::__mspabi_divull}, // __mspabi_divull
        {RTLIB::UNE_F64, RTLIB::__mspabi_cmpd__une}, // __mspabi_cmpd
        {RTLIB::UREM_I64, RTLIB::__mspabi_remull}, // __mspabi_remull
    };

    for (const auto [Func, Impl] : LibraryCalls_AlwaysAvailable) {
      setLibcallImpl(Func, Impl);
      setLibcallImplCallingConv(Impl, CallingConv::MSP430_BUILTIN);
    }

    return;
  }

  if (TT.isNVPTX()) {
    return;
  }

  if (TT.isPPC()) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acosf128}, // acosf128
        {RTLIB::ACOS_PPCF128, RTLIB::acos_ppcf128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addkf3}, // __addkf3
        {RTLIB::ADD_PPCF128, RTLIB::__gcc_qadd}, // __gcc_qadd
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asinf128}, // asinf128
        {RTLIB::ASIN_PPCF128, RTLIB::asin_ppcf128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2f128}, // atan2f128
        {RTLIB::ATAN2_PPCF128, RTLIB::atan2_ppcf128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atanf128}, // atanf128
        {RTLIB::ATAN_PPCF128, RTLIB::atan_ppcf128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrtf128}, // cbrtf128
        {RTLIB::CBRT_PPCF128, RTLIB::cbrt_ppcf128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceilf128}, // ceilf128
        {RTLIB::CEIL_PPCF128, RTLIB::ceil_ppcf128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::CONVERT_F128_PPCF128, RTLIB::__extendkftf2}, // __extendkftf2
        {RTLIB::CONVERT_PPCF128_F128, RTLIB::__trunctfkf2}, // __trunctfkf2
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysignf128}, // copysignf128
        {RTLIB::COPYSIGN_PPCF128, RTLIB::copysign_ppcf128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::coshf128}, // coshf128
        {RTLIB::COSH_PPCF128, RTLIB::cosh_ppcf128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cosf128}, // cosf128
        {RTLIB::COS_PPCF128, RTLIB::cos_ppcf128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divkf3}, // __divkf3
        {RTLIB::DIV_PPCF128, RTLIB::__gcc_qdiv}, // __gcc_qdiv
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2f128}, // exp2f128
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_PPCF128, RTLIB::__exp2l_finite_ppcf128}, // __exp2l_finite
        {RTLIB::EXP2_PPCF128, RTLIB::exp2_ppcf128}, // exp2l
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10f128}, // exp10f128
        {RTLIB::EXP10_PPCF128, RTLIB::exp10l_ppcf128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::expf128}, // expf128
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_PPCF128, RTLIB::__expl_finite_ppcf128}, // __expl_finite
        {RTLIB::EXP_PPCF128, RTLIB::exp_ppcf128}, // expl
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floorf128}, // floorf128
        {RTLIB::FLOOR_PPCF128, RTLIB::floor_ppcf128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximumf128}, // fmaximumf128
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_numf128}, // fmaximum_numf128
        {RTLIB::FMAXIMUM_NUM_PPCF128, RTLIB::fmaximum_num_ppcf128}, // fmaximum_numl
        {RTLIB::FMAXIMUM_PPCF128, RTLIB::fmaximum_ppcf128}, // fmaximuml
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmaxf128}, // fmaxf128
        {RTLIB::FMAX_PPCF128, RTLIB::fmax_ppcf128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fmaf128}, // fmaf128
        {RTLIB::FMA_PPCF128, RTLIB::fma_ppcf128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimumf128}, // fminimumf128
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_numf128}, // fminimum_numf128
        {RTLIB::FMINIMUM_NUM_PPCF128, RTLIB::fminimum_num_ppcf128}, // fminimum_numl
        {RTLIB::FMINIMUM_PPCF128, RTLIB::fminimum_ppcf128}, // fminimuml
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fminf128}, // fminf128
        {RTLIB::FMIN_PPCF128, RTLIB::fmin_ppcf128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsfkf2}, // __extendsfkf2
        {RTLIB::FPEXT_F32_PPCF128, RTLIB::__gcc_stoq}, // __gcc_stoq
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddfkf2}, // __extenddfkf2
        {RTLIB::FPEXT_F64_PPCF128, RTLIB::__gcc_dtoq}, // __gcc_dtoq
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunckfhf2}, // __trunckfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunckfsf2}, // __trunckfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunckfdf2}, // __trunckfdf2
        {RTLIB::FPROUND_PPCF128_F16, RTLIB::__trunctfhf2_ppcf128}, // __trunctfhf2
        {RTLIB::FPROUND_PPCF128_F32, RTLIB::__gcc_qtos}, // __gcc_qtos
        {RTLIB::FPROUND_PPCF128_F64, RTLIB::__gcc_qtod}, // __gcc_qtod
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixkfsi}, // __fixkfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixkfdi}, // __fixkfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixkfti}, // __fixkfti
        {RTLIB::FPTOSINT_PPCF128_I32, RTLIB::__gcc_qtou}, // __gcc_qtou
        {RTLIB::FPTOSINT_PPCF128_I64, RTLIB::__fixtfdi_ppcf128}, // __fixtfdi
        {RTLIB::FPTOSINT_PPCF128_I128, RTLIB::__fixtfti_ppcf128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunskfsi}, // __fixunskfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunskfdi}, // __fixunskfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunskfti}, // __fixunskfti
        {RTLIB::FPTOUINT_PPCF128_I32, RTLIB::__fixunstfsi_ppcf128}, // __fixunstfsi
        {RTLIB::FPTOUINT_PPCF128_I64, RTLIB::__fixunstfdi_ppcf128}, // __fixunstfdi
        {RTLIB::FPTOUINT_PPCF128_I128, RTLIB::__fixunstfti_ppcf128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexpf128}, // frexpf128
        {RTLIB::FREXP_PPCF128, RTLIB::frexp_ppcf128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexpf128}, // ldexpf128
        {RTLIB::LDEXP_PPCF128, RTLIB::ldexp_ppcf128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrintf128}, // llrintf128
        {RTLIB::LLRINT_PPCF128, RTLIB::llrint_ppcf128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llroundf128}, // llroundf128
        {RTLIB::LLROUND_PPCF128, RTLIB::llround_ppcf128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2f128}, // log2f128
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_PPCF128, RTLIB::__log2l_finite_ppcf128}, // __log2l_finite
        {RTLIB::LOG2_PPCF128, RTLIB::log2_ppcf128}, // log2l
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10f128}, // log10f128
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_PPCF128, RTLIB::__log10l_finite_ppcf128}, // __log10l_finite
        {RTLIB::LOG10_PPCF128, RTLIB::log10_ppcf128}, // log10l
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::logf128}, // logf128
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_PPCF128, RTLIB::__logl_finite_ppcf128}, // __logl_finite
        {RTLIB::LOG_PPCF128, RTLIB::log_ppcf128}, // logl
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrintf128}, // lrintf128
        {RTLIB::LRINT_PPCF128, RTLIB::lrint_ppcf128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lroundf128}, // lroundf128
        {RTLIB::LROUND_PPCF128, RTLIB::lround_ppcf128}, // lroundl
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modff128}, // modff128
        {RTLIB::MODF_PPCF128, RTLIB::modf_ppcf128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__mulkf3}, // __mulkf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::MUL_PPCF128, RTLIB::__gcc_qmul}, // __gcc_qmul
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyintf128}, // nearbyintf128
        {RTLIB::NEARBYINT_PPCF128, RTLIB::nearbyint_ppcf128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqkf2}, // __eqkf2
        {RTLIB::OEQ_PPCF128, RTLIB::__gcc_qeq}, // __gcc_qeq
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__gekf2}, // __gekf2
        {RTLIB::OGE_PPCF128, RTLIB::__gcc_qge}, // __gcc_qge
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gtkf2}, // __gtkf2
        {RTLIB::OGT_PPCF128, RTLIB::__gcc_qgt}, // __gcc_qgt
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__lekf2}, // __lekf2
        {RTLIB::OLE_PPCF128, RTLIB::__gcc_qle}, // __gcc_qle
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__ltkf2}, // __ltkf2
        {RTLIB::OLT_PPCF128, RTLIB::__gcc_qlt}, // __gcc_qlt
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powikf2}, // __powikf2
        {RTLIB::POWI_PPCF128, RTLIB::__powitf2_ppc128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::powf128}, // powf128
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_PPCF128, RTLIB::__powl_finite_ppcf128}, // __powl_finite
        {RTLIB::POW_PPCF128, RTLIB::pow_ppcf128}, // powl
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodf128}, // fmodf128
        {RTLIB::REM_PPCF128, RTLIB::fmodl_ppc128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rintf128}, // rintf128
        {RTLIB::RINT_PPCF128, RTLIB::rint_ppcf128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundevenf128}, // roundevenf128
        {RTLIB::ROUNDEVEN_PPCF128, RTLIB::roundeven_ppcf128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::roundf128}, // roundf128
        {RTLIB::ROUND_PPCF128, RTLIB::round_ppcf128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_PPCF128, RTLIB::sincospi_ppcf128}, // sincospil
        {RTLIB::SINCOS_F128, RTLIB::sincosf128}, // sincosf128
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinhf128}, // sinhf128
        {RTLIB::SINH_PPCF128, RTLIB::sinh_ppcf128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsikf}, // __floatsikf
        {RTLIB::SINTTOFP_I32_PPCF128, RTLIB::__gcc_itoq}, // __gcc_itoq
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatdikf}, // __floatdikf
        {RTLIB::SINTTOFP_I64_PPCF128, RTLIB::__floatditf_ppcf128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattikf}, // __floattikf
        {RTLIB::SINTTOFP_I128_PPCF128, RTLIB::__floattitf_ppcf128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sinf128}, // sinf128
        {RTLIB::SIN_PPCF128, RTLIB::sin_ppcf128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrtf128}, // sqrtf128
        {RTLIB::SQRT_PPCF128, RTLIB::sqrt_ppcf128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subkf3}, // __subkf3
        {RTLIB::SUB_PPCF128, RTLIB::__gcc_qsub}, // __gcc_qsub
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanhf128}, // tanhf128
        {RTLIB::TANH_PPCF128, RTLIB::tanh_ppcf128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tanf128}, // tanf128
        {RTLIB::TAN_PPCF128, RTLIB::tan_ppcf128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::truncf128}, // truncf128
        {RTLIB::TRUNC_PPCF128, RTLIB::trunc_ppcf128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsikf}, // __floatunsikf
        {RTLIB::UINTTOFP_I32_PPCF128, RTLIB::__gcc_utoq}, // __gcc_utoq
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatundikf}, // __floatundikf
        {RTLIB::UINTTOFP_I64_PPCF128, RTLIB::__floatunditf_ppcf128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntikf}, // __floatuntikf
        {RTLIB::UINTTOFP_I128_PPCF128, RTLIB::__floatuntitf_ppcf128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__nekf2}, // __nekf2
        {RTLIB::UNE_PPCF128, RTLIB::__gcc_qne}, // __gcc_qne
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordkf2}, // __unordkf2
        {RTLIB::UO_PPCF128, RTLIB::__gcc_qunord}, // __gcc_qunord
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (hasSinCos(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos[] = {
          {RTLIB::SINCOS_F32, RTLIB::sincosf}, // sincosf
          {RTLIB::SINCOS_F64, RTLIB::sincos}, // sincos
          {RTLIB::SINCOS_F128, RTLIB::sincos_f128}, // sincosl
          {RTLIB::SINCOS_PPCF128, RTLIB::sincos_ppcf128}, // sincosl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSAIX()) {
      static const LibcallImplPair LibraryCalls_isNotAIX[] = {
          {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotAIX) {
        setLibcallImpl(Func, Impl);
      }

    }

    if ((TT.isPPC32() && TT.isOSAIX())) {
      static const LibcallImplPair LibraryCalls_isPPC32_AIX[] = {
          {RTLIB::BZERO, RTLIB::___bzero}, // ___bzero
          {RTLIB::MEMMOVE, RTLIB::___memmove}, // ___memmove
          {RTLIB::MEMSET, RTLIB::___memset}, // ___memset
      };

      for (const auto [Func, Impl] : LibraryCalls_isPPC32_AIX) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isPPC64()) {
      static const LibcallImplPair LibraryCalls_isPPC64[] = {
          {RTLIB::MUL_I128, RTLIB::__multi3}, // __multi3
          {RTLIB::SHL_I128, RTLIB::__ashlti3}, // __ashlti3
          {RTLIB::SRA_I128, RTLIB::__ashrti3}, // __ashrti3
          {RTLIB::SRL_I128, RTLIB::__lshrti3}, // __lshrti3
      };

      for (const auto [Func, Impl] : LibraryCalls_isPPC64) {
        setLibcallImpl(Func, Impl);
      }

    }

    if ((TT.isPPC64() && TT.isOSAIX())) {
      static const LibcallImplPair LibraryCalls_isPPC64_AIX[] = {
          {RTLIB::BZERO, RTLIB::___bzero64}, // ___bzero64
          {RTLIB::MEMCPY, RTLIB::___memmove64}, // ___memmove64
          {RTLIB::MEMSET, RTLIB::___memset64}, // ___memset64
      };

      for (const auto [Func, Impl] : LibraryCalls_isPPC64_AIX) {
        setLibcallImpl(Func, Impl);
      }

    }

    return;
  }

  if (TT.isRISCV()) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::RISCV_FLUSH_ICACHE, RTLIB::__riscv_flush_icache}, // __riscv_flush_icache
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (TT.isRISCV64()) {
      static const LibcallImplPair LibraryCalls_isRISCV64[] = {
          {RTLIB::MUL_I128, RTLIB::__multi3}, // __multi3
          {RTLIB::SHL_I128, RTLIB::__ashlti3}, // __ashlti3
          {RTLIB::SRA_I128, RTLIB::__ashrti3}, // __ashrti3
          {RTLIB::SRL_I128, RTLIB::__lshrti3}, // __lshrti3
      };

      for (const auto [Func, Impl] : LibraryCalls_isRISCV64) {
        setLibcallImpl(Func, Impl);
      }

    }

    return;
  }

  if (TT.isSPARC()) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::sparc_umul}, // .umul
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::sparc_div}, // .div
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::sparc_rem}, // .rem
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::sparc_udiv}, // .udiv
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::sparc_urem}, // .urem
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (hasSinCos(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos[] = {
          {RTLIB::SINCOS_F32, RTLIB::sincosf}, // sincosf
          {RTLIB::SINCOS_F64, RTLIB::sincos}, // sincos
          {RTLIB::SINCOS_F128, RTLIB::sincos_f128}, // sincosl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isSPARC32()) {
      static const LibcallImplPair LibraryCalls_isSPARC32[] = {
          {RTLIB::FPTOSINT_F128_I64, RTLIB::_Q_qtoll}, // _Q_qtoll
          {RTLIB::FPTOUINT_F128_I64, RTLIB::_Q_qtoull}, // _Q_qtoull
          {RTLIB::SINTTOFP_I64_F128, RTLIB::_Q_lltoq}, // _Q_lltoq
          {RTLIB::UINTTOFP_I64_F128, RTLIB::_Q_ulltoq}, // _Q_ulltoq
      };

      for (const auto [Func, Impl] : LibraryCalls_isSPARC32) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isSPARC64()) {
      static const LibcallImplPair LibraryCalls_isSPARC64[] = {
          {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
          {RTLIB::MUL_I128, RTLIB::__multi3}, // __multi3
          {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
          {RTLIB::SHL_I128, RTLIB::__ashlti3}, // __ashlti3
          {RTLIB::SRA_I128, RTLIB::__ashrti3}, // __ashrti3
          {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
          {RTLIB::SRL_I128, RTLIB::__lshrti3}, // __lshrti3
          {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
          {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
      };

      for (const auto [Func, Impl] : LibraryCalls_isSPARC64) {
        setLibcallImpl(Func, Impl);
      }

    }

    return;
  }

  if (TT.isSPIRV()) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMSET, RTLIB::memset}, // memset
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    return;
  }

  if ((TT.isSystemZ() && TT.isOSzOS())) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::MUL_I128, RTLIB::__multi3}, // __multi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SHL_I128, RTLIB::__ashlti3}, // __ashlti3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SRA_I128, RTLIB::__ashrti3}, // __ashrti3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::SRL_I128, RTLIB::__lshrti3}, // __lshrti3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (TT.isOSzOS()) {
      static const LibcallImplPair LibraryCalls_isZOS[] = {
          {RTLIB::CBRT_F32, RTLIB::zos___FCBT_B}, // @@FCBT@B
          {RTLIB::CBRT_F64, RTLIB::zos___SCRT_B}, // @@SCRT@B
          {RTLIB::CBRT_F128, RTLIB::zos___LCBT_B}, // @@LCBT@B
          {RTLIB::CEIL_F32, RTLIB::zos___FCEL_B}, // @@FCEL@B
          {RTLIB::CEIL_F64, RTLIB::zos___SCEL_B}, // @@SCEL@B
          {RTLIB::CEIL_F128, RTLIB::zos___LCEL_B}, // @@LCEL@B
          {RTLIB::COPYSIGN_F32, RTLIB::zos___FCPY_B}, // @@FCPY@B
          {RTLIB::COPYSIGN_F64, RTLIB::zos___DCPY_B}, // @@DCPY@B
          {RTLIB::COPYSIGN_F128, RTLIB::zos___LCPY_B}, // @@LCPY@B
          {RTLIB::COS_F32, RTLIB::zos___FCOS_B}, // @@FCOS@B
          {RTLIB::COS_F64, RTLIB::zos___SCOS_B}, // @@SCOS@B
          {RTLIB::COS_F128, RTLIB::zos___LCOS_B}, // @@LCOS@B
          {RTLIB::EXP2_F32, RTLIB::zos___FXP2_B}, // @@FXP2@B
          {RTLIB::EXP2_F64, RTLIB::zos___EXP2_B}, // @@EXP2@B
          {RTLIB::EXP2_F128, RTLIB::zos___LXP2_B}, // @@LXP2@B
          {RTLIB::EXP_F32, RTLIB::zos___FEXP_B}, // @@FEXP@B
          {RTLIB::EXP_F64, RTLIB::zos___WEXP_B}, // @@WEXP@B
          {RTLIB::EXP_F128, RTLIB::zos___LEXP_B}, // @@LEXP@B
          {RTLIB::FLOOR_F32, RTLIB::zos___FFLR_B}, // @@FFLR@B
          {RTLIB::FLOOR_F64, RTLIB::zos___SFLR_B}, // @@SFLR@B
          {RTLIB::FLOOR_F128, RTLIB::zos___LFLR_B}, // @@LFLR@B
          {RTLIB::FMAX_F32, RTLIB::zos___FMAXFB}, // @@FMAXFB
          {RTLIB::FMAX_F64, RTLIB::zos___FMAX_B}, // @@FMAX@B
          {RTLIB::FMAX_F128, RTLIB::zos___FMAXLB}, // @@FMAXLB
          {RTLIB::FMA_F32, RTLIB::zos___FMAFB}, // @@FMAFB
          {RTLIB::FMA_F64, RTLIB::zos___FMA_B}, // @@FMA@B
          {RTLIB::FMA_F128, RTLIB::zos___FMALB}, // @@FMALB
          {RTLIB::FMIN_F32, RTLIB::zos___FMINFB}, // @@FMINFB
          {RTLIB::FMIN_F64, RTLIB::zos___FMIN_B}, // @@FMIN@B
          {RTLIB::FMIN_F128, RTLIB::zos___FMINLB}, // @@FMINLB
          {RTLIB::FREXP_F32, RTLIB::zos___FFXP_B}, // @@FFXP@B
          {RTLIB::FREXP_F64, RTLIB::zos___SFXP_B}, // @@SFXP@B
          {RTLIB::FREXP_F128, RTLIB::zos___LFXP_B}, // @@LFXP@B
          {RTLIB::LDEXP_F32, RTLIB::zos___FLXP_B}, // @@FLXP@B
          {RTLIB::LDEXP_F64, RTLIB::zos___SLXP_B}, // @@SLXP@B
          {RTLIB::LDEXP_F128, RTLIB::zos___LLXP_B}, // @@LLXP@B
          {RTLIB::LLRINT_F32, RTLIB::zos___LLRTFB}, // @@LLRTFB
          {RTLIB::LLRINT_F64, RTLIB::zos___LLRT_B}, // @@LLRT@B
          {RTLIB::LLRINT_F128, RTLIB::zos___LLRTLB}, // @@LLRTLB
          {RTLIB::LLROUND_F32, RTLIB::zos___LLRDFB}, // @@LLRDFB
          {RTLIB::LLROUND_F64, RTLIB::zos___LLRD_B}, // @@LLRD@B
          {RTLIB::LLROUND_F128, RTLIB::zos___LLRDLB}, // @@LLRDLB
          {RTLIB::LOG2_F32, RTLIB::zos___FLG2_B}, // @@FLG2@B
          {RTLIB::LOG2_F64, RTLIB::zos___LOG2_B}, // @@LOG2@B
          {RTLIB::LOG2_F128, RTLIB::zos___LLG2_B}, // @@LLG2@B
          {RTLIB::LOG10_F32, RTLIB::zos___FLG1_B}, // @@FLG1@B
          {RTLIB::LOG10_F64, RTLIB::zos___WLG1_B}, // @@WLG1@B
          {RTLIB::LOG10_F128, RTLIB::zos___LLG1_B}, // @@LLG1@B
          {RTLIB::LOG_F32, RTLIB::zos___FLOG_B}, // @@FLOG@B
          {RTLIB::LOG_F64, RTLIB::zos___WLOG_B}, // @@WLOG@B
          {RTLIB::LOG_F128, RTLIB::zos___LLOG_B}, // @@LLOG@B
          {RTLIB::LRINT_F32, RTLIB::zos___LRNTFB}, // @@LRNTFB
          {RTLIB::LRINT_F64, RTLIB::zos___LRNT_B}, // @@LRNT@B
          {RTLIB::LRINT_F128, RTLIB::zos___LRNTLB}, // @@LRNTLB
          {RTLIB::LROUND_F32, RTLIB::zos___FRND_B}, // @@FRND@B
          {RTLIB::LROUND_F64, RTLIB::zos___ROND_B}, // @@ROND@B
          {RTLIB::LROUND_F128, RTLIB::zos___LRND_B}, // @@LRND@B
          {RTLIB::NEARBYINT_F32, RTLIB::zos___NBYIFB}, // @@NBYIFB
          {RTLIB::NEARBYINT_F64, RTLIB::zos___NBYI_B}, // @@NBYI@B
          {RTLIB::NEARBYINT_F128, RTLIB::zos___NBYILB}, // @@NBYILB
          {RTLIB::POW_F32, RTLIB::zos___FPOW_B}, // @@FPOW@B
          {RTLIB::POW_F64, RTLIB::zos___WPOW_B}, // @@WPOW@B
          {RTLIB::POW_F128, RTLIB::zos___LPOW_B}, // @@LPOW@B
          {RTLIB::REM_F32, RTLIB::zos___FFMD_B}, // @@FFMD@B
          {RTLIB::REM_F64, RTLIB::zos___WFMD_B}, // @@WFMD@B
          {RTLIB::REM_F128, RTLIB::zos___LFMD_B}, // @@LFMD@B
          {RTLIB::RINT_F32, RTLIB::zos___RINTFB}, // @@RINTFB
          {RTLIB::RINT_F64, RTLIB::zos___SRNT_B}, // @@SRNT@B
          {RTLIB::RINT_F128, RTLIB::zos___RINTLB}, // @@RINTLB
          {RTLIB::ROUND_F32, RTLIB::zos___ROUNFB}, // @@ROUNFB
          {RTLIB::ROUND_F64, RTLIB::zos___ROUN_B}, // @@ROUN@B
          {RTLIB::ROUND_F128, RTLIB::zos___ROUNLB}, // @@ROUNLB
          {RTLIB::SIN_F32, RTLIB::zos___FSIN_B}, // @@FSIN@B
          {RTLIB::SIN_F64, RTLIB::zos___SSIN_B}, // @@SSIN@B
          {RTLIB::SIN_F128, RTLIB::zos___LSIN_B}, // @@LSIN@B
          {RTLIB::SQRT_F32, RTLIB::zos___FSQT_B}, // @@FSQT@B
          {RTLIB::SQRT_F64, RTLIB::zos___WSQT_B}, // @@WSQT@B
          {RTLIB::SQRT_F128, RTLIB::zos___LSQT_B}, // @@LSQT@B
          {RTLIB::TRUNC_F32, RTLIB::zos___FTRC_B}, // @@FTRC@B
          {RTLIB::TRUNC_F64, RTLIB::zos___TRNC_B}, // @@TRNC@B
          {RTLIB::TRUNC_F128, RTLIB::zos___LTRC_B}, // @@LTRC@B
      };

      for (const auto [Func, Impl] : LibraryCalls_isZOS) {
        setLibcallImpl(Func, Impl);
      }

    }

    return;
  }

  if (TT.isWasm()) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MULO_I64, RTLIB::__mulodi4}, // __mulodi4
        {RTLIB::MULO_I128, RTLIB::__muloti4}, // __muloti4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::MUL_I128, RTLIB::__multi3}, // __multi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RETURN_ADDRESS, RTLIB::emscripten_return_address}, // emscripten_return_address
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SHL_I128, RTLIB::__ashlti3}, // __ashlti3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SRA_I128, RTLIB::__ashrti3}, // __ashrti3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::SRL_I128, RTLIB::__lshrti3}, // __lshrti3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    return;
  }

  if (TT.isWindowsArm64EC()) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::arm64ec_acosf}, // #acosf
        {RTLIB::ACOS_F64, RTLIB::arm64ec_acos}, // #acos
        {RTLIB::ACOS_F128, RTLIB::arm64ec_acos_f128}, // #acosl
        {RTLIB::ADD_F32, RTLIB::arm64ec___addsf3}, // #__addsf3
        {RTLIB::ADD_F64, RTLIB::arm64ec___adddf3}, // #__adddf3
        {RTLIB::ADD_F128, RTLIB::arm64ec___addtf3}, // #__addtf3
        {RTLIB::ASIN_F32, RTLIB::arm64ec_asinf}, // #asinf
        {RTLIB::ASIN_F64, RTLIB::arm64ec_asin}, // #asin
        {RTLIB::ASIN_F128, RTLIB::arm64ec_asin_f128}, // #asinl
        {RTLIB::ATAN2_F32, RTLIB::arm64ec_atan2f}, // #atan2f
        {RTLIB::ATAN2_F64, RTLIB::arm64ec_atan2}, // #atan2
        {RTLIB::ATAN2_F128, RTLIB::arm64ec_atan2_f128}, // #atan2l
        {RTLIB::ATAN_F32, RTLIB::arm64ec_atanf}, // #atanf
        {RTLIB::ATAN_F64, RTLIB::arm64ec_atan}, // #atan
        {RTLIB::ATAN_F128, RTLIB::arm64ec_atan_f128}, // #atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::arm64ec___atomic_compare_exchange}, // #__atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::arm64ec___atomic_compare_exchange_1}, // #__atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::arm64ec___atomic_compare_exchange_2}, // #__atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::arm64ec___atomic_compare_exchange_4}, // #__atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::arm64ec___atomic_compare_exchange_8}, // #__atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::arm64ec___atomic_compare_exchange_16}, // #__atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::arm64ec___atomic_exchange}, // #__atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::arm64ec___atomic_exchange_1}, // #__atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::arm64ec___atomic_exchange_2}, // #__atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::arm64ec___atomic_exchange_4}, // #__atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::arm64ec___atomic_exchange_8}, // #__atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::arm64ec___atomic_exchange_16}, // #__atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::arm64ec___atomic_fetch_add_1}, // #__atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::arm64ec___atomic_fetch_add_2}, // #__atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::arm64ec___atomic_fetch_add_4}, // #__atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::arm64ec___atomic_fetch_add_8}, // #__atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::arm64ec___atomic_fetch_add_16}, // #__atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::arm64ec___atomic_fetch_and_1}, // #__atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::arm64ec___atomic_fetch_and_2}, // #__atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::arm64ec___atomic_fetch_and_4}, // #__atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::arm64ec___atomic_fetch_and_8}, // #__atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::arm64ec___atomic_fetch_and_16}, // #__atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::arm64ec___atomic_fetch_nand_1}, // #__atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::arm64ec___atomic_fetch_nand_2}, // #__atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::arm64ec___atomic_fetch_nand_4}, // #__atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::arm64ec___atomic_fetch_nand_8}, // #__atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::arm64ec___atomic_fetch_nand_16}, // #__atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::arm64ec___atomic_fetch_or_1}, // #__atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::arm64ec___atomic_fetch_or_2}, // #__atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::arm64ec___atomic_fetch_or_4}, // #__atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::arm64ec___atomic_fetch_or_8}, // #__atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::arm64ec___atomic_fetch_or_16}, // #__atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::arm64ec___atomic_fetch_sub_1}, // #__atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::arm64ec___atomic_fetch_sub_2}, // #__atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::arm64ec___atomic_fetch_sub_4}, // #__atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::arm64ec___atomic_fetch_sub_8}, // #__atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::arm64ec___atomic_fetch_sub_16}, // #__atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::arm64ec___atomic_fetch_xor_1}, // #__atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::arm64ec___atomic_fetch_xor_2}, // #__atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::arm64ec___atomic_fetch_xor_4}, // #__atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::arm64ec___atomic_fetch_xor_8}, // #__atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::arm64ec___atomic_fetch_xor_16}, // #__atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::arm64ec___atomic_load}, // #__atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::arm64ec___atomic_load_1}, // #__atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::arm64ec___atomic_load_2}, // #__atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::arm64ec___atomic_load_4}, // #__atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::arm64ec___atomic_load_8}, // #__atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::arm64ec___atomic_load_16}, // #__atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::arm64ec___atomic_store}, // #__atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::arm64ec___atomic_store_1}, // #__atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::arm64ec___atomic_store_2}, // #__atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::arm64ec___atomic_store_4}, // #__atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::arm64ec___atomic_store_8}, // #__atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::arm64ec___atomic_store_16}, // #__atomic_store_16
        {RTLIB::CALLOC, RTLIB::arm64ec_calloc}, // #calloc
        {RTLIB::CBRT_F32, RTLIB::arm64ec_cbrtf}, // #cbrtf
        {RTLIB::CBRT_F64, RTLIB::arm64ec_cbrt}, // #cbrt
        {RTLIB::CBRT_F128, RTLIB::arm64ec_cbrt_f128}, // #cbrtl
        {RTLIB::CEIL_F32, RTLIB::arm64ec_ceilf}, // #ceilf
        {RTLIB::CEIL_F64, RTLIB::arm64ec_ceil}, // #ceil
        {RTLIB::CEIL_F128, RTLIB::arm64ec_ceil_f128}, // #ceill
        {RTLIB::CLEAR_CACHE, RTLIB::arm64ec___clear_cache}, // #__clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::arm64ec_copysignf}, // #copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::arm64ec_copysign}, // #copysign
        {RTLIB::COPYSIGN_F128, RTLIB::arm64ec_copysign_f128}, // #copysignl
        {RTLIB::COSH_F32, RTLIB::arm64ec_coshf}, // #coshf
        {RTLIB::COSH_F64, RTLIB::arm64ec_cosh}, // #cosh
        {RTLIB::COSH_F128, RTLIB::arm64ec_cosh_f128}, // #coshl
        {RTLIB::COS_F32, RTLIB::arm64ec_cosf}, // #cosf
        {RTLIB::COS_F64, RTLIB::arm64ec_cos}, // #cos
        {RTLIB::COS_F128, RTLIB::arm64ec_cos_f128}, // #cosl
        {RTLIB::CTLZ_I32, RTLIB::arm64ec___clzsi2}, // #__clzsi2
        {RTLIB::CTLZ_I64, RTLIB::arm64ec___clzdi2}, // #__clzdi2
        {RTLIB::CTLZ_I128, RTLIB::arm64ec___clzti2}, // #__clzti2
        {RTLIB::CTPOP_I32, RTLIB::arm64ec___popcountsi2}, // #__popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::arm64ec___popcountdi2}, // #__popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::arm64ec___popcountti2}, // #__popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::arm64ec___cxa_end_cleanup}, // #__cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::arm64ec___llvm_deoptimize}, // #__llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::arm64ec___divsf3}, // #__divsf3
        {RTLIB::DIV_F64, RTLIB::arm64ec___divdf3}, // #__divdf3
        {RTLIB::DIV_F128, RTLIB::arm64ec___divtf3}, // #__divtf3
        {RTLIB::EXP2_F32, RTLIB::arm64ec_exp2f}, // #exp2f
        {RTLIB::EXP2_F64, RTLIB::arm64ec_exp2}, // #exp2
        {RTLIB::EXP2_F128, RTLIB::arm64ec_exp2_f128}, // #exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::arm64ec___exp2f_finite}, // #__exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::arm64ec___exp2_finite}, // #__exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::arm64ec___exp2l_finite_f128}, // #__exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::arm64ec_exp10f}, // #exp10f
        {RTLIB::EXP10_F64, RTLIB::arm64ec_exp10}, // #exp10
        {RTLIB::EXP10_F128, RTLIB::arm64ec_exp10l_f128}, // #exp10l
        {RTLIB::EXP_F32, RTLIB::arm64ec_expf}, // #expf
        {RTLIB::EXP_F64, RTLIB::arm64ec_exp}, // #exp
        {RTLIB::EXP_F128, RTLIB::arm64ec_exp_f128}, // #expl
        {RTLIB::EXP_FINITE_F32, RTLIB::arm64ec___expf_finite}, // #__expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::arm64ec___exp_finite}, // #__exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::arm64ec___expl_finite_f128}, // #__expl_finite
        {RTLIB::FEGETENV, RTLIB::arm64ec_fegetenv}, // #fegetenv
        {RTLIB::FEGETMODE, RTLIB::arm64ec_fegetmode}, // #fegetmode
        {RTLIB::FESETENV, RTLIB::arm64ec_fesetenv}, // #fesetenv
        {RTLIB::FESETMODE, RTLIB::arm64ec_fesetmode}, // #fesetmode
        {RTLIB::FLOOR_F32, RTLIB::arm64ec_floorf}, // #floorf
        {RTLIB::FLOOR_F64, RTLIB::arm64ec_floor}, // #floor
        {RTLIB::FLOOR_F128, RTLIB::arm64ec_floor_f128}, // #floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::arm64ec_fmaximumf}, // #fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::arm64ec_fmaximum}, // #fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::arm64ec_fmaximum_f128}, // #fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::arm64ec_fmaximum_numf}, // #fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::arm64ec_fmaximum_num}, // #fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::arm64ec_fmaximum_num_f128}, // #fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::arm64ec_fmaxf}, // #fmaxf
        {RTLIB::FMAX_F64, RTLIB::arm64ec_fmax}, // #fmax
        {RTLIB::FMAX_F128, RTLIB::arm64ec_fmax_f128}, // #fmaxl
        {RTLIB::FMA_F32, RTLIB::arm64ec_fmaf}, // #fmaf
        {RTLIB::FMA_F64, RTLIB::arm64ec_fma}, // #fma
        {RTLIB::FMA_F128, RTLIB::arm64ec_fma_f128}, // #fmal
        {RTLIB::FMINIMUM_F32, RTLIB::arm64ec_fminimumf}, // #fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::arm64ec_fminimum}, // #fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::arm64ec_fminimum_f128}, // #fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::arm64ec_fminimum_numf}, // #fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::arm64ec_fminimum_num}, // #fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::arm64ec_fminimum_num_f128}, // #fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::arm64ec_fminf}, // #fminf
        {RTLIB::FMIN_F64, RTLIB::arm64ec_fmin}, // #fmin
        {RTLIB::FMIN_F128, RTLIB::arm64ec_fmin_f128}, // #fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::arm64ec___extendbfsf2}, // #__extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::arm64ec___extendhfsf2}, // #__extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::arm64ec___extendhfdf2}, // #__extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::arm64ec___extendhftf2}, // #__extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::arm64ec___extendsfdf2}, // #__extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::arm64ec___extendsftf2}, // #__extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::arm64ec___extenddftf2}, // #__extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::arm64ec___truncsfbf2}, // #__truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::arm64ec___truncsfhf2}, // #__truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::arm64ec___truncdfbf2}, // #__truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::arm64ec___truncdfhf2}, // #__truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::arm64ec___truncdfsf2}, // #__truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::arm64ec___trunctfbf2}, // #__trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::arm64ec___trunctfhf2_f128}, // #__trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::arm64ec___trunctfsf2}, // #__trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::arm64ec___trunctfdf2}, // #__trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::arm64ec___fixhfsi}, // #__fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::arm64ec___fixhfdi}, // #__fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::arm64ec___fixhfti}, // #__fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::arm64ec___fixsfsi}, // #__fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::arm64ec___fixsfdi}, // #__fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::arm64ec___fixsfti}, // #__fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::arm64ec___fixdfsi}, // #__fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::arm64ec___fixdfdi}, // #__fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::arm64ec___fixdfti}, // #__fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::arm64ec___fixtfsi}, // #__fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::arm64ec___fixtfdi_f128}, // #__fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::arm64ec___fixtfti_f128}, // #__fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::arm64ec___fixunshfsi}, // #__fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::arm64ec___fixunshfdi}, // #__fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::arm64ec___fixunshfti}, // #__fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::arm64ec___fixunssfsi}, // #__fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::arm64ec___fixunssfdi}, // #__fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::arm64ec___fixunssfti}, // #__fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::arm64ec___fixunsdfsi}, // #__fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::arm64ec___fixunsdfdi}, // #__fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::arm64ec___fixunsdfti}, // #__fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::arm64ec___fixunstfsi_f128}, // #__fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::arm64ec___fixunstfdi_f128}, // #__fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::arm64ec___fixunstfti_f128}, // #__fixunstfti
        {RTLIB::FREXP_F64, RTLIB::arm64ec_frexp}, // #frexp
        {RTLIB::LDEXP_F64, RTLIB::arm64ec_ldexp}, // #ldexp
        {RTLIB::LLRINT_F32, RTLIB::arm64ec_llrintf}, // #llrintf
        {RTLIB::LLRINT_F64, RTLIB::arm64ec_llrint}, // #llrint
        {RTLIB::LLRINT_F128, RTLIB::arm64ec_llrint_f128}, // #llrintl
        {RTLIB::LLROUND_F32, RTLIB::arm64ec_llroundf}, // #llroundf
        {RTLIB::LLROUND_F64, RTLIB::arm64ec_llround}, // #llround
        {RTLIB::LLROUND_F128, RTLIB::arm64ec_llround_f128}, // #llroundl
        {RTLIB::LOG2_F32, RTLIB::arm64ec_log2f}, // #log2f
        {RTLIB::LOG2_F64, RTLIB::arm64ec_log2}, // #log2
        {RTLIB::LOG2_F128, RTLIB::arm64ec_log2_f128}, // #log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::arm64ec___log2f_finite}, // #__log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::arm64ec___log2_finite}, // #__log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::arm64ec___log2l_finite_f128}, // #__log2l_finite
        {RTLIB::LOG10_F32, RTLIB::arm64ec_log10f}, // #log10f
        {RTLIB::LOG10_F64, RTLIB::arm64ec_log10}, // #log10
        {RTLIB::LOG10_F128, RTLIB::arm64ec_log10_f128}, // #log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::arm64ec___log10f_finite}, // #__log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::arm64ec___log10_finite}, // #__log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::arm64ec___log10l_finite_f128}, // #__log10l_finite
        {RTLIB::LOG_F32, RTLIB::arm64ec_logf}, // #logf
        {RTLIB::LOG_F64, RTLIB::arm64ec_log}, // #log
        {RTLIB::LOG_F128, RTLIB::arm64ec_log_f128}, // #logl
        {RTLIB::LOG_FINITE_F32, RTLIB::arm64ec___logf_finite}, // #__logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::arm64ec___log_finite}, // #__log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::arm64ec___logl_finite_f128}, // #__logl_finite
        {RTLIB::LRINT_F32, RTLIB::arm64ec_lrintf}, // #lrintf
        {RTLIB::LRINT_F64, RTLIB::arm64ec_lrint}, // #lrint
        {RTLIB::LRINT_F128, RTLIB::arm64ec_lrint_f128}, // #lrintl
        {RTLIB::LROUND_F32, RTLIB::arm64ec_lroundf}, // #lroundf
        {RTLIB::LROUND_F64, RTLIB::arm64ec_lround}, // #lround
        {RTLIB::LROUND_F128, RTLIB::arm64ec_lround_f128}, // #lroundl
        {RTLIB::MEMCPY, RTLIB::arm64ec_memcpy}, // #memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_1}, // #__llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_2}, // #__llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_4}, // #__llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_8}, // #__llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::arm64ec___llvm_memcpy_element_unordered_atomic_16}, // #__llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::arm64ec_memmove}, // #memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_1}, // #__llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_2}, // #__llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_4}, // #__llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_8}, // #__llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::arm64ec___llvm_memmove_element_unordered_atomic_16}, // #__llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::arm64ec_memset}, // #memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::arm64ec___llvm_memset_element_unordered_atomic_1}, // #__llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::arm64ec___llvm_memset_element_unordered_atomic_2}, // #__llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::arm64ec___llvm_memset_element_unordered_atomic_4}, // #__llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::arm64ec___llvm_memset_element_unordered_atomic_8}, // #__llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::arm64ec___llvm_memset_element_unordered_atomic_16}, // #__llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::arm64ec_modff}, // #modff
        {RTLIB::MODF_F64, RTLIB::arm64ec_modf}, // #modf
        {RTLIB::MODF_F128, RTLIB::arm64ec_modf_f128}, // #modfl
        {RTLIB::MULO_I32, RTLIB::arm64ec___mulosi4}, // #__mulosi4
        {RTLIB::MUL_F32, RTLIB::arm64ec___mulsf3}, // #__mulsf3
        {RTLIB::MUL_F64, RTLIB::arm64ec___muldf3}, // #__muldf3
        {RTLIB::MUL_F128, RTLIB::arm64ec___multf3}, // #__multf3
        {RTLIB::MUL_I8, RTLIB::arm64ec___mulqi3}, // #__mulqi3
        {RTLIB::MUL_I16, RTLIB::arm64ec___mulhi3}, // #__mulhi3
        {RTLIB::MUL_I32, RTLIB::arm64ec___mulsi3}, // #__mulsi3
        {RTLIB::MUL_I64, RTLIB::arm64ec___muldi3}, // #__muldi3
        {RTLIB::MUL_I128, RTLIB::arm64ec___multi3}, // #__multi3
        {RTLIB::NEARBYINT_F32, RTLIB::arm64ec_nearbyintf}, // #nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::arm64ec_nearbyint}, // #nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::arm64ec_nearbyint_f128}, // #nearbyintl
        {RTLIB::NEG_I32, RTLIB::arm64ec___negsi2}, // #__negsi2
        {RTLIB::NEG_I64, RTLIB::arm64ec___negdi2}, // #__negdi2
        {RTLIB::OEQ_F32, RTLIB::arm64ec___eqsf2}, // #__eqsf2
        {RTLIB::OEQ_F64, RTLIB::arm64ec___eqdf2}, // #__eqdf2
        {RTLIB::OEQ_F128, RTLIB::arm64ec___eqtf2}, // #__eqtf2
        {RTLIB::OGE_F32, RTLIB::arm64ec___gesf2}, // #__gesf2
        {RTLIB::OGE_F64, RTLIB::arm64ec___gedf2}, // #__gedf2
        {RTLIB::OGE_F128, RTLIB::arm64ec___getf2}, // #__getf2
        {RTLIB::OGT_F32, RTLIB::arm64ec___gtsf2}, // #__gtsf2
        {RTLIB::OGT_F64, RTLIB::arm64ec___gtdf2}, // #__gtdf2
        {RTLIB::OGT_F128, RTLIB::arm64ec___gttf2}, // #__gttf2
        {RTLIB::OLE_F32, RTLIB::arm64ec___lesf2}, // #__lesf2
        {RTLIB::OLE_F64, RTLIB::arm64ec___ledf2}, // #__ledf2
        {RTLIB::OLE_F128, RTLIB::arm64ec___letf2}, // #__letf2
        {RTLIB::OLT_F32, RTLIB::arm64ec___ltsf2}, // #__ltsf2
        {RTLIB::OLT_F64, RTLIB::arm64ec___ltdf2}, // #__ltdf2
        {RTLIB::OLT_F128, RTLIB::arm64ec___lttf2}, // #__lttf2
        {RTLIB::OUTLINE_ATOMIC_CAS1_ACQ, RTLIB::arm64ec___aarch64_cas1_acq}, // #__aarch64_cas1_acq
        {RTLIB::OUTLINE_ATOMIC_CAS1_ACQ_REL, RTLIB::arm64ec___aarch64_cas1_acq_rel}, // #__aarch64_cas1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS1_REL, RTLIB::arm64ec___aarch64_cas1_rel}, // #__aarch64_cas1_rel
        {RTLIB::OUTLINE_ATOMIC_CAS1_RELAX, RTLIB::arm64ec___aarch64_cas1_relax}, // #__aarch64_cas1_relax
        {RTLIB::OUTLINE_ATOMIC_CAS2_ACQ, RTLIB::arm64ec___aarch64_cas2_acq}, // #__aarch64_cas2_acq
        {RTLIB::OUTLINE_ATOMIC_CAS2_ACQ_REL, RTLIB::arm64ec___aarch64_cas2_acq_rel}, // #__aarch64_cas2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS2_REL, RTLIB::arm64ec___aarch64_cas2_rel}, // #__aarch64_cas2_rel
        {RTLIB::OUTLINE_ATOMIC_CAS2_RELAX, RTLIB::arm64ec___aarch64_cas2_relax}, // #__aarch64_cas2_relax
        {RTLIB::OUTLINE_ATOMIC_CAS4_ACQ, RTLIB::arm64ec___aarch64_cas4_acq}, // #__aarch64_cas4_acq
        {RTLIB::OUTLINE_ATOMIC_CAS4_ACQ_REL, RTLIB::arm64ec___aarch64_cas4_acq_rel}, // #__aarch64_cas4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS4_REL, RTLIB::arm64ec___aarch64_cas4_rel}, // #__aarch64_cas4_rel
        {RTLIB::OUTLINE_ATOMIC_CAS4_RELAX, RTLIB::arm64ec___aarch64_cas4_relax}, // #__aarch64_cas4_relax
        {RTLIB::OUTLINE_ATOMIC_CAS8_ACQ, RTLIB::arm64ec___aarch64_cas8_acq}, // #__aarch64_cas8_acq
        {RTLIB::OUTLINE_ATOMIC_CAS8_ACQ_REL, RTLIB::arm64ec___aarch64_cas8_acq_rel}, // #__aarch64_cas8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS8_REL, RTLIB::arm64ec___aarch64_cas8_rel}, // #__aarch64_cas8_rel
        {RTLIB::OUTLINE_ATOMIC_CAS8_RELAX, RTLIB::arm64ec___aarch64_cas8_relax}, // #__aarch64_cas8_relax
        {RTLIB::OUTLINE_ATOMIC_CAS16_ACQ, RTLIB::arm64ec___aarch64_cas16_acq}, // #__aarch64_cas16_acq
        {RTLIB::OUTLINE_ATOMIC_CAS16_ACQ_REL, RTLIB::arm64ec___aarch64_cas16_acq_rel}, // #__aarch64_cas16_acq_rel
        {RTLIB::OUTLINE_ATOMIC_CAS16_REL, RTLIB::arm64ec___aarch64_cas16_rel}, // #__aarch64_cas16_rel
        {RTLIB::OUTLINE_ATOMIC_CAS16_RELAX, RTLIB::arm64ec___aarch64_cas16_relax}, // #__aarch64_cas16_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ, RTLIB::arm64ec___aarch64_ldadd1_acq}, // #__aarch64_ldadd1_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD1_ACQ_REL, RTLIB::arm64ec___aarch64_ldadd1_acq_rel}, // #__aarch64_ldadd1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD1_REL, RTLIB::arm64ec___aarch64_ldadd1_rel}, // #__aarch64_ldadd1_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD1_RELAX, RTLIB::arm64ec___aarch64_ldadd1_relax}, // #__aarch64_ldadd1_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ, RTLIB::arm64ec___aarch64_ldadd2_acq}, // #__aarch64_ldadd2_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD2_ACQ_REL, RTLIB::arm64ec___aarch64_ldadd2_acq_rel}, // #__aarch64_ldadd2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD2_REL, RTLIB::arm64ec___aarch64_ldadd2_rel}, // #__aarch64_ldadd2_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD2_RELAX, RTLIB::arm64ec___aarch64_ldadd2_relax}, // #__aarch64_ldadd2_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ, RTLIB::arm64ec___aarch64_ldadd4_acq}, // #__aarch64_ldadd4_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD4_ACQ_REL, RTLIB::arm64ec___aarch64_ldadd4_acq_rel}, // #__aarch64_ldadd4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD4_REL, RTLIB::arm64ec___aarch64_ldadd4_rel}, // #__aarch64_ldadd4_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD4_RELAX, RTLIB::arm64ec___aarch64_ldadd4_relax}, // #__aarch64_ldadd4_relax
        {RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ, RTLIB::arm64ec___aarch64_ldadd8_acq}, // #__aarch64_ldadd8_acq
        {RTLIB::OUTLINE_ATOMIC_LDADD8_ACQ_REL, RTLIB::arm64ec___aarch64_ldadd8_acq_rel}, // #__aarch64_ldadd8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD8_REL, RTLIB::arm64ec___aarch64_ldadd8_rel}, // #__aarch64_ldadd8_rel
        {RTLIB::OUTLINE_ATOMIC_LDADD8_RELAX, RTLIB::arm64ec___aarch64_ldadd8_relax}, // #__aarch64_ldadd8_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ, RTLIB::arm64ec___aarch64_ldclr1_acq}, // #__aarch64_ldclr1_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_ACQ_REL, RTLIB::arm64ec___aarch64_ldclr1_acq_rel}, // #__aarch64_ldclr1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_REL, RTLIB::arm64ec___aarch64_ldclr1_rel}, // #__aarch64_ldclr1_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR1_RELAX, RTLIB::arm64ec___aarch64_ldclr1_relax}, // #__aarch64_ldclr1_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ, RTLIB::arm64ec___aarch64_ldclr2_acq}, // #__aarch64_ldclr2_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_ACQ_REL, RTLIB::arm64ec___aarch64_ldclr2_acq_rel}, // #__aarch64_ldclr2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_REL, RTLIB::arm64ec___aarch64_ldclr2_rel}, // #__aarch64_ldclr2_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR2_RELAX, RTLIB::arm64ec___aarch64_ldclr2_relax}, // #__aarch64_ldclr2_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ, RTLIB::arm64ec___aarch64_ldclr4_acq}, // #__aarch64_ldclr4_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_ACQ_REL, RTLIB::arm64ec___aarch64_ldclr4_acq_rel}, // #__aarch64_ldclr4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_REL, RTLIB::arm64ec___aarch64_ldclr4_rel}, // #__aarch64_ldclr4_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR4_RELAX, RTLIB::arm64ec___aarch64_ldclr4_relax}, // #__aarch64_ldclr4_relax
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ, RTLIB::arm64ec___aarch64_ldclr8_acq}, // #__aarch64_ldclr8_acq
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_ACQ_REL, RTLIB::arm64ec___aarch64_ldclr8_acq_rel}, // #__aarch64_ldclr8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_REL, RTLIB::arm64ec___aarch64_ldclr8_rel}, // #__aarch64_ldclr8_rel
        {RTLIB::OUTLINE_ATOMIC_LDCLR8_RELAX, RTLIB::arm64ec___aarch64_ldclr8_relax}, // #__aarch64_ldclr8_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ, RTLIB::arm64ec___aarch64_ldeor1_acq}, // #__aarch64_ldeor1_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_ACQ_REL, RTLIB::arm64ec___aarch64_ldeor1_acq_rel}, // #__aarch64_ldeor1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_REL, RTLIB::arm64ec___aarch64_ldeor1_rel}, // #__aarch64_ldeor1_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR1_RELAX, RTLIB::arm64ec___aarch64_ldeor1_relax}, // #__aarch64_ldeor1_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ, RTLIB::arm64ec___aarch64_ldeor2_acq}, // #__aarch64_ldeor2_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_ACQ_REL, RTLIB::arm64ec___aarch64_ldeor2_acq_rel}, // #__aarch64_ldeor2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_REL, RTLIB::arm64ec___aarch64_ldeor2_rel}, // #__aarch64_ldeor2_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR2_RELAX, RTLIB::arm64ec___aarch64_ldeor2_relax}, // #__aarch64_ldeor2_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ, RTLIB::arm64ec___aarch64_ldeor4_acq}, // #__aarch64_ldeor4_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_ACQ_REL, RTLIB::arm64ec___aarch64_ldeor4_acq_rel}, // #__aarch64_ldeor4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_REL, RTLIB::arm64ec___aarch64_ldeor4_rel}, // #__aarch64_ldeor4_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR4_RELAX, RTLIB::arm64ec___aarch64_ldeor4_relax}, // #__aarch64_ldeor4_relax
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ, RTLIB::arm64ec___aarch64_ldeor8_acq}, // #__aarch64_ldeor8_acq
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_ACQ_REL, RTLIB::arm64ec___aarch64_ldeor8_acq_rel}, // #__aarch64_ldeor8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_REL, RTLIB::arm64ec___aarch64_ldeor8_rel}, // #__aarch64_ldeor8_rel
        {RTLIB::OUTLINE_ATOMIC_LDEOR8_RELAX, RTLIB::arm64ec___aarch64_ldeor8_relax}, // #__aarch64_ldeor8_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ, RTLIB::arm64ec___aarch64_ldset1_acq}, // #__aarch64_ldset1_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET1_ACQ_REL, RTLIB::arm64ec___aarch64_ldset1_acq_rel}, // #__aarch64_ldset1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET1_REL, RTLIB::arm64ec___aarch64_ldset1_rel}, // #__aarch64_ldset1_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET1_RELAX, RTLIB::arm64ec___aarch64_ldset1_relax}, // #__aarch64_ldset1_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ, RTLIB::arm64ec___aarch64_ldset2_acq}, // #__aarch64_ldset2_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET2_ACQ_REL, RTLIB::arm64ec___aarch64_ldset2_acq_rel}, // #__aarch64_ldset2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET2_REL, RTLIB::arm64ec___aarch64_ldset2_rel}, // #__aarch64_ldset2_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET2_RELAX, RTLIB::arm64ec___aarch64_ldset2_relax}, // #__aarch64_ldset2_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ, RTLIB::arm64ec___aarch64_ldset4_acq}, // #__aarch64_ldset4_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET4_ACQ_REL, RTLIB::arm64ec___aarch64_ldset4_acq_rel}, // #__aarch64_ldset4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET4_REL, RTLIB::arm64ec___aarch64_ldset4_rel}, // #__aarch64_ldset4_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET4_RELAX, RTLIB::arm64ec___aarch64_ldset4_relax}, // #__aarch64_ldset4_relax
        {RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ, RTLIB::arm64ec___aarch64_ldset8_acq}, // #__aarch64_ldset8_acq
        {RTLIB::OUTLINE_ATOMIC_LDSET8_ACQ_REL, RTLIB::arm64ec___aarch64_ldset8_acq_rel}, // #__aarch64_ldset8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET8_REL, RTLIB::arm64ec___aarch64_ldset8_rel}, // #__aarch64_ldset8_rel
        {RTLIB::OUTLINE_ATOMIC_LDSET8_RELAX, RTLIB::arm64ec___aarch64_ldset8_relax}, // #__aarch64_ldset8_relax
        {RTLIB::OUTLINE_ATOMIC_SWP1_ACQ, RTLIB::arm64ec___aarch64_swp1_acq}, // #__aarch64_swp1_acq
        {RTLIB::OUTLINE_ATOMIC_SWP1_ACQ_REL, RTLIB::arm64ec___aarch64_swp1_acq_rel}, // #__aarch64_swp1_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP1_REL, RTLIB::arm64ec___aarch64_swp1_rel}, // #__aarch64_swp1_rel
        {RTLIB::OUTLINE_ATOMIC_SWP1_RELAX, RTLIB::arm64ec___aarch64_swp1_relax}, // #__aarch64_swp1_relax
        {RTLIB::OUTLINE_ATOMIC_SWP2_ACQ, RTLIB::arm64ec___aarch64_swp2_acq}, // #__aarch64_swp2_acq
        {RTLIB::OUTLINE_ATOMIC_SWP2_ACQ_REL, RTLIB::arm64ec___aarch64_swp2_acq_rel}, // #__aarch64_swp2_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP2_REL, RTLIB::arm64ec___aarch64_swp2_rel}, // #__aarch64_swp2_rel
        {RTLIB::OUTLINE_ATOMIC_SWP2_RELAX, RTLIB::arm64ec___aarch64_swp2_relax}, // #__aarch64_swp2_relax
        {RTLIB::OUTLINE_ATOMIC_SWP4_ACQ, RTLIB::arm64ec___aarch64_swp4_acq}, // #__aarch64_swp4_acq
        {RTLIB::OUTLINE_ATOMIC_SWP4_ACQ_REL, RTLIB::arm64ec___aarch64_swp4_acq_rel}, // #__aarch64_swp4_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP4_REL, RTLIB::arm64ec___aarch64_swp4_rel}, // #__aarch64_swp4_rel
        {RTLIB::OUTLINE_ATOMIC_SWP4_RELAX, RTLIB::arm64ec___aarch64_swp4_relax}, // #__aarch64_swp4_relax
        {RTLIB::OUTLINE_ATOMIC_SWP8_ACQ, RTLIB::arm64ec___aarch64_swp8_acq}, // #__aarch64_swp8_acq
        {RTLIB::OUTLINE_ATOMIC_SWP8_ACQ_REL, RTLIB::arm64ec___aarch64_swp8_acq_rel}, // #__aarch64_swp8_acq_rel
        {RTLIB::OUTLINE_ATOMIC_SWP8_REL, RTLIB::arm64ec___aarch64_swp8_rel}, // #__aarch64_swp8_rel
        {RTLIB::OUTLINE_ATOMIC_SWP8_RELAX, RTLIB::arm64ec___aarch64_swp8_relax}, // #__aarch64_swp8_relax
        {RTLIB::POWI_F128, RTLIB::arm64ec___powitf2_f128}, // #__powitf2
        {RTLIB::POW_F32, RTLIB::arm64ec_powf}, // #powf
        {RTLIB::POW_F64, RTLIB::arm64ec_pow}, // #pow
        {RTLIB::POW_F128, RTLIB::arm64ec_pow_f128}, // #powl
        {RTLIB::POW_FINITE_F32, RTLIB::arm64ec___powf_finite}, // #__powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::arm64ec___pow_finite}, // #__pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::arm64ec___powl_finite_f128}, // #__powl_finite
        {RTLIB::REM_F32, RTLIB::arm64ec_fmodf}, // #fmodf
        {RTLIB::REM_F64, RTLIB::arm64ec_fmod}, // #fmod
        {RTLIB::REM_F128, RTLIB::arm64ec_fmodl_f128}, // #fmodl
        {RTLIB::RINT_F32, RTLIB::arm64ec_rintf}, // #rintf
        {RTLIB::RINT_F64, RTLIB::arm64ec_rint}, // #rint
        {RTLIB::RINT_F128, RTLIB::arm64ec_rint_f128}, // #rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::arm64ec_roundevenf}, // #roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::arm64ec_roundeven}, // #roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::arm64ec_roundeven_f128}, // #roundevenl
        {RTLIB::ROUND_F32, RTLIB::arm64ec_roundf}, // #roundf
        {RTLIB::ROUND_F64, RTLIB::arm64ec_round}, // #round
        {RTLIB::ROUND_F128, RTLIB::arm64ec_round_f128}, // #roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::arm64ec___safestack_pointer_address}, // #__safestack_pointer_address
        {RTLIB::SC_MEMCPY, RTLIB::arm64ec___arm_sc_memcpy}, // #__arm_sc_memcpy
        {RTLIB::SC_MEMMOVE, RTLIB::arm64ec___arm_sc_memmove}, // #__arm_sc_memmove
        {RTLIB::SC_MEMSET, RTLIB::arm64ec___arm_sc_memset}, // #__arm_sc_memset
        {RTLIB::SDIV_I8, RTLIB::arm64ec___divqi3}, // #__divqi3
        {RTLIB::SDIV_I16, RTLIB::arm64ec___divhi3}, // #__divhi3
        {RTLIB::SDIV_I32, RTLIB::arm64ec___divsi3}, // #__divsi3
        {RTLIB::SDIV_I64, RTLIB::arm64ec___divdi3}, // #__divdi3
        {RTLIB::SDIV_I128, RTLIB::arm64ec___divti3}, // #__divti3
        {RTLIB::SHL_I16, RTLIB::arm64ec___ashlhi3}, // #__ashlhi3
        {RTLIB::SHL_I32, RTLIB::arm64ec___ashlsi3}, // #__ashlsi3
        {RTLIB::SHL_I64, RTLIB::arm64ec___ashldi3}, // #__ashldi3
        {RTLIB::SHL_I128, RTLIB::arm64ec___ashlti3}, // #__ashlti3
        {RTLIB::SINCOSPI_F32, RTLIB::arm64ec_sincospif}, // #sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::arm64ec_sincospi}, // #sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::arm64ec_sincospi_f128}, // #sincospil
        {RTLIB::SINH_F32, RTLIB::arm64ec_sinhf}, // #sinhf
        {RTLIB::SINH_F64, RTLIB::arm64ec_sinh}, // #sinh
        {RTLIB::SINH_F128, RTLIB::arm64ec_sinh_f128}, // #sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::arm64ec___floatsihf}, // #__floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::arm64ec___floatsisf}, // #__floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::arm64ec___floatsidf}, // #__floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::arm64ec___floatsitf}, // #__floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::arm64ec___floatdibf}, // #__floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::arm64ec___floatdihf}, // #__floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::arm64ec___floatdisf}, // #__floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::arm64ec___floatdidf}, // #__floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::arm64ec___floatditf_f128}, // #__floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::arm64ec___floattihf}, // #__floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::arm64ec___floattisf}, // #__floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::arm64ec___floattidf}, // #__floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::arm64ec___floattitf_f128}, // #__floattitf
        {RTLIB::SIN_F32, RTLIB::arm64ec_sinf}, // #sinf
        {RTLIB::SIN_F64, RTLIB::arm64ec_sin}, // #sin
        {RTLIB::SIN_F128, RTLIB::arm64ec_sin_f128}, // #sinl
        {RTLIB::SQRT_F32, RTLIB::arm64ec_sqrtf}, // #sqrtf
        {RTLIB::SQRT_F64, RTLIB::arm64ec_sqrt}, // #sqrt
        {RTLIB::SQRT_F128, RTLIB::arm64ec_sqrt_f128}, // #sqrtl
        {RTLIB::SRA_I16, RTLIB::arm64ec___ashrhi3}, // #__ashrhi3
        {RTLIB::SRA_I32, RTLIB::arm64ec___ashrsi3}, // #__ashrsi3
        {RTLIB::SRA_I64, RTLIB::arm64ec___ashrdi3}, // #__ashrdi3
        {RTLIB::SRA_I128, RTLIB::arm64ec___ashrti3}, // #__ashrti3
        {RTLIB::SREM_I8, RTLIB::arm64ec___modqi3}, // #__modqi3
        {RTLIB::SREM_I16, RTLIB::arm64ec___modhi3}, // #__modhi3
        {RTLIB::SREM_I32, RTLIB::arm64ec___modsi3}, // #__modsi3
        {RTLIB::SREM_I64, RTLIB::arm64ec___moddi3}, // #__moddi3
        {RTLIB::SREM_I128, RTLIB::arm64ec___modti3}, // #__modti3
        {RTLIB::SRL_I16, RTLIB::arm64ec___lshrhi3}, // #__lshrhi3
        {RTLIB::SRL_I32, RTLIB::arm64ec___lshrsi3}, // #__lshrsi3
        {RTLIB::SRL_I64, RTLIB::arm64ec___lshrdi3}, // #__lshrdi3
        {RTLIB::SRL_I128, RTLIB::arm64ec___lshrti3}, // #__lshrti3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::arm64ec___stack_chk_fail}, // #__stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::arm64ec___subsf3}, // #__subsf3
        {RTLIB::SUB_F64, RTLIB::arm64ec___subdf3}, // #__subdf3
        {RTLIB::SUB_F128, RTLIB::arm64ec___subtf3}, // #__subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::arm64ec___sync_fetch_and_add_1}, // #__sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::arm64ec___sync_fetch_and_add_2}, // #__sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::arm64ec___sync_fetch_and_add_4}, // #__sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::arm64ec___sync_fetch_and_add_8}, // #__sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::arm64ec___sync_fetch_and_add_16}, // #__sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::arm64ec___sync_fetch_and_and_1}, // #__sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::arm64ec___sync_fetch_and_and_2}, // #__sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::arm64ec___sync_fetch_and_and_4}, // #__sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::arm64ec___sync_fetch_and_and_8}, // #__sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::arm64ec___sync_fetch_and_and_16}, // #__sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::arm64ec___sync_fetch_and_max_1}, // #__sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::arm64ec___sync_fetch_and_max_2}, // #__sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::arm64ec___sync_fetch_and_max_4}, // #__sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::arm64ec___sync_fetch_and_max_8}, // #__sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::arm64ec___sync_fetch_and_max_16}, // #__sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::arm64ec___sync_fetch_and_min_1}, // #__sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::arm64ec___sync_fetch_and_min_2}, // #__sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::arm64ec___sync_fetch_and_min_4}, // #__sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::arm64ec___sync_fetch_and_min_8}, // #__sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::arm64ec___sync_fetch_and_min_16}, // #__sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::arm64ec___sync_fetch_and_nand_1}, // #__sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::arm64ec___sync_fetch_and_nand_2}, // #__sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::arm64ec___sync_fetch_and_nand_4}, // #__sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::arm64ec___sync_fetch_and_nand_8}, // #__sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::arm64ec___sync_fetch_and_nand_16}, // #__sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::arm64ec___sync_fetch_and_or_1}, // #__sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::arm64ec___sync_fetch_and_or_2}, // #__sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::arm64ec___sync_fetch_and_or_4}, // #__sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::arm64ec___sync_fetch_and_or_8}, // #__sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::arm64ec___sync_fetch_and_or_16}, // #__sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::arm64ec___sync_fetch_and_sub_1}, // #__sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::arm64ec___sync_fetch_and_sub_2}, // #__sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::arm64ec___sync_fetch_and_sub_4}, // #__sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::arm64ec___sync_fetch_and_sub_8}, // #__sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::arm64ec___sync_fetch_and_sub_16}, // #__sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::arm64ec___sync_fetch_and_umax_1}, // #__sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::arm64ec___sync_fetch_and_umax_2}, // #__sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::arm64ec___sync_fetch_and_umax_4}, // #__sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::arm64ec___sync_fetch_and_umax_8}, // #__sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::arm64ec___sync_fetch_and_umax_16}, // #__sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::arm64ec___sync_fetch_and_umin_1}, // #__sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::arm64ec___sync_fetch_and_umin_2}, // #__sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::arm64ec___sync_fetch_and_umin_4}, // #__sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::arm64ec___sync_fetch_and_umin_8}, // #__sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::arm64ec___sync_fetch_and_umin_16}, // #__sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::arm64ec___sync_fetch_and_xor_1}, // #__sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::arm64ec___sync_fetch_and_xor_2}, // #__sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::arm64ec___sync_fetch_and_xor_4}, // #__sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::arm64ec___sync_fetch_and_xor_8}, // #__sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::arm64ec___sync_fetch_and_xor_16}, // #__sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::arm64ec___sync_lock_test_and_set_1}, // #__sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::arm64ec___sync_lock_test_and_set_2}, // #__sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::arm64ec___sync_lock_test_and_set_4}, // #__sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::arm64ec___sync_lock_test_and_set_8}, // #__sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::arm64ec___sync_lock_test_and_set_16}, // #__sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::arm64ec___sync_val_compare_and_swap_1}, // #__sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::arm64ec___sync_val_compare_and_swap_2}, // #__sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::arm64ec___sync_val_compare_and_swap_4}, // #__sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::arm64ec___sync_val_compare_and_swap_8}, // #__sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::arm64ec___sync_val_compare_and_swap_16}, // #__sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::arm64ec_tanhf}, // #tanhf
        {RTLIB::TANH_F64, RTLIB::arm64ec_tanh}, // #tanh
        {RTLIB::TANH_F128, RTLIB::arm64ec_tanh_f128}, // #tanhl
        {RTLIB::TAN_F32, RTLIB::arm64ec_tanf}, // #tanf
        {RTLIB::TAN_F64, RTLIB::arm64ec_tan}, // #tan
        {RTLIB::TAN_F128, RTLIB::arm64ec_tan_f128}, // #tanl
        {RTLIB::TRUNC_F32, RTLIB::arm64ec_truncf}, // #truncf
        {RTLIB::TRUNC_F64, RTLIB::arm64ec_trunc}, // #trunc
        {RTLIB::TRUNC_F128, RTLIB::arm64ec_trunc_f128}, // #truncl
        {RTLIB::UDIV_I8, RTLIB::arm64ec___udivqi3}, // #__udivqi3
        {RTLIB::UDIV_I16, RTLIB::arm64ec___udivhi3}, // #__udivhi3
        {RTLIB::UDIV_I32, RTLIB::arm64ec___udivsi3}, // #__udivsi3
        {RTLIB::UDIV_I64, RTLIB::arm64ec___udivdi3}, // #__udivdi3
        {RTLIB::UDIV_I128, RTLIB::arm64ec___udivti3}, // #__udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::arm64ec___floatunsihf}, // #__floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::arm64ec___floatunsisf}, // #__floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::arm64ec___floatunsidf}, // #__floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::arm64ec___floatunsitf}, // #__floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::arm64ec___floatundibf}, // #__floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::arm64ec___floatundihf}, // #__floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::arm64ec___floatundisf}, // #__floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::arm64ec___floatundidf}, // #__floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::arm64ec___floatunditf_f128}, // #__floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::arm64ec___floatuntihf}, // #__floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::arm64ec___floatuntisf}, // #__floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::arm64ec___floatuntidf}, // #__floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::arm64ec___floatuntitf_f128}, // #__floatuntitf
        {RTLIB::UNE_F32, RTLIB::arm64ec___nesf2}, // #__nesf2
        {RTLIB::UNE_F64, RTLIB::arm64ec___nedf2}, // #__nedf2
        {RTLIB::UNE_F128, RTLIB::arm64ec___netf2}, // #__netf2
        {RTLIB::UNWIND_RESUME, RTLIB::arm64ec__Unwind_Resume}, // #_Unwind_Resume
        {RTLIB::UO_F32, RTLIB::arm64ec___unordsf2}, // #__unordsf2
        {RTLIB::UO_F64, RTLIB::arm64ec___unorddf2}, // #__unorddf2
        {RTLIB::UO_F128, RTLIB::arm64ec___unordtf2}, // #__unordtf2
        {RTLIB::UREM_I8, RTLIB::arm64ec___umodqi3}, // #__umodqi3
        {RTLIB::UREM_I16, RTLIB::arm64ec___umodhi3}, // #__umodhi3
        {RTLIB::UREM_I32, RTLIB::arm64ec___umodsi3}, // #__umodsi3
        {RTLIB::UREM_I64, RTLIB::arm64ec___umoddi3}, // #__umoddi3
        {RTLIB::UREM_I128, RTLIB::arm64ec___umodti3}, // #__umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    return;
  }

  if (TT.getArch() == Triple::x86) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F80, RTLIB::acos_f80}, // acosl
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F80, RTLIB::__addxf3}, // __addxf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F80, RTLIB::asin_f80}, // asinl
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F80, RTLIB::atan2_f80}, // atan2l
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F80, RTLIB::atan_f80}, // atanl
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F80, RTLIB::cbrt_f80}, // cbrtl
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F80, RTLIB::ceil_f80}, // ceill
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F80, RTLIB::copysign_f80}, // copysignl
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F80, RTLIB::cosh_f80}, // coshl
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F80, RTLIB::cos_f80}, // cosl
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F80, RTLIB::__divxf3}, // __divxf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F80, RTLIB::exp2_f80}, // exp2l
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F80, RTLIB::__exp2l_finite_f80}, // __exp2l_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F80, RTLIB::exp10l_f80}, // exp10l
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F80, RTLIB::exp_f80}, // expl
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F80, RTLIB::__expl_finite_f80}, // __expl_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F80, RTLIB::floor_f80}, // floorl
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F80, RTLIB::fmaximum_f80}, // fmaximuml
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F80, RTLIB::fmaximum_num_f80}, // fmaximum_numl
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F80, RTLIB::fmax_f80}, // fmaxl
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F80, RTLIB::fma_f80}, // fmal
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F80, RTLIB::fminimum_f80}, // fminimuml
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F80, RTLIB::fminimum_num_f80}, // fminimum_numl
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F80, RTLIB::fmin_f80}, // fminl
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F80, RTLIB::__extendhfxf2}, // __extendhfxf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPEXT_F80_F128, RTLIB::__extendxftf2}, // __extendxftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F80_BF16, RTLIB::__truncxfbf2}, // __truncxfbf2
        {RTLIB::FPROUND_F80_F16, RTLIB::__truncxfhf2}, // __truncxfhf2
        {RTLIB::FPROUND_F80_F32, RTLIB::__truncxfsf2}, // __truncxfsf2
        {RTLIB::FPROUND_F80_F64, RTLIB::__truncxfdf2}, // __truncxfdf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPROUND_F128_F80, RTLIB::__trunctfxf2}, // __trunctfxf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F80_I32, RTLIB::__fixxfsi}, // __fixxfsi
        {RTLIB::FPTOSINT_F80_I64, RTLIB::__fixxfdi}, // __fixxfdi
        {RTLIB::FPTOSINT_F80_I128, RTLIB::__fixxfti}, // __fixxfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F80_I32, RTLIB::__fixunsxfsi}, // __fixunsxfsi
        {RTLIB::FPTOUINT_F80_I64, RTLIB::__fixunsxfdi}, // __fixunsxfdi
        {RTLIB::FPTOUINT_F80_I128, RTLIB::__fixunsxfti}, // __fixunsxfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F80, RTLIB::llrint_f80}, // llrintl
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F80, RTLIB::llround_f80}, // llroundl
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F80, RTLIB::log2_f80}, // log2l
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F80, RTLIB::__log2l_finite_f80}, // __log2l_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F80, RTLIB::log10_f80}, // log10l
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F80, RTLIB::__log10l_finite_f80}, // __log10l_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F80, RTLIB::log_f80}, // logl
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F80, RTLIB::__logl_finite_f80}, // __logl_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F80, RTLIB::lrint_f80}, // lrintl
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F80, RTLIB::lround_f80}, // lroundl
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F80, RTLIB::modf_f80}, // modfl
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F80, RTLIB::__mulxf3}, // __mulxf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F80, RTLIB::nearbyint_f80}, // nearbyintl
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F80, RTLIB::pow_f80}, // powl
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F80, RTLIB::__powl_finite_f80}, // __powl_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F80, RTLIB::fmodl_f80}, // fmodl
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F80, RTLIB::rint_f80}, // rintl
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F80, RTLIB::roundeven_f80}, // roundevenl
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F80, RTLIB::round_f80}, // roundl
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F80, RTLIB::sincospi_f80}, // sincospil
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F80, RTLIB::sinh_f80}, // sinhl
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F80, RTLIB::__floatsixf}, // __floatsixf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F80, RTLIB::__floatdixf}, // __floatdixf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F80, RTLIB::__floattixf}, // __floattixf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F80, RTLIB::sin_f80}, // sinl
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F80, RTLIB::sqrt_f80}, // sqrtl
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F80, RTLIB::__subxf3}, // __subxf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F80, RTLIB::tanh_f80}, // tanhl
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F80, RTLIB::tan_f80}, // tanl
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F80, RTLIB::trunc_f80}, // truncl
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F80, RTLIB::__floatunsixf}, // __floatunsixf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F80, RTLIB::__floatundixf}, // __floatundixf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F80, RTLIB::__floatuntixf}, // __floatuntixf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (TT.isWindowsMSVCEnvironment() || TT.isWindowsItaniumEnvironment()) {
      static const LibcallImplPair LibraryCalls_anonymous_49[] = {
          {RTLIB::MUL_I64, RTLIB::_allmul}, // _allmul
          {RTLIB::SDIV_I64, RTLIB::_alldiv}, // _alldiv
          {RTLIB::SREM_I64, RTLIB::_allrem}, // _allrem
          {RTLIB::UDIV_I64, RTLIB::_aulldiv}, // _aulldiv
          {RTLIB::UREM_I64, RTLIB::_aullrem}, // _aullrem
      };

      for (const auto [Func, Impl] : LibraryCalls_anonymous_49) {
        setLibcallImpl(Func, Impl);
        setLibcallImplCallingConv(Impl, CallingConv::X86_StdCall);
      }

    }

    if (darwinHasExp10(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasExp10[] = {
          {RTLIB::EXP10_F32, RTLIB::__exp10f}, // __exp10f
          {RTLIB::EXP10_F64, RTLIB::__exp10}, // __exp10
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasExp10) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (darwinHasSinCosStret(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasSinCosStret[] = {
          {RTLIB::SINCOS_STRET_F32, RTLIB::__sincosf_stret}, // __sincosf_stret
          {RTLIB::SINCOS_STRET_F64, RTLIB::__sincos_stret}, // __sincos_stret
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasSinCosStret) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isMacOSX() && !TT.isMacOSXVersionLT(10, 6)) {
      static const LibcallImplPair LibraryCalls_darwinHas__bzero[] = {
          {RTLIB::BZERO, RTLIB::__bzero}, // __bzero
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHas__bzero) {
        setLibcallImpl(Func, Impl);
      }

    }

    if ((!TT.isOSWindows() || TT.isOSCygMing()) && !TT.isGNUEnvironment()) {
      static const LibcallImplPair LibraryCalls_hasFrexplLdexplF128[] = {
          {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
          {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasFrexplLdexplF128) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (hasSinCos(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos[] = {
          {RTLIB::SINCOS_F80, RTLIB::sincos_f80}, // sincosl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (hasSinCos_f32_f64(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos_f32_f64[] = {
          {RTLIB::SINCOS_F32, RTLIB::sincosf}, // sincosf
          {RTLIB::SINCOS_F64, RTLIB::sincos}, // sincos
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos_f32_f64) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isGNUEnvironment()) {
      static const LibcallImplPair LibraryCalls_isGNUEnvironment[] = {
          {RTLIB::ACOS_F128, RTLIB::acosf128}, // acosf128
          {RTLIB::ASIN_F128, RTLIB::asinf128}, // asinf128
          {RTLIB::ATAN2_F128, RTLIB::atan2f128}, // atan2f128
          {RTLIB::ATAN_F128, RTLIB::atanf128}, // atanf128
          {RTLIB::CBRT_F128, RTLIB::cbrtf128}, // cbrtf128
          {RTLIB::CEIL_F128, RTLIB::ceilf128}, // ceilf128
          {RTLIB::COPYSIGN_F128, RTLIB::copysignf128}, // copysignf128
          {RTLIB::COSH_F128, RTLIB::coshf128}, // coshf128
          {RTLIB::COS_F128, RTLIB::cosf128}, // cosf128
          {RTLIB::EXP2_F128, RTLIB::exp2f128}, // exp2f128
          {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2f128_finite}, // __exp2f128_finite
          {RTLIB::EXP10_F128, RTLIB::exp10f128}, // exp10f128
          {RTLIB::EXP10_FINITE_F128, RTLIB::__exp10f128_finite}, // __exp10f128_finite
          {RTLIB::EXP_F128, RTLIB::expf128}, // expf128
          {RTLIB::EXP_FINITE_F128, RTLIB::__expf128_finite}, // __expf128_finite
          {RTLIB::FLOOR_F128, RTLIB::floorf128}, // floorf128
          {RTLIB::FMAXIMUM_F128, RTLIB::fmaximumf128}, // fmaximumf128
          {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_numf128}, // fmaximum_numf128
          {RTLIB::FMAX_F128, RTLIB::fmaxf128}, // fmaxf128
          {RTLIB::FMA_F128, RTLIB::fmaf128}, // fmaf128
          {RTLIB::FMINIMUM_F128, RTLIB::fminimumf128}, // fminimumf128
          {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_numf128}, // fminimum_numf128
          {RTLIB::FMIN_F128, RTLIB::fminf128}, // fminf128
          {RTLIB::FREXP_F128, RTLIB::frexpf128}, // frexpf128
          {RTLIB::LDEXP_F128, RTLIB::ldexpf128}, // ldexpf128
          {RTLIB::LLRINT_F128, RTLIB::llrintf128}, // llrintf128
          {RTLIB::LLROUND_F128, RTLIB::llroundf128}, // llroundf128
          {RTLIB::LOG2_F128, RTLIB::log2f128}, // log2f128
          {RTLIB::LOG2_FINITE_F128, RTLIB::__log2f128_finite}, // __log2f128_finite
          {RTLIB::LOG10_F128, RTLIB::log10f128}, // log10f128
          {RTLIB::LOG10_FINITE_F128, RTLIB::__log10f128_finite}, // __log10f128_finite
          {RTLIB::LOG_F128, RTLIB::logf128}, // logf128
          {RTLIB::LOG_FINITE_F128, RTLIB::__logf128_finite}, // __logf128_finite
          {RTLIB::LRINT_F128, RTLIB::lrintf128}, // lrintf128
          {RTLIB::LROUND_F128, RTLIB::lroundf128}, // lroundf128
          {RTLIB::MODF_F128, RTLIB::modff128}, // modff128
          {RTLIB::NEARBYINT_F128, RTLIB::nearbyintf128}, // nearbyintf128
          {RTLIB::POW_F128, RTLIB::powf128}, // powf128
          {RTLIB::POW_FINITE_F128, RTLIB::__powf128_finite}, // __powf128_finite
          {RTLIB::REM_F128, RTLIB::fmodf128}, // fmodf128
          {RTLIB::RINT_F128, RTLIB::rintf128}, // rintf128
          {RTLIB::ROUNDEVEN_F128, RTLIB::roundevenf128}, // roundevenf128
          {RTLIB::ROUND_F128, RTLIB::roundf128}, // roundf128
          {RTLIB::SINCOS_F128, RTLIB::sincosf128}, // sincosf128
          {RTLIB::SINH_F128, RTLIB::sinhf128}, // sinhf128
          {RTLIB::SIN_F128, RTLIB::sinf128}, // sinf128
          {RTLIB::SQRT_F128, RTLIB::sqrtf128}, // sqrtf128
          {RTLIB::TANH_F128, RTLIB::tanhf128}, // tanhf128
          {RTLIB::TAN_F128, RTLIB::tanf128}, // tanf128
          {RTLIB::TRUNC_F128, RTLIB::truncf128}, // truncf128
      };

      for (const auto [Func, Impl] : LibraryCalls_isGNUEnvironment) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSMSVCRT()) {
      static const LibcallImplPair LibraryCalls_isNotOSMSVCRT[] = {
          {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
          {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
          {RTLIB::POWI_F80, RTLIB::__powixf2}, // __powixf2
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSMSVCRT) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSWindows() || TT.isOSCygMing()) {
      static const LibcallImplPair LibraryCalls_isNotOSWindowsOrIsCygwinMinGW[] = {
          {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
          {RTLIB::FREXP_F80, RTLIB::frexp_f80}, // frexpl
          {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
          {RTLIB::LDEXP_F80, RTLIB::ldexp_f80}, // ldexpl
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSWindowsOrIsCygwinMinGW) {
        setLibcallImpl(Func, Impl);
      }

    }

    return;
  }

  if (TT.getArch() == Triple::x86_64) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F80, RTLIB::acos_f80}, // acosl
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F80, RTLIB::__addxf3}, // __addxf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F80, RTLIB::asin_f80}, // asinl
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F80, RTLIB::atan2_f80}, // atan2l
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F80, RTLIB::atan_f80}, // atanl
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F80, RTLIB::cbrt_f80}, // cbrtl
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F80, RTLIB::ceil_f80}, // ceill
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F80, RTLIB::copysign_f80}, // copysignl
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F80, RTLIB::cosh_f80}, // coshl
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F80, RTLIB::cos_f80}, // cosl
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F80, RTLIB::__divxf3}, // __divxf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F80, RTLIB::exp2_f80}, // exp2l
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F80, RTLIB::__exp2l_finite_f80}, // __exp2l_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F80, RTLIB::exp10l_f80}, // exp10l
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F80, RTLIB::exp_f80}, // expl
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F80, RTLIB::__expl_finite_f80}, // __expl_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F80, RTLIB::floor_f80}, // floorl
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F80, RTLIB::fmaximum_f80}, // fmaximuml
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F80, RTLIB::fmaximum_num_f80}, // fmaximum_numl
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F80, RTLIB::fmax_f80}, // fmaxl
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F80, RTLIB::fma_f80}, // fmal
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F80, RTLIB::fminimum_f80}, // fminimuml
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F80, RTLIB::fminimum_num_f80}, // fminimum_numl
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F80, RTLIB::fmin_f80}, // fminl
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F80, RTLIB::__extendhfxf2}, // __extendhfxf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPEXT_F80_F128, RTLIB::__extendxftf2}, // __extendxftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F80_BF16, RTLIB::__truncxfbf2}, // __truncxfbf2
        {RTLIB::FPROUND_F80_F16, RTLIB::__truncxfhf2}, // __truncxfhf2
        {RTLIB::FPROUND_F80_F32, RTLIB::__truncxfsf2}, // __truncxfsf2
        {RTLIB::FPROUND_F80_F64, RTLIB::__truncxfdf2}, // __truncxfdf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPROUND_F128_F80, RTLIB::__trunctfxf2}, // __trunctfxf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F80_I32, RTLIB::__fixxfsi}, // __fixxfsi
        {RTLIB::FPTOSINT_F80_I64, RTLIB::__fixxfdi}, // __fixxfdi
        {RTLIB::FPTOSINT_F80_I128, RTLIB::__fixxfti}, // __fixxfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F80_I32, RTLIB::__fixunsxfsi}, // __fixunsxfsi
        {RTLIB::FPTOUINT_F80_I64, RTLIB::__fixunsxfdi}, // __fixunsxfdi
        {RTLIB::FPTOUINT_F80_I128, RTLIB::__fixunsxfti}, // __fixunsxfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F80, RTLIB::llrint_f80}, // llrintl
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F80, RTLIB::llround_f80}, // llroundl
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F80, RTLIB::log2_f80}, // log2l
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F80, RTLIB::__log2l_finite_f80}, // __log2l_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F80, RTLIB::log10_f80}, // log10l
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F80, RTLIB::__log10l_finite_f80}, // __log10l_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F80, RTLIB::log_f80}, // logl
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F80, RTLIB::__logl_finite_f80}, // __logl_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F80, RTLIB::lrint_f80}, // lrintl
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F80, RTLIB::lround_f80}, // lroundl
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F80, RTLIB::modf_f80}, // modfl
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F80, RTLIB::__mulxf3}, // __mulxf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::MUL_I128, RTLIB::__multi3}, // __multi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F80, RTLIB::nearbyint_f80}, // nearbyintl
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F80, RTLIB::pow_f80}, // powl
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F80, RTLIB::__powl_finite_f80}, // __powl_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F80, RTLIB::fmodl_f80}, // fmodl
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F80, RTLIB::rint_f80}, // rintl
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F80, RTLIB::roundeven_f80}, // roundevenl
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F80, RTLIB::round_f80}, // roundl
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SHL_I128, RTLIB::__ashlti3}, // __ashlti3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F80, RTLIB::sincospi_f80}, // sincospil
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F80, RTLIB::sinh_f80}, // sinhl
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F80, RTLIB::__floatsixf}, // __floatsixf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F80, RTLIB::__floatdixf}, // __floatdixf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F80, RTLIB::__floattixf}, // __floattixf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F80, RTLIB::sin_f80}, // sinl
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F80, RTLIB::sqrt_f80}, // sqrtl
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SRA_I128, RTLIB::__ashrti3}, // __ashrti3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::SRL_I128, RTLIB::__lshrti3}, // __lshrti3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F80, RTLIB::__subxf3}, // __subxf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F80, RTLIB::tanh_f80}, // tanhl
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F80, RTLIB::tan_f80}, // tanl
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F80, RTLIB::trunc_f80}, // truncl
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F80, RTLIB::__floatunsixf}, // __floatunsixf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F80, RTLIB::__floatundixf}, // __floatundixf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F80, RTLIB::__floatuntixf}, // __floatuntixf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    if (darwinHasExp10(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasExp10[] = {
          {RTLIB::EXP10_F32, RTLIB::__exp10f}, // __exp10f
          {RTLIB::EXP10_F64, RTLIB::__exp10}, // __exp10
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasExp10) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (darwinHasSinCosStret(TT)) {
      static const LibcallImplPair LibraryCalls_darwinHasSinCosStret[] = {
          {RTLIB::SINCOS_STRET_F32, RTLIB::__sincosf_stret}, // __sincosf_stret
          {RTLIB::SINCOS_STRET_F64, RTLIB::__sincos_stret}, // __sincos_stret
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHasSinCosStret) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isMacOSX() && !TT.isMacOSXVersionLT(10, 6)) {
      static const LibcallImplPair LibraryCalls_darwinHas__bzero[] = {
          {RTLIB::BZERO, RTLIB::__bzero}, // __bzero
      };

      for (const auto [Func, Impl] : LibraryCalls_darwinHas__bzero) {
        setLibcallImpl(Func, Impl);
      }

    }

    if ((!TT.isOSWindows() || TT.isOSCygMing()) && !TT.isGNUEnvironment()) {
      static const LibcallImplPair LibraryCalls_hasFrexplLdexplF128[] = {
          {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
          {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasFrexplLdexplF128) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (hasSinCos(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos[] = {
          {RTLIB::SINCOS_F80, RTLIB::sincos_f80}, // sincosl
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (hasSinCos_f32_f64(TT)) {
      static const LibcallImplPair LibraryCalls_hasSinCos_f32_f64[] = {
          {RTLIB::SINCOS_F32, RTLIB::sincosf}, // sincosf
          {RTLIB::SINCOS_F64, RTLIB::sincos}, // sincos
      };

      for (const auto [Func, Impl] : LibraryCalls_hasSinCos_f32_f64) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (TT.isGNUEnvironment()) {
      static const LibcallImplPair LibraryCalls_isGNUEnvironment[] = {
          {RTLIB::ACOS_F128, RTLIB::acosf128}, // acosf128
          {RTLIB::ASIN_F128, RTLIB::asinf128}, // asinf128
          {RTLIB::ATAN2_F128, RTLIB::atan2f128}, // atan2f128
          {RTLIB::ATAN_F128, RTLIB::atanf128}, // atanf128
          {RTLIB::CBRT_F128, RTLIB::cbrtf128}, // cbrtf128
          {RTLIB::CEIL_F128, RTLIB::ceilf128}, // ceilf128
          {RTLIB::COPYSIGN_F128, RTLIB::copysignf128}, // copysignf128
          {RTLIB::COSH_F128, RTLIB::coshf128}, // coshf128
          {RTLIB::COS_F128, RTLIB::cosf128}, // cosf128
          {RTLIB::EXP2_F128, RTLIB::exp2f128}, // exp2f128
          {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2f128_finite}, // __exp2f128_finite
          {RTLIB::EXP10_F128, RTLIB::exp10f128}, // exp10f128
          {RTLIB::EXP10_FINITE_F128, RTLIB::__exp10f128_finite}, // __exp10f128_finite
          {RTLIB::EXP_F128, RTLIB::expf128}, // expf128
          {RTLIB::EXP_FINITE_F128, RTLIB::__expf128_finite}, // __expf128_finite
          {RTLIB::FLOOR_F128, RTLIB::floorf128}, // floorf128
          {RTLIB::FMAXIMUM_F128, RTLIB::fmaximumf128}, // fmaximumf128
          {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_numf128}, // fmaximum_numf128
          {RTLIB::FMAX_F128, RTLIB::fmaxf128}, // fmaxf128
          {RTLIB::FMA_F128, RTLIB::fmaf128}, // fmaf128
          {RTLIB::FMINIMUM_F128, RTLIB::fminimumf128}, // fminimumf128
          {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_numf128}, // fminimum_numf128
          {RTLIB::FMIN_F128, RTLIB::fminf128}, // fminf128
          {RTLIB::FREXP_F128, RTLIB::frexpf128}, // frexpf128
          {RTLIB::LDEXP_F128, RTLIB::ldexpf128}, // ldexpf128
          {RTLIB::LLRINT_F128, RTLIB::llrintf128}, // llrintf128
          {RTLIB::LLROUND_F128, RTLIB::llroundf128}, // llroundf128
          {RTLIB::LOG2_F128, RTLIB::log2f128}, // log2f128
          {RTLIB::LOG2_FINITE_F128, RTLIB::__log2f128_finite}, // __log2f128_finite
          {RTLIB::LOG10_F128, RTLIB::log10f128}, // log10f128
          {RTLIB::LOG10_FINITE_F128, RTLIB::__log10f128_finite}, // __log10f128_finite
          {RTLIB::LOG_F128, RTLIB::logf128}, // logf128
          {RTLIB::LOG_FINITE_F128, RTLIB::__logf128_finite}, // __logf128_finite
          {RTLIB::LRINT_F128, RTLIB::lrintf128}, // lrintf128
          {RTLIB::LROUND_F128, RTLIB::lroundf128}, // lroundf128
          {RTLIB::MODF_F128, RTLIB::modff128}, // modff128
          {RTLIB::NEARBYINT_F128, RTLIB::nearbyintf128}, // nearbyintf128
          {RTLIB::POW_F128, RTLIB::powf128}, // powf128
          {RTLIB::POW_FINITE_F128, RTLIB::__powf128_finite}, // __powf128_finite
          {RTLIB::REM_F128, RTLIB::fmodf128}, // fmodf128
          {RTLIB::RINT_F128, RTLIB::rintf128}, // rintf128
          {RTLIB::ROUNDEVEN_F128, RTLIB::roundevenf128}, // roundevenf128
          {RTLIB::ROUND_F128, RTLIB::roundf128}, // roundf128
          {RTLIB::SINCOS_F128, RTLIB::sincosf128}, // sincosf128
          {RTLIB::SINH_F128, RTLIB::sinhf128}, // sinhf128
          {RTLIB::SIN_F128, RTLIB::sinf128}, // sinf128
          {RTLIB::SQRT_F128, RTLIB::sqrtf128}, // sqrtf128
          {RTLIB::TANH_F128, RTLIB::tanhf128}, // tanhf128
          {RTLIB::TAN_F128, RTLIB::tanf128}, // tanf128
          {RTLIB::TRUNC_F128, RTLIB::truncf128}, // truncf128
      };

      for (const auto [Func, Impl] : LibraryCalls_isGNUEnvironment) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSMSVCRT()) {
      static const LibcallImplPair LibraryCalls_isNotOSMSVCRT[] = {
          {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
          {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
          {RTLIB::POWI_F80, RTLIB::__powixf2}, // __powixf2
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSMSVCRT) {
        setLibcallImpl(Func, Impl);
      }

    }

    if (!TT.isOSWindows() || TT.isOSCygMing()) {
      static const LibcallImplPair LibraryCalls_isNotOSWindowsOrIsCygwinMinGW[] = {
          {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
          {RTLIB::FREXP_F80, RTLIB::frexp_f80}, // frexpl
          {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
          {RTLIB::LDEXP_F80, RTLIB::ldexp_f80}, // ldexpl
      };

      for (const auto [Func, Impl] : LibraryCalls_isNotOSWindowsOrIsCygwinMinGW) {
        setLibcallImpl(Func, Impl);
      }

    }

    return;
  }

  if (TT.getArch() == Triple::xcore) {
    static const LibcallImplPair LibraryCalls[] = {
        {RTLIB::ACOS_F32, RTLIB::acosf}, // acosf
        {RTLIB::ACOS_F64, RTLIB::acos}, // acos
        {RTLIB::ACOS_F128, RTLIB::acos_f128}, // acosl
        {RTLIB::ADD_F32, RTLIB::__addsf3}, // __addsf3
        {RTLIB::ADD_F64, RTLIB::__adddf3}, // __adddf3
        {RTLIB::ADD_F128, RTLIB::__addtf3}, // __addtf3
        {RTLIB::ASIN_F32, RTLIB::asinf}, // asinf
        {RTLIB::ASIN_F64, RTLIB::asin}, // asin
        {RTLIB::ASIN_F128, RTLIB::asin_f128}, // asinl
        {RTLIB::ATAN2_F32, RTLIB::atan2f}, // atan2f
        {RTLIB::ATAN2_F64, RTLIB::atan2}, // atan2
        {RTLIB::ATAN2_F128, RTLIB::atan2_f128}, // atan2l
        {RTLIB::ATAN_F32, RTLIB::atanf}, // atanf
        {RTLIB::ATAN_F64, RTLIB::atan}, // atan
        {RTLIB::ATAN_F128, RTLIB::atan_f128}, // atanl
        {RTLIB::ATOMIC_COMPARE_EXCHANGE, RTLIB::__atomic_compare_exchange}, // __atomic_compare_exchange
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_1, RTLIB::__atomic_compare_exchange_1}, // __atomic_compare_exchange_1
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_2, RTLIB::__atomic_compare_exchange_2}, // __atomic_compare_exchange_2
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_4, RTLIB::__atomic_compare_exchange_4}, // __atomic_compare_exchange_4
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_8, RTLIB::__atomic_compare_exchange_8}, // __atomic_compare_exchange_8
        {RTLIB::ATOMIC_COMPARE_EXCHANGE_16, RTLIB::__atomic_compare_exchange_16}, // __atomic_compare_exchange_16
        {RTLIB::ATOMIC_EXCHANGE, RTLIB::__atomic_exchange}, // __atomic_exchange
        {RTLIB::ATOMIC_EXCHANGE_1, RTLIB::__atomic_exchange_1}, // __atomic_exchange_1
        {RTLIB::ATOMIC_EXCHANGE_2, RTLIB::__atomic_exchange_2}, // __atomic_exchange_2
        {RTLIB::ATOMIC_EXCHANGE_4, RTLIB::__atomic_exchange_4}, // __atomic_exchange_4
        {RTLIB::ATOMIC_EXCHANGE_8, RTLIB::__atomic_exchange_8}, // __atomic_exchange_8
        {RTLIB::ATOMIC_EXCHANGE_16, RTLIB::__atomic_exchange_16}, // __atomic_exchange_16
        {RTLIB::ATOMIC_FETCH_ADD_1, RTLIB::__atomic_fetch_add_1}, // __atomic_fetch_add_1
        {RTLIB::ATOMIC_FETCH_ADD_2, RTLIB::__atomic_fetch_add_2}, // __atomic_fetch_add_2
        {RTLIB::ATOMIC_FETCH_ADD_4, RTLIB::__atomic_fetch_add_4}, // __atomic_fetch_add_4
        {RTLIB::ATOMIC_FETCH_ADD_8, RTLIB::__atomic_fetch_add_8}, // __atomic_fetch_add_8
        {RTLIB::ATOMIC_FETCH_ADD_16, RTLIB::__atomic_fetch_add_16}, // __atomic_fetch_add_16
        {RTLIB::ATOMIC_FETCH_AND_1, RTLIB::__atomic_fetch_and_1}, // __atomic_fetch_and_1
        {RTLIB::ATOMIC_FETCH_AND_2, RTLIB::__atomic_fetch_and_2}, // __atomic_fetch_and_2
        {RTLIB::ATOMIC_FETCH_AND_4, RTLIB::__atomic_fetch_and_4}, // __atomic_fetch_and_4
        {RTLIB::ATOMIC_FETCH_AND_8, RTLIB::__atomic_fetch_and_8}, // __atomic_fetch_and_8
        {RTLIB::ATOMIC_FETCH_AND_16, RTLIB::__atomic_fetch_and_16}, // __atomic_fetch_and_16
        {RTLIB::ATOMIC_FETCH_NAND_1, RTLIB::__atomic_fetch_nand_1}, // __atomic_fetch_nand_1
        {RTLIB::ATOMIC_FETCH_NAND_2, RTLIB::__atomic_fetch_nand_2}, // __atomic_fetch_nand_2
        {RTLIB::ATOMIC_FETCH_NAND_4, RTLIB::__atomic_fetch_nand_4}, // __atomic_fetch_nand_4
        {RTLIB::ATOMIC_FETCH_NAND_8, RTLIB::__atomic_fetch_nand_8}, // __atomic_fetch_nand_8
        {RTLIB::ATOMIC_FETCH_NAND_16, RTLIB::__atomic_fetch_nand_16}, // __atomic_fetch_nand_16
        {RTLIB::ATOMIC_FETCH_OR_1, RTLIB::__atomic_fetch_or_1}, // __atomic_fetch_or_1
        {RTLIB::ATOMIC_FETCH_OR_2, RTLIB::__atomic_fetch_or_2}, // __atomic_fetch_or_2
        {RTLIB::ATOMIC_FETCH_OR_4, RTLIB::__atomic_fetch_or_4}, // __atomic_fetch_or_4
        {RTLIB::ATOMIC_FETCH_OR_8, RTLIB::__atomic_fetch_or_8}, // __atomic_fetch_or_8
        {RTLIB::ATOMIC_FETCH_OR_16, RTLIB::__atomic_fetch_or_16}, // __atomic_fetch_or_16
        {RTLIB::ATOMIC_FETCH_SUB_1, RTLIB::__atomic_fetch_sub_1}, // __atomic_fetch_sub_1
        {RTLIB::ATOMIC_FETCH_SUB_2, RTLIB::__atomic_fetch_sub_2}, // __atomic_fetch_sub_2
        {RTLIB::ATOMIC_FETCH_SUB_4, RTLIB::__atomic_fetch_sub_4}, // __atomic_fetch_sub_4
        {RTLIB::ATOMIC_FETCH_SUB_8, RTLIB::__atomic_fetch_sub_8}, // __atomic_fetch_sub_8
        {RTLIB::ATOMIC_FETCH_SUB_16, RTLIB::__atomic_fetch_sub_16}, // __atomic_fetch_sub_16
        {RTLIB::ATOMIC_FETCH_XOR_1, RTLIB::__atomic_fetch_xor_1}, // __atomic_fetch_xor_1
        {RTLIB::ATOMIC_FETCH_XOR_2, RTLIB::__atomic_fetch_xor_2}, // __atomic_fetch_xor_2
        {RTLIB::ATOMIC_FETCH_XOR_4, RTLIB::__atomic_fetch_xor_4}, // __atomic_fetch_xor_4
        {RTLIB::ATOMIC_FETCH_XOR_8, RTLIB::__atomic_fetch_xor_8}, // __atomic_fetch_xor_8
        {RTLIB::ATOMIC_FETCH_XOR_16, RTLIB::__atomic_fetch_xor_16}, // __atomic_fetch_xor_16
        {RTLIB::ATOMIC_LOAD, RTLIB::__atomic_load}, // __atomic_load
        {RTLIB::ATOMIC_LOAD_1, RTLIB::__atomic_load_1}, // __atomic_load_1
        {RTLIB::ATOMIC_LOAD_2, RTLIB::__atomic_load_2}, // __atomic_load_2
        {RTLIB::ATOMIC_LOAD_4, RTLIB::__atomic_load_4}, // __atomic_load_4
        {RTLIB::ATOMIC_LOAD_8, RTLIB::__atomic_load_8}, // __atomic_load_8
        {RTLIB::ATOMIC_LOAD_16, RTLIB::__atomic_load_16}, // __atomic_load_16
        {RTLIB::ATOMIC_STORE, RTLIB::__atomic_store}, // __atomic_store
        {RTLIB::ATOMIC_STORE_1, RTLIB::__atomic_store_1}, // __atomic_store_1
        {RTLIB::ATOMIC_STORE_2, RTLIB::__atomic_store_2}, // __atomic_store_2
        {RTLIB::ATOMIC_STORE_4, RTLIB::__atomic_store_4}, // __atomic_store_4
        {RTLIB::ATOMIC_STORE_8, RTLIB::__atomic_store_8}, // __atomic_store_8
        {RTLIB::ATOMIC_STORE_16, RTLIB::__atomic_store_16}, // __atomic_store_16
        {RTLIB::CALLOC, RTLIB::calloc}, // calloc
        {RTLIB::CBRT_F32, RTLIB::cbrtf}, // cbrtf
        {RTLIB::CBRT_F64, RTLIB::cbrt}, // cbrt
        {RTLIB::CBRT_F128, RTLIB::cbrt_f128}, // cbrtl
        {RTLIB::CEIL_F32, RTLIB::ceilf}, // ceilf
        {RTLIB::CEIL_F64, RTLIB::ceil}, // ceil
        {RTLIB::CEIL_F128, RTLIB::ceil_f128}, // ceill
        {RTLIB::CLEAR_CACHE, RTLIB::__clear_cache}, // __clear_cache
        {RTLIB::COPYSIGN_F32, RTLIB::copysignf}, // copysignf
        {RTLIB::COPYSIGN_F64, RTLIB::copysign}, // copysign
        {RTLIB::COPYSIGN_F128, RTLIB::copysign_f128}, // copysignl
        {RTLIB::COSH_F32, RTLIB::coshf}, // coshf
        {RTLIB::COSH_F64, RTLIB::cosh}, // cosh
        {RTLIB::COSH_F128, RTLIB::cosh_f128}, // coshl
        {RTLIB::COS_F32, RTLIB::cosf}, // cosf
        {RTLIB::COS_F64, RTLIB::cos}, // cos
        {RTLIB::COS_F128, RTLIB::cos_f128}, // cosl
        {RTLIB::CTLZ_I32, RTLIB::__clzsi2}, // __clzsi2
        {RTLIB::CTLZ_I64, RTLIB::__clzdi2}, // __clzdi2
        {RTLIB::CTLZ_I128, RTLIB::__clzti2}, // __clzti2
        {RTLIB::CTPOP_I32, RTLIB::__popcountsi2}, // __popcountsi2
        {RTLIB::CTPOP_I64, RTLIB::__popcountdi2}, // __popcountdi2
        {RTLIB::CTPOP_I128, RTLIB::__popcountti2}, // __popcountti2
        {RTLIB::CXA_END_CLEANUP, RTLIB::__cxa_end_cleanup}, // __cxa_end_cleanup
        {RTLIB::DEOPTIMIZE, RTLIB::__llvm_deoptimize}, // __llvm_deoptimize
        {RTLIB::DIV_F32, RTLIB::__divsf3}, // __divsf3
        {RTLIB::DIV_F64, RTLIB::__divdf3}, // __divdf3
        {RTLIB::DIV_F128, RTLIB::__divtf3}, // __divtf3
        {RTLIB::EXP2_F32, RTLIB::exp2f}, // exp2f
        {RTLIB::EXP2_F64, RTLIB::exp2}, // exp2
        {RTLIB::EXP2_F128, RTLIB::exp2_f128}, // exp2l
        {RTLIB::EXP2_FINITE_F32, RTLIB::__exp2f_finite}, // __exp2f_finite
        {RTLIB::EXP2_FINITE_F64, RTLIB::__exp2_finite}, // __exp2_finite
        {RTLIB::EXP2_FINITE_F128, RTLIB::__exp2l_finite_f128}, // __exp2l_finite
        {RTLIB::EXP10_F32, RTLIB::exp10f}, // exp10f
        {RTLIB::EXP10_F64, RTLIB::exp10}, // exp10
        {RTLIB::EXP10_F128, RTLIB::exp10l_f128}, // exp10l
        {RTLIB::EXP_F32, RTLIB::expf}, // expf
        {RTLIB::EXP_F64, RTLIB::exp}, // exp
        {RTLIB::EXP_F128, RTLIB::exp_f128}, // expl
        {RTLIB::EXP_FINITE_F32, RTLIB::__expf_finite}, // __expf_finite
        {RTLIB::EXP_FINITE_F64, RTLIB::__exp_finite}, // __exp_finite
        {RTLIB::EXP_FINITE_F128, RTLIB::__expl_finite_f128}, // __expl_finite
        {RTLIB::FEGETENV, RTLIB::fegetenv}, // fegetenv
        {RTLIB::FEGETMODE, RTLIB::fegetmode}, // fegetmode
        {RTLIB::FESETENV, RTLIB::fesetenv}, // fesetenv
        {RTLIB::FESETMODE, RTLIB::fesetmode}, // fesetmode
        {RTLIB::FLOOR_F32, RTLIB::floorf}, // floorf
        {RTLIB::FLOOR_F64, RTLIB::floor}, // floor
        {RTLIB::FLOOR_F128, RTLIB::floor_f128}, // floorl
        {RTLIB::FMAXIMUM_F32, RTLIB::fmaximumf}, // fmaximumf
        {RTLIB::FMAXIMUM_F64, RTLIB::fmaximum}, // fmaximum
        {RTLIB::FMAXIMUM_F128, RTLIB::fmaximum_f128}, // fmaximuml
        {RTLIB::FMAXIMUM_NUM_F32, RTLIB::fmaximum_numf}, // fmaximum_numf
        {RTLIB::FMAXIMUM_NUM_F64, RTLIB::fmaximum_num}, // fmaximum_num
        {RTLIB::FMAXIMUM_NUM_F128, RTLIB::fmaximum_num_f128}, // fmaximum_numl
        {RTLIB::FMAX_F32, RTLIB::fmaxf}, // fmaxf
        {RTLIB::FMAX_F64, RTLIB::fmax}, // fmax
        {RTLIB::FMAX_F128, RTLIB::fmax_f128}, // fmaxl
        {RTLIB::FMA_F32, RTLIB::fmaf}, // fmaf
        {RTLIB::FMA_F64, RTLIB::fma}, // fma
        {RTLIB::FMA_F128, RTLIB::fma_f128}, // fmal
        {RTLIB::FMINIMUM_F32, RTLIB::fminimumf}, // fminimumf
        {RTLIB::FMINIMUM_F64, RTLIB::fminimum}, // fminimum
        {RTLIB::FMINIMUM_F128, RTLIB::fminimum_f128}, // fminimuml
        {RTLIB::FMINIMUM_NUM_F32, RTLIB::fminimum_numf}, // fminimum_numf
        {RTLIB::FMINIMUM_NUM_F64, RTLIB::fminimum_num}, // fminimum_num
        {RTLIB::FMINIMUM_NUM_F128, RTLIB::fminimum_num_f128}, // fminimum_numl
        {RTLIB::FMIN_F32, RTLIB::fminf}, // fminf
        {RTLIB::FMIN_F64, RTLIB::fmin}, // fmin
        {RTLIB::FMIN_F128, RTLIB::fmin_f128}, // fminl
        {RTLIB::FPEXT_BF16_F32, RTLIB::__extendbfsf2}, // __extendbfsf2
        {RTLIB::FPEXT_F16_F32, RTLIB::__extendhfsf2}, // __extendhfsf2
        {RTLIB::FPEXT_F16_F64, RTLIB::__extendhfdf2}, // __extendhfdf2
        {RTLIB::FPEXT_F16_F128, RTLIB::__extendhftf2}, // __extendhftf2
        {RTLIB::FPEXT_F32_F64, RTLIB::__extendsfdf2}, // __extendsfdf2
        {RTLIB::FPEXT_F32_F128, RTLIB::__extendsftf2}, // __extendsftf2
        {RTLIB::FPEXT_F64_F128, RTLIB::__extenddftf2}, // __extenddftf2
        {RTLIB::FPROUND_F32_BF16, RTLIB::__truncsfbf2}, // __truncsfbf2
        {RTLIB::FPROUND_F32_F16, RTLIB::__truncsfhf2}, // __truncsfhf2
        {RTLIB::FPROUND_F64_BF16, RTLIB::__truncdfbf2}, // __truncdfbf2
        {RTLIB::FPROUND_F64_F16, RTLIB::__truncdfhf2}, // __truncdfhf2
        {RTLIB::FPROUND_F64_F32, RTLIB::__truncdfsf2}, // __truncdfsf2
        {RTLIB::FPROUND_F128_BF16, RTLIB::__trunctfbf2}, // __trunctfbf2
        {RTLIB::FPROUND_F128_F16, RTLIB::__trunctfhf2_f128}, // __trunctfhf2
        {RTLIB::FPROUND_F128_F32, RTLIB::__trunctfsf2}, // __trunctfsf2
        {RTLIB::FPROUND_F128_F64, RTLIB::__trunctfdf2}, // __trunctfdf2
        {RTLIB::FPTOSINT_F16_I32, RTLIB::__fixhfsi}, // __fixhfsi
        {RTLIB::FPTOSINT_F16_I64, RTLIB::__fixhfdi}, // __fixhfdi
        {RTLIB::FPTOSINT_F16_I128, RTLIB::__fixhfti}, // __fixhfti
        {RTLIB::FPTOSINT_F32_I32, RTLIB::__fixsfsi}, // __fixsfsi
        {RTLIB::FPTOSINT_F32_I64, RTLIB::__fixsfdi}, // __fixsfdi
        {RTLIB::FPTOSINT_F32_I128, RTLIB::__fixsfti}, // __fixsfti
        {RTLIB::FPTOSINT_F64_I32, RTLIB::__fixdfsi}, // __fixdfsi
        {RTLIB::FPTOSINT_F64_I64, RTLIB::__fixdfdi}, // __fixdfdi
        {RTLIB::FPTOSINT_F64_I128, RTLIB::__fixdfti}, // __fixdfti
        {RTLIB::FPTOSINT_F128_I32, RTLIB::__fixtfsi}, // __fixtfsi
        {RTLIB::FPTOSINT_F128_I64, RTLIB::__fixtfdi_f128}, // __fixtfdi
        {RTLIB::FPTOSINT_F128_I128, RTLIB::__fixtfti_f128}, // __fixtfti
        {RTLIB::FPTOUINT_F16_I32, RTLIB::__fixunshfsi}, // __fixunshfsi
        {RTLIB::FPTOUINT_F16_I64, RTLIB::__fixunshfdi}, // __fixunshfdi
        {RTLIB::FPTOUINT_F16_I128, RTLIB::__fixunshfti}, // __fixunshfti
        {RTLIB::FPTOUINT_F32_I32, RTLIB::__fixunssfsi}, // __fixunssfsi
        {RTLIB::FPTOUINT_F32_I64, RTLIB::__fixunssfdi}, // __fixunssfdi
        {RTLIB::FPTOUINT_F32_I128, RTLIB::__fixunssfti}, // __fixunssfti
        {RTLIB::FPTOUINT_F64_I32, RTLIB::__fixunsdfsi}, // __fixunsdfsi
        {RTLIB::FPTOUINT_F64_I64, RTLIB::__fixunsdfdi}, // __fixunsdfdi
        {RTLIB::FPTOUINT_F64_I128, RTLIB::__fixunsdfti}, // __fixunsdfti
        {RTLIB::FPTOUINT_F128_I32, RTLIB::__fixunstfsi_f128}, // __fixunstfsi
        {RTLIB::FPTOUINT_F128_I64, RTLIB::__fixunstfdi_f128}, // __fixunstfdi
        {RTLIB::FPTOUINT_F128_I128, RTLIB::__fixunstfti_f128}, // __fixunstfti
        {RTLIB::FREXP_F32, RTLIB::frexpf}, // frexpf
        {RTLIB::FREXP_F64, RTLIB::frexp}, // frexp
        {RTLIB::FREXP_F128, RTLIB::frexp_f128}, // frexpl
        {RTLIB::LDEXP_F32, RTLIB::ldexpf}, // ldexpf
        {RTLIB::LDEXP_F64, RTLIB::ldexp}, // ldexp
        {RTLIB::LDEXP_F128, RTLIB::ldexp_f128}, // ldexpl
        {RTLIB::LLRINT_F32, RTLIB::llrintf}, // llrintf
        {RTLIB::LLRINT_F64, RTLIB::llrint}, // llrint
        {RTLIB::LLRINT_F128, RTLIB::llrint_f128}, // llrintl
        {RTLIB::LLROUND_F32, RTLIB::llroundf}, // llroundf
        {RTLIB::LLROUND_F64, RTLIB::llround}, // llround
        {RTLIB::LLROUND_F128, RTLIB::llround_f128}, // llroundl
        {RTLIB::LOG2_F32, RTLIB::log2f}, // log2f
        {RTLIB::LOG2_F64, RTLIB::log2}, // log2
        {RTLIB::LOG2_F128, RTLIB::log2_f128}, // log2l
        {RTLIB::LOG2_FINITE_F32, RTLIB::__log2f_finite}, // __log2f_finite
        {RTLIB::LOG2_FINITE_F64, RTLIB::__log2_finite}, // __log2_finite
        {RTLIB::LOG2_FINITE_F128, RTLIB::__log2l_finite_f128}, // __log2l_finite
        {RTLIB::LOG10_F32, RTLIB::log10f}, // log10f
        {RTLIB::LOG10_F64, RTLIB::log10}, // log10
        {RTLIB::LOG10_F128, RTLIB::log10_f128}, // log10l
        {RTLIB::LOG10_FINITE_F32, RTLIB::__log10f_finite}, // __log10f_finite
        {RTLIB::LOG10_FINITE_F64, RTLIB::__log10_finite}, // __log10_finite
        {RTLIB::LOG10_FINITE_F128, RTLIB::__log10l_finite_f128}, // __log10l_finite
        {RTLIB::LOG_F32, RTLIB::logf}, // logf
        {RTLIB::LOG_F64, RTLIB::log}, // log
        {RTLIB::LOG_F128, RTLIB::log_f128}, // logl
        {RTLIB::LOG_FINITE_F32, RTLIB::__logf_finite}, // __logf_finite
        {RTLIB::LOG_FINITE_F64, RTLIB::__log_finite}, // __log_finite
        {RTLIB::LOG_FINITE_F128, RTLIB::__logl_finite_f128}, // __logl_finite
        {RTLIB::LRINT_F32, RTLIB::lrintf}, // lrintf
        {RTLIB::LRINT_F64, RTLIB::lrint}, // lrint
        {RTLIB::LRINT_F128, RTLIB::lrint_f128}, // lrintl
        {RTLIB::LROUND_F32, RTLIB::lroundf}, // lroundf
        {RTLIB::LROUND_F64, RTLIB::lround}, // lround
        {RTLIB::LROUND_F128, RTLIB::lround_f128}, // lroundl
        {RTLIB::MEMCPY, RTLIB::memcpy}, // memcpy
        {RTLIB::MEMCPY_ALIGN_4, RTLIB::__memcpy_4}, // __memcpy_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memcpy_element_unordered_atomic_1}, // __llvm_memcpy_element_unordered_atomic_1
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memcpy_element_unordered_atomic_2}, // __llvm_memcpy_element_unordered_atomic_2
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memcpy_element_unordered_atomic_4}, // __llvm_memcpy_element_unordered_atomic_4
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memcpy_element_unordered_atomic_8}, // __llvm_memcpy_element_unordered_atomic_8
        {RTLIB::MEMCPY_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memcpy_element_unordered_atomic_16}, // __llvm_memcpy_element_unordered_atomic_16
        {RTLIB::MEMMOVE, RTLIB::memmove}, // memmove
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memmove_element_unordered_atomic_1}, // __llvm_memmove_element_unordered_atomic_1
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memmove_element_unordered_atomic_2}, // __llvm_memmove_element_unordered_atomic_2
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memmove_element_unordered_atomic_4}, // __llvm_memmove_element_unordered_atomic_4
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memmove_element_unordered_atomic_8}, // __llvm_memmove_element_unordered_atomic_8
        {RTLIB::MEMMOVE_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memmove_element_unordered_atomic_16}, // __llvm_memmove_element_unordered_atomic_16
        {RTLIB::MEMSET, RTLIB::memset}, // memset
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_1, RTLIB::__llvm_memset_element_unordered_atomic_1}, // __llvm_memset_element_unordered_atomic_1
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_2, RTLIB::__llvm_memset_element_unordered_atomic_2}, // __llvm_memset_element_unordered_atomic_2
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_4, RTLIB::__llvm_memset_element_unordered_atomic_4}, // __llvm_memset_element_unordered_atomic_4
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_8, RTLIB::__llvm_memset_element_unordered_atomic_8}, // __llvm_memset_element_unordered_atomic_8
        {RTLIB::MEMSET_ELEMENT_UNORDERED_ATOMIC_16, RTLIB::__llvm_memset_element_unordered_atomic_16}, // __llvm_memset_element_unordered_atomic_16
        {RTLIB::MODF_F32, RTLIB::modff}, // modff
        {RTLIB::MODF_F64, RTLIB::modf}, // modf
        {RTLIB::MODF_F128, RTLIB::modf_f128}, // modfl
        {RTLIB::MULO_I32, RTLIB::__mulosi4}, // __mulosi4
        {RTLIB::MUL_F32, RTLIB::__mulsf3}, // __mulsf3
        {RTLIB::MUL_F64, RTLIB::__muldf3}, // __muldf3
        {RTLIB::MUL_F128, RTLIB::__multf3}, // __multf3
        {RTLIB::MUL_I8, RTLIB::__mulqi3}, // __mulqi3
        {RTLIB::MUL_I16, RTLIB::__mulhi3}, // __mulhi3
        {RTLIB::MUL_I32, RTLIB::__mulsi3}, // __mulsi3
        {RTLIB::MUL_I64, RTLIB::__muldi3}, // __muldi3
        {RTLIB::NEARBYINT_F32, RTLIB::nearbyintf}, // nearbyintf
        {RTLIB::NEARBYINT_F64, RTLIB::nearbyint}, // nearbyint
        {RTLIB::NEARBYINT_F128, RTLIB::nearbyint_f128}, // nearbyintl
        {RTLIB::NEG_I32, RTLIB::__negsi2}, // __negsi2
        {RTLIB::NEG_I64, RTLIB::__negdi2}, // __negdi2
        {RTLIB::OEQ_F32, RTLIB::__eqsf2}, // __eqsf2
        {RTLIB::OEQ_F64, RTLIB::__eqdf2}, // __eqdf2
        {RTLIB::OEQ_F128, RTLIB::__eqtf2}, // __eqtf2
        {RTLIB::OGE_F32, RTLIB::__gesf2}, // __gesf2
        {RTLIB::OGE_F64, RTLIB::__gedf2}, // __gedf2
        {RTLIB::OGE_F128, RTLIB::__getf2}, // __getf2
        {RTLIB::OGT_F32, RTLIB::__gtsf2}, // __gtsf2
        {RTLIB::OGT_F64, RTLIB::__gtdf2}, // __gtdf2
        {RTLIB::OGT_F128, RTLIB::__gttf2}, // __gttf2
        {RTLIB::OLE_F32, RTLIB::__lesf2}, // __lesf2
        {RTLIB::OLE_F64, RTLIB::__ledf2}, // __ledf2
        {RTLIB::OLE_F128, RTLIB::__letf2}, // __letf2
        {RTLIB::OLT_F32, RTLIB::__ltsf2}, // __ltsf2
        {RTLIB::OLT_F64, RTLIB::__ltdf2}, // __ltdf2
        {RTLIB::OLT_F128, RTLIB::__lttf2}, // __lttf2
        {RTLIB::POWI_F32, RTLIB::__powisf2}, // __powisf2
        {RTLIB::POWI_F64, RTLIB::__powidf2}, // __powidf2
        {RTLIB::POWI_F128, RTLIB::__powitf2_f128}, // __powitf2
        {RTLIB::POW_F32, RTLIB::powf}, // powf
        {RTLIB::POW_F64, RTLIB::pow}, // pow
        {RTLIB::POW_F128, RTLIB::pow_f128}, // powl
        {RTLIB::POW_FINITE_F32, RTLIB::__powf_finite}, // __powf_finite
        {RTLIB::POW_FINITE_F64, RTLIB::__pow_finite}, // __pow_finite
        {RTLIB::POW_FINITE_F128, RTLIB::__powl_finite_f128}, // __powl_finite
        {RTLIB::REM_F32, RTLIB::fmodf}, // fmodf
        {RTLIB::REM_F64, RTLIB::fmod}, // fmod
        {RTLIB::REM_F128, RTLIB::fmodl_f128}, // fmodl
        {RTLIB::RINT_F32, RTLIB::rintf}, // rintf
        {RTLIB::RINT_F64, RTLIB::rint}, // rint
        {RTLIB::RINT_F128, RTLIB::rint_f128}, // rintl
        {RTLIB::ROUNDEVEN_F32, RTLIB::roundevenf}, // roundevenf
        {RTLIB::ROUNDEVEN_F64, RTLIB::roundeven}, // roundeven
        {RTLIB::ROUNDEVEN_F128, RTLIB::roundeven_f128}, // roundevenl
        {RTLIB::ROUND_F32, RTLIB::roundf}, // roundf
        {RTLIB::ROUND_F64, RTLIB::round}, // round
        {RTLIB::ROUND_F128, RTLIB::round_f128}, // roundl
        {RTLIB::SAFESTACK_POINTER_ADDRESS, RTLIB::__safestack_pointer_address}, // __safestack_pointer_address
        {RTLIB::SDIV_I8, RTLIB::__divqi3}, // __divqi3
        {RTLIB::SDIV_I16, RTLIB::__divhi3}, // __divhi3
        {RTLIB::SDIV_I32, RTLIB::__divsi3}, // __divsi3
        {RTLIB::SDIV_I64, RTLIB::__divdi3}, // __divdi3
        {RTLIB::SDIV_I128, RTLIB::__divti3}, // __divti3
        {RTLIB::SHL_I16, RTLIB::__ashlhi3}, // __ashlhi3
        {RTLIB::SHL_I32, RTLIB::__ashlsi3}, // __ashlsi3
        {RTLIB::SHL_I64, RTLIB::__ashldi3}, // __ashldi3
        {RTLIB::SINCOSPI_F32, RTLIB::sincospif}, // sincospif
        {RTLIB::SINCOSPI_F64, RTLIB::sincospi}, // sincospi
        {RTLIB::SINCOSPI_F128, RTLIB::sincospi_f128}, // sincospil
        {RTLIB::SINH_F32, RTLIB::sinhf}, // sinhf
        {RTLIB::SINH_F64, RTLIB::sinh}, // sinh
        {RTLIB::SINH_F128, RTLIB::sinh_f128}, // sinhl
        {RTLIB::SINTTOFP_I32_F16, RTLIB::__floatsihf}, // __floatsihf
        {RTLIB::SINTTOFP_I32_F32, RTLIB::__floatsisf}, // __floatsisf
        {RTLIB::SINTTOFP_I32_F64, RTLIB::__floatsidf}, // __floatsidf
        {RTLIB::SINTTOFP_I32_F128, RTLIB::__floatsitf}, // __floatsitf
        {RTLIB::SINTTOFP_I64_BF16, RTLIB::__floatdibf}, // __floatdibf
        {RTLIB::SINTTOFP_I64_F16, RTLIB::__floatdihf}, // __floatdihf
        {RTLIB::SINTTOFP_I64_F32, RTLIB::__floatdisf}, // __floatdisf
        {RTLIB::SINTTOFP_I64_F64, RTLIB::__floatdidf}, // __floatdidf
        {RTLIB::SINTTOFP_I64_F128, RTLIB::__floatditf_f128}, // __floatditf
        {RTLIB::SINTTOFP_I128_F16, RTLIB::__floattihf}, // __floattihf
        {RTLIB::SINTTOFP_I128_F32, RTLIB::__floattisf}, // __floattisf
        {RTLIB::SINTTOFP_I128_F64, RTLIB::__floattidf}, // __floattidf
        {RTLIB::SINTTOFP_I128_F128, RTLIB::__floattitf_f128}, // __floattitf
        {RTLIB::SIN_F32, RTLIB::sinf}, // sinf
        {RTLIB::SIN_F64, RTLIB::sin}, // sin
        {RTLIB::SIN_F128, RTLIB::sin_f128}, // sinl
        {RTLIB::SQRT_F32, RTLIB::sqrtf}, // sqrtf
        {RTLIB::SQRT_F64, RTLIB::sqrt}, // sqrt
        {RTLIB::SQRT_F128, RTLIB::sqrt_f128}, // sqrtl
        {RTLIB::SRA_I16, RTLIB::__ashrhi3}, // __ashrhi3
        {RTLIB::SRA_I32, RTLIB::__ashrsi3}, // __ashrsi3
        {RTLIB::SRA_I64, RTLIB::__ashrdi3}, // __ashrdi3
        {RTLIB::SREM_I8, RTLIB::__modqi3}, // __modqi3
        {RTLIB::SREM_I16, RTLIB::__modhi3}, // __modhi3
        {RTLIB::SREM_I32, RTLIB::__modsi3}, // __modsi3
        {RTLIB::SREM_I64, RTLIB::__moddi3}, // __moddi3
        {RTLIB::SREM_I128, RTLIB::__modti3}, // __modti3
        {RTLIB::SRL_I16, RTLIB::__lshrhi3}, // __lshrhi3
        {RTLIB::SRL_I32, RTLIB::__lshrsi3}, // __lshrsi3
        {RTLIB::SRL_I64, RTLIB::__lshrdi3}, // __lshrdi3
        {RTLIB::STACKPROTECTOR_CHECK_FAIL, RTLIB::__stack_chk_fail}, // __stack_chk_fail
        {RTLIB::SUB_F32, RTLIB::__subsf3}, // __subsf3
        {RTLIB::SUB_F64, RTLIB::__subdf3}, // __subdf3
        {RTLIB::SUB_F128, RTLIB::__subtf3}, // __subtf3
        {RTLIB::SYNC_FETCH_AND_ADD_1, RTLIB::__sync_fetch_and_add_1}, // __sync_fetch_and_add_1
        {RTLIB::SYNC_FETCH_AND_ADD_2, RTLIB::__sync_fetch_and_add_2}, // __sync_fetch_and_add_2
        {RTLIB::SYNC_FETCH_AND_ADD_4, RTLIB::__sync_fetch_and_add_4}, // __sync_fetch_and_add_4
        {RTLIB::SYNC_FETCH_AND_ADD_8, RTLIB::__sync_fetch_and_add_8}, // __sync_fetch_and_add_8
        {RTLIB::SYNC_FETCH_AND_ADD_16, RTLIB::__sync_fetch_and_add_16}, // __sync_fetch_and_add_16
        {RTLIB::SYNC_FETCH_AND_AND_1, RTLIB::__sync_fetch_and_and_1}, // __sync_fetch_and_and_1
        {RTLIB::SYNC_FETCH_AND_AND_2, RTLIB::__sync_fetch_and_and_2}, // __sync_fetch_and_and_2
        {RTLIB::SYNC_FETCH_AND_AND_4, RTLIB::__sync_fetch_and_and_4}, // __sync_fetch_and_and_4
        {RTLIB::SYNC_FETCH_AND_AND_8, RTLIB::__sync_fetch_and_and_8}, // __sync_fetch_and_and_8
        {RTLIB::SYNC_FETCH_AND_AND_16, RTLIB::__sync_fetch_and_and_16}, // __sync_fetch_and_and_16
        {RTLIB::SYNC_FETCH_AND_MAX_1, RTLIB::__sync_fetch_and_max_1}, // __sync_fetch_and_max_1
        {RTLIB::SYNC_FETCH_AND_MAX_2, RTLIB::__sync_fetch_and_max_2}, // __sync_fetch_and_max_2
        {RTLIB::SYNC_FETCH_AND_MAX_4, RTLIB::__sync_fetch_and_max_4}, // __sync_fetch_and_max_4
        {RTLIB::SYNC_FETCH_AND_MAX_8, RTLIB::__sync_fetch_and_max_8}, // __sync_fetch_and_max_8
        {RTLIB::SYNC_FETCH_AND_MAX_16, RTLIB::__sync_fetch_and_max_16}, // __sync_fetch_and_max_16
        {RTLIB::SYNC_FETCH_AND_MIN_1, RTLIB::__sync_fetch_and_min_1}, // __sync_fetch_and_min_1
        {RTLIB::SYNC_FETCH_AND_MIN_2, RTLIB::__sync_fetch_and_min_2}, // __sync_fetch_and_min_2
        {RTLIB::SYNC_FETCH_AND_MIN_4, RTLIB::__sync_fetch_and_min_4}, // __sync_fetch_and_min_4
        {RTLIB::SYNC_FETCH_AND_MIN_8, RTLIB::__sync_fetch_and_min_8}, // __sync_fetch_and_min_8
        {RTLIB::SYNC_FETCH_AND_MIN_16, RTLIB::__sync_fetch_and_min_16}, // __sync_fetch_and_min_16
        {RTLIB::SYNC_FETCH_AND_NAND_1, RTLIB::__sync_fetch_and_nand_1}, // __sync_fetch_and_nand_1
        {RTLIB::SYNC_FETCH_AND_NAND_2, RTLIB::__sync_fetch_and_nand_2}, // __sync_fetch_and_nand_2
        {RTLIB::SYNC_FETCH_AND_NAND_4, RTLIB::__sync_fetch_and_nand_4}, // __sync_fetch_and_nand_4
        {RTLIB::SYNC_FETCH_AND_NAND_8, RTLIB::__sync_fetch_and_nand_8}, // __sync_fetch_and_nand_8
        {RTLIB::SYNC_FETCH_AND_NAND_16, RTLIB::__sync_fetch_and_nand_16}, // __sync_fetch_and_nand_16
        {RTLIB::SYNC_FETCH_AND_OR_1, RTLIB::__sync_fetch_and_or_1}, // __sync_fetch_and_or_1
        {RTLIB::SYNC_FETCH_AND_OR_2, RTLIB::__sync_fetch_and_or_2}, // __sync_fetch_and_or_2
        {RTLIB::SYNC_FETCH_AND_OR_4, RTLIB::__sync_fetch_and_or_4}, // __sync_fetch_and_or_4
        {RTLIB::SYNC_FETCH_AND_OR_8, RTLIB::__sync_fetch_and_or_8}, // __sync_fetch_and_or_8
        {RTLIB::SYNC_FETCH_AND_OR_16, RTLIB::__sync_fetch_and_or_16}, // __sync_fetch_and_or_16
        {RTLIB::SYNC_FETCH_AND_SUB_1, RTLIB::__sync_fetch_and_sub_1}, // __sync_fetch_and_sub_1
        {RTLIB::SYNC_FETCH_AND_SUB_2, RTLIB::__sync_fetch_and_sub_2}, // __sync_fetch_and_sub_2
        {RTLIB::SYNC_FETCH_AND_SUB_4, RTLIB::__sync_fetch_and_sub_4}, // __sync_fetch_and_sub_4
        {RTLIB::SYNC_FETCH_AND_SUB_8, RTLIB::__sync_fetch_and_sub_8}, // __sync_fetch_and_sub_8
        {RTLIB::SYNC_FETCH_AND_SUB_16, RTLIB::__sync_fetch_and_sub_16}, // __sync_fetch_and_sub_16
        {RTLIB::SYNC_FETCH_AND_UMAX_1, RTLIB::__sync_fetch_and_umax_1}, // __sync_fetch_and_umax_1
        {RTLIB::SYNC_FETCH_AND_UMAX_2, RTLIB::__sync_fetch_and_umax_2}, // __sync_fetch_and_umax_2
        {RTLIB::SYNC_FETCH_AND_UMAX_4, RTLIB::__sync_fetch_and_umax_4}, // __sync_fetch_and_umax_4
        {RTLIB::SYNC_FETCH_AND_UMAX_8, RTLIB::__sync_fetch_and_umax_8}, // __sync_fetch_and_umax_8
        {RTLIB::SYNC_FETCH_AND_UMAX_16, RTLIB::__sync_fetch_and_umax_16}, // __sync_fetch_and_umax_16
        {RTLIB::SYNC_FETCH_AND_UMIN_1, RTLIB::__sync_fetch_and_umin_1}, // __sync_fetch_and_umin_1
        {RTLIB::SYNC_FETCH_AND_UMIN_2, RTLIB::__sync_fetch_and_umin_2}, // __sync_fetch_and_umin_2
        {RTLIB::SYNC_FETCH_AND_UMIN_4, RTLIB::__sync_fetch_and_umin_4}, // __sync_fetch_and_umin_4
        {RTLIB::SYNC_FETCH_AND_UMIN_8, RTLIB::__sync_fetch_and_umin_8}, // __sync_fetch_and_umin_8
        {RTLIB::SYNC_FETCH_AND_UMIN_16, RTLIB::__sync_fetch_and_umin_16}, // __sync_fetch_and_umin_16
        {RTLIB::SYNC_FETCH_AND_XOR_1, RTLIB::__sync_fetch_and_xor_1}, // __sync_fetch_and_xor_1
        {RTLIB::SYNC_FETCH_AND_XOR_2, RTLIB::__sync_fetch_and_xor_2}, // __sync_fetch_and_xor_2
        {RTLIB::SYNC_FETCH_AND_XOR_4, RTLIB::__sync_fetch_and_xor_4}, // __sync_fetch_and_xor_4
        {RTLIB::SYNC_FETCH_AND_XOR_8, RTLIB::__sync_fetch_and_xor_8}, // __sync_fetch_and_xor_8
        {RTLIB::SYNC_FETCH_AND_XOR_16, RTLIB::__sync_fetch_and_xor_16}, // __sync_fetch_and_xor_16
        {RTLIB::SYNC_LOCK_TEST_AND_SET_1, RTLIB::__sync_lock_test_and_set_1}, // __sync_lock_test_and_set_1
        {RTLIB::SYNC_LOCK_TEST_AND_SET_2, RTLIB::__sync_lock_test_and_set_2}, // __sync_lock_test_and_set_2
        {RTLIB::SYNC_LOCK_TEST_AND_SET_4, RTLIB::__sync_lock_test_and_set_4}, // __sync_lock_test_and_set_4
        {RTLIB::SYNC_LOCK_TEST_AND_SET_8, RTLIB::__sync_lock_test_and_set_8}, // __sync_lock_test_and_set_8
        {RTLIB::SYNC_LOCK_TEST_AND_SET_16, RTLIB::__sync_lock_test_and_set_16}, // __sync_lock_test_and_set_16
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_1, RTLIB::__sync_val_compare_and_swap_1}, // __sync_val_compare_and_swap_1
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_2, RTLIB::__sync_val_compare_and_swap_2}, // __sync_val_compare_and_swap_2
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_4, RTLIB::__sync_val_compare_and_swap_4}, // __sync_val_compare_and_swap_4
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_8, RTLIB::__sync_val_compare_and_swap_8}, // __sync_val_compare_and_swap_8
        {RTLIB::SYNC_VAL_COMPARE_AND_SWAP_16, RTLIB::__sync_val_compare_and_swap_16}, // __sync_val_compare_and_swap_16
        {RTLIB::TANH_F32, RTLIB::tanhf}, // tanhf
        {RTLIB::TANH_F64, RTLIB::tanh}, // tanh
        {RTLIB::TANH_F128, RTLIB::tanh_f128}, // tanhl
        {RTLIB::TAN_F32, RTLIB::tanf}, // tanf
        {RTLIB::TAN_F64, RTLIB::tan}, // tan
        {RTLIB::TAN_F128, RTLIB::tan_f128}, // tanl
        {RTLIB::TRUNC_F32, RTLIB::truncf}, // truncf
        {RTLIB::TRUNC_F64, RTLIB::trunc}, // trunc
        {RTLIB::TRUNC_F128, RTLIB::trunc_f128}, // truncl
        {RTLIB::UDIV_I8, RTLIB::__udivqi3}, // __udivqi3
        {RTLIB::UDIV_I16, RTLIB::__udivhi3}, // __udivhi3
        {RTLIB::UDIV_I32, RTLIB::__udivsi3}, // __udivsi3
        {RTLIB::UDIV_I64, RTLIB::__udivdi3}, // __udivdi3
        {RTLIB::UDIV_I128, RTLIB::__udivti3}, // __udivti3
        {RTLIB::UINTTOFP_I32_F16, RTLIB::__floatunsihf}, // __floatunsihf
        {RTLIB::UINTTOFP_I32_F32, RTLIB::__floatunsisf}, // __floatunsisf
        {RTLIB::UINTTOFP_I32_F64, RTLIB::__floatunsidf}, // __floatunsidf
        {RTLIB::UINTTOFP_I32_F128, RTLIB::__floatunsitf}, // __floatunsitf
        {RTLIB::UINTTOFP_I64_BF16, RTLIB::__floatundibf}, // __floatundibf
        {RTLIB::UINTTOFP_I64_F16, RTLIB::__floatundihf}, // __floatundihf
        {RTLIB::UINTTOFP_I64_F32, RTLIB::__floatundisf}, // __floatundisf
        {RTLIB::UINTTOFP_I64_F64, RTLIB::__floatundidf}, // __floatundidf
        {RTLIB::UINTTOFP_I64_F128, RTLIB::__floatunditf_f128}, // __floatunditf
        {RTLIB::UINTTOFP_I128_F16, RTLIB::__floatuntihf}, // __floatuntihf
        {RTLIB::UINTTOFP_I128_F32, RTLIB::__floatuntisf}, // __floatuntisf
        {RTLIB::UINTTOFP_I128_F64, RTLIB::__floatuntidf}, // __floatuntidf
        {RTLIB::UINTTOFP_I128_F128, RTLIB::__floatuntitf_f128}, // __floatuntitf
        {RTLIB::UNE_F32, RTLIB::__nesf2}, // __nesf2
        {RTLIB::UNE_F64, RTLIB::__nedf2}, // __nedf2
        {RTLIB::UNE_F128, RTLIB::__netf2}, // __netf2
        {RTLIB::UNWIND_RESUME, RTLIB::_Unwind_Resume}, // _Unwind_Resume
        {RTLIB::UO_F32, RTLIB::__unordsf2}, // __unordsf2
        {RTLIB::UO_F64, RTLIB::__unorddf2}, // __unorddf2
        {RTLIB::UO_F128, RTLIB::__unordtf2}, // __unordtf2
        {RTLIB::UREM_I8, RTLIB::__umodqi3}, // __umodqi3
        {RTLIB::UREM_I16, RTLIB::__umodhi3}, // __umodhi3
        {RTLIB::UREM_I32, RTLIB::__umodsi3}, // __umodsi3
        {RTLIB::UREM_I64, RTLIB::__umoddi3}, // __umoddi3
        {RTLIB::UREM_I128, RTLIB::__umodti3}, // __umodti3
    };

    for (const auto [Func, Impl] : LibraryCalls) {
      setLibcallImpl(Func, Impl);
    }

    return;
  }
  initDefaultLibCallImpls();
}

#endif

