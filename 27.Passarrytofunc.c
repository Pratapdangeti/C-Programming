#include<stdio.h>



void display(int mark[],int size){
	int counter;
	for (counter = 0; counter < size;counter++){
		printf("The array element at %d is %d\n",counter,mark[counter] );

	}

	// printf("The mark received is %d\n",mark);
}

int main(){

	int marks[3] = {35,45,55};
	display(marks,3);

	// display(marks[0]);
	// display(marks[2]);

	return 0;
}