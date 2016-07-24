#include<stdio.h>

int main(){
	FILE *pf;
	char data[15];

	pf = fopen("pratap.txt","r");

	if (pf == NULL){
		printf("Unable to open the file\n");
	}else {
		while(!feof(pf)){
			fgets(data,15,pf);
			printf("The characters read were %s\n",data);
		}

		fclose(pf);
	}
	return 0;
}