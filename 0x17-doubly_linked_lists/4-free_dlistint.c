#include "lists.h"

/**
 * free_dlistint - function that frees a doubly linked list
 * @head: first node of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		dlistint_t *previous_node, *current_node = head;

		while (current_node != NULL)
		{
			previous_node = current_node;
			current_node = current_node->next;
			free(previous_node);
		}
	}
}
