#include "lists.h"

/**
 * sum_dlistint - gets the sum of all data in the list
 * @head: first node
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int sum = 0;

	if (!head)
		return (0);

	while (current_node->next != NULL)
	{
		current_node = current_node->next;
		sum = sum + current_node->n;
	}
	return (sum);
}
