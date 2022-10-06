#include "main.h"
/**
 * malloc_checked - shoudld allocate memory
 * @b: size if memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if(ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
	free(ptr);
}
