#include "main.h"
#include <stdlib.h>

/**
 * length_of - get the length of the string
 * @str: string to be calculate it length
 * Return: length of the string, or 0 if str is NULL
*/

unsigned int length_of(char *str)
{
	unsigned int i;

	i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			i++;
		}
	}
	return (i);
}

/**
 * fill_array - copy the string in source to the destination
 * @dest: variable to be filled
 * @src: source of the string
 * @start: last index in dest to start filling
*/

void fill_array(char *dest, char *src, int *start)
{
	while (*src != '\0')
	{
		dest[*start] = *src;
		src++;
		*start += 1;
	}
}

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to the address that contain the content of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	char *new_array;
	unsigned int size = length_of(s1) + length_of(s2);
	int start;

	start = 0;
	new_array = (char *) malloc((size + 1) * sizeof(char));
	if (new_array != NULL)
	{
		if (s1 != NULL)
			fill_array(new_array, s1, &start);
		if (s2 != NULL)
			fill_array(new_array, s2, &start);
		new_array[start] = '\0';
	}
	return (new_array);
}
