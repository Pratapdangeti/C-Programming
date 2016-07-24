#include<stdio.h>
#include<string.h>

struct student {
	char name[15];
	int rollno;
	int age;
}anil,ajay,pratap;

int main() {

	struct student nikhil={"nikhil",3453,15},shashank;

	struct student pratap = {
		"pratap",
		1234,
		32
	};
	struct student ajay = {
		"ajay",
		2345,
		50
	};
	struct student akshay = {
		"akshay",
		3456,
		14
	};
	shashank = nikhil;

	printf("%d\n%d\n",nikhil.age,shashank.age);
	strcpy(shashank.name,nikhil.name);
	puts(shashank.name);


	return 0;
}