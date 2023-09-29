#include "main.h"

/**
 * get_endianness - checking endianness
 * Return: (0) if big or (1) if little.
 */
int get_endianness(void)
{
	int x = 2;

	if (x & 1)
	{
		return (0);
	}

	return (1);
}
