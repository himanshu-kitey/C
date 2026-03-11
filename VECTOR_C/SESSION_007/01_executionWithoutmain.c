#include <stdio.h>
#include <stdlib.h>

void funct1(void);
void funct2(void);

void myFirst(void)
{
	printf("In myFirst.\n");
	funct1();
	funct2();
	printf("Exiting myFirst.\n");

	exit(0);
}

void funct1(void)
{
	puts("Funct1.");
}

void funct2(void)
{
	puts("Funct2.");
}
