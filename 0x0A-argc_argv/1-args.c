#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: the number of command line arguments passed to the program.
 * @argv: a vector of the command line arguments.
 *
 * Return: Always 0 (success).
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
