#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory fo array
 * @nmemb: array
 * @size: size of array
 * Return: null or pointer to the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arry;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arry = malloc(nmemb * size);

	if (arry == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arry[i] = 0;
	return (arry);
}
