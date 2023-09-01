#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
*/

void print_binary(unsigned long int n)
{
	int div;
	int rest;

	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}
	div = n >> 1;
	rest = n - (div * 2);
	print_binary(div);
	_putchar(rest + '0');
}
