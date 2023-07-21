/**
 * _isupper - function to check if a charactere is upper or not
 * @c: the charactere to check in ascii value
 * Return: 1 if c is upper otherwise 0
*/
int _isupper(int c) /*c is the caracter in ascii value to check */
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
