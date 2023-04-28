#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: the head of list
 * @str: string input
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *lk = malloc(sizeof(list_t));
	list_t *current;
	if (lk == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	lk->len = i;
	lk->str = strdup(str);
	lk->next = NULL;
	if (*head == NULL)
	{
		*head = lk;
		return (*head);
	}
	current = *head;
	while (current->next)
		current = current->next;
	current->next = lk;
	return (lk);
}
