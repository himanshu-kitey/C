#include <stdio.h>
#include <stdlib.h>

void funct1(void);
void funct2(void);

void funct3(void)
{
	printf("In funct3.\n");
}

void myMain(void)
{
	printf("In myMain.\n");
	funct1();
	funct2();
	printf("Exiting myMain.\n");

	exit(0);
}

void funct1(void)
{
	printf("In funct1.\n");
}

void funct2(void)
{
	printf("In funct2.\n");
}
