#include "main.h"
/**
 * _sqrt_recursion - getting natural square root of a number.
 * @n: Input number.
 * Return: (The result)
*/
int _sqrt_recursion(int n)
{
	int i = 1, result = 1;

	if (n == 0  || n == 1)
	{
		return (n);
	}

	while (result <= n)
	{
		i++;
		result = i * i;
	}
	return (i - 1);
}
