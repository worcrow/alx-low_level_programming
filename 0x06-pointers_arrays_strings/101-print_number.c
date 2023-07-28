#include "main.h"
/**
 *print_number - output the number given to the stdout
 *@n: a integer variable indicate the number
*/

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num >= 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
