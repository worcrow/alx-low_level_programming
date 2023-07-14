#include <stdio.h>

/**
 * main - entry point
 * Description: print the alphabet reversed in lowrcase
 * Return: return 0, successful execution
*/

int	main(void)
{
	char c;

	c = 'z'; /*assign the ascii value of z to c */
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
