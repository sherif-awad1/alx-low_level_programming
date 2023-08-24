#include "main.h"
#include <stdio.h>
/**
 * print_line - prints
 * @c: buffer
 * @n: bytes of buffe
 * @i: line of buffer
 */

void print_line(char *c, int n, int i)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= n)
			printf("%02x", c[i * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= n; k++)
	{
		if (c[i * 10 + k] > 31 && c[i * 10 + k] < 127)
			putchar(c[i * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
	putchar('\n');
}
