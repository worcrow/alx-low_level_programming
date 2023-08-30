#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a specific index
 * @head: pointer to the head of the linked list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *copy;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	temp = *head;
	for (count = 0; count < index - 1; count++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	copy = temp->next;
	temp->next = copy->next;
	free(copy);
	return (1);
}
