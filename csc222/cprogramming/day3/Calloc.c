#include <stdio.h>
#include <stdlib.h>

int main(){
	// calloc guarantees that the allocated will be zeroed out
	// takes two arguments: number of things, and the size of things
	int *value = calloc(10, sizeof(int));

	for (int i = 0; i <  10; i++){
		printf("%d ", value[i]);
	}

	free(value);
	printf("\n");
	return 0;
}
