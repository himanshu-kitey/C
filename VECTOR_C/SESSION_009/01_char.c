#include <stdio.h>

int main(void)
{
	char var1;
	char var2 = 'A';
	printf("%c", 'a');
	printf("%c", var1);
	printf("%c", var2 + 2);
	var1 = var2 + 1;
	var2 = var2 + 32;
	printf("%c", var1);
	printf("%c", var2);

	return (0);
}
