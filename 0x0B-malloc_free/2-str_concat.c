#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: one of the string to concatenate.
 * @s2: the other string to concatenate.
 *
 * Return: a pointer to a newly allocated space in memory which contains,
 *         the contents of s1, followed by the contents of s2,
 *         and null terminated. Or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1, len2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j <= len2; j++)
		s[i++] = s2[j];
	return (s);
}
