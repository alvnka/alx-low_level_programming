#include "lists.h"
/**
 * free_listint - function to free list memory
 * @head: head of the list
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
