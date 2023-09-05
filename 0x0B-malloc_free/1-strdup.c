#include "main.h"
#include <stdlib.h>


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
	leng = 0;

	if (str == NULL)
		return (NULL);

	while (str[leng] != '\0')
	{
		leng++;
	}

	sr = malloc((leng + 1) * sizeof(char));


	if (sr == NULL)
		return (NULL);


	while ((sr[i] = str[i]) != '\0')
	{
		i++;
	}

	return (sr);
}
