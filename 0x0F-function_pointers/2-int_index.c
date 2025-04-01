#include <stdlib.h>
/**
 * int_index - searches for an integer inside an array.
 * @array: the array to search in.
 * @size: number of elements of the array.
 * @cmp: the function to implement indexing.
 *
 * Return: index of the first match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
