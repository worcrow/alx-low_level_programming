#include "main.h"

/**
 * length_of - get the length of the string
 * @str: string to be calculate it length
 * Return: the length of the string
*/

unsigned int length_of(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if the function failed
*/

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int result;
	int idx;
	int pow;

	if (b == NULL)
		return (0);
	len = length_of(b);
	result = 0;
	idx = 0;
	while (--len >= 0)
	{
		if (b[idx] != '1' && b[idx] != '0') /*check if all numbers between 0 and 1*/
			return (0);
		pow = (len > 0) ? (2 << (len - 1)) : 1; /** 2 << len - 1:
							  * calculate the power of 2
							  * example pow(2,4) equivalent to 2 << 3
							*/
		result += (b[idx++] - '0') * pow;
	}
	return (result);
}
