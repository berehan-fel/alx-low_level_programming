#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list list;

	va_start(list, n);

	while (n)
	{
		sum += va_arg(list, int);
		n--;
	}
	return (sum);
}
