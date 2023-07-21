#include "main.h"

/**
 *print_number - output the num to the standard output
 *@num: the number to be printed
*/

void print_number(int num)
{
	if (num < 10)
		_putchar(num + '0');
	else
	{
		print_10_number(num / 10);
		_putchar((num % 10) + '0');
	}
}
/**
 *more_numbers - print the numbers from 0 to 14 10 times
*/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			print_number(j);
			_putchar('\n');
		}
	}
}
