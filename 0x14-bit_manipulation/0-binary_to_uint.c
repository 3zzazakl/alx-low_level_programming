#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: Input number.
 * Return: (Decimal Number).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	int y = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[y] != '\0')
	{
		if (b[y] != '0' && b[y] != '1')
		{
			return (0);
		}
		x <<= 1;
		x += b[y] - '0';
		y++;
	}
	return (x);
}
