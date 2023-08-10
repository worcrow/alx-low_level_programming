#include <stdlib.h>

/**
 * free_grid - free the memory of a 2D array
 * @grid: grid to be free
 * @height: height of the grid
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
