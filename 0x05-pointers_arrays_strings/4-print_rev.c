#include "main.h"
/**
 * print_rev - prints a string, in reverse.
 * @s: Input string.
*/
void print_rev(char *s)
{
	int x, length;

	length = strlen(s);

	for (x = length; x >= 0; x--)
	{
		_putchar(s[x] + 0);
	}
	_putchar('\n');
}
