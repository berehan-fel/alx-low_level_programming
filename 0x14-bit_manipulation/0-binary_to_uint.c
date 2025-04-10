#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the binary number in string form
 *
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			num = (num << 1) | (b[i] - '0');
		else
			return (0);
	}
	return (num);
}
