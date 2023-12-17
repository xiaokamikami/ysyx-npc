#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  //printf("REF:%08lx,PC:%08lx\n",ref_r->pc,pc);
  for (uint16_t i = 0; i < 32; i++)
  {
    if(ref_r->gpr[i] != cpu.gpr[i]){
      printf("difftest:gpr error!DNPC:%08lx\t",ref_r->pc);
      printf(ANSI_FMT("ref_r[%s]: %16lx , dut_r[%s]:%16lx\n",ANSI_FG_RED), reg_name(i,0),ref_r->gpr[i],reg_name(i,0), cpu.gpr[i]);
      return false;
    }
  }
  if(ref_r->pc != pc){
    printf("difftest:pc error!DNPC:%08lx\t",ref_r->pc);
    printf(ANSI_FMT("ref_pc:%08lx , dut_pc:%08lx\n",ANSI_FG_RED),ref_r->pc, pc);
    return false;
  }


    return true;

}

void isa_difftest_attach(CPU_state *ref_r) {

}
