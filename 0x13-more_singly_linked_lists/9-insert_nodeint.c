#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: a pointer to the head of the linked list
 * @idx: is the index of the list where the new node should be added.
  *	 Index starts at 0
 * @n: an integer to be assigned to the argument of the node added
 * Return:  the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node;
	unsigned int count;

	temp = *head;
	if (idx != 0)
	{
		for (count = 0; count < idx - 1 && temp; count++)
		{
			temp = temp->next;
		}
	}
	if (temp == NULL && idx != 0)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
