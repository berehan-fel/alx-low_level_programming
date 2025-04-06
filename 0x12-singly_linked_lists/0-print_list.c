#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: a pointer to the head of the list.
 *
 * Description: If str is NULL, print [0] (nil)
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		n++;
	}

	return (n);
}
