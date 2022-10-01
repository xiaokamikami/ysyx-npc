STUID = ysyx_22041412
STUNAME = ???
INC_PATH ?=

# Include all filelist.mk to merge file lists
FILELIST_MK = $(shell find ./csrc -name "filelist.mk")
include $(FILELIST_MK)
LIBS = -L ./csrc/*.h
LLVM_CXXFLAGS = $(shell llvm-config-11 --cxxflags)
LLVM_LIBS = $(shell llvm-config-11 --libs)
all:
	make sim
	python3 Immobj.py
	make build 
	make compile 
	make run 	
	
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

objects = main.o verilated_vcd_c.o 
TOPNAME = ysyx_22041412_cpu
OBJ_DIR = /obj_dir/*.*
NPC_HOME = /home/kami/ysyx-workbench/npc
BIN = $(NPC_HOME)/vsrc/$(TOPNAME)
# project source
VSRCS += $(NPC_HOME)/vsrc/ysyx_22041412_*.*v
CSRCS = $(shell find $(abspath $(NPC_HOME)/csrc) -name "*.cpp" -or -name "*.cc")
#rules for verilator
VERILATOR_FLAGS += -MMD --build -cc --exe --trace \
	-O3 --x-assign fast --x-initial fast --noassert \
	--timescale "1ns/1ns"  
# rules for verilator
INCFLAGS += $(addprefix -Ldir, $(VSRCS))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
LDFLAGS += -ldl -lSDL2 -lSDL2_image


build:
	-@rm -rf $(OBJ_DIR)
	verilator $(VERILATOR_FLAGS) --top-module $(TOPNAME) \
		vsrc/ysyx_22041412_*.v $(CSRCS) $(addprefix -LDFLAGS , $(LLVM_CXXFLAGS))\
		$(addprefix -LDFLAGS , $(LLVM_LIBS)) -LDFLAGS -ldl 

compile: 
	make -C $(NPC_HOME)/obj_dir -j -f V$(TOPNAME).mk V$(TOPNAME)

run:
	obj_dir/Vysyx_22041412_cpu

clean:
	rm obj_dir/*.*
