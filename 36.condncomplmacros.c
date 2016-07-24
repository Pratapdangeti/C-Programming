#include<stdio.h>

/*
#if #else #elif #endif
*/

#define MARK 95

int main()
{
	#if MARK >= 75
		printf("Your marks are greater than 75\n");
		printf("You got the grade A\n");

	#elif MARK >= 50
		printf("Your marks are greater than 50 and less than 75\n");
		printf("You got the grade B\n");

	#else 
		printf("Your marks are less\n");
		printf("You got the grade C\n");	

	#endif


	return 0;
}