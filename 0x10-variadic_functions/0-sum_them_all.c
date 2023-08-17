#include <stdarg.h>

/**
 * sum_them_all - variadic function for sum all numbers given as argument
 * @n: number of argument
 * @...: arguments
 * Return: the sum of the numbers, or 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
}

