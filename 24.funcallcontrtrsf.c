#include<stdio.h>

void function1();
void function2();

int main()
{
	printf("In main function\n");
	printf("Calling function1\n");
	function1();
	printf("In main function after returning from function1\n");
	printf("finishing main function\n");


	return 0;
}
void function1(){
	printf("In function1\n");
	printf("Calling function2\n");
	function2();
	printf("In function1 after returning from function2\n");
	printf("returning from function1\n");
}

void function2(){
	printf("In function2\n");
	printf("Returning from function2\n");
}