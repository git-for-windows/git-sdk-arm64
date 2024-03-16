!mod$ v1 sum:4260d890b8f27605
module omp_lib
use omp_lib_kinds,only:c_associated
use omp_lib_kinds,only:c_funloc
use omp_lib_kinds,only:c_funptr
use omp_lib_kinds,only:c_f_pointer
use omp_lib_kinds,only:c_loc
use omp_lib_kinds,only:c_null_funptr
use omp_lib_kinds,only:c_null_ptr
use omp_lib_kinds,only:c_ptr
use omp_lib_kinds,only:c_sizeof
use omp_lib_kinds,only:operator(==)
use omp_lib_kinds,only:operator(/=)
use omp_lib_kinds,only:c_int8_t
use omp_lib_kinds,only:c_int16_t
use omp_lib_kinds,only:c_int32_t
use omp_lib_kinds,only:c_int64_t
use omp_lib_kinds,only:c_int128_t
use omp_lib_kinds,only:c_int
use omp_lib_kinds,only:c_short
use omp_lib_kinds,only:c_long
use omp_lib_kinds,only:c_long_long
use omp_lib_kinds,only:c_signed_char
use omp_lib_kinds,only:c_size_t
use omp_lib_kinds,only:c_intmax_t
use omp_lib_kinds,only:c_intptr_t
use omp_lib_kinds,only:c_ptrdiff_t
use omp_lib_kinds,only:c_int_least8_t
use omp_lib_kinds,only:c_int_fast8_t
use omp_lib_kinds,only:c_int_least16_t
use omp_lib_kinds,only:c_int_fast16_t
use omp_lib_kinds,only:c_int_least32_t
use omp_lib_kinds,only:c_int_fast32_t
use omp_lib_kinds,only:c_int_least64_t
use omp_lib_kinds,only:c_int_fast64_t
use omp_lib_kinds,only:c_int_least128_t
use omp_lib_kinds,only:c_int_fast128_t
use omp_lib_kinds,only:c_float
use omp_lib_kinds,only:c_double
use omp_lib_kinds,only:c_long_double
use omp_lib_kinds,only:c_float_complex
use omp_lib_kinds,only:c_double_complex
use omp_lib_kinds,only:c_long_double_complex
use omp_lib_kinds,only:c_bool
use omp_lib_kinds,only:c_char
use omp_lib_kinds,only:c_null_char
use omp_lib_kinds,only:c_alert
use omp_lib_kinds,only:c_backspace
use omp_lib_kinds,only:c_form_feed
use omp_lib_kinds,only:c_new_line
use omp_lib_kinds,only:c_carriage_return
use omp_lib_kinds,only:c_horizontal_tab
use omp_lib_kinds,only:c_vertical_tab
use omp_lib_kinds,only:c_float128
use omp_lib_kinds,only:c_float128_complex
use omp_lib_kinds,only:c_f_procpointer
use omp_lib_kinds,only:omp_integer_kind
use omp_lib_kinds,only:omp_logical_kind
use omp_lib_kinds,only:omp_real_kind
use omp_lib_kinds,only:kmp_double_kind
use omp_lib_kinds,only:omp_lock_kind
use omp_lib_kinds,only:omp_nest_lock_kind
use omp_lib_kinds,only:omp_sched_kind
use omp_lib_kinds,only:omp_proc_bind_kind
use omp_lib_kinds,only:kmp_pointer_kind
use omp_lib_kinds,only:kmp_size_t_kind
use omp_lib_kinds,only:kmp_affinity_mask_kind
use omp_lib_kinds,only:kmp_cancel_kind
use omp_lib_kinds,only:omp_sync_hint_kind
use omp_lib_kinds,only:omp_lock_hint_kind
use omp_lib_kinds,only:omp_control_tool_kind
use omp_lib_kinds,only:omp_control_tool_result_kind
use omp_lib_kinds,only:omp_allocator_handle_kind
use omp_lib_kinds,only:omp_memspace_handle_kind
use omp_lib_kinds,only:omp_alloctrait_key_kind
use omp_lib_kinds,only:omp_alloctrait_val_kind
use omp_lib_kinds,only:omp_interop_kind
use omp_lib_kinds,only:omp_interop_fr_kind
use omp_lib_kinds,only:omp_alloctrait
use omp_lib_kinds,only:omp_pause_resource_kind
use omp_lib_kinds,only:omp_depend_kind
use omp_lib_kinds,only:omp_event_handle_kind
integer(4),parameter::openmp_version=201611_4
integer(4),parameter::kmp_version_major=5_4
integer(4),parameter::kmp_version_minor=0_4
integer(4),parameter::kmp_version_build=20140926_4
character(*,1),parameter::kmp_build_date="No_Timestamp"
integer(4),parameter::omp_sched_static=1_4
integer(4),parameter::omp_sched_dynamic=2_4
integer(4),parameter::omp_sched_guided=3_4
integer(4),parameter::omp_sched_auto=4_4
integer(4),parameter::omp_sched_monotonic=-2147483648_4
intrinsic::int
integer(4),parameter::omp_proc_bind_false=0_4
integer(4),parameter::omp_proc_bind_true=1_4
integer(4),parameter::omp_proc_bind_master=2_4
integer(4),parameter::omp_proc_bind_close=3_4
integer(4),parameter::omp_proc_bind_spread=4_4
integer(4),parameter::kmp_cancel_parallel=1_4
integer(4),parameter::kmp_cancel_loop=2_4
integer(4),parameter::kmp_cancel_sections=3_4
integer(4),parameter::kmp_cancel_taskgroup=4_4
integer(4),parameter::omp_sync_hint_none=0_4
integer(4),parameter::omp_sync_hint_uncontended=1_4
integer(4),parameter::omp_sync_hint_contended=2_4
integer(4),parameter::omp_sync_hint_nonspeculative=4_4
integer(4),parameter::omp_sync_hint_speculative=8_4
integer(4),parameter::omp_lock_hint_none=0_4
integer(4),parameter::omp_lock_hint_uncontended=1_4
integer(4),parameter::omp_lock_hint_contended=2_4
integer(4),parameter::omp_lock_hint_nonspeculative=4_4
integer(4),parameter::omp_lock_hint_speculative=8_4
integer(4),parameter::kmp_lock_hint_hle=65536_4
integer(4),parameter::kmp_lock_hint_rtm=131072_4
integer(4),parameter::kmp_lock_hint_adaptive=262144_4
integer(4),parameter::omp_control_tool_start=1_4
integer(4),parameter::omp_control_tool_pause=2_4
integer(4),parameter::omp_control_tool_flush=3_4
integer(4),parameter::omp_control_tool_end=4_4
integer(4),parameter::omp_control_tool_notool=-2_4
integer(4),parameter::omp_control_tool_nocallback=-1_4
integer(4),parameter::omp_control_tool_success=0_4
integer(4),parameter::omp_control_tool_ignored=1_4
integer(4),parameter::omp_atk_sync_hint=1_4
integer(4),parameter::omp_atk_alignment=2_4
integer(4),parameter::omp_atk_access=3_4
integer(4),parameter::omp_atk_pool_size=4_4
integer(4),parameter::omp_atk_fallback=5_4
integer(4),parameter::omp_atk_fb_data=6_4
integer(4),parameter::omp_atk_pinned=7_4
integer(4),parameter::omp_atk_partition=8_4
integer(8),parameter::omp_atv_default=-1_8
integer(8),parameter::omp_atv_false=0_8
integer(8),parameter::omp_atv_true=1_8
integer(8),parameter::omp_atv_contended=3_8
integer(8),parameter::omp_atv_uncontended=4_8
integer(8),parameter::omp_atv_serialized=5_8
integer(8),parameter::omp_atv_sequential=5_8
integer(8),parameter::omp_atv_private=6_8
integer(8),parameter::omp_atv_all=7_8
integer(8),parameter::omp_atv_thread=8_8
integer(8),parameter::omp_atv_pteam=9_8
integer(8),parameter::omp_atv_cgroup=10_8
integer(8),parameter::omp_atv_default_mem_fb=11_8
integer(8),parameter::omp_atv_null_fb=12_8
integer(8),parameter::omp_atv_abort_fb=13_8
integer(8),parameter::omp_atv_allocator_fb=14_8
integer(8),parameter::omp_atv_environment=15_8
integer(8),parameter::omp_atv_nearest=16_8
integer(8),parameter::omp_atv_blocked=17_8
integer(8),parameter::omp_atv_interleaved=18_8
integer(8),parameter::omp_null_allocator=0_8
integer(8),parameter::omp_default_mem_alloc=1_8
integer(8),parameter::omp_large_cap_mem_alloc=2_8
integer(8),parameter::omp_const_mem_alloc=3_8
integer(8),parameter::omp_high_bw_mem_alloc=4_8
integer(8),parameter::omp_low_lat_mem_alloc=5_8
integer(8),parameter::omp_cgroup_mem_alloc=6_8
integer(8),parameter::omp_pteam_mem_alloc=7_8
integer(8),parameter::omp_thread_mem_alloc=8_8
integer(8),parameter::llvm_omp_target_host_mem_alloc=100_8
integer(8),parameter::llvm_omp_target_shared_mem_alloc=101_8
integer(8),parameter::llvm_omp_target_device_mem_alloc=102_8
integer(8),parameter::omp_default_mem_space=0_8
integer(8),parameter::omp_large_cap_mem_space=1_8
integer(8),parameter::omp_const_mem_space=2_8
integer(8),parameter::omp_high_bw_mem_space=3_8
integer(8),parameter::omp_low_lat_mem_space=4_8
integer(8),parameter::llvm_omp_target_host_mem_space=100_8
integer(8),parameter::llvm_omp_target_shared_mem_space=101_8
integer(8),parameter::llvm_omp_target_device_mem_space=102_8
integer(4),parameter::omp_pause_resume=0_4
integer(4),parameter::omp_pause_soft=1_4
integer(4),parameter::omp_pause_hard=2_4
integer(4),parameter::omp_ifr_cuda=1_4
integer(4),parameter::omp_ifr_cuda_driver=2_4
integer(4),parameter::omp_ifr_opencl=3_4
integer(4),parameter::omp_ifr_sycl=4_4
integer(4),parameter::omp_ifr_hip=5_4
integer(4),parameter::omp_ifr_level_zero=6_4
integer(4),parameter::omp_ifr_last=7_4
integer(8),parameter::omp_interop_none=0_8
interface
subroutine omp_set_num_threads(num_threads) bind(c)
integer(4),value::num_threads
end
end interface
interface
subroutine omp_set_dynamic(dynamic_threads) bind(c)
logical(4),value::dynamic_threads
end
end interface
interface
subroutine omp_set_nested(nested) bind(c)
logical(4),value::nested
end
end interface
interface
function omp_get_num_threads() bind(c)
integer(4)::omp_get_num_threads
end
end interface
interface
function omp_get_max_threads() bind(c)
integer(4)::omp_get_max_threads
end
end interface
interface
function omp_get_thread_num() bind(c)
integer(4)::omp_get_thread_num
end
end interface
interface
function omp_get_num_procs() bind(c)
integer(4)::omp_get_num_procs
end
end interface
interface
function omp_in_parallel() bind(c)
logical(4)::omp_in_parallel
end
end interface
interface
function omp_in_final() bind(c)
logical(4)::omp_in_final
end
end interface
interface
function omp_get_dynamic() bind(c)
logical(4)::omp_get_dynamic
end
end interface
interface
function omp_get_nested() bind(c)
logical(4)::omp_get_nested
end
end interface
interface
function omp_get_thread_limit() bind(c)
integer(4)::omp_get_thread_limit
end
end interface
interface
subroutine omp_set_max_active_levels(max_levels) bind(c)
integer(4),value::max_levels
end
end interface
interface
function omp_get_max_active_levels() bind(c)
integer(4)::omp_get_max_active_levels
end
end interface
interface
function omp_get_level() bind(c)
integer(4)::omp_get_level
end
end interface
interface
function omp_get_active_level() bind(c)
integer(4)::omp_get_active_level
end
end interface
interface
function omp_get_ancestor_thread_num(level) bind(c)
integer(4),value::level
integer(4)::omp_get_ancestor_thread_num
end
end interface
interface
function omp_get_team_size(level) bind(c)
integer(4),value::level
integer(4)::omp_get_team_size
end
end interface
interface
subroutine omp_set_schedule(kind,chunk_size) bind(c)
integer(4),value::kind
integer(4),value::chunk_size
end
end interface
interface
subroutine omp_get_schedule(kind,chunk_size) bind(c)
integer(4)::kind
integer(4)::chunk_size
end
end interface
interface
function omp_get_proc_bind() bind(c)
integer(4)::omp_get_proc_bind
end
end interface
interface
function omp_get_num_places() bind(c)
integer(4)::omp_get_num_places
end
end interface
interface
function omp_get_place_num_procs(place_num) bind(c)
integer(4),value::place_num
integer(4)::omp_get_place_num_procs
end
end interface
interface
subroutine omp_get_place_proc_ids(place_num,ids) bind(c)
integer(4),value::place_num
integer(4)::ids(1_8:*)
end
end interface
interface
function omp_get_place_num() bind(c)
integer(4)::omp_get_place_num
end
end interface
interface
function omp_get_partition_num_places() bind(c)
integer(4)::omp_get_partition_num_places
end
end interface
interface
subroutine omp_get_partition_place_nums(place_nums) bind(c)
integer(4)::place_nums(1_8:*)
end
end interface
interface
function omp_get_wtime() bind(c)
real(8)::omp_get_wtime
end
end interface
interface
function omp_get_wtick() bind(c)
real(8)::omp_get_wtick
end
end interface
interface
function omp_get_default_device() bind(c)
integer(4)::omp_get_default_device
end
end interface
interface
subroutine omp_set_default_device(device_num) bind(c)
integer(4),value::device_num
end
end interface
interface
function omp_get_num_devices() bind(c)
integer(4)::omp_get_num_devices
end
end interface
interface
function omp_get_num_teams() bind(c)
integer(4)::omp_get_num_teams
end
end interface
interface
function omp_get_team_num() bind(c)
integer(4)::omp_get_team_num
end
end interface
interface
function omp_get_cancellation() bind(c)
integer(4)::omp_get_cancellation
end
end interface
interface
function omp_is_initial_device() bind(c)
logical(4)::omp_is_initial_device
end
end interface
interface
function omp_get_initial_device() bind(c)
integer(4)::omp_get_initial_device
end
end interface
interface
function omp_get_device_num() bind(c)
integer(4)::omp_get_device_num
end
end interface
interface
function omp_pause_resource(kind,device_num) bind(c)
integer(4),value::kind
integer(4),value::device_num
integer(4)::omp_pause_resource
end
end interface
interface
function omp_pause_resource_all(kind) bind(c)
integer(4),value::kind
integer(4)::omp_pause_resource_all
end
end interface
interface
function omp_get_supported_active_levels() bind(c)
integer(4)::omp_get_supported_active_levels
end
end interface
interface
subroutine omp_fulfill_event(event) bind(c)
integer(8),value::event
end
end interface
interface
subroutine omp_init_lock(svar) bind(c)
integer(8)::svar
end
end interface
interface
subroutine omp_destroy_lock(svar) bind(c)
integer(8)::svar
end
end interface
interface
subroutine omp_set_lock(svar) bind(c)
integer(8)::svar
end
end interface
interface
subroutine omp_unset_lock(svar) bind(c)
integer(8)::svar
end
end interface
interface
function omp_test_lock(svar) bind(c)
integer(8)::svar
logical(4)::omp_test_lock
end
end interface
interface
subroutine omp_init_nest_lock(nvar) bind(c)
integer(8)::nvar
end
end interface
interface
subroutine omp_destroy_nest_lock(nvar) bind(c)
integer(8)::nvar
end
end interface
interface
subroutine omp_set_nest_lock(nvar) bind(c)
integer(8)::nvar
end
end interface
interface
subroutine omp_unset_nest_lock(nvar) bind(c)
integer(8)::nvar
end
end interface
interface
function omp_test_nest_lock(nvar) bind(c)
integer(8)::nvar
integer(4)::omp_test_nest_lock
end
end interface
interface
function omp_get_max_task_priority() bind(c)
integer(4)::omp_get_max_task_priority
end
end interface
interface
subroutine omp_init_lock_with_hint(svar,hint) bind(c)
integer(8)::svar
integer(4),value::hint
end
end interface
interface
subroutine omp_init_nest_lock_with_hint(nvar,hint) bind(c)
integer(8)::nvar
integer(4),value::hint
end
end interface
interface
function omp_control_tool(command,modifier,arg) bind(c)
integer(4),value::command
integer(4),value::modifier
integer(8),optional::arg
integer(4)::omp_control_tool
end
end interface
interface
function omp_init_allocator(memspace,ntraits,traits)
use omp_lib_kinds,only:omp_alloctrait
integer(8)::memspace
integer(4)::ntraits
type(omp_alloctrait),intent(in)::traits(1_8:*)
integer(8)::omp_init_allocator
end
end interface
interface
subroutine omp_destroy_allocator(allocator) bind(c)
integer(8),value::allocator
end
end interface
interface
subroutine omp_set_default_allocator(allocator) bind(c)
integer(8),value::allocator
end
end interface
interface
function omp_get_default_allocator() bind(c)
integer(8)::omp_get_default_allocator
end
end interface
interface
subroutine omp_set_affinity_format(format)
character(*,1)::format
end
end interface
interface
function omp_get_affinity_format(buffer)
character(*,1)::buffer
integer(8)::omp_get_affinity_format
end
end interface
interface
subroutine omp_display_affinity(format)
character(*,1)::format
end
end interface
interface
function omp_capture_affinity(buffer,format)
character(*,1)::buffer
character(*,1)::format
integer(8)::omp_capture_affinity
end
end interface
interface
subroutine omp_set_num_teams(num_teams) bind(c)
integer(4),value::num_teams
end
end interface
interface
function omp_get_max_teams() bind(c)
integer(4)::omp_get_max_teams
end
end interface
interface
subroutine omp_set_teams_thread_limit(thread_limit) bind(c)
integer(4),value::thread_limit
end
end interface
interface
function omp_get_teams_thread_limit() bind(c)
integer(4)::omp_get_teams_thread_limit
end
end interface
interface
subroutine omp_display_env(verbose) bind(c)
logical(4),value::verbose
end
end interface
interface
function omp_target_alloc(size,device_num) bind(c)
use omp_lib_kinds,only:c_ptr
integer(8),value::size
integer(4),value::device_num
type(c_ptr)::omp_target_alloc
end
end interface
interface
subroutine omp_target_free(device_ptr,device_num) bind(c)
use omp_lib_kinds,only:c_ptr
type(c_ptr),value::device_ptr
integer(4),value::device_num
end
end interface
interface
function omp_target_is_present(ptr,device_num) bind(c)
use omp_lib_kinds,only:c_ptr
type(c_ptr),value::ptr
integer(4),value::device_num
integer(4)::omp_target_is_present
end
end interface
interface
function omp_target_memcpy(dst,src,length,dst_offset,src_offset,dst_device_num,src_device_num) bind(c)
use omp_lib_kinds,only:c_ptr
type(c_ptr),value::dst
type(c_ptr),value::src
integer(8),value::length
integer(8),value::dst_offset
integer(8),value::src_offset
integer(4),value::dst_device_num
integer(4),value::src_device_num
integer(4)::omp_target_memcpy
end
end interface
interface
function omp_target_memcpy_rect(dst,src,element_size,num_dims,volume,dst_offsets,src_offsets,dst_dimensions,src_dimensions,dst_device_num,src_device_num) bind(c)
use omp_lib_kinds,only:c_ptr
type(c_ptr),value::dst
type(c_ptr),value::src
integer(8),value::element_size
integer(4),value::num_dims
integer(8),intent(in)::volume(1_8:*)
integer(8),intent(in)::dst_offsets(1_8:*)
integer(8),intent(in)::src_offsets(1_8:*)
integer(8),intent(in)::dst_dimensions(1_8:*)
integer(8),intent(in)::src_dimensions(1_8:*)
integer(4),value::dst_device_num
integer(4),value::src_device_num
integer(4)::omp_target_memcpy_rect
end
end interface
interface
function omp_target_memcpy_async(dst,src,length,dst_offset,src_offset,dst_device_num,src_device_num,depobj_count,depobj_list) bind(c)
use omp_lib_kinds,only:c_ptr
type(c_ptr),value::dst
type(c_ptr),value::src
integer(8),value::length
integer(8),value::dst_offset
integer(8),value::src_offset
integer(4),value::dst_device_num
integer(4),value::src_device_num
integer(4),value::depobj_count
integer(8),optional::depobj_list(1_8:*)
integer(4)::omp_target_memcpy_async
end
end interface
interface
function omp_target_memcpy_rect_async(dst,src,element_size,num_dims,volume,dst_offsets,src_offsets,dst_dimensions,src_dimensions,dst_device_num,src_device_num,depobj_count,depobj_list) bind(c)
use omp_lib_kinds,only:c_ptr
type(c_ptr),value::dst
type(c_ptr),value::src
integer(8),value::element_size
integer(4),value::num_dims
integer(8),intent(in)::volume(1_8:*)
integer(8),intent(in)::dst_offsets(1_8:*)
integer(8),intent(in)::src_offsets(1_8:*)
integer(8),intent(in)::dst_dimensions(1_8:*)
integer(8),intent(in)::src_dimensions(1_8:*)
integer(4),value::dst_device_num
integer(4),value::src_device_num
integer(4),value::depobj_count
integer(8),optional::depobj_list(1_8:*)
integer(4)::omp_target_memcpy_rect_async
end
end interface
interface
function omp_target_memset(ptr,val,count,device_num) bind(c)
use,intrinsic::iso_c_binding,only:c_ptr
type(c_ptr),value::ptr
integer(4),value::val
integer(8),value::count
integer(4),value::device_num
type(c_ptr)::omp_target_memset
end
end interface
interface
function omp_target_memset_async(ptr,val,count,device_num,depobj_count,depobj_list) bind(c)
use,intrinsic::iso_c_binding,only:c_ptr
type(c_ptr),value::ptr
integer(4),value::val
integer(8),value::count
integer(4),value::device_num
integer(4),value::depobj_count
integer(8),optional::depobj_list(1_8:*)
type(c_ptr)::omp_target_memset_async
end
end interface
interface
function omp_target_associate_ptr(host_ptr,device_ptr,size,device_offset,device_num) bind(c)
use omp_lib_kinds,only:c_ptr
type(c_ptr),value::host_ptr
type(c_ptr),value::device_ptr
integer(8),value::size
integer(8),value::device_offset
integer(4),value::device_num
integer(4)::omp_target_associate_ptr
end
end interface
interface
function omp_get_mapped_ptr(ptr,device_num) bind(c)
use omp_lib_kinds,only:c_ptr
type(c_ptr),value::ptr
integer(4),value::device_num
type(c_ptr)::omp_get_mapped_ptr
end
end interface
interface
function omp_target_disassociate_ptr(ptr,device_num) bind(c)
use omp_lib_kinds,only:c_ptr
type(c_ptr),value::ptr
integer(4),value::device_num
integer(4)::omp_target_disassociate_ptr
end
end interface
interface
function omp_target_is_accessible(ptr,size,device_num) bind(c)
use omp_lib_kinds,only:c_ptr
type(c_ptr),value::ptr
integer(8),value::size
integer(4),value::device_num
integer(4)::omp_target_is_accessible
end
end interface
interface
function omp_alloc(size,allocator) bind(c)
use omp_lib_kinds,only:c_ptr
integer(8),value::size
integer(8),value::allocator
type(c_ptr)::omp_alloc
end
end interface
interface
function omp_aligned_alloc(alignment,size,allocator) bind(c)
use omp_lib_kinds,only:c_ptr
integer(8),value::alignment
integer(8),value::size
integer(8),value::allocator
type(c_ptr)::omp_aligned_alloc
end
end interface
interface
function omp_calloc(nmemb,size,allocator) bind(c)
use omp_lib_kinds,only:c_ptr
integer(8),value::nmemb
integer(8),value::size
integer(8),value::allocator
type(c_ptr)::omp_calloc
end
end interface
interface
function omp_aligned_calloc(alignment,nmemb,size,allocator) bind(c)
use omp_lib_kinds,only:c_ptr
integer(8),value::alignment
integer(8),value::nmemb
integer(8),value::size
integer(8),value::allocator
type(c_ptr)::omp_aligned_calloc
end
end interface
interface
function omp_realloc(ptr,size,allocator,free_allocator) bind(c)
use omp_lib_kinds,only:c_ptr
type(c_ptr),value::ptr
integer(8),value::size
integer(8),value::allocator
integer(8),value::free_allocator
type(c_ptr)::omp_realloc
end
end interface
interface
subroutine omp_free(ptr,allocator) bind(c)
use omp_lib_kinds,only:c_ptr
type(c_ptr),value::ptr
integer(8),value::allocator
end
end interface
interface
function omp_in_explicit_task() bind(c)
logical(4)::omp_in_explicit_task
end
end interface
interface
subroutine kmp_set_stacksize(size) bind(c)
integer(4),value::size
end
end interface
interface
subroutine kmp_set_stacksize_s(size) bind(c)
integer(8),value::size
end
end interface
interface
subroutine kmp_set_blocktime(msec) bind(c)
integer(4),value::msec
end
end interface
interface
subroutine kmp_set_library_serial() bind(c)
end
end interface
interface
subroutine kmp_set_library_turnaround() bind(c)
end
end interface
interface
subroutine kmp_set_library_throughput() bind(c)
end
end interface
interface
subroutine kmp_set_library(libnum) bind(c)
integer(4),value::libnum
end
end interface
interface
subroutine kmp_set_defaults(string) bind(c)
character(1_8,1)::string(1_8:*)
end
end interface
interface
function kmp_get_stacksize() bind(c)
integer(4)::kmp_get_stacksize
end
end interface
interface
function kmp_get_stacksize_s() bind(c)
integer(8)::kmp_get_stacksize_s
end
end interface
interface
function kmp_get_blocktime() bind(c)
integer(4)::kmp_get_blocktime
end
end interface
interface
function kmp_get_library() bind(c)
integer(4)::kmp_get_library
end
end interface
interface
subroutine kmp_set_disp_num_buffers(num) bind(c)
integer(4),value::num
end
end interface
interface
function kmp_set_affinity(mask) bind(c)
integer(8)::mask
integer(4)::kmp_set_affinity
end
end interface
interface
function kmp_get_affinity(mask) bind(c)
integer(8)::mask
integer(4)::kmp_get_affinity
end
end interface
interface
function kmp_get_affinity_max_proc() bind(c)
integer(4)::kmp_get_affinity_max_proc
end
end interface
interface
subroutine kmp_create_affinity_mask(mask) bind(c)
integer(8)::mask
end
end interface
interface
subroutine kmp_destroy_affinity_mask(mask) bind(c)
integer(8)::mask
end
end interface
interface
function kmp_set_affinity_mask_proc(proc,mask) bind(c)
integer(4),value::proc
integer(8)::mask
integer(4)::kmp_set_affinity_mask_proc
end
end interface
interface
function kmp_unset_affinity_mask_proc(proc,mask) bind(c)
integer(4),value::proc
integer(8)::mask
integer(4)::kmp_unset_affinity_mask_proc
end
end interface
interface
function kmp_get_affinity_mask_proc(proc,mask) bind(c)
integer(4),value::proc
integer(8)::mask
integer(4)::kmp_get_affinity_mask_proc
end
end interface
interface
function kmp_malloc(size) bind(c)
integer(8),value::size
integer(8)::kmp_malloc
end
end interface
interface
function kmp_aligned_malloc(size,alignment) bind(c)
integer(8),value::size
integer(8),value::alignment
integer(8)::kmp_aligned_malloc
end
end interface
interface
function kmp_calloc(nelem,elsize) bind(c)
integer(8),value::nelem
integer(8),value::elsize
integer(8)::kmp_calloc
end
end interface
interface
function kmp_realloc(ptr,size) bind(c)
integer(8),value::ptr
integer(8),value::size
integer(8)::kmp_realloc
end
end interface
interface
subroutine kmp_free(ptr) bind(c)
integer(8),value::ptr
end
end interface
interface
subroutine kmp_set_warnings_on() bind(c)
end
end interface
interface
subroutine kmp_set_warnings_off() bind(c)
end
end interface
interface
function kmp_get_cancellation_status(cancelkind) bind(c)
integer(4),value::cancelkind
logical(4)::kmp_get_cancellation_status
end
end interface
end
