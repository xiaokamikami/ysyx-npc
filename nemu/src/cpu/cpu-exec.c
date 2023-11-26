#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include <stdlib.h>

#include "../monitor/sdb/sdb.h"
/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 128
//#define CONFIG_WATCHPOINT 

extern int is_exit_status_bad();
CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
extern WP wp_pool[NR_WP];

extern bool ftrace_flag;
extern uint64_t elf_count;

void device_update();
uint8_t END_flag = 0;

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_WATCHPOINT
  int i=0;
  while (i < NR_WP)
  {
    if(wp_pool[i].sate !=0){
      //printf("Address:%p ",&wp_pool[i]);
      if (strstr(wp_pool[i].TAG,"$")!=NULL){printf(ANSI_FMT("Point %d : %s ", ANSI_FG_BLUE)ANSI_FMT("Watch Point  = 0x%lx\n", ANSI_FG_GREEN) , wp_pool[i].NO , wp_pool[i].TAG,expr(wp_pool[i].TAG));}
      else {Log(ANSI_FMT("Point %d : %s ", ANSI_FG_BLUE)ANSI_FMT("Watch Point  = %ld", ANSI_FG_GREEN) , wp_pool[i].NO , wp_pool[i].TAG,expr(wp_pool[i].TAG));}
    }
    i++;
  }
#endif

#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("     %s\n", _this->logbuf); }
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
#endif 

  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->dnpc, dnpc));
}


void ftrace(size_t dnpc,size_t thpc);
#ifdef CONFIG_FTRACE
void ftrace(size_t dnpc,size_t thpc){
  FILE * out ;    //�������ü�¼
  FILE * read;
  uint16_t FUNC_count=0;
  size_t rtl_flag[128]={0}; //��ת���ص��¼
  char buf[128]={0};
  char *temp =  buf;
  char nextpc[32]={0};
  sprintf(nextpc,"%16.16lx",dnpc);
  read = fopen("/home/kami/ysyx-workbench/nemu/build/elf-ftrace.txt","r");
  out  = fopen("/home/kami/ysyx-workbench/nemu/build/elf-function.txt","a");
  char param[1024][32]={0};
  char *ret;
  for (uint16_t i = 0; i < elf_count+2; i++)
  {
    if(fscanf(read,"%[^\n]",temp)!=EOF && i>2){  //Num:   Value   Size   Type    Bind    Vis   Ndx  Name
      fgetc(read);
      char *result = NULL;
      int count=0; 
      result = strtok( buf, ",");  
      while( result != NULL ) {  
        //printf( "result is \"%s\"\n", result );
        strcpy(param[count],result); 
        result = strtok( NULL,"," ); 
        count++; 
      }
      uint16_t c=0;
      //printf("num:%s,val:%s,size:%s,type:%s,bind:%s,vis:%s,ndx:%s,name:%s\n",param[0],param[1],param[2],param[3],param[4],param[5],param[6],param[7]);
      for (size_t ls = FUNC_count; ls>0; ls--)
      {
        if(rtl_flag[ls] == dnpc){
          fprintf(out,"0x%16.16lx",thpc);
          for (uint16_t j = 0; j <ls; j++)
          {
            fprintf(out,"%s","  ");
          }
          fprintf(out," RAT[%s @ 0x%08lx ]\n",param[7],dnpc);
          rtl_flag[ls] = 0;
          FUNC_count =FUNC_count - c;
          goto clear;
        }
        c++;
      }
      
      
      if(((ret = strstr(param[1],nextpc))!=NULL) && ((ret = strstr(param[3],"FUNC"))!=NULL) ){
        fprintf(out,"0x%16.16lx",thpc);
        size_t val = thpc+4;
        rtl_flag[FUNC_count] =  val;//��¼���ص�
        for (uint16_t j = 0; j < FUNC_count; j++)
        {
          fprintf(out,"%s","  ");
        }
        fprintf(out," CALL[%s @ 0x%s]\n",param[7],param[1]);
        FUNC_count++;
        //printf("\n\tval:%08lx \t call:%s,",rtl_flag[FUNC_count-1],param[1]); 
        //printf("Fcount:%d \n",FUNC_count);
        goto clear;  
      }
      //if(FUNC_count >512){printf("�ݹ�̫�౬ջ");exit(-1);}
      count++;
    } 
  }
  //printf("pc:%lx,%lx\n",thpc,dnpc);
  clear: 
  fclose(out);
  fclose(read);
}
#endif

static void exec_once(Decode *s, vaddr_t pc) {

  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
  //printf("exec6\n");

  #ifdef CONFIG_FTRACE  

    ftrace(s->dnpc,s->pc);

  #endif

#ifdef CONFIG_ITRACE

  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
#endif
}

static void execute(uint64_t n) {
  Decode s;
  //if(END_flag !=1){
    //exec_once(&s, cpu.pc);
    //n--;
  //}

  for (;n > 0; n --) {
    if (nemu_state.state == NEMU_RUNNING) {
      exec_once(&s, cpu.pc);
      //printf("pc:%lx \t",cpu.pc);
      trace_and_difftest(&s, cpu.pc);
      g_nr_guest_inst ++;
    }
    else if ((END_flag ==1)){
      //exec_once(&s, cpu.pc);
      printf("npc:%lx,pc:%lx",s.dnpc, cpu.pc);
      trace_and_difftest(&s, cpu.pc);
    }
    else{
      //printf("ERROR:%lx\n",cpu.pc);
      //log_write("---> %s\n",s.logbuf);
      return;
    }

    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  printf("pc :0x %lx\n",cpu.pc);
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);
  //printf("state:%d,ret:%d",nemu_state.state, nemu_state.halt_ret);
  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;
    case NEMU_END: case NEMU_ABORT:
      //printf("ret:%d\n",nemu_state.halt_ret);
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      if (nemu_state.state == NEMU_ABORT){ 
        END_flag = 1;
        exit(-1);
        break;
      }
      // fall through
    case NEMU_QUIT:
      nemu_state.state = NEMU_STOP;    //cpu set quit
      statistic();
      break;
    case NEMU_STOP:
      is_exit_status_bad();
      break;
  }
}
