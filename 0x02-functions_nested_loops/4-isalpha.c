#include "main.h"

/**
 * _isalpha checks for alphabetic character.
 * @c to check
 * Return 1 if alphabetic - 0 if nun alphabetic
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || c >= ('A' && c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return(1);
	}
	_putchar('\n');
}
