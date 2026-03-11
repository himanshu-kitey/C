#include <stdio.h>
void funct2(void);
void funct(void)
{
	printf("In funct.\n");
}

int main(void)
{
	printf("In main.\n");
	funct();
	printf("In main.\n");
	funct2();
	printf("In main.\n");
	
	return (0);
}

void funct2(void)
{
	printf("In funct2.\n");
	funct();
	printf("In funct2.\n");
}
