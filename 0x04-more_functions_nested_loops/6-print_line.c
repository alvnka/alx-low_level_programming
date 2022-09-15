#include "main.h"

/**
 * print_line - prints a line
 * Return: character
 */

void print_line(int n)
{
	int i;
	
	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
