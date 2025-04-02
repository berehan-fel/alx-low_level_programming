#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a character.
 * @list: a va_list containing the next argument.
 */

void print_char(va_list list)
{
	char c = va_arg(list, int);

	printf("%c", c);
}

/**
 * print_int - prints an integer.
 * @list: a va_list containing the next argument.
 */

void print_int(va_list list)
{
	int n = va_arg(list, int);

	printf("%d", n);
}

/**
 * print_float - prints a floating point number.
 * @list: a va_list containing the next argument.
 */

void print_float(va_list list)
{
	float f = va_arg(list, double);

	printf("%f", f);
}

/**
 * print_string - prints a string.
 * @list: a va_list containing the next argument.
 */

void print_string(va_list list)
{
	char *s = va_arg(list, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
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
				printf("%s", sep);
				p1[j].f(list);
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
