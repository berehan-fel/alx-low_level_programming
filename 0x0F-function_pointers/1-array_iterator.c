#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter,
 *                  on each element of an array.
 * @array: the array.
 * @size: size of the array.
 * @action: a function to operate on the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
