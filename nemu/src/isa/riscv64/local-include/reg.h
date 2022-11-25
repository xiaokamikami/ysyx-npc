#ifndef __RISCV64_REG_H__
#define __RISCV64_REG_H__

#include <common.h>

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])


extern uint64_t SRs[4096];
#define SR_mstatus SRs[0x300]
#define SR_mepc SRs[0x341]
#define SR_mcause SRs[0x342]
#define SR_mtvec SRs[0x305]


static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

#endif
