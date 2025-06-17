#include <stdio.h>
#include <string.h>

int main(){

	// a string is an array of characters
	// a string terminates with \0 <- the null character

	char aString[] = "Hi, how are you?";
	printf("%s\n", aString);

	// Getting the size of a string
	// includes the null character
	printf("size: %lu\n", sizeof(aString)/sizeof(char));

	// from string.h
	printf("size again: %lu\n", strlen(aString));

	// comparing two strings
	char hello[] = "hello";
	char you1[] = "you";
	char you2[] = "you";

	if (strcmp(hello, you1) == 0){
		printf("They're equal - 1\n");
	} else{
		printf("They're not equal - 1\n");
	}

	// strcmp returns -1, 0, or 1
	// 0 when they're equal
	// -1 if the first string is "less than" the second (ascii values)
	// 1 if the first string is "more than" the second
	if (strcmp(you1, you2) == 0){
		printf("They're equal - 2\n");
	} else{
		printf("They're not equal - 2\n");
	}

	// Reassigning string values (places "you" into hello)
	strcpy(hello, "you");

	return 0;



}
