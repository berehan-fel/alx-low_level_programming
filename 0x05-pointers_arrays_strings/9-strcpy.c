/**
 * _strcpy - copies the string pointed to by src,
 *           including the terminating null byte (\0),
 *           to the buffer pointed to by dest.
 * @dest: the destination buffer.
 * @src: the source buffer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len]; len++)
		;
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}
