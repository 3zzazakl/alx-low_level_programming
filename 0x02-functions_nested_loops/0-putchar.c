#include "main.h"
/**
 * main - Printing _putchar
 *
 * Return: (Success) 0
 */
int main(void)
{
	char alpha[] = "_putchar";
	int index;

	for (index = 0; index < 8; index++)
	{
		_putchar(alpha[index]);
	}
	_putchar('\n');
	return (0);
}
