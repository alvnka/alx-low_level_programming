#include "lists.h"
/**
 * add_dnodeint_end - functionn that adds a node at the end of the list
 * @head: first node of the list
 * @n: element to be added
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_node = *head, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		new_node->prev = current_node;
		current_node->next = new_node;
	}
	return (new_node);
}
