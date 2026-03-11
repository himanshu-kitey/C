#include <stdio.h>

int main(void)
{
	char var1;
	char var2 = 'A';
	printf("var1 : %c\n", var1);
	printf("var2 : %c\n", var2 + 2);
	var1 = var2 + 1;
	var2 = var1 + 32;
	printf("var1 : %c\n", var1);
	printf("var1 : %c\n", var2);

	return (0);
}
