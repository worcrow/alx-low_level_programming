/**
 *_strncat - concatenate two string use at most n bytes form source
 *@dest: the destination that hold the string src
 *@src: the source string to be copied
 *@n: the n bytes to be copied from source
 *Return: Return a pointer to the resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
