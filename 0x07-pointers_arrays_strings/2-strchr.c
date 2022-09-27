#include "main.h"
/**
 * _strchr - function to locate a character in a string
 * @s: string to be searched in
 * @c: character to be searched for
 * Return:pointer to first occurence
 * and null if not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
