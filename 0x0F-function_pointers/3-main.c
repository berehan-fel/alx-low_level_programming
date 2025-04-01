#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - performs operation.
 * @ac: the number of command line arguments passed to the program.
 * @av: a vector of the command line arguments.
 *
 * Return: Always 0 (success)
 */

int main(int ac, char **av)
{
	int (*f)(int, int);
	int result;
	int num[2];
	char *s;

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}

	num[0] = atoi(av[1]);
	num[1] = atoi(av[3]);
	s = av[2];

	if ((!strcmp(s, "/") || !strcmp(s, "%")) && num[1] == 0)
	{
		printf("Error\n");
		return (100);
	}
	if (get_op_func(s) == NULL)
	{
		printf("Error\n");
		return (99);
	}

	f = get_op_func(s);
	result = f(num[0], num[1]);
	printf("%d\n", result);

	return (0);
}
