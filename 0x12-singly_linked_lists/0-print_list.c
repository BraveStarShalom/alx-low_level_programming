#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements of a list that is linked.
 * @h: points to linked list.
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t peace = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		peace++;
		h = h->next;
	}

	return (peace);
}
