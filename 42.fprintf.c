#include<stdio.h>

int main()
{
	FILE *pf;
	char name[25];
	int age;
	printf("Enter your name and age\n");
	scanf("%s%d",name,&age);
	// fprintf(file_pointer,format spercifier,list of vars );

	pf = fopen("pratap.txt","a");

	if (pf == NULL){
		printf("Unable to open the file\n");
	}else {
		fprintf(pf, "%s\t%d\n",name,age);
		printf("Data written successfully\n");
		fclose(pf);


	}
	

	return 0;
} 