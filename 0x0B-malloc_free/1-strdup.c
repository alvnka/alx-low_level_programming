#include "main.h"
/**
 * _strdup - functions that returns pointer
 * to newly allocated space in memory containing
 * a copy of the string given as a parameter
 * @str: string to be copied
 * Return: pointer to new string
 * NULL if string is null
 */
char *_strdup(char *str)
{
	char *cpystr;
	int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; *(str + i) != '\0'; i++)
	{
		;
	}
	cpystr = (char *)malloc(sizeof(char) * (i + 1));

	if (cpystr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		cpystr[j] = *(str + j);
	}
	return (cpystr);
}
