#include "lists.h"
/**
 * add_node_end - function to add a new node
 * at the end of function.
 * @head:head of list
 * @str:string to be stored
 * Return: address of new element, NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (nchar = 0; str[nchar]; nchar++)
	{
		;
	}
	new->str = strdup(str);
	new->next = NULL;
	new->len = nchar;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
