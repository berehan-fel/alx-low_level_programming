/**
 * _memset - fills a memory with a constant byte.
 * @b: the byte to fill memory with.
 * @n: how many bytes of memory to fill.
 * @s: pointer to memory area.
 *
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
