#include <isa.h>
#include <utils.h>
#include <cpu/ifetch.h>
#include <locale.h>
#include <stdlib.h>
#include "/home/kami/ysyx-workbench/nemu/src/isa/riscv64/local-include/reg.h"

void irqtrace(word_t NO,word_t epc,word_t mtvec);
word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  if(NO<999){ 
      irqtrace(NO,epc,SR_mtvec);
      return SR_mtvec;
  }
  return 0;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}


void irqtrace(word_t NO,word_t epc,word_t mtvec){
  FILE * out ;    //中断调用记录
  out  = fopen("/home/kami/ysyx-workbench/nemu/build/elf-handle.txt","a");
  fprintf(out,"NO:0x%lx, epc:0x%lx, mtvec:0x%lx \n",NO,epc,mtvec);
  fclose(out);
}