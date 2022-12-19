#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always zero for success
 */

int main(void)

	{
		int x;
		char y;

		for (x = '0'; x <= '9'; x++)
		{
			putchar(x);
		}

		for (y = 'a', y <= 'f'; y++)
		{
			putchar(y);
		}

		putchar('\n');

		return (0);
	}
