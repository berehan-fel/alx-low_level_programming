#include <stdlib.h>
/**
 * create_words - create an array of pointers to strings.
 * @s: the string to split
 *
 * Return: an array of pointers.
 */

char **create_words(char *s)
{
	char **words;
	int i, word_count = 0;

	if (s == NULL || *s == '\0')
		return (NULL);

	for (i = 0; s[i]; i++)
	{
		if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
			word_count++;
	}

	if (word_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	return (words);
}

/**
 * strtow - splits a string into words.
 * @str: the string to split.
 *
 * Return: a vector of words that are split.
 */

char **strtow(char *str)
{
	char **words;
	int i, j, index, word_len;

	words = create_words(str);
	if (words == NULL)
		return (NULL);
	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			word_len = 0;
			index = i;
			while (str[index] != ' ' && str[index])
			{
				word_len++;
				index++;
			}
			words[j] = malloc(sizeof(char) * (word_len + 1));
			if (words[j] == NULL)
			{
				for (i = 0; i < j; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}
			for (index = 0; index < word_len; index++)
				words[j][index] = str[i + index];

			words[j++][word_len] = '\0';
			i += word_len;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (words);
}
