#include<stdio.h>

int main()
{
	// fputs(string,file_pointer);
	FILE *pf;
	char input[25];


	pf = fopen("pratap.txt","a");

	if (pf == NULL){
		printf("Unable to open the file\n");

	} else {
		printf("Enter a string to write to the file\n");
		scanf("%s",input);
		fputs(input,pf);
		printf("Data has successfully written \n");
		fclose(pf);
	}
 



	return 0;
}