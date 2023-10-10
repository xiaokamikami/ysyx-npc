STUID = ysyx_22041412
STUNAME = ???
INC_PATH ?=
export MAKEFLAGS += -j$(nproc)
# Include all filelist.mk to merge file lists
FILELIST_MK = $(shell find ./csrc -name "filelist.mk")
include $(FILELIST_MK)

TOPNAME = ysyx_22041412_top
OBJ_DIR = /obj_dir/*.*
BIN = $(NPC_HOME)/vsrc/$(TOPNAME)

# project source
VSRCS += $(NPC_HOME)/vsrc/ysyx_22041412*.*v
CSRCS = $(shell find $(abspath ./csrc) -name "*.cpp" -or -name "*.cc")
CSRCS_H = $(shell find $(abspath ./csrc) -name "*.h")
VSRCS_INC = $(shell find $(abspath ./vsrc) -name "ysyx_22041412*.v")
#--threads {$(2)}
#prof是手册里的一个多线程优化功能，加上后跑一次程序，会输出一个.vlt文件， 有文件之后可以关闭prof，然后把文件加入编译选项，可以提高多线程运行的效率,修改verilog后需要重新生成
#rules for verilator
VERILATOR_FLAGS += -MMD --build -cc --exe --trace-fst --threads 6 \
	-O3 --x-assign fast --x-initial fast --noassert \
	--timescale "1ns/1ns"
#micro.vlt pal.vlt
#--prof-pgo profile.vlt

 
# rules for verilator

LDFLAGS += "-lSDL2 -lLLVM-11 -ldl"

#-CFLAGS -g
build:$(VSRCS) $(CSRCS) $(CSRCS_H)
	-@rm -rf $(OBJ_DIR)
	verilator $(VERILATOR_FLAGS) -j 6 --top-module $(TOPNAME) \
		$(VSRCS_INC) $(CSRCS) -LDFLAGS $(LDFLAGS) 

compile: 
	make -C $(NPC_HOME)/obj_dir -j6 -f V$(TOPNAME).mk  V$(TOPNAME) 

run:
	./obj_dir/Vysyx_22041412_top $(NEMU_HOME) $(NPC_HOME)

clean:
	rm obj_dir/*

all:
#python3 Immobj.py
#make clean 
	make build -s 
	make compile -s 
	make run -s -j6
	$(call git_commit, "sim RTL") 
	# verilator END 
# DO NOT REMOVE THIS LINE!!!
