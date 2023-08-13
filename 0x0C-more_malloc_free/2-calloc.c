#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: the number of element in the array
 * @size: the size of the element
 * Return: a pointer to the allocated memory, or null if it failed
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *alloc_mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc_mem = malloc(nmemb * size);
	if (alloc_mem == NULL)
	{
		return (NULL);
	}
	return (alloc_mem);
}

