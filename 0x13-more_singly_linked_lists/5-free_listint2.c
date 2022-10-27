#include "lists.h"

/**
 * free_listint2 - add node at the end of the list
 * @head: head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *freeing, *temp;

	freeing = *head;
	while ((temp = freeing) != NULL)
	{
		freeing = freeing->next;
		free(temp);
	}
	*head = NULL;
}
