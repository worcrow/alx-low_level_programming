#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Decription: check the last digit of an integer
 * Return: return 0 to stop the execution of programme
*/

int main(void)
{
	int n;
	int la_digit; /* store the last digit of a number*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	la_digit = n % 10;
	if (la_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, la_digit);
	else if (la_digit == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, la_digit);
	return (0);
}
