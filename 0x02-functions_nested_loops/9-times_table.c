#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 9 multiples
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
		{
		for (b = 0; b <= 9; b++)
			{
			c = a * b;
			if (a == 0 && c == 0)
				{
				printf("%d,", c);
				}
			if (c < 10 && a > 0)
				{
				printf("  %d,", c);
				}
			if (c > 10)
				{
				printf(" %d,", c);
				}
			}
		_putchar("\n");
		}
}
