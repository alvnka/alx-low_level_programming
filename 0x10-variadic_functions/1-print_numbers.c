#include "variadic_functions.h"
/**
 * print_numbers -  functions that prints the numbers
 * @separator: a string to  seperate the numbers
 * @n: the number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

		unsigned int i;

		va_list(no);
		va_start(no, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(no, int));
			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(no);
}
