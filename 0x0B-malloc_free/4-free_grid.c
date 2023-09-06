#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously.
 * @grid: Input matrix.
 * @height: Size of matrix.
*/
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL)
	{
		return;
	}

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
