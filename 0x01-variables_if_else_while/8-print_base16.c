#include <stdio.h>

/**
 * main - print hexadecimal numbers
 *
 * Return: (Success) 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else
		{
			putchar('a' + (num - 10));
		}
	}
	putchar('\n');
	return (0);
}
