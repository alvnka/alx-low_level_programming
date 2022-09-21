#include "main.h"
/**
 * _strncpy - a function to copy second
 * parameter strings to first
 * @dest: holds beginning of intended string
 * @src: is the string to be added to *dest
 * @n: max bytes *src can have
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;
{
	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
		dest[i] = src[j];
		}
		i++;
	}
	if (j != 0)
	{
	dest[i] = '\0';
	}
	return (dest);
}
