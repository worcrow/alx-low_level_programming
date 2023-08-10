#include <stdlib.h>
/**
 * alloc_grid - allocate memory for two dimensional array
 * @width: the width of the array
 * @height: the height of the array
 * Return: pointer to memory that hold the array, or NULL
*/

int **alloc_grid(int width, int height)
{
	int **array_2D;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	array_2D = (int **) malloc(height * sizeof(int *));
	if (array_2D != NULL)
	{
		for (i = 0; i < height; i++)
		{
			array_2D[i] = (int *) malloc(width * sizeof(int));
			if (array_2D[i] == NULL)
			{
				for (i ; i >= 0 ; i--)
				{
					free(array_2D[i]);
				}
				return (NULL);
			}
		}
	}
	return (array_2D);
}
