#include "variadic_functions.h"
/**
 * print_all - functions that prints every data type
 * @format: is a list of types
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *p, *separator = "";

	va_list(valist);

	va_start(valist, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(valist, int));
				break;
			case 'i':
				printf("%s%i", separator, va_arg(valist, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(valist, double));
				break;
			case 's':
				p = va_arg(valist, char *);
				if (!p)
					p = "(nil)";
				printf("%s%s", separator, p);
				break;
			default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(valist);
}
