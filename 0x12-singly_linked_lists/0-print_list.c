#include "lists.h"
/**
 * print_list - prints elements of a list that is linked.
 * @h: points to linked list.
 * Return: Number of elements to print.
 */

size_t print_list(const list_t *h)
{
	size_t peace = 0;

	printf("[");
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("0");
		else
			printf("%s", h->str);

		peace++;
		h = h->next;

		if (h != NULL)
			printf(", ");
	}
	printf("]\n");

	return (peace);
}
