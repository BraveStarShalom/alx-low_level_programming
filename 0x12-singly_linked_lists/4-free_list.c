#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of the list.
 */

void free_list(list_t *head)
{
	list_t *pNode;

	while ((pNode = head) != NULL)
	{
		head = head->next;
		free(pNode->str);
		free(pNode);
	}
}
