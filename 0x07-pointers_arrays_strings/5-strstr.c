#include "main.h"
/**
 * _strstr - funstion to count length of a substring
 * @haystack: string to be checked
 * @needle: string that should be in te
 * of haystack
 * Return: characters that match
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j = 0;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; ((*(needle + j)) == (*(haystack + i)))
		&& (*(needle + j) != '\0') && (*(haystack + j)); j++)
		{
			if (*(haystack + i) == *(needle + j))
			{
			return (haystack + i);
			}
		}
	}
	return (0);
}
