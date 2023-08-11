#include <stdio.h>

/**
 * main - printing alphabetic in small characters
 *
 * Return: (Success) 0
*/
int main(void)
{
	char alpha;

	for (alpha = 'a';  alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
