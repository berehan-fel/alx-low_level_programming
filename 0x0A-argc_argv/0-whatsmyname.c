#include "main.h"

/**
 * main - prints its name followed by a new line.
 * @ac: number of command line arguments passed to the program.
 * @av: a vector of command line arguements passed to the program.
 *
 * Return: always 0 (success).
 */

int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", av[0]);
	return (0);
}
