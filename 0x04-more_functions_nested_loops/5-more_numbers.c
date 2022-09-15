#include "main.h"

/**
 * more_numbers - prints number 1-14
 * 10 times
 *
 * Return: void;
 */

void more_numbers(void)
{
	int i =0, j = 0;

	while (i < 10)
	{
		while (j <= 14)
		{
		_putchar(i);
		j++;
		}
	_putchar('\n');
	i++;
	}
}
