#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end
 * of the linked list.
 * @head: head pointing to linked list.
 * @str: string.
 * Return: Address of the element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *pNode;
	size_t p;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (p = 0; str[p]; p++)
		;

	newNode->len = p;
	newNode->next = NULL;
	pNode = *head;

	if (pNode == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (pNode->next != NULL)
			pNode = pNode->next;
		pNode->next = newNode;
	}

	return (*head);
}
