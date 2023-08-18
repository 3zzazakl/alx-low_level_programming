#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The input value.
*/
void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar(' ');
              _putchar('\\');
              _putchar('\n');
		n--;
	}
	_putchar('\n');
}
