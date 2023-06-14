#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2D grid.
 * @grid: 2 dimensional grid.
 * @height: height of the grid.
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}
	free(grid);
}
