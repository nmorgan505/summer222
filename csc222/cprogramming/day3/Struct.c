#include <stdio.h>

// struct are collections of variables of different types
// the members are like the properties/state in OOP
// memory is allocated for each member separately
// all members values can be accessed/used at the same time

struct Person{
	int age;     // location of the first member is the same as the location of the struct
	char name[20]; // location of the second member is adjacent to the first
	char eyecolor[10];
};

int main(){
	struct Person Alex = {55, "Alex", "None"};
	struct Person Nikolas = {24, "Nikolas", "Brown"};

	// Look into the Alex object
	printf("%s is %d years old\n", Alex.name, Alex.age);
	printf("%s is located at %p\n", Alex.name, &Alex/*Alex.age*/);
	printf("%s's age is located at %p\n", Alex.name, &Alex.age);
	printf("%s's name is located at %p\n", Alex.name, &Alex.name);
	printf("%s's eye color is located at %p\n", Alex.name, &Alex.eyecolor);
	return 0; 
}
