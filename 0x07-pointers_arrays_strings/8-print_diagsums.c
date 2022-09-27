#include "main.h"

/**
 * print_diagsums - function that prints the
 * sum of the diagonals of a square matrix
 * @a:array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
		{
			sum1 = sum1 + *(a + i);
		}
		if ((i % (size - 1) == 0) && (i != 0) && (i < size * size - 1))
		{
			sum2 = sum2 + *(a + i);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
