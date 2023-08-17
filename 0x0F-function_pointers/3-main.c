#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - make calculation based on operation given as input
 * @argc: number of argument passed to main
 * @argv: argument value passed to main
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *op;
	char c;
	int (*get_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b  = atoi(argv[3]);
	c = op[0];

	if (c != '+' && c != '-' && c != '*' && c != '/' && c != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((c == '/' || c == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	get_op = get_op_func(op);
	printf("%d\n", get_op(a, b));
	return (0);
}
