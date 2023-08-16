#include "function_pointers.h"

/**
 * print_name - print the name given as parameters
 * @name: pointer to the string name
 * @f: function pointer to print name
*/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}

