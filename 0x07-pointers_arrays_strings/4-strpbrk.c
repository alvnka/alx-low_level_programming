#include "main.h"
/**
 * _strpbrk - funstion to count length of a substring
 * @s: string to be checked
 * @accept: characters that should be in te
 * first segment of S
 * Return: characters that match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
			return (s + i);
			}
		}
	}
	return ('\0');
}
