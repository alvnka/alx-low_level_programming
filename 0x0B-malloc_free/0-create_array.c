#include "main.h"

/**
 * create_array - should be a function that
 * creates an array of chars, and initializes it with specific char.
 * @size: this is the size of the array needed
 * @c: char to be put into the array
 * Return:char or NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *char_init;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	char_init = malloc(size * sizeof(c));
	if (char_init == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		char_init[i] = c;
	}
	return (char_init);
	free(char_init);
}
