#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: The size of triangle.
*/
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= (size - x); y++)
			{
				_putchar(' ');
			}
			for (y = 1; y <= x ; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
