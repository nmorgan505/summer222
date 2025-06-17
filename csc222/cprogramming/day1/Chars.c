#include <stdio.h>

int main(){
	// char
	// 	- single character
	// 	- 1 byte of memory
	// 	- can store integers -128 to 127
	// 	- note that integers correspond to ASCII values
	// 	- unsigned char can store from 0 to 255, since they're all positive

	char letter = 'a';
	printf("\nletter: %c\n", letter);
	printf("size: %lu\n", sizeof(letter));

	char another = 100;
	printf("\nanother - as char: %c\n", another);
	printf("another - as int: %d\n", another);
	printf("size: %lu byte\n", sizeof(another));

	unsigned char last = 250; // outside the bounds of ASCII
	printf("\nlast - as char: %c\n", last);
	printf("last - as int: %d\n", last);
	printf("size: %lus byte\n", sizeof(last));

	return 0;

}
