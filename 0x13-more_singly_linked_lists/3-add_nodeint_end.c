#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the linked list
 * @n: an integer to be assigned to the argument of the node added
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	temp = *head;
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	while (temp && temp->next)
	{
		temp = temp->next;
	}
	if (*head)
		temp->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
