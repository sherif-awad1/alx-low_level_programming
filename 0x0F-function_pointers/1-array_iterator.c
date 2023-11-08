/*
 * File: array iterator
 *
 * Author: Sherif Awad
 */
#include "function_pointers.h"
/**
 * array_iterator - excutes a function
 * @array: pointer to array
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
