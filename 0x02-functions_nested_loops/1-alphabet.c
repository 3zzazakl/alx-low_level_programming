#include <stdio.h>

/**
 * print_alphabet - prints the alphabet, in lowercase
*/
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
}
