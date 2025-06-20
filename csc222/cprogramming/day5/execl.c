#include <stdio.h>
#include <unistd.h> // holds execl

/*

	- Execl
		- format: execl(char *path, char *arg0, char *arg1, ..., NULL)
		- path: Path to the executable (should be absolute path)
		- arg0: the name of the executable
		- arg1: the first space separated argument
		- ... : as many args as needed
		- NULL: follows all args
		- returns -1 if there is an error
*/

int main(){
	execl("/bin/ls", "ls", "-al", "-h", NULL); 
}
