#include <stdio.h>

int main(void)
{
	char var = '2';
	printf("var : %c....%d\n", var, var);
	var = var * 2;
	printf("var : %c....%d\n", var, var);
	var = var * 2;
	printf("var : %c....%d\n", var, var);
	var = '?';
	printf("var : %c....%d\n", var, var);

	return(0);
}
