#include "lists.h"

/**
 * list_len - function to return number of
 * elements in a linked list
 * @h: the linked list
 * Return: no of elements
 */

size_t list_len(const list_t *h)
{
	size_t elementsNo;

	elementsNo = 0;
	while (h != NULL)
	{
		h = h->next;
		elementsNo++;
	}
	return (elementsNo);
}
