#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char acharacter;
	int ainteger;
	long int alonginteger;
	long long int alonglonginteger;
	float afloat;
	printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf("Size of a int: %lu byte(s)\n", sizeof(ainteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(alonginteger));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglonginteger));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));
	return (0);
}
