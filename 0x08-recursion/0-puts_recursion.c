#include "main.h"

/**
 * _puts_recursion - prints a string and new line
 * @s: string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
	_putchar(*(s + i));
	i++;
	_puts_recursion((s + i));
	}
	else
	{
		_putchar('\n');
	}
}
