#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: a pointer to the head of the linked list
 * Return: pointer to the first node of the reversed list
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
		while ((*head))
		{
			copy = *head;
			*head = (*head)->next;
			copy->next = temp;
			temp = copy;
		}
		*head = temp;
	}
	return (*head);
}
