#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always zero (success)
 */

int main(void)
{

	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	putchar(alphabet);

	alphabet++;
	}

	putchar('\n');

	return (0);
}
