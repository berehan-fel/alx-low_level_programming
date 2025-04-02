#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list list;

	if (separator == NULL)
		separator = "";
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);
		if (i % n)
			printf("%s", separator);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
	}
	printf("\n");
}
