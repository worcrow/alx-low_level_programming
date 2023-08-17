#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print the string separated
 * @separator: string that separate the strings
 * @n: argument number of the variadic function
 * @...: variadic function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *temp;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		temp = va_arg(ap, char *);
		if (temp == NULL)
			temp = "(nil)";
		printf("%s", temp);
		if (i + 1 != n)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
