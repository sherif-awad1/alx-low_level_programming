/*
 * File: creat array to creat an array
 *
 * Author: Sherif Awad
 */
#include "main.h"
#include <stdlib.h>

/**
 * create_array - to creat an array
 * @size: array size
 * @c: char
 * Return: s or NULL
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *s = malloc(size * sizeof(char));

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		*(s + i) = c;
		i++;
	}
	return (s);
}
