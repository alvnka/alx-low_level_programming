#include "main.h"
/**
 * print_diagonal - prints a slash
 * @n: - holds the number of times
 * a diagonal wil be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j = 0;
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	while (n > 0)
	{
		i = j;
		while (i > 0)
		{
		_putchar(' ');
		i--;
		}
	_putchar('\\');
	_putchar('\n');
	j++;
	n--;
	}
	}
}
