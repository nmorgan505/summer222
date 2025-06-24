#include <stdio.h>

int main(){
	int tx, ty;
	unsigned ux, uy;
	// Explicit casting
	ux = (unsigned) tx;
	uy = (unsigned) ty;
	tx = (int) uy;

	// Implicit casting:
	tx = ux
	uy = ty
}
