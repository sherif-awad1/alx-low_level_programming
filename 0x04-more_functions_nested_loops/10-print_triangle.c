#include "main.h"

/**
 * print_triangle - print a triangle
 * followed by new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int a, b;

	if (size == 0)
		_putchar('\n');

	for (a = 0; a <= size; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
