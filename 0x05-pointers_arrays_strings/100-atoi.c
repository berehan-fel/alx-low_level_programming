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
	int digit, flag = 0, flag2 = 0, sign = 0;

	for (i = 0; s[i]; i++)
	{
		if (!_isdigit(s[i]))
		{
			if (flag == 1)
				break;
			if (s[i] == '-')
				sign++;
		}

		if (_isdigit(s[i]))
		{
			digit = (s[i] - '0');
			num = num * mul;
			if (sign % 2 && flag2 == 0)
			{
				num *= -1;
				flag2 = 1;
			}
			if (sign % 2)
				digit *= -1;
			num += digit;
			flag = 1;
		}

	}
	return (num);
}
