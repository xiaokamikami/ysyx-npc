# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vysyx_22041412_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vysyx_22041412_top \
	Vysyx_22041412_top___024root__DepSet_ha7cb4ecf__0 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__0 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__1 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__2 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__3 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__4 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__5 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__6 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__7 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__8 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__9 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__10 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__11 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__12 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__13 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__14 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__15 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__16 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__17 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__18 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__19 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__20 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__21 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__22 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__23 \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__24 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vysyx_22041412_top__ConstPool_0 \
	Vysyx_22041412_top___024root__Slow \
	Vysyx_22041412_top___024root__DepSet_ha7cb4ecf__0__Slow \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__0__Slow \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__1__Slow \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__2__Slow \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__3__Slow \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__4__Slow \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__5__Slow \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__6__Slow \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__7__Slow \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__8__Slow \
	Vysyx_22041412_top___024root__DepSet_h2f0f227f__9__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vysyx_22041412_top__Dpi \
	Vysyx_22041412_top__Trace__0 \
	Vysyx_22041412_top__Trace__1 \
	Vysyx_22041412_top__Trace__2 \
	Vysyx_22041412_top__Trace__3 \
	Vysyx_22041412_top__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vysyx_22041412_top__Syms \
	Vysyx_22041412_top__Trace__0__Slow \
	Vysyx_22041412_top__Trace__1__Slow \
	Vysyx_22041412_top__Trace__2__Slow \
	Vysyx_22041412_top__Trace__3__Slow \
	Vysyx_22041412_top__Trace__4__Slow \
	Vysyx_22041412_top__Trace__5__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
