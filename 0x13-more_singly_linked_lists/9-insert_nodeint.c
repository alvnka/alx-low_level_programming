#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new
 * node at given position
 * @head: header pointer
 * @idx: index to be inserted
 * @n: data n for new node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 0;

	temp = *head;
	if (idx != 0)
	{
		while ((i < idx - 1) && (*head != NULL))
		{
			temp = temp->next;
			i++;
		}
	}
	if ((*head == NULL) && (idx != 0))
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}

