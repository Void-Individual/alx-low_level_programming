#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: pointer to file address
 * @letters: word count to be read
 * Return: actual number of letters it could read and print
 * else if file can't be opened or read, or if filename is null
 * or if write fails, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *file;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (0);
	}
	file = malloc(sizeof(char) * letters);
	if (file == NULL)
	{
		perror("Error with memory allocation");
		close(fd);
		return (0);
	}
	rd = read(fd, file, letters);
	if (rd < 0)
	{
		perror("Error reading from file");
		free(file);
		close(fd);
		return (0);
	}
	wr = write(STDOUT_FILENO, file, rd);
	if (wr < 0 || wr != rd)
	{
		perror("Error writing to standard output");
		free(file);
		close(fd);
		return (0);
	}
	free(file);
	close(fd);
	return (rd);
}
