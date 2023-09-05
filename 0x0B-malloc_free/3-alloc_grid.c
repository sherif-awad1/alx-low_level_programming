#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - return pointer to 2d array
 *
 * @width: the row
 * @height: the colm
 * Return: Null on failure
 */

int **alloc_grid(int width, int height)
{
	int **arry, i, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	arry = (int **) malloc(height * sizeof(int *));

	if (arry == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arry[i] = (int *) malloc(sizeof(int) * width);
		if (arry[i] == NULL)
		{
			free(arry);
			for (k = 0; k <= i; k++)
				free(arry[k]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
		{
			arry[i][k] = 0;
		}
	}
	return (arry);
}
