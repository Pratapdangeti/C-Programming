#include<stdio.h>
int main()
{
	char ch = 'A';
	printf("%d\n",ch );
	switch (ch){
		case 'A':
		case 'a':
			{
			printf("case A or a\n");
		}
			break;

	}


	return 0;
}