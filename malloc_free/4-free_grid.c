#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid
 * @grid: the grid to free
 * @height: the number of rows of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL)
		return;
	h = 0;
	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
