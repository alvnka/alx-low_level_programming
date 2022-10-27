#include "lists.h"

/**
 * get_nodeint_at_index - function returning nth
 * node of list
 * @head: address of head node
 * @index: index
 * Return: value of n;
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
