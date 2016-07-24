#include<stdio.h>


void add (int , int );

int main()
{
	int num1 = 100;
	int num2 = 200;

	add(num1,num2);

	return 0;
}

void add(int a, int b){
	int result = a +b ;
	printf("The result of %d and %d is %d\n",a,b,result);

}


