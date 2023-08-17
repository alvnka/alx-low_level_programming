#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a index
 * @head: first node
 * @index: position to be deleted
 * Return: 1 if succeded -1 if not
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		if (*head)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && count < index)
	{
		current_node = current_node->next;
		count++;
	}

	if (current_node == NULL)
		return (-1);

	current_node->prev->next = current_node->next;
	if (current_node->next)
		current_node->next->prev = current_node->prev;
	free(current_node);
	return (1);
}
