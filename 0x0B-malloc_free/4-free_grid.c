/*
 * File: free grid to free 2d array
 *
 * Author: Sherif Awad
 */
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - to free 2d array
 * @grid: 2d array
 * @height: the hight of the 2d array
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height == 0)
		return;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
