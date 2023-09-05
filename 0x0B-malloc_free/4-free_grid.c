#include "main.h"
#include <stdlib.h>

/**
 * free_grid - to free 2d arry
 * @grid: is 2d arry to free
 * @height: haight of the grid
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
