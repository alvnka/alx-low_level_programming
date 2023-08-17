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

	if (head)
	{
		while ((current_node->next != NULL) && (count != index))
		{
			current_node = current_node->next;
			count++;
			printf("count is %d\n", count - 1);
		}
		if (count == index)
			return (current_node);
		else
			return (NULL);
	}
	else
	{
		return (NULL);
	}
}
