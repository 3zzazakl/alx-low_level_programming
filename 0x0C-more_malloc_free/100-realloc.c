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

	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	else if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	}
	
	free(ptr);
	return (ptr);
}
