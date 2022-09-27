#include "main.h"
/**
 * _strstr - funstion to count length of a substring
 * @s: string to be checked
 * @accept: string that should be in te
 * first segment of S
 * Return: characters that match
 */

char *_strstr(char *s, char *accept)
{
	unsigned int i, j = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; (*(accept + j)) == (*(s + i)); j++)
		{
			if (*(s + i) == *(accept + j))
			{
			return (s + i);
			}
		}
	}
	return ('\0');
}
