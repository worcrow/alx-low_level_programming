#include "main.h"

/**
 *_print_rev_recursion - print string in reverse order using recursion
 *@s: string to be printed
*/

void _print_rev_recursion(char *s)
{
	char temp; /* temporary variable to strore the first chararctere of s */

	if (*s != '\0')
	{
		temp = *s;
		_print_rev_recursion(++s);
		_putchar(temp);
	}
}

