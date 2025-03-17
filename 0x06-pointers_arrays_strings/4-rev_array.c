/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array to reverse.
 * @n: the number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[--n];
		a[n] = tmp;
	}
}
