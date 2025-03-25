#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *                and initializes it with a specific char.
 * @size: the number of array elements to create.
 * @c: the character with which to initialize the array.
 *
 * Return: a pointer to the array, NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	if (size <= 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	while (size--)
		*(s + size) = c;
	return (s);
}
