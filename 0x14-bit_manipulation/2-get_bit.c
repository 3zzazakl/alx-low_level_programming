#include "main.h"

/**
 * get_bit - getting value of a bit at a given index
 * @n: Input number.
 * @index: Index of value
 * Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
