#include "lists.h"

/**
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *copy;
	listint_t *temp;

	if (head && *head)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = NULL;
	}
	while ((*head))
	{
		copy = *head;
		*head = (*head)->next;
		copy->next = temp;
		temp = copy;
	}
	*head = temp;
	return (*head);
}
