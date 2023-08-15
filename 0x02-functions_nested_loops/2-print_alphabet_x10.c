#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*/
void print_alphabet_x10(void)
{
	char alph;
	int index = 0;

	while (index < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		index++;
		_putchar('\n');
	}
}
