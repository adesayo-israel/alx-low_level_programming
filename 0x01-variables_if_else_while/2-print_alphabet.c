#include <stdio.h>
/**
 * main - Print lowercase
 * alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
