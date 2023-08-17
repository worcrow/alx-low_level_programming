#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print number separated
 * @separator: string that separte numbers
 * @n: argument number of a variadic function
 * @...: variadic function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i + 1 != n)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
