#include <stdio.h>

int main(){
	/*
	floats:
		- represented using a 32-bit IEEE 754 single point precision floating
		point number
		- 8 bits for an exponent
		- 24 bits for the significand
			- 1 bit sign
			- 23 bit mantissa
		- note that you cannot trust the precision after a certain number of
		decimal places
	*/

	float x = 12.1234567890123456789012;
	printf("x: %.22f\n", x);
	long int numBits = sizeof(x) * 8;
	printf("size of x: %lu bytes\n", sizeof(x));
	printf("size of x: %lu bits\n", numBits);

	/*
	double:
		- represented using a 64-bit IEEE 754 double precision floating point
		number
		- 11 bits for the exponent
		- 53 bits for the significand
			- 1 bit for sign
			- 52 bits for mantissa
		- You still cannot trust precision after a certain number of decimal places
	*/

	double y = 12.1234567890123456789012;
	printf("x: %.22lf\n", y);
	numBits = sizeof(y)*8;
	printf("size of y: %lu bytes\n", sizeof(y));
	printf("size of y: %lu bits\n", numBits);
	return 0;

}
