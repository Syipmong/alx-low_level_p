#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 *
 * @head: the head of list
 * @n: int input
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lk = malloc(sizeof(listint_t));
	listint_t *current;
	if (lk == NULL)
		return (NULL);
	lk->n = n;
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
