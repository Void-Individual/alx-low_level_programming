#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of file to be created
 * @text_content: null ended string to write to the file
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		perror("Error opening file");
		return (-1);
	}

	if (text_content != NULL)
		while (text_content[len] != '\0')
			len++;

	wr = write(fd, text_content, len);
	if (wr < 0 || wr != len)
	{
		perror("Error writing in file");
		return (-1);
	}
	else
		close(fd);

	return (1);
}
