#include<stdio.h>
int main()
{
	int counter = 1;
	for ( ; ; ){
		printf("%d\n",counter);
		counter++;
		if (counter==5)
	     break;
	}
}