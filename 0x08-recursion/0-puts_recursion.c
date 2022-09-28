#include "main.h"

/**
 * _puts_recursion - prints a string and new line
 * @s: string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	{
	_putchar(*(s + i));
	i++;
	_puts_recursion((s + i));
	}
	if (s[i] == '\0' || (s + i) == NULL)
	{
		_putchar('\n');
	}
}
