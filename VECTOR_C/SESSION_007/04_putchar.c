#include <stdio.h>

int main(void)
{
	char var1;
	char var2 = 'A';
	putchar('a');
	putchar(var1);
	putchar(var2);
	putchar(var2 + 1);
	var1 = var2 + 1;

	var2 = var1 + 32;
	putchar(var1);
	putchar(var2);
	putchar('*');
	putchar('5');

	return (0);
}
