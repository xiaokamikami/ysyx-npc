# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vysyx_22041412_top.mk

default: Vysyx_22041412_top

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vysyx_22041412_top
# Module prefix (from --prefix)
VM_MODPREFIX = Vysyx_22041412_top
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lSDL2 -lLLVM-11 -ldl \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	axi4 \
	device \
	map \
	mmio \
	port-io \
	keyboard \
	vga \
	difftest \
	memory \
	fifo \
	main \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/kami/ysyx-workbench/npc/csrc \
	/home/kami/ysyx-workbench/npc/csrc/device \
	/home/kami/ysyx-workbench/npc/csrc/device/io \
	/home/kami/ysyx-workbench/npc/csrc/difftests \


### Default rules...
# Include list of all generated classes
include Vysyx_22041412_top_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

axi4.o: /home/kami/ysyx-workbench/npc/csrc/axi4.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device.o: /home/kami/ysyx-workbench/npc/csrc/device/device.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
map.o: /home/kami/ysyx-workbench/npc/csrc/device/io/map.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/kami/ysyx-workbench/npc/csrc/device/io/mmio.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
port-io.o: /home/kami/ysyx-workbench/npc/csrc/device/io/port-io.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
keyboard.o: /home/kami/ysyx-workbench/npc/csrc/device/keyboard.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vga.o: /home/kami/ysyx-workbench/npc/csrc/device/vga.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: /home/kami/ysyx-workbench/npc/csrc/difftests/difftest.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
memory.o: /home/kami/ysyx-workbench/npc/csrc/difftests/memory.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
fifo.o: /home/kami/ysyx-workbench/npc/csrc/fifo.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/kami/ysyx-workbench/npc/csrc/main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vysyx_22041412_top: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
