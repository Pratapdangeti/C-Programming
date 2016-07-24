#include<stdio.h>
#include<string.h>

struct student {
	char name[15];
	int rollno;
};



int main()

{
	struct student pratap;
	struct student *ptr;

	strcpy(pratap.name,"pratap");
	pratap.rollno = 123;

	ptr = &pratap;
	printf("%s\t%d\n",pratap.name,pratap.rollno);

	printf("%s\t%d\n",ptr->name,ptr->rollno);


	return 0;
}