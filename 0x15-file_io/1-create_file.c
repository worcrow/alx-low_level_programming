#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: content to be write into the file
 * Return: 1 if the function succeed, otherwise -1
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int er_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	while (text_content && *text_content != '\0')
	{
		er_write = write(fd, text_content, 1);
		if (er_write < 0)
		{
			close(fd);
			return (-1);
		}
		text_content++;
	}
	close(fd);
	return (1);
}
