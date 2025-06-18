#include <stdio.h>
#include <string.h>

struct Person{
	char name[20];
	int age;
};

int main(){
	struct Person amanda = {"Amanda", 20};
	struct Person *amandaPtr = &amanda;

	// -> operator access the value at a member via the pointer
	printf("%s's age is %d\n", amandaPtr->name, amandaPtr->age);

	// or through indirection (dereferencing)
	printf("%s's age is %d\n", (*amandaPtr).name, (*amandaPtr).age);

	return 0;
}
