#include "main.h"
/**
 * _sqrt_recursion - getting natural square root of a number.
 * @n: Input number.
 * Return: (The result)
*/
int _sqrt_recursion(int n)
{
	int x = 0;

	while (x * x < n)
	{
		x++;
	}
	if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (-1);
	}
}
