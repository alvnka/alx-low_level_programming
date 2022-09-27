#include "main.h"
/**
 * _memset - function that fills first characters
 * of memory area pointed to by s with
 * constant byte b.
 *
 * @s: memory area pointed to
 * @b: holds the characters to be replaced by
 * @n:number of characters to be changed
 * Return: pointer to memory address s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	*(s + i) = b;
	}
	return (s);
}
