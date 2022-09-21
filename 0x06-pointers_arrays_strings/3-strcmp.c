#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: String1
 * @s2: string2
 * Return: j storing appropriate value
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
	else if (*s1 < *s2)
	{
		i = -15;
	}
	return (i);
}
