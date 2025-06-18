#include <stdio.h>
#include <stdlib.h> // required for malloc()

int main(){

	int *value;

	// malloc lets us dynamically allocate memory on the heap
	value = malloc(4); // allows for 4 bytes to be stored at "value"
	value = malloc(sizeof(int)*10);

	// set each value in the array
	for (int i=0; i<10; i++){
		value[i] = i * 2;
	}

	// print each value
	for (int i = 0; i<10; i++){
		printf("%d ", value[i]);
	}
	printf("\n");

	// the function free() frees up the space taken by a dynamically allocated reference
	free(value);

	// reallocate value with new size
	value = malloc(sizeof(int) * 20);

	// malloc does not zero out the data that was there
	// sometimes the OS will do this, as a security feature

	for (int i = 0; i < 10; i++){
		printf("%d ", value[i]);
	}
	printf("\n");
	return 0;

}

