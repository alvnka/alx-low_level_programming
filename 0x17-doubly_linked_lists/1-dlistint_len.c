#include "lists.h"
/**
 * dlistint_len - function to return number of elements in a linked list
 * @h: first node of the list
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	if (h)
	{
		const dlistint_t *current_node = h;
		int number_of_nodes = 0;

		while (current_node != NULL)
		{
			number_of_nodes++;
			current_node = current_node->next;
		}
		return (number_of_nodes);
	}
	else
	{
		return (0);
	}
}
