#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = i; k <= '9'; k++)
			{
				if (k > i)
					l = '0';
				else
					l = j + 1;
				for (; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != '9' || j != '8')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
