#include<stdio.h>
#include<string.h>

struct address {
	char sn[25];
	int hn;
};

struct student {
	char name[15];
	int rollno;
	struct address addr;
};

int main() {

	struct student pratap;
	strcpy(pratap.name,"pratap");
	pratap.rollno = 12345;
	strcpy(pratap.addr.sn,"mg road");
	pratap.addr.hn = 68;

	struct student anil = {
		"anil",
		1234,
		"mg road",
		899

	};
	printf("%s\t%d\t%s\t%d\n",anil.name,anil.rollno,
		anil.addr.sn,anil.addr.hn);

	return 0;
}