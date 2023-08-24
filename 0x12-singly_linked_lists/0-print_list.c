#include "lists.h"

/**
 * print_list - print the nodes of the linked list named list_t
 * @h: the head of the linked list
 * Return: number of the node containing in the linked list
*/

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t nb_node;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	nb_node = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		nb_node++;
	}
	return (nb_node);
}
