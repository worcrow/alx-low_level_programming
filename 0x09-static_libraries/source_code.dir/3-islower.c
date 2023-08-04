/**
 *_islower - check if a charcatere is lower case
 *@c: charactere to be checked
 *Return: 1 if c is lower, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
