#include "main.h"


/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hour = 0;
	int mint = 0;
	while (hour < 24)
	{
		while (mint < 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (mint / 10));
			_putchar('0' + (mint % 10));
			_putchar('\n');
			mint++;
		}
		mint = 0;
		hour++;
	}
}
