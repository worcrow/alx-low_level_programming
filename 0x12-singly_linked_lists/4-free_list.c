#include "lists.h"

/**
 * free_list - free the linked list
 * @head: the head of the linked list
*/

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
