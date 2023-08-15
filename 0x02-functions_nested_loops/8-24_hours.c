#include "main.h"

/*
 * jack_burn - will count every minit in the next 24 h
 * return alway 0
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
