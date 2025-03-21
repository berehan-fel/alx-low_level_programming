#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks for a digit. (0 through 9)
 * @c: the variable to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert to integer.
 *
 * Return: the converted integer.
 */

int _atoi(char *s)
{
	int i, mul = 10;
	int num = 0;
	int digit, flag = 0, sign = 0;

	for (i = 0; s[i]; i++)
	{
		if (!_isdigit(s[i]))
		{
			if (flag == 1)
				break;
			if (s[i] == '-')
				sign++;
		}

		if (_isdigit(s[i]))
		{
			digit = (s[i] - '0');
			num = num * mul;

			if (sign % 2)
				digit *= -1;
			num += digit;
			flag = 1;
		}
	}
	return (num);
}
/**
 * main - multiplies two numbers
 * @argc: the number of command line arguments passed to the program.
 * @argv: a vector of the command line arguments.
 *
 * Return: always 0 (success).
 */
int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
