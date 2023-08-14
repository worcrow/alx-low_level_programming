#include <stdlib.h>

/**
 * _realloc - reallocate memory for an array
 * @ptr: pointer to the array to be reallocated
 * @old_size: the size of the ptr
 * @new_size: the new size for reallocation
 * Return: pointer to the allocated memory, or null if it failed
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_arr;
	char *pt;
	unsigned int i;

	pt = (char *) ptr;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		new_arr = malloc(new_size);
	else if (new_size == 0 && ptr != NULL)
		free(ptr);
	else
	{
		new_arr = malloc(new_size);
		for (i = 0; i < old_size; i++)
		{
			new_arr[i] = pt[i];
		}
	}
	return (new_arr);
}
