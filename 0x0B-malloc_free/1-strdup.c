#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains copy of the string given as a parameter.
 * @str: the parameter string.
 *
 * Return: Pointer to the newly allocated memory or NULL on failure.
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int len;


	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	while (len--)
		s[len] = str[len];
	return (s);
}
