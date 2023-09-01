#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to be setting it bit
 * @index: index of the bit to be set up
 * Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int idx;

	if (index > 63 || n == NULL)
		return (-1);
	for (idx = 0; idx < index; idx++)
	{
		*n = (*n) >> 1;
	}
	(*n)++;
	for (idx = 0; idx < index; idx++)
	{
		*n = (*n) << 1;
	}
	return (1);
}
