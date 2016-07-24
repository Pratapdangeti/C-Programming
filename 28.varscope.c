#include<stdio.h>


void increment();
void display();

int b = 0;

int main()
{
	int a = 10;
	printf("from main the value of a is %d\n", a);
	display();
	// printf(" from main %d\n",b);
	// b++;
	// increment();



	return 0;
}


void increment(){
		printf("from increment %d\n",b);

}

void display()
{
	int a = 20;
	// int b = 30;
	printf("from display the value of a is %d\n", a);
	printf("from display b is %d\n",b);
}