#include "main.h"

/**
 * _atoi - comvert a sting to an integer
 * @s: to check
 * Return: 0 if there is no number in string
 */

int _atoi(char *s)
{
	int leng = 0, a = 0, b = 0, c = 0, d = 0, h = 0;

	while (s[leng] != '\0')
	{
		leng++;
	}
	while (a < leng && b == 0)
	{
		if (s[a] == '-')
		{
			++c;
		}

		if (s[a] >= '0' && s[a] <= '9')
		{
			d = s[a] - '0';
			if (c % 2)
			{
				d = -d;
			}
			h = h * 10 + d;
			b = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
			{
				break;
			}
			b = 0;
		}
		a++;
	}
	if (b == 0)
		return (0);
	return (h);
}
