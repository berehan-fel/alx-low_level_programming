#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n: the number of integers passed tp the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, tmp;
	va_list list;

	if (separator == 0)
		separator = "";

	va_start(list, n);

	for (i = 1; i <= n; i++)
	{
		tmp = va_arg(list, int);
		if (i < n)
			printf("%d%s", tmp, separator);
		else
			printf("%d", tmp);
	}
	printf("\n");
}
