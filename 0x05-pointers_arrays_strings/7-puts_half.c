#include "main.h"

/**
 * puts_half - function that prints half of a string.
 * @str: Input String.
*/
void puts_half(char *str)
{
	int x, length, mid;

	length = strlen(str);
	mid = length / 2;

	for (x = mid; x < length; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
