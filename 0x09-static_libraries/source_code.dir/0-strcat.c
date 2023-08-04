/**
 *_strcat - concatenate two string
 *@src: string variable
 *@dest: pointer of type char to hold the string src
 *Return: return a pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}

