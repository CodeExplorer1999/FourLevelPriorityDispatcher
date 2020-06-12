#ifndef QUEUE_H_
#define QUEUE_H_

#include "utility.h"

typedef struct queue{ 
	proc p;
	struct queue *next;
} node_t;

extern node_t *push(node_t *tail, proc process);
extern node_t *pop(node_t *tail);

#endif 
