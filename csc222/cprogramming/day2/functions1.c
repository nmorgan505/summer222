#include <stdio.h>

// you should define functions before main
// need to state return type and formal parameters

int addOne(int value){
	return value + 1;
}

int main(){
	int num=10;
	int result = addOne(num);
	result = addOne(result);

	printf("You started with %d.\n", num);
	printf("You ended with %d.\n", result);

	return 0;
}
