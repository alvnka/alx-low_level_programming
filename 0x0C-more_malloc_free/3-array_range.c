#include "main.h"
/**
 * array_range - created an array of integers
 * @min: min values
 * @max: max values
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array_ptr;
	int i;


	if (min > max)
	{
		return (NULL);
	}
	array_ptr = malloc(sizeof(*array_ptr) * ((max - min) + 1));
	if (array_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		array_ptr[i] = min;
	}
	return (array_ptr);
}
