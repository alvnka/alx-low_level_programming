#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the list
 * @head: head node
 * @n: data to be set
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	temp = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	temp = *head;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
	free(*head);
	free(new);
	free(temp);
}
