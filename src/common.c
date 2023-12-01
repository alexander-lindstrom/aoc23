#include "common.h"

void get_lines(char* fname, void (*line_handler)(char*, void*), void* params){
 
	char buffer[BUFSIZE]; 
	FILE* fp = fopen(fname, "r");
	
	if (!fp){
		printf("Couldn't open file: %s\n", fname);
		exit(-1);
	}
	
	while(fgets(buffer, BUFSIZE, fp)){
    line_handler(buffer, params);
	}
}