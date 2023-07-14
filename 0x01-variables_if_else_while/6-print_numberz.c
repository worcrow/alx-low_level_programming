#include <stdio.h>

/**
 * main - entry point
 * Description: print the numbers from 0 to 9
 * Return: 0, successful execution
*/

int	main(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
