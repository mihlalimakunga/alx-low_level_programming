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

	printf("%ld\n",sizeof(intType));
	printf("%l\n",sizeof(charType));
	printf("%ld\n",sizeof(longType));
	printf("%ld\n",sizeof(shortType));
	return (0)
}
