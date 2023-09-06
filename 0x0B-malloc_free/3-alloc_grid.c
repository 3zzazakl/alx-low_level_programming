#include "main.h"

/**
 * alloc_grid - Print a pointer to a 2 dimensional array of integers.
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: ()
*/
int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);

		if (matrix[i] == NULL)
		{
			for (--i; i >= 0; i--)
			{
				free(matrix[i]);
			}
			free(matrix);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
