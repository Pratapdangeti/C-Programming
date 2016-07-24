#include<stdio.h>

int add(int, int);


int main()
{
	int result;

	result = add(10,20);
	printf("The result is %d\n",result);




	return 0;
}


int add(int a, int b){
	int temp;
	temp = a + b ;
	if (temp < 0){
		return 0;
	} else {
		return temp;
	}
	
}