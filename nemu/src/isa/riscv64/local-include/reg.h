#ifndef __RISCV64_REG_H__
#define __RISCV64_REG_H__

#include <common.h>

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])


extern word_t csr_regs[4];
#define SR_mstatus csr_regs[0]
#define SR_mtvec csr_regs[1]
#define SR_mepc csr_regs[2]
#define SR_mcause csr_regs[3]



static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

#endif
