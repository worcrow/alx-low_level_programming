#include <stdio.h>

/**
 * main - entry point
 * Description: print the alphabet in lowrcase
 * Return: return 0, successful execution
*/

int	main(void)
{
	char c;

	c = 'a'; /*assign the ascii value of a to c */
	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
		c++;
	}
	return (0);
}
