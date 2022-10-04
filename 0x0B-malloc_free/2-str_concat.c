#include "main.h"

/**
 * str_concat - function to concatenate two strings
 * @s1: string one
 * @s2: string 2
 * Return: pointer to concatened string
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_string;
	int i, j, l, m;

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		;
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		;
	}
	concat_string = (char *)malloc(sizeof(char) * (j + i + 1));
	for (l = 0; l < i; l++)
	{
		concat_string[l] = *(s1 + l);
	}
	for (m = 0; m <= j; m++)
	{
		concat_string[l + m] = *(s2 + m);
	}
	return (concat_string);
	free(concat_string);
}
