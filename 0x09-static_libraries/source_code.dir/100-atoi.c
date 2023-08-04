#include "main.h"
/**
 *is_space - check if the current charactere is a space
 *@c: charactere variable
 *Return: 1 if c is a space, 0 otherwise
*/
int is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\f' || c == '\v')
	{
		return (1);
	}
	return (0);
}
/**
 *_atoi - convert a string number into integers number
 *@s: string variable contain a number
 *Return: return the result of convertion
*/

int _atoi(char *s)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (is_space(s[i]))
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (_isdigit(s[i]))
	{
		result += s[i] - '0';
		if (_isdigit(s[i + 1]))
			result *= 10;
		i++;
	}
	return (result * sign);
}
