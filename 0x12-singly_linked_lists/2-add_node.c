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
 * add_node - add a node to the beginning of the linked list
 * @head: pointer to the head of the linked list
 * @str: str to be stored in the str argument of the linked list
 * Return: pointer to the new element, or null if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = length_of(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
