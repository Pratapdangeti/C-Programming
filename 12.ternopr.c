#include<stdio.h>

int main()
{
	int age = 23;
	int x;
	x = (age >=18) ? 1 : 0;
	printf("%d\n",x);

	// age >= 18 ? printf("You are adult\n") : printf("you are minor\n");


	return 0;
}