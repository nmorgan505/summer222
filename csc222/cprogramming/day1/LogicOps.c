#include <stdio.h>
#include <stdbool.h> // needed to use true and false as booleans

int main(){
	// && - logical and
	// || - logical or
	// !  - logical not

	if (1 && 1){
		printf("True and True\n");
	}

	if (1 && 0){
		printf("True and False\n");
	}

	if (1 || 0){
		printf("True or False\n");
	}

	if (0 || 0){
		printf("False or False\n");
	}

	if (!0 || 0){
		printf("Not False or False\n");
	}

	if (true){
		printf("True\n");
	}
	return 0;
}
