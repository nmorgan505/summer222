#include <stdio.h>

int main(){
	// a pointer is a reference to a memory location
	// use * to state that something is a pointer
	int favenum = 5;		// normal variable
	int *favenumptr = &favenum;	// a pointer for an integer (since favenum is an int)
					// the & means "address at" favenum
	printf("My favorite number is %d and it is stored at %p.\n", favenum, favenumptr);

	// we can access the value associated with a pointer through the indirection operator
	// *
	printf("My fave num is %d.\n", *favenumptr);

	return 0;
}
