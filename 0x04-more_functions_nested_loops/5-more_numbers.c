#include "main.h"

/**
 * more_numbers - print 10 time the numbers fro 0 to 14
 * follower by new line
 */

void more_numbers(void)
{
	int num, count;

	count = 0;

	while (count <= 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
		count++;
	}
}
