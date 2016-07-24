#include<stdio.h>

int main()
{
	int x = 10;

	int *p;
	int **q;
	p = &x;
	q = &p;
	printf("x value is %d\n",x);
	printf("address of x is %u\n",&x);
	printf("the value of p is %u\n",p);
	printf("the address of p is %u\n",&p);
	printf("the value pointed by the pointer p is %d\n",*p);
	printf("the value of q is %u\n",q);
	printf("The address of q is %u\n",&q);
	printf("The value of x by using pointer to a pointer %d\n",**q);

	return 0;
}