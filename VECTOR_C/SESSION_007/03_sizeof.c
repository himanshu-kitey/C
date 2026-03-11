#include <stdio.h>

int main(void)
{
	int v1 = 0;
	char v2 = 0;
	float v3 = 0;
	double v4 = 0;
	long double v5 = 0;
	char *v6;

	printf("sizeof(v1) : %lu\n", sizeof(v1));
	printf("sizeof(v2) : %lu\n", sizeof(v2));
	printf("sizeof(v3) : %lu\n", sizeof(v3));
	printf("sizeof(v4) : %lu\n", sizeof(v4));
	printf("sizeof(v5) : %lu\n", sizeof(v5));
	printf("sizeof(v6) : %lu\n", sizeof(v6));
	printf("sizeof(void) : %lu\n", sizeof(void));

	return (0);
}
