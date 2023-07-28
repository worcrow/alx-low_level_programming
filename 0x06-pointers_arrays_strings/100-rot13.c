/**
 *rot13 - rot every letter by 13 place
 *@s: a string variable
 *Return: return a pointer to the resulting string
*/

char *rot13(char *s)
{
	int i, temp;

	i = 0;
	while (s[i])
	{
		while (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))
		{
			temp = ((s[i] + 13) - 97) % 26 + 97;
			if (s[i] >= 'A' && s[i] <= 'Z')
				temp =  ((s[i] + 13) - 65) % 26 + 65;
			s[i] = temp;
			break;
		}
		i++;
	}
	return (s);
}
