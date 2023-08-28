#include "lists.h"

/**
 * listint_len - get the number of element in a linked list
 * @h: the head of a linked list
 * Return: number of element in a linked list
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	temp = h;
	count = 0;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
