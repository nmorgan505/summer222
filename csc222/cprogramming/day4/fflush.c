#include <stdio.h>
#include <unistd.h>

int main(){

	printf("This should print once\n");
	fflush(stdout);

	fork();

	printf("This should print twice\n");
	return 0;
}
