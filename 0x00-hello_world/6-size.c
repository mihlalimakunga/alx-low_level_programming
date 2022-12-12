#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always zero
 */
int main()
{
	char charType;
	int intType;
	long longType;
	short shortType;

	printf("Size of int: %ld bytes\n",sizeof(intType));
	printf("Size of char: %ld bytes\n",sizeof(charType));
	printf("Size of long: %ld bytes\n",sizeof(longType));
	printf("Size of short: %ld bytes\n",sizeof(shortType));
	return (0)
}
