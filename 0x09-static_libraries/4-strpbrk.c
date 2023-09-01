#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: the string we will serch in
 * @accept: the string will compare to
 * Return: accept or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;


	if (*s == '\0' || *accept == '\0')
	{
		return ('\0');
	}

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			{
				if (*s == accept[j])
				{
					return (s);
				}
			}
		}
		s++;
	}
	return ('\0');
}
