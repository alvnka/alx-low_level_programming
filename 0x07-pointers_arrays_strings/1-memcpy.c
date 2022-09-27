#include "main.h"
/**
 * _memcpy - functon that copies memory
 * bytes from source to dest
 * @dest: destination to be compied to
 * @src: source t be compied from
 * @n: number of bytes to be compied from src
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	*(dest + i) = *(src + i);
	}
	return (dest);
}
