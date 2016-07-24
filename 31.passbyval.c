#include<stdio.h>


void display(int, int);

int main()
{
	int x,y;
	x = 10;
	y = 20;

	printf("before function call x is %d and y is %d\n",x,y);
	display(x,y);
	printf("after function call x is %d and y is %d\n",x,y);

	return 0;
}

void display (int a, int b){
	printf("a is %d and b is %d\n",a,b);
	a = 100;
	b = 200;
	printf("a is %d and b is %d\n",a,b);
}