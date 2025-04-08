#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: points to the first node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
