/**
 * _strchr - locates a character in a string.
 * @s: the string in which to seach for a character.
 * @c: the character to search.
 *
 * Return: a pointer to the first occurrence of the character c,
 *         or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
