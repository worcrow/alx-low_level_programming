/**
 *is_separator - check if the charactere is a separator
 *@c: the charcatere variable
 *Return: 1 is is a separator otherwise 0
*/
int is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' || c == '.')
		return (1);
	if (c == '!' || c == '?' || c == '"' || c == '(' || c == ')')
		return (1);
	if (c == '{' || c == '}')
		return (1);
	return (0);
}
/**
 *is_lower - check if the a charactere is lower
 *@c: the charatere variable
 *Return: 1 if the charactere is lower otherwise 0
*/
int is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
/**
 *cap_string - capitalize all letters
 *@str: the string variable
 *Return: return a pointer to the resulting string
*/
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (is_separator(str[i]))
	{
		i++;
	}
	if (is_lower(str[i]))
		str[i++] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] == '\t')
			str[i] = ' ';
		if (is_separator(str[i - 1]) && is_lower(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
