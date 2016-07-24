#include<stdio.h>



#define INTEL
#undef INTEL


int main()
{
	#ifndef INTEL

	printf("Course for non intel pc\n");

	#endif


	return 0; 
}