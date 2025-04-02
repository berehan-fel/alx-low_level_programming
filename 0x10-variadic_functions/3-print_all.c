#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a character.
 * @list: a va_list containing the next argument.
 * @separator: a string that separates words.
 */

void print_char(va_list list, char *separator)
{
	char c = va_arg(list, int);

	printf("%s%c", separator, c);
}

/**
 * print_int - prints an integer.
 * @list: a va_list containing the next argument.
 * @separator: a string that separates words.
 */

void print_int(va_list list, char *separator)
{
	int n = va_arg(list, int);

	printf("%s%d", separator, n);
}

/**
 * print_float - prints a floating point number.
 * @list: a va_list containing the next argument.
 * @separator: a string that separates words.
 */

void print_float(va_list list, char *separator)
{
	float f = va_arg(list, double);

	printf("%s%f", separator, f);
}

/**
 * print_string - prints a string.
 * @list: a va_list containing the next argument.
 * @separator: a string that separates words.
 */

void print_string(va_list list, char *separator)
{
	char *s = va_arg(list, char *);

	if (s == NULL)
	{
		printf("%s(nil)", separator);
		return;
	}
	printf("%s%s", separator, s);
}

/**
 * print_all - determines what data type to print and delegates it to the
 *             appropriate function.
 * @format: the data types that can be printed.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, j = 0;
	printer p1[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, 0}
	};
	char *sep = "";

	va_start(list, format);

	while (format[i])
	{
		j = 0;
		while (p1[j].data_type != 0)
		{
			if (format[i] == p1[j].data_type)
			{
				p1[j].f(list, sep);
				break;
			}
			j++;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(list);
}
