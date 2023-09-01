#include "main.h"

/**
 * convert_to_binary - convert a number to base2
 * @n: number to be converted
 * @arr: arr to store the value of the converted variable
 * Return: the lenght of the array
*/

unsigned int convert_to_binary(unsigned long int n, int *arr)
{
	int len;

	len = 0;
	while (n > 0)
	{
		arr[len++] = (n & 1);
		n = n >> 1;
	}
	return (len);
}

/**
 * get_bit - get the value of a bit at a given index
 * @n: the number to be extracted from
 * @index: index of the target bit
 * Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int arr[BUFF_SIZE];
	unsigned int len;

	len = convert_to_binary(n, arr);
	if (index >= len || index > 63)
		return (-1);
	return (arr[index]);
}
