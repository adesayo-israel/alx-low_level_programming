#include "main.h"
/**
 * jack_bauer - every minute print
 * Decription: Program to print every minute
 * Return: void
 */
void jack_bauer(void)
{
	int max_hour, doublenum_hour, singlenum_hour, doublenum_mins, singlenum_mins;

	max_hour = 58;
	doublenum_hour = '0';
	while (doublenum_hour < 3)
	{
		if (doublenum_hour == '2')
		{
			max_hour = '4';
		}
		while (singlenum_hour < max_hour)
		{
			doublenum_mins = '0';
			while (doublenum_mins < '6')
			{
				_putchar(doublenum_hour);
				_putchar(singlenum_hour);
				_putchar(':');
				_putchar(doublenum_mins);
				_putchar(singlenum_mins);
				_putchar('\n');
				singlenum_mins++;
			}
			singlenum_mins = '0';
			doublenum_mins++;
		}
		doublenum_mins = '0';
		singlenum_hour++;
	}
	singlenum_hour = '0';
	doublenum_hour++
}
