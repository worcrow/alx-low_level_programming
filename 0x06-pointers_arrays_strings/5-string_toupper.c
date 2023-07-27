/**
 *string_toupper - convert all lower case to upper
 *@str: string variable
 *Return: return a pointer to the resulting string dest
*/
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

