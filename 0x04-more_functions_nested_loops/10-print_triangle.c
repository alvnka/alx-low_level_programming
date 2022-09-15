#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: determines the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int k, i, j;

	for (k = 0; k < size; k++)
	{
		if (size < 0)
		{
			_putchar('\n');
		}
		else
		{
			i = size - k;
			while (i > 1)
			{
				_putchar(' ');
				i--;
			}
			j = 0;
			while (j <= k)
			{
				_putchar('#');
				j++;

			}

		_putchar('\n');
		}
	}
}
