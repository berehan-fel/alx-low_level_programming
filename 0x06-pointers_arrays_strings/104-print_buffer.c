#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - a function that prints the contents of size bytes of a buffer
 * @b: pointer to the buffer to print.
 * @size: number of bytes to print per line.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");
			if (j % 2)
				printf(" ");

		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (isprint(b[i + j]))
					printf("%c", b[i + j]);
				else
					printf(".");
			}
			else
				break;
		}
		printf("\n");
	}
}
