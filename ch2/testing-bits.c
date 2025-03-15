#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char* argv[]) {
	long i = strtol(argv[1], NULL, 0);
	
	if(i|0){
		printf("%ld is not empty\n", i);
	}
	if(~i){
		printf("%ld is not the maximum representable value\n", i);
	}
	if(i&255){
		printf("The least significant byte of %ld is not empty\n", i);
	}
	if(~(i | -256)){
		printf("The least significant byte of %ld is not full\n", i);
	}
}
