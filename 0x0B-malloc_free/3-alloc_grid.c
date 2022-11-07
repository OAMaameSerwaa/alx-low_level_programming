#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: The width of the 2-dimensional array
 * @height: The height of the 2-dimensional array.
 * Return: pointer to grid or null if w or h is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **grid, a, b;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			while (--a >= 0)
				free(grid[a]);
			free(grid);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
