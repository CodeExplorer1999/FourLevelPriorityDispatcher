#include <stdio.h>
#include <stdlib.h>
#include "utility.h"

int alloc_mem(resources res, int size)
{
	for (int i = 0; i < MEMORY; i++){
		index = i;
		for (int j = i; j < size; j++){
			if (res.mbytes[j]) == 0)
				i = MEMORY;
			else{
				i = j;
				j = size;
			}
		}
	}

	for (int i = index; i < size; i++)
		res.mbytes[i] = 1;
	return index;
}

free_mem(resources res, int index, int size)
{

	int i = 0;
	for (i = index; i < index +size; i++)
		res->memory[i] = 0;
}

void load_dispatch(char *dispatch_file, node_t *queue)
{
    FILE *file = fopen (dispatch_file,"r");

    char *tokens[BUFFER_LEN];
    char buffer[BUFFER_LEN];

    while(fgets(buffer, BUFFER_LEN, file)!= NULL){
      tokenize(buffer, tokens);
      proc process;
      process.arrival_time = atoi(tokens[0]);
      process.priority = atoi(tokens[1]);
      process.processor_time = atoi(tokens[2]);
      process.mbytes = atoi(tokens[3]);
      process.printers = atoi(tokens[4]);
      process.scanners = atoi(tokens[5]);
      process.modems = atoi(tokens[6]);
      process.cds = atoi(tokens[7]);

      push(queue, process);
    }
}
