/**
 * _strcmp - compares two strings.
 * @s1: one of the strings to compare.
 * @s2: the other string to compare.
 *
 * Return: 0 if the strings are equal.
 *         negative If str1 comes before str2 lexicographically.
 *         positive If str1 comes after str2 lexicographically.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i];  i++)
	{
		if (s1[i] - s2[i] == 0)
			continue;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
