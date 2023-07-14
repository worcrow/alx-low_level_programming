#include <stdio.h>

/**
 * main - entry point
 * Description: print the number of base 16 in lowercase
 * Return: return 0, successful execution
*/

int	main(void)
{
	char c;
	int d;

	c = 'a';
	d = 0;
	while (d <= 9) /*print from 0 to 9*/
	{
		putchar(d + '0');
		d++;
	}
	while (c <= 'f') /*print from a to f*/
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
