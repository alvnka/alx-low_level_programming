#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: holds the string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0, i = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (i = a - 1; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
