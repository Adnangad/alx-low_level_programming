#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d grid
 * @grid:pointer to the mem allocated
 * @height:no of rows
 *
 * Return:none.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0 || height == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
