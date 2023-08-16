#include "function_pointers.h"

/**
 * int_index - search for the first occurence of an integer
 * @array: array to be operate on
 * @size: size of the array
 * @cmp: pointer to the function used in
 * Return: index of the first occurence, or -1 if doesn't exist
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
