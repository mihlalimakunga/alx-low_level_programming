#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always zero (success)
 */

int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		
		alphabet++;
	}
	
	while (alphabet <= 'Z')
	{
		putchar(ALPHABET);
		
		ALPHABET++;
	}

	putchar('\n');

	return (0);
}
