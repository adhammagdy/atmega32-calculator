/*
 * queue.h
 *
 * Created: 30/3/2018 3:29:12 PM
 *  Author: adham
 */ 


#ifndef QUEUE_H_
#define QUEUE_H_

#define QUEUE_MAX 16
#define QUEUE_TYPE char

//Creating queue
typedef struct{
	QUEUE_TYPE QueueArray[QUEUE_MAX];
	int8_t front;
	int8_t rear;
	int8_t itemCount;
}queue_t;

void vQueueInit(queue_t *queue);
QUEUE_TYPE dataQueuePeek(queue_t *queue);
int8_t x8QueueEmpty(queue_t *queue);
int8_t x8QueueFull(queue_t *queue);
int8_t x8QueueSize(queue_t *queue);
void vQueueInsert(queue_t *queue, QUEUE_TYPE data);
QUEUE_TYPE dataQueuePop(queue_t *queue);


#endif /* QUEUE_H_ */