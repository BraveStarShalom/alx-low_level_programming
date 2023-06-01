#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all the elements of a list_t list.
  * @h: The list_t list pointer
  * Return: Number of nodes.
  */
size_t print_list(const list_t *h)
{
	size_t peace;

	peace = 0;

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
