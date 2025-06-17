#include <stdio.h>

int main(){

	int someData[] = {1,2,3,4,5,6};
	int moreData[10];

	// using a while loop to assign values to moreData
	int counter = 0;
	while (counter < 10){
		moreData[counter] = counter;
		printf("Added %d as a value to moreData.\n", counter);
		counter++;
		//++counter
	}

	// using a for loop to access each data
	// we need an upper limit, lower limit, and incrementer
	// we can get upper limit by dividing the sizeof the array by the sizeof its type
	int n = sizeof(someData)/sizeof(int);
	for (int i = 0; i < n; i++){
		printf("The %dth item in the array is %d.\n", i, someData[i]);
	}


	return 0;
}
