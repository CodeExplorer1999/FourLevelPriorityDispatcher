#ifndef UTILITY_H_
#define UTILITY_H_
#define MEMORY 1024

typedef struct {
	int mbytes[1024];
	int printers;
	int scanners;
	int modems;
	int cds;
} resources;

typedef struct {
	int arrival_time;
	int priority;
	int processor_time;
	int printers;
	int scanners;
	int modems;
	int cds;
	int mbytes;
} proc;

extern int alloc_mem(resources res, int size);
extern void free_mem(resources res, int index, int size);
extern void load_dispatch(char *dispatch_file, node_t *queue);
#endif /* UTILITY_H_ */
