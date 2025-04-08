#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - gives the number of elements in a linked listint_t list
 * @h: points to the first node
 *
 * Return: the number of elements (nodes)
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
