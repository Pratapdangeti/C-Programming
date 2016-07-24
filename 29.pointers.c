#include<stdio.h>

int main()
{

	// & address of operator
	// * value of operator

	int x = 10;
	
	int *j;

	j = &x;

	printf("The value of x is %d\n",x);
	printf("The address of x is i.e &x is %p\n",&x);
	printf("The value of x is *(&x) %d\n",*(&x));

	printf("The memory address stored in the pointer j is %p\n",j);
	printf("The value pointed by pointer j is %d\n",*j);
	printf("The address of pointer j is %p\n",&j );

	return 0 ;
}