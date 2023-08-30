#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - getting natural square root of a number.
 * @n: Input number.
 * Return: (The result)
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return(sqrt(n));
}
