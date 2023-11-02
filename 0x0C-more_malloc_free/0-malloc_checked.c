/*
 * File: malloc_checked to allocates memory
 *
 * Author: Sherif Awad
 */
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: the size to allocat
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
