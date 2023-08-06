#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - check if a charcatere is a digit
 * @c: charactere to be checked
 * Return: 1 if c is digit, 0 otherwise
*/
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * main - program that adds positive numbers.
 * @argc: argument count
 * @argv: argument value
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int i, result, flag, j;

	result = 0;
	flag = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *current_arg = argv[i];

			j = 0;
			while (current_arg[j])
			{
				if (!is_digit(current_arg[j]))
				{
					printf("Error\n");
					flag = 0;
					break;
				}
				j++;
			}
			if (flag)
				result += atoi(current_arg);
			else
				break;
		}
	}
	if (flag)
		printf("%d\n", result);
	return (0);
}




