/**
 * _strpbrk - locates the first occurrence in the string s,
 *             of any of the bytes in the string accept.
 * @accept: the set of bytes of whose occurrence to look.
 * @s: locate the bytes of accept in s.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *str = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (str);
}
