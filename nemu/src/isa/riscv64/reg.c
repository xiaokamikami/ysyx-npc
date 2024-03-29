#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6",
};

const char *csrs[] = {
  "mcause","mstatus","mepc","mtvec",
};
const word_t csrindexs[] = {
  0x300, 0x305, 0x341, 0x342, 
};
word_t csr_regs[4]={0xa00001800,0,0,0};

void isa_reg_display() {
  int i;
  //printf("%s",reg_name(2,0));
  for(i=0;i<32;i+=4){
    printf("%d-%s  :0x%16lx,",i,regs[i],gpr(i));
    printf("    %d-%s  :0x%16lx,",i+1,regs[i+1],gpr(i+1));
    printf("    %d-%s  :0x%16lx,",i+2,regs[i+2],gpr(i+2));
    printf("    %d-%s  :0x%16lx;\n",i+3,regs[i+3],gpr(i+3));
  }
  printf("%s  :0x%16lx;\n",csrs[0],SR_mcause);
  printf("%s  :0x%16lx;\n",csrs[1],SR_mstatus);
  printf("%s  :0x%16lx;\n",csrs[2],SR_mepc);
  printf("%s  :0x%16lx;\n",csrs[3],SR_mtvec);
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

word_t csrindex(char* s)
{
  for(int i=0;i<4;i++)
  {
    if(strcmp(s,csrs[i])==0)
      return csrindexs[i];
  }
	return -1;
}
word_t csrR(word_t csr)
{
	int i=-1;
	/*printf("csr=%lx",csr);*/
	switch(csr)
	{
		case 0x300:
			i=0;
			break;
		case 0x305:
			i=1;
			break;
		case 0x341:
			i=2;
			break;
		case 0x342:
			i=3;
			break;
		default:
			Assert(0,"wrong csr!\n");
	}
	return csr_regs[i];
}

void csrW(word_t csr, word_t data)
{
	int i=-1;
	/*printf("csr=%lx",csr);*/
	switch(csr)
	{
		case 0x300:
			i=0;
			break;
		case 0x305:
			i=1;
			break;
		case 0x341:
			i=2;
			break;
		case 0x342:
			i=3;
			break;
		default:
			Assert(0,"wrong csr!\n");
	}
	csr_regs[i]=data;
}