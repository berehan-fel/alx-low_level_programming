#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line.
 * @s: the string to pint
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

