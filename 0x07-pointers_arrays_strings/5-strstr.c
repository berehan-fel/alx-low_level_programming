/**
 * _strstr - locates a substring.
 * @needle: the first occurrence of the string to find.
 * @haystack: the string in which to locate 'needle'
 *
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, tmp;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		j = 0;

		if (haystack[i] == needle[j])
		{
			tmp = i;

			for (; needle[j] && haystack[tmp]; j++, tmp++)
			{
				if (haystack[tmp] != needle[j])
					break;
			}
			if (!needle[j])
				return (haystack + i);
		}
	}
	return (0);
}
