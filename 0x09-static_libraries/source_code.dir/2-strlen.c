/**
 *_strlen - return the length of the string
 *@s: string variable
 *Return: return the length
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
