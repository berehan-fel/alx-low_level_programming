#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *               followed by a new line
 * @a : the array to print.
 * @n: the number of array elements to print.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
