#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: holds the string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	for (str[i]; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
