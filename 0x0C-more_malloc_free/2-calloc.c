#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: the number of element in the array
 * @size: the size of the element
 * Return: a pointer to the allocated memory, or null if it failed
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc_mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc_mem = malloc(nmemb * size);
	if (alloc_mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		alloc_mem[i] = 0;
	}
	return (alloc_mem);
}
