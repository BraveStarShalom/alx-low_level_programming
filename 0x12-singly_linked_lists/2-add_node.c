#include "lists.h"
#include <stdlib.h>
/**
 * add_node - adds a new node at the start
 * of a linked list.
 * @head: the head pointing to the list.
 * @str: string.
 * Return: Address of element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t p;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (p = 0; str[p]; p++)
		;

	newNode->len = p;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
