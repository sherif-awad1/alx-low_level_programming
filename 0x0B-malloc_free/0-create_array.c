#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creat an array of chars
 * @size: longeth of the array
 * @c: specigic char
 * Return: 0 if size 0 return recursion
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *s = malloc(size * sizeof(char));

	if (size == 0 && s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		*(s + i) = c;
		i++;
	}
	*(s + i) = '\0';

	return (s);
}


