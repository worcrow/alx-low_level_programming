/**
 * _isdigit - check if c is digit or not
 *@c: number to check in ascii value
 *Return: 1 if c is a digit otherwise 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
