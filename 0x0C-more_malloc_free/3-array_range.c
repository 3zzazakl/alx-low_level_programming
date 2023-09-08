#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: first value in array.
 * @max: last value in array.
 * Return: (array elllments).
*/
int *array_range(int min, int max)
{
	int *arr, size, x;

	if (min > max)
	{
		return (NULL);
	}
	
	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		arr[x] = min + x;
	}
	return (arr);
}
