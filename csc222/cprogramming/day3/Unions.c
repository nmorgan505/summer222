#include <stdio.h>
#include <string.h>

// unions are collections of variables of different data types
// The members are sort of like members from OOP
// memory is NOT allocated for each member separately
// can only access/use one member at a time
// one common space for all members

union Student{
	float gpa;
	char name[10];
};

int main(){
	union Student student;
	student.gpa = 3.4;
	// strcpy(student.name, "Tony");

	printf("gpa: %.2f\n", student.gpa);
	return 0;
}
