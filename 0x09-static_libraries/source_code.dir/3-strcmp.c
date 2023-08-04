/**
 *_strcmp - compare two string based on their ascii value
 *@s1: the first string
 *@s2: the second string
 *Return: 0 if s1==s2, positif value if s1>s2, negatif value otherwise
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] != s2[j])
			return (s1[i] - s2[j]);
		i++;
		j++;
	}
	if (i == j)
		return (0);
	else
		return (s1[i] - s2[j]);
}

