#include "main.h"
#include <stdlib.h>

/**
 * *_strleng - count the length of string
 * @str: point to the string
 * Return: leng
 */

int _strleng(char *str)
{
	unsigned int leng = 0;

	while (str[leng])
	{
		leng++;
	}

	return (leng);
}

/**
 * *_strdup - return pointer to a new string
 * @str: the argment point to the string
 * Return: NULL or str
 */

char *_strdup(char *str)
{
	unsigned int i, leng;
	char *sr;

	i = 0;
	leng = _strleng(str);

	if (str == NULL)
		return (NULL);


	sr = malloc((leng + 1) * sizeof(char));
	

	if (sr == NULL)
		return (NULL);


	while ((sr[i] = str[i]) != '\0')
	{
		i++;
	}

	return (sr);
}
