#include <stdio.h>

int main(){
	FILE *filePtr;

	filePtr = fopen("pg98.txt", "r");

	// for good practice
	if (filePtr == NULL){
		printf("The file does not exist");
		return 1;
	}

	char contents[100];
	/*
	fgets(contents, 100, filePtr);
	printf("%s", contents);
	will only get the first line
	*/

	// to read more than one line:
	while (fgets(contents, 100, filePtr)){
		printf("%s", contents);
	}

	fclose(filePtr);

	return 0;
}
