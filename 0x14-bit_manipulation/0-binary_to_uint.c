#include "main.h"

/**
 * binary_to_uint - converts binary NO to int
 * @b: binary number
 * Return: unsigned int or 0 if:
 *	not all chars are 0s or 1s
 *	b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int count = 0, bint = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*(b + count) != '\0')
	{
		count++;
	}
	for (count--, bint = 1; count >= 0; count--, bint = bint * 2)
	{
		if ((b[count] != '0') && (b[count] != '1'))
		{
			return (0);
		}
		if (b[count] & 1)
		{
			i = i + bint;
		}
	}
	return (i);
}
