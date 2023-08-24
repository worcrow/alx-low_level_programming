#include "lists.h"

/**
 * length_of - get the length of the str
 * @str: str to be calculated it length
 * Return: the length of str
*/

int length_of(const char *str)
{
	int i;

	i = 0;
	while (str != NULL && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - add new node to the end of the linked list
 * @head: a pointer to the head of the linked list
 * @str: str to copied to the str argument of the linked list
 * Return: address of the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;

	temp = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = length_of(str);
	new_node->next = NULL;
	if (temp == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
