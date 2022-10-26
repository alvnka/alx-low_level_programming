#include "lists.h"

/**
 * listint_len - function that return
 * no. of elements
 * @h: head of the list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elementsNo = 0;

	while (h != NULL)
	{
		h = h->next;
		elementsNo++;
	}
	return (elementsNo);
}
