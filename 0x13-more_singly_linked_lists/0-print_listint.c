#include "lists.h"

/**
 * print_listint - print all the element of a linked list
 * @h: the head of a linked list
 * Return: the number of element in a linked list
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int count;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
