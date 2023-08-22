#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: Input String.
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x += 2)
	{
		printf("%c", str[x]);
	}
	printf("\n");
}
