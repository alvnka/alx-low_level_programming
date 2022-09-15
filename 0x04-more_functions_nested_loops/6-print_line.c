#include "main.h"

/**
 * print_line - prints a line
 * @n: hold value to be compared
 * Return: character
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = n;

		while (i > 0)
		{
		_putchar('_');
		i--;
		}
		_putchar('\n');

	}
}
