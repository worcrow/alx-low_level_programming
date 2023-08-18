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
	int flag;
	int i;

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		flag = 0;
		switch (format[i])
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
				printf("%f", va_arg(ap, double));
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
		if (format[i + 1] != '\0' && flag)
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
