#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: Input type.
 * Return: (Address of ptr)
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
