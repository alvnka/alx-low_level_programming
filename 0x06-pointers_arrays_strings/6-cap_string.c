#include "main.h"

/**
 * cap_string - changes lower case to upper
 * @a: holds the characters to be converted
 * Return: converted pointer
 */

char *cap_string(char *a)
{
	int counter = 0, i = 0;

	while (a[counter] != '\0')
	{
		counter++;
	}
	while (i <= counter)
	{
		if (
		(a[i] == 32) ||
		(a[i] == 9) ||
		(a[i] == 10) ||
		(a[i] == 44) ||
		(a[i] == 58) ||
		(a[i] == 59) ||
		(a[i] == 46) ||
		(a[i] == 33) ||
		(a[i] == 63) ||
		(a[i] == 34) ||
		(a[i] == 40) ||
		(a[i] == 41) ||
		(a[i] == 123) ||
		(a[i] == 125))
		{
			if ((a[i + 1] >= 97) && (a[i + 1] <= 122))
			{
				a[i + 1] = a[i + 1] - 32;
			}
		}
	i++;
	}
	return (a);
}
