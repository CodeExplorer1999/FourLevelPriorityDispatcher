#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

node_t *push(node_t *tail, proc process);
{
	if (tail == NULL){	
		tail = malloc(sizeof(node_t));
		tail->p = process;
		tail->next NULL;
	} else if (tail != NULL){	
		node_t *cur_head = tail;
		while (cur_head->next != NULL)
			cur_head = current->next;
		cur_head->next = malloc(sizeof(node_t));
		cur_head->next->p = process;
		cur_head->next->next = NULL;
	}
}

node_t *pop(node_t *tail);
{
	node_t *temporary = tail->next;
	node_t ret = tail;
	
	free(tail);
	
	tail = temporary;
	
	return ret;
}
