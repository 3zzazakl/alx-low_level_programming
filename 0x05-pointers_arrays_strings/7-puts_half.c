#include "main.h"

/**
 * puts_half - function that prints half of a string.
 * @str: Input String.
*/
void puts_half(char *str)
{
	int x, length, mid;

	length = strlen(str);

	if (length % 2 == 0)
	{
		mid = length / 2;
	}
	else
	{
		mid = (length + 1) / 2;
	}
	for (x = mid; x < length; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
