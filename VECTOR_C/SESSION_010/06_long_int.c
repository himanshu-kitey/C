#include <stdio.h>

int main(void)
{
	unsigned long int v1 = 0, v2 = 0;
	printf("v1 : %lu\t v2 : %lu\n", v1, v2);
	v1 = v2 - 1;
	printf("v1 : %lu\t v2 : %lu\n", v1, v2);

	return (0);
}
