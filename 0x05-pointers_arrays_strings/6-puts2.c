#include "main.h"

/**
 * puts2 - prints every other character of a string starting with the first,
 *         character followed by a new line.
 * @str: the string to be printed accordingly.
 */

void puts2(char *str)
{
	int i, len;

	for (len = 0; str[len]; len++)
		;
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
