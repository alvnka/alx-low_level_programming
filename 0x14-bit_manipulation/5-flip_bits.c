#include "main.h"

/**
 * flip_bits - returns number of bits that'll change
 * to convert a number to another number
 * @n: number 1
 * @m: number to be converted to
 * Return: numbers of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	for (count = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}
	}
	return (count);
}
