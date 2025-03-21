#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @ac: the number of command line arguments passed to the program.
 * @av: a vector of the command line arguments.
 *
 * Return: Always 0 (success).
 */

int main(int ac, char **av __attribute__((unused)))
{
	printf("%d\n", ac - 1);
	return (0);
}
