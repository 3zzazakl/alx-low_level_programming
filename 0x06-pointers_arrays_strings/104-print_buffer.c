#include "main.h"
/**
 * print_line - print bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer.
 * @l: line of buffer to print.
 */
void print_line(char *c, int s, int l)
{
	int j, k;

	for (j = 0; j < 10; j++)
	{
		if (j < s)
			printf("%02x", c[l * 10 + j]);
		else
			printf(" ");
		if (j % 2)
			putchar(' ');
	}
	printf(" ");

	for (k = 0; k < 10; k++)
	{
		if (k < s && c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
			putchar(c[l * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - printing a buffer
 * @b: buffer
 * @size: size
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i < (size + 9) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i * 10 < size)
			print_line(b, size - i * 10, i);
		else
			print_line(b, 0, i);
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
