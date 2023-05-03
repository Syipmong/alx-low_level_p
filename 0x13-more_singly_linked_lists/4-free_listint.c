#include "lists.h"
/**
 *  free_listint- frees a llistint_t.
 *
 * @head: the head of linked list
 *
 * Return: VOID
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
