#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creat an array
 * @min: the integer
 * @max: the integer
 * Return: null or pointer
 */

int *array_range(int min, int max)
{
	int i;
	int *num;

	if (min > max)
		return (NULL);


	num = malloc(sizeof(int) * (max - min + 1));

	if (num == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		num[i - min] = i;
	}

	return (num);
}
