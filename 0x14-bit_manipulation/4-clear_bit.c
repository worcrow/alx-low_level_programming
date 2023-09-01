#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to be setting it bit
 * @index: index of the bit to be set up
 * Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);
	*n = (*n) >> index;
	if (*n != 0)
		(*n)--;
	*n = (*n) << index;
	return (1);
}
