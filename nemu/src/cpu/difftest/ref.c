#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

// DUT buf,REF addr
void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    printf("addr:%x,imm:%lx\n",addr,(word_t )buf);
    memcpy(guest_to_host(addr), buf, n);
  } else if(direction == DIFFTEST_TO_DUT){ 
    paddr_read(addr,n);
  }else{
    assert(0);
  }
}

void difftest_regcpy(CPU_state *dut, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    for (uint16_t i = 0; i < 32; i++)
    {
     cpu.gpr[i] = dut->gpr[i];
    }
    cpu.pc = dut->pc;
  } else if(direction == DIFFTEST_TO_DUT){
    for (uint16_t i = 0; i < 32; i++)
    {
     dut->gpr[i] = cpu.gpr[i]; 
    }
    dut->pc =cpu.pc;
  }else{
    assert(0);
  }
  
}

void difftest_exec(uint64_t n) {
  //printf("exec\n");
  cpu_exec(n);

}

void difftest_raise_intr(word_t NO) {
  if (NO) {

  }else{
    assert(0);
  }

}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  cpu.pc = RESET_VECTOR;
  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
}

