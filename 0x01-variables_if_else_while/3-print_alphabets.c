#include <stdio.h>

/**
 * main - printing alpha with small & capital letters
 *
 * Return: (Success) 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('$');
	putchar('\n');
	return (0);
}
