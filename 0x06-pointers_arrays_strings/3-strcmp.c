#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: String1
 * @s2: string2
 * Return: 0 if equal,
 * Return: -15 if s2 is greater than s1
 * Return: 15 if s1 is grater than s2
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	if (*s1 == *s2)
	{
		i = 0;
	}
	else if (*s1 > *s2)
	{
		i = 15;
	}
	else if (*s1 < * s2)
	{
		i = -15;
	}
	return (i);
}
