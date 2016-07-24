#include<stdio.h>
#include<string.h>

struct student{
	char name[15];
	int rollno;
};
 
 void display(struct student *ptr);

int main(){

	struct student pratap = {
		"pratap",
		123
	};
	display(&pratap);


	return 0;
}

void display(struct student *ptr){
	printf("%s\t%d\n",ptr->name,ptr->rollno);

}