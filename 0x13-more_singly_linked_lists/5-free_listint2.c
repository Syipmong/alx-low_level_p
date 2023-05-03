#include "lists.h"
/**
 *  free_list - frees a llistint_t.
 *
 * @head: the head of linked list
 *
 * Return: VOID
 */
void free_list(listint_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head);
	}
}
/**
 * free_listint2 - frees a llistint_t and set the head to NULL.
 *
 * @head: the head of linked list
 *
 * Return: VOID
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;
	free_list(*head);
	*head = NULL;
}
