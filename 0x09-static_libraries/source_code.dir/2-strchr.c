/**
 *_strchr - return the first occurence of c in s
 *@s: string variable
 *@c: charactere variable
 *Return: return first occurence of c or null if doesn't exist
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);

	return (0);
}
