#include "main.h"

/**
 *length - return the length of the string
 *@s: the string variable
 *Return: the lenght of the string
*/

int length(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *print_rev - output the string to the stdout in reverse order
 *@s: the string variable
*/

void print_rev(char *s)
{
	int len;

	len = length(s) - 1;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
