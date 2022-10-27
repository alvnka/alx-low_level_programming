#include "lists.h"

/**
 * sum_listint - sums data(n)
 * @head: head node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	else if (head != NULL)
	{
		while (head != NULL)
		{
			sum = sum + (head->n);
			head = head->next;
		}
	}
	return (sum);
}
