#include <stdio.h>

/**
 * main - entry point
 *
 * Return: zero for success
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
