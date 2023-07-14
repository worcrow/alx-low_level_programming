#include <stdio.h>

/**
 * main - entry point
 * Description: print all possible combinations of single-digit numbers
 * Return: return 0, successful execution
*/

int	main(void)
{
	int d;

	d = 0;
	while (d <= 9)
	{
		putchar(d + '0');
		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');
	return (0);
}
