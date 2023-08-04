/**
 *_strspn - gets the length of a prefix substring
 *@s: the string to be searched
 *@accept: the prefix to be measured
 *Return: return the number of bytes in s
 * which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes;
	int index;

	bytes = 0;
	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (accept[index] == *s)
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
