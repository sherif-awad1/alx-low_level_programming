#include "main.h"


/**
 * rev_string - reverses a string
 * @s: to chaeck
 */

void rev_string(char *s)
{
	int l, a, p;
	char c;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	p = a - 1;

	for (l = 0; l < a / 2; l++)
	{
		c = s[l];
		s[l] = s[p];
		s[p--] = c;
	}
}
