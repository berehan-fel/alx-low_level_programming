#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print.
 */

void print_number(int n)
{
	unsigned int divisor = 1;
	unsigned int tmp;

	if (n < 0)
		n *= -1;
	tmp = n;

	while (tmp / 10)
	{
		divisor *= 10;
		tmp /= 10;
	}

	while (divisor)
	{
		_putchar(n / divisor + '0');
		n %= divisor;
		divisor /= 10;
	}
}
