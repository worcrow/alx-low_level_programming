#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the path of the file to be read and printed
 * @letters: bytes to be read and printed
 * Return: actual number of letters it could read and print, or 0 if it failed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count, char_read;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	buff = malloc(letters);
	if (fd < 0 || buff == NULL)
		return (0);
	char_read = read(fd, buff, letters);
	if (char_read < 0)
	{
		close(fd);
		free(buff);
		return (0);
	}
	count = write(STDOUT_FILENO, buff, char_read);
	close(fd);
	return (count);
}
