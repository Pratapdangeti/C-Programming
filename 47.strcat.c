#include<stdio.h>
#include<string.h>

int main()
{
	char sirName[] = "dangeti";
	char fullName[25] = "pratap";
	strcat(fullName,sirName);
	printf("%s\n",fullName);
	printf("%s\n",sirName);


	return 0;
}