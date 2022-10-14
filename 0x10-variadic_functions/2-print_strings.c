#include "variadic_functions.h"
/**
 * print_strings - function to print strings
 * @separator: string that seperates them
 * @n: number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int  i;
	char *check;

	va_list(no);
	va_start(no, n);
	for (i = 0; i < n; i++)
	{
		check = va_arg(no, char *);
		if (*check == '\0')
		{
			printf("nil");
		}
		else
		{
			printf("%s", check);
		}
		if ((i != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(no);
}
