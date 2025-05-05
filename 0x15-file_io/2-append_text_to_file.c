#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the file to which to append data.
 * @text_content: the data to append.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t i, len = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			len++;

		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	return (1);
}
