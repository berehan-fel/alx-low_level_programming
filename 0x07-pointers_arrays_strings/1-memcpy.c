/**
 * _memcpy - copies memory area.
 * @n: number of bytes to copy.
 * @src: memory area from which to copy.
 * @dest: destination area to which to copy.
 *
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
