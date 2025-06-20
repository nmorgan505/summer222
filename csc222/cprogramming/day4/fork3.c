#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){

	pid_t pid = fork();

	if (pid < 0){
		printf("Failed to create child process\n");
	}

	if (pid == 0){
		printf("pid in child: %d\n", pid);
		printf("From the child, id of child is %d\n", getpid());
		printf("From the child, id of the parent is %d\n", getppid());
	}
	else{
		printf("pid in parent: %d\n", pid);
		printf("From the parent: id of parent is: %d\n", getpid());
		wait(NULL);
	}

	return 0;
}

