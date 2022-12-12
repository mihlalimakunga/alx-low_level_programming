#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always one (error)
 */
int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(2, err, 59);
	return (1);
}
