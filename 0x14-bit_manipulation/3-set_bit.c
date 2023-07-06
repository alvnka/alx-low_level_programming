#include "main.h"

/**
 * set_bit - sets the value of a bit to
 * 1 at a given index
 * @n: pointer to value
 * @index: position of value to be changed
 * Return:
 *	1 if it works;
 *	-1 on error;
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int result = 0;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		result = (1 << index);
		*n = (*n | result);
	}
	return (1);

}
