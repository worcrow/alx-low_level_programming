#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t linked list
 * @head: a poineter to the head of the linked list
 * @index: index of the targeting node
 * Return: the index of the node or null if doesn't exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	temp = head;
	count = -1;
	while (temp)
	{
		if (++count == index)
			return (temp);
		temp = temp->next;
	}
	if (count == (unsigned int) -1 || count > index)
		return (NULL);
	return temp;
}
