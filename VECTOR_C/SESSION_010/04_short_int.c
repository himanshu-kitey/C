#include <stdio.h>

int main(void)
{
	short int v1 = 0, v2 = 0;
	printf("v1 : %hd\t v2 : %hd\n", v1, v2);
	printf("Enter v1:");
	scanf("%hd", &v1);
	printf("Enter v2:");
	scanf("%hd", &v2);
	printf("v1 : %hd\t v2 : %hd\n", v1, v2);

	return (0);
}
