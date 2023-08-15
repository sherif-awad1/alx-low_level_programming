#include "main.h"

/**
 * islower - checks for lowercase character
 *
 * Reruen 1 if true 0 if fuls
 */

int _islower(int c)
{
	if (c >= 'a' && c  <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
