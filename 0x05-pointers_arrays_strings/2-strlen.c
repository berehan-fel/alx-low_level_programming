/**
 * _strlen - returns the length of a string.
 * @s: the string whose length is to be determined.
 *
 * Return: the length of the string s.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
