#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - point to  grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: grid.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w;
	int y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < height; w++)
	{
		grid[w] = malloc(sizeof(int) * width);
		if (grid[w] == NULL)
		{
			for (; w >= 0; w--)
				free(grid[w]);
			free(grid);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (y = 0; y < width; y++)
		{
			grid[w][y] = 0;
		}
	}
	return (grid);
}

