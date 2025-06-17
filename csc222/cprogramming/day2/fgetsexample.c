#include <stdio.h>
#include <string.h>

int main(){
	char aFullLine[100];

	// f get s stands for file get string
	// typically used for reading lines of files
	// but can be used with stdin to prompt

	printf("Type a sentence: ");
	fgets(aFullLine, 100, stdin);

	// fgets automatically adds a new line character at the end
	// to remove it
	aFullLine[strlen(aFullLine) - 1] = '\0';
	printf("You said: %s", aFullLine);
	return 0;
}
