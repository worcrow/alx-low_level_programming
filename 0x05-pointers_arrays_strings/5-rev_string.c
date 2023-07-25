/**
 *length - return the length of the string
 *@s: the string varible
 *Return: return the length
*/

int length(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *rev_string - reverse the string
 *@s: the string to be reversed
*/

void rev_string(char *s)
{
	int i;
	int len;
	char temp; /*temporary storage*/

	i = 0;
	len = length(s);
	while (i < (len / 2))
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}

