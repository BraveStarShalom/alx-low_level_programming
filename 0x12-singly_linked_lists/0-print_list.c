#include "lists.h"
/**
 * print_list - prints elements of a list that is linked.
 * @h: points to linked list.
 * Return: Number of elements to print.
 */

size_t print_list(const list_t *h)
{
	size_t p;

	p = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		p++;
	}
	return (p);
}
