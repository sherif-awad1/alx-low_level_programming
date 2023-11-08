/*
 * File: int index
 *
 * Author: Sherif awad
 */
#include "function_pointers.h"
/**
 * int_index - searcbes for an integer on array
 * @array: the array of integer
 * @size: size of array
 * @cmp: function pointer
 * Return: -1 or i
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
