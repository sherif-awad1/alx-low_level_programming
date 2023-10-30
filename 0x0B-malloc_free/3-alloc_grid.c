/*
 * File: alloc grid  returns a pointer to a 2 dimensional array of integers
 *
 * Author: Sherif Awad
 */
#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - return 2d array
 * @width: the width of the array
 * @height: height of array
 * Return: 2d array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **) malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
