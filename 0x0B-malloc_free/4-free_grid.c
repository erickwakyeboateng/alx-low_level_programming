#include "main.h"

/**
 * free_grid - function to allocate memory to grid
 *
 * @grid: int pointer
 *
 * @height: int arg
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}
