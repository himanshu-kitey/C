#include <stdio.h>

int main(void)
{
	unsigned short int v1 = 0,v2 = 0;
	printf("v1 : %hu\t v2 : %hu\n", v1, v2);
	v1 = v2 - 1;
	printf("v1 : %hu\t v2 : %hu\n", v1, v2);

	return (0);
}

