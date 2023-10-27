#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: to compaire and get the result
 * Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
			j++;
		}
		if (!*(accept + j))
		{
			return (i);
		}
		i++;
	}
	return (i);
}
