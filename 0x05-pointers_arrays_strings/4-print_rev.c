#include "main.h"

/**
 *print_rev - prints a string in reverse, followed by a new line
 *@s: to check
 */

void print_rev(char *s)
{
	int leng = 0, sr, d;

	while (s[leng] != '\0')
	{
		leng++;
	}
	
	d = leng;

	for (sr = d - 1; sr >= 0; sr--)
	{
		_putchar(s[sr]);
	}
	_putchar('\n');
}
