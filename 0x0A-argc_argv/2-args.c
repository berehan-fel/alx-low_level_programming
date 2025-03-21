#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: the number of command line arguments passed to the program.
 * @argv: a vector of the command line arguments.
 *
 * Return: always 0 (success).
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
