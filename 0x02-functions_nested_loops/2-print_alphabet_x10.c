#include "main.h"
/**
 * print_alphabet_x10 - pritn alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int loop = 0;
	char latter = 'a';

	while (loop < 10)
	{
		latter = 'a';
		while (latter <= 'z')
		{
			_putchar(latter);
			latter++;
		}
		_putchar('\n');

		loop++;
	}
}
