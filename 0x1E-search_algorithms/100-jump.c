#include "search_algos.h"
/**
 * jump_search - searches for value in sorted array using Jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size), prev = 0;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

	while (array[(int)fmin(step, (int)size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= (int)size)
		{
			printf("Value found between indexes [%d] and [%d]\n",
				prev - (int)sqrt(size), prev);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%d] and [%d]\n",
		prev - (int)sqrt(size), prev);

	while (array[prev] < value)
	{
		prev++;
		if (prev == fmin(step, (int)size))
		{
			printf("Value found between indexes [%d] and [%d]\n", prev - 1, prev);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		printf("Found %d at index: %d\n", value, prev);
		return (prev);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev - 1, prev);
	return (-1);
}
