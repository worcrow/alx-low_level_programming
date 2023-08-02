#include "main.h"

/**
 *loop_to_end - travers the string until the last charactere
 *@str: string to be traversed
 *Return: return the last charctere of str
*/

char *loop_to_end(char *str)
{
	if (*(str + 1) == '\0')
		return (str);
	return (loop_to_end(++str));
}

/**
 *compare_str_rev - compare the string with it's reversed
 *@s: string to be compared
 *@str: the reversed string of str
 *Return: 1 if s is the same as str, 0 otherwise
*/

int compare_str_rev(char *s, char *str)
{
	if (*s != *str)
		return (0);
	if (*(s + 1) == '\0' && *s == *str)
		return (1);
	return (compare_str_rev(++s, --str));
}

/**
 *is_palindrome - check if the string is a palindrome
 *@s: string to be checked in
 *Return: 1 if s is a palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
	char *str;
	int is_palindrome;

	str = s;
	str = loop_to_end(str);
	is_palindrome = compare_str_rev(s, str);
	return (is_palindrome);
}

