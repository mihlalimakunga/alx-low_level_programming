#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always zero for success
 */

int main(void)

{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
