#include <stdio.h>

void addStuff(int myArray[], int myArrayLength){ // a solid signature for taking in an array
	// the array decays to a pointer when passed into a function
	// so sizeof() would only return the size of the pointer, not the size of the array
	// we can pass in the size of the array in addition to the array (if we need that size)
	// note, you can still use the index to access values inside of the function

	for (int i=0; i < myArrayLength; i++){
		myArray[i] = i * 2;
	}
}

void viewStuff (int *myArray, int myArrayLength){ // another signature for takin in an array
	// pointer notation is common (using *), as the array decays to a pointer
	for (int i=0; i < myArrayLength; i++){
		printf("The item at index %d is %d.\n", i, myArray[i]);
	}
}

int main(){

	int ages[5];

	// get the length
	int size = sizeof(ages)/sizeof(int);

	// pass the length into the function
	addStuff(ages, size);
	viewStuff(ages, size);
return 0;
}
