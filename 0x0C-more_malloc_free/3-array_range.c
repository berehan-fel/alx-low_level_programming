#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minimum value of the array element.
 * @max: the maximum value of the array element.
 *
 * Return: pointer to the created array.
 */

int *array_range(int min, int max)
{
	int *array;
	int i, num;

	if (min > max)
		return (NULL);
	num = max - min + 1;

	array = malloc(sizeof(int) * num);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < num; i++)
		array[i] = min + i;
	return (array);
}
