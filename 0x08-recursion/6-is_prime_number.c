#include "main.h"
/**
 *check - check if the number is prime
 *@n: the number to be checked in
 *@i: integer hepling for the checking
 *Return: return 1 if n is prime otherwise 0
*/

int check(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check(n, i + 1));
}

/**
 *is_prime_number - verify if a number is prime
 *@n: the number to be verified
 *Return: 1 if n is prime 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, 2));
}
