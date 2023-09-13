#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL ||  action == 0)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
