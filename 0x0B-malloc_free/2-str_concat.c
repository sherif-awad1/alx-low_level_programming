#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first strange to concat
 * @s2: the other strange
 * Return: null or the concat string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int leng1, leng2, i, k;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	leng1 = 0;
	leng2 = 0;
	i = 0;
	k = 0;

	while (*(s1 + leng1))
		leng1++;
	while (*(s2 + leng2))
		leng2++;

	s3 = malloc((leng1 + leng2) + 1);

	if (s3 == NULL)
	{
		return (NULL);
	}

	while (i < leng1)
	{
		*(s3 + i) = *(s1 + i);
		i++;
	}

	while (k <= leng2)
	{
		*(s3 + k + leng1) = *(s2 + k);
		k++;
	}

	return (s3);
}
