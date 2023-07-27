/**
 * leet - Encodes a string into 1337.
 *
 * @str: String argument passed.
 *
 * Return: String pointer.
*/

char *leet(char *str)
{
	int index1,index2;
	int enc_var[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	index1 = 0;
	while (str[index1] != '\0')
	{
		for (index2 = 0; index2 < 8; index2++)
		{
			if (str[index1] == enc_var[index2] || str[index1] - 32 == enc_var[index2])
				str[index1] = index2 + '0';
		}
		index1++;
	}
	return (str);
}
