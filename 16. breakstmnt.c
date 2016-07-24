#include<stdio.h>

int main()
{
	int counter;
	for (counter=1;counter<=10;counter++){

		if (counter==5){
			break;
		}
		printf("%d\n",counter);


	}
	printf("After the for loop \n");

	return 0;
}