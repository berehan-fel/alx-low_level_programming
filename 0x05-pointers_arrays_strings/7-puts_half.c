#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line.
 * @str: the string to print.
 */

void puts_half(char *str)
{
	int len, i;

	for (len = 0; str[len]; len++)
		;
	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len / 2) + 1;
	for (; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
