/**
 *_strcpy - copy a string
 *@src: the source string to be copied
 *@dest: the destination string that hold the copied string
 *Return: return a pointer to the destination string
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

