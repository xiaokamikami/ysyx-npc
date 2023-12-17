#ifndef __RISCV64_REG_H__
#define __RISCV64_REG_H__

#include <common.h>

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}
static inline int check_csr_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 6));
  return idx;
}
void csrW(word_t csr, word_t data);
word_t csrR(word_t csr);
word_t csrR_id(int id);
void csrW_id(int id, word_t data);
typedef enum {
    mstatus=1, mie, mtvec , mepc, mcause, mip , csr_size=6
}csr_id;

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])
#define csr(idx) (cpu.csrs[idx])





static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

#endif
