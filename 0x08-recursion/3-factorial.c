#include "main.h"

/**
 *factorial - calculate the factorial of the given number
 *@n: number to be calculate it's factorial
 *Return: return the factorial of n
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
