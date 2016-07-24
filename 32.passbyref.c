#include<stdio.h>


void display(int *,int *);

int main ()
{
	int x,y;
	x = 100;
	y = 200;
	printf("Before func call x is %d y is %d\n",x,y );

	display(&x,&y);
	printf("After func call x is %d y is %d\n",x,y );

	return 0;
}


void display (int *p,int *q){
	printf("%d\t%d\n",*p,*q);
	*p = 10;
	*q = 20;
}