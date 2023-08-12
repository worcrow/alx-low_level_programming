#include <stdlib.h>

/**
 * length_of - calculate the length of a string
 * @s: string to be calculated it length
 * Return: return the length of s
*/

unsigned int length_of(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatenate two string
 * @s1: first string
 * @s2: second string
 * @n: the byte to be copied from s2
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index; /* track the index of the arr */
	unsigned int start; /* track the index to be copied from of s2 */
	char *arr; /* array that hold the concatenation of the string s1 and s2 */
	unsigned int size; /* size of the array 'arr' */

	size = length_of(s1) + n + 1;
	index = 0;
	arr = malloc(size * sizeof(char));
	if (arr != NULL)
	{
		if (s1 != NULL)
		{
			while (*s1 != '\0')
			{
				arr[index] = *s1;
				s1++;
				index++;
			}
		}
		if (s2 != NULL)
		{
			for (start = 0; s2[start] != '\0' && start < n; start++)
			{
				arr[index++] = s2[start];
			}
		}
		while (index < size)
		{
			arr[index++] = '\0';
		}
	}
	return (arr);
}

