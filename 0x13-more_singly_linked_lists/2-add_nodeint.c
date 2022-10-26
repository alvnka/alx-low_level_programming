#include "lists.h"

/**
 * add_nodeint - adds node to beggining of list
 * @head: had address
 * @n: data
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->next = *head;
	new->n = n;
	*head = new;

	return (*head);
}
