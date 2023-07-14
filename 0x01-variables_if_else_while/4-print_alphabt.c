#include <stdio.h>

/**
 * main - entry point
 * Description: print alphabe in lowrcase except e and q
 * Return: 0, successful execution
*/

int	main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
