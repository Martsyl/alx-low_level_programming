#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free grids
 * @grid: integer
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int u;

	for (u = 0; u  < height; u++)
	{
		free(grid[u]);
	}
	free(grid);
}

