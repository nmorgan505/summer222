#include <stdio.h>


int main(){
char x = 123;
char y = -123;

printf("x = %d, y = %d\n", x, y);

unsigned char ux = (unsigned char) x;
unsigned char uy = (unsigned char) y;

printf("ux = %d, uy = %d\n", ux, uy);
/*
C allows conversions between signed and unsigned (as above)
This does not change the bit representation of the number
	- Nonnegative numbers stay the same
	- Negative values are changed into positive values
	- In this case:
		- ux = 123
		- uy = 133
*/
}
