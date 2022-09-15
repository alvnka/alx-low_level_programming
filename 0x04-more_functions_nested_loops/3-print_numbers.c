#include "main.h"

/**
 * print_numbers - prints the
 * numbers 0 -9 followed by a line
 * @i - loop control value
 * Return: 0
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
