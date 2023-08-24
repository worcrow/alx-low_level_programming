#ifndef HEAD_H
#define HEAD_H
#include <stdio.h>

/**
 * struct linked_list - define the structure for the linked list
 * @str: string to be stored in the linked list
 * @len: the length of the str
 * @new: pointer to the next node
*/
	typedef struct linked_list
	{
		char *str;
		int len;
		struct linked_list *next;
	} list_t;
	int _putchar(char c);
	size_t print_list(const list_t *h);
#endif
