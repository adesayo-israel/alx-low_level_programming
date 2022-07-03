#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char ccharacter;
	int iinteger;
	long llong;
	long long llonglong;
	float dfloat;
	pritnf("Size of a char: %lu byte(s)\n", sizeof(ccharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(iinteger));
	printf("Size of a long: %lu byte(s)\n", sizeof(llong));
	printf("Size of a long long: %lu byte(s)\n", sizeof(llonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(dfloat));
	return (0);
}
