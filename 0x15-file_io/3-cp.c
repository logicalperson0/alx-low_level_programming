#include "main.h"

/**
 * errors - func that prints error to STDERR
 * @fdfrom: parameter for file_from
 * @fdto: parameter for file_to
 * @args: for argv
 * void func
 */
void errors(int fdfrom, int fdto, char *args[])
{
	if (fdfrom == -1)
	{
		dprintf(2, "Error: Can't read from file %s", args[1]);
		exit(98);
	}

	if (fdto == -1)
	{
		dprintf(2, "Error: Can't write to %s", args[2]);
		exit(99);
	}
}

/**
 * close_err - func that prints error to STDERR
 * @closefrom: close file_from
 * @closeto: close file_to
 * @fdfrom: parameter
 * @fdto: parameter
 * void func
 */
void close_err(int closefrom, int closeto, int fdfrom)
{
	if (closefrom == -1 || closeto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom);
		exit(100);
	}
}
/**
 * main - program that copies the content of a file to another file
 * @argc: parameter
 * @argv: parameter
 * Return: 0 for Success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, closefrom, closeto;
	ssize_t r, w;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errors(file_from, file_to, argv);

	r = 1024;
	while (r == 1024)
	{
		r = read(file_from, buff, 1024);
		if (r == -1)
			errors(-1, 0, argv);
		w = write(file_to, buff, r);
		if (w == -1)
			errors(0, -1, argv);
	}

	closefrom = close(file_from);
	if (closefrom == -1)
		close_err(-1, 0, file_from);
	closeto = close(file_to);
	if (closeto == -1)
		close_err(0, -1, file_from);
	return (0);
}
