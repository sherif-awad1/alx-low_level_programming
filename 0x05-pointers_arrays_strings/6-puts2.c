#include "main.h"

/**
 * puts2 - prints every other character of stinge
 * @str: to check
 */

void puts2(char *str)
{
	int leng, a;

	while (str[leng] != '\0')
	{
		leng++;
	}

	for (a = 0; a <= leng; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
