#include "main.h"

/**
 * _pow_recursion - getting value of number power of another.
 * @x: Input number to get its powesr.
 * @y: value of power.
 * Return: (The result)
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}
