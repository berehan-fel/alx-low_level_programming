/**
 * _isdigit - checks for a digit. (0 through 9)
 * @c: the variable to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert to integer.
 *
 * Return: the converted integer.
 */

int _atoi(char *s)
{
	int i, mul = 10;
	int num = 0;
	int flag = 0, sign = 1;

	for (i = 0; s[i]; i++)
	{
		if (!_isdigit(s[i]))
		{
			if (flag == 1)
				break;
			if (s[i] == '+')
				sign *= 1;
			if (s[i] == '-')
				sign *= -1;
		}

		if (_isdigit(s[i]))
		{
			flag = 1;
			num = (num * mul) + (s[i] - 48);
		}

	}
	num *= sign;
	return (num);
}
