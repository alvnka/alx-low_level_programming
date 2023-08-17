#include "lists.h"
/**
 * get_dnodeint_at_index - get nth node
 * @head: first node
 * @index: index to find
 * Return: the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL && count < index)
	{
		current_node = current_node->next;
		count++;
	}

	if (count == index)
		return (current_node);

	return (NULL);
}
