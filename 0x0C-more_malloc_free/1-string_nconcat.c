#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n byte to be copied from s2
 * Return: pointer to s1 plus n byte of s2
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *arr;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n > len2)
		n = len2;
	arr = malloc(len1 + n + 1);
	if (!arr)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		arr[i] = s2[j];
	}
	arr[i] = '\0';
	return (arr);
}

