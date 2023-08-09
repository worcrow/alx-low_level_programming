#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array and initializes with a variable
 * @size: size of the array to be created it
 * @c: the charactere for initialize the array
 * Return: pointer to the array or null
*/

char *create_array(unsigned int size, char c)
{
	char *new_array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	new_array = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		new_array[i] = c;
	}

	return (new_array);
}
