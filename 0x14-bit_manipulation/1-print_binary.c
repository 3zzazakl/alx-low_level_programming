#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: Input number
 * Return: (Binary number)
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 1));
}
