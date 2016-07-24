#include<stdio.h>

struct student {
	char name[15];
	int rollno;
	int age;
};

int main()
{
	struct student pratap = {
		"pratap",
		1234,
		32
	};

	printf("%s %d %d\n",pratap.name,pratap.rollno,pratap.age );
	return 0;
}