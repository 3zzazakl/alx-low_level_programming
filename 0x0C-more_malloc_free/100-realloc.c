#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: input pointer
 * @old_size: Old size
 * @new_size: new size
 * Return: (ptr)
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	int printed_size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	}

	new_ptr = malloc(new_size);

	printed_size = ((old_size < new_size) ? old_size : new_size);
	memcpy(new_ptr, ptr, printed_size);

	free(ptr);
	return (new_ptr);
}
