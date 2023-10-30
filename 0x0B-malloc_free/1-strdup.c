/*
 * File:  _strdub copy of string
 *
 * Author: Sherif Awad
 */
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return copy of string
 * @str: the string
 * Return: null or string
 */

char *_strdup(char *str)
{
	unsigned int i = 0, len = 0;
	char *nstr;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc((len + 1) * sizeof(char));

	if (nstr == NULL)
		return (NULL);

	while ((nstr[i] = str[i]) != '\0')
	{
		i++;
	}
	return (nstr);
}
