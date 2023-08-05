#include "main.h"
/**
 *main - print the name of the program
 *@argc: argument count
 *@argv: argument value
 *Return: always 0
*/
int main(int argc, char *argv[])
{
	_puts(argv[argc - 1]);
	return (0);
}
