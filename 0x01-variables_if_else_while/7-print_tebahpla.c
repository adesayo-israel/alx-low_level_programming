#include <stdio.h>
/**
 * main - prints the lower case alphabet in reverse
 * follwed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
