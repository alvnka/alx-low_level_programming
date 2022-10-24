#include "lists.h"
/**
 * print_list - function to print all the
 * elements of the list
 * @h: the list to be printed
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t elementsNo = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		elementsNo++;
	}
	return (elementsNo);
}
