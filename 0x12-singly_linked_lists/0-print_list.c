#include "lists.h"
/**
 * print_list - prints elements of a list that is linked.
 * @h: points to linked list.
 * Return: Number of elements to print.
 */

size_t print_list(const list_t *h)
{
	size_t peace;

	for (peace = 0; h; peace++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (peace);
}
