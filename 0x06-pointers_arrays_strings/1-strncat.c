/**
 * _strncat - concatenates two strings.
 * @src: the source string from which to copy.
 * @dest: the destination string to which to copy.
 * @n: number of bytes to copy.
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	for (len = 0; src[len]; len++)
		;
	for (j = 0; dest[j]; j++)
		;
	if (len < n)
		n = len;
	for (i = 0; i < n; i++)
		dest[j++] = src[i];
	dest[j] = 0;
	return (dest);
}
