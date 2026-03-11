#include <stdio.h>

int main(void)
{
	float var = 56789.25;
	printf("var : %f %e\n", var, var);
	var = var * 10;
	printf("var : %f %e\n", var, var);
	var = var/1000000;
	printf("var : %f %e\n", var, var);
	var = -0.0004567;
	printf("var : %f %e\n", var, var);
	var = 4.5;
	printf("var : %f %e\n", var, var);

	return (0);
}

