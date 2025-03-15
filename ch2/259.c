#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

typedef unsigned char *byte_pointer;

int main(){
	int x = 1;
	uintmax_t y = SIZE_MAX;
	int size = sizeof(y);
	byte_pointer p = (byte_pointer) &x;
	byte_pointer q = (byte_pointer) &y;
	byte_pointer r = (byte_pointer)malloc(size);

	for (int i = 0; i < size; i++){
		if (i == 0){
			r[i]=p[i];
		} else {
			r[i]=q[i];
		}		
}
		printf("The least significant byte of %x, and the most significant bytes of %lx together are \n", x, y);
		
		printf("0x");
		for (int i=0; i<=size-1 ; i++) {
			printf("%02x", r[i]);
		}
		printf("\n");

		free(r);
	return 0;
} 
