#include<stdio.h>
#include<string.h>


int main()
{
	char source[] = "pratap dangeti";
	char target[25];

	strcpy(target,source);
	printf("%s\n",source);
	printf("%s\n",target);
	return 0;
}