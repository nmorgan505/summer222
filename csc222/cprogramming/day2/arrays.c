#include <stdio.h>

int main(){

	// arrays are collections of similar values in contiguous memory locations
	int someData[] = {1, 2, 3, 4, 5, 6};
	int moreData[10];

	printf("The memory address of the array is %p.\n", someData);	// & is optional for arrays
	printf("The memory address of the first item is %p.\n", &someData[0]);

	// when in the space of an array, you can use sizeof to get how large it is
	printf("The num of bytes in the array is %lu.\n", sizeof(someData));
	printf("That makes sense because 4 bytes (per int) * 6 items = %lu.\n", sizeof(someData));

	// we can use sizeof to get the length of an array
	printf("The length of the array is %lu.\n", sizeof(someData) / sizeof(int));

	return 0;

}
