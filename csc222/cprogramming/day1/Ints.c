#include <stdio.h>

int main(){
	// integers
	// - should be at least 16 bits (2 bytes)
	// - Typically 4 bytes on most 32 and 64 bit machines
	// - 4 bytes of 0s: 00000000 00000000 00000000 00000000

	printf("\nints:\n");
	int w; // declaration
	w = 10; // initialization
	int age = 24; // declaration and initialization

	// print the integer associated with w
	// %d is the format specifier for integers
	printf("The value of w is %d\n", w);

	// check the size of int on your machine
	printf("The size of an int is %lu bytes\n", sizeof(w));
	// size of provides byte size of value passed in

	// short ints
	// - should be at least 16 bits (2 bytes)
	// - typically 16 bits on most 32 and 64 bit machines
	printf("\nShort ints: \n");
	short x = 20;
	printf("The value of x is %d\n", x);
	printf("The size of a short int is %lu bytes\n", sizeof(x));

	// long ints
	// - should be at least 32 bits (4 bytes)
	// - Typically 8 bytes on most 64 bit computers, but 4 bytes on 32 bit systems
	printf("\nlong ints:\n");
	long y = 20;
	printf("The value of y is %ld\n", y);
	printf("The size of a long is %lu bytes\n", sizeof(y));

	// long long int
	// should be at least 64 bits (8 bytes)
	// is typically 8 bytes, but some systems allow for larger values through 
	// combined memory space

	printf("\nlong long ints:\n");
	long long int z = 20;
	printf("The value of z is %lld\n", z);
	printf("The size of a long long is %lu bytes\n", sizeof(z));

	// unsigned versions of the above ints are allowed
	// - Range includes only positive values
	printf("\nunsigned ints:\n");
	unsigned int u = 20;
	printf("The value of u is %u\n", u);
	printf("The size of an unsigned int is %lu bytes\n", sizeof(u));
	
	return 0;
}
