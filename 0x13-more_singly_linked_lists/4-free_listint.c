#include "lists.h"

/**
 * free_listint - add node at the end of the list
 * @head: head node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *freeing;

	while ((freeing = head) != NULL)
	{
		head = head->next;
		free(freeing);
	}
}
