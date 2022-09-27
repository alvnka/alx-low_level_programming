#include "main.h"
/**
 * _strspn - funstion to count length of a substring
 * @s: string to be checked
 * @accept: characters that should be in te
 * first segment of S
 * Return: number of characters that match
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0, t = 0;

	for (i = 0; *(s + i) != ' '; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
			t++;
			}
		}
	}
	return (t);
}
