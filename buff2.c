
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void stripCRLF(char *s)
{
	while(*s)
	{
		if(*s=='\r') *s=0;
		if(*s=='\n') *s=0;
		s++;
	}
}

int main(int argc, char **argv)
{
	// our stack memory local vars and buffer
	char buf2[12]="[2] @(13:09)";
	char buf1[12]="[1] @(10:25)";
	char buf[10];

	printf("\n\nstack addresses\n");
	printf("---------------\n");
	printf("addr of buf  is ..   %u\n", &buf[0]);
	printf("addr of buf1 is ..   %u\n", &buf1[0]);
	printf("addr of buf2 is ..   %u\n", &buf2[0]);
	printf("\n\n\n");

	// prompt for passwd
	printf("Enter password: \n");

	// get the password input
	gets(buf);
	stripCRLF(buf);

	// print out my results
	if (buf[0]=='1' && buf[1]=='2' && buf[2]=='3' && buf[3]=='4')
	{
		printf("\n\n\n");
		printf("Your travel arrangements are as follows\n");
		printf("---------------------------------------\n");
		printf("From: Dublin Heuston Platform %.12s",buf1);
		printf("\n");
		printf("  To: Cork (Kent)    Platform %.12s",buf2);
		printf("\n");
		printf("---------------------------------------\n");
	}
	else
	{
		printf("**** INCORRECT PASSWORD - enter 1234 **** \n");
	}
	
	printf("\n\n\n");
	return 0;
}
