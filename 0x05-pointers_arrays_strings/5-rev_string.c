#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: Input String.
*/
void rev_string(char *s)
{
int x, y, length;
char temp;

	length = strlen(s);

	for (x = 0, y = length - 1; x < y; x++, y--)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
	}
}
