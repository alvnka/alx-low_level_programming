#include "main.h"
/**
 * print_square - prints an equivalent
 * number of columns as rows
 * @size: number of columns or rows
 *
 * Return: square
 */

void print_square(int size)
{
	int i = 0, j = 0, k = size;

	if (size == 0)
	{
		_putchar('\n');
		_putchar('\n');
	}
	else
	{
	while (i < size)
	{
		for (j = 0; j < k; j++)
		{
		_putchar('#');
		}
		_putchar('\n');
		i++;
	}
	}
}
