#include <unistd.h>
#include <ctype.h>

/**
 * main - check the code.
 *
 * @c: The character to check.
 * Return: Always 0.
 */
int _islower(int c);
int _putchar(char c);
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _islower - Checking for lowercase character
 * @c: The character to check.
 *
 * Return: (1) if c is lowercase, otherwise return (0).
*/
int _islower(int c)
{
	if (islower(c) || isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
       }
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
