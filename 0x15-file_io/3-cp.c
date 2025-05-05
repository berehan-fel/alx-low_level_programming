#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
/**
 * cp - copies data from file pointed to by fd_src to file pointed by fd_to.
 * @fd_src: file descriptor for the source file.
 * @fd_to: file descriptor for the destination file.
 * @av: a vector containing the program's command line arguments.
 */
void cp(int fd_src, int fd_to, char **av)
{
	ssize_t byte_read, byte_written;
	char buffer[1024];

	do {
		byte_read = read(fd_src, buffer, sizeof(buffer));
		if (byte_read == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			close(fd_src);
			close(fd_to);
			exit(98);
		}
		if (byte_read == 0)
			break;

		byte_written = write(fd_to, buffer, byte_read);
		if (byte_written == -1 || (byte_written != byte_read))
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(fd_src);
			close(fd_to);
			exit(99);
		}
	} while (1);
}
/**
 * main - copies the content of a file to another.
 * @ac: the number of command line arguments passed to the program.
 * @av: a vector of the program's command line arguments.
 *
 * Return: always 0 on success.
 */
int main(int ac, char **av)
{
	int fd_src, fd_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_src = open(av[1], O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close(fd_src);
		exit(99);
	}

	cp(fd_src, fd_to, av);

	if (close(fd_src) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
