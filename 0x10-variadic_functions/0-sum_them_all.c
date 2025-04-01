#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of parameters passed to the function.
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	return (sum);
}
