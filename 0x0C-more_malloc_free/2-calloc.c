/*
 * File: colloc allocate memmory for array
 *
 * Author: Sherif Awad
 */
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: the array
 * @size: size of array
 * Return: NULL or array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;
	return (array);
}
