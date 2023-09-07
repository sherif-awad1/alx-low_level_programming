#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory of block
 * @ptr: the pointer to the memory
 * @old_size: the old size
 * @new_size: the new size in bytes
 * Return: NULL or ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	unsigned int i;

	if (new_size > old_size)
	{
		free(ptr);
		ptr = (int *) malloc(new_size);

		if (ptr == NULL)
			return (NULL);
		else
			return (ptr);
	}

	if (ptr == NULL)
	{
		return (ptr = (int *) malloc(new_size));
		if (ptr == NULL)
			return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
