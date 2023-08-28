#ifndef HEAD_H
#define HEAD_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct linkedlist - structure that define a linked list
 * @n: an integer strore a number passed to it node
 * @next: pointer to the next node
*/

	typedef struct linkedlist
	{
		int n;
		struct linkedlist *next;
	} listint_t;

	int _putchar(char c);
	size_t print_listint(const listint_t *h);
	size_t listint_len(const listint_t *h);
	listint_t *add_nodeint(listint_t **head, const int n);
#endif
