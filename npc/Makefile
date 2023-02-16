STUID = ysyx_22041412
STUNAME = ???
INC_PATH ?=
export MAKEFLAGS += -j$(nproc)
# Include all filelist.mk to merge file lists
FILELIST_MK = $(shell find ./csrc -name "filelist.mk")
include $(FILELIST_MK)

TOPNAME = ysyx_22041412_top
OBJ_DIR = /obj_dir/*.*
NPC_HOME = /home/kami/ysyx-workbench/npc
BIN = $(NPC_HOME)/vsrc/$(TOPNAME)

# project source
VSRCS += $(NPC_HOME)/vsrc/ysyx_22041412_*.*v
CSRCS = $(shell find $(abspath ./csrc) -name "*.cpp" -or -name "*.cc")
CSRCS_H = $(shell find $(abspath ./csrc) -name "*.h")
VSRCS_INC = $(shell find $(abspath ./vsrc) -name "ysyx_22041412*.v")
#--threads {$(2)}
#rules for verilator
VERILATOR_FLAGS += -MMD --build -cc --exe --trace --threads {$(2)}\
	-O3 --x-assign fast --x-initial fast --noassert \
	--timescale "1ns/1ns" 

 
# rules for verilator

LDFLAGS += "-lSDL2 -lLLVM-11 -ldl"


build:$(VSRCS) $(CSRCS) $(CSRCS_H)
	-@rm -rf $(OBJ_DIR)
	verilator $(VERILATOR_FLAGS) --top-module $(TOPNAME) \
		$(VSRCS_INC) $(CSRCS) -LDFLAGS $(LDFLAGS)

compile: 
	make -C $(NPC_HOME)/obj_dir -j -f V$(TOPNAME).mk  V$(TOPNAME) 

run:
	./obj_dir/Vysyx_22041412_top

clean:
	rm obj_dir/*.*

all:
#python3 Immobj.py
#make clean 
	make build -s
	make compile -s
	make run
#$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
