#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to be setting it bit
 * @index: index of the bit to be set up
 * Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL || index > 63)
		return (-1);
	mask = 1 << index;
	if ((*n & mask) != 0)
		*n ^= mask;
	return (1);
}
