#include "main.h"

/**
 * read_textfile - func  that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: parameter
 * @letters: parameter
 *
 * Return: num of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t r, w;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	close(fd);
	free(buff);

	return (w);
}
