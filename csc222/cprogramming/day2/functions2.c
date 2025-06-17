#include <stdio.h>

// we can prototype functions before main, and define them later
// to prototype a function, we need a return type, function name, and parameter type,
// but we don't need parameter names

int addOne(int);

int main(){
	int num = 10;
	int result = addOne(num);
	result = addOne(result);

	printf("Start: %d.\n", num);
	printf("End: %d.\n", result);

	return 0;
}

int addOne(int value){
	return value + 1;
}

