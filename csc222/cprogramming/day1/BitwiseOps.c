#include <stdio.h>
#include <math.h>

int main(){
	unsigned int a = 10; 	// 1010
	unsigned int b = 15;	// 1111

	// bitwise and - &
	unsigned result = a & b;
	/*
		1010
	       &1111
	       =1010 -> 10
	*/
	printf("Ex 1: %d\n", result);

	// bitwise or - |
	unsigned result2 = a | b;
	/*
		1010
               |1111
	       =1111 -> 15
	*/
	printf("Ex 2: %d\n", result2);

	// bitwise not/flip/complement - ~
	unsigned int result3 = ~a;
	// ~a -> ~1010 = 0101 -> 5
	// but... a = 00000000 00000000 00000000 00001010
	// ~a is    = 11111111 11111111 11111111 11110101
	printf("Ex 3: %u\n", result3);

	// bitwise xor - ^
	unsigned int result4 = a ^ b;
	/*
	1010
       ^1111
       =0101
	*/
	printf("Ex 4: %u\n", result4);

	// right shift - >>
	/* a >> 3
	   1010 >> 3
	  =0001
	*/
	unsigned int result5 = a >> 3;
	printf("Ex 5: %u\n", result5);

	// left shift - <<
	/* a << 2
	   1010 << 2
	  =101000
	*/
	unsigned int result6 = a << 2;
	printf("Ex 6: %u\n", result6);

	return 0;
}

