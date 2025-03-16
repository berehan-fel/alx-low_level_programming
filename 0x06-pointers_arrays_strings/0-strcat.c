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
