#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#include <stdio.h>
/**
 *main - program that print the number of argument
 *@argc: argument count
 *@argv: argument value
 *Return: always 0
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
#pragma GCC diagnostic pop
