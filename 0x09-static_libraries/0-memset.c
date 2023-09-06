#include "main.h"

/**
 * _memset - fillign memory with a constant byte.
 * @s: Input String.
 * @b: Input Character to fill in string.
 * @n: Size of bit to be filled with it.
 * Return: (String)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
