#include "main.h"

/**
 *length - return the length of the string
 *@str: string variable
 *Return: return the length
*/

int length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *puts2 - print every other string starting from the first
 *@str: the string variable
*/

void puts2(char *str)
{
	int i;
	int len;

	i = 0;
	len = length(str);
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
