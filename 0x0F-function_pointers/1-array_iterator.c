#include "function_pointers.h"

/**
 * array_iterator - a function to execute a function
 * @array: an array
 * @size: size of the array
 * @action: funtion to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
