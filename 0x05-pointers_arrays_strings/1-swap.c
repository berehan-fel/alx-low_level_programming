/**
 * swap_int - swaps the values of two integers.
 * @a: one of the integers to be swapped.
 * @b: the other integer to be swapped.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
