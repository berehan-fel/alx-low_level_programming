#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @s: the string whose length to find
 *
 * Return: the length of a string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * _strcat - concatenates two strings appending the source string to the
 *           destination string, overwriting the terminating null byte at
 *           the end of destinations and then adds a terminating null byte.
 * @src: the source string.
 * @dest: the destination string.
 *
 * Return: pointer to the destination string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i]; i++)
		;
	for (j = 0; dest[j]; j++)
		;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];
	src[i] = 0;
	return (dest);
}
/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: the number of command line arguments passed to the program.
 * @av: a vector of the command line arguments.
 *
 * Return: a pointer to the new string or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, j = 0, len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += (_strlen(av[i]) + 1);

	s = malloc(sizeof(char) * len + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		_strcat(s, av[i]);
		j += _strlen(av[i]);
		s[j++] = '\n';
	}
	s[j] = 0;
	return (s);
}
