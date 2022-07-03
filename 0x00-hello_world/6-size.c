#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float d;
	pritnf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", sizeof(d));
	return (0);
}
