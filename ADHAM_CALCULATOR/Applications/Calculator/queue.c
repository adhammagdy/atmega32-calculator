#include <stdint.h>
#include "queue.h"


void vQueueInit(queue_t *queue){
	queue->front=0;
	queue->rear=-1;
	queue->itemCount=0;	
}


QUEUE_TYPE dataQueuePeek(queue_t *queue)
{
	return (queue->QueueArray[queue->front]);
}

int8_t x8QueueEmpty(queue_t *queue)
{
	return (queue->itemCount == 0);
}

int8_t x8QueueFull(queue_t *queue)
{
	return (queue->itemCount == QUEUE_MAX);
}

int8_t x8QueueSize(queue_t *queue)
{
	return (queue->itemCount);
}

void vQueueInsert(queue_t *queue, QUEUE_TYPE data)
{

	if(!x8QueueFull(queue))
	{
		if(queue->rear == QUEUE_MAX-1)
		{
			queue->rear = -1;
		}
		queue->QueueArray[++(queue->rear)] = data;
		(queue->itemCount)++;
	}
}

QUEUE_TYPE dataQueuePop(queue_t *queue)
{
	QUEUE_TYPE data = queue->QueueArray[(queue->front)++];
	
	if(queue->front == QUEUE_MAX)
	{
		queue->front = 0;
	}
	
	(queue->itemCount)--;
	return data;
}

