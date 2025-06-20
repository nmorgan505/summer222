#include <stdio.h>
#include <unistd.h>

/*

	Execvp:
		format: execvp(char *filename, char *args[]);
		- looks at PATH env variable for the executable, like execlp
*/

int main(){

	char *args[]={
		"ls",
		"-a",
		"-l",
		"-h",
		NULL
	};
	execvp("ls", args);
}
