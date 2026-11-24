#ifdef GET_ATTR_NAMES
#undef GET_ATTR_NAMES
#ifndef ATTRIBUTE_ALL
#define ATTRIBUTE_ALL(FIRST, SECOND)
#endif

#ifndef ATTRIBUTE_ENUM
#define ATTRIBUTE_ENUM(FIRST, SECOND) ATTRIBUTE_ALL(FIRST, SECOND)
#endif

ATTRIBUTE_ENUM(AllocAlign,allocalign)
ATTRIBUTE_ENUM(AllocatedPointer,allocptr)
ATTRIBUTE_ENUM(AlwaysInline,alwaysinline)
ATTRIBUTE_ENUM(Builtin,builtin)
ATTRIBUTE_ENUM(Cold,cold)
ATTRIBUTE_ENUM(Convergent,convergent)
ATTRIBUTE_ENUM(CoroDestroyOnlyWhenComplete,coro_only_destroy_when_complete)
ATTRIBUTE_ENUM(CoroElideSafe,coro_elide_safe)
ATTRIBUTE_ENUM(DeadOnUnwind,dead_on_unwind)
ATTRIBUTE_ENUM(DisableSanitizerInstrumentation,disable_sanitizer_instrumentation)
ATTRIBUTE_ENUM(Flatten,flatten)
ATTRIBUTE_ENUM(FnRetThunkExtern,fn_ret_thunk_extern)
ATTRIBUTE_ENUM(Hot,hot)
ATTRIBUTE_ENUM(HybridPatchable,hybrid_patchable)
ATTRIBUTE_ENUM(ImmArg,immarg)
ATTRIBUTE_ENUM(InReg,inreg)
ATTRIBUTE_ENUM(InlineHint,inlinehint)
ATTRIBUTE_ENUM(JumpTable,jumptable)
ATTRIBUTE_ENUM(MinSize,minsize)
ATTRIBUTE_ENUM(MustProgress,mustprogress)
ATTRIBUTE_ENUM(Naked,naked)
ATTRIBUTE_ENUM(Nest,nest)
ATTRIBUTE_ENUM(NoAlias,noalias)
ATTRIBUTE_ENUM(NoBuiltin,nobuiltin)
ATTRIBUTE_ENUM(NoCallback,nocallback)
ATTRIBUTE_ENUM(NoCfCheck,nocf_check)
ATTRIBUTE_ENUM(NoCreateUndefOrPoison,nocreateundeforpoison)
ATTRIBUTE_ENUM(NoDivergenceSource,nodivergencesource)
ATTRIBUTE_ENUM(NoDuplicate,noduplicate)
ATTRIBUTE_ENUM(NoExt,noext)
ATTRIBUTE_ENUM(NoFree,nofree)
ATTRIBUTE_ENUM(NoIPA,noipa)
ATTRIBUTE_ENUM(NoImplicitFloat,noimplicitfloat)
ATTRIBUTE_ENUM(NoInline,noinline)
ATTRIBUTE_ENUM(NoMerge,nomerge)
ATTRIBUTE_ENUM(NoOutline,nooutline)
ATTRIBUTE_ENUM(NoProfile,noprofile)
ATTRIBUTE_ENUM(NoRecurse,norecurse)
ATTRIBUTE_ENUM(NoRedZone,noredzone)
ATTRIBUTE_ENUM(NoReturn,noreturn)
ATTRIBUTE_ENUM(NoSanitizeBounds,nosanitize_bounds)
ATTRIBUTE_ENUM(NoSanitizeCoverage,nosanitize_coverage)
ATTRIBUTE_ENUM(NoSync,nosync)
ATTRIBUTE_ENUM(NoUndef,noundef)
ATTRIBUTE_ENUM(NoUnwind,nounwind)
ATTRIBUTE_ENUM(NonLazyBind,nonlazybind)
ATTRIBUTE_ENUM(NonNull,nonnull)
ATTRIBUTE_ENUM(NullPointerIsValid,null_pointer_is_valid)
ATTRIBUTE_ENUM(OptForFuzzing,optforfuzzing)
ATTRIBUTE_ENUM(OptimizeForDebugging,optdebug)
ATTRIBUTE_ENUM(OptimizeForSize,optsize)
ATTRIBUTE_ENUM(OptimizeNone,optnone)
ATTRIBUTE_ENUM(PresplitCoroutine,presplitcoroutine)
ATTRIBUTE_ENUM(ReadNone,readnone)
ATTRIBUTE_ENUM(ReadOnly,readonly)
ATTRIBUTE_ENUM(Returned,returned)
ATTRIBUTE_ENUM(ReturnsTwice,returns_twice)
ATTRIBUTE_ENUM(SExt,signext)
ATTRIBUTE_ENUM(SafeStack,safestack)
ATTRIBUTE_ENUM(SanitizeAddress,sanitize_address)
ATTRIBUTE_ENUM(SanitizeAllocToken,sanitize_alloc_token)
ATTRIBUTE_ENUM(SanitizeHWAddress,sanitize_hwaddress)
ATTRIBUTE_ENUM(SanitizeMemTag,sanitize_memtag)
ATTRIBUTE_ENUM(SanitizeMemory,sanitize_memory)
ATTRIBUTE_ENUM(SanitizeNumericalStability,sanitize_numerical_stability)
ATTRIBUTE_ENUM(SanitizeRealtime,sanitize_realtime)
ATTRIBUTE_ENUM(SanitizeRealtimeBlocking,sanitize_realtime_blocking)
ATTRIBUTE_ENUM(SanitizeThread,sanitize_thread)
ATTRIBUTE_ENUM(SanitizeType,sanitize_type)
ATTRIBUTE_ENUM(ShadowCallStack,shadowcallstack)
ATTRIBUTE_ENUM(SkipProfile,skipprofile)
ATTRIBUTE_ENUM(Speculatable,speculatable)
ATTRIBUTE_ENUM(SpeculativeLoadHardening,speculative_load_hardening)
ATTRIBUTE_ENUM(StackProtect,ssp)
ATTRIBUTE_ENUM(StackProtectReq,sspreq)
ATTRIBUTE_ENUM(StackProtectStrong,sspstrong)
ATTRIBUTE_ENUM(StrictFP,strictfp)
ATTRIBUTE_ENUM(SwiftAsync,swiftasync)
ATTRIBUTE_ENUM(SwiftError,swifterror)
ATTRIBUTE_ENUM(SwiftSelf,swiftself)
ATTRIBUTE_ENUM(WillReturn,willreturn)
ATTRIBUTE_ENUM(Writable,writable)
ATTRIBUTE_ENUM(WriteOnly,writeonly)
ATTRIBUTE_ENUM(ZExt,zeroext)
ATTRIBUTE_ENUM(ByRef,byref)
ATTRIBUTE_ENUM(ByVal,byval)
ATTRIBUTE_ENUM(ElementType,elementtype)
ATTRIBUTE_ENUM(InAlloca,inalloca)
ATTRIBUTE_ENUM(Preallocated,preallocated)
ATTRIBUTE_ENUM(StructRet,sret)
ATTRIBUTE_ENUM(Alignment,align)
ATTRIBUTE_ENUM(AllocKind,allockind)
ATTRIBUTE_ENUM(AllocSize,allocsize)
ATTRIBUTE_ENUM(Captures,captures)
ATTRIBUTE_ENUM(DeadOnReturn,dead_on_return)
ATTRIBUTE_ENUM(DenormalFPEnv,denormal_fpenv)
ATTRIBUTE_ENUM(Dereferenceable,dereferenceable)
ATTRIBUTE_ENUM(DereferenceableOrNull,dereferenceable_or_null)
ATTRIBUTE_ENUM(Memory,memory)
ATTRIBUTE_ENUM(NoFPClass,nofpclass)
ATTRIBUTE_ENUM(StackAlignment,alignstack)
ATTRIBUTE_ENUM(UWTable,uwtable)
ATTRIBUTE_ENUM(VScaleRange,vscale_range)
ATTRIBUTE_ENUM(Range,range)
ATTRIBUTE_ENUM(Initializes,initializes)
#undef ATTRIBUTE_ENUM

#ifndef ATTRIBUTE_STRBOOL
#define ATTRIBUTE_STRBOOL(FIRST, SECOND) ATTRIBUTE_ALL(FIRST, SECOND)
#endif

ATTRIBUTE_STRBOOL(AllowDirectAccessInHotPatchFunction,allow_direct_access_in_hot_patch_function)
ATTRIBUTE_STRBOOL(LessPreciseFPMAD,less-precise-fpmad)
ATTRIBUTE_STRBOOL(LoaderReplaceable,loader-replaceable)
ATTRIBUTE_STRBOOL(MarkedForWindowsSecureHotPatching,marked_for_windows_hot_patching)
ATTRIBUTE_STRBOOL(NoInlineLineTables,no-inline-line-tables)
ATTRIBUTE_STRBOOL(NoJumpTables,no-jump-tables)
ATTRIBUTE_STRBOOL(NoSignedZerosFPMath,no-signed-zeros-fp-math)
ATTRIBUTE_STRBOOL(ProfileSampleAccurate,profile-sample-accurate)
ATTRIBUTE_STRBOOL(UseSampleProfile,use-sample-profile)
#undef ATTRIBUTE_STRBOOL

#ifndef ATTRIBUTE_COMPLEXSTR
#define ATTRIBUTE_COMPLEXSTR(FIRST, SECOND) ATTRIBUTE_ALL(FIRST, SECOND)
#endif

#undef ATTRIBUTE_COMPLEXSTR

#undef ATTRIBUTE_ALL
#endif

#ifdef GET_ATTR_ENUM
#undef GET_ATTR_ENUM
FirstEnumAttr = 1,
AllocAlign = 1,
AllocatedPointer = 2,
AlwaysInline = 3,
Builtin = 4,
Cold = 5,
Convergent = 6,
CoroDestroyOnlyWhenComplete = 7,
CoroElideSafe = 8,
DeadOnUnwind = 9,
DisableSanitizerInstrumentation = 10,
Flatten = 11,
FnRetThunkExtern = 12,
Hot = 13,
HybridPatchable = 14,
ImmArg = 15,
InReg = 16,
InlineHint = 17,
JumpTable = 18,
MinSize = 19,
MustProgress = 20,
Naked = 21,
Nest = 22,
NoAlias = 23,
NoBuiltin = 24,
NoCallback = 25,
NoCfCheck = 26,
NoCreateUndefOrPoison = 27,
NoDivergenceSource = 28,
NoDuplicate = 29,
NoExt = 30,
NoFree = 31,
NoIPA = 32,
NoImplicitFloat = 33,
NoInline = 34,
NoMerge = 35,
NoOutline = 36,
NoProfile = 37,
NoRecurse = 38,
NoRedZone = 39,
NoReturn = 40,
NoSanitizeBounds = 41,
NoSanitizeCoverage = 42,
NoSync = 43,
NoUndef = 44,
NoUnwind = 45,
NonLazyBind = 46,
NonNull = 47,
NullPointerIsValid = 48,
OptForFuzzing = 49,
OptimizeForDebugging = 50,
OptimizeForSize = 51,
OptimizeNone = 52,
PresplitCoroutine = 53,
ReadNone = 54,
ReadOnly = 55,
Returned = 56,
ReturnsTwice = 57,
SExt = 58,
SafeStack = 59,
SanitizeAddress = 60,
SanitizeAllocToken = 61,
SanitizeHWAddress = 62,
SanitizeMemTag = 63,
SanitizeMemory = 64,
SanitizeNumericalStability = 65,
SanitizeRealtime = 66,
SanitizeRealtimeBlocking = 67,
SanitizeThread = 68,
SanitizeType = 69,
ShadowCallStack = 70,
SkipProfile = 71,
Speculatable = 72,
SpeculativeLoadHardening = 73,
StackProtect = 74,
StackProtectReq = 75,
StackProtectStrong = 76,
StrictFP = 77,
SwiftAsync = 78,
SwiftError = 79,
SwiftSelf = 80,
WillReturn = 81,
Writable = 82,
WriteOnly = 83,
ZExt = 84,
LastEnumAttr = 84,
FirstTypeAttr = 85,
ByRef = 85,
ByVal = 86,
ElementType = 87,
InAlloca = 88,
Preallocated = 89,
StructRet = 90,
LastTypeAttr = 90,
FirstIntAttr = 91,
Alignment = 91,
AllocKind = 92,
AllocSize = 93,
Captures = 94,
DeadOnReturn = 95,
DenormalFPEnv = 96,
Dereferenceable = 97,
DereferenceableOrNull = 98,
Memory = 99,
NoFPClass = 100,
StackAlignment = 101,
UWTable = 102,
VScaleRange = 103,
LastIntAttr = 103,
FirstConstantRangeAttr = 104,
Range = 104,
LastConstantRangeAttr = 104,
FirstConstantRangeListAttr = 105,
Initializes = 105,
LastConstantRangeListAttr = 105,
#endif

#ifdef GET_ATTR_COMPAT_FUNC
#undef GET_ATTR_COMPAT_FUNC
static inline bool hasCompatibleFnAttrs(const Function &Caller,
                                        const Function &Callee) {
  bool Ret = true;

  Ret &= isEqual<SanitizeAddressAttr>(Caller, Callee);
  Ret &= isEqual<SanitizeThreadAttr>(Caller, Callee);
  Ret &= isEqual<SanitizeTypeAttr>(Caller, Callee);
  Ret &= isEqual<SanitizeMemoryAttr>(Caller, Callee);
  Ret &= isEqual<SanitizeHWAddressAttr>(Caller, Callee);
  Ret &= isEqual<SanitizeMemTagAttr>(Caller, Callee);
  Ret &= isEqual<SanitizeNumericalStabilityAttr>(Caller, Callee);
  Ret &= isEqual<SanitizeRealtimeAttr>(Caller, Callee);
  Ret &= isEqual<SanitizeRealtimeBlockingAttr>(Caller, Callee);
  Ret &= isEqual<SafeStackAttr>(Caller, Callee);
  Ret &= isEqual<ShadowCallStackAttr>(Caller, Callee);
  Ret &= isEqual<UseSampleProfileAttr>(Caller, Callee);
  Ret &= isEqual<NoProfileAttr>(Caller, Callee);
  Ret &= checkDenormMode(Caller, Callee);
  Ret &= checkStrictFP(Caller, Callee);
  Ret &= isEqual(Caller, Callee, "sign-return-address");
  Ret &= isEqual(Caller, Callee, "sign-return-address-key");
  Ret &= isEqual(Caller, Callee, "branch-protection-pauth-lr");

  return Ret;
}

static inline void mergeFnAttrs(Function &Caller,
                                const Function &Callee) {
  setAND<LessPreciseFPMADAttr>(Caller, Callee);
  setAND<NoSignedZerosFPMathAttr>(Caller, Callee);
  setOR<NoImplicitFloatAttr>(Caller, Callee);
  setOR<NoJumpTablesAttr>(Caller, Callee);
  setOR<ProfileSampleAccurateAttr>(Caller, Callee);
  setOR<SpeculativeLoadHardeningAttr>(Caller, Callee);
  adjustCallerSSPLevel(Caller, Callee);
  adjustCallerStackProbes(Caller, Callee);
  adjustCallerStackProbeSize(Caller, Callee);
  adjustMinLegalVectorWidth(Caller, Callee);
  adjustNullPointerValidAttr(Caller, Callee);
  setAND<MustProgressAttr>(Caller, Callee);
}

#endif
#ifdef GET_ATTR_PROP_TABLE
#undef GET_ATTR_PROP_TABLE
static const uint8_t AttrPropTable[] = {
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::ParamAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectAnd,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::RetAttr | AttributeProperty::ParamAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::ParamAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr | AttributeProperty::IntersectCustom,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectCustom,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectMin,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr | AttributeProperty::IntersectMin,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr | AttributeProperty::IntersectMin,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectCustom,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr | AttributeProperty::IntersectCustom,
0 | AttributeProperty::FnAttr | AttributeProperty::ParamAttr | AttributeProperty::RetAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::FnAttr | AttributeProperty::IntersectPreserve,
0 | AttributeProperty::ParamAttr | AttributeProperty::RetAttr | AttributeProperty::IntersectCustom,
0 | AttributeProperty::ParamAttr | AttributeProperty::IntersectPreserve,
};
#endif
