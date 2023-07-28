#include "main.h"
/**
 *print_number - output the number given to the stdout
 *@n: a integer variable indicate the number
*/

void print_number(int n)
{
	if (n < 10)
		_putchar(n + '0');
	else
		print_number(n / 10);
		_putchar((n % 10) + '0');
}
