#include "lists.h"

/**
 * print_dlistint - prints al the elements of a doubly linked list
 * @h: head of the doubly list
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		const dlistint_t *current_node = h;

		int number_of_nodes = 0;

		while (current_node != NULL)
		{
			printf("%d\n", current_node->n);
			current_node = current_node->next;
			number_of_nodes++;
		}
		return (number_of_nodes);
	}
}
