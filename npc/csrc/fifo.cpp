#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include "fifo.h"

void insert_first(Node *head, Node *node)
{
	node->next = head->next;
	node->prev = head;

	// equality: head->next->prev = node;
	node->next->prev = node;
	head->next = node;
}

void delete_node(const Node *node)
{
	Node *prev_node = node->prev;
	Node *next_node = node->next;
	// current node - node

	prev_node->next = next_node;
	next_node->prev = prev_node;
}

void delete_node_v1(const Node *node)
{
	// current node - node

	node->prev->next = node->next;
	node->next->prev = node->prev;
}

void delete_node_v2(Node *node)
{
	// current node - node

	node->prev->next = node->next;
	node->next->prev = node->prev;

	node->prev = node->next = node;
}

void init_queue(Queue *queue)
{
	(queue->head).prev = (queue->head).next = &(queue->head);
	queue->count = 0;
}

void in_queue(Queue *queue, Node *node)
{
	insert_first(&(queue->head), node);
	queue->count += 1;
}

int out_queue(Queue *queue,uint64_t pc)
{
	if (queue->count <= 0)
	{
		return NULL;
	}

	Node *ret = (queue->head).prev;
	if(ret->data == pc){
		delete_node(ret);
		queue->count -= 1;
		return 1;
	}
	else return 0;
    return 0;
}

