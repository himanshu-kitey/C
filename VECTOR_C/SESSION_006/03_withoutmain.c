#include <stdio.h>

void printHello(void)
{
	printf("Hello World!.\n");
}

int myFirst(void)
{
	printf("my First Function.\n");
	printHello();
	printf("Exiting myFirst Function.\n");
	
	return (0);
}
