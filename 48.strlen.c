#include<stdio.h>
#include<string.h>

int main()
{
	char name[] = {'P','r','a','t','\0'};
	char surName[] = "dangeti"; 
	int length,length2;

	length = strlen(name);
	length2 = strlen(surName);
	printf("The length of %s is %d\n",name,length);
	printf("The lenght of %s is %d\n",surName,length2);


	return 0;
}