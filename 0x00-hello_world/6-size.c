#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always zero
 */
int main(void)
{
	int i;
	double d;
	char c;
	
	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of an double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of an c is: %lu.\n", (unsigned long)sizeof(c));

	return (0)
}
