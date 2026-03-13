#include <stdio.h>

union tag
{
	double d;
	long long int i;
};

int main(void)
{
	union tag var;
	int bit;
	printf("Enter double precision float value:");
	scanf("%lf", &var.d);
	printf("Binary is:");
	for(bit = 63; bit >= 0; bit--)
	{
		printf("%lld", (var.i >> bit) &1);
		if(bit % 8 == 0)
			printf("  ");
	}
	printf("\n");

	return (0);
}
