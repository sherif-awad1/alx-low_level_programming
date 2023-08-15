#include "main.h"

/**
 * print_last_digit - print the last digit
 *
 * Return will be the last digit value
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	else
	{
		n *= 1;
	}
	_putchar('0' + (n % 10));

	return (n % 10);
}
