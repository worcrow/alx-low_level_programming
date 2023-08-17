#include "3-calc.h"

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
	int (*get_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[argc - 3]);
	op = argv[argc - 2];
	b  = atoi(argv[argc - 1]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	get_op = get_op_func(op);
	printf("%d\n", get_op(a, b));
	return (0);
}
