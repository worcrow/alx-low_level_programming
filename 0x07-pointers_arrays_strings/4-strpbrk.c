/**
 *_strpbrk - function locates the first occurrence of a str in the other str
 *@s: string to be searched
 *@accept: string to be measured on
 *Return: return  a pointer to the byte in s that matches one of the bytes
 *in accept or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (accept[index] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}

