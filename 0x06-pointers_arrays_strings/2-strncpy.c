#include "main.h"
/**
 * _strncpy - a function to copy end string
 * to first
 * @dest: holds beginning of intended string
 * @src: is the string to be added to *dest
 * @n: max bytes *src can copy
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0, j = 0;

	while (src[count] != '\0')
	{
		count++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
		dest[j] = src[j];
		}
	}

	if (n >= count && j != 0)
	{
		dest[j] = '\0';
	}

	return (dest);
}
