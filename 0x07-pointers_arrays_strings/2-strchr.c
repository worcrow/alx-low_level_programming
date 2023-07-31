#include "main.h"
/**
 *_strchr - return the first occurence of c in s
 *@s: string variable
 *@c: charactere variable
 *Return: return first occurence of c or null if doesn't exist
*/

char *_strchr(char *s, char c)
{
	int i;
	char *result;

	i = 0;
	result = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			result = (s + i);
			break;
		}
		i++;
	}
	return (result);
}
