#include "main.h"
#include <stdlib.h>

/**
 * print_s - print the string
 * @n: pointter to the string
 */

void print_s(char *n)
{
	int i = 0;

	while (n[i])
	{
		_putchar(n[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * _atoi - change the string to int
 * @c: the string
 * Return: the int of the string
 */

int _atoi(char *c)
{
	int s = 1;
	unsigned long int r = 0, f, i;

	for (f = 0; !(c[f] >= 48) && (c[f] <= 57) ; f++)
	{
		if (c[f] == '-')
			s *= -1;
	}
	for (i = f; (c[i] >= 48) && (c[i] <= 57); i++)
	{
		r *= 10;
		r += (c[i] - 48);
	}
	return (s * r);
}

/**
 *print_i - print the integer
 *@n: integer
 */

void print_i(unsigned long int n)
{
	unsigned long int dev = 1, i, r;

	for (i = 0; n / dev > 9; i++, dev *= 10)
		;
	for (; dev >= 1; n %= dev, dev /= 10)
	{
		r = n / dev;
		_putchar('0' + r);
	}
}


/**
 * main - for multiplay 2 integer
 * @argc: count of argments
 * @argv: ponter to the veriabel
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_s("Error ");
		exit(98);
	}
	print_i(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
