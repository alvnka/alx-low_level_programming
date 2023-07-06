#include "main.h"

/**
 * clear_bit - sets the value at index to 0
 * @n: number to be converted
 * @index: index
 * Return:
 *	1 if sucessful
 *	-1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int result;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		result = 1 << index;
		if (*n & result)
		{
			*n ^= result;
		}
	}
	return (1);
}
