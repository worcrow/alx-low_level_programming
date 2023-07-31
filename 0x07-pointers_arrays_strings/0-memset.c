#include "main.h"

/**
 *_memset - fills the first n bytes pointed to by s with the constant byte b
 *@s: string to be filled in
 *@b: charactere for fill in s
 *@n: size to be filled in
 *Return: return a pointer value to the resulting string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

