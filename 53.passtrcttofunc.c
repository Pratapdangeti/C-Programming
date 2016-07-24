#include<stdio.h>
#include<string.h>

struct student {
	char name[15];
	int rollno;
};

void display(char [],int);
void show(struct student);

int main(){

	struct student pratap;
	strcpy(pratap.name,"pratap");
	pratap.rollno = 123;
	display(pratap.name,pratap.rollno);
	show(pratap);

	return 0;
}

void display(char n[],int r){
	printf("In display function\n");
	printf("%s\t%d\n",n,r);
}

void show(struct student s){
	printf("\n\nIn show function\n");
	printf("%s\t%d\n",s.name,s.rollno);

}