#include "lists.h"

/**
 * list_len - returns no. of elements available in a list.
 * @h: points to linked list.
 * Return: Number of elements in list.
 */

size_t list_len(const list_t *h)
{
	size_t listNodes;

	listNodes = 0;
	while (h != NULL)
	{
		h = h->next;
		listNodes++;
	}
	return (listNodes);
}
