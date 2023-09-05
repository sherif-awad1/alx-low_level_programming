#include "main.h"
#include <stdlib.h>

/**
 * _strleng - count the length of string
 * @str: string we count
 * Return: the string
 */

int _strleng(char *str)
{
	unsigned int leng = 0;

	while (str[leng] != '\0')
	{
		leng++;
	}
	return (leng);
}

/**
 * *str_concat - concatenates two strings
 * @s1: first strange to concat
 * @s2: the other strange
 * Return: null or the concat string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int leng1, leng2, i;
	char *s3;
	leng1 = _strleng(s1);
	leng2 = _strleng(s2);
	

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
	{
		s2 = "\0";
	}

	s3 = malloc((leng1 + leng2 + 1) * sizeof(char));

	if (s3 == NULL)
		return(0);

	for (i = 0; i <= (leng1 + leng2); i++)
		{
			if (i < leng1)
			{
				s3[i] = s1[i];
			}
			else
			{
				s3[i] = s2[i - leng1];
			}
		}
	s3[i] = '\0';

	return (s3);
}

