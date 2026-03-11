#include <stdio.h>
#include <stdlib.h>

void printHello(void);

int myFirst(void)
{
	printf("In myFirst.\n");
	printHello();
	printf("In myFirst.\n");

	exit(0);
}

void funct(void)
{
	printf("In funct.\n");
}

void printHello(void)
{
	printf("In printHello.\n");
	funct();
	printf("Exiting printHello.\n");
}
