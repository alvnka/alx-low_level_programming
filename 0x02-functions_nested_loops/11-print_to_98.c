#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers to 98
 * @n: take number to be checked
 * @int a - local variable used as
 * check limit
 * Return: natural numbers.
 */

void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
	for (a = n; a <= 98; a++)
	{
	printf("%d", a);
		if (a != 98)
		{
		printf(", ");
		}
	}
	}
	else if (n > 98)
	{
	for (a = n; a >= 98; a--)
		{
		printf("%d", a);
		if (a != 98)
		{
		printf(", ");
		}
		}
	}
	printf("\n");
}
