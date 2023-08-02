#include "main.h"
/**
 *_strlen_recursion - output the length of string using recursion
 *@s: string to be calculate it's length
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
