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

	print("Size of int: %ld bytes\n",sizeof(intType));
	print("Size of char: %ld bytes\n",sizeof(charType));
	print("Size of long: %ld bytes\n",sizeof(longType));
	print("Size of short: %ld bytes\n",sizeof(shortType));
	return (0)
}
