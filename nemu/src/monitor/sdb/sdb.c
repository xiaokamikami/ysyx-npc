#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <memory/paddr.h>
#include "sdb.h"
//#include "/home/kami/ysyx-workbench/nemu/src/isa/riscv32/local-include/reg.h"
static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
WP *WatchP;
/* We use the `readline' library to provide more flexibility to read from stdin. */


static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

//*********cmd***********
static int cmd_XEXPR(char *args){
  int n;
  int i=0;
  vaddr_t wp;
  //char *order;
  char *arg1 = strtok(NULL," ");
  sscanf(arg1,"%d",&n);
  char *arg2 = strtok(NULL," ");
  sscanf(arg2,"%lx",&wp);
  //printf("Num:%d Addr:%lx\nStart:\n",n,wp);
  for(;n>=1;n=n-4){
    i=i+4;
    printf("Addr:0x:%lx Rom:0x%08lx\n",wp+i,paddr_read(wp+i,4));
  }

  return 0;
}

static int cmd_PEXPR(char *args){
  word_t result;
  //init_sdb();
  result = expr(args);
  printf("result:%ld\n",result);
  return 0;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_watch(char *args) {
  char *arg = strtok(NULL, " ");

  WatchP = new_wp();
  strcpy( WatchP->TAG ,arg);
  //get_wp();
  printf("Add watch point %d : %s\n",WatchP->NO,WatchP->TAG);
  return 0;
}

static int cmd_free(char *args) {
  int ON;
  sscanf(args,"%d",&ON);
  free_wp(ON);
  return 0;
}

static int cmd_info(char *args){
  char *arg = strtok(NULL, " ");
  if(strcmp(arg,"r")==0) {
    isa_reg_display();
  }
  else if (strcmp(arg,"w")==0) {
    get_wp();
  }
  else{printf("ERROR INFO\n");}
  return 0;
}

static int cmd_q(char *args) {
  return -1;
}

static int cmd_si(char *args){
  //char *si_buff = strtok(NULL," ");
  int si_step;
  if(args!=NULL){
    sscanf(args,"%d",&si_step);
  }
  else{   si_step = 1;  }

  if(si_step>=1){
    printf("Getstep:%d\n",si_step);
    cpu_exec((uint64_t)si_step);
  }
  else{   printf("SI Error!No single step \n");  }

  return 0;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  {"si","Start_ones",cmd_si},
  {"info","Print ROM/POINT",cmd_info},
  {"x","X N EXPR",cmd_XEXPR},
  {"p","P EXPR",cmd_PEXPR},
  {"w","Add watch point",cmd_watch},
  {"d","Free point",cmd_free},
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
  WatchP=NULL;
}
