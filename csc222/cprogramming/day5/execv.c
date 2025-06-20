#include <stdio.h>
#include <unistd.h>

/*
	- Execv:
		- Format: execv(char *path, char *args[]);
		- The first element of args is the name of the executable
		- The last element of args will be NULL
*/

int main(){
	char *args[] = {
		"ls",
		"-a",
		"-l",
		"-h",
		NULL
	};
	execv("/bin/ls", args);
}
