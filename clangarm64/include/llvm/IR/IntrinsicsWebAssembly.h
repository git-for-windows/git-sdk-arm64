/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Intrinsic Function Source Fragment                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifndef LLVM_IR_INTRINSIC_WASM_ENUMS_H
#define LLVM_IR_INTRINSIC_WASM_ENUMS_H

namespace llvm::Intrinsic {

enum WASMIntrinsics : unsigned {
// Enum values for intrinsics.
    wasm_alltrue = 14610,                              // llvm.wasm.alltrue (IntrinsicsWebAssembly.td:232)
    wasm_anytrue,                              // llvm.wasm.anytrue (IntrinsicsWebAssembly.td:228)
    wasm_avgr_unsigned,                        // llvm.wasm.avgr.unsigned (IntrinsicsWebAssembly.td:220)
    wasm_bitmask,                              // llvm.wasm.bitmask (IntrinsicsWebAssembly.td:236)
    wasm_bitselect,                            // llvm.wasm.bitselect (IntrinsicsWebAssembly.td:224)
    wasm_catch,                                // llvm.wasm.catch (IntrinsicsWebAssembly.td:158)
    wasm_dot,                                  // llvm.wasm.dot (IntrinsicsWebAssembly.td:240)
    wasm_extadd_pairwise_signed,               // llvm.wasm.extadd.pairwise.signed (IntrinsicsWebAssembly.td:268)
    wasm_extadd_pairwise_unsigned,             // llvm.wasm.extadd.pairwise.unsigned (IntrinsicsWebAssembly.td:272)
    wasm_extract_lane_f16x8,                   // llvm.wasm.extract.lane.f16x8 (IntrinsicsWebAssembly.td:369)
    wasm_funcref_to_ptr,                       // llvm.wasm.funcref.to_ptr (IntrinsicsWebAssembly.td:53)
    wasm_get_ehselector,                       // llvm.wasm.get.ehselector (IntrinsicsWebAssembly.td:151)
    wasm_get_exception,                        // llvm.wasm.get.exception (IntrinsicsWebAssembly.td:149)
    wasm_landingpad_index,                     // llvm.wasm.landingpad.index (IntrinsicsWebAssembly.td:165)
    wasm_loadf16_f32,                          // llvm.wasm.loadf16.f32 (IntrinsicsWebAssembly.td:355)
    wasm_lsda,                                 // llvm.wasm.lsda (IntrinsicsWebAssembly.td:170)
    wasm_memory_atomic_notify,                 // llvm.wasm.memory.atomic.notify (IntrinsicsWebAssembly.td:190)
    wasm_memory_atomic_wait32,                 // llvm.wasm.memory.atomic.wait32 (IntrinsicsWebAssembly.td:178)
    wasm_memory_atomic_wait64,                 // llvm.wasm.memory.atomic.wait64 (IntrinsicsWebAssembly.td:184)
    wasm_memory_grow,                          // llvm.wasm.memory.grow (IntrinsicsWebAssembly.td:24)
    wasm_memory_size,                          // llvm.wasm.memory.size (IntrinsicsWebAssembly.td:22)
    wasm_narrow_signed,                        // llvm.wasm.narrow.signed (IntrinsicsWebAssembly.td:245)
    wasm_narrow_unsigned,                      // llvm.wasm.narrow.unsigned (IntrinsicsWebAssembly.td:249)
    wasm_pmax,                                 // llvm.wasm.pmax (IntrinsicsWebAssembly.td:263)
    wasm_pmin,                                 // llvm.wasm.pmin (IntrinsicsWebAssembly.td:259)
    wasm_ptr_to_funcref,                       // llvm.wasm.ptr.to_funcref (IntrinsicsWebAssembly.td:57)
    wasm_q15mulr_sat_signed,                   // llvm.wasm.q15mulr.sat.signed (IntrinsicsWebAssembly.td:254)
    wasm_ref_is_null_exn,                      // llvm.wasm.ref.is_null.exn (IntrinsicsWebAssembly.td:42)
    wasm_ref_is_null_extern,                   // llvm.wasm.ref.is_null.extern (IntrinsicsWebAssembly.td:36)
    wasm_ref_is_null_func,                     // llvm.wasm.ref.is_null.func (IntrinsicsWebAssembly.td:39)
    wasm_ref_null_exn,                         // llvm.wasm.ref.null.exn (IntrinsicsWebAssembly.td:34)
    wasm_ref_null_extern,                      // llvm.wasm.ref.null.extern (IntrinsicsWebAssembly.td:30)
    wasm_ref_null_func,                        // llvm.wasm.ref.null.func (IntrinsicsWebAssembly.td:32)
    wasm_ref_test_func,                        // llvm.wasm.ref.test.func (IntrinsicsWebAssembly.td:46)
    wasm_relaxed_dot_bf16x8_add_f32,           // llvm.wasm.relaxed.dot.bf16x8.add.f32 (IntrinsicsWebAssembly.td:344)
    wasm_relaxed_dot_i8x16_i7x16_add_signed,   // llvm.wasm.relaxed.dot.i8x16.i7x16.add.signed (IntrinsicsWebAssembly.td:339)
    wasm_relaxed_dot_i8x16_i7x16_signed,       // llvm.wasm.relaxed.dot.i8x16.i7x16.signed (IntrinsicsWebAssembly.td:334)
    wasm_relaxed_laneselect,                   // llvm.wasm.relaxed.laneselect (IntrinsicsWebAssembly.td:290)
    wasm_relaxed_madd,                         // llvm.wasm.relaxed.madd (IntrinsicsWebAssembly.td:281)
    wasm_relaxed_max,                          // llvm.wasm.relaxed.max (IntrinsicsWebAssembly.td:304)
    wasm_relaxed_min,                          // llvm.wasm.relaxed.min (IntrinsicsWebAssembly.td:300)
    wasm_relaxed_nmadd,                        // llvm.wasm.relaxed.nmadd (IntrinsicsWebAssembly.td:285)
    wasm_relaxed_q15mulr_signed,               // llvm.wasm.relaxed.q15mulr.signed (IntrinsicsWebAssembly.td:329)
    wasm_relaxed_swizzle,                      // llvm.wasm.relaxed.swizzle (IntrinsicsWebAssembly.td:295)
    wasm_relaxed_trunc_signed,                 // llvm.wasm.relaxed.trunc.signed (IntrinsicsWebAssembly.td:309)
    wasm_relaxed_trunc_signed_zero,            // llvm.wasm.relaxed.trunc.signed.zero (IntrinsicsWebAssembly.td:319)
    wasm_relaxed_trunc_unsigned,               // llvm.wasm.relaxed.trunc.unsigned (IntrinsicsWebAssembly.td:314)
    wasm_relaxed_trunc_unsigned_zero,          // llvm.wasm.relaxed.trunc.unsigned.zero (IntrinsicsWebAssembly.td:324)
    wasm_replace_lane_f16x8,                   // llvm.wasm.replace.lane.f16x8 (IntrinsicsWebAssembly.td:373)
    wasm_rethrow,                              // llvm.wasm.rethrow (IntrinsicsWebAssembly.td:145)
    wasm_shuffle,                              // llvm.wasm.shuffle (IntrinsicsWebAssembly.td:204)
    wasm_splat_f16x8,                          // llvm.wasm.splat.f16x8 (IntrinsicsWebAssembly.td:365)
    wasm_storef16_f32,                         // llvm.wasm.storef16.f32 (IntrinsicsWebAssembly.td:360)
    wasm_swizzle,                              // llvm.wasm.swizzle (IntrinsicsWebAssembly.td:200)
    wasm_table_copy,                           // llvm.wasm.table.copy (IntrinsicsWebAssembly.td:87)
    wasm_table_fill_exnref,                    // llvm.wasm.table.fill.exnref (IntrinsicsWebAssembly.td:108)
    wasm_table_fill_externref,                 // llvm.wasm.table.fill.externref (IntrinsicsWebAssembly.td:100)
    wasm_table_fill_funcref,                   // llvm.wasm.table.fill.funcref (IntrinsicsWebAssembly.td:104)
    wasm_table_get_exnref,                     // llvm.wasm.table.get.exnref (IntrinsicsWebAssembly.td:80)
    wasm_table_get_externref,                  // llvm.wasm.table.get.externref (IntrinsicsWebAssembly.td:74)
    wasm_table_get_funcref,                    // llvm.wasm.table.get.funcref (IntrinsicsWebAssembly.td:77)
    wasm_table_grow_exnref,                    // llvm.wasm.table.grow.exnref (IntrinsicsWebAssembly.td:97)
    wasm_table_grow_externref,                 // llvm.wasm.table.grow.externref (IntrinsicsWebAssembly.td:91)
    wasm_table_grow_funcref,                   // llvm.wasm.table.grow.funcref (IntrinsicsWebAssembly.td:94)
    wasm_table_set_exnref,                     // llvm.wasm.table.set.exnref (IntrinsicsWebAssembly.td:70)
    wasm_table_set_externref,                  // llvm.wasm.table.set.externref (IntrinsicsWebAssembly.td:64)
    wasm_table_set_funcref,                    // llvm.wasm.table.set.funcref (IntrinsicsWebAssembly.td:67)
    wasm_table_size,                           // llvm.wasm.table.size (IntrinsicsWebAssembly.td:85)
    wasm_throw,                                // llvm.wasm.throw (IntrinsicsWebAssembly.td:143)
    wasm_tls_align,                            // llvm.wasm.tls.align (IntrinsicsWebAssembly.td:388)
    wasm_tls_base,                             // llvm.wasm.tls.base (IntrinsicsWebAssembly.td:393)
    wasm_tls_size,                             // llvm.wasm.tls.size (IntrinsicsWebAssembly.td:383)
    wasm_trunc_saturate_signed,                // llvm.wasm.trunc.saturate.signed (IntrinsicsWebAssembly.td:129)
    wasm_trunc_saturate_unsigned,              // llvm.wasm.trunc.saturate.unsigned (IntrinsicsWebAssembly.td:132)
    wasm_trunc_signed,                         // llvm.wasm.trunc.signed (IntrinsicsWebAssembly.td:118)
    wasm_trunc_unsigned,                       // llvm.wasm.trunc.unsigned (IntrinsicsWebAssembly.td:121)
}; // enum

} // namespace llvm::Intrinsic

#endif // LLVM_IR_INTRINSIC_WASM_ENUMS_H

