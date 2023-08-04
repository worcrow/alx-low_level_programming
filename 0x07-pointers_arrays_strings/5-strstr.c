/**
 *_strstr -  finds the first occurrence of a substring in a string
 *@haystack: the string to be searched
 *@needle: the substring measured on
 *Return: Returns a pointer to the beginning of the located substring,
 *	  or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int index;
	char *s;
	int flag;

	s = haystack;
	while (*s)
	{
		flag = 1;
		for (index = 0; needle[index]; index++)
		{
			if (*(s + index) != needle[index])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
			return (s);
		s++;
	}
	return (0);
}

