#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: start number
 * @max: the end value
 * Return: pointer to the array containing number from min to max.
 *         or null if it failed
*/

int *array_range(int min, int max)
{
	int *arr;
	unsigned int i;
	unsigned int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr != NULL)
	{
		for (i = 0; i < size; i++, min++)
		{
			arr[i] = min;
		}
	}
	return (arr);
}
