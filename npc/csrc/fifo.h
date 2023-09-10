#ifndef _FIFO_H_
#define _FIFO_H_
#include <stdint.h>
#define MAX_NODE_LEN 16
typedef struct NODE {
	int data;
	struct NODE *prev;
	struct NODE *next;
} Node;

typedef struct QUEUE {
	struct NODE head;
	int count;
} Queue;
void insert_first(Node *head, Node *node);
void delete_node(const Node *node);
void delete_node_v1(const Node *node);
void delete_node_v2(Node *node);
void init_queue(Queue *queue);
void in_queue(Queue *queue, Node *node);
int  out_queue(Queue *queue,uint64_t pc);
#endif
