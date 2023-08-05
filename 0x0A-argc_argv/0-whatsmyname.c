#include "main.h"
#include <stdio.h>
/**
 *main - print the name of the program
 *@argc: argument count
 *@argv: argument value
 *Return: always 0
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s", argv[0]);
	printf("\n");
	return (0);
}
