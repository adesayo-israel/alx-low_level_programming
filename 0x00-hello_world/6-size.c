#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char bcharacter;
	int binteger;
	long blong;
	long long blonglong;
	float bfloat;
	pritnf("Size of a char: %lu byte(s)\n", sizeof(bcharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(binteger));
	printf("Size of a long: %lu byte(s)\n", sizeof(blong));
	printf("Size of a long long: %lu byte(s)\n", sizeof(blonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(bfloat));
	return (0);
}
