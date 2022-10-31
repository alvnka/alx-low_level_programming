#include "lists.h"

/**
 *  pop_listint - function that deletes head node
 *  @head: pointer to address of head
 * Return: head nodes data
 * and 0 if node is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp, *h;
	int inN;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		inN = temp->n;
		h = (*head)->next;

		*head = h;
	free(temp);
	return (inN);
	}
}
