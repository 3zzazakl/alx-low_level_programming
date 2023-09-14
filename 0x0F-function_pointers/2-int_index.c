#include "function_pointers.h"

/**
 * int_index - searcheing for an integer in array.
 * @array: Input array
 * @size: Length of the array
 * @cmp: Input function Pointer
 * Return: (Index).
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
