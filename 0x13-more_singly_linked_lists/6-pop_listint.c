#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 *
 * @head: the head of linked list
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;
	if (!*head)
		return (0);
	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
