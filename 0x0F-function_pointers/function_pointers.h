#ifndef HEADER_H
#define HEADER_H
#define NULL ((void *)0)
#define size_t unsigned int
	int _putchar(char c);
	void print_name(char *name, void (*f)(char *));
	void array_iterator(int *array, size_t size, void (*action)(int));
#endif
