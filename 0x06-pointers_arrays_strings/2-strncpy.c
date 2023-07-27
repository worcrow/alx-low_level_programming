/**
 *_strncpy - copy the n byte from src to dest
 *@src: the source of string
 *@dest: the destination for the source
 *@n: n bytes to be copied
 *Return: returns a pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

