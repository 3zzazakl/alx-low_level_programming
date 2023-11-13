#include "main.h"

/**
 * _strpbrk - Searching a string for any of a set of bytes.
 * @s: Input string.
 * @accept: Required String.
 * Return: (the searched string).
*/
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (&s[x]);
		}
	}

	return (NULL);
}
