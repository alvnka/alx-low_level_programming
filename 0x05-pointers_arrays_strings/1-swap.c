#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a:pointer to a's address
 * @b:pointer to b's address
 */
void swap_int(int *a, int *b)
{
	int tempLocation;

	tempLocation = *a;
	* a = *b;
	* b = tempLocation;
}
