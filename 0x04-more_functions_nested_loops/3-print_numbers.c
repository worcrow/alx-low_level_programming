#include "main.h"
/**
 *print_numbers - print the numbers from 0 to 9
*/

void print_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
