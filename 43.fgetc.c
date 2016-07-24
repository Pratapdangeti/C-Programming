#include<stdio.h>
#include<string.h>

int main(){

	FILE *pf;
	char ch;
	feof(pf);

	pf = fopen("pratap.txt","r");


	if (pf == NULL){
		printf("Unable to open the file\n");
	}else {
		while(!feof(pf)){
			ch = fgetc(pf);
			printf("%c",ch);

		}

		fclose(pf);
	}

	return 0;
}