#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the array to be allocated
 * Return: a pointer to the allocated memory,
 *	   or terminate the process with the value 98
*/

void *malloc_checked(unsigned int b)
{
	int EXIT_STATUS;
	void *array;

	EXIT_STATUS = 98;
	array = malloc(b);
	if (array == NULL)
		exit(EXIT_STATUS);
	return (array);
}
