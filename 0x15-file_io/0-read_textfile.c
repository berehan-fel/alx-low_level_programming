#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file from which to read
 * @letters: the number of bytes to read
 *
 * Return: the actual number of bytes read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_byte, written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	read_byte = read(fd, buffer, letters);
	if (read_byte == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, read_byte);
	if (written == -1 || written != read_byte)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (written);
}
