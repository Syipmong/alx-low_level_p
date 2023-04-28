#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * @h: const list_t input
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
