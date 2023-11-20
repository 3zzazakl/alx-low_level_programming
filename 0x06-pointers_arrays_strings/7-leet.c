#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @s: Input String.
 * Return: (Encoded String).
*/
char *leet(char *s)
{
	int i, j;
	char let[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == let[j] || s[i] - 32 == let[j])
				s[i] = j + '0';
		}
		i++;
	}
	return (s);
}
