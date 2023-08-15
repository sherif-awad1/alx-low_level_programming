#include "main.h"

/**
 * main -  prints 10 times the alphabet, in lowercase
 *
 * Return - Always 0 sucssess
 */

void print_alphabet_x10(void)
{
	int alpha = 0;
	char alpha1 = 'a';

	while (alpha <= 10)
	{
		while (alpha1 <= 'z')
		{
			_putchar(alpha1);
		}
		alpha++;
	}
	_putchar('\n')
}
