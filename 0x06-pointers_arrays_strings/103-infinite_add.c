/**
 * _strlen - determines the length of a string.
 * @s: the string whose length to compute.
 *
 * Return: the string length.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * todigit - convert characters to digit.
 * @c: the character to convert.
 *
 * Return: a digit
 */

int todigit(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else
		return (0);
}

/**
 * infinite_add - adds two numbers.
 * @n1: one of the numbers in string format.
 * @n2: the other number in string format.
 * @r: the buffer the function will use to store the result.
 * @size_r: size of buffer r.
 *
 * Return: the result of addition in string format.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = _strlen(n1);
	int len2 = _strlen(n2);
	int i = len1 - 1;
	int j = len2 - 1;
	int carry = 0, k = size_r - 2;
	int sum, digit1, digit2;

	if (size_r < (len1 + 1) || size_r < (len2 + 1))
		return (0);

	r[size_r - 1] = '\0';
	while (i >= 0 || j >= 0)
	{
		if (i >= 0)
			digit1 = todigit(n1[i]);
		else
			digit1 = 0;
		if (j >= 0)
			digit2 = todigit(n2[j]);
		else
			digit2 = 0;
		sum = digit1 + digit2 + carry;
		r[k] = (sum % 10) + '0';
		carry = sum / 10;
		i--;
		j--;
		k--;
	}
	if (carry == 0)
		return (r + k + 1);
	else if (carry > 0 && k < 0)
		return (0);
	else if (carry > 0  && k >= 0)
	{
		r[k] = carry + '0';
		return (r + k);
	}
	return (0);
}
