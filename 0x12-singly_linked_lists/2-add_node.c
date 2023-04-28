#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: the head of list
 * @str: string input
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *lk = malloc(sizeof(list_t));
	if (lk == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	lk->len = i;
	lk->str = strdup(str);
	lk->next = *head;
	*head = lk;
	return (*head);
}
