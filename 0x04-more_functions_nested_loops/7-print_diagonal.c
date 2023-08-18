#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The input value.
*/
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (x == y)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
}
