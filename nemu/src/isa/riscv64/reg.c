#include <isa.h>
#include "local-include/reg.h"
uint64_t SRs[4096];
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6",
};

const char *CSRs[] = {
  "mcause","mstatus","mepc","mtvec",
};

void isa_reg_display() {
  int i;
  //printf("%s",reg_name(2,0));
  for(i=0;i<32;i+=4){
    printf("%s  :0x%16lx,",regs[i],gpr(i));
    printf("    %s  :0x%16lx,",regs[i+1],gpr(i+1));
    printf("    %s  :0x%16lx,",regs[i+2],gpr(i+2));
    printf("    %s  :0x%16lx;\n",regs[i+3],gpr(i+3));
  }
  printf("%s  :0x%16lx;\n",CSRs[0],SR_mcause);
  printf("%s  :0x%16lx;\n",CSRs[1],SR_mstatus);
  printf("%s  :0x%16lx;\n",CSRs[2],SR_mepc);
  printf("%s  :0x%16lx;\n",CSRs[3],SR_mtvec);
}

word_t isa_reg_str2val(const char *s, bool *success) {
  int i;
  s = s+1;
  //printf("find: %s\n",s);
  for (i=0;i<32;i++){
    //printf("reg:%s\n",regs[i]);
    if(!strcmp(regs[i],s)){
      *success = true;
      //printf("find true\n");
      return  gpr(i);
      }
  }
  //printf("find error");
  success= false;
  return 0;
}
