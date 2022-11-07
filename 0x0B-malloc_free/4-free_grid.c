#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional integer grid created by alloc_grid
 * @grid: 2-dimensional array to be freed
 * @height: height of grid
 * Return: void, frees memory
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
