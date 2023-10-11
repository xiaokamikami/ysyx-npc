#ifndef _FIFO_H_
#define _FIFO_H_
#include <stdint.h>
#define MAX_NODE_LEN 8//队列最大元素个数
typedef struct Queue
{
	uint32_t m_array[MAX_NODE_LEN];
	int m_front;//首元素下标
	int m_rear;//尾元素下标
	int m_size;//当前元素个数
}Queue;
void Push(Queue *pQueue, int v);
int Pop(Queue *pQueue,uint64_t pc);
#endif
