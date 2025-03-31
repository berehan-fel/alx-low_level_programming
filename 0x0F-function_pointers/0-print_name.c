#include <stdlib.h>
/**
 * print_name - prints a name.
 * @name: the name to print.
 * @f: the format according to which to print name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
