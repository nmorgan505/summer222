#include <stdio.h>
#include <unistd.h>

int main(){

	int pid = fork();

	// if fork -1, it failed to create the child
	if (pid < 0){
		printf("Failed to create child process\n");
		return 1;
	}

	// when pid == 0, you are in the child process
	if (pid == 0){
		printf("I'm in the child process\n");
	} else {
		printf("I'm in the parent process\n");
	}

	printf("Hi from both!\n");
	return 0;
}



