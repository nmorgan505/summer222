#include <stdio.h>

int main(){
	char name[25];
	int age;

	// prompt user with print statement
	printf("What is your name? ");
	scanf("%s", name);
	// expecting a string (%s), store the result in name variable

	printf("What is your age? ");
	scanf("%d", &age); // dont forget & means "address at"

	printf("Hi %s, your age is %d\n", name, age);

	// Taking more than one input
	printf("What is your name and age? ");
	scanf("%s %d", name, &age);

	printf("Hi %s, your age is %d\n", name, age);

	return 0;
}
