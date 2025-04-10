#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int i;
	int started = 0;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if (n & (1UL << i))
		{
			started = 1;
			_putchar('1');
		}
		else if (started)
		{
			_putchar('0');
		}
	}
	if (!started)
		_putchar('0');
}
