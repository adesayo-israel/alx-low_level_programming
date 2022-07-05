#include <stdio.h>
/**
 * main - print all base 16 number in lower case
 * new line
 * Return: Always 0(success)
 */
int main(void)
{
	int n;
	char lower;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (lower = 'a'; lower <= 'f'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
