#include<stdio.h>
#include<string.h>

int main()
{
	FILE *Fpointer;
	char data[25] = "Pratap Dangeti Rocks";
	int length = strlen(data);
	int counter;

	// fputc(character,file_pointer);
	Fpointer = fopen("pratap.txt","a");

	if(Fpointer==NULL)
	{
		printf("Unable to create the file\n");
	}

	else {
		for(counter=0;counter< length;counter++){
			printf("Writint the character %c\n",data[counter]);
			fputc(data[counter],Fpointer);
		}
		printf("File opened successfully\n");

		fclose(Fpointer);
	}

	return 0;
}