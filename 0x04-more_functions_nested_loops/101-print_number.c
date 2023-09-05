#include "main.h"

/**
 * print_number - printing an integer.
 * @n: Input number.
*/
void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	if (n / 10)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
