#include <stdio.h>
#include <stdlib.h>

void append(int *array, int *arrayLength, int newValue);

int main(){

	int length = 1;
	int *array = malloc(sizeof(int) * length);

	array[0] = 42;

	for (int i=0; i < length; i++){
		printf("%d\n", array[i]);
	}

	append(array, &length, 4);
	append(array, &length, 10);
	append(array, &length, 5);

	for (int i=0; i < length; i++){
		printf("%d, ", array[i]);
	}
	printf("\n");

	return 0;
}

void append(int *array, int *arrayLength, int newValue){

	// set the new array length
	// remember: * is dereferencing the pointer (getting its value)
	*arrayLength = *arrayLength + 1;

	// allocate space for one more item
	int *array2 = realloc(array, *arrayLength);

	// reset the identifier so it can be used again
	array = array2;

	array[*arrayLength-1] = newValue;
}


