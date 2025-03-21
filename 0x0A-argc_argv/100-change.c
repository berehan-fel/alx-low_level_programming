#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *        to make change for an amount of money.
 * @argc: the number of command line arguments passed to the program.
 * @argv: a vector of the command line arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int cents, change = 0;
	unsigned int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < sizeof(coins) / sizeof(coins[0]) && cents > 0; i++)
	{
		change += (cents / coins[i]);
		cents %= coins[i];
	}
	printf("%d\n", change);
	return (0);
}
