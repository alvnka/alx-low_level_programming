#include "main.h"

/**
 * reverse_array - reverses the order of the string
 * @a: array of integers
 * @n: number of elements to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, counter = 0, temp;

	while (counter < n)
	{
		counter++;
	}
	while (i < counter)
	{

	temp = a[counter - 1];
	a[counter - 1] = a[i];
	a[i] = temp;
	i++;
	counter--;
	}
}
