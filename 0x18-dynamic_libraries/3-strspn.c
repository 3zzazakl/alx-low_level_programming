#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The input string.
 * @accept: The required string.
 * Return: (string representation of the string).
*/
unsigned int _strspn(char *s, char *accept)
{
	int x, length, y;

	length = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				length++;
				break;
			}
		}
		if (s[x] != accept[y])
		{
			return (length);
		}
	}
	return (length);
}
