#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: Input String.
*/
void rev_string(char *s)
{
int x, length;

	length = strlen(s);

	for (x = length; x >= 0; x--)
	{
		_putchar(s[x] + 0);
	}
	_putchar('\n');
}
