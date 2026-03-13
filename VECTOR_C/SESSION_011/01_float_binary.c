#include <stdio.h>

union tag
{	
	float f;
	int i;
};

int main(void)
{
	union tag var;
	int bit;
	printf("Enter a Floating Point Data:");
	scanf("%f", &var.f);
	printf("Binary is:");
	for(bit = 31; bit >=0; bit--)
	{
		printf("%d", (var.i >> bit) &1);
		if(bit % 8 == 0)
			printf(" ");
	}
	printf("\n");

	return (0);
}

