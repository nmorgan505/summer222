#include <stdio.h>
#include <unistd.h>

int main(){

	// create an array for file descriptors
	// form the two ends of the pipe
	// fd[0] will be the read end of the pipe
	// fd[1] will be the write end of the pipe
	// a file descriptor is an integer that references some bits
	int fd[2];

	// pipe takes in the file descriptor array
	pipe(fd);

	pid_t pid = fork();

	if (pid == 0){
		// child process

		// close the read end (we'll write in the child)
		close(fd[0]);
		int x;
		printf("(child) Give me an int: ");
		scanf("%d", &x);

		// write the data to the pipe
		write(fd[1], &x, sizeof(int));

		// close the write end
		close(fd[1]);
	} else{
		// main process
		// close the write end
		close(fd[1]);
		int y;
		read(fd[0], &y, sizeof(int));
		printf("(parent) Got from child: %d\n", y);

		// close the read end
		close(fd[0]);
	}
	return 0;
}
