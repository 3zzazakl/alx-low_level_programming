#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: input separator.
* @n: number of args.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int x;

	char *str;

	va_start(args, n);

	if (separator == NULL)
	{
		separator = "";
	}
	for (x = 0; x < n; x++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
