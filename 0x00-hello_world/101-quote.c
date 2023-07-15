#include <stdio.h>

/**
 * main - entry point
 * Description: print a message to the standard error
 * Return: 1 , encounter an error
*/

int	main(void)
{
	char *message;

	message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fprintf(stderr, "%s", message);
	return (-1);
}
