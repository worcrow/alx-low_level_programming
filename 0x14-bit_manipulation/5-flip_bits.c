#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip,
 *             to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits need to flip it
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip;
	unsigned int count;

	count = 0;
	flip = n ^ m;
	while (flip)
	{
		if ((flip & 1) == 1)
			count++;
		flip >>= 1;
	}
	return (count);
}
