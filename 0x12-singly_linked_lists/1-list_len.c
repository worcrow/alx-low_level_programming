#include "lists.h"

/**
 * list_len - get the number of node in a linked list
 * @h: the head of the linked list
 * Return: number of node containing in the linked list
*/

size_t list_len(const list_t *h)
{
	size_t nb_node;
	const list_t *temp;

	temp = h;
	nb_node = 0;
	while (temp)
	{
		nb_node++;
		temp = temp->next;
	}
	return (nb_node);
}
