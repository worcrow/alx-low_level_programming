#ifndef HEAD_H
#define HEAD_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct linked_list - define the structure for the linked list
 * @str: string to be stored in the linked list
 * @len: the length of the str
 * @next: pointer to the next node
*/
	typedef struct linked_list
	{
		char *str;
		int len;
		struct linked_list *next;
	} list_t;
	int _putchar(char c);
	size_t print_list(const list_t *h);
	size_t list_len(const list_t *h);
	list_t *add_node(list_t **head, const char *str);
	list_t *add_node_end(list_t **head, const char *str);
	void free_list(list_t *head);
#endif
