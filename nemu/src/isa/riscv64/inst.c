#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>



#define Pcstar 0x80000000
#define RR(i) gpr(i)


#define Mr vaddr_read
#define Mw vaddr_write
#define Nextpc  s->dnpc
#define pc_dest s->pc
#define Pc      cpu.pc 
enum {
  TYPE_I, TYPE_II, TYPE_U , TYPE_S, TYPE_R,
  TYPE_N, TYPE_J, TYPE_B, TYPE_CSR,  // none
};
#define	GET_BIT(x, bit)	((x & (1 << bit)) >> bit)	/* Get one bit */

#define src1R(n) do { *src1 = RR(n); } while (0)
#define src2R(n) do { *src2 = RR(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)
uint32_t zimm;

static uint64_t ecall(uint64_t a7){
  //printf("mstatus %lx a7:%lx,a0:%lx,a1:%lx,a2:%lx \n",SR_mstatus,a7,RR(10),RR(11),RR(12));
  // if(BITS(SR_mstatus,12,11)==1){      //iqr
  //   return 9;
  // }
  // else if (BITS(SR_mstatus,12,11)==3)
  // {
  //   return a7;
  // }
if(0<a7&&a7<=19)return 1;
else if(a7<0)return -1;
else return a7;
  
}
static word_t immzimm (uint32_t i) { return BITS(i, 19, 15); }
static word_t immI (uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immII(uint32_t i) { return SEXT(BITS(i, 25, 20), 6);  }
static word_t immU (uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS (uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immJ (uint32_t i) { return ((((((SEXT(BITS(i, 31, 31), 1) << 8)| BITS(i, 19, 12))<<1| BITS(i, 20, 20)) <<10 | BITS(i, 30, 21)))<<1);}
static word_t immB (uint32_t i) { return ((((((SEXT(BITS(i, 31, 31), 1) << 1)| BITS(i, 7, 7))<<6  | BITS(i, 30, 25)) <<4  | BITS(i, 11, 8)))<<1);}

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t i = s->isa.inst.val;
  //printf("dest:%08lx,imm:%08x\n",s->pc,i);      //打印当前执行的指令值
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);
  switch (type) {
    case TYPE_I: src1R(rs1);  src2I(immI(i)); break;
    case TYPE_CSR:src1R(rs1);  src2I(immI(i)); zimm=immzimm(i); break;
    case TYPE_II:src1R(rs1);  src2I(immII(i)); break;
    case TYPE_U: src1I(immU(i)); break;
    case TYPE_R: src1R(rs1);  src2R(rs2); break;
    case TYPE_S: destI(immS(i)); src1R(rs1); src2R(rs2); 
                 break;
    case TYPE_J: src2I(immJ(i));   
                 //printf("jdr:%lx,r:%d\n",*src1,rd); 
                 break;
    case TYPE_B: destI(immB(i));  src1R(rs1); src2R(rs2);  break;
    
  }
  //printf("dest:%d ,src1:0x%lx ,scr2:0x%lx \n",rd,*src1,*src2);
}

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;
  uint64_t t = 0;
#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();

  //RV32I i-type
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", LUI       , U , RR(dest) = src1 );
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", AUIPC     , U , RR(dest) = (src1 + Pc));
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", ADDI      , I , RR(dest) = ((sword_t)src1 + src2));
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", ANDI      , I , RR(dest) = (src1 & src2));
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ORI       , I , RR(dest) = (src1 | src2));
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", XORI      , I , RR(dest) = (src1 ^ src2));
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", SLTIU     , I , if(src1 < src2){RR(dest) = 1;} else{RR(dest) = 0;});
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", SLTI      , I , if((sword_t)src1 < (sword_t)src2){RR(dest) = 1;} else{RR(dest) = 0;});

  //RV32I  Imm
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", SRAI      , II, RR(dest) = ((sword_t)src1 >> src2););
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", SLLI      , II, RR(dest) = (src1 << src2););
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", SRLI      , II, RR(dest) = (src1 >> src2););
  INSTPAT("0100000 ????? ????? 101 ????? 00110 11", SRAIW     , II, if(GET_BIT(src2,5)==0){RR(dest) = SEXT((sword_t)BITS(src1,31,0)>> (sword_t)src2,32);});
  INSTPAT("0000000 ????? ????? 101 ????? 00110 11", SRLIW     , II, if(GET_BIT(src2,5)==0){RR(dest) = SEXT(BITS(src1,31,0)>> src2 ,32);});
  INSTPAT("0000000 ????? ????? 001 ????? 00110 11", SLLIW     , II, if(GET_BIT(src2,5)==0){RR(dest) = SEXT(BITS(src1,31,0)<< src2 ,32);});

  //RV64I Imm shift
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", ADDIW     , I , RR(dest) = SEXT(BITS((sword_t)src1 + src2,31,0),32));
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", ADDW      , R , RR(dest) = SEXT(BITS(((sword_t)src1 + (sword_t)src2),31,0),32));
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", SUBW      , R , RR(dest) = SEXT(BITS(((sword_t)src1 - (sword_t)src2),31,0),32));
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", SLLW      , R , RR(dest) = SEXT(BITS((src1 << (BITS(src2,4,0))),31,0),32));
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", SRLW      , R , RR(dest) = SEXT(BITS(((BITS(src1,31,0)) >> (BITS(src2,4,0))),31,0),32));
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", SRAW      , R , RR(dest) = SEXT(BITS((((int)(BITS(src1,31,0))) >> (BITS(src2,4,0))),31,0),32));
  //Load
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", LB        , I , RR(dest) = SEXT(Mr(src1 + src2,1),8));
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", LBU       , I , RR(dest) = Mr(src1 + src2,1));
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", LH        , I , RR(dest) = SEXT(Mr(src1 + src2,2),16));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", LHU       , I , RR(dest) = Mr(src1 + src2,2));
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", LW        , I , RR(dest) = SEXT(Mr(src1 + src2,4),32));
  INSTPAT("??????? ????? ????? 110 ????? 00000 11", LWU       , I , RR(dest) = Mr(src1 + src2,4));
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", LD        , I , RR(dest) = Mr(src1 + src2,8));

  //RV32I    R-type 
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", ADD       , R , RR(dest) = ((sword_t)src1 + (sword_t)src2));
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", SUB       , R , RR(dest) = ((sword_t)src1 - (sword_t)src2));
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", SLT       , R , if((sword_t)src1 < (sword_t)src2){RR(dest)=1;} else{RR(dest)=0;});
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", SLTU      , R , if(src1 < src2){RR(dest)=1;} else{RR(dest)=0;});
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", AND       , R , RR(dest) = (src1 & src2));
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", OR        , R , RR(dest) = (src1 | src2));
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", SLL       , R , RR(dest) = (src1 << src2));
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", SRA       , R , RR(dest) = (((sword_t)src1) >> BITS(src2,5,0)));
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", SRL       , R , RR(dest) = (src1 >> (BITS(src2,5,0))));
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", XOR       , R , RR(dest) = (src1 ^ src2));
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", XOR       , R , RR(dest) = (src1 ^ src2));

  //RV32 64 M-type
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", MUL       , R , RR(dest) = ((sword_t)src2 * (sword_t)src1));
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", MULH      , R , RR(dest) = (((sword_t)src2 * (sword_t)src1))>>32);
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", MULW      , R , RR(dest) = SEXT(BITS((sword_t)src2 * (sword_t)src1,31,0),32));
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", REM       , R , RR(dest) = ((sword_t)src1 % (sword_t)src2));
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", REMU      , R , RR(dest) = (src1 % src2));
  INSTPAT("0000001 ????? ????? 111 ????? 01110 11", REMUW     , R , RR(dest) = SEXT(BITS(src1,31,0)%(BITS(src2,31,0)),32));
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", REMW      , R , RR(dest) = SEXT((sword_t)BITS(src1,31,0)%((sword_t)BITS(src2,31,0)),32));
  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", DIV       , R , RR(dest) = ((sword_t)src1 / (sword_t)src2));
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", DIVU      , R , RR(dest) = (src1 / src2));
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", DIVW      , R , RR(dest) = SEXT((((sword_t)BITS(src1,31,0)) / (sword_t)BITS(src2,31,0)),32));
  INSTPAT("0000001 ????? ????? 101 ????? 01110 11", DIVUW     , R , RR(dest) = SEXT(((BITS(src1,31,0)) / BITS(src2,31,0)),32));

  //conditional branching
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", BEQ       , B, if(src1 == src2){Nextpc = Pc+dest;});
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", BNE       , B, if(src1 != src2){Nextpc = Pc+dest;});
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", BLT       , B, if((sword_t)src1 < (sword_t)src2) {Nextpc = Pc+dest;});
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", BLTU      , B, if(src1 < src2) {Nextpc = Pc+dest;});
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", BGE       , B, if((sword_t)src1 >= (sword_t)src2){Nextpc = Pc+dest;});
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", BGEU      , B, if(src1 >= src2){Nextpc = Pc+dest;});
  //Store     
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", SD        , S , Mw(src1 + dest, 8, src2));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", SW        , S , Mw(src1 + dest, 4, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", SH        , S , Mw(src1 + dest, 2, src2));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", SB        , S , Mw(src1 + dest, 1, src2));
  //Jar
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", JAL       , J , RR(dest) = Pc +4; Nextpc = src2+Pc; 
                                                                    //printf("pc:%08lx;jal:%08lx\n",Pc +4,Nextpc) ; 
                                                                    );
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", JALR\ret  , I , RR(dest) = Pc +4; Nextpc = ((src1+src2)&(~1)); 
                                                                    //printf("pc:%08lx,jalr:%08lx\n",Pc,Nextpc) ;
                                                                    );
  //CSR
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ECALL     , I , SR_mepc=Pc+4;SR_mcause=ecall(RR(17));Nextpc=isa_raise_intr(SR_mcause,Pc));
  INSTPAT("0011000 00010 00000 000 00000 11100 11", MRET      , I , Nextpc=SR_mepc);//printf("break a0:%lx\n",RR(10));
  
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", CSRRW     , CSR , t=SRs[src2];SRs[src2]=src1;RR(dest)=t);
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", CSRRS     , CSR , t=SRs[src2];SRs[src2]=(t|src1);RR(dest)=t;);
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", CSRRC     , CSR , t=SRs[src2];SRs[src2]=t&(~src1);RR(dest)=t);
  INSTPAT("??????? ????? ????? 110 ????? 11100 11", CSRRCI    , CSR , t=SRs[src2];SRs[src2]=(t|zimm);RR(dest)=t); 
  INSTPAT("??????? ????? ????? 101 ????? 11100 11", CSRRWI    , CSR , t=SRs[src2];SRs[src2]=zimm);
  INSTPAT("??????? ????? ????? 111 ????? 11100 11", CSRRI     , CSR , t=SRs[src2];SRs[src2]=(t&(~zimm));RR(dest)=t);
  //end                    
  INSTPAT("0000000 00001 00000 000 00000 11100 11", EBREAK    , N , NEMUTRAP(s->pc, RR(10))); // R(10) is $a0
  //error
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv       , N , INV(s->pc));

  INSTPAT_END();

  RR(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
