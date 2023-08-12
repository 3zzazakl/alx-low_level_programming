#include <stdio.h>

/**
 * main - printing alpha in reverse
 *
 * Return: (Success) 0
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
