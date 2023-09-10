#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include "fifo.h"

 

void InitQueue(Queue *pQueue)
{
	pQueue->m_front = 0;
	pQueue->m_rear = 0;
	pQueue->m_size = 0;
}
 
bool IsFull(Queue *pQueue)
{
	return pQueue->m_size == MAX_NODE_LEN ? true : false;
}
 
void Push(Queue *pQueue, int v)
{
	pQueue->m_array[pQueue->m_rear] = v;
 
	pQueue->m_rear++;
	if (pQueue->m_rear == MAX_NODE_LEN)
	{
		pQueue->m_rear = 0;
	}
 
	pQueue->m_size++;
}
 
bool IsEmpty(Queue *pQueue)
{
	return pQueue->m_size == 0 ? true : false;
}
 
int Pop(Queue *pQueue,uint64_t pc)
{
	int current = pQueue->m_front;

 
 	//printf("out_queue pc = %lx ",pQueue->m_array[current]);
	//printf("pQueue->front %d rear %d size %d  head pc = %lx ",pQueue->m_front,pQueue->m_rear,pQueue->m_size,pQueue->m_array[pQueue->m_front]);
	if(pQueue->m_array[pQueue->m_front] == pc){
		pQueue->m_front++;
		if (pQueue->m_front == MAX_NODE_LEN)
		{
			pQueue->m_front = 0;
		}
	
		pQueue->m_size--;
		//printf("succseful \n");
		return 1;
	}
	else {
		//printf("failing \n");	
		return 0;
	}
    return 0;
}


