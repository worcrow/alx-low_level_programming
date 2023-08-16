#include "function_pointers.h"

/**
 * print_name - Prints a the name given as argument
 * @name: pointer string to the name to be printed
 * @f: Pointer to function that print name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
