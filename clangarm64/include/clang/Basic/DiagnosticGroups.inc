
#ifdef GET_DIAG_ARRAYS
static const int16_t DiagArrays[] = {
  /* Empty */ -1,
  /* DiagArray1 */ diag::warn_pragma_message, -1,
  /* DiagArray2 */ diag::pp_hash_warning, -1,
  /* DiagArray3 */ diag::warn_cfstring_truncated, -1,
  /* DiagArray5 */ diag::warn_independentclass_attribute, diag::warn_ptr_independentclass_attribute, -1,
  /* DiagArray6 */ diag::warn_nsobject_attribute, -1,
  /* DiagArray8 */ diag::warn_abs_too_small, diag::warn_pointer_abs, diag::warn_unsigned_abs, diag::warn_wrong_absolute_value_type, -1,
  /* DiagArray9 */ diag::warn_abstract_final_class, -1,
  /* DiagArray10 */ diag::warn_abstract_vbase_init_ignored, -1,
  /* DiagArray12 */ diag::warn_taking_address_of_packed_member, -1,
  /* DiagArray13 */ diag::ext_typecheck_addrof_temporary, -1,
  /* DiagArray15 */ diag::warn_not_xl_compatible, diag::warn_pragma_align_not_xl_compatible, -1,
  /* DiagArray16 */ diag::warn_param_mismatched_alignment, -1,
  /* DiagArray18 */ diag::warn_alloca, -1,
  /* DiagArray19 */ diag::warn_alloca_align_alignof, -1,
  /* DiagArray20 */ diag::warn_always_inline_coroutine, -1,
  /* DiagArray21 */ diag::warn_ambiguous_suitable_delete_function_found, -1,
  /* DiagArray22 */ diag::warn_misplaced_ellipsis_vararg, -1,
  /* DiagArray23 */ diag::warn_pp_ambiguous_macro, -1,
  /* DiagArray24 */ diag::ext_nested_name_member_ref_lookup_ambiguous, -1,
  /* DiagArray25 */ diag::ext_ovl_ambiguous_oper_binary_reversed, -1,
  /* DiagArray26 */ diag::warn_incompatible_analyzer_plugin_api, -1,
  /* DiagArray27 */ diag::warn_android_unversioned_fallback, -1,
  /* DiagArray28 */ diag::warn_arith_conv_mixed_anon_enum_types, -1,
  /* DiagArray29 */ diag::ext_abstract_pack_declarator_parens, -1,
  /* DiagArray30 */ diag::warn_apinotes_message, -1,
  /* DiagArray32 */ diag::warn_arc_bridge_cast_nonarc, -1,
  /* DiagArray33 */ diag::warn_arc_possible_repeated_use_of_weak, -1,
  /* DiagArray34 */ diag::warn_arc_object_memaccess, -1,
  /* DiagArray35 */ diag::warn_arc_perform_selector_leaks, -1,
  /* DiagArray36 */ diag::warn_arc_repeated_use_of_weak, -1,
  /* DiagArray37 */ diag::warn_arc_retain_cycle, -1,
  /* DiagArray38 */ diag::warn_arc_literal_assign, diag::warn_arc_retained_assign, diag::warn_arc_retained_property_assign, -1,
  /* DiagArray39 */ diag::warn_argument_invalid_range, -1,
  /* DiagArray40 */ diag::warn_argument_undefined_behaviour, -1,
  /* DiagArray41 */ diag::warn_array_index_exceeds_bounds, diag::warn_array_index_exceeds_max_addressable_bounds, diag::warn_array_index_precedes_bounds, diag::warn_ptr_arith_exceeds_max_addressable_bounds, diag::warn_static_array_too_small, -1,
  /* DiagArray42 */ diag::warn_ptr_arith_exceeds_bounds, diag::warn_ptr_arith_precedes_bounds, -1,
  /* DiagArray43 */ diag::warn_inconsistent_array_form, -1,
  /* DiagArray45 */ diag::warn_asm_mismatched_size_modifier, -1,
  /* DiagArray46 */ diag::warn_not_in_enum_assignment, -1,
  /* DiagArray47 */ diag::warn_assume_side_effects, -1,
  /* DiagArray49 */ diag::warn_atimport_in_framework_header, -1,
  /* DiagArray50 */ diag::warn_atomic_member_access, -1,
  /* DiagArray51 */ diag::warn_atomic_op_misaligned, diag::warn_atomic_op_oversized, -1,
  /* DiagArray52 */ diag::warn_atomic_implicit_seq_cst, -1,
  /* DiagArray53 */ diag::warn_atomic_op_has_invalid_memory_order, -1,
  /* DiagArray55 */ diag::warn_atomic_property_rule, -1,
  /* DiagArray56 */ diag::warn_attribute_packed_for_bitfield, -1,
  /* DiagArray57 */ diag::warn_fe_backend_warning_attr, -1,
  /* DiagArray59 */ diag::ext_c23_auto_non_plain_identifier, -1,
  /* DiagArray60 */ diag::warn_drv_disabling_vptr_no_rtti_default, -1,
  /* DiagArray62 */ diag::ext_auto_storage_class, -1,
  /* DiagArray63 */ diag::warn_auto_var_is_id, -1,
  /* DiagArray64 */ diag::warn_availability_and_unavailable, diag::warn_availability_fuchsia_unavailable_minor, diag::warn_availability_on_static_initializer, diag::warn_availability_swift_unavailable_deprecated_only, diag::warn_availability_unknown_platform, diag::warn_availability_version_ordering, diag::warn_expected_consistent_version_separator, diag::warn_mismatched_availability, diag::warn_mismatched_availability_override, diag::warn_mismatched_availability_override_unavail, -1,
  /* DiagArray65 */ diag::warn_drv_avr_family_linking_stdlibs_not_implemented, diag::warn_drv_avr_libc_not_found, diag::warn_drv_avr_linker_section_addresses_not_implemented, diag::warn_drv_avr_mcu_not_specified, diag::warn_drv_avr_stdlib_not_linked, -1,
  /* DiagArray66 */ diag::warn_fe_backend_plugin, diag::warn_fe_backend_resource_limit, -1,
  /* DiagArray67 */ diag::backslash_newline_space, -1,
  /* DiagArray68 */ diag::warn_bad_function_cast, -1,
  /* DiagArray70 */ diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, -1,
  /* DiagArray71 */ diag::ext_decomp_decl_cond, -1,
  /* DiagArray72 */ diag::ext_bit_int, -1,
  /* DiagArray73 */ diag::warn_impcast_bitfield_precision_constant, -1,
  /* DiagArray74 */ diag::warn_bitfield_too_small_for_enum, diag::warn_signed_bitfield_enum_conversion, diag::warn_unsigned_bitfield_assigned_signed_enum, -1,
  /* DiagArray75 */ diag::warn_bitfield_width_exceeds_type_width, -1,
  /* DiagArray76 */ diag::warn_precedence_bitwise_conditional, -1,
  /* DiagArray77 */ diag::warn_bitwise_instead_of_logical, -1,
  /* DiagArray78 */ diag::warn_bitwise_op_in_bitwise_op, -1,
  /* DiagArray79 */ diag::warn_block_capture_autoreleasing, -1,
  /* DiagArray80 */ diag::warn_impcast_bool_to_null_pointer, -1,
  /* DiagArray82 */ diag::warn_bitwise_negation_bool, -1,
  /* DiagArray83 */ diag::warn_braces_around_init, -1,
  /* DiagArray84 */ diag::warn_incompatible_branch_protection_option, diag::warn_target_unsupported_branch_protection_attribute, diag::warn_unsupported_branch_protection, diag::warn_unsupported_branch_protection_spec, -1,
  /* DiagArray85 */ diag::warn_objc_invalid_bridge, diag::warn_objc_invalid_bridge_to_cf, -1,
  /* DiagArray86 */ diag::warn_assume_aligned_too_great, -1,
  /* DiagArray87 */ diag::ext_pp_redef_builtin_macro, diag::ext_pp_undef_builtin_macro, -1,
  /* DiagArray88 */ diag::warn_builtin_chk_overflow, -1,
  /* DiagArray89 */ diag::warn_implicit_decl_requires_sysheader, -1,
  /* DiagArray90 */ diag::warn_zero_size_struct_union_compat, -1,
  /* DiagArray94 */ diag::ext_old_implicitly_unsigned_long_cxx, diag::warn_auto_storage_class, diag::warn_cxx11_compat_user_defined_literal, diag::warn_cxx11_keyword, diag::warn_cxx11_right_shift_in_template_arg, diag::warn_explicit_instantiation_inline_0x, diag::warn_explicit_instantiation_must_be_global_0x, diag::warn_explicit_instantiation_out_of_scope_0x, diag::warn_explicit_instantiation_unqualified_wrong_namespace_0x, diag::warn_old_implicitly_unsigned_long_cxx, -1,
  /* DiagArray95 */ diag::warn_deprecated_string_literal_conversion, -1,
  /* DiagArray97 */ diag::warn_cxx11_compat_reserved_user_defined_literal, -1,
  /* DiagArray98 */ diag::ext_alias_declaration, diag::ext_array_size_conversion, diag::ext_auto_type_specifier, diag::ext_cxx11_enum_fixed_underlying_type, diag::ext_defaulted_deleted_function, diag::ext_enum_friend, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_conversion_functions, diag::ext_extern_template, diag::ext_for_range, diag::ext_generalized_initializer_lists, diag::ext_nested_name_spec_is_enum, diag::ext_nonclass_type_friend, diag::ext_nonstatic_member_init, diag::ext_override_control_keyword, diag::ext_ref_qualifier, diag::ext_rvalue_reference, diag::ext_scoped_enum, diag::ext_static_data_member_in_union, diag::ext_template_arg_object_internal, diag::ext_template_outside_of_template, diag::ext_template_parameter_default_in_function_template, diag::ext_typename_outside_of_template, diag::ext_unelaborated_friend_type, diag::ext_variadic_templates, diag::warn_ext_cxx11_attributes, -1,
  /* DiagArray99 */ diag::ext_extra_semi_cxx11, -1,
  /* DiagArray100 */ diag::ext_inline_namespace, -1,
  /* DiagArray101 */ diag::ext_cxx11_longlong, -1,
  /* DiagArray102 */ diag::ext_cce_narrowing, diag::ext_init_list_constant_narrowing, diag::ext_init_list_type_narrowing, diag::ext_init_list_variable_narrowing, diag::warn_init_list_constant_narrowing, diag::warn_init_list_type_narrowing, diag::warn_init_list_variable_narrowing, -1,
  /* DiagArray103 */ diag::ext_init_list_constant_narrowing_const_reference, diag::ext_init_list_type_narrowing_const_reference, diag::ext_init_list_variable_narrowing_const_reference, -1,
  /* DiagArray104 */ diag::ext_cxx14_attr, -1,
  /* DiagArray105 */ diag::ext_binary_literal_cxx14, -1,
  /* DiagArray108 */ diag::ext_constexpr_body_invalid_stmt, diag::ext_constexpr_body_multiple_return, diag::ext_constexpr_local_var, diag::ext_constexpr_type_definition, diag::ext_decltype_auto_type_specifier, diag::ext_init_capture, diag::ext_variable_template, -1,
  /* DiagArray109 */ diag::ext_cxx17_attr, -1,
  /* DiagArray111 */ diag::warn_cxx17_compat_exception_spec_in_signature, -1,
  /* DiagArray113 */ diag::ext_auto_new_list_init, diag::ext_constexpr_if, diag::ext_constexpr_on_lambda_cxx17, diag::ext_cxx_static_assert_no_message, diag::ext_decomp_decl, diag::ext_fold_expression, diag::ext_for_range_begin_end_types_differ, diag::ext_hex_literal_invalid, diag::ext_init_statement, diag::ext_inline_variable, diag::ext_multi_using_declaration, diag::ext_nested_namespace_definition, diag::ext_ns_enum_attribute, diag::ext_star_this_lambda_capture_cxx17, diag::ext_template_template_param_typename, diag::ext_using_attribute_ns, diag::ext_using_declaration_pack, -1,
  /* DiagArray118 */ diag::ext_cxx20_attr, -1,
  /* DiagArray119 */ diag::warn_cxx17_compat_implicit_typename, diag::warn_cxx20_compat_aggregate_init_with_ctors, diag::warn_cxx20_compat_consteval, diag::warn_cxx20_compat_constinit, diag::warn_cxx20_compat_explicit_bool, diag::warn_cxx20_compat_spaceship, diag::warn_cxx20_compat_use_of_unaddressable_function, diag::warn_cxx20_compat_utf8_string, diag::warn_cxx20_keyword, -1,
  /* DiagArray121 */ diag::ext_cxx_designated_init, -1,
  /* DiagArray122 */ diag::ext_adl_only_template_id, diag::ext_bitfield_member_init, diag::ext_capture_binding, diag::ext_constexpr_body_invalid_stmt_cxx20, diag::ext_constexpr_ctor_missing_init, diag::ext_constexpr_function_try_block_cxx20, diag::ext_constexpr_local_var_no_init, diag::ext_constexpr_union_ctor_no_init, diag::ext_decomp_decl_spec, diag::ext_defaulted_comparison, diag::ext_equals_this_lambda_capture_cxx20, diag::ext_explicit_bool, diag::ext_for_range_init_stmt, diag::ext_implicit_typename, diag::ext_init_capture_pack, diag::ext_inline_nested_namespace_definition, diag::ext_lambda_template_parameter_list, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_using_decl_scoped_enumerator, diag::ext_using_enum_declaration, diag::warn_cxx17_compat_aggregate_init_paren_list, -1,
  /* DiagArray123 */ diag::ext_defaulted_comparison_constexpr_mismatch, -1,
  /* DiagArray124 */ diag::err_static_lambda, diag::ext_alias_in_init_statement, diag::ext_consteval_if, diag::ext_constexpr_body_invalid_stmt_cxx23, diag::ext_constexpr_static_var, diag::ext_cxx23_pp_directive, diag::ext_cxx23_size_t_suffix, diag::ext_cxx_label_end_of_compound_statement, diag::ext_lambda_missing_parens, diag::ext_operator_overload_static, -1,
  /* DiagArray125 */ diag::ext_decl_attrs_on_lambda, -1,
  /* DiagArray126 */ diag::ext_placeholder_var_definition, -1,
  /* DiagArray137 */ diag::warn_cxx11_compat_binary_literal, -1,
  /* DiagArray139 */ diag::warn_cxx98_compat_alias_declaration, diag::warn_cxx98_compat_alignas, diag::warn_cxx98_compat_alignof, diag::warn_cxx98_compat_attribute, diag::warn_cxx98_compat_auto_type_specifier, diag::warn_cxx98_compat_constexpr, diag::warn_cxx98_compat_ctor_list_init, diag::warn_cxx98_compat_decltype, diag::warn_cxx98_compat_defaulted_deleted_function, diag::warn_cxx98_compat_delegating_ctor, diag::warn_cxx98_compat_empty_scalar_initializer, diag::warn_cxx98_compat_empty_sizeless_initializer, diag::warn_cxx98_compat_enum_fixed_underlying_type, diag::warn_cxx98_compat_enum_friend, diag::warn_cxx98_compat_enum_nested_name_spec, diag::warn_cxx98_compat_explicit_conversion_functions, diag::warn_cxx98_compat_for_range, diag::warn_cxx98_compat_friend_is_member, diag::warn_cxx98_compat_generalized_initializer_lists, diag::warn_cxx98_compat_goto_into_protected_scope, diag::warn_cxx98_compat_indirect_goto_in_protected_scope, diag::warn_cxx98_compat_initializer_list_init, diag::warn_cxx98_compat_inline_namespace, diag::warn_cxx98_compat_lambda, diag::warn_cxx98_compat_less_colon_colon, diag::warn_cxx98_compat_literal_operator, diag::warn_cxx98_compat_literal_ucn_control_character, diag::warn_cxx98_compat_literal_ucn_escape_basic_scs, diag::warn_cxx98_compat_noexcept_decl, diag::warn_cxx98_compat_noexcept_expr, diag::warn_cxx98_compat_non_static_member_use, diag::warn_cxx98_compat_nonclass_type_friend, diag::warn_cxx98_compat_nonstatic_member_init, diag::warn_cxx98_compat_nontrivial_union_or_anon_struct_member, diag::warn_cxx98_compat_nullptr, diag::warn_cxx98_compat_override_control_keyword, diag::warn_cxx98_compat_pass_non_pod_arg_to_vararg, diag::warn_cxx98_compat_raw_string_literal, diag::warn_cxx98_compat_ref_qualifier, diag::warn_cxx98_compat_reference_list_init, diag::warn_cxx98_compat_rvalue_reference, diag::warn_cxx98_compat_scoped_enum, diag::warn_cxx98_compat_sfinae_access_control, diag::warn_cxx98_compat_static_assert, diag::warn_cxx98_compat_static_data_member_in_union, diag::warn_cxx98_compat_switch_into_protected_scope, diag::warn_cxx98_compat_template_arg_extra_parens, diag::warn_cxx98_compat_template_arg_null, diag::warn_cxx98_compat_template_arg_object_internal, diag::warn_cxx98_compat_template_outside_of_template, diag::warn_cxx98_compat_template_parameter_default_in_function_template, diag::warn_cxx98_compat_trailing_return_type, diag::warn_cxx98_compat_two_right_angle_brackets, diag::warn_cxx98_compat_typename_outside_of_template, diag::warn_cxx98_compat_unelaborated_friend_type, diag::warn_cxx98_compat_unicode_literal, diag::warn_cxx98_compat_unicode_type, diag::warn_cxx98_compat_using_decl_constructor, diag::warn_cxx98_compat_variadic_templates, -1,
  /* DiagArray140 */ diag::warn_cxx98_compat_temp_copy, -1,
  /* DiagArray141 */ diag::warn_cxx98_compat_top_level_semi, -1,
  /* DiagArray142 */ diag::warn_cxx98_compat_template_arg_local_type, -1,
  /* DiagArray143 */ diag::warn_cxx98_compat_array_size_conversion, diag::warn_cxx98_compat_cast_fn_obj, diag::warn_cxx98_compat_empty_fnmacro_arg, diag::warn_cxx98_compat_enumerator_list_comma, diag::warn_cxx98_compat_extern_template, diag::warn_cxx98_compat_longlong, diag::warn_cxx98_compat_no_newline_eof, diag::warn_cxx98_compat_pp_line_too_big, diag::warn_cxx98_compat_variadic_macro, -1,
  /* DiagArray144 */ diag::warn_cxx98_compat_template_arg_unnamed_type, -1,
  /* DiagArray145 */ diag::ext_anonymous_union, diag::ext_c11_anonymous_struct, diag::ext_c11_feature, diag::ext_typecheck_compare_complete_incomplete_pointers, -1,
  /* DiagArray146 */ diag::warn_c23_keyword, -1,
  /* DiagArray147 */ diag::ext_c23_bitint_suffix, diag::ext_c23_pp_directive, diag::ext_c_empty_initializer, diag::ext_c_label_end_of_compound_statement, diag::ext_c_label_followed_by_declaration, diag::ext_c_nullptr, diag::ext_c_static_assert_no_message, diag::ext_parameter_name_omitted_c23, diag::warn_ext_c23_attributes, -1,
  /* DiagArray150 */ diag::warn_c99_compat_unicode_id, diag::warn_c99_compat_unicode_literal, diag::warn_c99_keyword, diag::warn_old_implicitly_unsigned_long, -1,
  /* DiagArray151 */ diag::ext_designated_init, diag::ext_designated_init_array, diag::ext_designated_init_brace_elision, diag::ext_designated_init_mixed, diag::ext_designated_init_nested, -1,
  /* DiagArray152 */ diag::ext_aggregate_init_not_constant, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_c99_whitespace_required_after_macro_name, diag::ext_empty_fnmacro_arg, diag::ext_enumerator_list_comma_c, diag::ext_hex_constant_invalid, -1,
  /* DiagArray153 */ diag::warn_call_to_pure_virtual_member_function_from_ctor_dtor, -1,
  /* DiagArray154 */ diag::warn_called_once_gets_called_twice, diag::warn_called_once_never_called, diag::warn_called_once_never_called_when, -1,
  /* DiagArray155 */ diag::warn_cast_align, -1,
  /* DiagArray156 */ diag::warn_cast_calling_conv, -1,
  /* DiagArray157 */ diag::warn_cast_function_type, -1,
  /* DiagArray158 */ diag::warn_cast_function_type_strict, -1,
  /* DiagArray159 */ diag::warn_cast_pointer_from_sel, -1,
  /* DiagArray160 */ diag::warn_cast_qual, diag::warn_cast_qual2, -1,
  /* DiagArray161 */ diag::ext_bad_cxx_cast_qualifiers_away_incoherent, -1,
  /* DiagArray163 */ diag::warn_omp_section_is_char, diag::warn_subscript_is_char, -1,
  /* DiagArray164 */ diag::warn_drv_yc_multiple_inputs_clang_cl, diag::warn_drv_ycyu_different_arg_clang_cl, diag::warn_pp_hdrstop_filename_ignored, diag::warn_pp_macro_def_mismatch_with_pch, -1,
  /* DiagArray165 */ diag::warn_conv_to_base_not_used, diag::warn_conv_to_self_not_used, diag::warn_conv_to_void_not_used, -1,
  /* DiagArray166 */ diag::warn_pass_class_arg_to_vararg, -1,
  /* DiagArray167 */ diag::warn_cmse_nonsecure_union, -1,
  /* DiagArray168 */ diag::warn_comma_operator, -1,
  /* DiagArray169 */ diag::escaped_newline_block_comment_end, diag::ext_line_comment, diag::ext_multi_line_line_comment, diag::warn_nested_block_comment, -1,
  /* DiagArray171 */ diag::ext_typecheck_comparison_of_distinct_pointers, -1,
  /* DiagArray172 */ diag::warn_completion_handler_called_twice, diag::warn_completion_handler_never_called, diag::warn_completion_handler_never_called_when, -1,
  /* DiagArray173 */ diag::ext_complex_component_init, -1,
  /* DiagArray175 */ diag::warn_compound_token_split_by_macro, -1,
  /* DiagArray176 */ diag::warn_compound_token_split_by_whitespace, -1,
  /* DiagArray177 */ diag::ext_typecheck_cond_pointer_integer_mismatch, -1,
  /* DiagArray178 */ diag::warn_maybe_uninit_var, -1,
  /* DiagArray179 */ diag::warn_module_config_macro_undef, -1,
  /* DiagArray180 */ diag::warn_impcast_integer_precision_constant, -1,
  /* DiagArray181 */ diag::warn_is_constant_evaluated_always_true_constexpr, -1,
  /* DiagArray182 */ diag::warn_logical_instead_of_bitwise, -1,
  /* DiagArray183 */ diag::warn_cxx14_compat_constexpr_not_const, -1,
  /* DiagArray184 */ diag::warn_attr_on_unconsumable_class, diag::warn_loop_state_mismatch, diag::warn_param_return_typestate_mismatch, diag::warn_param_typestate_mismatch, diag::warn_return_typestate_for_unconsumable_type, diag::warn_return_typestate_mismatch, diag::warn_use_in_invalid_state, diag::warn_use_of_temp_in_invalid_state, -1,
  /* DiagArray185 */ diag::warn_impcast_complex_scalar, diag::warn_impcast_vector_scalar, diag::warn_opencl_generic_address_space_arg, diag::warn_template_arg_negative, diag::warn_template_arg_too_large, -1,
  /* DiagArray187 */ diag::warn_non_aligned_allocation_function, -1,
  /* DiagArray188 */ diag::warn_coroutine_handle_address_invalid_return_type, -1,
  /* DiagArray189 */ diag::warn_coroutine_promise_unhandled_exception_required_with_exceptions, -1,
  /* DiagArray190 */ diag::warn_unreachable_default, -1,
  /* DiagArray192 */ diag::warn_objc_cdirective_format_string, -1,
  /* DiagArray193 */ diag::warn_ctad_maybe_unsupported, -1,
  /* DiagArray195 */ diag::warn_ctu_incompat_triple, -1,
  /* DiagArray196 */ diag::warn_attribute_argument_n_negative, diag::warn_cuda_attr_lambda_position, diag::warn_kern_is_inline, diag::warn_kern_is_method, diag::warn_pragma_unroll_cuda_value_in_parens, -1,
  /* DiagArray197 */ diag::warn_default_atomic_custom_getter_setter, -1,
  /* DiagArray198 */ diag::ext_cxx11_attr_placement, -1,
  /* DiagArray199 */ diag::warn_dangling_variable, diag::warn_unsupported_lifetime_extension, -1,
  /* DiagArray200 */ diag::warn_dangling_else, -1,
  /* DiagArray201 */ diag::warn_bind_ref_member_to_parameter, diag::warn_dangling_member, diag::warn_init_ptr_member_to_parameter_addr, diag::warn_new_dangling_reference, -1,
  /* DiagArray202 */ diag::warn_dangling_lifetime_pointer, diag::warn_dangling_lifetime_pointer_member, -1,
  /* DiagArray203 */ diag::warn_new_dangling_initializer_list, -1,
  /* DiagArray204 */ diag::warn_drv_darwin_sdk_invalid_settings, -1,
  /* DiagArray205 */ diag::warn_pp_date_time, -1,
  /* DiagArray206 */ diag::warn_dealloc_in_category, -1,
  /* DiagArray207 */ diag::warn_debug_compression_unavailable, -1,
  /* DiagArray208 */ diag::ext_mixed_decls_code, diag::warn_mixed_decls_code, -1,
  /* DiagArray209 */ diag::warn_defaulted_comparison_deleted, diag::warn_defaulted_method_deleted, -1,
  /* DiagArray210 */ diag::warn_drv_delayed_template_parsing_after_cxx20, -1,
  /* DiagArray211 */ diag::warn_delegating_ctor_cycle, -1,
  /* DiagArray212 */ diag::warn_delete_abstract_non_virtual_dtor, -1,
  /* DiagArray213 */ diag::ext_delete_void_ptr_operand, diag::warn_delete_incomplete, -1,
  /* DiagArray214 */ diag::warn_delete_non_virtual_dtor, -1,
  /* DiagArray216 */ diag::ext_delimited_escape_sequence, -1,
  /* DiagArray217 */ diag::warn_deprecated_lax_vec_conv_all, -1,
  /* DiagArray218 */ diag::warn_O4_is_O3, diag::warn_access_decl_deprecated, diag::warn_drv_deprecated_arg, diag::warn_drv_deprecated_custom, diag::warn_drv_treating_input_as_cxx, diag::warn_omp_depend_in_ordered_deprecated, diag::warn_omp_minus_in_reduction_deprecated, diag::warn_option_invalid_ocl_version, diag::warn_vector_long_decl_spec_combination, -1,
  /* DiagArray219 */ diag::warn_deprecated_altivec_src_compat, -1,
  /* DiagArray220 */ diag::warn_arith_conv_mixed_anon_enum_types_cxx20, -1,
  /* DiagArray221 */ diag::warn_depr_array_comparison, -1,
  /* DiagArray222 */ diag::warn_deprecated_noreturn_spelling, diag::warn_type_attribute_deprecated_on_decl, diag::warn_vector_mode_deprecated, -1,
  /* DiagArray223 */ diag::warn_deprecated_builtin, -1,
  /* DiagArray224 */ diag::warn_deprecated_comma_subscript, -1,
  /* DiagArray225 */ diag::warn_deprecated_copy, -1,
  /* DiagArray227 */ diag::warn_deprecated_copy_with_dtor, -1,
  /* DiagArray228 */ diag::warn_deprecated_copy_with_user_provided_copy, -1,
  /* DiagArray229 */ diag::warn_deprecated_copy_with_user_provided_dtor, -1,
  /* DiagArray230 */ diag::warn_deprecated_for_co_await, -1,
  /* DiagArray231 */ diag::warn_atl_uuid_deprecated, diag::warn_cstyle_param, diag::warn_deprecated, diag::warn_deprecated_fwdclass_message, diag::warn_deprecated_message, diag::warn_property_method_deprecated, -1,
  /* DiagArray232 */ diag::warn_exception_spec_deprecated, -1,
  /* DiagArray233 */ diag::warn_comparison_mixed_enum_types_cxx20, -1,
  /* DiagArray234 */ diag::warn_conditional_mixed_enum_types_cxx20, -1,
  /* DiagArray235 */ diag::warn_arith_conv_mixed_enum_types_cxx20, -1,
  /* DiagArray236 */ diag::warn_arith_conv_enum_float_cxx20, -1,
  /* DiagArray237 */ diag::warn_deprecated_def, diag::warn_unavailable_def, -1,
  /* DiagArray238 */ diag::warn_increment_bool, -1,
  /* DiagArray239 */ diag::warn_deprecated_literal_operator_id, -1,
  /* DiagArray240 */ diag::warn_deprecated_module_dot_map, -1,
  /* DiagArray241 */ diag::warn_non_prototype_changes_behavior, diag::warn_strict_uses_without_prototype, -1,
  /* DiagArray242 */ diag::warn_objc_isa_assign, diag::warn_objc_isa_use, -1,
  /* DiagArray243 */ diag::warn_objc_pointer_masking, -1,
  /* DiagArray244 */ diag::warn_objc_pointer_masking_performSelector, -1,
  /* DiagArray245 */ diag::warn_pragma_deprecated_macro_use, -1,
  /* DiagArray246 */ diag::warn_deprecated_redundant_constexpr_static_def, -1,
  /* DiagArray247 */ diag::warn_deprecated_register, -1,
  /* DiagArray248 */ diag::warn_analyzer_deprecated_option, diag::warn_analyzer_deprecated_option_with_alternative, -1,
  /* DiagArray249 */ diag::warn_deprecated_this_capture, -1,
  /* DiagArray250 */ diag::warn_ext_int_deprecated, -1,
  /* DiagArray251 */ diag::warn_deprecated_increment_decrement_volatile, diag::warn_deprecated_simple_assign_volatile, diag::warn_deprecated_volatile_param, diag::warn_deprecated_volatile_return, diag::warn_deprecated_volatile_structured_binding, -1,
  /* DiagArray253 */ diag::warn_direct_ivar_access, -1,
  /* DiagArray254 */ diag::pp_disabled_macro_expansion, -1,
  /* DiagArray257 */ diag::warn_conflicting_param_modifiers, diag::warn_conflicting_ret_type_modifiers, -1,
  /* DiagArray259 */ diag::warn_remainder_division_by_zero, -1,
  /* DiagArray260 */ diag::warn_attribute_dll_redeclaration, -1,
  /* DiagArray261 */ diag::warn_attribute_dllexport_explicit_instantiation_decl, -1,
  /* DiagArray262 */ diag::warn_attribute_dllimport_static_field_definition, -1,
  /* DiagArray263 */ diag::warn_doc_api_container_decl_mismatch, diag::warn_doc_block_command_duplicate, diag::warn_doc_block_command_empty_paragraph, diag::warn_doc_container_decl_mismatch, diag::warn_doc_function_method_decl_mismatch, diag::warn_doc_html_start_tag_expected_ident_or_greater, diag::warn_doc_html_start_tag_expected_quoted_string, diag::warn_doc_inline_command_not_enough_arguments, diag::warn_doc_param_duplicate, diag::warn_doc_param_invalid_direction, diag::warn_doc_param_not_attached_to_a_function_decl, diag::warn_doc_param_not_found, diag::warn_doc_returns_attached_to_a_void_function, diag::warn_doc_returns_not_attached_to_a_function_decl, diag::warn_doc_tparam_duplicate, diag::warn_doc_tparam_not_attached_to_a_template_decl, diag::warn_doc_tparam_not_found, diag::warn_not_a_doxygen_trailing_member_comment, diag::warn_splice_in_doxygen_comment, diag::warn_verbatim_block_end_without_start, -1,
  /* DiagArray264 */ diag::warn_doc_deprecated_not_sync, -1,
  /* DiagArray265 */ diag::warn_doc_html_end_forbidden, diag::warn_doc_html_end_unbalanced, diag::warn_doc_html_missing_end_tag, diag::warn_doc_html_start_end_mismatch, -1,
  /* DiagArray266 */ diag::warn_doc_param_spaces_in_direction, -1,
  /* DiagArray267 */ diag::warn_correct_comment_command_name, diag::warn_unknown_comment_command_name, -1,
  /* DiagArray268 */ diag::ext_dollar_in_identifier, -1,
  /* DiagArray269 */ diag::warn_impcast_double_promotion, -1,
  /* DiagArray270 */ diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_qualified_dtor_named_in_lexical_scope, -1,
  /* DiagArray271 */ diag::ext_destructor_typedef_name, -1,
  /* DiagArray272 */ diag::ext_duplicate_declspec, diag::ext_warn_duplicate_declspec, diag::warn_attribute_address_multiple_identical_qualifiers, diag::warn_duplicate_declspec, -1,
  /* DiagArray273 */ diag::warn_duplicate_enum_values, -1,
  /* DiagArray274 */ diag::warn_method_param_declaration, -1,
  /* DiagArray275 */ diag::warn_duplicate_method_decl, -1,
  /* DiagArray276 */ diag::warn_duplicate_protocol_def, -1,
  /* DiagArray277 */ diag::warn_drv_dxc_missing_dxv, -1,
  /* DiagArray278 */ diag::warn_dyn_class_memaccess, -1,
  /* DiagArray279 */ diag::ext_dynamic_exception_spec, -1,
  /* DiagArray280 */ diag::warn_eagerly_load_for_standard_cplusplus_modules, -1,
  /* DiagArray282 */ diag::ext_enum_base_in_type_specifier, -1,
  /* DiagArray283 */ diag::ext_elaborated_enum_class, -1,
  /* DiagArray284 */ diag::ext_embedded_directive, -1,
  /* DiagArray285 */ diag::warn_empty_for_body, diag::warn_empty_if_body, diag::warn_empty_range_based_for_body, diag::warn_empty_switch_body, diag::warn_empty_while_body, -1,
  /* DiagArray286 */ diag::ext_decomp_decl_empty, -1,
  /* DiagArray287 */ diag::warn_empty_init_statement, -1,
  /* DiagArray288 */ diag::ext_empty_translation_unit, -1,
  /* DiagArray289 */ diag::warn_incomplete_encoded_type, -1,
  /* DiagArray291 */ diag::warn_comparison_mixed_enum_types, -1,
  /* DiagArray292 */ diag::warn_conditional_mixed_enum_types, -1,
  /* DiagArray293 */ diag::warn_comparison_of_mixed_enum_types_switch, -1,
  /* DiagArray294 */ diag::warn_constexpr_unscoped_enum_out_of_range, -1,
  /* DiagArray295 */ diag::warn_impcast_different_enum_types, -1,
  /* DiagArray296 */ diag::warn_arith_conv_mixed_enum_types, -1,
  /* DiagArray297 */ diag::warn_arith_conv_enum_float, -1,
  /* DiagArray298 */ diag::ext_enum_too_large, diag::ext_enumerator_increment_too_large, -1,
  /* DiagArray299 */ diag::warn_cdtor_function_try_handler_mem_expr, diag::warn_exception_caught_by_earlier_handler, diag::warn_throw_in_noexcept_func, -1,
  /* DiagArray300 */ diag::ext_excess_initializers, diag::ext_excess_initializers_for_sizeless_type, diag::ext_excess_initializers_in_char_array_initializer, diag::ext_initializer_string_for_char_array_too_long, -1,
  /* DiagArray301 */ diag::warn_anyx86_excessive_regsave, -1,
  /* DiagArray302 */ diag::warn_exit_time_destructor, -1,
  /* DiagArray303 */ diag::warn_defined_in_function_type_macro, diag::warn_defined_in_object_type_macro, -1,
  /* DiagArray304 */ diag::warn_experimental_header_unit, -1,
  /* DiagArray305 */ diag::warn_direct_initialize_call, diag::warn_direct_super_initialize_call, -1,
  /* DiagArray306 */ diag::warn_arc_strong_pointer_objc_pointer, -1,
  /* DiagArray308 */ diag::warn_zero_size_struct_union_in_extern_c, -1,
  /* DiagArray309 */ diag::warn_extern_init, -1,
  /* DiagArray310 */ diag::warn_arm_interrupt_calling_convention, -1,
  /* DiagArray311 */ diag::warn_namespace_member_extra_qualification, -1,
  /* DiagArray312 */ diag::ext_extra_semi, diag::warn_extra_semi_after_mem_fn_def, -1,
  /* DiagArray313 */ diag::warn_null_statement, -1,
  /* DiagArray314 */ diag::ext_pp_extra_tokens_at_eol, diag::warn_omp_extra_tokens_at_eol, -1,
  /* DiagArray315 */ diag::warn_final_dtor_non_final_class, -1,
  /* DiagArray316 */ diag::warn_pragma_final_macro, -1,
  /* DiagArray317 */ diag::ext_clang_c_enum_fixed_underlying_type, -1,
  /* DiagArray318 */ diag::warn_fixedpoint_constant_overflow, -1,
  /* DiagArray319 */ diag::warn_flag_enum_constant_out_of_range, -1,
  /* DiagArray320 */ diag::ext_flexible_array_in_array, diag::ext_flexible_array_in_struct, -1,
  /* DiagArray321 */ diag::warn_impcast_float_integer, -1,
  /* DiagArray322 */ diag::warn_floatingpoint_eq, -1,
  /* DiagArray323 */ diag::warn_impcast_float_to_integer, diag::warn_impcast_float_to_integer_out_of_range, -1,
  /* DiagArray324 */ diag::warn_impcast_float_to_integer_zero, -1,
  /* DiagArray325 */ diag::warn_redundant_loop_iteration, diag::warn_variables_not_in_loop_body, -1,
  /* DiagArray326 */ diag::warn_format_P_no_precision, diag::warn_format_argument_needs_cast, diag::warn_format_bool_as_character, diag::warn_format_conversion_argument_type_mismatch, diag::warn_format_invalid_annotation, diag::warn_format_invalid_positional_specifier, diag::warn_format_mix_positional_nonpositional_args, diag::warn_format_nonsensical_length, diag::warn_format_string_is_wide_literal, diag::warn_format_zero_positional_specifier, diag::warn_missing_format_string, diag::warn_printf_ObjCflags_without_ObjCConversion, diag::warn_printf_asterisk_missing_arg, diag::warn_printf_asterisk_wrong_type, diag::warn_printf_empty_objc_flag, diag::warn_printf_format_string_contains_null_char, diag::warn_printf_format_string_not_null_terminated, diag::warn_printf_ignored_flag, diag::warn_printf_incomplete_specifier, diag::warn_printf_invalid_objc_flag, diag::warn_printf_narg_not_supported, diag::warn_printf_nonsensical_flag, diag::warn_printf_nonsensical_optional_amount, diag::warn_printf_positional_arg_exceeds_data_args, diag::warn_scanf_nonzero_width, diag::warn_scanf_scanlist_incomplete, -1,
  /* DiagArray327 */ diag::warn_printf_data_arg_not_used, -1,
  /* DiagArray328 */ diag::warn_printf_insufficient_data_args, -1,
  /* DiagArray329 */ diag::warn_format_invalid_conversion, -1,
  /* DiagArray330 */ diag::warn_format_non_standard, diag::warn_format_non_standard_conversion_spec, diag::warn_format_non_standard_positional_arg, -1,
  /* DiagArray331 */ diag::warn_format_nonliteral, -1,
  /* DiagArray332 */ diag::warn_format_overflow, -1,
  /* DiagArray333 */ diag::warn_format_overflow_non_kprintf, -1,
  /* DiagArray334 */ diag::warn_format_argument_needs_cast_pedantic, diag::warn_format_conversion_argument_type_mismatch_pedantic, -1,
  /* DiagArray335 */ diag::warn_format_nonliteral_noargs, -1,
  /* DiagArray336 */ diag::warn_format_truncation, -1,
  /* DiagArray337 */ diag::warn_format_truncation_non_kprintf, -1,
  /* DiagArray338 */ diag::warn_format_conversion_argument_type_mismatch_confusion, -1,
  /* DiagArray340 */ diag::warn_empty_format_string, -1,
  /* DiagArray342 */ diag::warn_fortify_scanf_overflow, diag::warn_fortify_source_overflow, diag::warn_fortify_source_size_mismatch, diag::warn_fortify_strlen_overflow, -1,
  /* DiagArray343 */ diag::warn_four_char_character_literal, -1,
  /* DiagArray344 */ diag::warn_frame_address, -1,
  /* DiagArray345 */ diag::warn_fe_backend_frame_larger_than, diag::warn_fe_frame_larger_than, -1,
  /* DiagArray347 */ diag::warn_framework_include_private_from_public, -1,
  /* DiagArray348 */ diag::warn_free_nonheap_object, -1,
  /* DiagArray349 */ diag::warn_function_def_in_objc_container, -1,
  /* DiagArray350 */ diag::warn_dispatch_body_ignored, diag::warn_multiversion_duplicate_entries, diag::warn_target_clone_duplicate_options, diag::warn_target_clone_no_impact_options, -1,
  /* DiagArray351 */ diag::warn_drv_fuse_ld_path, -1,
  /* DiagArray354 */ diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_warn_gnu_final, diag::warn_attribute_on_function_definition, diag::warn_break_binds_to_switch, diag::warn_cleanup_ext, diag::warn_gcc_attribute_location, diag::warn_gcc_ignores_type_attr, diag::warn_gcc_requires_variadic_function, diag::warn_gcc_variable_decl_in_for_loop, diag::warn_loop_ctrl_binds_to_inner, -1,
  /* DiagArray355 */ diag::ext_generic_with_type_arg, -1,
  /* DiagArray356 */ diag::warn_global_constructor, diag::warn_global_destructor, -1,
  /* DiagArray357 */ diag::warn_drv_global_isel_incomplete, diag::warn_drv_global_isel_incomplete_opt, -1,
  /* DiagArray359 */ diag::ext_alignof_expr, -1,
  /* DiagArray360 */ diag::ext_gnu_anonymous_struct, -1,
  /* DiagArray361 */ diag::ext_array_init_parens, -1,
  /* DiagArray362 */ diag::ext_auto_type, -1,
  /* DiagArray363 */ diag::ext_binary_literal, -1,
  /* DiagArray364 */ diag::ext_gnu_case_range, -1,
  /* DiagArray365 */ diag::ext_integer_complex, -1,
  /* DiagArray366 */ diag::ext_array_init_copy, -1,
  /* DiagArray367 */ diag::ext_gnu_conditional_expr, -1,
  /* DiagArray368 */ diag::ext_gnu_array_range, diag::ext_gnu_missing_equal_designator, diag::ext_gnu_old_style_field_designator, -1,
  /* DiagArray370 */ diag::ext_empty_struct_union, diag::ext_flexible_array_empty_aggregate_gnu, diag::ext_no_named_members_in_struct_union, -1,
  /* DiagArray371 */ diag::ext_flexible_array_init, -1,
  /* DiagArray372 */ diag::ext_flexible_array_union_gnu, -1,
  /* DiagArray373 */ diag::ext_expr_not_ice, diag::ext_in_class_initializer_non_constant, diag::ext_vla_folded_to_constant, -1,
  /* DiagArray374 */ diag::ext_imaginary_constant, -1,
  /* DiagArray375 */ diag::ext_pp_include_next_directive, -1,
  /* DiagArray376 */ diag::warn_gnu_inline_cplusplus_without_extern, -1,
  /* DiagArray377 */ diag::ext_gnu_address_of_label, diag::ext_gnu_indirect_goto, -1,
  /* DiagArray378 */ diag::ext_pp_gnu_line_directive, -1,
  /* DiagArray379 */ diag::warn_gnu_null_ptr_arith, -1,
  /* DiagArray380 */ diag::ext_type_defined_in_offsetof, -1,
  /* DiagArray381 */ diag::ext_gnu_ptr_func_arith, diag::ext_gnu_subscript_void_type, diag::ext_gnu_void_ptr, -1,
  /* DiagArray382 */ diag::ext_forward_ref_enum_def, -1,
  /* DiagArray383 */ diag::ext_gnu_statement_expr, -1,
  /* DiagArray384 */ diag::ext_gnu_statement_expr_macro, -1,
  /* DiagArray385 */ diag::ext_in_class_initializer_float_type, -1,
  /* DiagArray386 */ diag::ext_string_literal_operator_template, -1,
  /* DiagArray387 */ diag::ext_typecheck_cast_to_union, -1,
  /* DiagArray388 */ diag::ext_variable_sized_type_in_struct, -1,
  /* DiagArray389 */ diag::ext_pp_line_zero, -1,
  /* DiagArray390 */ diag::ext_missing_varargs_arg, diag::ext_paste_comma, -1,
  /* DiagArray391 */ diag::warn_maybe_capture_bad_target_this_ptr, -1,
  /* DiagArray392 */ diag::warn_header_guard, -1,
  /* DiagArray393 */ diag::warn_using_directive_in_header, -1,
  /* DiagArray394 */ diag::warn_hip_omp_target_directives, -1,
  /* DiagArray395 */ diag::warn_ignored_hip_only_option, -1,
  /* DiagArray396 */ diag::ext_hlsl_access_specifiers, -1,
  /* DiagArray397 */ diag::warn_condition_is_idiomatic_assignment, -1,
  /* DiagArray398 */ diag::ext_cannot_use_trivial_abi, diag::warn_alias_to_weak_alias, diag::warn_alias_with_section, diag::warn_aligned_attr_underaligned, diag::warn_attr_abi_tag_namespace, diag::warn_attribute_after_definition_ignored, diag::warn_attribute_cmse_entry_static, diag::warn_attribute_dllexport_explicit_instantiation_def, diag::warn_attribute_has_no_effect_on_compile_time_if, diag::warn_attribute_has_no_effect_on_infinite_loop, diag::warn_attribute_iboutlet, diag::warn_attribute_ignored, diag::warn_attribute_ignored_for_field_of_type, diag::warn_attribute_ignored_no_calls_in_stmt, diag::warn_attribute_ignored_non_function_pointer, diag::warn_attribute_ignored_on_inline, diag::warn_attribute_ignored_on_non_definition, diag::warn_attribute_invalid_on_definition, diag::warn_attribute_no_decl, diag::warn_attribute_nonnull_no_pointers, diag::warn_attribute_nonnull_parm_no_args, diag::warn_attribute_not_on_decl, diag::warn_attribute_pointer_or_reference_only, diag::warn_attribute_pointers_only, diag::warn_attribute_precede_definition, diag::warn_attribute_return_pointers_only, diag::warn_attribute_return_pointers_refs_only, diag::warn_attribute_sentinel_named_arguments, diag::warn_attribute_sentinel_not_variadic, diag::warn_attribute_type_not_supported, diag::warn_attribute_type_not_supported_global, diag::warn_attribute_unknown_visibility, diag::warn_attribute_void_function_method, diag::warn_attribute_weak_on_field, diag::warn_attribute_weak_on_local, diag::warn_attribute_wrong_decl_type, diag::warn_attribute_wrong_decl_type_str, diag::warn_attributes_likelihood_ifstmt_conflict, diag::warn_block_literal_attributes_on_omitted_return_type, diag::warn_cconv_unsupported, diag::warn_const_attr_with_pure_attr, diag::warn_cuda_maxclusterrank_sm_90, diag::warn_cxx11_gnu_attribute_on_type, diag::warn_declspec_allocator_nonpointer, diag::warn_declspec_attribute_ignored, diag::warn_deprecated_anonymous_namespace, diag::warn_deprecated_ignored_on_using, diag::warn_dllimport_dropped_from_inline_function, diag::warn_duplicate_attribute, diag::warn_duplicate_attribute_exact, diag::warn_function_attribute_ignored_in_stmt, diag::warn_function_stmt_attribute_precedence, diag::warn_gc_attribute_weak_on_local, diag::warn_gnu_inline_attribute_requires_inline, diag::warn_ignored_ms_inheritance, diag::warn_ignored_objc_externally_retained, diag::warn_import_on_definition, diag::warn_internal_linkage_local_storage, diag::warn_interrupt_attribute_invalid, diag::warn_microsoft_qualifiers_ignored, diag::warn_mig_server_routine_does_not_return_kern_return_t, diag::warn_mismatched_import, diag::warn_mmap_unknown_attribute, diag::warn_nocf_check_attribute_ignored, diag::warn_noderef_on_non_pointer_or_array, diag::warn_nothrow_attribute_ignored, diag::warn_ns_attribute_wrong_parameter_type, diag::warn_ns_attribute_wrong_return_type, diag::warn_objc_direct_ignored, diag::warn_objc_direct_property_ignored, diag::warn_opencl_attr_deprecated_ignored, diag::warn_pure_function_returns_void, diag::warn_require_const_init_added_too_late, diag::warn_riscv_repeated_interrupt_attribute, diag::warn_sycl_kernel_invalid_template_param_type, diag::warn_sycl_kernel_num_of_function_params, diag::warn_sycl_kernel_num_of_template_params, diag::warn_sycl_kernel_return_type, diag::warn_transparent_union_attribute_field_size_align, diag::warn_transparent_union_attribute_floating, diag::warn_transparent_union_attribute_not_definition, diag::warn_transparent_union_attribute_zero_fields, diag::warn_type_attribute_wrong_type, diag::warn_unhandled_ms_attribute_ignored, diag::warn_unsupported_target_attribute, diag::warn_unused_result_typedef_unsupported_spelling, diag::warn_wrong_clang_attr_namespace, -1,
  /* DiagArray399 */ diag::warn_missing_sdksettings_for_availability_checking, -1,
  /* DiagArray400 */ diag::warn_drv_pch_ignoring_gch_dir, diag::warn_drv_pch_ignoring_gch_file, -1,
  /* DiagArray401 */ diag::warn_drv_unsupported_opt_for_target, diag::warn_ignored_gcc_optimization, -1,
  /* DiagArray402 */ diag::warn_pragma_intrinsic_builtin, -1,
  /* DiagArray404 */ diag::warn_clause_expected_string, diag::warn_pragma_align_expected_equal, diag::warn_pragma_align_invalid_option, diag::warn_pragma_comment_ignored, diag::warn_pragma_debug_dependent_argument, diag::warn_pragma_debug_missing_argument, diag::warn_pragma_debug_missing_command, diag::warn_pragma_debug_unexpected_argument, diag::warn_pragma_debug_unexpected_command, diag::warn_pragma_debug_unknown_module, diag::warn_pragma_expected_action_or_r_paren, diag::warn_pragma_expected_colon, diag::warn_pragma_expected_colon_r_paren, diag::warn_pragma_expected_comma, diag::warn_pragma_expected_identifier, diag::warn_pragma_expected_init_seg, diag::warn_pragma_expected_integer, diag::warn_pragma_expected_lparen, diag::warn_pragma_expected_non_wide_string, diag::warn_pragma_expected_predicate, diag::warn_pragma_expected_punc, diag::warn_pragma_expected_rparen, diag::warn_pragma_expected_section_label_or_name, diag::warn_pragma_expected_section_name, diag::warn_pragma_expected_section_push_pop_or_name, diag::warn_pragma_expected_string, diag::warn_pragma_extra_tokens_at_eol, diag::warn_pragma_force_cuda_host_device_bad_arg, diag::warn_pragma_fp_ignored, diag::warn_pragma_init_seg_unsupported_target, diag::warn_pragma_invalid_action, diag::warn_pragma_invalid_argument, diag::warn_pragma_invalid_specific_action, diag::warn_pragma_missing_argument, diag::warn_pragma_ms_fenv_access, diag::warn_pragma_ms_struct, diag::warn_pragma_options_align_reset_failed, diag::warn_pragma_options_expected_align, diag::warn_pragma_pack_invalid_alignment, diag::warn_pragma_pack_malformed, diag::warn_pragma_pop_failed, diag::warn_pragma_pop_macro_no_push, diag::warn_pragma_unknown_extension, diag::warn_pragma_unsupported_action, diag::warn_pragma_unsupported_extension, diag::warn_pragma_unused_expected_var, diag::warn_pragma_unused_expected_var_arg, diag::warn_pragma_unused_undeclared_var, diag::warn_stdc_unknown_rounding_mode, -1,
  /* DiagArray405 */ diag::warn_arc_lifetime_result_type, diag::warn_block_literal_qualifiers_on_omitted_return_type, diag::warn_qual_return_type, diag::warn_typecheck_function_qualifiers_ignored, -1,
  /* DiagArray406 */ diag::warn_typecheck_reference_qualifiers, -1,
  /* DiagArray408 */ diag::warn_auto_implicit_atomic_property, diag::warn_implicit_atomic_property, -1,
  /* DiagArray409 */ diag::warn_impcast_integer_float_precision_constant, -1,
  /* DiagArray410 */ diag::warn_impcast_floating_point_to_bool, -1,
  /* DiagArray411 */ diag::ext_implicit_exception_spec_mismatch, -1,
  /* DiagArray412 */ diag::warn_unannotated_fallthrough, -1,
  /* DiagArray413 */ diag::warn_unannotated_fallthrough_per_function, -1,
  /* DiagArray414 */ diag::warn_impcast_fixed_point_range, -1,
  /* DiagArray415 */ diag::warn_impcast_float_precision, diag::warn_impcast_float_result_precision, -1,
  /* DiagArray416 */ diag::ext_implicit_function_decl_c99, diag::ext_implicit_lib_function_decl, diag::ext_implicit_lib_function_decl_c99, diag::warn_builtin_unknown, diag::warn_implicit_function_decl, -1,
  /* DiagArray417 */ diag::ext_missing_type_specifier, diag::ext_param_not_declared, diag::warn_missing_type_specifier, -1,
  /* DiagArray418 */ diag::warn_impcast_high_order_zero_bits, diag::warn_impcast_integer_precision, -1,
  /* DiagArray419 */ diag::warn_impcast_integer_float_precision, -1,
  /* DiagArray420 */ diag::warn_implicitly_retains_self, -1,
  /* DiagArray421 */ diag::ext_integer_literal_too_large_for_signed, -1,
  /* DiagArray423 */ diag::ext_pp_import_directive, -1,
  /* DiagArray424 */ diag::warn_inaccessible_base_class, -1,
  /* DiagArray425 */ diag::warn_pp_include_angled_in_module_purview, -1,
  /* DiagArray426 */ diag::pp_include_next_absolute_path, -1,
  /* DiagArray427 */ diag::pp_include_next_in_primary, -1,
  /* DiagArray428 */ diag::warn_deep_exception_specs_differ, diag::warn_incompatible_exception_specs, -1,
  /* DiagArray429 */ diag::ext_typecheck_convert_incompatible_function_pointer, -1,
  /* DiagArray430 */ diag::warn_typecheck_convert_incompatible_function_pointer_strict, -1,
  /* DiagArray431 */ diag::warn_redecl_library_builtin, -1,
  /* DiagArray432 */ diag::warn_section_msvc_compat, -1,
  /* DiagArray433 */ diag::warn_cxx_ms_struct, diag::warn_npot_ms_struct, -1,
  /* DiagArray434 */ diag::ext_typecheck_convert_incompatible_pointer, -1,
  /* DiagArray435 */ diag::ext_nested_pointer_qualifier_mismatch, diag::ext_typecheck_convert_discards_qualifiers, diag::warn_bad_cxx_cast_nested_pointer_addr_space, -1,
  /* DiagArray436 */ diag::warn_property_types_are_incompatible, -1,
  /* DiagArray437 */ diag::warn_incompatible_sysroot, -1,
  /* DiagArray438 */ diag::warn_mmap_incomplete_framework_module_declaration, -1,
  /* DiagArray439 */ diag::warn_undef_method_impl, -1,
  /* DiagArray441 */ diag::warn_implicit_decl_no_jmp_buf, -1,
  /* DiagArray442 */ diag::warn_missing_submodule, diag::warn_mmap_umbrella_dir_not_found, diag::warn_uncovered_module_header, -1,
  /* DiagArray443 */ diag::warn_redeclaration_without_attribute_prev_attribute_ignored, diag::warn_redeclaration_without_import_attribute, -1,
  /* DiagArray444 */ diag::warn_inconsistent_destructor_marked_not_override_overriding, -1,
  /* DiagArray445 */ diag::warn_inconsistent_function_marked_not_override_overriding, -1,
  /* DiagArray446 */ diag::ext_increment_bool, -1,
  /* DiagArray447 */ diag::warn_infinite_recursive_function, -1,
  /* DiagArray449 */ diag::ext_initializer_overrides, diag::ext_initializer_union_overrides, diag::warn_initializer_overrides, -1,
  /* DiagArray450 */ diag::ext_out_of_line_qualified_id_type_names_constructor, -1,
  /* DiagArray452 */ diag::warn_fe_inline_asm, -1,
  /* DiagArray453 */ diag::warn_inline_namespace_reopened_noninline, -1,
  /* DiagArray454 */ diag::ext_operator_new_delete_declared_inline, -1,
  /* DiagArray455 */ diag::warn_explicit_instantiation_after_specialization, -1,
  /* DiagArray456 */ diag::ext_typecheck_convert_int_pointer, diag::ext_typecheck_convert_pointer_int, -1,
  /* DiagArray458 */ diag::warn_enum_constant_in_bool_context, diag::warn_left_shift_in_bool_context, -1,
  /* DiagArray459 */ diag::warn_int_to_pointer_cast, -1,
  /* DiagArray460 */ diag::warn_int_to_void_pointer_cast, -1,
  /* DiagArray461 */ diag::warn_integer_constant_overflow, -1,
  /* DiagArray462 */ diag::warn_drv_missing_plugin_arg, diag::warn_drv_missing_plugin_name, diag::warn_drv_msp430_hwmult_mismatch, diag::warn_drv_msp430_hwmult_no_device, diag::warn_drv_msp430_hwmult_unsupported, diag::warn_drv_object_size_disabled_O0, diag::warn_drv_optimization_value, diag::warn_fe_backend_invalid_feature_flag, diag::warn_fe_backend_readonly_feature_flag, diag::warn_target_unrecognized_env, diag::warn_target_unsupported_extension, -1,
  /* DiagArray463 */ diag::ext_constexpr_function_never_constant_expr, -1,
  /* DiagArray464 */ diag::warn_invalid_feature_combination, -1,
  /* DiagArray465 */ diag::warn_iboutlet_object_type, diag::warn_iboutletcollection_property_assign, -1,
  /* DiagArray466 */ diag::warn_invalid_initializer_from_system_header, -1,
  /* DiagArray467 */ diag::warn_invalid_ios_deployment_target, -1,
  /* DiagArray468 */ diag::warn_attribute_no_builtin_invalid_builtin_name, -1,
  /* DiagArray469 */ diag::warn_falloff_noreturn_function, diag::warn_noreturn_function_has_return_expr, -1,
  /* DiagArray470 */ diag::ext_offsetof_non_pod_type, diag::ext_offsetof_non_standardlayout_type, -1,
  /* DiagArray471 */ diag::warn_drv_unable_to_find_directory_expected, -1,
  /* DiagArray472 */ diag::ext_partial_spec_not_more_specialized_than_primary, -1,
  /* DiagArray474 */ diag::ext_empty_character, diag::ext_unterminated_char_or_string, -1,
  /* DiagArray475 */ diag::warn_bad_character_encoding, diag::warn_bad_string_encoding, -1,
  /* DiagArray476 */ diag::warn_static_assert_message_constexpr, -1,
  /* DiagArray477 */ diag::ext_pp_bad_paste_ms, -1,
  /* DiagArray478 */ diag::warn_unevaluated_string_prefix, -1,
  /* DiagArray479 */ diag::warn_invalid_utf8_in_comment, -1,
  /* DiagArray480 */ diag::warn_jump_out_of_seh_finally, -1,
  /* DiagArray481 */ diag::ext_keyword_as_ident, -1,
  /* DiagArray482 */ diag::warn_pp_macro_hides_keyword, -1,
  /* DiagArray483 */ diag::warn_knl_knm_isa_support_removed, -1,
  /* DiagArray484 */ diag::ext_param_promoted_not_compatible_with_prototype, -1,
  /* DiagArray485 */ diag::ext_token_used, -1,
  /* DiagArray486 */ diag::warn_parameter_size, diag::warn_return_value_size, -1,
  /* DiagArray488 */ diag::warn_fe_linking_module, -1,
  /* DiagArray489 */ diag::warn_impcast_literal_float_to_integer, diag::warn_impcast_literal_float_to_integer_out_of_range, -1,
  /* DiagArray490 */ diag::warn_float_compare_literal, diag::warn_float_overflow, diag::warn_float_underflow, -1,
  /* DiagArray491 */ diag::ext_template_arg_local_type, -1,
  /* DiagArray492 */ diag::warn_logical_not_on_lhs_of_check, -1,
  /* DiagArray493 */ diag::warn_logical_and_in_logical_or, -1,
  /* DiagArray494 */ diag::ext_c99_longlong, -1,
  /* DiagArray496 */ diag::ext_pp_macro_redef, -1,
  /* DiagArray497 */ diag::ext_main_used, diag::ext_noreturn_main, diag::ext_variadic_main, diag::warn_main_one_arg, diag::warn_main_redefined, diag::warn_main_returns_bool_literal, diag::warn_static_main, -1,
  /* DiagArray498 */ diag::ext_main_returns_nonint, -1,
  /* DiagArray499 */ diag::warn_has_warning_invalid_option, -1,
  /* DiagArray500 */ diag::ext_many_braces_around_init, -1,
  /* DiagArray501 */ diag::ext_mathematical_notation, -1,
  /* DiagArray502 */ diag::warn_max_tokens, diag::warn_max_tokens_total, -1,
  /* DiagArray503 */ diag::warn_max_unsigned_zero, -1,
  /* DiagArray504 */ diag::warn_suspicious_sizeof_memset, -1,
  /* DiagArray505 */ diag::warn_memsize_comparison, -1,
  /* DiagArray506 */ diag::warn_non_contravariant_param_types, diag::warn_non_covariant_ret_types, -1,
  /* DiagArray508 */ diag::ext_ms_abstract_keyword, -1,
  /* DiagArray509 */ diag::ext_anonymous_record_with_type, diag::ext_ms_anonymous_record, -1,
  /* DiagArray510 */ diag::ext_ms_cast_fn_obj, diag::ext_ms_impcast_fn_obj, -1,
  /* DiagArray511 */ diag::ext_charize_microsoft, -1,
  /* DiagArray512 */ diag::ext_comment_paste_microsoft, -1,
  /* DiagArray513 */ diag::ext_default_init_const, -1,
  /* DiagArray514 */ diag::ext_pp_operator_used_as_macro_name, -1,
  /* DiagArray515 */ diag::ext_param_default_argument_redefinition, -1,
  /* DiagArray516 */ diag::warn_attribute_section_drectve, -1,
  /* DiagArray517 */ diag::ext_ctrl_z_eof_microsoft, -1,
  /* DiagArray518 */ diag::ext_ms_forward_ref_enum, -1,
  /* DiagArray519 */ diag::ext_enumerator_too_large, -1,
  /* DiagArray520 */ diag::ext_ellipsis_exception_spec, diag::ext_incomplete_in_exception_spec, diag::ext_mismatched_exception_spec, diag::ext_mismatched_exception_spec_explicit_instantiation, diag::ext_override_exception_spec, -1,
  /* DiagArray521 */ diag::warn_microsoft_dependent_exists, -1,
  /* DiagArray522 */ diag::ext_ms_explicit_constructor_call, -1,
  /* DiagArray523 */ diag::warn_member_extra_qualification, -1,
  /* DiagArray524 */ diag::ext_ms_c_enum_fixed_underlying_type, -1,
  /* DiagArray525 */ diag::ext_flexible_array_empty_aggregate_ms, diag::ext_flexible_array_union_ms, -1,
  /* DiagArray526 */ diag::ext_goto_into_protected_scope, -1,
  /* DiagArray527 */ diag::ext_ms_ambiguous_direct_base, -1,
  /* DiagArray528 */ diag::ext_pp_include_search_ms, -1,
  /* DiagArray529 */ diag::ext_init_from_predefined, -1,
  /* DiagArray530 */ diag::ext_mutable_reference, -1,
  /* DiagArray531 */ diag::ext_pure_function_definition, -1,
  /* DiagArray532 */ diag::ext_static_non_static, -1,
  /* DiagArray533 */ diag::ext_ms_sealed_keyword, -1,
  /* DiagArray534 */ diag::ext_ms_static_assert, -1,
  /* DiagArray535 */ diag::ext_string_literal_from_predefined, -1,
  /* DiagArray536 */ diag::ext_explicit_instantiation_duplicate, diag::ext_found_in_dependent_base, diag::ext_found_later_in_class, diag::ext_ms_delayed_template_argument, diag::ext_ms_deref_template_argument, diag::ext_ms_template_spec_redecl_out_of_scope, diag::ext_ms_template_type_arg_missing_typename, diag::ext_static_out_of_line, diag::ext_undeclared_unqual_id_with_dependent_base, diag::ext_unqualified_base_class, -1,
  /* DiagArray537 */ diag::ext_template_param_shadow, -1,
  /* DiagArray538 */ diag::ext_union_member_of_reference_type, -1,
  /* DiagArray539 */ diag::ext_friend_tag_redecl_outside_namespace, -1,
  /* DiagArray540 */ diag::ext_ms_using_declaration_inaccessible, -1,
  /* DiagArray541 */ diag::ext_pseudo_dtor_on_void, -1,
  /* DiagArray542 */ diag::warn_profile_data_misexpect, -1,
  /* DiagArray543 */ diag::warn_misleading_indentation, -1,
  /* DiagArray544 */ diag::warn_mismatched_delete_new, -1,
  /* DiagArray545 */ diag::warn_conflicting_param_types, -1,
  /* DiagArray546 */ diag::warn_conflicting_ret_types, -1,
  /* DiagArray547 */ diag::warn_struct_class_previous_tag_mismatch, diag::warn_struct_class_tag_mismatch, -1,
  /* DiagArray548 */ diag::warn_missing_braces, -1,
  /* DiagArray549 */ diag::ext_constinit_missing, -1,
  /* DiagArray550 */ diag::ext_no_declarators, diag::ext_standalone_specifier, diag::ext_typedef_without_a_name, diag::warn_standalone_specifier, -1,
  /* DiagArray551 */ diag::ext_missing_exception_specification, -1,
  /* DiagArray552 */ diag::warn_missing_field_initializers, -1,
  /* DiagArray555 */ diag::warn_missing_method_return_type, -1,
  /* DiagArray556 */ diag::warn_drv_missing_multilib, -1,
  /* DiagArray557 */ diag::warn_overriding_method_missing_noescape, -1,
  /* DiagArray558 */ diag::warn_suggest_noreturn_block, diag::warn_suggest_noreturn_function, -1,
  /* DiagArray559 */ diag::warn_cconv_knr, -1,
  /* DiagArray560 */ diag::warn_missing_prototype, -1,
  /* DiagArray561 */ diag::warn_missing_selector_name, -1,
  /* DiagArray562 */ diag::warn_missing_sysroot, -1,
  /* DiagArray563 */ diag::warn_missing_variable_declarations, -1,
  /* DiagArray564 */ diag::warn_assume_attribute_string_unknown_suggested, -1,
  /* DiagArray565 */ diag::remark_module_build, diag::remark_module_build_done, diag::remark_module_lock_failure, diag::remark_module_lock_timeout, -1,
  /* DiagArray566 */ diag::warn_module_conflict, diag::warn_module_system_bit_conflict, -1,
  /* DiagArray567 */ diag::warn_module_config_mismatch, -1,
  /* DiagArray568 */ diag::warn_duplicate_module_file_extension, -1,
  /* DiagArray569 */ diag::remark_module_import, -1,
  /* DiagArray570 */ diag::ext_module_import_in_extern_c, -1,
  /* DiagArray571 */ diag::remark_pp_include_directive_modular_translation, -1,
  /* DiagArray572 */ diag::remark_module_lock, -1,
  /* DiagArray573 */ diag::ext_equivalent_internal_linkage_decl_in_modules, -1,
  /* DiagArray574 */ diag::ext_module_import_not_at_top_level_noop, -1,
  /* DiagArray578 */ diag::warn_drv_msvc_not_found, -1,
  /* DiagArray579 */ diag::warn_drv_multi_gpu_arch, -1,
  /* DiagArray580 */ diag::warn_multichar_character_literal, -1,
  /* DiagArray581 */ diag::warn_vbase_moved_multiple_times, -1,
  /* DiagArray582 */ diag::warn_fp_nan_inf_when_disabled, -1,
  /* DiagArray584 */ diag::ext_anonymous_record_with_anonymous_type, -1,
  /* DiagArray586 */ diag::warn_operator_new_returns_null, -1,
  /* DiagArray587 */ diag::ext_no_newline_eof, diag::warn_no_newline_eof, -1,
  /* DiagArray588 */ diag::warn_dereference_of_noderef_type, diag::warn_dereference_of_noderef_type_no_decl, diag::warn_noderef_to_dereferenceable_pointer, -1,
  /* DiagArray590 */ diag::ext_non_c_like_anon_struct_in_typedef, -1,
  /* DiagArray592 */ diag::warn_non_literal_null_pointer, -1,
  /* DiagArray593 */ diag::warn_non_modular_include_in_framework_module, -1,
  /* DiagArray594 */ diag::warn_non_modular_include_in_module, -1,
  /* DiagArray595 */ diag::warn_cannot_pass_non_pod_arg_to_vararg, diag::warn_non_pod_vararg_with_format_string, diag::warn_second_parameter_to_va_arg_not_pod, diag::warn_second_parameter_to_va_arg_ownership_qualified, -1,
  /* DiagArray596 */ diag::warn_alignment_not_power_of_two, -1,
  /* DiagArray597 */ diag::warn_non_virtual_dtor, -1,
  /* DiagArray598 */ diag::warn_null_arg, diag::warn_null_ret, -1,
  /* DiagArray600 */ diag::pp_nonportable_path, -1,
  /* DiagArray601 */ diag::warn_apinotes_private_case, -1,
  /* DiagArray602 */ diag::warn_apinotes_private_case_system, -1,
  /* DiagArray603 */ diag::pp_nonportable_system_path, -1,
  /* DiagArray604 */ diag::warn_neon_vector_initializer_non_portable, -1,
  /* DiagArray605 */ diag::warn_cstruct_memaccess, -1,
  /* DiagArray606 */ diag::warn_nsconsumed_attribute_mismatch, -1,
  /* DiagArray607 */ diag::warn_nsreturns_retained_attribute_mismatch, -1,
  /* DiagArray608 */ diag::warn_null_in_arithmetic_operation, diag::warn_null_in_comparison_operation, -1,
  /* DiagArray609 */ diag::null_in_char_or_string, diag::null_in_file, -1,
  /* DiagArray610 */ diag::warn_impcast_null_pointer_to_integer, -1,
  /* DiagArray611 */ diag::warn_binding_null_to_reference, diag::warn_indirection_through_null, -1,
  /* DiagArray612 */ diag::warn_pointer_arith_null_ptr, -1,
  /* DiagArray613 */ diag::warn_pointer_sub_null_ptr, -1,
  /* DiagArray614 */ diag::warn_conflicting_nullability_attr_overriding_param_types, diag::warn_conflicting_nullability_attr_overriding_ret_types, diag::warn_mismatched_nullability_attr, diag::warn_null_resettable_setter, diag::warn_nullability_duplicate, -1,
  /* DiagArray615 */ diag::warn_nullability_missing, -1,
  /* DiagArray616 */ diag::warn_nullability_missing_array, -1,
  /* DiagArray617 */ diag::warn_nullability_declspec, -1,
  /* DiagArray618 */ diag::ext_nullability, -1,
  /* DiagArray619 */ diag::warn_nullability_inferred_on_nested_type, -1,
  /* DiagArray620 */ diag::warn_nullability_lost, -1,
  /* DiagArray621 */ diag::warn_autosynthesis_property_ivar_match, -1,
  /* DiagArray622 */ diag::warn_impcast_constant_value_to_objc_bool, -1,
  /* DiagArray623 */ diag::warn_objc_boxing_invalid_utf8_string, -1,
  /* DiagArray624 */ diag::warn_objc_circular_container, -1,
  /* DiagArray626 */ diag::warn_objc_designated_init_missing_super_call, diag::warn_objc_designated_init_non_designated_init_call, diag::warn_objc_designated_init_non_super_designated_init_call, diag::warn_objc_implementation_missing_designated_init_override, diag::warn_objc_secondary_init_missing_init_call, diag::warn_objc_secondary_init_super_init_call, -1,
  /* DiagArray627 */ diag::warn_nsdictionary_duplicate_key, -1,
  /* DiagArray628 */ diag::warn_dup_category_def, -1,
  /* DiagArray629 */ diag::warn_superclass_variable_sized_type_not_at_end, diag::warn_variable_sized_ivar_visibility, -1,
  /* DiagArray630 */ diag::warn_forward_class_redefinition, -1,
  /* DiagArray631 */ diag::warn_ivars_in_interface, -1,
  /* DiagArray632 */ diag::warn_objc_literal_comparison, -1,
  /* DiagArray633 */ diag::warn_impcast_objective_c_literal_to_bool, diag::warn_objc_collection_literal_element, -1,
  /* DiagArray634 */ diag::warn_pp_objc_macro_redef_ignored, -1,
  /* DiagArray635 */ diag::warn_messaging_unqualified_id, -1,
  /* DiagArray636 */ diag::warn_class_method_not_found, diag::warn_class_method_not_found_with_typo, diag::warn_inst_method_not_found, diag::warn_instance_method_not_found_with_typo, diag::warn_instance_method_on_class_found, diag::warn_root_inst_method_not_found, -1,
  /* DiagArray637 */ diag::warn_missing_explicit_synthesis, -1,
  /* DiagArray638 */ diag::warn_objc_missing_super_call, -1,
  /* DiagArray639 */ diag::warn_multiple_method_decl, -1,
  /* DiagArray640 */ diag::warn_objc_property_retain_of_block, -1,
  /* DiagArray641 */ diag::warn_objc_pointer_cxx_catch_fragile, -1,
  /* DiagArray642 */ diag::warn_objc_property_assign_on_object, -1,
  /* DiagArray643 */ diag::warn_impl_required_for_class_property, diag::warn_impl_required_in_category_for_class_property, diag::warn_setter_getter_impl_required, diag::warn_setter_getter_impl_required_in_category, -1,
  /* DiagArray644 */ diag::warn_property_implicitly_mismatched, -1,
  /* DiagArray645 */ diag::warn_cocoa_naming_owned_rule, -1,
  /* DiagArray646 */ diag::warn_objc_property_default_assign_on_object, diag::warn_objc_property_no_assignment_attribute, -1,
  /* DiagArray647 */ diag::warn_autosynthesis_property_in_superclass, diag::warn_no_autosynthesis_property, diag::warn_no_autosynthesis_shared_ivar_property, -1,
  /* DiagArray648 */ diag::warn_category_method_impl_match, -1,
  /* DiagArray649 */ diag::warn_auto_synthesizing_protocol_property, -1,
  /* DiagArray650 */ diag::warn_objc_redundant_qualified_class_type, -1,
  /* DiagArray651 */ diag::warn_objc_readonly_property_has_setter, -1,
  /* DiagArray653 */ diag::warn_objc_redundant_literal_use, -1,
  /* DiagArray654 */ diag::warn_objc_root_class_missing, -1,
  /* DiagArray656 */ diag::warn_impcast_float_to_objc_signed_char_bool, -1,
  /* DiagArray657 */ diag::warn_impcast_int_to_objc_signed_char_bool, -1,
  /* DiagArray658 */ diag::warn_objc_string_literal_comparison, -1,
  /* DiagArray659 */ diag::warn_concatenated_nsarray_literal, -1,
  /* DiagArray660 */ diag::warn_objc_unsafe_perform_selector, -1,
  /* DiagArray661 */ diag::warn_odr_different_num_template_parameters, diag::warn_odr_different_template_parameter_kind, diag::warn_odr_field_type_inconsistent, diag::warn_odr_function_type_inconsistent, diag::warn_odr_ivar_type_inconsistent, diag::warn_odr_non_type_parameter_type_inconsistent, diag::warn_odr_objc_method_num_params_inconsistent, diag::warn_odr_objc_method_param_type_inconsistent, diag::warn_odr_objc_method_result_type_inconsistent, diag::warn_odr_objc_method_variadic_inconsistent, diag::warn_odr_objc_property_impl_kind_inconsistent, diag::warn_odr_objc_property_type_inconsistent, diag::warn_odr_objc_superclass_inconsistent, diag::warn_odr_objc_synthesize_ivar_inconsistent, diag::warn_odr_parameter_pack_non_pack, diag::warn_odr_tag_type_inconsistent, diag::warn_odr_variable_multiple_def, diag::warn_odr_variable_type_inconsistent, -1,
  /* DiagArray662 */ diag::warn_old_style_cast, -1,
  /* DiagArray665 */ diag::ext_opencl_ext_vector_type_rgba_selector, -1,
  /* DiagArray667 */ diag::ext_omp_attributes, -1,
  /* DiagArray668 */ diag::warn_omp_alignment_not_power_of_two, diag::warn_omp_allocate_thread_on_task_target_directive, diag::warn_omp_ctx_incompatible_property_for_selector, diag::warn_omp_ctx_incompatible_score_for_property, diag::warn_omp_ctx_incompatible_selector_for_set, diag::warn_omp_ctx_selector_without_properties, diag::warn_omp_declare_variant_ctx_mutiple_use, diag::warn_omp_declare_variant_ctx_not_a_property, diag::warn_omp_declare_variant_ctx_not_a_selector, diag::warn_omp_declare_variant_ctx_not_a_set, diag::warn_omp_declare_variant_expected, diag::warn_omp_declare_variant_string_literal_or_identifier, diag::warn_omp_linear_step_zero, diag::warn_omp_more_one_device_type_clause, diag::warn_omp_more_one_interop_type, diag::warn_omp_more_one_omp_all_memory, diag::warn_omp_unknown_assumption_clause_missing_id, diag::warn_omp_unknown_assumption_clause_without_args, diag::warn_omp_used_different_allocator, -1,
  /* DiagArray669 */ diag::warn_omp_invalid_attribute_for_ompx_attributes, -1,
  /* DiagArray670 */ diag::ext_omp_loop_not_canonical_init, diag::warn_omp_loop_64_bit_var, -1,
  /* DiagArray671 */ diag::warn_omp_non_trivial_type_mapped, -1,
  /* DiagArray672 */ diag::warn_drv_omp_offload_target_duplicate, diag::warn_omp_declare_target_after_first_use, diag::warn_omp_not_in_target_context, -1,
  /* DiagArray673 */ diag::warn_throw_not_valid_on_target, diag::warn_try_not_valid_on_target, -1,
  /* DiagArray674 */ diag::warn_drv_fine_grained_bitfield_accesses_ignored, diag::warn_drv_fjmc_for_elf_only, diag::warn_drv_jmc_requires_debuginfo, diag::warn_drv_loongarch_conflicting_implied_val, diag::warn_drv_moutline_atomics_unsupported_opt, diag::warn_drv_moutline_unsupported_opt, diag::warn_drv_needs_hvx, diag::warn_drv_ps_force_pic, diag::warn_drv_unsupported_diag_option_for_flang, diag::warn_drv_unsupported_longcalls, diag::warn_drv_unsupported_option_for_flang, diag::warn_drv_unsupported_option_for_offload_arch_req_feature, diag::warn_drv_unsupported_option_for_processor, diag::warn_drv_unsupported_option_for_target, diag::warn_drv_unsupported_pic_with_mabicalls, diag::warn_drv_unsupported_sdata, diag::warn_target_override_arm64ec, -1,
  /* DiagArray675 */ diag::ext_typecheck_ordered_comparison_of_function_pointers, diag::warn_typecheck_ordered_comparison_of_function_pointers, -1,
  /* DiagArray676 */ diag::ext_out_of_line_declaration, -1,
  /* DiagArray677 */ diag::ext_use_out_of_scope_declaration, -1,
  /* DiagArray678 */ diag::warn_overaligned_type, -1,
  /* DiagArray680 */ diag::ext_string_too_long, -1,
  /* DiagArray681 */ diag::warn_overloaded_shift_in_comparison, -1,
  /* DiagArray682 */ diag::warn_overloaded_virtual, -1,
  /* DiagArray684 */ diag::warn_fe_override_module, -1,
  /* DiagArray685 */ diag::warn_conflicting_overriding_param_modifiers, diag::warn_conflicting_overriding_param_types, diag::warn_conflicting_overriding_ret_type_modifiers, diag::warn_conflicting_overriding_ret_types, diag::warn_conflicting_overriding_variadic, diag::warn_non_contravariant_overriding_param_types, diag::warn_non_covariant_overriding_ret_types, -1,
  /* DiagArray686 */ diag::warn_drv_overriding_option, -1,
  /* DiagArray687 */ diag::warn_unnecessary_packed, -1,
  /* DiagArray688 */ diag::warn_unpacked_field, -1,
  /* DiagArray689 */ diag::warn_padded_struct_anon_field, diag::warn_padded_struct_field, diag::warn_padded_struct_size, -1,
  /* DiagArray690 */ diag::warn_padded_struct_anon_bitfield, diag::warn_padded_struct_bitfield, -1,
  /* DiagArray691 */ diag::warn_condition_is_assignment, diag::warn_precedence_bitwise_rel, diag::warn_precedence_conditional, -1,
  /* DiagArray692 */ diag::warn_equality_with_extra_parens, -1,
  /* DiagArray694 */ diag::remark_fe_backend_optimization_remark, -1,
  /* DiagArray695 */ diag::remark_fe_backend_optimization_remark_analysis, diag::remark_fe_backend_optimization_remark_analysis_aliasing, diag::remark_fe_backend_optimization_remark_analysis_fpcommute, -1,
  /* DiagArray696 */ diag::warn_fe_backend_optimization_failure, -1,
  /* DiagArray697 */ diag::remark_fe_backend_optimization_remark_missed, -1,
  /* DiagArray698 */ diag::warn_module_uses_date_time, -1,
  /* DiagArray699 */ diag::ext_aggregate_init_not_constant, diag::ext_anonymous_record_with_type, diag::ext_anonymous_struct_union_qualified, diag::ext_array_size_conversion, diag::ext_auto_new_list_init, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_c_empty_initializer, diag::ext_c_nullptr, diag::ext_cast_fn_obj, diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_cxx11_enum_fixed_underlying_type, diag::ext_designated_init, diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_duplicate_declspec, diag::ext_ellipsis_exception_spec, diag::ext_empty_fnmacro_arg, diag::ext_enum_value_not_int, diag::ext_enumerator_list_comma_c, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_instantiation_without_qualified_id, diag::ext_expr_not_ice, diag::ext_extern_template, diag::ext_extra_semi, diag::ext_forward_ref_enum, diag::ext_freestanding_complex, diag::ext_gnu_array_range, diag::ext_hex_constant_invalid, diag::ext_hex_literal_invalid, diag::ext_ident_list_in_param, diag::ext_in_class_initializer_non_constant, diag::ext_integer_complement_complex, diag::ext_integer_increment_complex, diag::ext_internal_in_extern_inline_quiet, diag::ext_line_comment, diag::ext_main_used, diag::ext_mixed_decls_code, diag::ext_multi_line_line_comment, diag::ext_named_variadic_macro, diag::ext_no_newline_eof, diag::ext_nonstandard_escape, diag::ext_ns_enum_attribute, diag::ext_opencl_double_without_pragma, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_pp_bad_vaargs_use, diag::ext_pp_comma_expr, diag::ext_pp_ident_directive, diag::ext_pp_line_too_big, diag::ext_pp_opencl_variadic_macros, diag::ext_pp_warning_directive, diag::ext_return_has_void_expr, diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::ext_subscript_non_lvalue, diag::ext_thread_before, diag::ext_typecheck_addrof_void, diag::ext_typecheck_cast_nonscalar, diag::ext_typecheck_comparison_of_fptr_to_void, diag::ext_typecheck_cond_one_void, diag::ext_typecheck_convert_pointer_void_func, diag::ext_typecheck_ordered_comparison_of_pointer_and_zero, diag::ext_variadic_macro, diag::ext_vla, diag::ext_vla_cxx_in_gnu_mode, diag::ext_vla_cxx_in_gnu_mode_static_assert, diag::warn_defined_in_function_type_macro, diag::warn_ext_c23_attributes, diag::warn_ext_cxx11_attributes, diag::warn_format_conversion_argument_type_mismatch_pedantic, diag::warn_kern_is_method, diag::warn_strict_prototypes, -1,
  /* DiagArray700 */ diag::warn_opencl_unsupported_core_feature, diag::warn_pragma_extension_is_core, -1,
  /* DiagArray702 */ diag::warn_pessimizing_move_on_initialization, diag::warn_pessimizing_move_on_return, -1,
  /* DiagArray703 */ diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::warn_sub_ptr_zero_size_types, -1,
  /* DiagArray704 */ diag::warn_cast_nonnull_to_bool, diag::warn_impcast_pointer_to_bool, -1,
  /* DiagArray705 */ diag::warn_pointer_compare, -1,
  /* DiagArray706 */ diag::ext_typecheck_comparison_of_pointer_integer, -1,
  /* DiagArray707 */ diag::ext_typecheck_convert_incompatible_pointer_sign, -1,
  /* DiagArray708 */ diag::warn_pointer_to_enum_cast, -1,
  /* DiagArray709 */ diag::warn_pointer_to_int_cast, -1,
  /* DiagArray710 */ diag::ext_typecheck_cond_incompatible_pointers, -1,
  /* DiagArray711 */ diag::warn_poison_system_directories, -1,
  /* DiagArray712 */ diag::warn_potentially_direct_selector_expression, -1,
  /* DiagArray713 */ diag::warn_side_effects_typeid, -1,
  /* DiagArray714 */ diag::warn_pragma_attribute_unused, -1,
  /* DiagArray715 */ diag::pp_pragma_once_in_main_file, -1,
  /* DiagArray716 */ diag::warn_pragma_pack_modified_after_include, diag::warn_pragma_pack_no_pop_eof, -1,
  /* DiagArray717 */ diag::warn_pragma_pack_non_default_at_include, -1,
  /* DiagArray718 */ diag::pp_pragma_sysheader_in_main_file, -1,
  /* DiagArray719 */ diag::warn_no_support_for_eval_method_source_on_m32, diag::warn_redefine_extname_not_applied, -1,
  /* DiagArray720 */ diag::warn_cxx11_compat_constexpr_body_invalid_stmt, diag::warn_cxx11_compat_constexpr_body_multiple_return, diag::warn_cxx11_compat_constexpr_body_no_return, diag::warn_cxx11_compat_constexpr_local_var, diag::warn_cxx11_compat_constexpr_type_definition, diag::warn_cxx11_compat_decltype_auto_type_specifier, diag::warn_cxx11_compat_deduced_return_type, diag::warn_cxx11_compat_digit_separator, diag::warn_cxx11_compat_generic_lambda, diag::warn_cxx11_compat_init_capture, diag::warn_cxx11_compat_variable_template, -1,
  /* DiagArray722 */ diag::warn_cxx14_compat_class_template_argument_deduction, diag::warn_cxx14_compat_constexpr_if, diag::warn_cxx14_compat_constexpr_on_lambda, diag::warn_cxx14_compat_decomp_decl, diag::warn_cxx14_compat_fold_expression, diag::warn_cxx14_compat_init_statement, diag::warn_cxx14_compat_inline_variable, diag::warn_cxx14_compat_nested_namespace_definition, diag::warn_cxx14_compat_star_this_lambda_capture, diag::warn_cxx14_compat_static_assert_no_message, diag::warn_cxx14_compat_template_nontype_parm_auto_type, diag::warn_cxx14_compat_template_template_param_typename, diag::warn_cxx14_compat_u8_character_literal, diag::warn_cxx14_compat_using_attribute_ns, diag::warn_cxx17_compat_multi_using_declaration, diag::warn_cxx17_compat_using_declaration_pack, diag::warn_for_range_begin_end_types_differ, -1,
  /* DiagArray723 */ diag::warn_cxx14_compat_ns_enum_attribute, diag::warn_cxx17_hex_literal, -1,
  /* DiagArray724 */ diag::warn_cxx17_compat_adl_only_template_id, diag::warn_cxx17_compat_bitfield_member_init, diag::warn_cxx17_compat_capture_binding, diag::warn_cxx17_compat_constexpr_body_invalid_stmt, diag::warn_cxx17_compat_constexpr_ctor_missing_init, diag::warn_cxx17_compat_constexpr_function_try_block, diag::warn_cxx17_compat_constexpr_local_var_no_init, diag::warn_cxx17_compat_constexpr_union_ctor_no_init, diag::warn_cxx17_compat_constexpr_virtual, diag::warn_cxx17_compat_decomp_decl_spec, diag::warn_cxx17_compat_defaulted_comparison, diag::warn_cxx17_compat_defaulted_method_type_mismatch, diag::warn_cxx17_compat_equals_this_lambda_capture, diag::warn_cxx17_compat_explicit_bool, diag::warn_cxx17_compat_for_range_init_stmt, diag::warn_cxx17_compat_init_capture_pack, diag::warn_cxx17_compat_inline_nested_namespace_definition, diag::warn_cxx17_compat_lambda_def_ctor_assign, diag::warn_cxx17_compat_lambda_template_parameter_list, diag::warn_cxx17_compat_missing_varargs_arg, diag::warn_cxx17_compat_spaceship, diag::warn_cxx17_compat_template_nontype_parm_type, diag::warn_cxx17_compat_unicode_type, diag::warn_cxx17_compat_using_decl_class_member_enumerator, diag::warn_cxx17_compat_using_decl_non_member_enumerator, diag::warn_cxx17_compat_using_decl_scoped_enumerator, diag::warn_cxx17_compat_using_enum_declaration, -1,
  /* DiagArray725 */ diag::warn_cxx17_compat_designated_init, diag::warn_cxx17_compat_pointer_to_const_ref_member_on_rvalue, -1,
  /* DiagArray726 */ diag::ext_subscript_overload, diag::warn_cxx20_alias_in_init_statement, diag::warn_cxx20_compat_auto_expr, diag::warn_cxx20_compat_consteval_if, diag::warn_cxx20_compat_constexpr_body_invalid_stmt, diag::warn_cxx20_compat_constexpr_var, diag::warn_cxx20_compat_decl_attrs_on_lambda, diag::warn_cxx20_compat_label_end_of_compound_statement, diag::warn_cxx20_compat_operator_overload_static, diag::warn_cxx20_compat_size_t_suffix, diag::warn_cxx20_compat_static_lambda, diag::warn_cxx23_compat_defaulted_comparison_constexpr_mismatch, diag::warn_cxx23_compat_pp_directive, diag::warn_cxx23_compat_warning_directive, diag::warn_cxx23_delimited_escape_sequence, -1,
  /* DiagArray728 */ diag::warn_cxx23_placeholder_var_definition, -1,
  /* DiagArray732 */ diag::warn_c17_compat_ellipsis_only_parameter, diag::warn_c17_compat_static_assert_no_message, diag::warn_c23_compat_bitint_suffix, diag::warn_c23_compat_digit_separator, diag::warn_c23_compat_empty_initializer, diag::warn_c23_compat_keyword, diag::warn_c23_compat_label_end_of_compound_statement, diag::warn_c23_compat_label_followed_by_declaration, diag::warn_c23_compat_literal_ucn_control_character, diag::warn_c23_compat_literal_ucn_escape_basic_scs, diag::warn_c23_compat_pp_directive, diag::warn_c23_compat_warning_directive, diag::warn_pre_c23_compat_attributes, -1,
  /* DiagArray736 */ diag::warn_omp51_compat_attributes, -1,
  /* DiagArray737 */ diag::ext_predef_outside_function, -1,
  /* DiagArray738 */ diag::warn_private_extern, -1,
  /* DiagArray739 */ diag::warn_use_of_private_header_outside_module, -1,
  /* DiagArray740 */ diag::warn_mmap_mismatched_private_module_name, diag::warn_mmap_mismatched_private_submodule, diag::warn_mmap_redundant_export_as, diag::warn_no_priv_submodule_use_toplevel, -1,
  /* DiagArray741 */ diag::warn_profile_data_missing, -1,
  /* DiagArray742 */ diag::warn_profile_data_out_of_date, -1,
  /* DiagArray743 */ diag::warn_profile_data_unprofiled, -1,
  /* DiagArray744 */ diag::warn_property_access_suggest, -1,
  /* DiagArray745 */ diag::warn_property_attr_mismatch, diag::warn_property_attribute, diag::warn_property_redecl_getter_mismatch, diag::warn_readonly_property, -1,
  /* DiagArray746 */ diag::warn_unimplemented_protocol_method, -1,
  /* DiagArray747 */ diag::warn_protocol_property_mismatch, -1,
  /* DiagArray748 */ diag::warn_avx_calling_convention, -1,
  /* DiagArray749 */ diag::err_func_returning_qualified_void, -1,
  /* DiagArray750 */ diag::warn_quoted_include_in_framework_header, -1,
  /* DiagArray752 */ diag::warn_for_range_ref_binds_ret_temp, -1,
  /* DiagArray753 */ diag::warn_for_range_const_ref_binds_temp_built_from_ref, diag::warn_for_range_copy, -1,
  /* DiagArray754 */ diag::warn_var_decl_not_read_only, -1,
  /* DiagArray755 */ diag::warn_auto_readonly_iboutlet_property, -1,
  /* DiagArray756 */ diag::warn_bad_receiver_type, -1,
  /* DiagArray757 */ diag::warn_receiver_forward_class, diag::warn_receiver_forward_instance, -1,
  /* DiagArray758 */ diag::ext_member_redeclared, -1,
  /* DiagArray759 */ diag::warn_consteval_if_always_true, -1,
  /* DiagArray761 */ diag::warn_redundant_move_on_return, -1,
  /* DiagArray762 */ diag::warn_redundant_parens_around_declarator, -1,
  /* DiagArray763 */ diag::ext_register_storage_class, -1,
  /* DiagArray764 */ diag::warn_reinterpret_different_from_static, -1,
  /* DiagArray765 */ diag::remark_fe_backend_plugin, -1,
  /* DiagArray767 */ diag::warn_initializer_out_of_order, diag::warn_some_initializers_out_of_order, -1,
  /* DiagArray768 */ diag::ext_designated_init_reordered, -1,
  /* DiagArray769 */ diag::warn_objc_requires_super_protocol, -1,
  /* DiagArray771 */ diag::warn_reserved_extern_symbol, -1,
  /* DiagArray772 */ diag::warn_pp_macro_is_reserved_id, -1,
  /* DiagArray773 */ diag::warn_reserved_module_name, -1,
  /* DiagArray774 */ diag::ext_ms_reserved_user_defined_literal, diag::ext_reserved_user_defined_literal, -1,
  /* DiagArray775 */ diag::warn_pragma_restrict_expansion_macro_use, -1,
  /* DiagArray776 */ diag::ext_retained_language_linkage, -1,
  /* DiagArray778 */ diag::warn_ret_addr_label, diag::warn_ret_local_temp_addr_ref, diag::warn_ret_stack_addr_ref, -1,
  /* DiagArray780 */ diag::ext_return_has_expr, diag::ext_return_missing_expr, diag::warn_falloff_nonvoid_coroutine, diag::warn_falloff_nonvoid_function, diag::warn_falloff_nonvoid_lambda, diag::warn_maybe_falloff_nonvoid_coroutine, diag::warn_maybe_falloff_nonvoid_function, diag::warn_maybe_falloff_nonvoid_lambda, diag::warn_return_missing_expr, -1,
  /* DiagArray781 */ diag::warn_return_value_udt, diag::warn_return_value_udt_incomplete, -1,
  /* DiagArray782 */ diag::ext_ovl_rewrite_equalequal_not_bool, -1,
  /* DiagArray783 */ diag::remark_cc1_round_trip_generated, -1,
  /* DiagArray784 */ diag::warn_no_dynamic_cast_with_rtti_disabled, diag::warn_no_typeid_with_rtti_disabled, -1,
  /* DiagArray785 */ diag::remark_sanitize_address_insert_extra_padding_accepted, diag::remark_sanitize_address_insert_extra_padding_rejected, -1,
  /* DiagArray786 */ diag::warn_drv_sarif_format_unstable, -1,
  /* DiagArray787 */ diag::remark_pp_search_path_usage, -1,
  /* DiagArray788 */ diag::warn_attribute_section_on_redeclaration, diag::warn_duplicate_codeseg_attribute, diag::warn_mismatched_section, -1,
  /* DiagArray789 */ diag::warn_unimplemented_selector, -1,
  /* DiagArray790 */ diag::warn_multiple_selectors, -1,
  /* DiagArray791 */ diag::warn_self_assignment_builtin, -1,
  /* DiagArray792 */ diag::warn_identity_field_assign, -1,
  /* DiagArray793 */ diag::warn_self_assignment_overloaded, -1,
  /* DiagArray794 */ diag::warn_self_move, -1,
  /* DiagArray795 */ diag::warn_semicolon_before_method_body, -1,
  /* DiagArray796 */ diag::warn_missing_sentinel, diag::warn_not_enough_argument, -1,
  /* DiagArray798 */ diag::warn_fe_serialized_diag_failure, diag::warn_fe_serialized_diag_failure_during_finalisation, diag::warn_fe_serialized_diag_merge_failure, -1,
  /* DiagArray799 */ diag::warn_decl_shadow, -1,
  /* DiagArray801 */ diag::warn_shadow_field, -1,
  /* DiagArray802 */ diag::warn_ctor_parm_shadows_field, -1,
  /* DiagArray803 */ diag::warn_modifying_shadowing_decl, -1,
  /* DiagArray804 */ diag::warn_ivar_use_hidden, -1,
  /* DiagArray805 */ diag::warn_decl_shadow_uncaptured_local, -1,
  /* DiagArray806 */ diag::warn_shift_negative, -1,
  /* DiagArray807 */ diag::warn_shift_gt_typewidth, -1,
  /* DiagArray808 */ diag::warn_shift_lhs_negative, -1,
  /* DiagArray809 */ diag::warn_addition_in_bitshift, -1,
  /* DiagArray810 */ diag::warn_shift_result_gt_typewidth, -1,
  /* DiagArray811 */ diag::warn_shift_result_sets_sign_bit, -1,
  /* DiagArray812 */ diag::warn_impcast_integer_64_32, -1,
  /* DiagArray813 */ diag::warn_mixed_sign_comparison, -1,
  /* DiagArray814 */ diag::warn_impcast_integer_sign, diag::warn_impcast_integer_sign_conditional, diag::warn_impcast_nonnegative_result, -1,
  /* DiagArray816 */ diag::warn_no_underlying_type_specified_for_enum_bitfield, -1,
  /* DiagArray817 */ diag::ext_wchar_t_sign_spec, -1,
  /* DiagArray818 */ diag::warn_impcast_single_bit_bitield_precision_constant, -1,
  /* DiagArray819 */ diag::warn_sizeof_array_param, -1,
  /* DiagArray820 */ diag::warn_sizeof_array_decay, -1,
  /* DiagArray821 */ diag::warn_division_sizeof_array, -1,
  /* DiagArray822 */ diag::warn_division_sizeof_ptr, -1,
  /* DiagArray823 */ diag::warn_sizeof_pointer_expr_memaccess, diag::warn_sizeof_pointer_type_memaccess, -1,
  /* DiagArray824 */ diag::warn_slash_u_filename, -1,
  /* DiagArray825 */ diag::warn_slh_does_not_support_asm_goto, -1,
  /* DiagArray826 */ diag::remark_sloc_usage, -1,
  /* DiagArray827 */ diag::warn_sometimes_uninit_var, -1,
  /* DiagArray828 */ diag::warn_fe_source_mgr, -1,
  /* DiagArray829 */ diag::warn_pragma_acc_ignored, diag::warn_pragma_acc_unimplemented, -1,
  /* DiagArray830 */ diag::warn_omp_declare_variant_after_emitted, diag::warn_omp_declare_variant_after_used, diag::warn_omp_declare_variant_marked_as_declare_variant, diag::warn_omp_declare_variant_score_not_constant, diag::warn_omp_nesting_simd, diag::warn_omp_unterminated_declare_target, diag::warn_pragma_omp_ignored, diag::warn_unknown_declare_variant_isa_trait, -1,
  /* DiagArray831 */ diag::warn_sampler_initializer_invalid_bits, -1,
  /* DiagArray833 */ diag::warn_stack_exhausted, -1,
  /* DiagArray834 */ diag::warn_stack_clash_protection_inline_asm, -1,
  /* DiagArray835 */ diag::ext_in_class_initializer_float_type_cxx11, -1,
  /* DiagArray836 */ diag::ext_internal_in_extern_inline, diag::ext_internal_in_extern_inline_quiet, -1,
  /* DiagArray837 */ diag::warn_static_inline_explicit_inst_ignored, -1,
  /* DiagArray838 */ diag::warn_static_local_in_extern_inline, -1,
  /* DiagArray839 */ diag::warn_static_self_reference_in_init, -1,
  /* DiagArray840 */ diag::warn_drv_libstdcxx_not_found, -1,
  /* DiagArray852 */ diag::warn_strict_potentially_direct_selector_expression, -1,
  /* DiagArray853 */ diag::warn_strict_prototypes, -1,
  /* DiagArray854 */ diag::warn_strict_multiple_method_decl, -1,
  /* DiagArray855 */ diag::warn_stringcompare, -1,
  /* DiagArray856 */ diag::warn_concatenated_literal_array_init, -1,
  /* DiagArray857 */ diag::warn_impcast_string_literal_to_bool, -1,
  /* DiagArray858 */ diag::warn_string_plus_char, -1,
  /* DiagArray859 */ diag::warn_string_plus_int, -1,
  /* DiagArray860 */ diag::warn_strlcpycat_wrong_size, -1,
  /* DiagArray861 */ diag::warn_strncat_large_size, diag::warn_strncat_src_size, diag::warn_strncat_wrong_size, -1,
  /* DiagArray862 */ diag::warn_suggest_destructor_marked_not_override_overriding, -1,
  /* DiagArray863 */ diag::warn_suggest_function_marked_not_override_overriding, -1,
  /* DiagArray864 */ diag::ext_typecheck_base_super, -1,
  /* DiagArray865 */ diag::warn_suspicious_bzero_size, -1,
  /* DiagArray867 */ diag::warn_attr_swift_name_decl_kind, diag::warn_attr_swift_name_decl_missing_params, diag::warn_attr_swift_name_function, diag::warn_attr_swift_name_getter_parameters, diag::warn_attr_swift_name_invalid_identifier, diag::warn_attr_swift_name_missing_parameters, diag::warn_attr_swift_name_multiple_selfs, diag::warn_attr_swift_name_num_params, diag::warn_attr_swift_name_setter_parameters, diag::warn_attr_swift_name_subscript_getter_newValue, diag::warn_attr_swift_name_subscript_invalid_parameter, diag::warn_attr_swift_name_subscript_setter_multiple_newValues, diag::warn_attr_swift_name_subscript_setter_no_newValue, -1,
  /* DiagArray868 */ diag::warn_case_value_overflow, diag::warn_missing_case, diag::warn_not_in_enum, -1,
  /* DiagArray869 */ diag::warn_bool_switch_condition, -1,
  /* DiagArray870 */ diag::warn_switch_default, -1,
  /* DiagArray871 */ diag::warn_def_missing_case, -1,
  /* DiagArray872 */ diag::warn_sync_op_misaligned, -1,
  /* DiagArray873 */ diag::warn_sync_fetch_and_nand_semantics_change, -1,
  /* DiagArray875 */ diag::warn_target_clone_mixed_values, -1,
  /* DiagArray876 */ diag::warn_comparison_bitwise_always, diag::warn_comparison_bitwise_or, -1,
  /* DiagArray877 */ diag::warn_alignment_builtin_useless, diag::warn_comparison_always, -1,
  /* DiagArray878 */ diag::warn_integer_constants_in_conditional_always_true, diag::warn_left_shift_always, diag::warn_tautological_bool_compare, -1,
  /* DiagArray880 */ diag::warn_out_of_range_compare, -1,
  /* DiagArray881 */ diag::warn_tautological_negation_and_compare, diag::warn_tautological_negation_or_compare, -1,
  /* DiagArray882 */ diag::warn_tautological_compare_objc_bool, -1,
  /* DiagArray883 */ diag::warn_tautological_overlap_comparison, -1,
  /* DiagArray884 */ diag::warn_nonnull_expr_compare, diag::warn_null_pointer_compare, -1,
  /* DiagArray885 */ diag::warn_tautological_constant_compare, -1,
  /* DiagArray886 */ diag::warn_address_of_reference_null_compare, diag::warn_this_null_compare, -1,
  /* DiagArray887 */ diag::warn_unsigned_char_always_true_comparison, -1,
  /* DiagArray888 */ diag::warn_unsigned_enum_always_true_comparison, -1,
  /* DiagArray889 */ diag::warn_unsigned_always_true_comparison, -1,
  /* DiagArray890 */ diag::warn_tautological_compare_value_range, -1,
  /* DiagArray891 */ diag::warn_tcb_enforcement_violation, -1,
  /* DiagArray892 */ diag::ext_typecheck_decl_incomplete_type, -1,
  /* DiagArray894 */ diag::warn_acquired_before, diag::warn_acquired_before_after_cycle, diag::warn_cannot_resolve_lock, diag::warn_double_lock, diag::warn_expecting_lock_held_on_loop, diag::warn_expecting_locked, diag::warn_fun_excludes_mutex, diag::warn_fun_requires_lock, diag::warn_fun_requires_negative_cap, diag::warn_lock_exclusive_and_shared, diag::warn_lock_some_predecessors, diag::warn_no_unlock, diag::warn_unlock_but_no_lock, diag::warn_unlock_kind_mismatch, diag::warn_var_deref_requires_any_lock, diag::warn_var_deref_requires_lock, diag::warn_variable_requires_any_lock, diag::warn_variable_requires_lock, -1,
  /* DiagArray895 */ diag::warn_thread_attribute_argument_not_lockable, diag::warn_thread_attribute_decl_not_lockable, diag::warn_thread_attribute_decl_not_pointer, diag::warn_thread_attribute_ignored, diag::warn_thread_attribute_not_on_capability_member, diag::warn_thread_attribute_not_on_non_static_member, -1,
  /* DiagArray896 */ diag::warn_thread_safety_beta, -1,
  /* DiagArray897 */ diag::warn_acquire_requires_negative_cap, -1,
  /* DiagArray898 */ diag::warn_fun_requires_lock_precise, diag::warn_var_deref_requires_lock_precise, diag::warn_variable_requires_lock_precise, -1,
  /* DiagArray899 */ diag::warn_guarded_pass_by_reference, diag::warn_pt_guarded_pass_by_reference, -1,
  /* DiagArray900 */ diag::warn_guarded_return_by_reference, diag::warn_pt_guarded_return_by_reference, -1,
  /* DiagArray901 */ diag::warn_thread_safety_verbose, -1,
  /* DiagArray902 */ diag::trigraph_converted, diag::trigraph_ends_block_comment, diag::trigraph_ignored, diag::trigraph_ignored_block_comment, -1,
  /* DiagArray904 */ diag::warn_type_safety_null_pointer_required, diag::warn_type_safety_type_mismatch, diag::warn_type_tag_for_datatype_wrong_kind, -1,
  /* DiagArray905 */ diag::ext_redefinition_of_typedef, -1,
  /* DiagArray906 */ diag::ext_typename_missing, -1,
  /* DiagArray907 */ diag::warn_fe_unable_to_open_stats_file, -1,
  /* DiagArray908 */ diag::warn_unaligned_access, -1,
  /* DiagArray909 */ diag::warn_imp_cast_drops_unaligned, -1,
  /* DiagArray910 */ diag::warn_unavailable_fwdclass_message, -1,
  /* DiagArray911 */ diag::warn_undeclared_selector, diag::warn_undeclared_selector_with_typo, -1,
  /* DiagArray912 */ diag::warn_pp_undef_identifier, -1,
  /* DiagArray913 */ diag::warn_pp_undef_prefix, -1,
  /* DiagArray914 */ diag::warn_attribute_arm_sm_incompat_builtin, -1,
  /* DiagArray915 */ diag::warn_attribute_arm_za_builtin_no_za_state, -1,
  /* DiagArray916 */ diag::warn_attribute_arm_zt0_builtin_no_zt0_state, -1,
  /* DiagArray917 */ diag::warn_address_of_reference_bool_conversion, diag::warn_this_bool_conversion, -1,
  /* DiagArray918 */ diag::warn_func_template_missing, -1,
  /* DiagArray919 */ diag::warn_undefined_inline, -1,
  /* DiagArray920 */ diag::warn_undefined_internal, -1,
  /* DiagArray921 */ diag::ext_undefined_internal_type, -1,
  /* DiagArray922 */ diag::warn_pointer_indirection_from_incompatible_type, diag::warn_undefined_reinterpret_cast, -1,
  /* DiagArray923 */ diag::warn_var_template_missing, -1,
  /* DiagArray924 */ diag::warn_throw_underaligned_obj, -1,
  /* DiagArray925 */ diag::warn_side_effects_unevaluated_context, -1,
  /* DiagArray926 */ diag::warn_unguarded_availability, -1,
  /* DiagArray927 */ diag::warn_unguarded_availability_new, -1,
  /* DiagArray928 */ diag::warn_delimited_ucn_empty, diag::warn_delimited_ucn_incomplete, diag::warn_ucn_escape_incomplete, diag::warn_ucn_escape_no_digits, diag::warn_ucn_escape_surrogate, diag::warn_ucn_not_valid_in_c89, diag::warn_ucn_not_valid_in_c89_literal, -1,
  /* DiagArray929 */ diag::warn_utf8_symbol_homoglyph, -1,
  /* DiagArray930 */ diag::ext_unicode_whitespace, -1,
  /* DiagArray931 */ diag::warn_utf8_symbol_zero_width, -1,
  /* DiagArray932 */ diag::warn_base_class_is_uninit, diag::warn_field_is_uninit, diag::warn_reference_field_is_uninit, diag::warn_uninit_byref_blockvar_captured_by_block, diag::warn_uninit_self_reference_in_init, diag::warn_uninit_self_reference_in_reference_init, diag::warn_uninit_var, -1,
  /* DiagArray933 */ diag::warn_uninit_const_reference, -1,
  /* DiagArray934 */ diag::warn_drv_potentially_misspelled_joined_argument, diag::warn_drv_unknown_argument_clang_cl, diag::warn_drv_unknown_argument_clang_cl_with_suggestion, -1,
  /* DiagArray935 */ diag::warn_assume_attribute_string_unknown, -1,
  /* DiagArray936 */ diag::warn_unknown_attribute_ignored, -1,
  /* DiagArray937 */ diag::warn_drv_new_cuda_version, diag::warn_drv_partially_supported_cuda_version, -1,
  /* DiagArray938 */ diag::warn_pp_invalid_directive, -1,
  /* DiagArray939 */ diag::ext_unknown_escape, -1,
  /* DiagArray940 */ diag::ext_on_off_switch_syntax, diag::ext_pragma_syntax_eod, diag::ext_stdc_pragma_ignored, diag::warn_pragma_diagnostic_cannot_pop, diag::warn_pragma_diagnostic_invalid, diag::warn_pragma_diagnostic_invalid_option, diag::warn_pragma_diagnostic_invalid_token, diag::warn_pragma_exec_charset_expected, diag::warn_pragma_exec_charset_push_invalid, diag::warn_pragma_exec_charset_spec_invalid, diag::warn_pragma_ignored, diag::warn_pragma_include_alias_expected, diag::warn_pragma_include_alias_expected_filename, diag::warn_pragma_include_alias_mismatch_angle, diag::warn_pragma_include_alias_mismatch_quote, diag::warn_pragma_warning_expected, diag::warn_pragma_warning_expected_number, diag::warn_pragma_warning_push_level, diag::warn_pragma_warning_spec_invalid, diag::warn_stdc_fenv_round_not_supported, -1,
  /* DiagArray941 */ diag::warn_unknown_sanitizer_ignored, -1,
  /* DiagArray942 */ diag::warn_pragma_diagnostic_unknown_warning, diag::warn_unknown_diag_option, diag::warn_unknown_warning_specifier, -1,
  /* DiagArray943 */ diag::ext_template_arg_unnamed_type, -1,
  /* DiagArray944 */ diag::warn_unneeded_internal_decl, diag::warn_unneeded_static_internal_decl, -1,
  /* DiagArray945 */ diag::warn_unneeded_member_function, -1,
  /* DiagArray946 */ diag::warn_unqualified_call_to_std_cast_function, -1,
  /* DiagArray947 */ diag::warn_unreachable, -1,
  /* DiagArray949 */ diag::warn_unreachable_break, -1,
  /* DiagArray950 */ diag::warn_unreachable_fallthrough_attr, -1,
  /* DiagArray951 */ diag::warn_unreachable_association, -1,
  /* DiagArray952 */ diag::warn_unreachable_loop_increment, -1,
  /* DiagArray953 */ diag::warn_unreachable_return, -1,
  /* DiagArray954 */ diag::warn_unsafe_buffer_operation, diag::warn_unsafe_buffer_variable, -1,
  /* DiagArray956 */ diag::warn_unsequenced_mod_mod, diag::warn_unsequenced_mod_use, -1,
  /* DiagArray957 */ diag::warn_drv_no_floating_point_registers, diag::warn_drv_unsupported_float_abi_by_lib, -1,
  /* DiagArray958 */ diag::warn_target_unsupported_abs2008, diag::warn_target_unsupported_abslegacy, -1,
  /* DiagArray959 */ diag::warn_at_available_unchecked_use, -1,
  /* DiagArray960 */ diag::warn_target_unsupported_compact_branches, -1,
  /* DiagArray961 */ diag::warn_attribute_dll_instantiated_base_class, -1,
  /* DiagArray962 */ diag::warn_fe_backend_unsupported_fp_exceptions, diag::warn_fe_backend_unsupported_fp_rounding, -1,
  /* DiagArray963 */ diag::warn_template_qualified_friend_ignored, diag::warn_template_qualified_friend_unsupported, -1,
  /* DiagArray964 */ diag::warn_drv_unsupported_gpopt, -1,
  /* DiagArray965 */ diag::warn_target_unsupported_nan2008, diag::warn_target_unsupported_nanlegacy, -1,
  /* DiagArray966 */ diag::warn_drv_dwarf_version_limited_by_target, diag::warn_drv_unsupported_debug_info_opt_for_target, -1,
  /* DiagArray967 */ diag::warn_attribute_protected_visibility, -1,
  /* DiagArray968 */ diag::ext_partial_specs_not_deducible, -1,
  /* DiagArray971 */ diag::warn_unused_but_set_parameter, -1,
  /* DiagArray972 */ diag::warn_unused_but_set_variable, -1,
  /* DiagArray973 */ diag::warn_drv_diagnostics_hotness_requires_pgo, diag::warn_drv_diagnostics_misexpect_requires_pgo, diag::warn_drv_empty_joined_argument, diag::warn_drv_input_file_unused, diag::warn_drv_input_file_unused_by_cpp, diag::warn_drv_invalid_arch_name_with_suggestion, diag::warn_drv_large_data_threshold_invalid_code_model, diag::warn_drv_preprocessed_input_file_unused, diag::warn_drv_unused_argument, diag::warn_drv_unused_x, diag::warn_ignored_clang_option, diag::warn_ignoring_fdiscard_for_bitcode, diag::warn_ignoring_verify_debuginfo_preserve_export, -1,
  /* DiagArray974 */ diag::warn_unused_comparison, -1,
  /* DiagArray975 */ diag::warn_unused_const_variable, -1,
  /* DiagArray976 */ diag::warn_unused_exception_param, -1,
  /* DiagArray977 */ diag::warn_unused_function, -1,
  /* DiagArray978 */ diag::warn_unused_property_expr, -1,
  /* DiagArray979 */ diag::warn_unused_label, -1,
  /* DiagArray980 */ diag::warn_unused_lambda_capture, -1,
  /* DiagArray981 */ diag::warn_unused_local_typedef, -1,
  /* DiagArray983 */ diag::pp_macro_not_used, -1,
  /* DiagArray984 */ diag::warn_unused_member_function, -1,
  /* DiagArray985 */ diag::warn_unused_parameter, -1,
  /* DiagArray986 */ diag::warn_unused_private_field, -1,
  /* DiagArray987 */ diag::warn_unused_property_backing_ivar, -1,
  /* DiagArray988 */ diag::warn_unused_result, diag::warn_unused_result_msg, -1,
  /* DiagArray989 */ diag::warn_unused_template, -1,
  /* DiagArray990 */ diag::warn_unused_call, diag::warn_unused_comma_left_operand, diag::warn_unused_constructor, diag::warn_unused_constructor_msg, diag::warn_unused_container_subscript_expr, diag::warn_unused_expr, diag::warn_unused_voidptr, -1,
  /* DiagArray991 */ diag::warn_unused_variable, -1,
  /* DiagArray992 */ diag::warn_unused_volatile, -1,
  /* DiagArray993 */ diag::warn_used_but_marked_unused, -1,
  /* DiagArray994 */ diag::warn_user_literal_reserved, -1,
  /* DiagArray995 */ diag::warn_diagnose_if_succeeded, -1,
  /* DiagArray996 */ diag::warn_second_arg_of_va_start_not_last_named_param, diag::warn_second_parameter_to_va_arg_never_compatible, diag::warn_va_start_type_is_undefined, -1,
  /* DiagArray997 */ diag::ext_named_variadic_macro, diag::ext_pp_bad_vaopt_use, diag::ext_variadic_macro, -1,
  /* DiagArray998 */ diag::warn_typecheck_vector_element_sizes_not_equal, -1,
  /* DiagArray999 */ diag::warn_incompatible_vectors, -1,
  /* DiagArray1001 */ diag::warn_empty_parens_are_function_decl, diag::warn_parens_disambiguated_as_function_declaration, diag::warn_parens_disambiguated_as_variable_declaration, -1,
  /* DiagArray1002 */ diag::warn_decl_in_param_list, diag::warn_redefinition_in_param_list, -1,
  /* DiagArray1003 */ diag::warn_vla_used, -1,
  /* DiagArray1004 */ diag::ext_vla_cxx, diag::ext_vla_cxx_in_gnu_mode, -1,
  /* DiagArray1005 */ diag::ext_vla, -1,
  /* DiagArray1006 */ diag::ext_vla_cxx_in_gnu_mode_static_assert, diag::ext_vla_cxx_static_assert, -1,
  /* DiagArray1007 */ diag::warn_void_pointer_to_enum_cast, -1,
  /* DiagArray1008 */ diag::warn_void_pointer_to_int_cast, -1,
  /* DiagArray1009 */ diag::ext_typecheck_indirection_through_void_pointer, -1,
  /* DiagArray1011 */ diag::warn_wasm_dynamic_exception_spec_ignored, -1,
  /* DiagArray1012 */ diag::warn_weak_template_vtable, -1,
  /* DiagArray1013 */ diag::warn_weak_vtable, -1,
  /* DiagArray1014 */ diag::ext_deprecated_string_literal_conversion, -1,
  /* DiagArray1016 */ diag::warn_xor_used_as_pow, diag::warn_xor_used_as_pow_base, diag::warn_xor_used_as_pow_base_extra, -1,
  /* DiagArray1017 */ diag::warn_zero_as_null_pointer_constant, -1,
  /* DiagArray1018 */ diag::ext_typecheck_zero_array_size, -1,
};

static const int16_t DiagSubGroups[] = {
  /* Empty */ -1,
  /* DiagSubGroup0 */ 310, -1,
  /* DiagSubGroup4 */ 17, 310, -1,
  /* DiagSubGroup11 */ 704, 855, 884, -1,
  /* DiagSubGroup17 */ 575, 691, 868, 869, 543, 688, 1004, -1,
  /* DiagSubGroup28 */ 220, -1,
  /* DiagSubGroup31 */ 38, 37, 34, -1,
  /* DiagSubGroup36 */ 33, -1,
  /* DiagSubGroup44 */ 45, -1,
  /* DiagSubGroup54 */ 408, 197, -1,
  /* DiagSubGroup58 */ 936, 398, -1,
  /* DiagSubGroup69 */ 105, 137, 363, -1,
  /* DiagSubGroup70 */ 140, -1,
  /* DiagSubGroup73 */ 818, -1,
  /* DiagSubGroup80 */ 704, 917, -1,
  /* DiagSubGroup81 */ 80, -1,
  /* DiagSubGroup82 */ 77, -1,
  /* DiagSubGroup91 */ 94, -1,
  /* DiagSubGroup92 */ 98, -1,
  /* DiagSubGroup93 */ 102, -1,
  /* DiagSubGroup94 */ 102, 97, 95, 720, 722, 724, 726, -1,
  /* DiagSubGroup96 */ 94, 721, 723, 725, 727, -1,
  /* DiagSubGroup98 */ 99, 100, 101, -1,
  /* DiagSubGroup102 */ 103, -1,
  /* DiagSubGroup106 */ 722, 724, 726, -1,
  /* DiagSubGroup107 */ 106, 723, 725, 727, -1,
  /* DiagSubGroup108 */ 105, 104, -1,
  /* DiagSubGroup110 */ 247, 238, 111, 724, 726, -1,
  /* DiagSubGroup112 */ 110, 725, 727, -1,
  /* DiagSubGroup113 */ 109, -1,
  /* DiagSubGroup114 */ 108, -1,
  /* DiagSubGroup115 */ 110, -1,
  /* DiagSubGroup116 */ 111, -1,
  /* DiagSubGroup117 */ 113, -1,
  /* DiagSubGroup119 */ 726, -1,
  /* DiagSubGroup120 */ 119, 727, -1,
  /* DiagSubGroup122 */ 121, 118, -1,
  /* DiagSubGroup124 */ 125, -1,
  /* DiagSubGroup127 */ 119, -1,
  /* DiagSubGroup128 */ 120, -1,
  /* DiagSubGroup129 */ 122, -1,
  /* DiagSubGroup130 */ 124, -1,
  /* DiagSubGroup131 */ 126, -1,
  /* DiagSubGroup132 */ 724, -1,
  /* DiagSubGroup133 */ 725, -1,
  /* DiagSubGroup134 */ 722, -1,
  /* DiagSubGroup135 */ 723, -1,
  /* DiagSubGroup136 */ 720, -1,
  /* DiagSubGroup138 */ 721, -1,
  /* DiagSubGroup139 */ 142, 144, 720, 722, 724, 726, -1,
  /* DiagSubGroup143 */ 139, 140, 141, 721, 723, 725, 727, -1,
  /* DiagSubGroup148 */ 146, -1,
  /* DiagSubGroup149 */ 147, -1,
  /* DiagSubGroup151 */ 121, -1,
  /* DiagSubGroup152 */ 151, -1,
  /* DiagSubGroup154 */ 172, -1,
  /* DiagSubGroup157 */ 158, -1,
  /* DiagSubGroup166 */ 595, -1,
  /* DiagSubGroup170 */ 169, -1,
  /* DiagSubGroup174 */ 175, 176, -1,
  /* DiagSubGroup180 */ 73, 622, -1,
  /* DiagSubGroup185 */ 80, 180, 295, 74, 321, 812, 456, 418, 415, 489, 592, 610, 633, 814, 857, -1,
  /* DiagSubGroup186 */ 610, -1,
  /* DiagSubGroup188 */ 189, 230, 20, 187, -1,
  /* DiagSubGroup191 */ 2, -1,
  /* DiagSubGroup199 */ 201, 203, 202, 778, -1,
  /* DiagSubGroup215 */ 214, 212, -1,
  /* DiagSubGroup218 */ 220, 221, 222, 224, 225, 227, 231, 232, 233, 234, 235, 236, 223, 238, 239, 245, 247, 249, 250, 251, 252, 246, -1,
  /* DiagSubGroup225 */ 228, -1,
  /* DiagSubGroup226 */ 227, -1,
  /* DiagSubGroup227 */ 229, -1,
  /* DiagSubGroup243 */ 244, -1,
  /* DiagSubGroup252 */ 95, -1,
  /* DiagSubGroup258 */ 259, -1,
  /* DiagSubGroup263 */ 265, 264, -1,
  /* DiagSubGroup266 */ 267, -1,
  /* DiagSubGroup279 */ 232, -1,
  /* DiagSubGroup281 */ 597, -1,
  /* DiagSubGroup290 */ 314, -1,
  /* DiagSubGroup291 */ 293, 233, -1,
  /* DiagSubGroup292 */ 234, -1,
  /* DiagSubGroup295 */ 296, 297, 292, -1,
  /* DiagSubGroup296 */ 235, -1,
  /* DiagSubGroup297 */ 236, -1,
  /* DiagSubGroup310 */ 225, 552, 405, 449, 795, 555, 813, 985, 971, 612, 613, 287, 856, 351, -1,
  /* DiagSubGroup312 */ 141, 99, -1,
  /* DiagSubGroup313 */ 287, -1,
  /* DiagSubGroup321 */ 323, 324, -1,
  /* DiagSubGroup326 */ 327, 340, 598, 335, 339, 329, 328, 332, 336, -1,
  /* DiagSubGroup332 */ 333, -1,
  /* DiagSubGroup336 */ 337, -1,
  /* DiagSubGroup341 */ 331, 335, 339, -1,
  /* DiagSubGroup342 */ 332, 336, -1,
  /* DiagSubGroup346 */ 345, -1,
  /* DiagSubGroup350 */ 875, -1,
  /* DiagSubGroup352 */ 104, 109, 118, -1,
  /* DiagSubGroup358 */ 359, 360, 362, 363, 364, 365, 366, 367, 368, 370, 1005, 371, 372, 373, 374, 375, 377, 378, 379, 380, 381, 758, 382, 383, 385, 386, 387, 388, 1018, 389, 390, -1,
  /* DiagSubGroup383 */ 384, -1,
  /* DiagSubGroup404 */ 402, 403, -1,
  /* DiagSubGroup405 */ 406, -1,
  /* DiagSubGroup407 */ 416, 417, -1,
  /* DiagSubGroup412 */ 413, -1,
  /* DiagSubGroup415 */ 419, 656, -1,
  /* DiagSubGroup418 */ 657, -1,
  /* DiagSubGroup419 */ 409, -1,
  /* DiagSubGroup434 */ 435, 429, -1,
  /* DiagSubGroup440 */ 442, 594, -1,
  /* DiagSubGroup446 */ 238, -1,
  /* DiagSubGroup457 */ 456, -1,
  /* DiagSubGroup459 */ 460, -1,
  /* DiagSubGroup462 */ 401, -1,
  /* DiagSubGroup491 */ 142, -1,
  /* DiagSubGroup494 */ 101, -1,
  /* DiagSubGroup495 */ 325, 751, -1,
  /* DiagSubGroup507 */ 511, 516, 528, 514, 524, 533, 508, 539, 520, 540, 530, 531, 538, 522, 519, 515, 536, 532, 518, 526, 525, 523, 510, 513, 541, 509, 512, 517, 534, 529, 535, 443, -1,
  /* DiagSubGroup536 */ 537, -1,
  /* DiagSubGroup575 */ 43, 82, 163, 169, 215, 326, 325, 344, 407, 447, 458, 547, 548, 576, 580, 753, 766, 780, 791, 794, 819, 820, 859, 877, 902, 932, 940, 969, 1010, 638, 626, 629, 682, 738, 159, 308, 995, -1,
  /* DiagSubGroup576 */ 702, 761, 779, 794, -1,
  /* DiagSubGroup577 */ 528, -1,
  /* DiagSubGroup583 */ 102, -1,
  /* DiagSubGroup589 */ 111, -1,
  /* DiagSubGroup591 */ 813, 185, 490, -1,
  /* DiagSubGroup594 */ 593, -1,
  /* DiagSubGroup612 */ 379, -1,
  /* DiagSubGroup615 */ 616, -1,
  /* DiagSubGroup625 */ 652, -1,
  /* DiagSubGroup632 */ 658, -1,
  /* DiagSubGroup652 */ 653, -1,
  /* DiagSubGroup655 */ 657, 656, 622, 882, -1,
  /* DiagSubGroup664 */ 829, -1,
  /* DiagSubGroup666 */ 830, 668, 670, 672, 671, 667, 669, 673, -1,
  /* DiagSubGroup672 */ 671, -1,
  /* DiagSubGroup683 */ 449, -1,
  /* DiagSubGroup687 */ 688, -1,
  /* DiagSubGroup689 */ 690, -1,
  /* DiagSubGroup691 */ 493, 492, 76, 78, 809, 681, 692, 200, -1,
  /* DiagSubGroup693 */ 926, -1,
  /* DiagSubGroup699 */ 145, 99, 101, 104, 105, 109, 118, 121, 320, 352, 360, 362, 363, 364, 365, 366, 367, 370, 371, 372, 374, 375, 377, 378, 379, 380, 381, 382, 383, 387, 389, 390, 482, 494, 511, 512, 514, 517, 519, 524, 525, 532, 680, 1018, 268, 485, 479, 216, 423, 284, 288, 618, 317, 355, 72, 59, 921, 776, 173, 584, 123, -1,
  /* DiagSubGroup701 */ 245, 496, 87, 775, 316, -1,
  /* DiagSubGroup703 */ 381, -1,
  /* DiagSubGroup708 */ 1007, -1,
  /* DiagSubGroup709 */ 708, 1008, -1,
  /* DiagSubGroup716 */ 717, -1,
  /* DiagSubGroup719 */ 940, 404, 714, 716, -1,
  /* DiagSubGroup721 */ 720, 137, -1,
  /* DiagSubGroup723 */ 722, -1,
  /* DiagSubGroup725 */ 724, -1,
  /* DiagSubGroup727 */ 726, -1,
  /* DiagSubGroup729 */ 728, -1,
  /* DiagSubGroup730 */ 728, -1,
  /* DiagSubGroup731 */ 729, -1,
  /* DiagSubGroup733 */ 732, -1,
  /* DiagSubGroup734 */ 732, -1,
  /* DiagSubGroup735 */ 733, -1,
  /* DiagSubGroup751 */ 753, 752, -1,
  /* DiagSubGroup763 */ 247, -1,
  /* DiagSubGroup766 */ 767, 768, -1,
  /* DiagSubGroup770 */ 772, -1,
  /* DiagSubGroup771 */ 772, 773, 994, -1,
  /* DiagSubGroup774 */ 97, -1,
  /* DiagSubGroup777 */ 778, -1,
  /* DiagSubGroup780 */ 781, -1,
  /* DiagSubGroup789 */ 790, -1,
  /* DiagSubGroup791 */ 793, 792, -1,
  /* DiagSubGroup797 */ 956, -1,
  /* DiagSubGroup799 */ 803, 804, -1,
  /* DiagSubGroup800 */ 799, 802, 805, 801, -1,
  /* DiagSubGroup802 */ 803, -1,
  /* DiagSubGroup832 */ 831, -1,
  /* DiagSubGroup835 */ 385, -1,
  /* DiagSubGroup852 */ 712, -1,
  /* DiagSubGroup853 */ 241, -1,
  /* DiagSubGroup866 */ 823, 278, 605, 504, 865, -1,
  /* DiagSubGroup877 */ 878, 884, 883, 876, 886, 882, 881, -1,
  /* DiagSubGroup878 */ 880, -1,
  /* DiagSubGroup879 */ 903, 890, -1,
  /* DiagSubGroup893 */ 895, 894, 898, 899, -1,
  /* DiagSubGroup899 */ 900, -1,
  /* DiagSubGroup903 */ 885, 889, 887, 888, -1,
  /* DiagSubGroup925 */ 713, -1,
  /* DiagSubGroup926 */ 927, -1,
  /* DiagSubGroup932 */ 827, 839, 933, -1,
  /* DiagSubGroup943 */ 144, -1,
  /* DiagSubGroup947 */ 952, 950, 951, -1,
  /* DiagSubGroup948 */ 947, 949, 953, -1,
  /* DiagSubGroup954 */ 955, -1,
  /* DiagSubGroup969 */ 970, 977, 979, 986, 980, 981, 990, 991, 972, 987, -1,
  /* DiagSubGroup977 */ 944, -1,
  /* DiagSubGroup982 */ 981, -1,
  /* DiagSubGroup984 */ 945, -1,
  /* DiagSubGroup989 */ 944, -1,
  /* DiagSubGroup990 */ 974, 988, 925, -1,
  /* DiagSubGroup991 */ 975, -1,
  /* DiagSubGroup1000 */ 999, -1,
  /* DiagSubGroup1003 */ 1005, -1,
  /* DiagSubGroup1004 */ 1006, -1,
  /* DiagSubGroup1005 */ 1004, -1,
  /* DiagSubGroup1008 */ 1007, -1,
  /* DiagSubGroup1014 */ 252, -1,
  /* DiagSubGroup1015 */ 1014, -1,
};

static const char DiagGroupNames[] = {
    "\000\020#pragma-messages\t#warnings\020CFString-literal\003CL4\032Indep"
    "endentClass-attribute\022NSObject-attribute\003abi\016absolute-value\024"
    "abstract-final-class\023abstract-vbase-init\007address\030address-of-pa"
    "cked-member\024address-of-temporary\020aggregate-return\naix-compat\016"
    "align-mismatch\003all\006alloca\031alloca-with-align-alignof\027always-"
    "inline-coroutine\020ambiguous-delete\022ambiguous-ellipsis\017ambiguous"
    "-macro\031ambiguous-member-template\033ambiguous-reversed-operator\034a"
    "nalyzer-incompatible-plugin\034android-unversioned-fallback\031anon-enu"
    "m-enum-conversion\025anonymous-pack-parens\010apinotes\003arc%arc-bridg"
    "e-casts-disallowed-in-nonarc\036arc-maybe-repeated-use-of-weak\025arc-n"
    "on-pod-memaccess\031arc-performSelector-leaks\030arc-repeated-use-of-we"
    "ak\021arc-retain-cycles\032arc-unsafe-retained-assign\026argument-outsi"
    "de-range\034argument-undefined-behaviour\014array-bounds\037array-bound"
    "s-pointer-arithmetic\017array-parameter\003asm\022asm-operand-widths\013"
    "assign-enum\006assume\013at-protocol\034atimport-in-framework-header\015"
    "atomic-access\020atomic-alignment\027atomic-implicit-seq-cst\026atomic-"
    "memory-ordering\021atomic-properties*atomic-property-with-user-defined-"
    "accessor\035attribute-packed-for-bitfield\021attribute-warning\nattribu"
    "tes\024auto-decl-extensions\033auto-disable-vptr-sanitizer\013auto-impo"
    "rt\022auto-storage-class\013auto-var-id\014availability\030avr-rtlib-li"
    "nking-quirks\016backend-plugin\030backslash-newline-escape\021bad-funct"
    "ion-cast\016binary-literal\026bind-to-temporary-copy\024binding-in-cond"
    "ition\021bit-int-extension\034bitfield-constant-conversion\030bitfield-"
    "enum-conversion\016bitfield-width\037bitwise-conditional-parentheses\032"
    "bitwise-instead-of-logical\026bitwise-op-parentheses\033block-capture-a"
    "utoreleasing\017bool-conversion\020bool-conversions\016bool-operation\022"
    "braced-scalar-init\021branch-protection\013bridge-cast builtin-assume-a"
    "ligned-alignment\027builtin-macro-redefined\027builtin-memcpy-chk-size\027"
    "builtin-requires-header\nc++-compat\014c++0x-compat\020c++0x-extensions"
    "\017c++0x-narrowing\014c++11-compat(c++11-compat-deprecated-writable-st"
    "rings\025c++11-compat-pedantic*c++11-compat-reserved-user-defined-liter"
    "al\020c++11-extensions\020c++11-extra-semi\026c++11-inline-namespace\017"
    "c++11-long-long\017c++11-narrowing\037c++11-narrowing-const-reference\032"
    "c++14-attribute-extensions\024c++14-binary-literal\014c++14-compat\025c"
    "++14-compat-pedantic\020c++14-extensions\032c++17-attribute-extensions\014"
    "c++17-compat\025c++17-compat-mangling\025c++17-compat-pedantic\020c++17"
    "-extensions\020c++1y-extensions\014c++1z-compat\025c++1z-compat-manglin"
    "g\020c++1z-extensions\032c++20-attribute-extensions\014c++20-compat\025"
    "c++20-compat-pedantic\020c++20-designator\020c++20-extensions$c++23-def"
    "ault-comp-relaxed-constexpr\020c++23-extensions\027c++23-lambda-attribu"
    "tes\020c++26-extensions\014c++2a-compat\025c++2a-compat-pedantic\020c++"
    "2a-extensions\020c++2b-extensions\020c++2c-extensions\036c++98-c++11-c+"
    "+14-c++17-compat'c++98-c++11-c++14-c++17-compat-pedantic\030c++98-c++11"
    "-c++14-compat!c++98-c++11-c++14-compat-pedantic\022c++98-c++11-compat!c"
    "++98-c++11-compat-binary-literal\033c++98-c++11-compat-pedantic\014c++9"
    "8-compat#c++98-compat-bind-to-temporary-copy\027c++98-compat-extra-semi"
    "%c++98-compat-local-type-template-args\025c++98-compat-pedantic'c++98-c"
    "ompat-unnamed-type-template-args\016c11-extensions\nc23-compat\016c23-e"
    "xtensions\nc2x-compat\016c2x-extensions\nc99-compat\016c99-designator\016"
    "c99-extensions#call-to-pure-virtual-from-ctor-dtor\025called-once-param"
    "eter\ncast-align\027cast-calling-convention\022cast-function-type\031ca"
    "st-function-type-strict\020cast-of-sel-type\tcast-qual\023cast-qual-unr"
    "elated\nchar-align\017char-subscripts\014clang-cl-pch\020class-conversi"
    "on\015class-varargs\017cmse-union-leak\005comma\007comment\010comments\036"
    "compare-distinct-pointer-types\022completion-handler\026complex-compone"
    "nt-init\024compound-token-split\035compound-token-split-by-macro\035com"
    "pound-token-split-by-space\031conditional-type-mismatch\031conditional-"
    "uninitialized\015config-macros\023constant-conversion\022constant-evalu"
    "ated\030constant-logical-operand\023constexpr-not-const\010consumed\nco"
    "nversion\017conversion-null$coro-non-aligned-allocation-function\tcorou"
    "tine%coroutine-missing-unhandled-exception\026covered-switch-default\003"
    "cpp\030cstring-format-directive\026ctad-maybe-unsupported\021ctor-dtor-"
    "privacy\003ctu\013cuda-compat\030custom-atomic-properties\027cxx-attrib"
    "ute-extension\010dangling\015dangling-else\016dangling-field\014danglin"
    "g-gsl\031dangling-initializer-list\023darwin-sdk-settings\tdate-time\023"
    "dealloc-in-category\035debug-compression-unavailable\033declaration-aft"
    "er-statement\032defaulted-function-deleted!delayed-template-parsing-in-"
    "cxx20\026delegating-ctor-cycles delete-abstract-non-virtual-dtor\021del"
    "ete-incomplete$delete-non-abstract-non-virtual-dtor\027delete-non-virtu"
    "al-dtor#delimited-escape-sequence-extension\032deprecate-lax-vec-conv-a"
    "ll\ndeprecated\035deprecated-altivec-src-compat$deprecated-anon-enum-en"
    "um-conversion\030deprecated-array-compare\025deprecated-attributes\023d"
    "eprecated-builtins\032deprecated-comma-subscript\017deprecated-copy\024"
    "deprecated-copy-dtor\031deprecated-copy-with-dtor'deprecated-copy-with-"
    "user-provided-copy'deprecated-copy-with-user-provided-dtor\024deprecate"
    "d-coroutine\027deprecated-declarations!deprecated-dynamic-exception-spe"
    "c\027deprecated-enum-compare#deprecated-enum-compare-conditional\037dep"
    "recated-enum-enum-conversion deprecated-enum-float-conversion\032deprec"
    "ated-implementations\031deprecated-increment-bool\033deprecated-literal"
    "-operator\031deprecated-module-dot-map\030deprecated-non-prototype\031d"
    "eprecated-objc-isa-usage%deprecated-objc-pointer-introspection5deprecat"
    "ed-objc-pointer-introspection-performSelector\021deprecated-pragma)depr"
    "ecated-redundant-constexpr-static-def\023deprecated-register\037depreca"
    "ted-static-analyzer-flag\027deprecated-this-capture\017deprecated-type\023"
    "deprecated-volatile\033deprecated-writable-strings\022direct-ivar-acces"
    "s\030disabled-macro-expansion\025disabled-optimization\014discard-qual\034"
    "distributed-object-modifiers\013div-by-zero\020division-by-zero\036dll-"
    "attribute-on-redeclaration%dllexport-explicit-instantiation-decl\032dll"
    "import-static-field-def\015documentation\035documentation-deprecated-sy"
    "nc\022documentation-html\026documentation-pedantic\035documentation-unk"
    "nown-command\036dollar-in-identifier-extension\020double-promotion\tdto"
    "r-name\014dtor-typedef\030duplicate-decl-specifier\016duplicate-enum\024"
    "duplicate-method-arg\026duplicate-method-match\022duplicate-protocol\017"
    "dxil-validation\027dynamic-class-memaccess\026dynamic-exception-spec\034"
    "eager-load-cxx-named-modules\006effc++\024elaborated-enum-base\025elabo"
    "rated-enum-class\022embedded-directive\nempty-body\023empty-decompositi"
    "on\017empty-init-stmt\026empty-translation-unit\013encode-type\014endif"
    "-labels\014enum-compare\030enum-compare-conditional\023enum-compare-swi"
    "tch\031enum-constexpr-conversion\017enum-conversion\024enum-enum-conver"
    "sion\025enum-float-conversion\016enum-too-large\nexceptions\023excess-i"
    "nitializers\021excessive-regsave\025exit-time-destructors\024expansion-"
    "to-defined\031experimental-header-units\030explicit-initialize-call\027"
    "explicit-ownership-type\016export-unnamed\017extern-c-compat\022extern-"
    "initializer\005extra\023extra-qualification\nextra-semi\017extra-semi-s"
    "tmt\014extra-tokens\032final-dtor-non-final-class\013final-macro\024fix"
    "ed-enum-extension\024fixed-point-overflow\tflag-enum\031flexible-array-"
    "extensions\020float-conversion\013float-equal\031float-overflow-convers"
    "ion\025float-zero-conversion\021for-loop-analysis\006format\021format-e"
    "xtra-args\030format-insufficient-args\030format-invalid-specifier\016fo"
    "rmat-non-iso\021format-nonliteral\017format-overflow\033format-overflow"
    "-non-kprintf\017format-pedantic\017format-security\021format-truncation"
    "\035format-truncation-non-kprintf\025format-type-confusion\nformat-y2k\022"
    "format-zero-length\010format=2\016fortify-source\023four-char-constants"
    "\015frame-address\021frame-larger-than\022frame-larger-than=%framework-"
    "include-private-from-public\023free-nonheap-object\036function-def-in-o"
    "bjc-container\025function-multiversion\014fuse-ld-path\033future-attrib"
    "ute-extensions\015future-compat\ngcc-compat\026generic-type-extension\023"
    "global-constructors\013global-isel\003gnu\026gnu-alignof-expression\024"
    "gnu-anonymous-struct\033gnu-array-member-paren-init\015gnu-auto-type\022"
    "gnu-binary-literal\016gnu-case-range\023gnu-complex-integer gnu-compoun"
    "d-literal-initializer\037gnu-conditional-omitted-operand\016gnu-designa"
    "tor\025gnu-empty-initializer\020gnu-empty-struct\036gnu-flexible-array-"
    "initializer\037gnu-flexible-array-union-member\024gnu-folding-constant\026"
    "gnu-imaginary-constant\020gnu-include-next\035gnu-inline-cpp-without-ex"
    "tern\022gnu-label-as-value\017gnu-line-marker\033gnu-null-pointer-arith"
    "metic\027gnu-offsetof-extensions\021gnu-pointer-arith\023gnu-redeclared"
    "-enum\030gnu-statement-expression-gnu-statement-expression-from-macro-e"
    "xpansion\025gnu-static-float-init$gnu-string-literal-operator-template\016"
    "gnu-union-cast\"gnu-variable-sized-type-not-at-end\027gnu-zero-line-dir"
    "ective!gnu-zero-variadic-macro-arguments\024gpu-maybe-wrong-side\014hea"
    "der-guard\016header-hygiene\031hip-omp-target-directives\010hip-only\017"
    "hlsl-extensions\025idiomatic-parentheses\022ignored-attributes)ignored-"
    "availability-without-sdk-settings\013ignored-gch\035ignored-optimizatio"
    "n-argument\030ignored-pragma-intrinsic\027ignored-pragma-optimize\017ig"
    "nored-pragmas\022ignored-qualifiers\034ignored-reference-qualifiers\010"
    "implicit\032implicit-atomic-properties#implicit-const-int-float-convers"
    "ion*implicit-conversion-floating-point-to-bool implicit-exception-spec-"
    "mismatch\024implicit-fallthrough!implicit-fallthrough-per-function\037i"
    "mplicit-fixed-point-conversion\031implicit-float-conversion\035implicit"
    "-function-declaration\014implicit-int\027implicit-int-conversion\035imp"
    "licit-int-float-conversion\024implicit-retain-self\033implicitly-unsign"
    "ed-literal\006import&import-preprocessor-directive-pedantic\021inaccess"
    "ible-base include-angled-in-module-purview\032include-next-absolute-pat"
    "h\033include-next-outside-header\033incompatible-exception-spec#incompa"
    "tible-function-pointer-types*incompatible-function-pointer-types-strict"
    "\"incompatible-library-redeclaration\036incompatible-ms-pragma-section\026"
    "incompatible-ms-struct\032incompatible-pointer-types.incompatible-point"
    "er-types-discards-qualifiers\032incompatible-property-type\024incompati"
    "ble-sysroot'incomplete-framework-module-declaration\031incomplete-imple"
    "mentation\021incomplete-module\035incomplete-setjmp-declaration\023inco"
    "mplete-umbrella\026inconsistent-dllimport(inconsistent-missing-destruct"
    "or-override\035inconsistent-missing-override\016increment-bool\022infin"
    "ite-recursion\tinit-self\025initializer-overrides\023injected-class-nam"
    "e\006inline\ninline-asm#inline-namespace-reopened-noninline\021inline-n"
    "ew-delete\"instantiation-after-specialization\016int-conversion\017int-"
    "conversions\023int-in-bool-context\023int-to-pointer-cast\030int-to-voi"
    "d-pointer-cast\020integer-overflow\035invalid-command-line-argument\021"
    "invalid-constexpr\033invalid-feature-combination\020invalid-iboutlet&in"
    "valid-initializer-from-system-header\035invalid-ios-deployment-target\030"
    "invalid-no-builtin-names\020invalid-noreturn\020invalid-offsetof invali"
    "d-or-nonexistent-directory\036invalid-partial-specialization\013invalid"
    "-pch\020invalid-pp-token\027invalid-source-encoding\035invalid-static-a"
    "ssert-message\023invalid-token-paste\032invalid-unevaluated-string\014i"
    "nvalid-utf8\020jump-seh-finally\016keyword-compat\015keyword-macro\033k"
    "nl-knm-isa-support-removed\026knr-promoted-parameter\030language-extens"
    "ion-token\023large-by-value-copy\006liblto\017linker-warnings\022litera"
    "l-conversion\015literal-range\030local-type-template-args\027logical-no"
    "t-parentheses\026logical-op-parentheses\tlong-long\015loop-analysis\017"
    "macro-redefined\004main\020main-return-type\027malformed-warning-check\036"
    "many-braces-around-scalar-init*mathematical-notation-identifier-extensi"
    "on\nmax-tokens\021max-unsigned-zero\026memset-transposed-args\022memsiz"
    "e-comparison\021method-signatures\tmicrosoft\022microsoft-abstract\022m"
    "icrosoft-anon-tag\016microsoft-cast\021microsoft-charize\027microsoft-c"
    "omment-paste\024microsoft-const-init\023microsoft-cpp-macro\"microsoft-"
    "default-arg-redefinition\031microsoft-drectve-section\025microsoft-end-"
    "of-file microsoft-enum-forward-reference\024microsoft-enum-value\030mic"
    "rosoft-exception-spec\020microsoft-exists#microsoft-explicit-constructo"
    "r-call\035microsoft-extra-qualification\024microsoft-fixed-enum\030micr"
    "osoft-flexible-array\016microsoft-goto\033microsoft-inaccessible-base\021"
    "microsoft-include\036microsoft-init-from-predefined\033microsoft-mutabl"
    "e-reference\031microsoft-pure-definition\032microsoft-redeclare-static\020"
    "microsoft-sealed\027microsoft-static-assert(microsoft-string-literal-fr"
    "om-predefined\022microsoft-template\031microsoft-template-shadow micros"
    "oft-union-member-reference\034microsoft-unqualified-friend\024microsoft"
    "-using-decl\032microsoft-void-pseudo-dtor\tmisexpect\026misleading-inde"
    "ntation\025mismatched-new-delete\032mismatched-parameter-types\027misma"
    "tched-return-types\017mismatched-tags\016missing-braces\021missing-cons"
    "tinit\024missing-declarations\026missing-exception-spec\032missing-fiel"
    "d-initializers\030missing-format-attribute\024missing-include-dirs\032m"
    "issing-method-return-type\020missing-multilib\020missing-noescape\020mi"
    "ssing-noreturn\030missing-prototype-for-cc\022missing-prototypes\025mis"
    "sing-selector-name\017missing-sysroot\035missing-variable-declarations\025"
    "misspelled-assumption\014module-build\017module-conflict\033module-file"
    "-config-mismatch\025module-file-extension\015module-import\031module-im"
    "port-in-extern-c\032module-include-translation\013module-lock\"modules-"
    "ambiguous-internal-linkage\037modules-import-nested-redundant\004most\004"
    "move\014msvc-include\016msvc-not-found\tmulti-gpu\tmultichar\023multipl"
    "e-move-vbase\025nan-infinity-disabled\tnarrowing\021nested-anon-types\016"
    "nested-externs\020new-returns-null\013newline-eof\007noderef\015noexcep"
    "t-type\031non-c-typedef-for-linkage\007non-gcc\033non-literal-null-conv"
    "ersion'non-modular-include-in-framework-module\035non-modular-include-i"
    "n-module\017non-pod-varargs\032non-power-of-two-alignment\020non-virtua"
    "l-dtor\007nonnull\025nonportable-cfstrings\030nonportable-include-path!"
    "nonportable-private-apinotes-path(nonportable-private-system-apinotes-p"
    "ath\037nonportable-system-include-path!nonportable-vector-initializatio"
    "n\024nontrivial-memaccess\023nsconsumed-mismatch\022nsreturns-mismatch\017"
    "null-arithmetic\016null-character\017null-conversion\020null-dereferenc"
    "e\027null-pointer-arithmetic\030null-pointer-subtraction\013nullability"
    "\030nullability-completeness\"nullability-completeness-on-arrays\024nul"
    "lability-declspec\025nullability-extension#nullability-inferred-on-nest"
    "ed-type\036nullable-to-nonnull-conversion+objc-autosynthesis-property-i"
    "var-name-match\035objc-bool-constant-conversion\013objc-boxing\027objc-"
    "circular-container\016objc-cocoa-api\034objc-designated-initializers\036"
    "objc-dictionary-duplicate-keys\"objc-duplicate-category-definition\023o"
    "bjc-flexible-array\037objc-forward-class-redefinition\024objc-interface"
    "-ivars\024objc-literal-compare\027objc-literal-conversion\027objc-macro"
    "-redefinition\021objc-messaging-id\022objc-method-access\037objc-missin"
    "g-property-synthesis\030objc-missing-super-calls\032objc-multiple-metho"
    "d-names\"objc-noncopy-retain-block-property\032objc-nonunified-exceptio"
    "ns#objc-property-assign-on-object-type\034objc-property-implementation\037"
    "objc-property-implicit-mismatch*objc-property-matches-cocoa-ownership-r"
    "ule\032objc-property-no-attribute\027objc-property-synthesis#objc-proto"
    "col-method-implementation objc-protocol-property-synthesis\030objc-prot"
    "ocol-qualifiers\"objc-readonly-with-setter-property\026objc-redundant-a"
    "pi-use\032objc-redundant-literal-use\017objc-root-class\025objc-signed-"
    "char-bool/objc-signed-char-bool-implicit-float-conversion-objc-signed-c"
    "har-bool-implicit-int-conversion\023objc-string-compare\031objc-string-"
    "concatenation\034objc-unsafe-perform-selector\003odr\016old-style-cast\024"
    "old-style-definition\007openacc\027opencl-unsupported-rgba\006openmp\024"
    "openmp-51-extensions\016openmp-clauses\021openmp-extensions\020openmp-l"
    "oop-form\016openmp-mapping\015openmp-target\027openmp-target-exception\016"
    "option-ignored!ordered-compare-function-pointers\027out-of-line-declara"
    "tion\025out-of-scope-function\014over-aligned\010overflow\022overlength"
    "-strings\037overloaded-shift-op-parentheses\022overloaded-virtual\015ov"
    "erride-init\017override-module\032overriding-method-mismatch\021overrid"
    "ing-option\006packed\016packed-non-pod\006padded\017padded-bitfield\013"
    "parentheses\024parentheses-equality\024partial-availability\004pass\015"
    "pass-analysis\013pass-failed\013pass-missed\015pch-date-time\010pedanti"
    "c\026pedantic-core-features\017pedantic-macros\020pessimizing-move\015p"
    "ointer-arith\027pointer-bool-conversion\017pointer-compare\027pointer-i"
    "nteger-compare\014pointer-sign\024pointer-to-enum-cast\023pointer-to-in"
    "t-cast\025pointer-type-mismatch\031poison-system-directories\033potenti"
    "ally-direct-selector potentially-evaluated-expression\026pragma-clang-a"
    "ttribute\032pragma-once-outside-header\013pragma-pack\036pragma-pack-su"
    "spicious-include#pragma-system-header-outside-header\007pragmas\020pre-"
    "c++14-compat\031pre-c++14-compat-pedantic\020pre-c++17-compat\031pre-c+"
    "+17-compat-pedantic\020pre-c++20-compat\031pre-c++20-compat-pedantic\020"
    "pre-c++23-compat\031pre-c++23-compat-pedantic\020pre-c++26-compat\031pr"
    "e-c++26-compat-pedantic\020pre-c++2c-compat\031pre-c++2c-compat-pedanti"
    "c\016pre-c23-compat\027pre-c23-compat-pedantic\016pre-c2x-compat\027pre"
    "-c2x-compat-pedantic\024pre-openmp-51-compat&predefined-identifier-outs"
    "ide-function\016private-extern\016private-header\016private-module\025p"
    "rofile-instr-missing\031profile-instr-out-of-date\030profile-instr-unpr"
    "ofiled\032property-access-dot-syntax\033property-attribute-mismatch\010"
    "protocol%protocol-property-synthesis-ambiguity\005psabi\032qualified-vo"
    "id-return-type\"quoted-include-in-framework-header\023range-loop-analys"
    "is\031range-loop-bind-reference\024range-loop-construct\017read-only-ty"
    "pes\032readonly-iboutlet-property\015receiver-expr\026receiver-forward-"
    "class\027redeclared-class-member\026redundant-consteval-if\017redundant"
    "-decls\016redundant-move\020redundant-parens\010register\026reinterpret"
    "-base-class\025remark-backend-plugin\007reorder\014reorder-ctor\021reor"
    "der-init-list\030requires-super-attribute\021reserved-id-macro\023reser"
    "ved-identifier\031reserved-macro-identifier\032reserved-module-identifi"
    "er\035reserved-user-defined-literal\022restrict-expansion\031retained-l"
    "anguage-linkage\021return-local-addr\024return-stack-address\017return-"
    "std-move\013return-type\025return-type-c-linkage\020rewrite-not-bool\023"
    "round-trip-cc1-args\004rtti\020sanitize-address\025sarif-format-unstabl"
    "e\021search-path-usage\007section\010selector\026selector-type-mismatch"
    "\013self-assign\021self-assign-field\026self-assign-overloaded\tself-mo"
    "ve\034semicolon-before-method-body\010sentinel\016sequence-point\026ser"
    "ialized-diagnostics\006shadow\nshadow-all\014shadow-field\033shadow-fie"
    "ld-in-constructor$shadow-field-in-constructor-modified\013shadow-ivar\027"
    "shadow-uncaptured-local\024shift-count-negative\024shift-count-overflow"
    "\024shift-negative-value\024shift-op-parentheses\016shift-overflow\023s"
    "hift-sign-overflow\020shorten-64-to-32\014sign-compare\017sign-conversi"
    "on\nsign-promo\024signed-enum-bitfield\025signed-unsigned-wchar'single-"
    "bit-bitfield-constant-conversion\025sizeof-array-argument\022sizeof-arr"
    "ay-decay\020sizeof-array-div\022sizeof-pointer-div\030sizeof-pointer-me"
    "maccess\020slash-u-filename\014slh-asm-goto\nsloc-usage\027sometimes-un"
    "initialized\nsource-mgr\023source-uses-openacc\022source-uses-openmp\013"
    "spir-compat\014spirv-compat\017stack-exhausted\017stack-protector\021st"
    "atic-float-init\020static-in-inline$static-inline-explicit-instantiatio"
    "n\026static-local-in-inline\020static-self-init\023stdlibcxx-not-found\017"
    "strict-aliasing\021strict-aliasing=0\021strict-aliasing=1\021strict-ali"
    "asing=2\017strict-overflow\021strict-overflow=0\021strict-overflow=1\021"
    "strict-overflow=2\021strict-overflow=3\021strict-overflow=4\021strict-o"
    "verflow=5\"strict-potentially-direct-selector\021strict-prototypes\025s"
    "trict-selector-match\016string-compare\024string-concatenation\021strin"
    "g-conversion\020string-plus-char\017string-plus-int\024strlcpy-strlcat-"
    "size\014strncat-size\033suggest-destructor-override\020suggest-override"
    "\033super-class-method-mismatch\020suspicious-bzero\024suspicious-memac"
    "cess\024swift-name-attribute\006switch\013switch-bool\016switch-default"
    "\013switch-enum\016sync-alignment%sync-fetch-and-nand-semantics-changed"
    "\005synth\036target-clones-mixed-specifiers\034tautological-bitwise-com"
    "pare\024tautological-compare\035tautological-constant-compare&tautologi"
    "cal-constant-in-range-compare*tautological-constant-out-of-range-compar"
    "e\035tautological-negation-compare\036tautological-objc-bool-compare\034"
    "tautological-overlap-compare\034tautological-pointer-compare\037tautolo"
    "gical-type-limit-compare\036tautological-undefined-compare'tautological"
    "-unsigned-char-zero-compare'tautological-unsigned-enum-zero-compare\"ta"
    "utological-unsigned-zero-compare tautological-value-range-compare\017tc"
    "b-enforcement$tentative-definition-incomplete-type\015thread-safety\026"
    "thread-safety-analysis\030thread-safety-attributes\022thread-safety-bet"
    "a\026thread-safety-negative\025thread-safety-precise\027thread-safety-r"
    "eference\036thread-safety-reference-return\025thread-safety-verbose\ttr"
    "igraphs\013type-limits\013type-safety\024typedef-redefinition\020typena"
    "me-missing\031unable-to-open-stats-file\020unaligned-access!unaligned-q"
    "ualifier-implicit-cast\030unavailable-declarations\023undeclared-select"
    "or\005undef\014undef-prefix\027undefined-arm-streaming\020undefined-arm"
    "-za\021undefined-arm-zt0\031undefined-bool-conversion\027undefined-func"
    "-template\020undefined-inline\022undefined-internal\027undefined-intern"
    "al-type\032undefined-reinterpret-cast\026undefined-var-template\035unde"
    "raligned-exception-object\026unevaluated-expression\026unguarded-availa"
    "bility\032unguarded-availability-new\007unicode\021unicode-homoglyph\022"
    "unicode-whitespace\022unicode-zero-width\015uninitialized\035uninitiali"
    "zed-const-reference\020unknown-argument\022unknown-assumption\022unknow"
    "n-attributes\024unknown-cuda-version\022unknown-directives\027unknown-e"
    "scape-sequence\017unknown-pragmas\022unknown-sanitizers\026unknown-warn"
    "ing-option\032unnamed-type-template-args\035unneeded-internal-declarati"
    "on\030unneeded-member-function\031unqualified-std-cast-call\020unreacha"
    "ble-code\033unreachable-code-aggressive\026unreachable-code-break\034un"
    "reachable-code-fallthrough\036unreachable-code-generic-assoc\037unreach"
    "able-code-loop-increment\027unreachable-code-return\023unsafe-buffer-us"
    "age unsafe-buffer-usage-in-container\013unsequenced\017unsupported-abi\017"
    "unsupported-abs\036unsupported-availability-guard\016unsupported-cb#uns"
    "upported-dll-base-class-template\036unsupported-floating-point-opt\022u"
    "nsupported-friend\021unsupported-gpopt\017unsupported-nan\026unsupporte"
    "d-target-opt\026unsupported-visibility\037unusable-partial-specializati"
    "on\006unused\017unused-argument\030unused-but-set-parameter\027unused-b"
    "ut-set-variable\034unused-command-line-argument\021unused-comparison\025"
    "unused-const-variable\032unused-exception-parameter\017unused-function\032"
    "unused-getter-return-value\014unused-label\025unused-lambda-capture\024"
    "unused-local-typedef\025unused-local-typedefs\015unused-macros\026unuse"
    "d-member-function\020unused-parameter\024unused-private-field\024unused"
    "-property-ivar\015unused-result\017unused-template\014unused-value\017u"
    "nused-variable\026unused-volatile-lvalue\026used-but-marked-unused\025u"
    "ser-defined-literals\025user-defined-warnings\007varargs\017variadic-ma"
    "cros\015vec-elem-size\021vector-conversion\022vector-conversions\014vex"
    "ing-parse\nvisibility\003vla\021vla-cxx-extension\015vla-extension\033v"
    "la-extension-static-assert\031void-pointer-to-enum-cast\030void-pointer"
    "-to-int-cast\024void-ptr-dereference\025volatile-register-var\023wasm-e"
    "xception-spec\025weak-template-vtables\014weak-vtables\020writable-stri"
    "ngs\015write-strings\017xor-used-as-pow\035zero-as-null-pointer-constan"
    "t\021zero-length-array"};

#endif // GET_DIAG_ARRAYS


#ifdef DIAG_ENTRY
DIAG_ENTRY(anonymous_60 /*  */, 0, 0, /* DiagSubGroup0 */ 1, R"()")
DIAG_ENTRY(PoundPragmaMessage /* #pragma-messages */, 1, /* DiagArray1 */ 1, 0, R"()")
DIAG_ENTRY(PoundWarning /* #warnings */, 18, /* DiagArray2 */ 3, 0, R"()")
DIAG_ENTRY(anonymous_286 /* CFString-literal */, 28, /* DiagArray3 */ 5, 0, R"()")
DIAG_ENTRY(anonymous_59 /* CL4 */, 45, 0, /* DiagSubGroup4 */ 3, R"()")
DIAG_ENTRY(IndependentClassAttribute /* IndependentClass-attribute */, 49, /* DiagArray5 */ 7, 0, R"()")
DIAG_ENTRY(NSobjectAttribute /* NSObject-attribute */, 76, /* DiagArray6 */ 10, 0, R"()")
DIAG_ENTRY(anonymous_0 /* abi */, 95, 0, 0, R"()")
DIAG_ENTRY(AbsoluteValue /* absolute-value */, 99, /* DiagArray8 */ 12, 0, R"()")
DIAG_ENTRY(AbstractFinalClass /* abstract-final-class */, 114, /* DiagArray9 */ 17, 0, R"()")
DIAG_ENTRY(anonymous_279 /* abstract-vbase-init */, 135, /* DiagArray10 */ 19, 0, R"()")
DIAG_ENTRY(anonymous_58 /* address */, 155, 0, /* DiagSubGroup11 */ 6, R"()")
DIAG_ENTRY(anonymous_257 /* address-of-packed-member */, 163, /* DiagArray12 */ 21, 0, R"()")
DIAG_ENTRY(AddressOfTemporary /* address-of-temporary */, 188, /* DiagArray13 */ 23, 0, R"()")
DIAG_ENTRY(anonymous_2 /* aggregate-return */, 209, 0, 0, R"()")
DIAG_ENTRY(AIXCompat /* aix-compat */, 226, /* DiagArray15 */ 25, 0, R"()")
DIAG_ENTRY(anonymous_258 /* align-mismatch */, 237, /* DiagArray16 */ 28, 0, R"()")
DIAG_ENTRY(All /* all */, 252, 0, /* DiagSubGroup17 */ 10, R"()")
DIAG_ENTRY(anonymous_203 /* alloca */, 256, /* DiagArray18 */ 30, 0, R"()")
DIAG_ENTRY(anonymous_204 /* alloca-with-align-alignof */, 263, /* DiagArray19 */ 32, 0, R"()")
DIAG_ENTRY(AlwaysInlineCoroutine /* always-inline-coroutine */, 289, /* DiagArray20 */ 34, 0, R"()")
DIAG_ENTRY(anonymous_264 /* ambiguous-delete */, 313, /* DiagArray21 */ 36, 0, R"()")
DIAG_ENTRY(anonymous_154 /* ambiguous-ellipsis */, 330, /* DiagArray22 */ 38, 0, R"()")
DIAG_ENTRY(AmbiguousMacro /* ambiguous-macro */, 349, /* DiagArray23 */ 40, 0, R"()")
DIAG_ENTRY(AmbigMemberTemplate /* ambiguous-member-template */, 365, /* DiagArray24 */ 42, 0, R"()")
DIAG_ENTRY(anonymous_224 /* ambiguous-reversed-operator */, 391, /* DiagArray25 */ 44, 0, R"()")
DIAG_ENTRY(anonymous_109 /* analyzer-incompatible-plugin */, 419, /* DiagArray26 */ 46, 0, R"()")
DIAG_ENTRY(anonymous_106 /* android-unversioned-fallback */, 448, /* DiagArray27 */ 48, 0, R"()")
DIAG_ENTRY(AnonEnumEnumConversion /* anon-enum-enum-conversion */, 477, /* DiagArray28 */ 50, /* DiagSubGroup28 */ 18, R"()")
DIAG_ENTRY(anonymous_155 /* anonymous-pack-parens */, 503, /* DiagArray29 */ 52, 0, R"()")
DIAG_ENTRY(anonymous_91 /* apinotes */, 525, /* DiagArray30 */ 54, 0, R"()")
DIAG_ENTRY(AutomaticReferenceCounting /* arc */, 534, 0, /* DiagSubGroup31 */ 20, R"()")
DIAG_ENTRY(anonymous_153 /* arc-bridge-casts-disallowed-in-nonarc */, 538, /* DiagArray32 */ 56, 0, R"()")
DIAG_ENTRY(ARCRepeatedUseOfWeakMaybe /* arc-maybe-repeated-use-of-weak */, 576, /* DiagArray33 */ 58, 0, R"()")
DIAG_ENTRY(ARCNonPodMemAccess /* arc-non-pod-memaccess */, 607, /* DiagArray34 */ 60, 0, R"()")
DIAG_ENTRY(anonymous_184 /* arc-performSelector-leaks */, 629, /* DiagArray35 */ 62, 0, R"()")
DIAG_ENTRY(ARCRepeatedUseOfWeak /* arc-repeated-use-of-weak */, 655, /* DiagArray36 */ 64, /* DiagSubGroup36 */ 24, R"()")
DIAG_ENTRY(ARCRetainCycles /* arc-retain-cycles */, 680, /* DiagArray37 */ 66, 0, R"()")
DIAG_ENTRY(ARCUnsafeRetainedAssign /* arc-unsafe-retained-assign */, 698, /* DiagArray38 */ 68, 0, R"()")
DIAG_ENTRY(anonymous_288 /* argument-outside-range */, 725, /* DiagArray39 */ 72, 0, R"()")
DIAG_ENTRY(anonymous_289 /* argument-undefined-behaviour */, 748, /* DiagArray40 */ 74, 0, R"()")
DIAG_ENTRY(ArrayBounds /* array-bounds */, 777, /* DiagArray41 */ 76, 0, R"()")
DIAG_ENTRY(ArrayBoundsPointerArithmetic /* array-bounds-pointer-arithmetic */, 790, /* DiagArray42 */ 82, 0, R"()")
DIAG_ENTRY(ArrayParameter /* array-parameter */, 822, /* DiagArray43 */ 85, 0, R"()")
DIAG_ENTRY(ASM /* asm */, 838, 0, /* DiagSubGroup44 */ 26, R"()")
DIAG_ENTRY(ASMOperandWidths /* asm-operand-widths */, 842, /* DiagArray45 */ 87, 0, R"()")
DIAG_ENTRY(anonymous_287 /* assign-enum */, 861, /* DiagArray46 */ 89, 0, R"()")
DIAG_ENTRY(anonymous_171 /* assume */, 873, /* DiagArray47 */ 91, 0, R"()")
DIAG_ENTRY(anonymous_57 /* at-protocol */, 880, 0, 0, R"()")
DIAG_ENTRY(FrameworkHdrAtImport /* atimport-in-framework-header */, 892, /* DiagArray49 */ 93, 0, R"()")
DIAG_ENTRY(anonymous_246 /* atomic-access */, 921, /* DiagArray50 */ 95, 0, R"()")
DIAG_ENTRY(AtomicAlignment /* atomic-alignment */, 935, /* DiagArray51 */ 97, 0, R"()")
DIAG_ENTRY(anonymous_272 /* atomic-implicit-seq-cst */, 952, /* DiagArray52 */ 100, 0, R"()")
DIAG_ENTRY(anonymous_271 /* atomic-memory-ordering */, 976, /* DiagArray53 */ 102, 0, R"()")
DIAG_ENTRY(AtomicProperties /* atomic-properties */, 999, 0, /* DiagSubGroup54 */ 28, R"()")
DIAG_ENTRY(anonymous_179 /* atomic-property-with-user-defined-accessor */, 1017, /* DiagArray55 */ 104, 0, R"()")
DIAG_ENTRY(anonymous_220 /* attribute-packed-for-bitfield */, 1060, /* DiagArray56 */ 106, 0, R"()")
DIAG_ENTRY(BackendWarningAttributes /* attribute-warning */, 1090, /* DiagArray57 */ 108, 0, R"()")
DIAG_ENTRY(Attributes /* attributes */, 1108, 0, /* DiagSubGroup58 */ 31, R"()")
DIAG_ENTRY(anonymous_162 /* auto-decl-extensions */, 1119, /* DiagArray59 */ 110, 0, R"()")
DIAG_ENTRY(AutoDisableVptrSanitizer /* auto-disable-vptr-sanitizer */, 1140, /* DiagArray60 */ 112, 0, R"()")
DIAG_ENTRY(anonymous_3 /* auto-import */, 1168, 0, 0, R"()")
DIAG_ENTRY(anonymous_151 /* auto-storage-class */, 1180, /* DiagArray62 */ 114, 0, R"()")
DIAG_ENTRY(anonymous_197 /* auto-var-id */, 1199, /* DiagArray63 */ 116, 0, R"()")
DIAG_ENTRY(Availability /* availability */, 1211, /* DiagArray64 */ 118, 0, R"()")
DIAG_ENTRY(AVRRtlibLinkingQuirks /* avr-rtlib-linking-quirks */, 1224, /* DiagArray65 */ 129, 0, R"()")
DIAG_ENTRY(BackendPlugin /* backend-plugin */, 1249, /* DiagArray66 */ 135, 0, R"()")
DIAG_ENTRY(anonymous_113 /* backslash-newline-escape */, 1264, /* DiagArray67 */ 138, 0, R"()")
DIAG_ENTRY(BadFunctionCast /* bad-function-cast */, 1289, /* DiagArray68 */ 140, 0, R"()")
DIAG_ENTRY(BinaryLiteral /* binary-literal */, 1307, 0, /* DiagSubGroup69 */ 34, R"()")
DIAG_ENTRY(BindToTemporaryCopy /* bind-to-temporary-copy */, 1322, /* DiagArray70 */ 142, /* DiagSubGroup70 */ 38, R"()")
DIAG_ENTRY(anonymous_166 /* binding-in-condition */, 1345, /* DiagArray71 */ 145, 0, R"()")
DIAG_ENTRY(anonymous_158 /* bit-int-extension */, 1366, /* DiagArray72 */ 147, 0, R"()")
DIAG_ENTRY(BitFieldConstantConversion /* bitfield-constant-conversion */, 1384, /* DiagArray73 */ 149, /* DiagSubGroup73 */ 40, R"()")
DIAG_ENTRY(BitFieldEnumConversion /* bitfield-enum-conversion */, 1413, /* DiagArray74 */ 151, 0, R"()")
DIAG_ENTRY(BitFieldWidth /* bitfield-width */, 1438, /* DiagArray75 */ 155, 0, R"()")
DIAG_ENTRY(BitwiseConditionalParentheses /* bitwise-conditional-parentheses */, 1453, /* DiagArray76 */ 157, 0, R"()")
DIAG_ENTRY(BitwiseInsteadOfLogical /* bitwise-instead-of-logical */, 1485, /* DiagArray77 */ 159, 0, R"()")
DIAG_ENTRY(BitwiseOpParentheses /* bitwise-op-parentheses */, 1512, /* DiagArray78 */ 161, 0, R"()")
DIAG_ENTRY(BlockCaptureAutoReleasing /* block-capture-autoreleasing */, 1535, /* DiagArray79 */ 163, 0, R"()")
DIAG_ENTRY(BoolConversion /* bool-conversion */, 1563, /* DiagArray80 */ 165, /* DiagSubGroup80 */ 42, R"()")
DIAG_ENTRY(anonymous_65 /* bool-conversions */, 1579, 0, /* DiagSubGroup81 */ 45, R"()")
DIAG_ENTRY(BoolOperation /* bool-operation */, 1596, /* DiagArray82 */ 167, /* DiagSubGroup82 */ 47, R"()")
DIAG_ENTRY(anonymous_241 /* braced-scalar-init */, 1611, /* DiagArray83 */ 169, 0, R"()")
DIAG_ENTRY(BranchProtection /* branch-protection */, 1630, /* DiagArray84 */ 171, 0, R"()")
DIAG_ENTRY(ObjCBridge /* bridge-cast */, 1648, /* DiagArray85 */ 176, 0, R"()")
DIAG_ENTRY(anonymous_206 /* builtin-assume-aligned-alignment */, 1660, /* DiagArray86 */ 179, 0, R"()")
DIAG_ENTRY(BuiltinMacroRedefined /* builtin-macro-redefined */, 1693, /* DiagArray87 */ 181, 0, R"()")
DIAG_ENTRY(anonymous_172 /* builtin-memcpy-chk-size */, 1717, /* DiagArray88 */ 184, 0, R"()")
DIAG_ENTRY(BuiltinRequiresHeader /* builtin-requires-header */, 1741, /* DiagArray89 */ 186, 0, R"()")
DIAG_ENTRY(CXXCompat /* c++-compat */, 1765, /* DiagArray90 */ 188, 0, R"()")
DIAG_ENTRY(anonymous_25 /* c++0x-compat */, 1776, 0, /* DiagSubGroup91 */ 49, R"()")
DIAG_ENTRY(anonymous_69 /* c++0x-extensions */, 1789, 0, /* DiagSubGroup92 */ 51, R"()")
DIAG_ENTRY(anonymous_23 /* c++0x-narrowing */, 1806, 0, /* DiagSubGroup93 */ 53, R"()")
DIAG_ENTRY(CXX11Compat /* c++11-compat */, 1822, /* DiagArray94 */ 190, /* DiagSubGroup94 */ 55, R"()")
DIAG_ENTRY(CXX11CompatDeprecatedWritableStr /* c++11-compat-deprecated-writable-strings */, 1835, /* DiagArray95 */ 201, 0, R"()")
DIAG_ENTRY(CXX11CompatPedantic /* c++11-compat-pedantic */, 1876, 0, /* DiagSubGroup96 */ 63, R"()")
DIAG_ENTRY(CXX11CompatReservedUserDefinedLiteral /* c++11-compat-reserved-user-defined-literal */, 1898, /* DiagArray97 */ 203, 0, R"()")
DIAG_ENTRY(CXX11 /* c++11-extensions */, 1941, /* DiagArray98 */ 205, /* DiagSubGroup98 */ 69, R"()")
DIAG_ENTRY(CXX11ExtraSemi /* c++11-extra-semi */, 1958, /* DiagArray99 */ 232, 0, R"()")
DIAG_ENTRY(CXX11InlineNamespace /* c++11-inline-namespace */, 1975, /* DiagArray100 */ 234, 0, R"()")
DIAG_ENTRY(CXX11LongLong /* c++11-long-long */, 1998, /* DiagArray101 */ 236, 0, R"()")
DIAG_ENTRY(CXX11Narrowing /* c++11-narrowing */, 2014, /* DiagArray102 */ 238, /* DiagSubGroup102 */ 73, R"()")
DIAG_ENTRY(CXX11NarrowingConstReference /* c++11-narrowing-const-reference */, 2030, /* DiagArray103 */ 246, 0, R"()")
DIAG_ENTRY(CXX14Attrs /* c++14-attribute-extensions */, 2062, /* DiagArray104 */ 250, 0, R"()")
DIAG_ENTRY(CXX14BinaryLiteral /* c++14-binary-literal */, 2089, /* DiagArray105 */ 252, 0, R"()")
DIAG_ENTRY(CXX14Compat /* c++14-compat */, 2110, 0, /* DiagSubGroup106 */ 75, R"()")
DIAG_ENTRY(CXX14CompatPedantic /* c++14-compat-pedantic */, 2123, 0, /* DiagSubGroup107 */ 79, R"()")
DIAG_ENTRY(CXX14 /* c++14-extensions */, 2145, /* DiagArray108 */ 254, /* DiagSubGroup108 */ 84, R"()")
DIAG_ENTRY(CXX17Attrs /* c++17-attribute-extensions */, 2162, /* DiagArray109 */ 262, 0, R"()")
DIAG_ENTRY(CXX17Compat /* c++17-compat */, 2189, 0, /* DiagSubGroup110 */ 87, R"()")
DIAG_ENTRY(CXX17CompatMangling /* c++17-compat-mangling */, 2202, /* DiagArray111 */ 264, 0, R"()")
DIAG_ENTRY(CXX17CompatPedantic /* c++17-compat-pedantic */, 2224, 0, /* DiagSubGroup112 */ 93, R"()")
DIAG_ENTRY(CXX17 /* c++17-extensions */, 2246, /* DiagArray113 */ 266, /* DiagSubGroup113 */ 97, R"()")
DIAG_ENTRY(anonymous_70 /* c++1y-extensions */, 2263, 0, /* DiagSubGroup114 */ 99, R"()")
DIAG_ENTRY(anonymous_26 /* c++1z-compat */, 2280, 0, /* DiagSubGroup115 */ 101, R"()")
DIAG_ENTRY(anonymous_12 /* c++1z-compat-mangling */, 2293, 0, /* DiagSubGroup116 */ 103, R"()")
DIAG_ENTRY(anonymous_71 /* c++1z-extensions */, 2315, 0, /* DiagSubGroup117 */ 105, R"()")
DIAG_ENTRY(CXX20Attrs /* c++20-attribute-extensions */, 2332, /* DiagArray118 */ 284, 0, R"()")
DIAG_ENTRY(CXX20Compat /* c++20-compat */, 2359, /* DiagArray119 */ 286, /* DiagSubGroup119 */ 107, R"()")
DIAG_ENTRY(CXX20CompatPedantic /* c++20-compat-pedantic */, 2372, 0, /* DiagSubGroup120 */ 109, R"()")
DIAG_ENTRY(CXX20Designator /* c++20-designator */, 2394, /* DiagArray121 */ 296, 0, R"()")
DIAG_ENTRY(CXX20 /* c++20-extensions */, 2411, /* DiagArray122 */ 298, /* DiagSubGroup122 */ 112, R"()")
DIAG_ENTRY(anonymous_284 /* c++23-default-comp-relaxed-constexpr */, 2428, /* DiagArray123 */ 320, 0, R"()")
DIAG_ENTRY(CXX23 /* c++23-extensions */, 2465, /* DiagArray124 */ 322, /* DiagSubGroup124 */ 115, R"()")
DIAG_ENTRY(CXX23AttrsOnLambda /* c++23-lambda-attributes */, 2482, /* DiagArray125 */ 333, 0, R"()")
DIAG_ENTRY(CXX26 /* c++26-extensions */, 2506, /* DiagArray126 */ 335, 0, R"()")
DIAG_ENTRY(anonymous_27 /* c++2a-compat */, 2523, 0, /* DiagSubGroup127 */ 117, R"()")
DIAG_ENTRY(anonymous_28 /* c++2a-compat-pedantic */, 2536, 0, /* DiagSubGroup128 */ 119, R"()")
DIAG_ENTRY(anonymous_72 /* c++2a-extensions */, 2558, 0, /* DiagSubGroup129 */ 121, R"()")
DIAG_ENTRY(anonymous_73 /* c++2b-extensions */, 2575, 0, /* DiagSubGroup130 */ 123, R"()")
DIAG_ENTRY(anonymous_74 /* c++2c-extensions */, 2592, 0, /* DiagSubGroup131 */ 125, R"()")
DIAG_ENTRY(anonymous_19 /* c++98-c++11-c++14-c++17-compat */, 2609, 0, /* DiagSubGroup132 */ 127, R"()")
DIAG_ENTRY(anonymous_20 /* c++98-c++11-c++14-c++17-compat-pedantic */, 2640, 0, /* DiagSubGroup133 */ 129, R"()")
DIAG_ENTRY(anonymous_17 /* c++98-c++11-c++14-compat */, 2680, 0, /* DiagSubGroup134 */ 131, R"()")
DIAG_ENTRY(anonymous_18 /* c++98-c++11-c++14-compat-pedantic */, 2705, 0, /* DiagSubGroup135 */ 133, R"()")
DIAG_ENTRY(anonymous_15 /* c++98-c++11-compat */, 2739, 0, /* DiagSubGroup136 */ 135, R"()")
DIAG_ENTRY(CXXPre14CompatBinaryLiteral /* c++98-c++11-compat-binary-literal */, 2758, /* DiagArray137 */ 337, 0, R"()")
DIAG_ENTRY(anonymous_16 /* c++98-c++11-compat-pedantic */, 2792, 0, /* DiagSubGroup138 */ 137, R"()")
DIAG_ENTRY(CXX98Compat /* c++98-compat */, 2820, /* DiagArray139 */ 339, /* DiagSubGroup139 */ 139, R"()")
DIAG_ENTRY(CXX98CompatBindToTemporaryCopy /* c++98-compat-bind-to-temporary-copy */, 2833, /* DiagArray140 */ 399, 0, R"()")
DIAG_ENTRY(CXX98CompatExtraSemi /* c++98-compat-extra-semi */, 2869, /* DiagArray141 */ 401, 0, R"()")
DIAG_ENTRY(CXX98CompatLocalTypeTemplateArgs /* c++98-compat-local-type-template-args */, 2893, /* DiagArray142 */ 403, 0, R"()")
DIAG_ENTRY(CXX98CompatPedantic /* c++98-compat-pedantic */, 2931, /* DiagArray143 */ 405, /* DiagSubGroup143 */ 146, R"()")
DIAG_ENTRY(CXX98CompatUnnamedTypeTemplateArgs /* c++98-compat-unnamed-type-template-args */, 2953, /* DiagArray144 */ 415, 0, R"()")
DIAG_ENTRY(C11 /* c11-extensions */, 2993, /* DiagArray145 */ 417, 0, R"()")
DIAG_ENTRY(C23Compat /* c23-compat */, 3008, /* DiagArray146 */ 422, 0, R"()")
DIAG_ENTRY(C23 /* c23-extensions */, 3019, /* DiagArray147 */ 424, 0, R"()")
DIAG_ENTRY(anonymous_4 /* c2x-compat */, 3034, 0, /* DiagSubGroup148 */ 154, R"()")
DIAG_ENTRY(anonymous_75 /* c2x-extensions */, 3045, 0, /* DiagSubGroup149 */ 156, R"()")
DIAG_ENTRY(C99Compat /* c99-compat */, 3060, /* DiagArray150 */ 434, 0, R"()")
DIAG_ENTRY(C99Designator /* c99-designator */, 3071, /* DiagArray151 */ 439, /* DiagSubGroup151 */ 158, R"()")
DIAG_ENTRY(C99 /* c99-extensions */, 3086, /* DiagArray152 */ 445, /* DiagSubGroup152 */ 160, R"()")
DIAG_ENTRY(PureVirtualCallFromCtorDtor /* call-to-pure-virtual-from-ctor-dtor */, 3101, /* DiagArray153 */ 456, 0, R"()")
DIAG_ENTRY(CalledOnceParameter /* called-once-parameter */, 3137, /* DiagArray154 */ 458, /* DiagSubGroup154 */ 162, R"()")
DIAG_ENTRY(CastAlign /* cast-align */, 3159, /* DiagArray155 */ 462, 0, R"()")
DIAG_ENTRY(anonymous_274 /* cast-calling-convention */, 3170, /* DiagArray156 */ 464, 0, R"()")
DIAG_ENTRY(CastFunctionType /* cast-function-type */, 3194, /* DiagArray157 */ 466, /* DiagSubGroup157 */ 164, R"()")
DIAG_ENTRY(CastFunctionTypeStrict /* cast-function-type-strict */, 3213, /* DiagArray158 */ 468, 0, R"()")
DIAG_ENTRY(SelTypeCast /* cast-of-sel-type */, 3239, /* DiagArray159 */ 470, 0, R"()")
DIAG_ENTRY(CastQual /* cast-qual */, 3256, /* DiagArray160 */ 472, 0, R"()")
DIAG_ENTRY(anonymous_262 /* cast-qual-unrelated */, 3266, /* DiagArray161 */ 475, 0, R"()")
DIAG_ENTRY(anonymous_5 /* char-align */, 3286, 0, 0, R"()")
DIAG_ENTRY(CharSubscript /* char-subscripts */, 3297, /* DiagArray163 */ 477, 0, R"()")
DIAG_ENTRY(ClangClPch /* clang-cl-pch */, 3313, /* DiagArray164 */ 480, 0, R"()")
DIAG_ENTRY(ClassConversion /* class-conversion */, 3326, /* DiagArray165 */ 485, 0, R"()")
DIAG_ENTRY(ClassVarargs /* class-varargs */, 3343, /* DiagArray166 */ 489, /* DiagSubGroup166 */ 166, R"()")
DIAG_ENTRY(anonymous_207 /* cmse-union-leak */, 3357, /* DiagArray167 */ 491, 0, R"()")
DIAG_ENTRY(anonymous_160 /* comma */, 3373, /* DiagArray168 */ 493, 0, R"()")
DIAG_ENTRY(Comment /* comment */, 3379, /* DiagArray169 */ 495, 0, R"()")
DIAG_ENTRY(anonymous_63 /* comments */, 3387, 0, /* DiagSubGroup170 */ 168, R"()")
DIAG_ENTRY(CompareDistinctPointerType /* compare-distinct-pointer-types */, 3396, /* DiagArray171 */ 500, 0, R"()")
DIAG_ENTRY(CompletionHandler /* completion-handler */, 3427, /* DiagArray172 */ 502, 0, R"()")
DIAG_ENTRY(anonymous_243 /* complex-component-init */, 3446, /* DiagArray173 */ 506, 0, R"()")
DIAG_ENTRY(CompoundTokenSplit /* compound-token-split */, 3469, 0, /* DiagSubGroup174 */ 170, R"()")
DIAG_ENTRY(CompoundTokenSplitByMacro /* compound-token-split-by-macro */, 3490, /* DiagArray175 */ 508, 0, R"()")
DIAG_ENTRY(CompoundTokenSplitBySpace /* compound-token-split-by-space */, 3520, /* DiagArray176 */ 510, 0, R"()")
DIAG_ENTRY(anonymous_276 /* conditional-type-mismatch */, 3550, /* DiagArray177 */ 512, 0, R"()")
DIAG_ENTRY(UninitializedMaybe /* conditional-uninitialized */, 3576, /* DiagArray178 */ 514, 0, R"()")
DIAG_ENTRY(ConfigMacros /* config-macros */, 3602, /* DiagArray179 */ 516, 0, R"()")
DIAG_ENTRY(ConstantConversion /* constant-conversion */, 3616, /* DiagArray180 */ 518, /* DiagSubGroup180 */ 173, R"()")
DIAG_ENTRY(anonymous_82 /* constant-evaluated */, 3636, /* DiagArray181 */ 520, 0, R"()")
DIAG_ENTRY(anonymous_253 /* constant-logical-operand */, 3655, /* DiagArray182 */ 522, 0, R"()")
DIAG_ENTRY(anonymous_195 /* constexpr-not-const */, 3680, /* DiagArray183 */ 524, 0, R"()")
DIAG_ENTRY(Consumed /* consumed */, 3700, /* DiagArray184 */ 526, 0, R"()")
DIAG_ENTRY(Conversion /* conversion */, 3709, /* DiagArray185 */ 535, /* DiagSubGroup185 */ 176, R"()")
DIAG_ENTRY(anonymous_64 /* conversion-null */, 3720, 0, /* DiagSubGroup186 */ 192, R"()")
DIAG_ENTRY(CoroNonAlignedAllocationFunction /* coro-non-aligned-allocation-function */, 3736, /* DiagArray187 */ 541, 0, R"()")
DIAG_ENTRY(Coroutine /* coroutine */, 3773, /* DiagArray188 */ 543, /* DiagSubGroup188 */ 194, R"()")
DIAG_ENTRY(CoroutineMissingUnhandledException /* coroutine-missing-unhandled-exception */, 3783, /* DiagArray189 */ 545, 0, R"()")
DIAG_ENTRY(CoveredSwitchDefault /* covered-switch-default */, 3821, /* DiagArray190 */ 547, 0, R"()")
DIAG_ENTRY(anonymous_62 /* cpp */, 3844, 0, /* DiagSubGroup191 */ 199, R"()")
DIAG_ENTRY(ObjCCStringFormat /* cstring-format-directive */, 3848, /* DiagArray192 */ 549, 0, R"()")
DIAG_ENTRY(CTADMaybeUnsupported /* ctad-maybe-unsupported */, 3873, /* DiagArray193 */ 551, 0, R"()")
DIAG_ENTRY(anonymous_6 /* ctor-dtor-privacy */, 3896, 0, 0, R"()")
DIAG_ENTRY(CrossTU /* ctu */, 3914, /* DiagArray195 */ 553, 0, R"()")
DIAG_ENTRY(CudaCompat /* cuda-compat */, 3918, /* DiagArray196 */ 555, 0, R"()")
DIAG_ENTRY(CustomAtomic /* custom-atomic-properties */, 3930, /* DiagArray197 */ 561, 0, R"()")
DIAG_ENTRY(anonymous_156 /* cxx-attribute-extension */, 3955, /* DiagArray198 */ 563, 0, R"()")
DIAG_ENTRY(Dangling /* dangling */, 3979, /* DiagArray199 */ 565, /* DiagSubGroup199 */ 201, R"()")
DIAG_ENTRY(DanglingElse /* dangling-else */, 3988, /* DiagArray200 */ 568, 0, R"()")
DIAG_ENTRY(DanglingField /* dangling-field */, 4002, /* DiagArray201 */ 570, 0, R"()")
DIAG_ENTRY(DanglingGsl /* dangling-gsl */, 4017, /* DiagArray202 */ 575, 0, R"()")
DIAG_ENTRY(DanglingInitializerList /* dangling-initializer-list */, 4030, /* DiagArray203 */ 578, 0, R"()")
DIAG_ENTRY(anonymous_102 /* darwin-sdk-settings */, 4056, /* DiagArray204 */ 580, 0, R"()")
DIAG_ENTRY(anonymous_139 /* date-time */, 4076, /* DiagArray205 */ 582, 0, R"()")
DIAG_ENTRY(DeallocInCategory /* dealloc-in-category */, 4086, /* DiagArray206 */ 584, 0, R"()")
DIAG_ENTRY(anonymous_98 /* debug-compression-unavailable */, 4106, /* DiagArray207 */ 586, 0, R"()")
DIAG_ENTRY(DeclarationAfterStatement /* declaration-after-statement */, 4136, /* DiagArray208 */ 588, 0, R"()")
DIAG_ENTRY(DefaultedFunctionDeleted /* defaulted-function-deleted */, 4164, /* DiagArray209 */ 591, 0, R"()")
DIAG_ENTRY(anonymous_99 /* delayed-template-parsing-in-cxx20 */, 4191, /* DiagArray210 */ 594, 0, R"()")
DIAG_ENTRY(DelegatingCtorCycles /* delegating-ctor-cycles */, 4225, /* DiagArray211 */ 596, 0, R"()")
DIAG_ENTRY(DeleteAbstractNonVirtualDtor /* delete-abstract-non-virtual-dtor */, 4248, /* DiagArray212 */ 598, 0, R"()")
DIAG_ENTRY(DeleteIncomplete /* delete-incomplete */, 4281, /* DiagArray213 */ 600, 0, R"()")
DIAG_ENTRY(DeleteNonAbstractNonVirtualDtor /* delete-non-abstract-non-virtual-dtor */, 4299, /* DiagArray214 */ 603, 0, R"()")
DIAG_ENTRY(DeleteNonVirtualDtor /* delete-non-virtual-dtor */, 4336, 0, /* DiagSubGroup215 */ 206, R"()")
DIAG_ENTRY(anonymous_121 /* delimited-escape-sequence-extension */, 4360, /* DiagArray216 */ 605, 0, R"()")
DIAG_ENTRY(anonymous_266 /* deprecate-lax-vec-conv-all */, 4396, /* DiagArray217 */ 607, 0, R"()")
DIAG_ENTRY(Deprecated /* deprecated */, 4423, /* DiagArray218 */ 609, /* DiagSubGroup218 */ 209, R"()")
DIAG_ENTRY(anonymous_265 /* deprecated-altivec-src-compat */, 4434, /* DiagArray219 */ 619, 0, R"()")
DIAG_ENTRY(DeprecatedAnonEnumEnumConversion /* deprecated-anon-enum-enum-conversion */, 4464, /* DiagArray220 */ 621, 0, R"()")
DIAG_ENTRY(DeprecatedArrayCompare /* deprecated-array-compare */, 4501, /* DiagArray221 */ 623, 0, R"()")
DIAG_ENTRY(DeprecatedAttributes /* deprecated-attributes */, 4526, /* DiagArray222 */ 625, 0, R"()")
DIAG_ENTRY(DeprecatedBuiltins /* deprecated-builtins */, 4548, /* DiagArray223 */ 629, 0, R"()")
DIAG_ENTRY(DeprecatedCommaSubscript /* deprecated-comma-subscript */, 4568, /* DiagArray224 */ 631, 0, R"()")
DIAG_ENTRY(DeprecatedCopy /* deprecated-copy */, 4595, /* DiagArray225 */ 633, /* DiagSubGroup225 */ 232, R"()")
DIAG_ENTRY(anonymous_7 /* deprecated-copy-dtor */, 4611, 0, /* DiagSubGroup226 */ 234, R"()")
DIAG_ENTRY(DeprecatedCopyWithDtor /* deprecated-copy-with-dtor */, 4632, /* DiagArray227 */ 635, /* DiagSubGroup227 */ 236, R"()")
DIAG_ENTRY(DeprecatedCopyWithUserProvidedCopy /* deprecated-copy-with-user-provided-copy */, 4658, /* DiagArray228 */ 637, 0, R"()")
DIAG_ENTRY(DeprecatedCopyWithUserProvidedDtor /* deprecated-copy-with-user-provided-dtor */, 4698, /* DiagArray229 */ 639, 0, R"()")
DIAG_ENTRY(DeprecatedCoroutine /* deprecated-coroutine */, 4738, /* DiagArray230 */ 641, 0, R"()")
DIAG_ENTRY(DeprecatedDeclarations /* deprecated-declarations */, 4759, /* DiagArray231 */ 643, 0, R"()")
DIAG_ENTRY(DeprecatedDynamicExceptionSpec /* deprecated-dynamic-exception-spec */, 4783, /* DiagArray232 */ 650, 0, R"()")
DIAG_ENTRY(DeprecatedEnumCompare /* deprecated-enum-compare */, 4817, /* DiagArray233 */ 652, 0, R"()")
DIAG_ENTRY(DeprecatedEnumCompareConditional /* deprecated-enum-compare-conditional */, 4841, /* DiagArray234 */ 654, 0, R"()")
DIAG_ENTRY(DeprecatedEnumEnumConversion /* deprecated-enum-enum-conversion */, 4877, /* DiagArray235 */ 656, 0, R"()")
DIAG_ENTRY(DeprecatedEnumFloatConversion /* deprecated-enum-float-conversion */, 4909, /* DiagArray236 */ 658, 0, R"()")
DIAG_ENTRY(DeprecatedImplementations /* deprecated-implementations */, 4942, /* DiagArray237 */ 660, 0, R"()")
DIAG_ENTRY(DeprecatedIncrementBool /* deprecated-increment-bool */, 4969, /* DiagArray238 */ 663, 0, R"()")
DIAG_ENTRY(DeprecatedLiteralOperator /* deprecated-literal-operator */, 4995, /* DiagArray239 */ 665, 0, R"()")
DIAG_ENTRY(DeprecatedModuleDotMap /* deprecated-module-dot-map */, 5023, /* DiagArray240 */ 667, 0, R"()")
DIAG_ENTRY(DeprecatedNonPrototype /* deprecated-non-prototype */, 5049, /* DiagArray241 */ 669, 0, R"()")
DIAG_ENTRY(DeprecatedObjCIsaUsage /* deprecated-objc-isa-usage */, 5074, /* DiagArray242 */ 672, 0, R"()")
DIAG_ENTRY(ObjCPointerIntrospect /* deprecated-objc-pointer-introspection */, 5100, /* DiagArray243 */ 675, /* DiagSubGroup243 */ 238, R"()")
DIAG_ENTRY(ObjCPointerIntrospectPerformSelector /* deprecated-objc-pointer-introspection-performSelector */, 5138, /* DiagArray244 */ 677, 0, R"()")
DIAG_ENTRY(DeprecatedPragma /* deprecated-pragma */, 5192, /* DiagArray245 */ 679, 0, R"()")
DIAG_ENTRY(DeprecatedRedundantConstexprStaticDef /* deprecated-redundant-constexpr-static-def */, 5210, /* DiagArray246 */ 681, 0, R"()")
DIAG_ENTRY(DeprecatedRegister /* deprecated-register */, 5252, /* DiagArray247 */ 683, 0, R"()")
DIAG_ENTRY(DeprecatedStaticAnalyzerFlag /* deprecated-static-analyzer-flag */, 5272, /* DiagArray248 */ 685, 0, R"()")
DIAG_ENTRY(DeprecatedThisCapture /* deprecated-this-capture */, 5304, /* DiagArray249 */ 688, 0, R"()")
DIAG_ENTRY(DeprecatedType /* deprecated-type */, 5328, /* DiagArray250 */ 690, 0, R"()")
DIAG_ENTRY(DeprecatedVolatile /* deprecated-volatile */, 5344, /* DiagArray251 */ 692, 0, R"()")
DIAG_ENTRY(DeprecatedWritableStr /* deprecated-writable-strings */, 5364, 0, /* DiagSubGroup252 */ 240, R"()")
DIAG_ENTRY(anonymous_293 /* direct-ivar-access */, 5392, /* DiagArray253 */ 698, 0, R"()")
DIAG_ENTRY(anonymous_130 /* disabled-macro-expansion */, 5411, /* DiagArray254 */ 700, 0, R"()")
DIAG_ENTRY(anonymous_9 /* disabled-optimization */, 5436, 0, 0, R"()")
DIAG_ENTRY(anonymous_10 /* discard-qual */, 5458, 0, 0, R"()")
DIAG_ENTRY(DistributedObjectModifiers /* distributed-object-modifiers */, 5471, /* DiagArray257 */ 702, 0, R"()")
DIAG_ENTRY(anonymous_11 /* div-by-zero */, 5500, 0, /* DiagSubGroup258 */ 242, R"()")
DIAG_ENTRY(DivZero /* division-by-zero */, 5512, /* DiagArray259 */ 705, 0, R"()")
DIAG_ENTRY(anonymous_208 /* dll-attribute-on-redeclaration */, 5529, /* DiagArray260 */ 707, 0, R"()")
DIAG_ENTRY(DllexportExplicitInstantiationDecl /* dllexport-explicit-instantiation-decl */, 5560, /* DiagArray261 */ 709, 0, R"()")
DIAG_ENTRY(anonymous_209 /* dllimport-static-field-def */, 5598, /* DiagArray262 */ 711, 0, R"()")
DIAG_ENTRY(Documentation /* documentation */, 5625, /* DiagArray263 */ 713, /* DiagSubGroup263 */ 244, R"()")
DIAG_ENTRY(DocumentationDeprecatedSync /* documentation-deprecated-sync */, 5639, /* DiagArray264 */ 734, 0, R"()")
DIAG_ENTRY(DocumentationHTML /* documentation-html */, 5669, /* DiagArray265 */ 736, 0, R"()")
DIAG_ENTRY(DocumentationPedantic /* documentation-pedantic */, 5688, /* DiagArray266 */ 741, /* DiagSubGroup266 */ 247, R"()")
DIAG_ENTRY(DocumentationUnknownCommand /* documentation-unknown-command */, 5711, /* DiagArray267 */ 743, 0, R"()")
DIAG_ENTRY(anonymous_114 /* dollar-in-identifier-extension */, 5741, /* DiagArray268 */ 746, 0, R"()")
DIAG_ENTRY(DoublePromotion /* double-promotion */, 5772, /* DiagArray269 */ 748, 0, R"()")
DIAG_ENTRY(DtorName /* dtor-name */, 5789, /* DiagArray270 */ 750, 0, R"()")
DIAG_ENTRY(anonymous_194 /* dtor-typedef */, 5799, /* DiagArray271 */ 754, 0, R"()")
DIAG_ENTRY(DuplicateDeclSpecifier /* duplicate-decl-specifier */, 5812, /* DiagArray272 */ 756, 0, R"()")
DIAG_ENTRY(anonymous_159 /* duplicate-enum */, 5837, /* DiagArray273 */ 761, 0, R"()")
DIAG_ENTRY(DuplicateArgDecl /* duplicate-method-arg */, 5852, /* DiagArray274 */ 763, 0, R"()")
DIAG_ENTRY(MethodDuplicate /* duplicate-method-match */, 5873, /* DiagArray275 */ 765, 0, R"()")
DIAG_ENTRY(anonymous_174 /* duplicate-protocol */, 5896, /* DiagArray276 */ 767, 0, R"()")
DIAG_ENTRY(DXILValidation /* dxil-validation */, 5915, /* DiagArray277 */ 769, 0, R"()")
DIAG_ENTRY(DynamicClassMemaccess /* dynamic-class-memaccess */, 5931, /* DiagArray278 */ 771, 0, R"()")
DIAG_ENTRY(DynamicExceptionSpec /* dynamic-exception-spec */, 5955, /* DiagArray279 */ 773, /* DiagSubGroup279 */ 249, R"()")
DIAG_ENTRY(anonymous_111 /* eager-load-cxx-named-modules */, 5978, /* DiagArray280 */ 775, 0, R"()")
DIAG_ENTRY(anonymous_39 /* effc++ */, 6007, 0, /* DiagSubGroup281 */ 251, R"()")
DIAG_ENTRY(anonymous_146 /* elaborated-enum-base */, 6014, /* DiagArray282 */ 777, 0, R"()")
DIAG_ENTRY(anonymous_147 /* elaborated-enum-class */, 6035, /* DiagArray283 */ 779, 0, R"()")
DIAG_ENTRY(anonymous_136 /* embedded-directive */, 6057, /* DiagArray284 */ 781, 0, R"()")
DIAG_ENTRY(EmptyBody /* empty-body */, 6076, /* DiagArray285 */ 783, 0, R"()")
DIAG_ENTRY(anonymous_152 /* empty-decomposition */, 6087, /* DiagArray286 */ 789, 0, R"()")
DIAG_ENTRY(EmptyInitStatement /* empty-init-stmt */, 6107, /* DiagArray287 */ 791, 0, R"()")
DIAG_ENTRY(anonymous_143 /* empty-translation-unit */, 6123, /* DiagArray288 */ 793, 0, R"()")
DIAG_ENTRY(anonymous_212 /* encode-type */, 6146, /* DiagArray289 */ 795, 0, R"()")
DIAG_ENTRY(anonymous_61 /* endif-labels */, 6158, 0, /* DiagSubGroup290 */ 253, R"()")
DIAG_ENTRY(EnumCompare /* enum-compare */, 6171, /* DiagArray291 */ 797, /* DiagSubGroup291 */ 255, R"()")
DIAG_ENTRY(EnumCompareConditional /* enum-compare-conditional */, 6184, /* DiagArray292 */ 799, /* DiagSubGroup292 */ 258, R"()")
DIAG_ENTRY(EnumCompareSwitch /* enum-compare-switch */, 6209, /* DiagArray293 */ 801, 0, R"()")
DIAG_ENTRY(anonymous_81 /* enum-constexpr-conversion */, 6229, /* DiagArray294 */ 803, 0, R"()")
DIAG_ENTRY(EnumConversion /* enum-conversion */, 6255, /* DiagArray295 */ 805, /* DiagSubGroup295 */ 260, R"()")
DIAG_ENTRY(EnumEnumConversion /* enum-enum-conversion */, 6271, /* DiagArray296 */ 807, /* DiagSubGroup296 */ 264, R"()")
DIAG_ENTRY(EnumFloatConversion /* enum-float-conversion */, 6292, /* DiagArray297 */ 809, /* DiagSubGroup297 */ 266, R"()")
DIAG_ENTRY(EnumTooLarge /* enum-too-large */, 6314, /* DiagArray298 */ 811, 0, R"()")
DIAG_ENTRY(Exceptions /* exceptions */, 6329, /* DiagArray299 */ 814, 0, R"()")
DIAG_ENTRY(ExcessInitializers /* excess-initializers */, 6340, /* DiagArray300 */ 818, 0, R"()")
DIAG_ENTRY(anonymous_163 /* excessive-regsave */, 6360, /* DiagArray301 */ 823, 0, R"()")
DIAG_ENTRY(ExitTimeDestructors /* exit-time-destructors */, 6378, /* DiagArray302 */ 825, 0, R"()")
DIAG_ENTRY(ExpansionToDefined /* expansion-to-defined */, 6400, /* DiagArray303 */ 827, 0, R"()")
DIAG_ENTRY(anonymous_297 /* experimental-header-units */, 6421, /* DiagArray304 */ 830, 0, R"()")
DIAG_ENTRY(ExplicitInitializeCall /* explicit-initialize-call */, 6447, /* DiagArray305 */ 832, 0, R"()")
DIAG_ENTRY(anonymous_245 /* explicit-ownership-type */, 6472, /* DiagArray306 */ 835, 0, R"()")
DIAG_ENTRY(ExportUnnamed /* export-unnamed */, 6496, 0, 0, R"()")
DIAG_ENTRY(ExternCCompat /* extern-c-compat */, 6511, /* DiagArray308 */ 837, 0, R"()")
DIAG_ENTRY(anonymous_240 /* extern-initializer */, 6527, /* DiagArray309 */ 839, 0, R"()")
DIAG_ENTRY(Extra /* extra */, 6546, /* DiagArray310 */ 841, /* DiagSubGroup310 */ 268, R"()")
DIAG_ENTRY(anonymous_254 /* extra-qualification */, 6552, /* DiagArray311 */ 843, 0, R"()")
DIAG_ENTRY(ExtraSemi /* extra-semi */, 6572, /* DiagArray312 */ 845, /* DiagSubGroup312 */ 283, R"()")
DIAG_ENTRY(ExtraSemiStmt /* extra-semi-stmt */, 6583, /* DiagArray313 */ 848, /* DiagSubGroup313 */ 286, R"()")
DIAG_ENTRY(ExtraTokens /* extra-tokens */, 6599, /* DiagArray314 */ 850, 0, R"()")
DIAG_ENTRY(FinalDtorNonFinalClass /* final-dtor-non-final-class */, 6612, /* DiagArray315 */ 853, 0, R"()")
DIAG_ENTRY(FinalMacro /* final-macro */, 6639, /* DiagArray316 */ 855, 0, R"()")
DIAG_ENTRY(anonymous_145 /* fixed-enum-extension */, 6651, /* DiagArray317 */ 857, 0, R"()")
DIAG_ENTRY(anonymous_80 /* fixed-point-overflow */, 6672, /* DiagArray318 */ 859, 0, R"()")
DIAG_ENTRY(FlagEnum /* flag-enum */, 6693, /* DiagArray319 */ 861, 0, R"()")
DIAG_ENTRY(FlexibleArrayExtensions /* flexible-array-extensions */, 6703, /* DiagArray320 */ 863, 0, R"()")
DIAG_ENTRY(FloatConversion /* float-conversion */, 6729, /* DiagArray321 */ 866, /* DiagSubGroup321 */ 288, R"()")
DIAG_ENTRY(anonymous_247 /* float-equal */, 6746, /* DiagArray322 */ 868, 0, R"()")
DIAG_ENTRY(FloatOverflowConversion /* float-overflow-conversion */, 6758, /* DiagArray323 */ 870, 0, R"()")
DIAG_ENTRY(FloatZeroConversion /* float-zero-conversion */, 6784, /* DiagArray324 */ 873, 0, R"()")
DIAG_ENTRY(ForLoopAnalysis /* for-loop-analysis */, 6806, /* DiagArray325 */ 875, 0, R"()")
DIAG_ENTRY(Format /* format */, 6824, /* DiagArray326 */ 878, /* DiagSubGroup326 */ 291, R"()")
DIAG_ENTRY(FormatExtraArgs /* format-extra-args */, 6831, /* DiagArray327 */ 905, 0, R"()")
DIAG_ENTRY(FormatInsufficientArgs /* format-insufficient-args */, 6849, /* DiagArray328 */ 907, 0, R"()")
DIAG_ENTRY(FormatInvalidSpecifier /* format-invalid-specifier */, 6874, /* DiagArray329 */ 909, 0, R"()")
DIAG_ENTRY(FormatNonStandard /* format-non-iso */, 6899, /* DiagArray330 */ 911, 0, R"()")
DIAG_ENTRY(FormatNonLiteral /* format-nonliteral */, 6914, /* DiagArray331 */ 915, 0, R"()")
DIAG_ENTRY(FormatOverflow /* format-overflow */, 6932, /* DiagArray332 */ 917, /* DiagSubGroup332 */ 301, R"()")
DIAG_ENTRY(FormatOverflowNonKprintf /* format-overflow-non-kprintf */, 6948, /* DiagArray333 */ 919, 0, R"()")
DIAG_ENTRY(FormatPedantic /* format-pedantic */, 6976, /* DiagArray334 */ 921, 0, R"()")
DIAG_ENTRY(FormatSecurity /* format-security */, 6992, /* DiagArray335 */ 924, 0, R"()")
DIAG_ENTRY(FormatTruncation /* format-truncation */, 7008, /* DiagArray336 */ 926, /* DiagSubGroup336 */ 303, R"()")
DIAG_ENTRY(FormatTruncationNonKprintf /* format-truncation-non-kprintf */, 7026, /* DiagArray337 */ 928, 0, R"()")
DIAG_ENTRY(FormatTypeConfusion /* format-type-confusion */, 7056, /* DiagArray338 */ 930, 0, R"()")
DIAG_ENTRY(FormatY2K /* format-y2k */, 7078, 0, 0, R"()")
DIAG_ENTRY(FormatZeroLength /* format-zero-length */, 7089, /* DiagArray340 */ 932, 0, R"()")
DIAG_ENTRY(Format2 /* format=2 */, 7108, 0, /* DiagSubGroup341 */ 305, R"()")
DIAG_ENTRY(FortifySource /* fortify-source */, 7117, /* DiagArray342 */ 934, /* DiagSubGroup342 */ 309, R"()")
DIAG_ENTRY(FourByteMultiChar /* four-char-constants */, 7132, /* DiagArray343 */ 939, 0, R"()")
DIAG_ENTRY(FrameAddress /* frame-address */, 7152, /* DiagArray344 */ 941, 0, R"()")
DIAG_ENTRY(BackendFrameLargerThan /* frame-larger-than */, 7166, /* DiagArray345 */ 943, 0, R"(More fine grained information about the stack layout is available by adding the
`-Rpass-analysis=stack-frame-layout` command-line flag to the compiler
invocation.

The diagnostic information can be saved to a file in a machine readable format,
like YAML by adding the `-foptimization-record-file=<file>` command-line flag.

Results can be filtered by function name by passing
`-mllvm -filter-print-funcs=foo`, where `foo` is the target function's name.

   .. code-block:: console

      clang -c a.cpp -Rpass-analysis=stack-frame-layout -mllvm -filter-print-funcs=foo

   .. code-block:: console

      clang -c a.cpp -Rpass-analysis=stack-frame-layout -foptimization-record-file=<file>)")
DIAG_ENTRY(anonymous_77 /* frame-larger-than= */, 7184, 0, /* DiagSubGroup346 */ 312, R"()")
DIAG_ENTRY(FrameworkIncludePrivateFromPublic /* framework-include-private-from-public */, 7203, /* DiagArray347 */ 946, 0, R"()")
DIAG_ENTRY(FreeNonHeapObject /* free-nonheap-object */, 7241, /* DiagArray348 */ 948, 0, R"()")
DIAG_ENTRY(FunctionDefInObjCContainer /* function-def-in-objc-container */, 7261, /* DiagArray349 */ 950, 0, R"()")
DIAG_ENTRY(FunctionMultiVersioning /* function-multiversion */, 7292, /* DiagArray350 */ 952, /* DiagSubGroup350 */ 314, R"()")
DIAG_ENTRY(FUseLdPath /* fuse-ld-path */, 7314, /* DiagArray351 */ 957, 0, R"()")
DIAG_ENTRY(FutureAttrs /* future-attribute-extensions */, 7327, 0, /* DiagSubGroup352 */ 316, R"()")
DIAG_ENTRY(FutureCompat /* future-compat */, 7355, 0, 0, R"()")
DIAG_ENTRY(GccCompat /* gcc-compat */, 7369, /* DiagArray354 */ 959, 0, R"()")
DIAG_ENTRY(anonymous_149 /* generic-type-extension */, 7380, /* DiagArray355 */ 971, 0, R"()")
DIAG_ENTRY(GlobalConstructors /* global-constructors */, 7403, /* DiagArray356 */ 973, 0, R"(Emit a warning for each variable declaration that generates code run at startup.)")
DIAG_ENTRY(GlobalISel /* global-isel */, 7423, /* DiagArray357 */ 976, 0, R"()")
DIAG_ENTRY(GNU /* gnu */, 7435, 0, /* DiagSubGroup358 */ 320, R"()")
DIAG_ENTRY(GNUAlignofExpression /* gnu-alignof-expression */, 7439, /* DiagArray359 */ 979, 0, R"()")
DIAG_ENTRY(GNUAnonymousStruct /* gnu-anonymous-struct */, 7462, /* DiagArray360 */ 981, 0, R"()")
DIAG_ENTRY(anonymous_256 /* gnu-array-member-paren-init */, 7483, /* DiagArray361 */ 983, 0, R"()")
DIAG_ENTRY(GNUAutoType /* gnu-auto-type */, 7511, /* DiagArray362 */ 985, 0, R"()")
DIAG_ENTRY(GNUBinaryLiteral /* gnu-binary-literal */, 7525, /* DiagArray363 */ 987, 0, R"()")
DIAG_ENTRY(GNUCaseRange /* gnu-case-range */, 7544, /* DiagArray364 */ 989, 0, R"()")
DIAG_ENTRY(GNUComplexInteger /* gnu-complex-integer */, 7559, /* DiagArray365 */ 991, 0, R"()")
DIAG_ENTRY(GNUCompoundLiteralInitializer /* gnu-compound-literal-initializer */, 7579, /* DiagArray366 */ 993, 0, R"()")
DIAG_ENTRY(GNUConditionalOmittedOperand /* gnu-conditional-omitted-operand */, 7612, /* DiagArray367 */ 995, 0, R"()")
DIAG_ENTRY(GNUDesignator /* gnu-designator */, 7644, /* DiagArray368 */ 997, 0, R"()")
DIAG_ENTRY(anonymous_1 /* gnu-empty-initializer */, 7659, 0, 0, R"()")
DIAG_ENTRY(GNUEmptyStruct /* gnu-empty-struct */, 7681, /* DiagArray370 */ 1001, 0, R"()")
DIAG_ENTRY(GNUFlexibleArrayInitializer /* gnu-flexible-array-initializer */, 7698, /* DiagArray371 */ 1005, 0, R"()")
DIAG_ENTRY(GNUFlexibleArrayUnionMember /* gnu-flexible-array-union-member */, 7729, /* DiagArray372 */ 1007, 0, R"()")
DIAG_ENTRY(GNUFoldingConstant /* gnu-folding-constant */, 7761, /* DiagArray373 */ 1009, 0, R"()")
DIAG_ENTRY(GNUImaginaryConstant /* gnu-imaginary-constant */, 7782, /* DiagArray374 */ 1013, 0, R"()")
DIAG_ENTRY(GNUIncludeNext /* gnu-include-next */, 7805, /* DiagArray375 */ 1015, 0, R"()")
DIAG_ENTRY(anonymous_213 /* gnu-inline-cpp-without-extern */, 7822, /* DiagArray376 */ 1017, 0, R"()")
DIAG_ENTRY(GNULabelsAsValue /* gnu-label-as-value */, 7852, /* DiagArray377 */ 1019, 0, R"()")
DIAG_ENTRY(GNULineMarker /* gnu-line-marker */, 7871, /* DiagArray378 */ 1022, 0, R"()")
DIAG_ENTRY(GNUNullPointerArithmetic /* gnu-null-pointer-arithmetic */, 7887, /* DiagArray379 */ 1024, 0, R"()")
DIAG_ENTRY(GNUOffsetofExtensions /* gnu-offsetof-extensions */, 7915, /* DiagArray380 */ 1026, 0, R"()")
DIAG_ENTRY(GNUPointerArith /* gnu-pointer-arith */, 7939, /* DiagArray381 */ 1028, 0, R"()")
DIAG_ENTRY(GNURedeclaredEnum /* gnu-redeclared-enum */, 7957, /* DiagArray382 */ 1032, 0, R"()")
DIAG_ENTRY(GNUStatementExpression /* gnu-statement-expression */, 7977, /* DiagArray383 */ 1034, /* DiagSubGroup383 */ 352, R"()")
DIAG_ENTRY(GNUStatementExpressionFromMacroExpansion /* gnu-statement-expression-from-macro-expansion */, 8002, /* DiagArray384 */ 1036, 0, R"()")
DIAG_ENTRY(GNUStaticFloatInit /* gnu-static-float-init */, 8048, /* DiagArray385 */ 1038, 0, R"()")
DIAG_ENTRY(GNUStringLiteralOperatorTemplate /* gnu-string-literal-operator-template */, 8070, /* DiagArray386 */ 1040, 0, R"()")
DIAG_ENTRY(GNUUnionCast /* gnu-union-cast */, 8107, /* DiagArray387 */ 1042, 0, R"()")
DIAG_ENTRY(GNUVariableSizedTypeNotAtEnd /* gnu-variable-sized-type-not-at-end */, 8122, /* DiagArray388 */ 1044, 0, R"()")
DIAG_ENTRY(GNUZeroLineDirective /* gnu-zero-line-directive */, 8157, /* DiagArray389 */ 1046, 0, R"()")
DIAG_ENTRY(GNUZeroVariadicMacroArguments /* gnu-zero-variadic-macro-arguments */, 8181, /* DiagArray390 */ 1048, 0, R"()")
DIAG_ENTRY(anonymous_273 /* gpu-maybe-wrong-side */, 8215, /* DiagArray391 */ 1051, 0, R"()")
DIAG_ENTRY(anonymous_142 /* header-guard */, 8236, /* DiagArray392 */ 1053, 0, R"()")
DIAG_ENTRY(HeaderHygiene /* header-hygiene */, 8249, /* DiagArray393 */ 1055, 0, R"()")
DIAG_ENTRY(HIPOpenMPOffloading /* hip-omp-target-directives */, 8264, /* DiagArray394 */ 1057, 0, R"()")
DIAG_ENTRY(HIPOnly /* hip-only */, 8290, /* DiagArray395 */ 1059, 0, R"()")
DIAG_ENTRY(HLSLExtension /* hlsl-extensions */, 8299, /* DiagArray396 */ 1061, 0, R"()")
DIAG_ENTRY(anonymous_268 /* idiomatic-parentheses */, 8315, /* DiagArray397 */ 1063, 0, R"()")
DIAG_ENTRY(IgnoredAttributes /* ignored-attributes */, 8337, /* DiagArray398 */ 1065, 0, R"()")
DIAG_ENTRY(anonymous_216 /* ignored-availability-without-sdk-settings */, 8356, /* DiagArray399 */ 1153, 0, R"()")
DIAG_ENTRY(IgnoredGCH /* ignored-gch */, 8398, /* DiagArray400 */ 1155, 0, R"()")
DIAG_ENTRY(IgnoredOptimizationArgument /* ignored-optimization-argument */, 8410, /* DiagArray401 */ 1158, 0, R"()")
DIAG_ENTRY(IgnoredPragmaIntrinsic /* ignored-pragma-intrinsic */, 8440, /* DiagArray402 */ 1161, 0, R"()")
DIAG_ENTRY(IgnoredPragmaOptimize /* ignored-pragma-optimize */, 8465, 0, 0, R"()")
DIAG_ENTRY(IgnoredPragmas /* ignored-pragmas */, 8489, /* DiagArray404 */ 1163, /* DiagSubGroup404 */ 354, R"()")
DIAG_ENTRY(IgnoredQualifiers /* ignored-qualifiers */, 8505, /* DiagArray405 */ 1213, /* DiagSubGroup405 */ 357, R"()")
DIAG_ENTRY(IgnoredReferenceQualifiers /* ignored-reference-qualifiers */, 8524, /* DiagArray406 */ 1218, 0, R"()")
DIAG_ENTRY(Implicit /* implicit */, 8553, 0, /* DiagSubGroup407 */ 359, R"()")
DIAG_ENTRY(ImplicitAtomic /* implicit-atomic-properties */, 8562, /* DiagArray408 */ 1220, 0, R"()")
DIAG_ENTRY(ImplicitConstIntFloatConversion /* implicit-const-int-float-conversion */, 8589, /* DiagArray409 */ 1223, 0, R"()")
DIAG_ENTRY(ImplicitConversionFloatingPointToBool /* implicit-conversion-floating-point-to-bool */, 8625, /* DiagArray410 */ 1225, 0, R"()")
DIAG_ENTRY(anonymous_285 /* implicit-exception-spec-mismatch */, 8668, /* DiagArray411 */ 1227, 0, R"()")
DIAG_ENTRY(ImplicitFallthrough /* implicit-fallthrough */, 8701, /* DiagArray412 */ 1229, /* DiagSubGroup412 */ 362, R"()")
DIAG_ENTRY(ImplicitFallthroughPerFunction /* implicit-fallthrough-per-function */, 8722, /* DiagArray413 */ 1231, 0, R"()")
DIAG_ENTRY(ImplicitFixedPointConversion /* implicit-fixed-point-conversion */, 8756, /* DiagArray414 */ 1233, 0, R"()")
DIAG_ENTRY(ImplicitFloatConversion /* implicit-float-conversion */, 8788, /* DiagArray415 */ 1235, /* DiagSubGroup415 */ 364, R"()")
DIAG_ENTRY(ImplicitFunctionDeclare /* implicit-function-declaration */, 8814, /* DiagArray416 */ 1238, 0, R"()")
DIAG_ENTRY(ImplicitInt /* implicit-int */, 8844, /* DiagArray417 */ 1244, 0, R"()")
DIAG_ENTRY(ImplicitIntConversion /* implicit-int-conversion */, 8857, /* DiagArray418 */ 1248, /* DiagSubGroup418 */ 367, R"()")
DIAG_ENTRY(ImplicitIntFloatConversion /* implicit-int-float-conversion */, 8881, /* DiagArray419 */ 1251, /* DiagSubGroup419 */ 369, R"()")
DIAG_ENTRY(anonymous_185 /* implicit-retain-self */, 8911, /* DiagArray420 */ 1253, 0, R"()")
DIAG_ENTRY(ImplicitlyUnsignedLiteral /* implicitly-unsigned-literal */, 8932, /* DiagArray421 */ 1255, 0, R"()")
DIAG_ENTRY(anonymous_30 /* import */, 8960, 0, 0, R"()")
DIAG_ENTRY(anonymous_135 /* import-preprocessor-directive-pedantic */, 8967, /* DiagArray423 */ 1257, 0, R"()")
DIAG_ENTRY(anonymous_281 /* inaccessible-base */, 9006, /* DiagArray424 */ 1259, 0, R"()")
DIAG_ENTRY(anonymous_141 /* include-angled-in-module-purview */, 9024, /* DiagArray425 */ 1261, 0, R"()")
DIAG_ENTRY(anonymous_125 /* include-next-absolute-path */, 9057, /* DiagArray426 */ 1263, 0, R"()")
DIAG_ENTRY(anonymous_124 /* include-next-outside-header */, 9084, /* DiagArray427 */ 1265, 0, R"()")
DIAG_ENTRY(IncompatibleExceptionSpec /* incompatible-exception-spec */, 9112, /* DiagArray428 */ 1267, 0, R"()")
DIAG_ENTRY(IncompatibleFunctionPointerTypes /* incompatible-function-pointer-types */, 9140, /* DiagArray429 */ 1270, 0, R"()")
DIAG_ENTRY(anonymous_270 /* incompatible-function-pointer-types-strict */, 9176, /* DiagArray430 */ 1272, 0, R"()")
DIAG_ENTRY(anonymous_168 /* incompatible-library-redeclaration */, 9219, /* DiagArray431 */ 1274, 0, R"()")
DIAG_ENTRY(IncompatibleMSPragmaSection /* incompatible-ms-pragma-section */, 9254, /* DiagArray432 */ 1276, 0, R"()")
DIAG_ENTRY(IncompatibleMSStruct /* incompatible-ms-struct */, 9285, /* DiagArray433 */ 1278, 0, R"()")
DIAG_ENTRY(IncompatiblePointerTypes /* incompatible-pointer-types */, 9308, /* DiagArray434 */ 1281, /* DiagSubGroup434 */ 371, R"()")
DIAG_ENTRY(IncompatiblePointerTypesDiscardsQualifiers /* incompatible-pointer-types-discards-qualifiers */, 9335, /* DiagArray435 */ 1283, 0, R"()")
DIAG_ENTRY(anonymous_175 /* incompatible-property-type */, 9382, /* DiagArray436 */ 1287, 0, R"()")
DIAG_ENTRY(anonymous_97 /* incompatible-sysroot */, 9409, /* DiagArray437 */ 1289, 0, R"()")
DIAG_ENTRY(IncompleteFrameworkModuleDeclaration /* incomplete-framework-module-declaration */, 9430, /* DiagArray438 */ 1291, 0, R"()")
DIAG_ENTRY(anonymous_177 /* incomplete-implementation */, 9470, /* DiagArray439 */ 1293, 0, R"()")
DIAG_ENTRY(IncompleteModule /* incomplete-module */, 9496, 0, /* DiagSubGroup440 */ 374, R"()")
DIAG_ENTRY(anonymous_167 /* incomplete-setjmp-declaration */, 9514, /* DiagArray441 */ 1295, 0, R"()")
DIAG_ENTRY(IncompleteUmbrella /* incomplete-umbrella */, 9544, /* DiagArray442 */ 1297, 0, R"()")
DIAG_ENTRY(MicrosoftInconsistentDllImport /* inconsistent-dllimport */, 9564, /* DiagArray443 */ 1301, 0, R"()")
DIAG_ENTRY(CXX11WarnInconsistentOverrideDestructor /* inconsistent-missing-destructor-override */, 9587, /* DiagArray444 */ 1304, 0, R"()")
DIAG_ENTRY(CXX11WarnInconsistentOverrideMethod /* inconsistent-missing-override */, 9628, /* DiagArray445 */ 1306, 0, R"()")
DIAG_ENTRY(IncrementBool /* increment-bool */, 9658, /* DiagArray446 */ 1308, /* DiagSubGroup446 */ 377, R"()")
DIAG_ENTRY(InfiniteRecursion /* infinite-recursion */, 9673, /* DiagArray447 */ 1310, 0, R"()")
DIAG_ENTRY(anonymous_31 /* init-self */, 9692, 0, 0, R"()")
DIAG_ENTRY(InitializerOverrides /* initializer-overrides */, 9702, /* DiagArray449 */ 1312, 0, R"()")
DIAG_ENTRY(anonymous_193 /* injected-class-name */, 9724, /* DiagArray450 */ 1316, 0, R"()")
DIAG_ENTRY(anonymous_32 /* inline */, 9744, 0, 0, R"()")
DIAG_ENTRY(BackendInlineAsm /* inline-asm */, 9751, /* DiagArray452 */ 1318, 0, R"()")
DIAG_ENTRY(InlineNamespaceReopenedNoninline /* inline-namespace-reopened-noninline */, 9762, /* DiagArray453 */ 1320, 0, R"()")
DIAG_ENTRY(anonymous_282 /* inline-new-delete */, 9798, /* DiagArray454 */ 1322, 0, R"()")
DIAG_ENTRY(anonymous_229 /* instantiation-after-specialization */, 9816, /* DiagArray455 */ 1324, 0, R"()")
DIAG_ENTRY(IntConversion /* int-conversion */, 9851, /* DiagArray456 */ 1326, 0, R"()")
DIAG_ENTRY(anonymous_66 /* int-conversions */, 9866, 0, /* DiagSubGroup457 */ 379, R"()")
DIAG_ENTRY(IntInBoolContext /* int-in-bool-context */, 9882, /* DiagArray458 */ 1329, 0, R"()")
DIAG_ENTRY(IntToPointerCast /* int-to-pointer-cast */, 9902, /* DiagArray459 */ 1332, /* DiagSubGroup459 */ 381, R"()")
DIAG_ENTRY(IntToVoidPointerCast /* int-to-void-pointer-cast */, 9922, /* DiagArray460 */ 1334, 0, R"()")
DIAG_ENTRY(anonymous_79 /* integer-overflow */, 9947, /* DiagArray461 */ 1336, 0, R"()")
DIAG_ENTRY(InvalidCommandLineArgument /* invalid-command-line-argument */, 9964, /* DiagArray462 */ 1338, /* DiagSubGroup462 */ 383, R"()")
DIAG_ENTRY(anonymous_196 /* invalid-constexpr */, 9994, /* DiagArray463 */ 1350, 0, R"()")
DIAG_ENTRY(anonymous_88 /* invalid-feature-combination */, 10012, /* DiagArray464 */ 1352, 0, R"()")
DIAG_ENTRY(ObjCInvalidIBOutletProperty /* invalid-iboutlet */, 10040, /* DiagArray465 */ 1354, 0, R"()")
DIAG_ENTRY(anonymous_210 /* invalid-initializer-from-system-header */, 10057, /* DiagArray466 */ 1357, 0, R"()")
DIAG_ENTRY(InvalidIOSDeploymentTarget /* invalid-ios-deployment-target */, 10096, /* DiagArray467 */ 1359, 0, R"()")
DIAG_ENTRY(anonymous_222 /* invalid-no-builtin-names */, 10126, /* DiagArray468 */ 1361, 0, R"()")
DIAG_ENTRY(InvalidNoreturn /* invalid-noreturn */, 10151, /* DiagArray469 */ 1363, 0, R"()")
DIAG_ENTRY(InvalidOffsetof /* invalid-offsetof */, 10168, /* DiagArray470 */ 1366, 0, R"()")
DIAG_ENTRY(InvalidOrNonExistentDirectory /* invalid-or-nonexistent-directory */, 10185, /* DiagArray471 */ 1369, 0, R"()")
DIAG_ENTRY(anonymous_227 /* invalid-partial-specialization */, 10218, /* DiagArray472 */ 1371, 0, R"()")
DIAG_ENTRY(anonymous_33 /* invalid-pch */, 10249, 0, 0, R"()")
DIAG_ENTRY(InvalidPPToken /* invalid-pp-token */, 10261, /* DiagArray474 */ 1373, 0, R"()")
DIAG_ENTRY(InvalidSourceEncoding /* invalid-source-encoding */, 10278, /* DiagArray475 */ 1376, 0, R"()")
DIAG_ENTRY(anonymous_188 /* invalid-static-assert-message */, 10302, /* DiagArray476 */ 1379, 0, R"()")
DIAG_ENTRY(anonymous_138 /* invalid-token-paste */, 10332, /* DiagArray477 */ 1381, 0, R"()")
DIAG_ENTRY(anonymous_123 /* invalid-unevaluated-string */, 10352, /* DiagArray478 */ 1383, 0, R"()")
DIAG_ENTRY(anonymous_116 /* invalid-utf8 */, 10379, /* DiagArray479 */ 1385, 0, R"()")
DIAG_ENTRY(anonymous_267 /* jump-seh-finally */, 10392, /* DiagArray480 */ 1387, 0, R"()")
DIAG_ENTRY(KeywordCompat /* keyword-compat */, 10409, /* DiagArray481 */ 1389, 0, R"()")
DIAG_ENTRY(KeywordAsMacro /* keyword-macro */, 10424, /* DiagArray482 */ 1391, 0, R"()")
DIAG_ENTRY(anonymous_89 /* knl-knm-isa-support-removed */, 10438, /* DiagArray483 */ 1393, 0, R"()")
DIAG_ENTRY(KNRPromotedParameter /* knr-promoted-parameter */, 10466, /* DiagArray484 */ 1395, 0, R"()")
DIAG_ENTRY(anonymous_115 /* language-extension-token */, 10489, /* DiagArray485 */ 1397, 0, R"()")
DIAG_ENTRY(LargeByValueCopy /* large-by-value-copy */, 10514, /* DiagArray486 */ 1399, 0, R"()")
DIAG_ENTRY(LibLTO /* liblto */, 10534, 0, 0, R"()")
DIAG_ENTRY(LinkerWarnings /* linker-warnings */, 10541, /* DiagArray488 */ 1402, 0, R"()")
DIAG_ENTRY(LiteralConversion /* literal-conversion */, 10557, /* DiagArray489 */ 1404, 0, R"()")
DIAG_ENTRY(LiteralRange /* literal-range */, 10576, /* DiagArray490 */ 1407, 0, R"()")
DIAG_ENTRY(LocalTypeTemplateArgs /* local-type-template-args */, 10590, /* DiagArray491 */ 1411, /* DiagSubGroup491 */ 385, R"()")
DIAG_ENTRY(LogicalNotParentheses /* logical-not-parentheses */, 10615, /* DiagArray492 */ 1413, 0, R"()")
DIAG_ENTRY(LogicalOpParentheses /* logical-op-parentheses */, 10639, /* DiagArray493 */ 1415, 0, R"()")
DIAG_ENTRY(LongLong /* long-long */, 10662, /* DiagArray494 */ 1417, /* DiagSubGroup494 */ 387, R"()")
DIAG_ENTRY(LoopAnalysis /* loop-analysis */, 10672, 0, /* DiagSubGroup495 */ 389, R"()")
DIAG_ENTRY(MacroRedefined /* macro-redefined */, 10686, /* DiagArray496 */ 1419, 0, R"()")
DIAG_ENTRY(Main /* main */, 10702, /* DiagArray497 */ 1421, 0, R"()")
DIAG_ENTRY(MainReturnType /* main-return-type */, 10707, /* DiagArray498 */ 1429, 0, R"()")
DIAG_ENTRY(MalformedWarningCheck /* malformed-warning-check */, 10724, /* DiagArray499 */ 1431, 0, R"()")
DIAG_ENTRY(anonymous_242 /* many-braces-around-scalar-init */, 10748, /* DiagArray500 */ 1433, 0, R"()")
DIAG_ENTRY(anonymous_120 /* mathematical-notation-identifier-extension */, 10779, /* DiagArray501 */ 1435, 0, R"()")
DIAG_ENTRY(MaxTokens /* max-tokens */, 10822, /* DiagArray502 */ 1437, 0, R"(The warning is issued if the number of pre-processor tokens exceeds
the token limit, which can be set in three ways:

1. As a limit at a specific point in a file, using the ``clang max_tokens_here``
   pragma:

   .. code-block:: c++

      #pragma clang max_tokens_here 1234

2. As a per-translation unit limit, using the ``-fmax-tokens=`` command-line
   flag:

   .. code-block:: console

      clang -c a.cpp -fmax-tokens=1234

3. As a per-translation unit limit using the ``clang max_tokens_total`` pragma,
   which works like and overrides the ``-fmax-tokens=`` flag:

   .. code-block:: c++

      #pragma clang max_tokens_total 1234

These limits can be helpful in limiting code growth through included files.

Setting a token limit of zero means no limit.

Note that the warning is disabled by default, so -Wmax-tokens must be used
in addition with the pragmas or -fmax-tokens flag to get any warnings.)")
DIAG_ENTRY(MaxUnsignedZero /* max-unsigned-zero */, 10833, /* DiagArray503 */ 1440, 0, R"()")
DIAG_ENTRY(MemsetTransposedArgs /* memset-transposed-args */, 10851, /* DiagArray504 */ 1442, 0, R"()")
DIAG_ENTRY(anonymous_170 /* memsize-comparison */, 10874, /* DiagArray505 */ 1444, 0, R"()")
DIAG_ENTRY(MethodSignatures /* method-signatures */, 10893, /* DiagArray506 */ 1446, 0, R"()")
DIAG_ENTRY(Microsoft /* microsoft */, 10911, 0, /* DiagSubGroup507 */ 392, R"()")
DIAG_ENTRY(MicrosoftAbstract /* microsoft-abstract */, 10921, /* DiagArray508 */ 1449, 0, R"()")
DIAG_ENTRY(MicrosoftAnonTag /* microsoft-anon-tag */, 10940, /* DiagArray509 */ 1451, 0, R"()")
DIAG_ENTRY(MicrosoftCast /* microsoft-cast */, 10959, /* DiagArray510 */ 1454, 0, R"()")
DIAG_ENTRY(MicrosoftCharize /* microsoft-charize */, 10974, /* DiagArray511 */ 1457, 0, R"()")
DIAG_ENTRY(MicrosoftCommentPaste /* microsoft-comment-paste */, 10992, /* DiagArray512 */ 1459, 0, R"()")
DIAG_ENTRY(MicrosoftConstInit /* microsoft-const-init */, 11016, /* DiagArray513 */ 1461, 0, R"()")
DIAG_ENTRY(MicrosoftCppMacro /* microsoft-cpp-macro */, 11037, /* DiagArray514 */ 1463, 0, R"()")
DIAG_ENTRY(MicrosoftDefaultArgRedefinition /* microsoft-default-arg-redefinition */, 11057, /* DiagArray515 */ 1465, 0, R"()")
DIAG_ENTRY(MicrosoftDrectveSection /* microsoft-drectve-section */, 11092, /* DiagArray516 */ 1467, 0, R"()")
DIAG_ENTRY(MicrosoftEndOfFile /* microsoft-end-of-file */, 11118, /* DiagArray517 */ 1469, 0, R"()")
DIAG_ENTRY(MicrosoftEnumForwardReference /* microsoft-enum-forward-reference */, 11140, /* DiagArray518 */ 1471, 0, R"()")
DIAG_ENTRY(MicrosoftEnumValue /* microsoft-enum-value */, 11173, /* DiagArray519 */ 1473, 0, R"()")
DIAG_ENTRY(MicrosoftExceptionSpec /* microsoft-exception-spec */, 11194, /* DiagArray520 */ 1475, 0, R"()")
DIAG_ENTRY(anonymous_148 /* microsoft-exists */, 11219, /* DiagArray521 */ 1481, 0, R"()")
DIAG_ENTRY(MicrosoftExplicitConstructorCall /* microsoft-explicit-constructor-call */, 11236, /* DiagArray522 */ 1483, 0, R"()")
DIAG_ENTRY(MicrosoftExtraQualification /* microsoft-extra-qualification */, 11272, /* DiagArray523 */ 1485, 0, R"()")
DIAG_ENTRY(MicrosoftFixedEnum /* microsoft-fixed-enum */, 11302, /* DiagArray524 */ 1487, 0, R"()")
DIAG_ENTRY(MicrosoftFlexibleArray /* microsoft-flexible-array */, 11323, /* DiagArray525 */ 1489, 0, R"()")
DIAG_ENTRY(MicrosoftGoto /* microsoft-goto */, 11348, /* DiagArray526 */ 1492, 0, R"()")
DIAG_ENTRY(MicrosoftInaccessibleBase /* microsoft-inaccessible-base */, 11363, /* DiagArray527 */ 1494, 0, R"()")
DIAG_ENTRY(MicrosoftInclude /* microsoft-include */, 11391, /* DiagArray528 */ 1496, 0, R"()")
DIAG_ENTRY(MicrosoftInitFromPredefined /* microsoft-init-from-predefined */, 11409, /* DiagArray529 */ 1498, 0, R"()")
DIAG_ENTRY(MicrosoftMutableReference /* microsoft-mutable-reference */, 11440, /* DiagArray530 */ 1500, 0, R"()")
DIAG_ENTRY(MicrosoftPureDefinition /* microsoft-pure-definition */, 11468, /* DiagArray531 */ 1502, 0, R"()")
DIAG_ENTRY(MicrosoftRedeclareStatic /* microsoft-redeclare-static */, 11494, /* DiagArray532 */ 1504, 0, R"()")
DIAG_ENTRY(MicrosoftSealed /* microsoft-sealed */, 11521, /* DiagArray533 */ 1506, 0, R"()")
DIAG_ENTRY(MicrosoftStaticAssert /* microsoft-static-assert */, 11538, /* DiagArray534 */ 1508, 0, R"()")
DIAG_ENTRY(MicrosoftStringLiteralFromPredefined /* microsoft-string-literal-from-predefined */, 11562, /* DiagArray535 */ 1510, 0, R"()")
DIAG_ENTRY(MicrosoftTemplate /* microsoft-template */, 11603, /* DiagArray536 */ 1512, /* DiagSubGroup536 */ 425, R"()")
DIAG_ENTRY(MicrosoftTemplateShadow /* microsoft-template-shadow */, 11622, /* DiagArray537 */ 1523, 0, R"()")
DIAG_ENTRY(MicrosoftUnionMemberReference /* microsoft-union-member-reference */, 11648, /* DiagArray538 */ 1525, 0, R"()")
DIAG_ENTRY(MicrosoftUnqualifiedFriend /* microsoft-unqualified-friend */, 11681, /* DiagArray539 */ 1527, 0, R"()")
DIAG_ENTRY(MicrosoftUsingDecl /* microsoft-using-decl */, 11710, /* DiagArray540 */ 1529, 0, R"()")
DIAG_ENTRY(MicrosoftVoidPseudoDtor /* microsoft-void-pseudo-dtor */, 11731, /* DiagArray541 */ 1531, 0, R"()")
DIAG_ENTRY(MisExpect /* misexpect */, 11758, /* DiagArray542 */ 1533, 0, R"()")
DIAG_ENTRY(MisleadingIndentation /* misleading-indentation */, 11768, /* DiagArray543 */ 1535, 0, R"()")
DIAG_ENTRY(anonymous_263 /* mismatched-new-delete */, 11791, /* DiagArray544 */ 1537, 0, R"()")
DIAG_ENTRY(MismatchedParameterTypes /* mismatched-parameter-types */, 11813, /* DiagArray545 */ 1539, 0, R"()")
DIAG_ENTRY(MismatchedReturnTypes /* mismatched-return-types */, 11840, /* DiagArray546 */ 1541, 0, R"()")
DIAG_ENTRY(MismatchedTags /* mismatched-tags */, 11864, /* DiagArray547 */ 1543, 0, R"()")
DIAG_ENTRY(MissingBraces /* missing-braces */, 11880, /* DiagArray548 */ 1546, 0, R"()")
DIAG_ENTRY(anonymous_278 /* missing-constinit */, 11895, /* DiagArray549 */ 1548, 0, R"()")
DIAG_ENTRY(MissingDeclarations /* missing-declarations */, 11913, /* DiagArray550 */ 1550, 0, R"()")
DIAG_ENTRY(anonymous_192 /* missing-exception-spec */, 11934, /* DiagArray551 */ 1555, 0, R"()")
DIAG_ENTRY(MissingFieldInitializers /* missing-field-initializers */, 11957, /* DiagArray552 */ 1557, 0, R"()")
DIAG_ENTRY(anonymous_34 /* missing-format-attribute */, 11984, 0, 0, R"()")
DIAG_ENTRY(anonymous_35 /* missing-include-dirs */, 12009, 0, 0, R"()")
DIAG_ENTRY(MissingMethodReturnType /* missing-method-return-type */, 12030, /* DiagArray555 */ 1559, 0, R"()")
DIAG_ENTRY(anonymous_105 /* missing-multilib */, 12057, /* DiagArray556 */ 1561, 0, R"()")
DIAG_ENTRY(MissingNoEscape /* missing-noescape */, 12074, /* DiagArray557 */ 1563, 0, R"()")
DIAG_ENTRY(MissingNoreturn /* missing-noreturn */, 12091, /* DiagArray558 */ 1565, 0, R"()")
DIAG_ENTRY(anonymous_214 /* missing-prototype-for-cc */, 12108, /* DiagArray559 */ 1568, 0, R"()")
DIAG_ENTRY(anonymous_231 /* missing-prototypes */, 12133, /* DiagArray560 */ 1570, 0, R"()")
DIAG_ENTRY(anonymous_150 /* missing-selector-name */, 12152, /* DiagArray561 */ 1572, 0, R"()")
DIAG_ENTRY(anonymous_96 /* missing-sysroot */, 12174, /* DiagArray562 */ 1574, 0, R"()")
DIAG_ENTRY(anonymous_232 /* missing-variable-declarations */, 12190, /* DiagArray563 */ 1576, 0, R"()")
DIAG_ENTRY(MisspelledAssumption /* misspelled-assumption */, 12220, /* DiagArray564 */ 1578, 0, R"()")
DIAG_ENTRY(ModuleBuild /* module-build */, 12242, /* DiagArray565 */ 1580, 0, R"()")
DIAG_ENTRY(ModuleConflict /* module-conflict */, 12255, /* DiagArray566 */ 1585, 0, R"()")
DIAG_ENTRY(anonymous_110 /* module-file-config-mismatch */, 12271, /* DiagArray567 */ 1588, 0, R"()")
DIAG_ENTRY(ModuleFileExtension /* module-file-extension */, 12299, /* DiagArray568 */ 1590, 0, R"()")
DIAG_ENTRY(ModuleImport /* module-import */, 12321, /* DiagArray569 */ 1592, 0, R"()")
DIAG_ENTRY(anonymous_295 /* module-import-in-extern-c */, 12335, /* DiagArray570 */ 1594, 0, R"()")
DIAG_ENTRY(ModuleIncludeDirectiveTranslation /* module-include-translation */, 12361, /* DiagArray571 */ 1596, 0, R"()")
DIAG_ENTRY(ModuleLock /* module-lock */, 12388, /* DiagArray572 */ 1598, 0, R"()")
DIAG_ENTRY(anonymous_298 /* modules-ambiguous-internal-linkage */, 12400, /* DiagArray573 */ 1600, 0, R"()")
DIAG_ENTRY(anonymous_296 /* modules-import-nested-redundant */, 12435, /* DiagArray574 */ 1602, 0, R"()")
DIAG_ENTRY(Most /* most */, 12467, 0, /* DiagSubGroup575 */ 427, R"()")
DIAG_ENTRY(Move /* move */, 12472, 0, /* DiagSubGroup576 */ 465, R"()")
DIAG_ENTRY(anonymous_76 /* msvc-include */, 12477, 0, /* DiagSubGroup577 */ 470, R"()")
DIAG_ENTRY(anonymous_101 /* msvc-not-found */, 12490, /* DiagArray578 */ 1604, 0, R"()")
DIAG_ENTRY(MultiGPU /* multi-gpu */, 12505, /* DiagArray579 */ 1606, 0, R"()")
DIAG_ENTRY(MultiChar /* multichar */, 12515, /* DiagArray580 */ 1608, 0, R"()")
DIAG_ENTRY(anonymous_283 /* multiple-move-vbase */, 12525, /* DiagArray581 */ 1610, 0, R"()")
DIAG_ENTRY(anonymous_84 /* nan-infinity-disabled */, 12545, /* DiagArray582 */ 1612, 0, R"(This warning is enabled when source code using the macros ``INFINITY`` or ``NAN``
is compiled with floating-point options preventing these two values. This can
lead to undefined behavior. Check the order of command line arguments that modify
this behavior, such as ``-ffast-math``, ``-fhonor-infinities``, and
``-fhonor-nans`` (etc), as well as ``#pragma`` directives if this diagnostic is
generated unexpectedly.)")
DIAG_ENTRY(anonymous_24 /* narrowing */, 12567, 0, /* DiagSubGroup583 */ 472, R"()")
DIAG_ENTRY(anonymous_280 /* nested-anon-types */, 12577, /* DiagArray584 */ 1614, 0, R"()")
DIAG_ENTRY(anonymous_36 /* nested-externs */, 12595, 0, 0, R"()")
DIAG_ENTRY(OperatorNewReturnsNull /* new-returns-null */, 12610, /* DiagArray586 */ 1616, 0, R"()")
DIAG_ENTRY(NewlineEOF /* newline-eof */, 12627, /* DiagArray587 */ 1618, 0, R"()")
DIAG_ENTRY(NoDeref /* noderef */, 12639, /* DiagArray588 */ 1621, 0, R"()")
DIAG_ENTRY(NoexceptType /* noexcept-type */, 12647, 0, /* DiagSubGroup589 */ 474, R"()")
DIAG_ENTRY(anonymous_173 /* non-c-typedef-for-linkage */, 12661, /* DiagArray590 */ 1625, 0, R"()")
DIAG_ENTRY(NonGCC /* non-gcc */, 12687, 0, /* DiagSubGroup591 */ 476, R"()")
DIAG_ENTRY(NonLiteralNullConversion /* non-literal-null-conversion */, 12695, /* DiagArray592 */ 1627, 0, R"()")
DIAG_ENTRY(NonModularIncludeInFrameworkModule /* non-modular-include-in-framework-module */, 12723, /* DiagArray593 */ 1629, 0, R"()")
DIAG_ENTRY(NonModularIncludeInModule /* non-modular-include-in-module */, 12763, /* DiagArray594 */ 1631, /* DiagSubGroup594 */ 480, R"()")
DIAG_ENTRY(NonPODVarargs /* non-pod-varargs */, 12793, /* DiagArray595 */ 1633, 0, R"()")
DIAG_ENTRY(anonymous_205 /* non-power-of-two-alignment */, 12809, /* DiagArray596 */ 1638, 0, R"()")
DIAG_ENTRY(NonVirtualDtor /* non-virtual-dtor */, 12836, /* DiagArray597 */ 1640, 0, R"()")
DIAG_ENTRY(NonNull /* nonnull */, 12853, /* DiagArray598 */ 1642, 0, R"()")
DIAG_ENTRY(anonymous_38 /* nonportable-cfstrings */, 12861, 0, 0, R"()")
DIAG_ENTRY(anonymous_126 /* nonportable-include-path */, 12883, /* DiagArray600 */ 1645, 0, R"()")
DIAG_ENTRY(anonymous_92 /* nonportable-private-apinotes-path */, 12908, /* DiagArray601 */ 1647, 0, R"()")
DIAG_ENTRY(anonymous_93 /* nonportable-private-system-apinotes-path */, 12942, /* DiagArray602 */ 1649, 0, R"()")
DIAG_ENTRY(anonymous_127 /* nonportable-system-include-path */, 12983, /* DiagArray603 */ 1651, 0, R"()")
DIAG_ENTRY(anonymous_290 /* nonportable-vector-initialization */, 13015, /* DiagArray604 */ 1653, 0, R"()")
DIAG_ENTRY(NonTrivialMemaccess /* nontrivial-memaccess */, 13049, /* DiagArray605 */ 1655, 0, R"()")
DIAG_ENTRY(NSConsumedMismatch /* nsconsumed-mismatch */, 13070, /* DiagArray606 */ 1657, 0, R"()")
DIAG_ENTRY(NSReturnsMismatch /* nsreturns-mismatch */, 13090, /* DiagArray607 */ 1659, 0, R"()")
DIAG_ENTRY(NullArithmetic /* null-arithmetic */, 13109, /* DiagArray608 */ 1661, 0, R"()")
DIAG_ENTRY(NullCharacter /* null-character */, 13125, /* DiagArray609 */ 1664, 0, R"()")
DIAG_ENTRY(NullConversion /* null-conversion */, 13140, /* DiagArray610 */ 1667, 0, R"()")
DIAG_ENTRY(NullDereference /* null-dereference */, 13156, /* DiagArray611 */ 1669, 0, R"()")
DIAG_ENTRY(NullPointerArithmetic /* null-pointer-arithmetic */, 13173, /* DiagArray612 */ 1672, /* DiagSubGroup612 */ 482, R"()")
DIAG_ENTRY(NullPointerSubtraction /* null-pointer-subtraction */, 13197, /* DiagArray613 */ 1674, 0, R"()")
DIAG_ENTRY(Nullability /* nullability */, 13222, /* DiagArray614 */ 1676, 0, R"()")
DIAG_ENTRY(NullabilityCompleteness /* nullability-completeness */, 13234, /* DiagArray615 */ 1682, /* DiagSubGroup615 */ 484, R"()")
DIAG_ENTRY(NullabilityCompletenessOnArrays /* nullability-completeness-on-arrays */, 13259, /* DiagArray616 */ 1684, 0, R"()")
DIAG_ENTRY(NullabilityDeclSpec /* nullability-declspec */, 13294, /* DiagArray617 */ 1686, 0, R"()")
DIAG_ENTRY(anonymous_144 /* nullability-extension */, 13315, /* DiagArray618 */ 1688, 0, R"()")
DIAG_ENTRY(NullabilityInferredOnNestedType /* nullability-inferred-on-nested-type */, 13337, /* DiagArray619 */ 1690, 0, R"()")
DIAG_ENTRY(NullableToNonNullConversion /* nullable-to-nonnull-conversion */, 13373, /* DiagArray620 */ 1692, 0, R"()")
DIAG_ENTRY(anonymous_182 /* objc-autosynthesis-property-ivar-name-match */, 13404, /* DiagArray621 */ 1694, 0, R"()")
DIAG_ENTRY(ObjCBoolConstantConversion /* objc-bool-constant-conversion */, 13448, /* DiagArray622 */ 1696, 0, R"()")
DIAG_ENTRY(ObjCBoxing /* objc-boxing */, 13478, /* DiagArray623 */ 1698, 0, R"()")
DIAG_ENTRY(anonymous_260 /* objc-circular-container */, 13490, /* DiagArray624 */ 1700, 0, R"()")
DIAG_ENTRY(ObjCCocoaAPI /* objc-cocoa-api */, 13514, 0, /* DiagSubGroup625 */ 486, R"()")
DIAG_ENTRY(ObjCDesignatedInit /* objc-designated-initializers */, 13529, /* DiagArray626 */ 1702, 0, R"()")
DIAG_ENTRY(anonymous_202 /* objc-dictionary-duplicate-keys */, 13558, /* DiagArray627 */ 1709, 0, R"()")
DIAG_ENTRY(anonymous_87 /* objc-duplicate-category-definition */, 13589, /* DiagArray628 */ 1711, 0, R"()")
DIAG_ENTRY(ObjCFlexibleArray /* objc-flexible-array */, 13624, /* DiagArray629 */ 1713, 0, R"()")
DIAG_ENTRY(anonymous_238 /* objc-forward-class-redefinition */, 13644, /* DiagArray630 */ 1716, 0, R"()")
DIAG_ENTRY(anonymous_239 /* objc-interface-ivars */, 13676, /* DiagArray631 */ 1718, 0, R"()")
DIAG_ENTRY(ObjCLiteralComparison /* objc-literal-compare */, 13697, /* DiagArray632 */ 1720, /* DiagSubGroup632 */ 488, R"()")
DIAG_ENTRY(ObjCLiteralConversion /* objc-literal-conversion */, 13718, /* DiagArray633 */ 1722, 0, R"()")
DIAG_ENTRY(anonymous_134 /* objc-macro-redefinition */, 13742, /* DiagArray634 */ 1725, 0, R"()")
DIAG_ENTRY(anonymous_187 /* objc-messaging-id */, 13766, /* DiagArray635 */ 1727, 0, R"()")
DIAG_ENTRY(MethodAccess /* objc-method-access */, 13784, /* DiagArray636 */ 1729, 0, R"()")
DIAG_ENTRY(anonymous_183 /* objc-missing-property-synthesis */, 13803, /* DiagArray637 */ 1736, 0, R"()")
DIAG_ENTRY(ObjCMissingSuperCalls /* objc-missing-super-calls */, 13835, /* DiagArray638 */ 1738, 0, R"()")
DIAG_ENTRY(ObjCMultipleMethodNames /* objc-multiple-method-names */, 13860, /* DiagArray639 */ 1740, 0, R"()")
DIAG_ENTRY(ObjCRetainBlockProperty /* objc-noncopy-retain-block-property */, 13887, /* DiagArray640 */ 1742, 0, R"()")
DIAG_ENTRY(ObjCNonUnifiedException /* objc-nonunified-exceptions */, 13922, /* DiagArray641 */ 1744, 0, R"()")
DIAG_ENTRY(ObjCPropertyAssignOnObjectType /* objc-property-assign-on-object-type */, 13949, /* DiagArray642 */ 1746, 0, R"()")
DIAG_ENTRY(ObjCPropertyImpl /* objc-property-implementation */, 13985, /* DiagArray643 */ 1748, 0, R"()")
DIAG_ENTRY(anonymous_178 /* objc-property-implicit-mismatch */, 14014, /* DiagArray644 */ 1753, 0, R"()")
DIAG_ENTRY(anonymous_180 /* objc-property-matches-cocoa-ownership-rule */, 14046, /* DiagArray645 */ 1755, 0, R"()")
DIAG_ENTRY(ObjCPropertyNoAttribute /* objc-property-no-attribute */, 14089, /* DiagArray646 */ 1757, 0, R"()")
DIAG_ENTRY(ObjCNoPropertyAutoSynthesis /* objc-property-synthesis */, 14116, /* DiagArray647 */ 1760, 0, R"()")
DIAG_ENTRY(ObjCProtocolMethodImpl /* objc-protocol-method-implementation */, 14140, /* DiagArray648 */ 1764, 0, R"()")
DIAG_ENTRY(anonymous_181 /* objc-protocol-property-synthesis */, 14176, /* DiagArray649 */ 1766, 0, R"()")
DIAG_ENTRY(ObjCProtocolQualifiers /* objc-protocol-qualifiers */, 14209, /* DiagArray650 */ 1768, 0, R"()")
DIAG_ENTRY(ObjCReadonlyPropertyHasSetter /* objc-readonly-with-setter-property */, 14234, /* DiagArray651 */ 1770, 0, R"()")
DIAG_ENTRY(ObjCRedundantAPIUse /* objc-redundant-api-use */, 14269, 0, /* DiagSubGroup652 */ 490, R"()")
DIAG_ENTRY(ObjCRedundantLiteralUse /* objc-redundant-literal-use */, 14292, /* DiagArray653 */ 1772, 0, R"()")
DIAG_ENTRY(ObjCRootClass /* objc-root-class */, 14319, /* DiagArray654 */ 1774, 0, R"()")
DIAG_ENTRY(ObjCSignedCharBool /* objc-signed-char-bool */, 14335, 0, /* DiagSubGroup655 */ 492, R"()")
DIAG_ENTRY(ObjCSignedCharBoolImplicitFloatConversion /* objc-signed-char-bool-implicit-float-conversion */, 14357, /* DiagArray656 */ 1776, 0, R"()")
DIAG_ENTRY(ObjCSignedCharBoolImplicitIntConversion /* objc-signed-char-bool-implicit-int-conversion */, 14405, /* DiagArray657 */ 1778, 0, R"()")
DIAG_ENTRY(ObjCStringComparison /* objc-string-compare */, 14451, /* DiagArray658 */ 1780, 0, R"()")
DIAG_ENTRY(ObjCStringConcatenation /* objc-string-concatenation */, 14471, /* DiagArray659 */ 1782, 0, R"()")
DIAG_ENTRY(anonymous_261 /* objc-unsafe-perform-selector */, 14497, /* DiagArray660 */ 1784, 0, R"()")
DIAG_ENTRY(ODR /* odr */, 14526, /* DiagArray661 */ 1786, 0, R"()")
DIAG_ENTRY(OldStyleCast /* old-style-cast */, 14530, /* DiagArray662 */ 1805, 0, R"()")
DIAG_ENTRY(anonymous_40 /* old-style-definition */, 14545, 0, 0, R"()")
DIAG_ENTRY(OpenACC /* openacc */, 14566, 0, /* DiagSubGroup664 */ 497, R"()")
DIAG_ENTRY(OpenCLUnsupportedRGBA /* opencl-unsupported-rgba */, 14574, /* DiagArray665 */ 1807, 0, R"()")
DIAG_ENTRY(OpenMP /* openmp */, 14598, 0, /* DiagSubGroup666 */ 499, R"()")
DIAG_ENTRY(OpenMP51Ext /* openmp-51-extensions */, 14605, /* DiagArray667 */ 1809, 0, R"()")
DIAG_ENTRY(OpenMPClauses /* openmp-clauses */, 14626, /* DiagArray668 */ 1811, 0, R"()")
DIAG_ENTRY(OpenMPExtensions /* openmp-extensions */, 14641, /* DiagArray669 */ 1831, 0, R"()")
DIAG_ENTRY(OpenMPLoopForm /* openmp-loop-form */, 14659, /* DiagArray670 */ 1833, 0, R"()")
DIAG_ENTRY(OpenMPMapping /* openmp-mapping */, 14676, /* DiagArray671 */ 1836, 0, R"()")
DIAG_ENTRY(OpenMPTarget /* openmp-target */, 14691, /* DiagArray672 */ 1838, /* DiagSubGroup672 */ 508, R"()")
DIAG_ENTRY(OpenMPTargetException /* openmp-target-exception */, 14705, /* DiagArray673 */ 1842, 0, R"()")
DIAG_ENTRY(OptionIgnored /* option-ignored */, 14729, /* DiagArray674 */ 1845, 0, R"()")
DIAG_ENTRY(OrderedCompareFunctionPointers /* ordered-compare-function-pointers */, 14744, /* DiagArray675 */ 1863, 0, R"()")
DIAG_ENTRY(OutOfLineDeclaration /* out-of-line-declaration */, 14778, /* DiagArray676 */ 1866, 0, R"()")
DIAG_ENTRY(anonymous_165 /* out-of-scope-function */, 14802, /* DiagArray677 */ 1868, 0, R"()")
DIAG_ENTRY(OveralignedType /* over-aligned */, 14824, /* DiagArray678 */ 1870, 0, R"()")
DIAG_ENTRY(anonymous_41 /* overflow */, 14837, 0, 0, R"()")
DIAG_ENTRY(OverlengthStrings /* overlength-strings */, 14846, /* DiagArray680 */ 1872, 0, R"()")
DIAG_ENTRY(OverloadedShiftOpParentheses /* overloaded-shift-op-parentheses */, 14865, /* DiagArray681 */ 1874, 0, R"()")
DIAG_ENTRY(OverloadedVirtual /* overloaded-virtual */, 14897, /* DiagArray682 */ 1876, 0, R"()")
DIAG_ENTRY(anonymous_37 /* override-init */, 14916, 0, /* DiagSubGroup683 */ 510, R"()")
DIAG_ENTRY(anonymous_107 /* override-module */, 14930, /* DiagArray684 */ 1878, 0, R"()")
DIAG_ENTRY(OverridingMethodMismatch /* overriding-method-mismatch */, 14946, /* DiagArray685 */ 1880, 0, R"()")
DIAG_ENTRY(anonymous_95 /* overriding-option */, 14973, /* DiagArray686 */ 1888, 0, R"()")
DIAG_ENTRY(Packed /* packed */, 14991, /* DiagArray687 */ 1890, /* DiagSubGroup687 */ 512, R"()")
DIAG_ENTRY(PackedNonPod /* packed-non-pod */, 14998, /* DiagArray688 */ 1892, 0, R"()")
DIAG_ENTRY(Padded /* padded */, 15013, /* DiagArray689 */ 1894, /* DiagSubGroup689 */ 514, R"()")
DIAG_ENTRY(PaddedBitField /* padded-bitfield */, 15020, /* DiagArray690 */ 1898, 0, R"()")
DIAG_ENTRY(Parentheses /* parentheses */, 15036, /* DiagArray691 */ 1901, /* DiagSubGroup691 */ 516, R"()")
DIAG_ENTRY(ParenthesesOnEquality /* parentheses-equality */, 15048, /* DiagArray692 */ 1905, 0, R"()")
DIAG_ENTRY(anonymous_8 /* partial-availability */, 15069, 0, /* DiagSubGroup693 */ 525, R"()")
DIAG_ENTRY(BackendOptimizationRemark /* pass */, 15090, /* DiagArray694 */ 1907, 0, R"()")
DIAG_ENTRY(BackendOptimizationRemarkAnalysis /* pass-analysis */, 15095, /* DiagArray695 */ 1909, 0, R"()")
DIAG_ENTRY(BackendOptimizationFailure /* pass-failed */, 15109, /* DiagArray696 */ 1913, 0, R"()")
DIAG_ENTRY(BackendOptimizationRemarkMissed /* pass-missed */, 15121, /* DiagArray697 */ 1915, 0, R"()")
DIAG_ENTRY(anonymous_301 /* pch-date-time */, 15133, /* DiagArray698 */ 1917, 0, R"()")
DIAG_ENTRY(Pedantic /* pedantic */, 15147, /* DiagArray699 */ 1919, /* DiagSubGroup699 */ 527, R"()")
DIAG_ENTRY(OpenCLCoreFeaturesDiagGroup /* pedantic-core-features */, 15156, /* DiagArray700 */ 1998, 0, R"()")
DIAG_ENTRY(PedanticMacros /* pedantic-macros */, 15179, 0, /* DiagSubGroup701 */ 589, R"()")
DIAG_ENTRY(PessimizingMove /* pessimizing-move */, 15195, /* DiagArray702 */ 2001, 0, R"()")
DIAG_ENTRY(PointerArith /* pointer-arith */, 15212, /* DiagArray703 */ 2004, /* DiagSubGroup703 */ 595, R"()")
DIAG_ENTRY(PointerBoolConversion /* pointer-bool-conversion */, 15226, /* DiagArray704 */ 2008, 0, R"()")
DIAG_ENTRY(anonymous_217 /* pointer-compare */, 15250, /* DiagArray705 */ 2011, 0, R"()")
DIAG_ENTRY(anonymous_259 /* pointer-integer-compare */, 15266, /* DiagArray706 */ 2013, 0, R"()")
DIAG_ENTRY(anonymous_269 /* pointer-sign */, 15290, /* DiagArray707 */ 2015, 0, R"()")
DIAG_ENTRY(PointerToEnumCast /* pointer-to-enum-cast */, 15303, /* DiagArray708 */ 2017, /* DiagSubGroup708 */ 597, R"()")
DIAG_ENTRY(PointerToIntCast /* pointer-to-int-cast */, 15324, /* DiagArray709 */ 2019, /* DiagSubGroup709 */ 599, R"()")
DIAG_ENTRY(anonymous_275 /* pointer-type-mismatch */, 15344, /* DiagArray710 */ 2021, 0, R"()")
DIAG_ENTRY(anonymous_94 /* poison-system-directories */, 15366, /* DiagArray711 */ 2023, 0, R"()")
DIAG_ENTRY(ObjCPotentiallyDirectSelector /* potentially-direct-selector */, 15392, /* DiagArray712 */ 2025, 0, R"()")
DIAG_ENTRY(PotentiallyEvaluatedExpression /* potentially-evaluated-expression */, 15420, /* DiagArray713 */ 2027, 0, R"()")
DIAG_ENTRY(PragmaClangAttribute /* pragma-clang-attribute */, 15453, /* DiagArray714 */ 2029, 0, R"()")
DIAG_ENTRY(anonymous_128 /* pragma-once-outside-header */, 15476, /* DiagArray715 */ 2031, 0, R"()")
DIAG_ENTRY(PragmaPack /* pragma-pack */, 15503, /* DiagArray716 */ 2033, /* DiagSubGroup716 */ 602, R"()")
DIAG_ENTRY(PragmaPackSuspiciousInclude /* pragma-pack-suspicious-include */, 15515, /* DiagArray717 */ 2036, 0, R"()")
DIAG_ENTRY(anonymous_129 /* pragma-system-header-outside-header */, 15546, /* DiagArray718 */ 2038, 0, R"()")
DIAG_ENTRY(Pragmas /* pragmas */, 15582, /* DiagArray719 */ 2040, /* DiagSubGroup719 */ 604, R"()")
DIAG_ENTRY(CXXPre14Compat /* pre-c++14-compat */, 15590, /* DiagArray720 */ 2043, 0, R"()")
DIAG_ENTRY(CXXPre14CompatPedantic /* pre-c++14-compat-pedantic */, 15607, 0, /* DiagSubGroup721 */ 609, R"()")
DIAG_ENTRY(CXXPre17Compat /* pre-c++17-compat */, 15633, /* DiagArray722 */ 2055, 0, R"()")
DIAG_ENTRY(CXXPre17CompatPedantic /* pre-c++17-compat-pedantic */, 15650, /* DiagArray723 */ 2073, /* DiagSubGroup723 */ 612, R"()")
DIAG_ENTRY(CXXPre20Compat /* pre-c++20-compat */, 15676, /* DiagArray724 */ 2076, 0, R"()")
DIAG_ENTRY(CXXPre20CompatPedantic /* pre-c++20-compat-pedantic */, 15693, /* DiagArray725 */ 2104, /* DiagSubGroup725 */ 614, R"()")
DIAG_ENTRY(CXXPre23Compat /* pre-c++23-compat */, 15719, /* DiagArray726 */ 2107, 0, R"()")
DIAG_ENTRY(CXXPre23CompatPedantic /* pre-c++23-compat-pedantic */, 15736, 0, /* DiagSubGroup727 */ 616, R"()")
DIAG_ENTRY(CXXPre26Compat /* pre-c++26-compat */, 15762, /* DiagArray728 */ 2123, 0, R"()")
DIAG_ENTRY(CXXPre26CompatPedantic /* pre-c++26-compat-pedantic */, 15779, 0, /* DiagSubGroup729 */ 618, R"()")
DIAG_ENTRY(anonymous_21 /* pre-c++2c-compat */, 15805, 0, /* DiagSubGroup730 */ 620, R"()")
DIAG_ENTRY(anonymous_22 /* pre-c++2c-compat-pedantic */, 15822, 0, /* DiagSubGroup731 */ 622, R"()")
DIAG_ENTRY(CPre23Compat /* pre-c23-compat */, 15848, /* DiagArray732 */ 2125, 0, R"()")
DIAG_ENTRY(CPre23CompatPedantic /* pre-c23-compat-pedantic */, 15863, 0, /* DiagSubGroup733 */ 624, R"()")
DIAG_ENTRY(anonymous_13 /* pre-c2x-compat */, 15887, 0, /* DiagSubGroup734 */ 626, R"()")
DIAG_ENTRY(anonymous_14 /* pre-c2x-compat-pedantic */, 15902, 0, /* DiagSubGroup735 */ 628, R"()")
DIAG_ENTRY(OpenMPPre51Compat /* pre-openmp-51-compat */, 15926, /* DiagArray736 */ 2139, 0, R"()")
DIAG_ENTRY(anonymous_161 /* predefined-identifier-outside-function */, 15947, /* DiagArray737 */ 2141, 0, R"()")
DIAG_ENTRY(PrivateExtern /* private-extern */, 15986, /* DiagArray738 */ 2143, 0, R"()")
DIAG_ENTRY(anonymous_140 /* private-header */, 16001, /* DiagArray739 */ 2145, 0, R"()")
DIAG_ENTRY(PrivateModule /* private-module */, 16016, /* DiagArray740 */ 2147, 0, R"()")
DIAG_ENTRY(ProfileInstrMissing /* profile-instr-missing */, 16031, /* DiagArray741 */ 2152, 0, R"()")
DIAG_ENTRY(ProfileInstrOutOfDate /* profile-instr-out-of-date */, 16053, /* DiagArray742 */ 2154, 0, R"()")
DIAG_ENTRY(ProfileInstrUnprofiled /* profile-instr-unprofiled */, 16079, /* DiagArray743 */ 2156, 0, R"()")
DIAG_ENTRY(PropertyAccessDotSyntax /* property-access-dot-syntax */, 16104, /* DiagArray744 */ 2158, 0, R"()")
DIAG_ENTRY(PropertyAttr /* property-attribute-mismatch */, 16131, /* DiagArray745 */ 2160, 0, R"()")
DIAG_ENTRY(Protocol /* protocol */, 16159, /* DiagArray746 */ 2165, 0, R"()")
DIAG_ENTRY(anonymous_176 /* protocol-property-synthesis-ambiguity */, 16168, /* DiagArray747 */ 2167, 0, R"()")
DIAG_ENTRY(anonymous_112 /* psabi */, 16206, /* DiagArray748 */ 2169, 0, R"()")
DIAG_ENTRY(anonymous_244 /* qualified-void-return-type */, 16212, /* DiagArray749 */ 2171, 0, R"()")
DIAG_ENTRY(FrameworkHdrQuotedInclude /* quoted-include-in-framework-header */, 16239, /* DiagArray750 */ 2173, 0, R"()")
DIAG_ENTRY(RangeLoopAnalysis /* range-loop-analysis */, 16274, 0, /* DiagSubGroup751 */ 630, R"()")
DIAG_ENTRY(RangeLoopBindReference /* range-loop-bind-reference */, 16294, /* DiagArray752 */ 2175, 0, R"()")
DIAG_ENTRY(RangeLoopConstruct /* range-loop-construct */, 16320, /* DiagArray753 */ 2177, 0, R"()")
DIAG_ENTRY(ReadOnlyPlacementChecks /* read-only-types */, 16341, /* DiagArray754 */ 2180, 0, R"()")
DIAG_ENTRY(anonymous_186 /* readonly-iboutlet-property */, 16357, /* DiagArray755 */ 2182, 0, R"()")
DIAG_ENTRY(ObjCReceiver /* receiver-expr */, 16384, /* DiagArray756 */ 2184, 0, R"()")
DIAG_ENTRY(ForwardClassReceiver /* receiver-forward-class */, 16398, /* DiagArray757 */ 2186, 0, R"()")
DIAG_ENTRY(RedeclaredClassMember /* redeclared-class-member */, 16421, /* DiagArray758 */ 2189, 0, R"()")
DIAG_ENTRY(anonymous_189 /* redundant-consteval-if */, 16445, /* DiagArray759 */ 2191, 0, R"()")
DIAG_ENTRY(anonymous_42 /* redundant-decls */, 16468, 0, 0, R"()")
DIAG_ENTRY(RedundantMove /* redundant-move */, 16484, /* DiagArray761 */ 2193, 0, R"()")
DIAG_ENTRY(anonymous_164 /* redundant-parens */, 16499, /* DiagArray762 */ 2195, 0, R"()")
DIAG_ENTRY(Register /* register */, 16516, /* DiagArray763 */ 2197, /* DiagSubGroup763 */ 633, R"()")
DIAG_ENTRY(ReinterpretBaseClass /* reinterpret-base-class */, 16525, /* DiagArray764 */ 2199, 0, R"()")
DIAG_ENTRY(RemarkBackendPlugin /* remark-backend-plugin */, 16548, /* DiagArray765 */ 2201, 0, R"()")
DIAG_ENTRY(Reorder /* reorder */, 16570, 0, /* DiagSubGroup766 */ 635, R"()")
DIAG_ENTRY(ReorderCtor /* reorder-ctor */, 16578, /* DiagArray767 */ 2203, 0, R"()")
DIAG_ENTRY(ReorderInitList /* reorder-init-list */, 16591, /* DiagArray768 */ 2206, 0, R"()")
DIAG_ENTRY(anonymous_223 /* requires-super-attribute */, 16609, /* DiagArray769 */ 2208, 0, R"()")
DIAG_ENTRY(ReservedIdAsMacroAlias /* reserved-id-macro */, 16634, 0, /* DiagSubGroup770 */ 638, R"()")
DIAG_ENTRY(ReservedIdentifier /* reserved-identifier */, 16652, /* DiagArray771 */ 2210, /* DiagSubGroup771 */ 640, R"()")
DIAG_ENTRY(ReservedIdAsMacro /* reserved-macro-identifier */, 16672, /* DiagArray772 */ 2212, 0, R"()")
DIAG_ENTRY(ReservedModuleIdentifier /* reserved-module-identifier */, 16698, /* DiagArray773 */ 2214, 0, R"()")
DIAG_ENTRY(ReservedUserDefinedLiteral /* reserved-user-defined-literal */, 16725, /* DiagArray774 */ 2216, /* DiagSubGroup774 */ 644, R"()")
DIAG_ENTRY(RestrictExpansionMacro /* restrict-expansion */, 16755, /* DiagArray775 */ 2219, 0, R"()")
DIAG_ENTRY(anonymous_237 /* retained-language-linkage */, 16774, /* DiagArray776 */ 2221, 0, R"()")
DIAG_ENTRY(anonymous_29 /* return-local-addr */, 16800, 0, /* DiagSubGroup777 */ 646, R"()")
DIAG_ENTRY(ReturnStackAddress /* return-stack-address */, 16818, /* DiagArray778 */ 2223, 0, R"()")
DIAG_ENTRY(ReturnStdMove /* return-std-move */, 16839, 0, 0, R"()")
DIAG_ENTRY(ReturnType /* return-type */, 16855, /* DiagArray780 */ 2227, /* DiagSubGroup780 */ 648, R"()")
DIAG_ENTRY(ReturnTypeCLinkage /* return-type-c-linkage */, 16867, /* DiagArray781 */ 2237, 0, R"()")
DIAG_ENTRY(anonymous_225 /* rewrite-not-bool */, 16889, /* DiagArray782 */ 2240, 0, R"()")
DIAG_ENTRY(RoundTripCC1Args /* round-trip-cc1-args */, 16906, /* DiagArray783 */ 2242, 0, R"()")
DIAG_ENTRY(RTTI /* rtti */, 16926, /* DiagArray784 */ 2244, 0, R"()")
DIAG_ENTRY(SanitizeAddressRemarks /* sanitize-address */, 16931, /* DiagArray785 */ 2247, 0, R"()")
DIAG_ENTRY(anonymous_104 /* sarif-format-unstable */, 16948, /* DiagArray786 */ 2250, 0, R"()")
DIAG_ENTRY(UsedSearchPath /* search-path-usage */, 16970, /* DiagArray787 */ 2252, 0, R"()")
DIAG_ENTRY(Section /* section */, 16988, /* DiagArray788 */ 2254, 0, R"()")
DIAG_ENTRY(Selector /* selector */, 16996, /* DiagArray789 */ 2258, /* DiagSubGroup789 */ 650, R"()")
DIAG_ENTRY(SelectorTypeMismatch /* selector-type-mismatch */, 17005, /* DiagArray790 */ 2260, 0, R"()")
DIAG_ENTRY(SelfAssignment /* self-assign */, 17028, /* DiagArray791 */ 2262, /* DiagSubGroup791 */ 652, R"()")
DIAG_ENTRY(SelfAssignmentField /* self-assign-field */, 17040, /* DiagArray792 */ 2264, 0, R"()")
DIAG_ENTRY(SelfAssignmentOverloaded /* self-assign-overloaded */, 17058, /* DiagArray793 */ 2266, 0, R"()")
DIAG_ENTRY(SelfMove /* self-move */, 17081, /* DiagArray794 */ 2268, 0, R"()")
DIAG_ENTRY(SemiBeforeMethodBody /* semicolon-before-method-body */, 17091, /* DiagArray795 */ 2270, 0, R"()")
DIAG_ENTRY(Sentinel /* sentinel */, 17120, /* DiagArray796 */ 2272, 0, R"()")
DIAG_ENTRY(anonymous_45 /* sequence-point */, 17129, 0, /* DiagSubGroup797 */ 655, R"()")
DIAG_ENTRY(SerializedDiagnostics /* serialized-diagnostics */, 17144, /* DiagArray798 */ 2275, 0, R"()")
DIAG_ENTRY(Shadow /* shadow */, 17167, /* DiagArray799 */ 2279, /* DiagSubGroup799 */ 657, R"()")
DIAG_ENTRY(ShadowAll /* shadow-all */, 17174, 0, /* DiagSubGroup800 */ 660, R"()")
DIAG_ENTRY(ShadowField /* shadow-field */, 17185, /* DiagArray801 */ 2281, 0, R"()")
DIAG_ENTRY(ShadowFieldInConstructor /* shadow-field-in-constructor */, 17198, /* DiagArray802 */ 2283, /* DiagSubGroup802 */ 665, R"()")
DIAG_ENTRY(ShadowFieldInConstructorModified /* shadow-field-in-constructor-modified */, 17226, /* DiagArray803 */ 2285, 0, R"()")
DIAG_ENTRY(ShadowIvar /* shadow-ivar */, 17263, /* DiagArray804 */ 2287, 0, R"()")
DIAG_ENTRY(ShadowUncapturedLocal /* shadow-uncaptured-local */, 17275, /* DiagArray805 */ 2289, 0, R"()")
DIAG_ENTRY(anonymous_249 /* shift-count-negative */, 17299, /* DiagArray806 */ 2291, 0, R"()")
DIAG_ENTRY(anonymous_250 /* shift-count-overflow */, 17320, /* DiagArray807 */ 2293, 0, R"()")
DIAG_ENTRY(anonymous_248 /* shift-negative-value */, 17341, /* DiagArray808 */ 2295, 0, R"()")
DIAG_ENTRY(ShiftOpParentheses /* shift-op-parentheses */, 17362, /* DiagArray809 */ 2297, 0, R"()")
DIAG_ENTRY(anonymous_251 /* shift-overflow */, 17383, /* DiagArray810 */ 2299, 0, R"()")
DIAG_ENTRY(anonymous_252 /* shift-sign-overflow */, 17398, /* DiagArray811 */ 2301, 0, R"()")
DIAG_ENTRY(Shorten64To32 /* shorten-64-to-32 */, 17418, /* DiagArray812 */ 2303, 0, R"()")
DIAG_ENTRY(SignCompare /* sign-compare */, 17435, /* DiagArray813 */ 2305, 0, R"()")
DIAG_ENTRY(SignConversion /* sign-conversion */, 17448, /* DiagArray814 */ 2307, 0, R"()")
DIAG_ENTRY(anonymous_43 /* sign-promo */, 17464, 0, 0, R"()")
DIAG_ENTRY(SignedEnumBitfield /* signed-enum-bitfield */, 17475, /* DiagArray816 */ 2311, 0, R"()")
DIAG_ENTRY(anonymous_292 /* signed-unsigned-wchar */, 17496, /* DiagArray817 */ 2313, 0, R"()")
DIAG_ENTRY(SingleBitBitFieldConstantConversion /* single-bit-bitfield-constant-conversion */, 17518, /* DiagArray818 */ 2315, 0, R"()")
DIAG_ENTRY(SizeofArrayArgument /* sizeof-array-argument */, 17558, /* DiagArray819 */ 2317, 0, R"()")
DIAG_ENTRY(SizeofArrayDecay /* sizeof-array-decay */, 17580, /* DiagArray820 */ 2319, 0, R"()")
DIAG_ENTRY(anonymous_219 /* sizeof-array-div */, 17599, /* DiagArray821 */ 2321, 0, R"()")
DIAG_ENTRY(anonymous_218 /* sizeof-pointer-div */, 17616, /* DiagArray822 */ 2323, 0, R"()")
DIAG_ENTRY(SizeofPointerMemaccess /* sizeof-pointer-memaccess */, 17635, /* DiagArray823 */ 2325, 0, R"()")
DIAG_ENTRY(anonymous_100 /* slash-u-filename */, 17660, /* DiagArray824 */ 2328, 0, R"()")
DIAG_ENTRY(anonymous_86 /* slh-asm-goto */, 17677, /* DiagArray825 */ 2330, 0, R"()")
DIAG_ENTRY(anonymous_90 /* sloc-usage */, 17690, /* DiagArray826 */ 2332, 0, R"()")
DIAG_ENTRY(UninitializedSometimes /* sometimes-uninitialized */, 17701, /* DiagArray827 */ 2334, 0, R"()")
DIAG_ENTRY(BackendSourceMgr /* source-mgr */, 17725, /* DiagArray828 */ 2336, 0, R"()")
DIAG_ENTRY(SourceUsesOpenACC /* source-uses-openacc */, 17736, /* DiagArray829 */ 2338, 0, R"()")
DIAG_ENTRY(SourceUsesOpenMP /* source-uses-openmp */, 17756, /* DiagArray830 */ 2341, 0, R"()")
DIAG_ENTRY(SpirCompat /* spir-compat */, 17775, /* DiagArray831 */ 2350, 0, R"()")
DIAG_ENTRY(anonymous_78 /* spirv-compat */, 17787, 0, /* DiagSubGroup832 */ 667, R"()")
DIAG_ENTRY(anonymous_83 /* stack-exhausted */, 17800, /* DiagArray833 */ 2352, 0, R"()")
DIAG_ENTRY(anonymous_85 /* stack-protector */, 17816, /* DiagArray834 */ 2354, 0, R"()")
DIAG_ENTRY(StaticFloatInit /* static-float-init */, 17832, /* DiagArray835 */ 2356, /* DiagSubGroup835 */ 669, R"()")
DIAG_ENTRY(StaticInInline /* static-in-inline */, 17850, /* DiagArray836 */ 2358, 0, R"()")
DIAG_ENTRY(anonymous_157 /* static-inline-explicit-instantiation */, 17867, /* DiagArray837 */ 2361, 0, R"()")
DIAG_ENTRY(StaticLocalInInline /* static-local-in-inline */, 17904, /* DiagArray838 */ 2363, 0, R"()")
DIAG_ENTRY(UninitializedStaticSelfInit /* static-self-init */, 17927, /* DiagArray839 */ 2365, 0, R"()")
DIAG_ENTRY(anonymous_103 /* stdlibcxx-not-found */, 17944, /* DiagArray840 */ 2367, 0, R"()")
DIAG_ENTRY(anonymous_49 /* strict-aliasing */, 17964, 0, 0, R"()")
DIAG_ENTRY(anonymous_46 /* strict-aliasing=0 */, 17980, 0, 0, R"()")
DIAG_ENTRY(anonymous_47 /* strict-aliasing=1 */, 17998, 0, 0, R"()")
DIAG_ENTRY(anonymous_48 /* strict-aliasing=2 */, 18016, 0, 0, R"()")
DIAG_ENTRY(anonymous_56 /* strict-overflow */, 18034, 0, 0, R"()")
DIAG_ENTRY(anonymous_50 /* strict-overflow=0 */, 18050, 0, 0, R"()")
DIAG_ENTRY(anonymous_51 /* strict-overflow=1 */, 18068, 0, 0, R"()")
DIAG_ENTRY(anonymous_52 /* strict-overflow=2 */, 18086, 0, 0, R"()")
DIAG_ENTRY(anonymous_53 /* strict-overflow=3 */, 18104, 0, 0, R"()")
DIAG_ENTRY(anonymous_54 /* strict-overflow=4 */, 18122, 0, 0, R"()")
DIAG_ENTRY(anonymous_55 /* strict-overflow=5 */, 18140, 0, 0, R"()")
DIAG_ENTRY(ObjCStrictPotentiallyDirectSelector /* strict-potentially-direct-selector */, 18158, /* DiagArray852 */ 2369, /* DiagSubGroup852 */ 671, R"()")
DIAG_ENTRY(StrictPrototypes /* strict-prototypes */, 18193, /* DiagArray853 */ 2371, /* DiagSubGroup853 */ 673, R"()")
DIAG_ENTRY(StrictSelector /* strict-selector-match */, 18211, /* DiagArray854 */ 2373, 0, R"()")
DIAG_ENTRY(StringCompare /* string-compare */, 18233, /* DiagArray855 */ 2375, 0, R"()")
DIAG_ENTRY(StringConcatation /* string-concatenation */, 18248, /* DiagArray856 */ 2377, 0, R"()")
DIAG_ENTRY(StringConversion /* string-conversion */, 18269, /* DiagArray857 */ 2379, 0, R"()")
DIAG_ENTRY(StringPlusChar /* string-plus-char */, 18287, /* DiagArray858 */ 2381, 0, R"()")
DIAG_ENTRY(StringPlusInt /* string-plus-int */, 18304, /* DiagArray859 */ 2383, 0, R"()")
DIAG_ENTRY(anonymous_169 /* strlcpy-strlcat-size */, 18320, /* DiagArray860 */ 2385, 0, R"()")
DIAG_ENTRY(StrncatSize /* strncat-size */, 18341, /* DiagArray861 */ 2387, 0, R"()")
DIAG_ENTRY(CXX11WarnSuggestOverrideDestructor /* suggest-destructor-override */, 18354, /* DiagArray862 */ 2391, 0, R"()")
DIAG_ENTRY(CXX11WarnSuggestOverride /* suggest-override */, 18382, /* DiagArray863 */ 2393, 0, R"()")
DIAG_ENTRY(SuperSubClassMismatch /* super-class-method-mismatch */, 18399, /* DiagArray864 */ 2395, 0, R"()")
DIAG_ENTRY(SuspiciousBzero /* suspicious-bzero */, 18427, /* DiagArray865 */ 2397, 0, R"()")
DIAG_ENTRY(SuspiciousMemaccess /* suspicious-memaccess */, 18444, 0, /* DiagSubGroup866 */ 675, R"()")
DIAG_ENTRY(SwiftNameAttribute /* swift-name-attribute */, 18465, /* DiagArray867 */ 2399, 0, R"()")
DIAG_ENTRY(Switch /* switch */, 18486, /* DiagArray868 */ 2413, 0, R"()")
DIAG_ENTRY(SwitchBool /* switch-bool */, 18493, /* DiagArray869 */ 2417, 0, R"()")
DIAG_ENTRY(SwitchDefault /* switch-default */, 18505, /* DiagArray870 */ 2419, 0, R"()")
DIAG_ENTRY(SwitchEnum /* switch-enum */, 18520, /* DiagArray871 */ 2421, 0, R"()")
DIAG_ENTRY(SyncAlignment /* sync-alignment */, 18532, /* DiagArray872 */ 2423, 0, R"()")
DIAG_ENTRY(anonymous_291 /* sync-fetch-and-nand-semantics-changed */, 18547, /* DiagArray873 */ 2425, 0, R"()")
DIAG_ENTRY(anonymous_44 /* synth */, 18585, 0, 0, R"()")
DIAG_ENTRY(TargetClonesMixedSpecifiers /* target-clones-mixed-specifiers */, 18591, /* DiagArray875 */ 2427, 0, R"()")
DIAG_ENTRY(TautologicalBitwiseCompare /* tautological-bitwise-compare */, 18622, /* DiagArray876 */ 2429, 0, R"()")
DIAG_ENTRY(TautologicalCompare /* tautological-compare */, 18651, /* DiagArray877 */ 2432, /* DiagSubGroup877 */ 681, R"()")
DIAG_ENTRY(TautologicalConstantCompare /* tautological-constant-compare */, 18672, /* DiagArray878 */ 2435, /* DiagSubGroup878 */ 689, R"()")
DIAG_ENTRY(TautologicalInRangeCompare /* tautological-constant-in-range-compare */, 18702, 0, /* DiagSubGroup879 */ 691, R"()")
DIAG_ENTRY(TautologicalOutOfRangeCompare /* tautological-constant-out-of-range-compare */, 18741, /* DiagArray880 */ 2439, 0, R"()")
DIAG_ENTRY(TautologicalNegationCompare /* tautological-negation-compare */, 18784, /* DiagArray881 */ 2441, 0, R"()")
DIAG_ENTRY(TautologicalObjCBoolCompare /* tautological-objc-bool-compare */, 18814, /* DiagArray882 */ 2444, 0, R"()")
DIAG_ENTRY(TautologicalOverlapCompare /* tautological-overlap-compare */, 18845, /* DiagArray883 */ 2446, 0, R"()")
DIAG_ENTRY(TautologicalPointerCompare /* tautological-pointer-compare */, 18874, /* DiagArray884 */ 2448, 0, R"()")
DIAG_ENTRY(TautologicalTypeLimitCompare /* tautological-type-limit-compare */, 18903, /* DiagArray885 */ 2451, 0, R"()")
DIAG_ENTRY(TautologicalUndefinedCompare /* tautological-undefined-compare */, 18935, /* DiagArray886 */ 2453, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedCharZeroCompare /* tautological-unsigned-char-zero-compare */, 18966, /* DiagArray887 */ 2456, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedEnumZeroCompare /* tautological-unsigned-enum-zero-compare */, 19006, /* DiagArray888 */ 2458, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedZeroCompare /* tautological-unsigned-zero-compare */, 19046, /* DiagArray889 */ 2460, 0, R"()")
DIAG_ENTRY(TautologicalValueRangeCompare /* tautological-value-range-compare */, 19081, /* DiagArray890 */ 2462, 0, R"()")
DIAG_ENTRY(anonymous_300 /* tcb-enforcement */, 19114, /* DiagArray891 */ 2464, 0, R"()")
DIAG_ENTRY(anonymous_255 /* tentative-definition-incomplete-type */, 19130, /* DiagArray892 */ 2466, 0, R"()")
DIAG_ENTRY(ThreadSafety /* thread-safety */, 19167, 0, /* DiagSubGroup893 */ 694, R"()")
DIAG_ENTRY(ThreadSafetyAnalysis /* thread-safety-analysis */, 19181, /* DiagArray894 */ 2468, 0, R"()")
DIAG_ENTRY(ThreadSafetyAttributes /* thread-safety-attributes */, 19204, /* DiagArray895 */ 2487, 0, R"()")
DIAG_ENTRY(ThreadSafetyBeta /* thread-safety-beta */, 19229, /* DiagArray896 */ 2494, 0, R"()")
DIAG_ENTRY(ThreadSafetyNegative /* thread-safety-negative */, 19248, /* DiagArray897 */ 2496, 0, R"()")
DIAG_ENTRY(ThreadSafetyPrecise /* thread-safety-precise */, 19271, /* DiagArray898 */ 2498, 0, R"()")
DIAG_ENTRY(ThreadSafetyReference /* thread-safety-reference */, 19293, /* DiagArray899 */ 2502, /* DiagSubGroup899 */ 699, R"()")
DIAG_ENTRY(ThreadSafetyReferenceReturn /* thread-safety-reference-return */, 19317, /* DiagArray900 */ 2505, 0, R"()")
DIAG_ENTRY(ThreadSafetyVerbose /* thread-safety-verbose */, 19348, /* DiagArray901 */ 2508, 0, R"()")
DIAG_ENTRY(Trigraphs /* trigraphs */, 19370, /* DiagArray902 */ 2510, 0, R"()")
DIAG_ENTRY(TypeLimits /* type-limits */, 19380, 0, /* DiagSubGroup903 */ 701, R"()")
DIAG_ENTRY(TypeSafety /* type-safety */, 19392, /* DiagArray904 */ 2515, 0, R"()")
DIAG_ENTRY(anonymous_236 /* typedef-redefinition */, 19404, /* DiagArray905 */ 2519, 0, R"()")
DIAG_ENTRY(anonymous_230 /* typename-missing */, 19425, /* DiagArray906 */ 2521, 0, R"()")
DIAG_ENTRY(anonymous_108 /* unable-to-open-stats-file */, 19442, /* DiagArray907 */ 2523, 0, R"()")
DIAG_ENTRY(UnalignedAccess /* unaligned-access */, 19468, /* DiagArray908 */ 2525, 0, R"()")
DIAG_ENTRY(anonymous_294 /* unaligned-qualifier-implicit-cast */, 19485, /* DiagArray909 */ 2527, 0, R"()")
DIAG_ENTRY(UnavailableDeclarations /* unavailable-declarations */, 19519, /* DiagArray910 */ 2529, 0, R"()")
DIAG_ENTRY(UndeclaredSelector /* undeclared-selector */, 19544, /* DiagArray911 */ 2531, 0, R"()")
DIAG_ENTRY(anonymous_132 /* undef */, 19564, /* DiagArray912 */ 2534, 0, R"()")
DIAG_ENTRY(anonymous_133 /* undef-prefix */, 19570, /* DiagArray913 */ 2536, 0, R"()")
DIAG_ENTRY(anonymous_198 /* undefined-arm-streaming */, 19583, /* DiagArray914 */ 2538, 0, R"()")
DIAG_ENTRY(anonymous_199 /* undefined-arm-za */, 19607, /* DiagArray915 */ 2540, 0, R"()")
DIAG_ENTRY(anonymous_200 /* undefined-arm-zt0 */, 19624, /* DiagArray916 */ 2542, 0, R"()")
DIAG_ENTRY(UndefinedBoolConversion /* undefined-bool-conversion */, 19642, /* DiagArray917 */ 2544, 0, R"()")
DIAG_ENTRY(UndefinedFuncTemplate /* undefined-func-template */, 19668, /* DiagArray918 */ 2547, 0, R"()")
DIAG_ENTRY(anonymous_235 /* undefined-inline */, 19692, /* DiagArray919 */ 2549, 0, R"()")
DIAG_ENTRY(anonymous_233 /* undefined-internal */, 19709, /* DiagArray920 */ 2551, 0, R"()")
DIAG_ENTRY(anonymous_234 /* undefined-internal-type */, 19728, /* DiagArray921 */ 2553, 0, R"()")
DIAG_ENTRY(UndefinedReinterpretCast /* undefined-reinterpret-cast */, 19752, /* DiagArray922 */ 2555, 0, R"()")
DIAG_ENTRY(UndefinedVarTemplate /* undefined-var-template */, 19779, /* DiagArray923 */ 2558, 0, R"()")
DIAG_ENTRY(UnderalignedExceptionObject /* underaligned-exception-object */, 19802, /* DiagArray924 */ 2560, 0, R"()")
DIAG_ENTRY(UnevaluatedExpression /* unevaluated-expression */, 19832, /* DiagArray925 */ 2562, /* DiagSubGroup925 */ 706, R"()")
DIAG_ENTRY(UnguardedAvailability /* unguarded-availability */, 19855, /* DiagArray926 */ 2564, /* DiagSubGroup926 */ 708, R"()")
DIAG_ENTRY(UnguardedAvailabilityNew /* unguarded-availability-new */, 19878, /* DiagArray927 */ 2566, 0, R"()")
DIAG_ENTRY(Unicode /* unicode */, 19905, /* DiagArray928 */ 2568, 0, R"()")
DIAG_ENTRY(anonymous_118 /* unicode-homoglyph */, 19913, /* DiagArray929 */ 2576, 0, R"()")
DIAG_ENTRY(anonymous_117 /* unicode-whitespace */, 19931, /* DiagArray930 */ 2578, 0, R"()")
DIAG_ENTRY(anonymous_119 /* unicode-zero-width */, 19950, /* DiagArray931 */ 2580, 0, R"()")
DIAG_ENTRY(Uninitialized /* uninitialized */, 19969, /* DiagArray932 */ 2582, /* DiagSubGroup932 */ 710, R"()")
DIAG_ENTRY(UninitializedConstReference /* uninitialized-const-reference */, 19983, /* DiagArray933 */ 2590, 0, R"()")
DIAG_ENTRY(UnknownArgument /* unknown-argument */, 20013, /* DiagArray934 */ 2592, 0, R"()")
DIAG_ENTRY(UnknownAssumption /* unknown-assumption */, 20030, /* DiagArray935 */ 2596, 0, R"()")
DIAG_ENTRY(UnknownAttributes /* unknown-attributes */, 20049, /* DiagArray936 */ 2598, 0, R"()")
DIAG_ENTRY(CudaUnknownVersion /* unknown-cuda-version */, 20068, /* DiagArray937 */ 2600, 0, R"()")
DIAG_ENTRY(anonymous_137 /* unknown-directives */, 20089, /* DiagArray938 */ 2603, 0, R"()")
DIAG_ENTRY(anonymous_122 /* unknown-escape-sequence */, 20108, /* DiagArray939 */ 2605, 0, R"()")
DIAG_ENTRY(UnknownPragmas /* unknown-pragmas */, 20132, /* DiagArray940 */ 2607, 0, R"()")
DIAG_ENTRY(UnknownSanitizers /* unknown-sanitizers */, 20148, /* DiagArray941 */ 2628, 0, R"()")
DIAG_ENTRY(UnknownWarningOption /* unknown-warning-option */, 20167, /* DiagArray942 */ 2630, 0, R"()")
DIAG_ENTRY(UnnamedTypeTemplateArgs /* unnamed-type-template-args */, 20190, /* DiagArray943 */ 2634, /* DiagSubGroup943 */ 714, R"()")
DIAG_ENTRY(UnneededInternalDecl /* unneeded-internal-declaration */, 20217, /* DiagArray944 */ 2636, 0, R"()")
DIAG_ENTRY(UnneededMemberFunction /* unneeded-member-function */, 20247, /* DiagArray945 */ 2639, 0, R"()")
DIAG_ENTRY(anonymous_226 /* unqualified-std-cast-call */, 20272, /* DiagArray946 */ 2641, 0, R"()")
DIAG_ENTRY(UnreachableCode /* unreachable-code */, 20298, /* DiagArray947 */ 2643, /* DiagSubGroup947 */ 716, R"()")
DIAG_ENTRY(UnreachableCodeAggressive /* unreachable-code-aggressive */, 20315, 0, /* DiagSubGroup948 */ 720, R"()")
DIAG_ENTRY(UnreachableCodeBreak /* unreachable-code-break */, 20343, /* DiagArray949 */ 2645, 0, R"()")
DIAG_ENTRY(UnreachableCodeFallthrough /* unreachable-code-fallthrough */, 20366, /* DiagArray950 */ 2647, 0, R"()")
DIAG_ENTRY(UnreachableCodeGenericAssoc /* unreachable-code-generic-assoc */, 20395, /* DiagArray951 */ 2649, 0, R"()")
DIAG_ENTRY(UnreachableCodeLoopIncrement /* unreachable-code-loop-increment */, 20426, /* DiagArray952 */ 2651, 0, R"()")
DIAG_ENTRY(UnreachableCodeReturn /* unreachable-code-return */, 20458, /* DiagArray953 */ 2653, 0, R"()")
DIAG_ENTRY(UnsafeBufferUsage /* unsafe-buffer-usage */, 20482, /* DiagArray954 */ 2655, /* DiagSubGroup954 */ 724, R"()")
DIAG_ENTRY(UnsafeBufferUsageInContainer /* unsafe-buffer-usage-in-container */, 20502, 0, 0, R"()")
DIAG_ENTRY(Unsequenced /* unsequenced */, 20535, /* DiagArray956 */ 2658, 0, R"()")
DIAG_ENTRY(UnsupportedABI /* unsupported-abi */, 20547, /* DiagArray957 */ 2661, 0, R"()")
DIAG_ENTRY(UnsupportedAbs /* unsupported-abs */, 20563, /* DiagArray958 */ 2664, 0, R"()")
DIAG_ENTRY(anonymous_215 /* unsupported-availability-guard */, 20579, /* DiagArray959 */ 2667, 0, R"()")
DIAG_ENTRY(UnsupportedCB /* unsupported-cb */, 20610, /* DiagArray960 */ 2669, 0, R"()")
DIAG_ENTRY(anonymous_211 /* unsupported-dll-base-class-template */, 20625, /* DiagArray961 */ 2671, 0, R"()")
DIAG_ENTRY(UnsupportedFPOpt /* unsupported-floating-point-opt */, 20661, /* DiagArray962 */ 2673, 0, R"()")
DIAG_ENTRY(UnsupportedFriend /* unsupported-friend */, 20692, /* DiagArray963 */ 2676, 0, R"()")
DIAG_ENTRY(UnsupportedGPOpt /* unsupported-gpopt */, 20711, /* DiagArray964 */ 2679, 0, R"()")
DIAG_ENTRY(UnsupportedNan /* unsupported-nan */, 20729, /* DiagArray965 */ 2681, 0, R"()")
DIAG_ENTRY(UnsupportedTargetOpt /* unsupported-target-opt */, 20745, /* DiagArray966 */ 2684, 0, R"()")
DIAG_ENTRY(anonymous_221 /* unsupported-visibility */, 20768, /* DiagArray967 */ 2687, 0, R"()")
DIAG_ENTRY(anonymous_228 /* unusable-partial-specialization */, 20791, /* DiagArray968 */ 2689, 0, R"()")
DIAG_ENTRY(Unused /* unused */, 20823, 0, /* DiagSubGroup969 */ 726, R"()")
DIAG_ENTRY(UnusedArgument /* unused-argument */, 20830, 0, 0, R"()")
DIAG_ENTRY(UnusedButSetParameter /* unused-but-set-parameter */, 20846, /* DiagArray971 */ 2691, 0, R"()")
DIAG_ENTRY(UnusedButSetVariable /* unused-but-set-variable */, 20871, /* DiagArray972 */ 2693, 0, R"()")
DIAG_ENTRY(UnusedCommandLineArgument /* unused-command-line-argument */, 20895, /* DiagArray973 */ 2695, 0, R"()")
DIAG_ENTRY(UnusedComparison /* unused-comparison */, 20924, /* DiagArray974 */ 2709, 0, R"()")
DIAG_ENTRY(UnusedConstVariable /* unused-const-variable */, 20942, /* DiagArray975 */ 2711, 0, R"()")
DIAG_ENTRY(UnusedExceptionParameter /* unused-exception-parameter */, 20964, /* DiagArray976 */ 2713, 0, R"()")
DIAG_ENTRY(UnusedFunction /* unused-function */, 20991, /* DiagArray977 */ 2715, /* DiagSubGroup977 */ 737, R"()")
DIAG_ENTRY(UnusedGetterReturnValue /* unused-getter-return-value */, 21007, /* DiagArray978 */ 2717, 0, R"()")
DIAG_ENTRY(UnusedLabel /* unused-label */, 21034, /* DiagArray979 */ 2719, 0, R"()")
DIAG_ENTRY(UnusedLambdaCapture /* unused-lambda-capture */, 21047, /* DiagArray980 */ 2721, 0, R"()")
DIAG_ENTRY(UnusedLocalTypedef /* unused-local-typedef */, 21069, /* DiagArray981 */ 2723, 0, R"()")
DIAG_ENTRY(anonymous_68 /* unused-local-typedefs */, 21090, 0, /* DiagSubGroup982 */ 739, R"()")
DIAG_ENTRY(anonymous_131 /* unused-macros */, 21112, /* DiagArray983 */ 2725, 0, R"()")
DIAG_ENTRY(UnusedMemberFunction /* unused-member-function */, 21126, /* DiagArray984 */ 2727, /* DiagSubGroup984 */ 741, R"()")
DIAG_ENTRY(UnusedParameter /* unused-parameter */, 21149, /* DiagArray985 */ 2729, 0, R"()")
DIAG_ENTRY(UnusedPrivateField /* unused-private-field */, 21166, /* DiagArray986 */ 2731, 0, R"()")
DIAG_ENTRY(UnusedPropertyIvar /* unused-property-ivar */, 21187, /* DiagArray987 */ 2733, 0, R"()")
DIAG_ENTRY(UnusedResult /* unused-result */, 21208, /* DiagArray988 */ 2735, 0, R"()")
DIAG_ENTRY(UnusedTemplate /* unused-template */, 21222, /* DiagArray989 */ 2738, /* DiagSubGroup989 */ 743, R"()")
DIAG_ENTRY(UnusedValue /* unused-value */, 21238, /* DiagArray990 */ 2740, /* DiagSubGroup990 */ 745, R"()")
DIAG_ENTRY(UnusedVariable /* unused-variable */, 21251, /* DiagArray991 */ 2748, /* DiagSubGroup991 */ 749, R"()")
DIAG_ENTRY(anonymous_277 /* unused-volatile-lvalue */, 21267, /* DiagArray992 */ 2750, 0, R"()")
DIAG_ENTRY(UsedButMarkedUnused /* used-but-marked-unused */, 21290, /* DiagArray993 */ 2752, 0, R"()")
DIAG_ENTRY(UserDefinedLiterals /* user-defined-literals */, 21313, /* DiagArray994 */ 2754, 0, R"()")
DIAG_ENTRY(UserDefinedWarnings /* user-defined-warnings */, 21335, /* DiagArray995 */ 2756, 0, R"()")
DIAG_ENTRY(Varargs /* varargs */, 21357, /* DiagArray996 */ 2758, 0, R"()")
DIAG_ENTRY(VariadicMacros /* variadic-macros */, 21365, /* DiagArray997 */ 2762, 0, R"()")
DIAG_ENTRY(anonymous_201 /* vec-elem-size */, 21381, /* DiagArray998 */ 2766, 0, R"()")
DIAG_ENTRY(VectorConversion /* vector-conversion */, 21395, /* DiagArray999 */ 2768, 0, R"()")
DIAG_ENTRY(anonymous_67 /* vector-conversions */, 21413, 0, /* DiagSubGroup1000 */ 751, R"()")
DIAG_ENTRY(VexingParse /* vexing-parse */, 21432, /* DiagArray1001 */ 2770, 0, R"()")
DIAG_ENTRY(Visibility /* visibility */, 21445, /* DiagArray1002 */ 2774, 0, R"()")
DIAG_ENTRY(VLA /* vla */, 21456, /* DiagArray1003 */ 2777, /* DiagSubGroup1003 */ 753, R"()")
DIAG_ENTRY(VLACxxExtension /* vla-cxx-extension */, 21460, /* DiagArray1004 */ 2779, /* DiagSubGroup1004 */ 755, R"()")
DIAG_ENTRY(VLAExtension /* vla-extension */, 21478, /* DiagArray1005 */ 2782, /* DiagSubGroup1005 */ 757, R"()")
DIAG_ENTRY(VLAUseStaticAssert /* vla-extension-static-assert */, 21492, /* DiagArray1006 */ 2784, 0, R"()")
DIAG_ENTRY(VoidPointerToEnumCast /* void-pointer-to-enum-cast */, 21520, /* DiagArray1007 */ 2787, 0, R"()")
DIAG_ENTRY(VoidPointerToIntCast /* void-pointer-to-int-cast */, 21546, /* DiagArray1008 */ 2789, /* DiagSubGroup1008 */ 759, R"()")
DIAG_ENTRY(VoidPointerDeref /* void-ptr-dereference */, 21571, /* DiagArray1009 */ 2791, 0, R"()")
DIAG_ENTRY(VolatileRegisterVar /* volatile-register-var */, 21592, 0, 0, R"()")
DIAG_ENTRY(WebAssemblyExceptionSpec /* wasm-exception-spec */, 21614, /* DiagArray1011 */ 2793, 0, R"()")
DIAG_ENTRY(anonymous_191 /* weak-template-vtables */, 21634, /* DiagArray1012 */ 2795, 0, R"()")
DIAG_ENTRY(anonymous_190 /* weak-vtables */, 21656, /* DiagArray1013 */ 2797, 0, R"()")
DIAG_ENTRY(WritableStrings /* writable-strings */, 21669, /* DiagArray1014 */ 2799, /* DiagSubGroup1014 */ 761, R"()")
DIAG_ENTRY(GCCWriteStrings /* write-strings */, 21686, 0, /* DiagSubGroup1015 */ 763, R"(**Note:** enabling this warning in C will change the semantic behavior of the
program by treating all string literals as having type ``const char *``
instead of ``char *``. This can cause unexpected behaviors with type-sensitive
constructs like ``_Generic``.)")
DIAG_ENTRY(XorUsedAsPow /* xor-used-as-pow */, 21700, /* DiagArray1016 */ 2801, 0, R"()")
DIAG_ENTRY(anonymous_299 /* zero-as-null-pointer-constant */, 21716, /* DiagArray1017 */ 2805, 0, R"()")
DIAG_ENTRY(ZeroLengthArray /* zero-length-array */, 21746, /* DiagArray1018 */ 2807, 0, R"()")
#endif // DIAG_ENTRY


#ifdef GET_CATEGORY_TABLE
CATEGORY("", DiagCat_None)
CATEGORY("Lexical or Preprocessor Issue", DiagCat_Lexical_or_Preprocessor_Issue)
CATEGORY("Semantic Issue", DiagCat_Semantic_Issue)
CATEGORY("Parse Issue", DiagCat_Parse_Issue)
CATEGORY("Lambda Issue", DiagCat_Lambda_Issue)
CATEGORY("ARC Semantic Issue", DiagCat_ARC_Semantic_Issue)
CATEGORY("ARC and @properties", DiagCat_ARC_and__properties)
CATEGORY("ARC Casting Rules", DiagCat_ARC_Casting_Rules)
CATEGORY("ARC Parse Issue", DiagCat_ARC_Parse_Issue)
CATEGORY("ARC Weak References", DiagCat_ARC_Weak_References)
CATEGORY("ARC Restrictions", DiagCat_ARC_Restrictions)
CATEGORY("OpenMP Issue", DiagCat_OpenMP_Issue)
CATEGORY("Inline Assembly Issue", DiagCat_Inline_Assembly_Issue)
CATEGORY("AST Deserialization Issue", DiagCat_AST_Deserialization_Issue)
CATEGORY("Modules Issue", DiagCat_Modules_Issue)
CATEGORY("Coroutines Issue", DiagCat_Coroutines_Issue)
CATEGORY("Concepts Issue", DiagCat_Concepts_Issue)
CATEGORY("Dependency Directive Source Scanner Issue", DiagCat_Dependency_Directive_Source_Scanner_Issue)
CATEGORY("Backend Issue", DiagCat_Backend_Issue)
CATEGORY("SourceMgr Reported Issue", DiagCat_SourceMgr_Reported_Issue)
CATEGORY("Related Result Type Issue", DiagCat_Related_Result_Type_Issue)
CATEGORY("AST Serialization Issue", DiagCat_AST_Serialization_Issue)
CATEGORY("Nullability Issue", DiagCat_Nullability_Issue)
CATEGORY("Generics Issue", DiagCat_Generics_Issue)
CATEGORY("User-Defined Issue", DiagCat_User_Defined_Issue)
CATEGORY("Refactoring Invocation Issue", DiagCat_Refactoring_Invocation_Issue)
CATEGORY("VTable ABI Issue", DiagCat_VTable_ABI_Issue)
CATEGORY("Value Conversion Issue", DiagCat_Value_Conversion_Issue)
CATEGORY("Documentation Issue", DiagCat_Documentation_Issue)
CATEGORY("ARC Retain Cycle", DiagCat_ARC_Retain_Cycle)
CATEGORY("Deprecations", DiagCat_Deprecations)
CATEGORY("Format String Issue", DiagCat_Format_String_Issue)
CATEGORY("Cocoa API Issue", DiagCat_Cocoa_API_Issue)
CATEGORY("#pragma message Directive", DiagCat__pragma_message_Directive)
CATEGORY("Instrumentation Issue", DiagCat_Instrumentation_Issue)
CATEGORY("Unused Entity Issue", DiagCat_Unused_Entity_Issue)
#endif // GET_CATEGORY_TABLE

