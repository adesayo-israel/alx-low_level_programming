#include "main.h"
/**
 * jack_bauer - every minute print
 * Decription: Program to print every minute
 * Return: void
 */
void jack_bauer(void)
{
	int doublenum_hour, singlenum_hour, doublenum_mins, singlenum_mins;

	doublenum_hour = 0;
	singlenum_hour = 0;
	doublenum_mins = 0;
	singlenum_mins = 0;
	while (doublenum_hour < '3')
	{
		while (singlenum_hour < '5')
		{
			while (doublenum_mins < '7')
			{
				while (singlenum_mins < 10)
				{
					_putchar(doublenum_hour);
					_putchar(singlenum_hour);
					_putchar(':');
					_putchar(doublenum_mins);
					_putchar(singlenum_mins);
					_putchar('\n');
					singlenum_mins++;
				}
			doublenum_mins++;
			}
		singlenum_hour++;
		}
	doublenum_hour++;
	}
}
