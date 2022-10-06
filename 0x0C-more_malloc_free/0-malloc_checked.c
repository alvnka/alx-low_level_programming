#include "main.h"
/**
 * malloc_checked - shoudld allocate memory
 * @b: size if memory allocated
 * Return: pointer or 98 on error
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
	free(ptr);
}
