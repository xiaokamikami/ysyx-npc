include $(AM_HOME)/scripts/isa/riscv64.mk

AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/gpu.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

NPC_HOME = /home/kami/ysyx-workbench/npc
VSRCS += $(NPC_HOME)/vsrc/ysyx_22041412_*.v
VSRCS += $(NPC_HOME)/resource/*.hex
INCFLAGS += $(addprefix -Ldir, $(VSRCS))

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@$(OBJDUMP) -d $(IMAGE).elf > $(NPC_HOME)/resource/test.txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin
	@cp $(IMAGE_REL).bin $(NPC_HOME)/resource/Imm.bin
run: image
	$(MAKE) -C $(NPC_HOME) all
