#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array of integer
 * @size: size of array
 * @cmp: pointer to function
 * Return: -1 in no element match and i if matach
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*array[i]) != 0)
			return (i);
	}

	return (-1);
}
