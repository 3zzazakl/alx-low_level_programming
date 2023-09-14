#include "function_pointers.h"

/**
 * array_iterator - Print array elements.
 * @array: Input Array of elements
 * @size: Length of array.
 * @action: Input Function Pointer.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t x;

		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
}
