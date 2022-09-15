#include "main.h"

/**
 * print_numbers - prints the
 * numbers 0 -9 followed by a line
 * @i - loop control value
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
}
