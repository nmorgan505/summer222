#include <stdio.h>
#include <unistd.h> // includes the fork function

int main(){

	// fork creates a child process
	fork();

	printf("This should print twice\n");

	return 0;

}


