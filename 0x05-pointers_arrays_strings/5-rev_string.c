#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string which is to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	int i, j, len;

	for (len = 0; s[len]; len++)
		;
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
