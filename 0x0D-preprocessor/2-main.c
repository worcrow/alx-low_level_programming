/**
 * print_string - print the string given as argument to the stdout
 * @str: string to be printed
*/

void print_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - print the name of the current file
 * Return: always 0
*/

int main(void)
{
	char name_file[] = __FILE__;

	print_string(name_file);
	return (0);
}
