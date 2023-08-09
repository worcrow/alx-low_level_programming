#include  <stdlib.h>
#include "main.h"

/**
 * length_of - get the length of the string
 * @str: the string to be calculated it length
 * Return: the length of the string
*/

unsigned int length_of(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - duplicate a string given as argument
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string or null if it failed
*/

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int size;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	size = length_of(str);
	dup_str = (char *) malloc((size + 1) * sizeof(char));

	if (dup_str != NULL)
	{
		for (i = 0; i < size; i++)
		{
			dup_str[i] = str[i];
		}
		dup_str[i] = '\0';
	}
	return (dup_str);
}
