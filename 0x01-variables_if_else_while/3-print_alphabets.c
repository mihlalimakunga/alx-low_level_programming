#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always zero (success)
 */

int main(void)
{
	char x;

	for(x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	
	for(x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	
	putchar('\n');

	return (0);
}
