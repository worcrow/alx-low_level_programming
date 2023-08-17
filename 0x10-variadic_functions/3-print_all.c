#include "variadic_functions.h"

/**
 * print_all - print argument based on their format
 * @format: string indicating the format of each argument
 * @...: variadic function
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	char *temp;
	char c;
	const char *fmt = format;
	int flag;

	va_start(ap, format);
	while (*fmt)
	{
		flag = 0;
		switch (*fmt++)
		{
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%c", c);
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				flag = 1;
				break;
			case 's':
				temp = va_arg(ap, char *);
				if (temp == NULL)
					temp = "(nil)";
				printf("%s", temp);
				flag = 1;
				break;
		}
		if (*fmt != '\0' && flag)
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
