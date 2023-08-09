#include  <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string given as argument
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string or null if it failed
*/

char *_strdup(char *str)
{
	char *dup_str;
	int i;

	if (str == NULL)
		return (NULL);
	dup_str = (char *) malloc(sizeof(char));
	if (dup_str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			dup_str[i] = str[i];
		}
	}
	return (dup_str);
}
