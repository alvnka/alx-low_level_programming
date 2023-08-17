#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: first node
 * @idx: index to insert the node at
 * @n: element to add
 * Return: address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *previous_node, *current_node = *h;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current_node;
		if (current_node)
			current_node->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (current_node && count < idx)
	{
		previous_node = current_node;
		current_node = current_node->next;
		count++;
	}

	if (count == idx)
	{
		new_node->next = current_node;
		if (current_node)
			current_node->prev = new_node;
		previous_node->next = new_node;
		new_node->prev = previous_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
