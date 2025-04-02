#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct handle_print - handles printing of several data types.
 * @data_type: holds info on the data type to print.
 * @f: a function that handles printing of the specific data type.
 */

typedef struct handle_print
{
	char data_type;
	void (*f)(va_list list, char *s);
} printer;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
