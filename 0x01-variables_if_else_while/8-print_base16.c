#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always zero for success
 */

int main(void)

{
	int n;
	char l;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	for (l = 'a'; l <= 'f'; l++);
	{
		putchar(l);
	}

	putchar('\n');

	return (0);
}
