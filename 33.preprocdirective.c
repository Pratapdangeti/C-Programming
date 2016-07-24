#include<stdio.h>

/*
#define macro_name character sequence
*/
#define LIMIT 10
#define TOP (LIMIT+1)
#define NAME "pratap dangeti"

int main() {
	int counter;
	printf(NAME);
	for (counter=1;counter<= TOP;counter++){
		printf("%d\n",counter);
	}
	return 0;
}

