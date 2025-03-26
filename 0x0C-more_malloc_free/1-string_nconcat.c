#include <stdlib.h>

/**
 * _strlen - finds the length of a string.
 * @s: the string whose length to determine.
 *
 * Return: length.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: on of the string to concatenate.
 * @s2: the other string to concatenate.
 * @n: concatenates n bytes of s2.
 *
 * Return: point to a newly allocated space in memory, which contains s1,
 *         followed by the first n bytes of s2, and null terminated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (len2 >= n)
		len2 = n;

	s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < len2; j++)
		s[i++] = s2[j];

	s[i] = '\0';
	return (s);
}
