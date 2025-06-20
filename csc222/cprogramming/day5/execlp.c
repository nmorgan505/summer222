#include <stdio.h>
#include <unistd.h>

/*
	Execlp:
		- Format: execlp(char *file, char *arg0, char *arg1, ..., NULL);
		- Similar to execl
		- The main difference is that the file is sought for in the PATH environment
		variable

	Execle:
		- Format: execle(char *path, char *arg0, char *arg1, ... NULL, char *envp[]);
		- uses a list of environment variables.
		- Environment variables can be set (temporarily in terminal) with the format
		"NAME=VALUE"
		- EX: "HOME=/home/usr"
*/

int main(){
	execlp("ls", "ls", "-al", "-h", NULL);
}
