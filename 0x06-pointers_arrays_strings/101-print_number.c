#include "main.h"

/**
 * print_number - prints an integer
 * @n: to check
 */

void print_number(int n)
{
	int i, o;

	i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (i <= n / 10)
	{
		i = i * 10;
	}

	while (i > 0)
	{
		o = n / i;
		_putchar(o + '0');
		n = n % i;
		i = i / 10;
	}
}
