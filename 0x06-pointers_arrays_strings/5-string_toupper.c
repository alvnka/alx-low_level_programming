#include "main.h"

/**
 * string_toupper - changes lower case to upper
 * @a: holds the characters to be converted
 * Return: converted pointer
 */

char *string_toupper(char *a)
{
	int counter = 0, i = 0;

	while (a[counter] != '\0')
	{
		counter++;
	}
	while (i <= counter)
	{
		if ((a[i] >= 97) && (a[i] <= 122))
		{
		a[i] = a[i] - 32;
		}
	i++;
	}
	return (a);
}
