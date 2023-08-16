#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 *		    on each element of an array
 * @array: array to be operate on
 * @size: size of the array
 * @action: pointer to the function to be used
 *
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != 0 && size != 0 && action != 0)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

