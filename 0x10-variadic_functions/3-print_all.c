#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_char - functions that prints a char
 * @args: arguments
 * Return: void
 */
void print_char(va_list args)
{
	char character;

	character = va_arg(args, int);
	printf("%c", character);
}
/**
 * print_int - prints an integer
 * @args: argument
 */
void print_int(va_list args)
{
	int number;

	number = va_arg(args, int);
	printf("%d", number);
}
/**
 * print_string - prints a string
 * @args: argument
 */
void print_string(va_list args)
{
	char *str;
	str = va_arg(args, char *);
	if (*str == '\0')
	{
		printf("nil");
		return;
	}
	else
	{
		printf("%s", str);
	}
}
/**
 * print_float - prints a loat
 * @args: arguments
 */
void print_float(va_list args)
{
	float float_p;

	float_p = va_arg(args, double);
	printf("%f", float_p);
}
/**
 * print_all - functions that prints every data type
 * @format: is a list of types
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator = "";

	va_list(arg);

	void (*printer_funcs[])(int) = {
				{"c", print_char},
				{"i", print_int},
				{"f", print_float},
				{"s", print_string},
			};


	va_start(args, format);
		while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
