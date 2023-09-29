#include "main.h"

/**
 * flip_bits - get number of bits you flip to get from one number to another.
 * @n: input number 1.
 * @m: Input number 2.
 * Return: (numer of bits).
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x > 0)
	{
		if (x & 1)
		{
			count++;
		}
		x >>= 1;
	}
	return (count);
}
