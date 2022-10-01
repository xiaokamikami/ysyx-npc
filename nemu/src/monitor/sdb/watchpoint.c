#include "sdb.h"

WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].sate = 0;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }
  head = NULL;
  free_ = wp_pool;
  //printf("%p \n%p \n",&free_->NO,&wp_pool[1].NO);
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(void){
  int i=0;
  if(head != NULL){free_ = head;}
  while ((free_->sate !=0) && i < NR_WP)
  {
    //free_ = free_->next;
    i++;
    free_ = free_->next;
  }
  if(free_->sate ==0){
    printf("Apply:%d \n",free_->NO);
    head = free_->next;
    free_->sate = 1;
    return free_;
  }
  else {
    printf ("\n NO ROOM, Please increase the list width \n");
    assert(0);
  }
}

void get_wp(){
  int i=0;
  //free_ = wp_pool;
  while (i < NR_WP)
  {
    if(wp_pool[i].sate !=0){
      printf("Address:%p ",&wp_pool[i]);
      printf("Point %d : %s \n",wp_pool[i].NO , wp_pool[i].TAG);
    }
    i++;
  }
}

void free_wp(int NO){
  wp_pool[NO].sate = 0;
  memset(wp_pool[NO].TAG,0,32);
  head = wp_pool[(NO-1)].next;

}
