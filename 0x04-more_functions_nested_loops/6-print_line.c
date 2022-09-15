#include "main.h"

/**
 * print_line - prints a line
 * @n: hold value to be compared
 * Return: character
 */

void print_line(int n)
{
	int i;

	while (i <= n)
	{
		_putchar('_' + '0');
		i++;
	}
	_putchar('\n');
}
