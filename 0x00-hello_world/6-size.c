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
	long int long_intType;
	long long int long_long_intType;
	float floatType;

	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(long_intType));
	printf("Size of long long int: %zu bytes\n", sizeof(long_long_intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	return (0);
}
