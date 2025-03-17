/**
 * _strncpy - copies a string.
 * @dest: the buffer to which to copy.
 * @src: the source from which to copy.
 * @n: the number of bytes to copy.
 *
 * Return: pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

	for (len = 0; src[len]; len++)
		;
	if (len < n)
	{
		for (i = 0; i < len; i++)
			dest[i] = src[i];
		for (; i < n; i++)
			dest[i] = 0;
	}
	else
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	return (dest);
}
