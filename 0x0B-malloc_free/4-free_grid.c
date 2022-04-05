#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid  - frees a 2 dimensional grid created by alloc_grid
 * @grid: pointer to first column of the first row of the array
 * @height: the number of rows in the array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
