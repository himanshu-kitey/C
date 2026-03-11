#include <stdio.h>

int main(void)
{
	unsigned long long int v1 = 0, v2 = 0;
	printf("v1 : %llu\t v2 : %llu\n", v1, v2);
	v1 = v1 - 1;
	printf("v1 : %llu\t v2 : %llu\n", v1, v2);

	return (0);
}
