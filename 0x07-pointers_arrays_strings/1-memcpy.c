#include "main.h"

/**
 *_memcpy - copy n bytes from src to dest
 *@src: source of string to be copied
 *@dest: destination to be be filled in
 *@n: the size to be copied
 *Return: return a pointer to the resulting string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
