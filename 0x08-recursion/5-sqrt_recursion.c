#include "main.h"

/**
 *get_sqrt - calculate the square root of a number
 *@n: the number to be calculate it's square root
 *@i: number to be check in if it's the target
 *Return: return the square root of n
*/

int get_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i >= n)
		return (-1);
	return (get_sqrt(n, i + 1));
}

/**
 *_sqrt_recursion - calculate recursively the square root of a number
 *@n: the number to be calculate it's square root
 *Return: return the square root of n
*/

int _sqrt_recursion(int n)
{
	return (get_sqrt(n, 1));
}
