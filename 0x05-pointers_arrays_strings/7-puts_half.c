#include "main.h"
/**
 *length - return the length of a string
 *@str: the string variable
 *Return: return an int the -> length of the str
*/

int length(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 *puts_half - output the half of the string
 *@str: the string variable
*/

void puts_half(char *str)
{
	int len;
	int i;

	len = length(str);
	if (len % 2 == 1)
		len -= 1
	i = len / 2;
	while (i < len)
	{
		_putchar(str[i++]);
	}
}
