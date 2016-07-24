#include<stdio.h>

int main(){
	FILE *pf;
	// int data[10];
	int age;
	char name[10];

	pf = fopen("pratap.txt","r");

	if (pf == NULL){
		printf("Unable to open the file\n");
	} else {
		fscanf(pf,"%s\t%d",name,&age);
		printf("%s\t%d\n",name,age);

		fclose(pf);
	}




	return 0;
}