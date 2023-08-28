#include "lists.h"

/**
 * sum_listint - get sum of all the data (n) of a listint_t linked list
 * @head: a pointer to the head of the linked list
 * Return: the sum of all data (n) or 0 if the linked list is empty
*/

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	sum = 0;
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
