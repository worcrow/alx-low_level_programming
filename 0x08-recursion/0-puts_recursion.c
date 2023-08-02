#include "main.h"

/**
 *_puts_recursion - output the string given to the stdout
 *@s: string to be printed
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	_putchar('\n');
}
