#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_linked - linked list required
 * @str: holsds string
 * @len: string lenght
 * @next: next node
 * description: this is the structure of
 * a singly linked list
 */
typedef struct list_linked
{
	char *str;
	unsigned int len;
	struct list_linked *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
