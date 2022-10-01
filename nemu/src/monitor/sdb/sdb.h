#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e);
void init_sdb();


//***********watch point
#define NR_WP 32

typedef struct watchpoint {
  int NO;
  int sate;
  char TAG[32];
  struct watchpoint *next;
  /* TODO: Add more members if necessary */

} WP;

WP* new_wp(void);
void get_wp();
void free_wp(int NO);


//************
#endif
