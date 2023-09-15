#include "variadic_functions.h"

/**
 * print_all -  a function that prints anything.
 * @format:  is a list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *s;

	va_start(ap, format);

	while (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			default:
				i++;
				continue;
			}
			i++;
			if (format[i])
				printf(", ");
		}
		break;
	}
	printf("\n");
	va_end(ap);
}
