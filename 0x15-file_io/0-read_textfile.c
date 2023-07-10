#include "main.h"

/**
 * read_textfile - function that reads txt from a file
 *	it prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of leters to be read and printed
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wrt;
	int fd;
	char *bf;

	if (filename == NULL)
	{
		return (0);
	}
	bf = malloc(sizeof(char) * (letters));
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	rd = read(fd, bf, letters);
	wrt = write(STDOUT_FILENO, bf, rd);

	close(fd);

	free(bf);

	return (wrt);
}
