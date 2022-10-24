#include "lists.h"

/**
 * add_node - function that adds nodes at
 * the beginning of a list_t
 * @head: pointer to the starting node
 * @str: string to be stored in node
 * Return: address of new element and
 * NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *list_tt;
	size_t sizee;

	list_tt = malloc(sizeof(list_t));
	if (list_tt == NULL)
	{
		return (NULL);
	}
	list_tt->str = strdup(str);
	for (sizee = 0 ; str[sizee]; sizee++)
	{
		;
	}
	list_tt->len = sizee;
	list_tt->next = *head;
	*head = list_tt;

	return (list_tt->next);
}
