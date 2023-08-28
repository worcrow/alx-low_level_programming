#include "lists.h"

/**
 * free_listint - free the linked list
 * @head: a pointer to the head of the linked list
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(temp);
}
