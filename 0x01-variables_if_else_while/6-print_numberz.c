#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always zero
 */

int main(void)

{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
