/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string whose prefix substring length to find.
 * @accept: the bytes which the prefix should consist of.
 *
 * Return: the length of the substring.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, found;
	unsigned int n = 0;

	for (i = 0; s[i]; i++)
	{
		found = 0;

		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				found = 1;
				break;
			}
		}
		if (!found)
			break;
	}
	return (n);
}
