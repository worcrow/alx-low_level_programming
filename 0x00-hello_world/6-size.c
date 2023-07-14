#include <stdio.h>

/**
 * main - output the size of types
 * Description: print the size type to the standard output
 * Return: this function return 0, to stop the execution of the programme
 */

int	main(void)
{
	char c;
	int a;
	long int la;
	long long int lla;
	float f;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(c));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(a));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(la));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(lla));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(f));
	return (0);
}
