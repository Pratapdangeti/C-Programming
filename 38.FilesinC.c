#include<stdio.h>

	// "r " - for reading
	// "w" -  for writing
	// "a" -  for append or edit
	// "r+" - read and write
	// "w+" - read and write
	// "a+" - 
	// "rb , wb, ab" - for binary
	// "r+b , w+b, a+b "
    // fopen("file_name","mode");

int main()
{
	FILE *Fpointer;

	Fpointer = fopen("pratap.txt","a");

	if(Fpointer==NULL)
	{
		printf("Unable to create the file\n");
	}

	else {
		printf("File opened successfully\n");

		fclose(Fpointer);
	}

	return 0;
}