#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *Description: this function check if the number is pos or neg or zero
 *betty style doc for function main goes there
 *Return: return 0 to stop the execution of programme
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
