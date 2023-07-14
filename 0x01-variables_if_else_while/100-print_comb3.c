#include <stdio.h>

/**
 * main - entry point
 * Description: print all possible different combinations of two digits
 * Return: return 0, successful execution
*/

int	main(void)
{
	int first_digit;
	int second_digit;

	first_digit = 0;
	while (first_digit <= 9)
	{
		second_digit = first_digit + 1;
		while (second_digit <= 9)
		{
			putchar(first_digit + '0');
			putchar(second_digit + '0');
			if (first_digit != 8 || second_digit != 9)
			{
				putchar(',');
				putchar(' ');
			}
			second_digit++;
		}
		first_digit++;
	}
	putchar('\n');
	return (0);
}
